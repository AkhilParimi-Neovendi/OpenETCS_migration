//     Project: openETCS libenvsim
//      Module: scade / scade_remote.c
// Description: Implementation of the init and cycle functions for the SCADE RemoteXXX operators
//
// History:
// - 06.10.15, J. Kastner: initial version
// - 11.10.15, J. Kastner: add support for RemoteGUI
// - 20.10.15, J. Kastner: add support for new EVC-DMI-Bus
// - 28.10.15, J. Kastner: extend remote_gui_cycle() for new SimCtrl features
// - 10.11.15, J. Kastner: read remote GUI addr/port from env variables ENVSIM_REMOTE_GUI_ADDR/_PORT;
//                         correct bug in dmibus_cycle() (present not set to false when no msg arrviced in this cycle)
// - 12.11.15, J. Kastner: use valid flag for TIU data and remove TIU send data divider
// - 15.12.15, J. Kastner: correct bug in dmibus_cycle / RECEIVE

#ifdef WITH_SCADE
#include "RemoteDMI_EnvSim.h"
#include "RemoteEVC_EnvSim.h"
#include "scade_common.h"
#include "../logging.h"
#include "../tcp.h"
#include "../rcontrol.h"
#include "RemoteGUI_EnvSim.h"
#include "RemoteDMIBus_EnvSim.h"
#include "RemoteEVCBus_EnvSim.h"
#include <stdint.h>

#define REMOTE_DMI_ADDR "127.0.0.1"
#define REMOTE_DMI_PORT1 20001
#define REMOTE_DMI_PORT2 20002
#define REMOTE_GUI_ADDR "127.0.0.1"
#define REMOTE_GUI_PORT 20003

#define SEND_GUIDATA_DIVIDER 10


typedef es_TCPStream STREAM;

STREAM *es_remote_dmi_conn1 = NULL;
STREAM *es_remote_dmi_conn2 = NULL;
STREAM *es_remote_evc_conn1 = NULL;
STREAM *es_remote_evc_conn2 = NULL;
STREAM *es_remote_gui_conn = NULL;
const size_t EVC2DMI_BUSMSG_SIZE = 999*sizeof(int32_t);
const size_t TIU2DMI_STRUCT_SIZE = sizeof(TIU_Input_msg_API_TIU_Pkg);
const size_t DMI2EVC_STRUCT_SIZE = sizeof(DMI_to_EVC_Message_T_API_DMI_Pkg);
const size_t DMI2EVC_BUSMSG_SIZE = 311*sizeof(int32_t);
const size_t EVC2GUI_STRUCT_SIZE = sizeof(EVC_to_GUI_EnvSim);
const size_t GUI2EVC_STRUCT_SIZE = sizeof(GUI_to_EVC_EnvSim);
const size_t EVCTIU_MSG_SIZE = 999*sizeof(int32_t) + sizeof(TIU_Input_msg_API_TIU_Pkg);

char *es_remote_dmi_addr = NULL;
int es_remote_dmi_port1 = 0;
int es_remote_dmi_port2 = 0;
char *es_remote_gui_addr = NULL;
int es_remote_gui_port = 0;


void es_remote_init() {
  static int initialized = 0;
  if(initialized) {
    return;
  }
  initialized = 1;
  es_remote_dmi_addr = getenv("ENVSIM_REMOTE_DMI_ADDR");
  if( es_remote_dmi_addr == NULL ) {
    es_remote_dmi_addr = REMOTE_DMI_ADDR;
  }
  char *tmp = getenv("ENVSIM_REMOTE_DMI_PORT1");
  es_remote_dmi_port1 = tmp==NULL ? REMOTE_DMI_PORT1 : atoi(tmp);
  tmp = getenv("ENVSIM_REMOTE_DMI_PORT2");
  es_remote_dmi_port2 = tmp==NULL ? REMOTE_DMI_PORT2 : atoi(tmp);

  es_remote_gui_addr = getenv("ENVSIM_REMOTE_GUI_ADDR");
  if( es_remote_gui_addr == NULL ) {
    es_remote_gui_addr = REMOTE_GUI_ADDR;
  }
  tmp = getenv("ENVSIM_REMOTE_GUI_PORT");
  es_remote_gui_port =  tmp==NULL ? REMOTE_GUI_PORT : atoi(tmp);


}


void es_remote_flow_control() {
  static bool run = true;
  if( es_remote_dmi_conn1 != NULL && es_remote_dmi_conn2 != NULL ) {
    es_remote_dmi_conn1->run = run;
    if (es_remote_dmi_conn2->nin > 5 && run) {
      LOG_INFO(scade_remote, "stopping remote DMI");
      run = false;
      es_tcp_send(es_remote_dmi_conn1,TCPMSG_STOP,NULL,0);
    }
    else if (es_remote_dmi_conn2->nin <=1 && !run) {
      LOG_INFO(scade_remote, "resuming remote DMI");
      run = true;
      es_tcp_send(es_remote_dmi_conn1,TCPMSG_RUN,NULL,0);
    }
  }
  if( es_remote_evc_conn1 != NULL && es_remote_evc_conn2 != NULL ) {
    es_remote_evc_conn2->run = run;
    if (es_remote_evc_conn1->nin > 5 && run) {
      LOG_INFO(scade_remote, "stopping remote EVC");
      run = false;
      es_tcp_send(es_remote_evc_conn2,TCPMSG_STOP,NULL,0);
    }
    else if (es_remote_evc_conn1->nin <=1 && !run) {
      LOG_INFO(scade_remote,"resuming remote EVC");
      run = true;
      es_tcp_send(es_remote_evc_conn2,TCPMSG_RUN,NULL,0);
    }
  }
}

void es_remote_dmibus_init(outC_RemoteDMIBus_EnvSim *out) {
  es_log_init("envsim_main.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteDMIBus operator");


  // connect to DMI server
  es_remote_dmi_conn1 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteDMI");
    return;
  }
  if( es_tcp_connect(ctx,es_remote_dmi_addr,es_remote_dmi_port1,"dmi_conn1",&es_remote_dmi_conn1) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",es_remote_dmi_addr,es_remote_dmi_port1);
    es_remote_dmi_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for EVC2DMI messages",es_remote_dmi_addr,es_remote_dmi_port1);

  es_remote_dmi_conn2 = NULL;
  if( es_tcp_connect(ctx,es_remote_dmi_addr,es_remote_dmi_port2,"dmi_conn2",&es_remote_dmi_conn2) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",es_remote_dmi_addr,es_remote_dmi_port2);
    es_remote_dmi_conn2 = NULL;
    return;
  }
  else {
    es_remote_dmi_conn2->afterSend = es_remote_flow_control;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for DMI2EVC messages",es_remote_dmi_addr,es_remote_dmi_port2);

}

void es_remote_dmibus_cycle(EVC_to_DMI_Message_int_T_API_DMI_Pkg *evcToDMI, TIU_Input_msg_API_TIU_Pkg *tiuToDMI, outC_RemoteDMIBus_EnvSim *outC) {

  int *in = (int*)evcToDMI;

  // SEND
  if(es_remote_dmi_conn1 != NULL && es_remote_dmi_conn1->socket != INVALID_SOCKET) {
    int send = in[0];
/*
    if(send && tiuToDMI->valid) {
      char buf[EVCTIU_MSG_SIZE];
      memcpy(buf,evcToDMI,EVC2DMI_BUSMSG_SIZE);
      memcpy(buf+EVC2DMI_BUSMSG_SIZE,tiuToDMI,TIU2DMI_STRUCT_SIZE);
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_EVCTIU2DMI, (const char*) buf, EVCTIU_MSG_SIZE);
    }
    else if(tiuToDMI->valid) {
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_TIU2DMI, (const char*) tiuToDMI, TIU2DMI_STRUCT_SIZE);
    }
    else if(send) {
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_EVC2DMI_BUS, (const char *) evcToDMI, EVC2DMI_BUSMSG_SIZE);
    }
 */
    if(send) {
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_EVC2DMI_BUS, (const char *) evcToDMI, EVC2DMI_BUSMSG_SIZE);
    }
    if(tiuToDMI->valid) {
      uint32_t cabSt = tiuToDMI->info.train_status.m_cab_st;
//        LOG_INFO(scade_remote,"cabSt: %d",cabSt);
        es_tcp_send(es_remote_dmi_conn1, TCPMSG_TIUCABSTAT, (const char*)&cabSt, 4);
    }

  }
  // RECEIVE
  outC->dmiToEVC[0] = 0;
  if(es_remote_dmi_conn2 != NULL) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_dmi_conn2,TCPMSG_DMI2EVC_BUS,&msg);
    if( msg != NULL ) {
      if(msg->len != DMI2EVC_BUSMSG_SIZE) {
        LOG_ERROR(scade_remote,"Invalid DMI2EVC message: received %d bytes, expected %d bytes",msg->len,DMI2EVC_BUSMSG_SIZE);
      }
      else {
        memcpy(&outC->dmiToEVC,msg->data,DMI2EVC_BUSMSG_SIZE);

      }
      es_tcp_free_msg(msg);
    }
  }

}


void es_remote_evcbus_init(outC_RemoteEVCBus_EnvSim *out) {
  es_log_init("envsim_dmi.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteEVCBus operator");

  // listen for EVC connections
  es_remote_evc_conn1 = NULL;
  es_remote_evc_conn2 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteEVC");
    return;
  }

  if( es_tcp_listen(ctx,es_remote_dmi_port1,"evc_conn1",&es_remote_evc_conn1) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",es_remote_dmi_port1);
    es_remote_evc_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",es_remote_dmi_port1);

  if( es_tcp_listen(ctx,es_remote_dmi_port2,"evc_conn2",&es_remote_evc_conn2) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",es_remote_dmi_port2);
    es_remote_evc_conn2 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",es_remote_dmi_port2);
}

void es_remote_evcbus_cycle(DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmiToEVC, outC_RemoteEVCBus_EnvSim *outC) {
  static bool run = true;
  int *in = (int*)dmiToEVC;
  int send = in[0];

  // SEND
  if( send && es_remote_evc_conn2 != NULL && es_remote_evc_conn2->client != INVALID_SOCKET) {
    es_tcp_send(es_remote_evc_conn2,TCPMSG_DMI2EVC_BUS,(const char*)dmiToEVC,DMI2EVC_BUSMSG_SIZE);
  }

  // RECEIVE
  outC->evcToDMI[0] = 0;
  outC->tiuToDMI.valid = false;
  if(es_remote_evc_conn1 == NULL) {
    return;
  }

  es_TCPMessage *msg = NULL;
  es_tcp_read(es_remote_evc_conn1, TCPMSG_ANY, &msg);
  if( msg != NULL ) {
    if( msg->id == TCPMSG_EVCTIU2DMI ) {
      if( msg->len != EVCTIU_MSG_SIZE ) {
        LOG_ERROR(scade_remote, "Invalid EVCTIU2DMI message: received %d bytes, expected %d bytes",
                  msg->len, EVCTIU_MSG_SIZE);
      }
      else {

        memcpy(&outC->evcToDMI,msg->data+8,EVC2DMI_BUSMSG_SIZE);
        memcpy(&outC->tiuToDMI,msg->data+8+EVC2DMI_BUSMSG_SIZE,TIU2DMI_STRUCT_SIZE);
      }
    }
    else if( msg->id == TCPMSG_EVC2DMI_BUS ) {
      if (msg->len != EVC2DMI_BUSMSG_SIZE) {
        LOG_ERROR(scade_remote, "Invalid EVC2DMI message: received %d bytes, expected %d bytes", msg->len,
                  EVC2DMI_BUSMSG_SIZE);
      }
      else {
        memcpy(&outC->evcToDMI, msg->data, EVC2DMI_BUSMSG_SIZE);
      }
    }
    else if( msg->id == TCPMSG_TIU2DMI ) {
      if (msg->len != TIU2DMI_STRUCT_SIZE) {
        LOG_ERROR(scade_remote, "Invalid TIU2DMI message: received %d bytes, expected %d bytes", msg->len,
                  TIU2DMI_STRUCT_SIZE);
      }
      else {
        memcpy(&outC->tiuToDMI, msg->data, TIU2DMI_STRUCT_SIZE);
      }
    }
    else if( msg->id == TCPMSG_TIUCABSTAT ) {
      int cabSt = -1;
      memcpy(&cabSt,msg->data,4);
//      LOG_INFO(scade_remote,"data: %x    cabSt: %d",*(int*)msg->data,cabSt);
      outC->tiuToDMI.info.train_status.m_cab_st = cabSt;
      outC->tiuToDMI.info.train_status.valid = true;
      outC->tiuToDMI.valid = true;
    }
    else {
      LOG_ERROR(scade_remote, "Unsupported message: %d",msg->id);
    }

    LOG_TRACE(scade_remote, "TIU->DMI: valid=%d   m_cab_st: %d",outC->tiuToDMI.valid,outC->tiuToDMI.info.train_status.m_cab_st);
    LOG_TRACE(scade_remote, "EVC->DMI: valid=%d",outC->evcToDMI[0])

    es_tcp_free_msg(msg);
  }

  outC->run = true;
}


extern void es_remote_gui_init(outC_RemoteGUI_EnvSim *out) {
  es_log_init("envsim_main.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteGUI operator");

  // connect to GUI server
  es_remote_gui_conn = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteGUI");
    return;
  }
  if( es_tcp_connect(ctx,es_remote_gui_addr,es_remote_gui_port,"gui_conn",&es_remote_gui_conn) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteGUI server @ %s:%d",es_remote_gui_addr,es_remote_gui_port);
    es_remote_gui_conn = NULL;
    return;
  }

  LOG_INFO(scade_remote,"connected to RemoteGUI server @ %s:%d",es_remote_gui_addr,es_remote_gui_port);

}


extern void es_remote_gui_cycle(EVC_to_GUI_EnvSim *evcToGUI, outC_RemoteGUI_EnvSim *outC) {
  static int cycle = 0;

  // SEND
  if( cycle % SEND_GUIDATA_DIVIDER==0 && es_remote_gui_conn != NULL && es_remote_gui_conn->client != INVALID_SOCKET) {
    es_tcp_send(es_remote_gui_conn,TCPMSG_EVC2GUI,(const char*)evcToGUI,EVC2GUI_STRUCT_SIZE);
  }

  // RECEIVE
  if(es_remote_gui_conn != NULL) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_gui_conn,TCPMSG_ANY,&msg);

    while( msg != NULL ) {
      if( msg->id == TCPMSG_GUI2EVC ) {
        if (msg->len != GUI2EVC_STRUCT_SIZE) {
          LOG_ERROR(scade_remote, "Invalid GUI2EVC message: received %d bytes, expected %d bytes", msg->len,
                    GUI2EVC_STRUCT_SIZE);
        }
        else {
          memcpy(&outC->guiToEVC, msg->data, GUI2EVC_STRUCT_SIZE);
        }
      }
      else {
        es_rcontrol_handle_msg(msg,es_remote_gui_conn);
      }
      es_tcp_free_msg(msg);
      es_tcp_read(es_remote_gui_conn,TCPMSG_ANY,&msg);
    }

  }

  cycle++;
}
#endif
