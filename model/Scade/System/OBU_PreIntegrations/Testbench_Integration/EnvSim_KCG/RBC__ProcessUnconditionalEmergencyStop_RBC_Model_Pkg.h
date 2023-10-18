/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg_H_
#define _RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
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
  kcg_bool /* invalidAck/ */ invalidAck;
  kcg_bool /* validAck/ */ validAck;
  SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM /* UNCONDITIONAL_EMERGENCY_STOP_SM: */ UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  kcg_bool /* UNCONDITIONAL_EMERGENCY_STOP_SM: */ UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  kcg_bool /* UNCONDITIONAL_EMERGENCY_STOP_SM: */ UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  NID_EM /* radioTrackTrainMessageWasSentEmergencyStopId/ */ radioTrackTrainMessageWasSentEmergencyStopId;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */ Context_RadioTrackTrainHeader__Get_NID_EM_1;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */ Context_RadioTrackTrainMessage__GetHeader_3;
  outC_SessionManagement__SetPosData_RBC_Session_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */ Context_SessionManagement__SetPosData_5;
  outC_PosData__Update_RBC_Session_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */ Context_PosData__Update_5;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */ Context_SessionManagement__GetPosData_5;
  outC_RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */ Context_RadioTrainTrackHeader__Get_NID_EM_1;
  outC_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L38=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */ Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */ Context_RadioTrainTrackMessage__GetHeader_3;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */ Context_RadioTrackTrainMessageQueue__TryPut_3;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_3;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */ Context_RadioTrackTrainMessage__GetHeader_1;
  outC_RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */ IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM /* UNCONDITIONAL_EMERGENCY_STOP_SM: */ UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SessionManagement_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:IDLE:_L3/ */ _L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:IDLE:_L4/ */ _L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:IDLE:_L5/ */ _L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L65/ */ _L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L62/ */ _L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L63/ */ _L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L64/ */ _L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L57/ */ _L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueueEntry_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L59/ */ _L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrackTrain_Header_T_TM /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L56/ */ _L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  NID_EM /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L54/ */ _L54_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  CompressedRadioMessage_TM /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L52/ */ _L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:_L3/ */ _L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:_L4/ */ _L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:_L5/ */ _L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L40/ */ _L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L41/ */ _L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  Q_EMERGENCYSTOP /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L38/ */ _L38_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  NID_EM /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27/ */ _L27_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26/ */ _L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L25/ */ _L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  Q_EMERGENCYSTOP /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:qualifierEmergencyStop/ */ qualifierEmergencyStop_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  NID_EM /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:emergencyStopId/ */ emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:else:_L3/ */ _L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:else:_L2/ */ _L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13/ */ _L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L12/ */ _L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  PosData_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11/ */ _L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  PosData_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10/ */ _L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L15/ */ _L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L14/ */ _L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM /* UNCONDITIONAL_EMERGENCY_STOP_SM: */ UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel;
  SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM /* UNCONDITIONAL_EMERGENCY_STOP_SM: */ UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM /* UNCONDITIONAL_EMERGENCY_STOP_SM: */ UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  NID_MESSAGE /* radioTrackTrainMessageId/ */ radioTrackTrainMessageId;
  CompressedRadioMessage_TM /* radioTrackTrainMessage/ */ radioTrackTrainMessage;
  RadioTrackTrainMessageQueue_T /* messageQueue/ */ messageQueue;
  SessionManagement_T /* session/ */ session;
  CompressedRadioMessage_TM /* _L60/ */ _L60;
  Radio_TrackTrain_Header_T_TM /* _L65/ */ _L65;
  CompressedRadioMessage_TM /* _L64/ */ _L64;
  NID_MESSAGE /* _L63/ */ _L63;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L68/ */ _L68;
  NID_MESSAGE /* _L67/ */ _L67;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L66/ */ _L66;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L81/ */ _L81;
  RadioTrackTrainMessageQueue_T /* _L80/ */ _L80;
  RBC_Data_T_RBC_DataBus_Pkg /* _L79/ */ _L79;
  RBC_Data_T_RBC_DataBus_Pkg /* _L78/ */ _L78;
  SessionManagement_T /* _L77/ */ _L77;
  RBC_Data_T_RBC_DataBus_Pkg /* _L75/ */ _L75;
  CompressedRadioMessage_TM /* _L74/ */ _L74;
} outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop/ */
extern void RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC);

extern void RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessUnconditionalEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

