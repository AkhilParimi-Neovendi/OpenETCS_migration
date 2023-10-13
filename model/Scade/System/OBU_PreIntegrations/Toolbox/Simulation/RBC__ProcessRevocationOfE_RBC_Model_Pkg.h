/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _RBC__ProcessRevocationOfE_RBC_Model_Pkg_H_
#define _RBC__ProcessRevocationOfE_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "_105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "_100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "_56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "_55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "_51_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"
#include "_50_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"
#include "RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

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
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */ REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */ _1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */ _2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  kcg_bool /* ackRequired/ */ ackRequired;
  T_TRAIN /* revocationMessageWasSentTimestamp/ */ revocationMessageWasSentTimestamp;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK#2)/ */ Context_RadioTrackTrainHeader__Get_M_ACK_2;
  outC_RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L34=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#10)/ */ Context_RadioTrackTrainMessage__GetHeader_10;
  outC_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */ _3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3;
  outC__55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */ _4_Context_RadioTrackTrainHeader__Get_T_TRAIN_2;
  outC_RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */ _5_Context_RadioTrackTrainMessage__GetHeader_4;
  outC__56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */ Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2;
  outC_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */ Context_RadioTrainTrackMessage__GetHeader_5;
  outC__55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */ _6_Context_RadioTrackTrainHeader__Get_T_TRAIN_3;
  outC_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */ _7_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4;
  outC_RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */ _8_Context_RadioTrackTrainMessage__GetHeader_5;
  outC__50_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L20=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#1)/ */ Context_RadioTrackTrainMessageQueue__TryPut_1;
  outC__51_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L22=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#1)/ */ _9_Context_RadioTrackTrainMessageQueueEntry__Create_1;
  outC_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L60=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */ _10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1;
  outC_RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L61=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */ _11_Context_RadioTrackTrainMessage__GetHeader_1;
  outC__100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */ _12_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1;
  outC_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ _13_Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */ IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */ _14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _2_RadioTrackTrainMessageQueue_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:IDLE:_L3/ */ _L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:IDLE:_L4/ */ _L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  SessionManagement_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:IDLE:_L5/ */ _L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  _2_RadioTrackTrainMessageQueue_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L40/ */ _L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L41/ */ _L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  SessionManagement_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L37/ */ _L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L38/ */ _L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L29/ */ _L29_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L30/ */ _L30_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L31/ */ _L31_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  M_ACK /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L32/ */ _L32_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  M_ACK /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L33/ */ _L33_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  Radio_TrackTrain_Header_T_TM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L34/ */ _L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L35/ */ _L35_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  CompressedRadioMessage_TM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L26/ */ _L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RadioTrackTrainMessageQueueEntry_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L22/ */ _L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  _2_RadioTrackTrainMessageQueue_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L20/ */ _L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  CompressedRadioMessage_TM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L16/ */ _L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L17/ */ _L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L13/ */ _L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  SessionManagement_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L14/ */ _L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  _2_RadioTrackTrainMessageQueue_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L15/ */ _L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  Radio_TrackTrain_Header_T_TM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3/ */ _L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L4/ */ _L4_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  NID_MESSAGE /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L5/ */ _L5_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  NID_MESSAGE /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6/ */ _L6_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L7/ */ _L7_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8/ */ _L8_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L9/ */ _L9_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L30/ */ _L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  CompressedRadioMessage_TM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L31/ */ _L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  SessionManagement_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27/ */ _L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  _2_RadioTrackTrainMessageQueue_T /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L28/ */ _L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L29/ */ _L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  kcg_bool /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L18/ */ _L18_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  NID_MESSAGE /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19/ */ _L19_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20/ */ _L20_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L21/ */ _L21_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  NID_MESSAGE /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22/ */ _L22_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  Radio_TrackTrain_Header_T_TM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23/ */ _L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L24/ */ _L24_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14/ */ _L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L15/ */ _L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16/ */ _L16_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  T_TRAIN /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:acknowledgementMessageTimestamp/ */ acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */ _15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel;
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */ _16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */ _17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  NID_MESSAGE /* radioTrackTrainMessageId/ */ radioTrackTrainMessageId;
  CompressedRadioMessage_TM /* radioTrackTrainMessage/ */ radioTrackTrainMessage;
  _2_RadioTrackTrainMessageQueue_T /* messageQueue/ */ messageQueue;
  SessionManagement_T /* session/ */ session;
  CompressedRadioMessage_TM /* _L58/ */ _L58;
  Radio_TrackTrain_Header_T_TM /* _L61/ */ _L61;
  NID_MESSAGE /* _L60/ */ _L60;
  CompressedRadioMessage_TM /* _L59/ */ _L59;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L68/ */ _L68;
  NID_MESSAGE /* _L67/ */ _L67;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L66/ */ _L66;
  RBC_Data_T_RBC_DataBus_Pkg /* _L81/ */ _L81;
  RBC_Data_T_RBC_DataBus_Pkg /* _L80/ */ _L80;
  _2_RadioTrackTrainMessageQueue_T /* _L79/ */ _L79;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L77/ */ _L77;
  CompressedRadioMessage_TM /* _L76/ */ _L76;
  RBC_Data_T_RBC_DataBus_Pkg /* _L75/ */ _L75;
  SessionManagement_T /* _L74/ */ _L74;
} outC_RBC__ProcessRevocationOfE_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop/ */
extern void RBC__ProcessRevocationOfE_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessRevocationOfE_RBC_Model_Pkg *outC);

extern void RBC__ProcessRevocationOfE_reset_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfE_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessRevocationOfE_init_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfE_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC__ProcessRevocationOfE_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessRevocationOfE_RBC_Model_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

