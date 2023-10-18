/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_init_RadioLib.h"

/* RadioLib::RBC_init/ */
void RBC_init_RadioLib(
  /* Message_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  /* Message_sent/ */
  kcg_bool Message_sent,
  outC_RBC_init_RadioLib *outC)
{
  outC->_L6 = Message_sent;
  outC->_L4 = Trigger_in;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Packets_in);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L2, Message_in);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1.message, &outC->_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1.packets, &outC->_L3);
  outC->_L1.trigger = outC->_L4;
  outC->_L1.message_sent = outC->_L6;
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void RBC_init_init_RadioLib(outC_RBC_init_RadioLib *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L6 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L3.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx].valid = kcg_true;
    outC->_L3.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L3.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int64(0);
  outC->_L2.l_message = kcg_lit_int64(0);
  outC->_L2.t_train = kcg_lit_int64(0);
  outC->_L2.field1 = kcg_lit_int64(0);
  outC->_L2.field2 = kcg_lit_int64(0);
  outC->_L2.field3 = kcg_lit_int64(0);
  outC->_L2.field4 = kcg_lit_int64(0);
  outC->_L2.field5 = kcg_lit_int64(0);
  outC->_L2.field6 = kcg_lit_int64(0);
  outC->_L2.field7 = kcg_lit_int64(0);
  outC->_L2.field8 = kcg_lit_int64(0);
  outC->_L1.message.valid = kcg_true;
  outC->_L1.message.nid_message = kcg_lit_int64(0);
  outC->_L1.message.l_message = kcg_lit_int64(0);
  outC->_L1.message.t_train = kcg_lit_int64(0);
  outC->_L1.message.field1 = kcg_lit_int64(0);
  outC->_L1.message.field2 = kcg_lit_int64(0);
  outC->_L1.message.field3 = kcg_lit_int64(0);
  outC->_L1.message.field4 = kcg_lit_int64(0);
  outC->_L1.message.field5 = kcg_lit_int64(0);
  outC->_L1.message.field6 = kcg_lit_int64(0);
  outC->_L1.message.field7 = kcg_lit_int64(0);
  outC->_L1.message.field8 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L1.trigger = kcg_lit_int64(0);
  outC->_L1.message_sent = kcg_true;
  outC->R_data_out.message.valid = kcg_true;
  outC->R_data_out.message.nid_message = kcg_lit_int64(0);
  outC->R_data_out.message.l_message = kcg_lit_int64(0);
  outC->R_data_out.message.t_train = kcg_lit_int64(0);
  outC->R_data_out.message.field1 = kcg_lit_int64(0);
  outC->R_data_out.message.field2 = kcg_lit_int64(0);
  outC->R_data_out.message.field3 = kcg_lit_int64(0);
  outC->R_data_out.message.field4 = kcg_lit_int64(0);
  outC->R_data_out.message.field5 = kcg_lit_int64(0);
  outC->R_data_out.message.field6 = kcg_lit_int64(0);
  outC->R_data_out.message.field7 = kcg_lit_int64(0);
  outC->R_data_out.message.field8 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->R_data_out.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->R_data_out.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->R_data_out.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->R_data_out.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->R_data_out.trigger = kcg_lit_int64(0);
  outC->R_data_out.message_sent = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_init_reset_RadioLib(outC_RBC_init_RadioLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_init_RadioLib.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

