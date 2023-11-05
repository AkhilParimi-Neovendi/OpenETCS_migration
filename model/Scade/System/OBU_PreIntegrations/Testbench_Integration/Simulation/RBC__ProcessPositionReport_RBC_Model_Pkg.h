/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RBC__ProcessPositionReport_RBC_Model_Pkg_H_
#define _RBC__ProcessPositionReport_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* outDataBus/ */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* outRadioTrainTrackMessage/ */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* outTriggeredRadioTrackTrainMessage/ */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_POSITION_REPORT_SM /* POSITION_REPORT_SM: */ POSITION_REPORT_SM_state_nxt;
  kcg_bool /* POSITION_REPORT_SM: */ POSITION_REPORT_SM_reset_act;
  kcg_bool /* POSITION_REPORT_SM: */ POSITION_REPORT_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SessionManagement__SetPosData_RBC_Session_Pkg /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L5=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */ Context_SessionManagement__SetPosData_1;
  outC_PosData__Update_RBC_Session_Pkg /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L4=(RBC_Session_Pkg::PosData__Update#2)/ */ Context_PosData__Update_2;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#2)/ */ Context_SessionManagement__GetPosData_2;
  outC_RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */ Context_RadioTrainTrackMessage__GetHeader_2;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_POSITION_REPORT_SM /* POSITION_REPORT_SM: */ POSITION_REPORT_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SessionManagement_T /* POSITION_REPORT_SM:IDLE:_L2/ */ _L2_IDLE_POSITION_REPORT_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* POSITION_REPORT_SM:IDLE:_L3/ */ _L3_IDLE_POSITION_REPORT_SM;
  SessionManagement_T /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L8/ */ _L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L9/ */ _L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  SessionManagement_T /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L5/ */ _L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L1/ */ _L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  PosData_T /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L3/ */ _L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  PosData_T /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L4/ */ _L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  SSM_ST_POSITION_REPORT_SM /* POSITION_REPORT_SM: */ POSITION_REPORT_SM_state_sel;
  SSM_TR_POSITION_REPORT_SM /* POSITION_REPORT_SM: */ POSITION_REPORT_SM_fired_strong;
  SSM_TR_POSITION_REPORT_SM /* POSITION_REPORT_SM: */ POSITION_REPORT_SM_fired;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  SessionManagement_T /* session/ */ session;
  NID_MESSAGE /* _L18/ */ _L18;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L17/ */ _L17;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L16/ */ _L16;
  SessionManagement_T /* _L32/ */ _L32;
  RBC_Data_T_RBC_DataBus_Pkg /* _L30/ */ _L30;
  RBC_Data_T_RBC_DataBus_Pkg /* _L29/ */ _L29;
  CompressedRadioMessage_TM /* _L27/ */ _L27;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L25/ */ _L25;
} outC_RBC__ProcessPositionReport_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessPositionReport/ */
extern void RBC__ProcessPositionReport_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC);

extern void RBC__ProcessPositionReport_reset_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessPositionReport_init_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* POSITION_REPORT_SM: */ Context_POSITION_REPORT_SM_reset_nxt;
  kcg_bool /* POSITION_REPORT_SM: */ Context_POSITION_REPORT_SM_reset_act;
  SSM_ST_POSITION_REPORT_SM /* POSITION_REPORT_SM: */ Context_POSITION_REPORT_SM_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_RBC__ProcessPositionReport_RBC_Model_Pkg;

extern void kcg_save_SV_RBC__ProcessPositionReport_RBC_Model_Pkg(
  SV_RBC__ProcessPositionReport_RBC_Model_Pkg *SV,
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC);
extern void kcg_load_SV_RBC__ProcessPositionReport_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC,
  SV_RBC__ProcessPositionReport_RBC_Model_Pkg *SV);



#endif /* _RBC__ProcessPositionReport_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessPositionReport_RBC_Model_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

