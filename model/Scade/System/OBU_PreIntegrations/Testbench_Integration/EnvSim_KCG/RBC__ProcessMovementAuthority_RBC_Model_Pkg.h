/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RBC__ProcessMovementAuthority_RBC_Model_Pkg_H_
#define _RBC__ProcessMovementAuthority_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
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
  kcg_bool /* invalidAcknowledgement/ */ invalidAcknowledgement;
  kcg_bool /* validAcknowledgement/ */ validAcknowledgement;
  SSM_ST_MOVEMENT_AUTHORITY_SM /* MOVEMENT_AUTHORITY_SM: */ MOVEMENT_AUTHORITY_SM_state_nxt;
  kcg_bool /* MOVEMENT_AUTHORITY_SM: */ MOVEMENT_AUTHORITY_SM_reset_act;
  kcg_bool /* MOVEMENT_AUTHORITY_SM: */ MOVEMENT_AUTHORITY_SM_reset_nxt;
  T_TRAIN /* radioTrackTrainMessageWasSentTimestamp/ */ radioTrackTrainMessageWasSentTimestamp;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_2;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */ Context_RadioTrackTrainMessage__GetHeader_4;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_3;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */ Context_RadioTrackTrainMessage__GetHeader_5;
  outC_RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */ Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */ Context_RadioTrainTrackMessage__GetHeader_4;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L29=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */ Context_RadioTrackTrainMessageQueue__TryPut_2;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L30=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_2;
  outC_SessionManagement__SetPosData_RBC_Session_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#3)/ */ Context_SessionManagement__SetPosData_3;
  outC_PosData__Update_RBC_Session_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L2=(RBC_Session_Pkg::PosData__Update#3)/ */ Context_PosData__Update_3;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L1=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */ Context_SessionManagement__GetPosData_3;
  outC_SessionManagement__SetPosData_RBC_Session_Pkg /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */ Context_SessionManagement__SetPosData_1;
  outC_PosData__Update_RBC_Session_Pkg /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L5=(RBC_Session_Pkg::PosData__Update#1)/ */ Context_PosData__Update_1;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */ Context_SessionManagement__GetPosData_1;
  outC_RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L94=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L93=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */ Context_RadioTrainTrackMessage__GetHeader_5;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L89=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L90=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#6)/ */ Context_RadioTrackTrainMessage__GetHeader_6;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1: */ IfBlock1_clock_SEND_MA_MOVEMENT_AUTHORITY_SM;
  kcg_bool /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */ IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  SSM_ST_MOVEMENT_AUTHORITY_SM /* MOVEMENT_AUTHORITY_SM: */ MOVEMENT_AUTHORITY_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueue_T /* MOVEMENT_AUTHORITY_SM:IDLE:_L3/ */ _L3_IDLE_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:IDLE:_L4/ */ _L4_IDLE_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:IDLE:_L5/ */ _L5_IDLE_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L35/ */ _L35_SEND_MA_MOVEMENT_AUTHORITY_SM;
  RadioTrackTrainMessageQueue_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L33/ */ _L33_SEND_MA_MOVEMENT_AUTHORITY_SM;
  CompressedRadioMessage_TM /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L32/ */ _L32_SEND_MA_MOVEMENT_AUTHORITY_SM;
  RadioTrackTrainMessageQueue_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L29/ */ _L29_SEND_MA_MOVEMENT_AUTHORITY_SM;
  RadioTrackTrainMessageQueueEntry_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L30/ */ _L30_SEND_MA_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:else:_L4/ */ _L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:else:_L3/ */ _L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L4/ */ _L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L3/ */ _L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  PosData_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L2/ */ _L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  PosData_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L1/ */ _L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L7/ */ _L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L6/ */ _L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM;
  CompressedRadioMessage_TM /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L19/ */ _L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L20/ */ _L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L16/ */ _L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  RadioTrackTrainMessageQueue_T /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L17/ */ _L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L18/ */ _L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L13/ */ _L13_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  Radio_TrackTrain_Header_T_TM /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L3/ */ _L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  NID_MESSAGE /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L4/ */ _L4_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L6/ */ _L6_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  kcg_bool /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L7/ */ _L7_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  NID_MESSAGE /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L8/ */ _L8_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L9/ */ _L9_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L35/ */ _L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  CompressedRadioMessage_TM /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L36/ */ _L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L32/ */ _L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  RadioTrackTrainMessageQueue_T /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L33/ */ _L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L34/ */ _L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27/ */ _L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L28/ */ _L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L29/ */ _L29_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  Radio_TrackTrain_Header_T_TM /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19/ */ _L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20/ */ _L20_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L21/ */ _L21_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  NID_MESSAGE /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22/ */ _L22_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  NID_MESSAGE /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23/ */ _L23_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L24/ */ _L24_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  kcg_bool /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26/ */ _L26_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  T_TRAIN /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:radioTrainTrackMessageTimestamp/ */ radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:AWAIT_MA:_L3/ */ _L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:AWAIT_MA:_L4/ */ _L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
  RadioTrackTrainMessageQueue_T /* MOVEMENT_AUTHORITY_SM:AWAIT_MA:_L5/ */ _L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L10/ */ _L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L11/ */ _L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L7/ */ _L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  RadioTrackTrainMessageQueue_T /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L9/ */ _L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L1/ */ _L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  PosData_T /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L3/ */ _L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  SessionManagement_T /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L4/ */ _L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  PosData_T /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L5/ */ _L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  SSM_ST_MOVEMENT_AUTHORITY_SM /* MOVEMENT_AUTHORITY_SM: */ MOVEMENT_AUTHORITY_SM_state_sel;
  SSM_TR_MOVEMENT_AUTHORITY_SM /* MOVEMENT_AUTHORITY_SM: */ MOVEMENT_AUTHORITY_SM_fired_strong;
  SSM_TR_MOVEMENT_AUTHORITY_SM /* MOVEMENT_AUTHORITY_SM: */ MOVEMENT_AUTHORITY_SM_fired;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  NID_MESSAGE /* radioTrackTrainMessageId/ */ radioTrackTrainMessageId;
  CompressedRadioMessage_TM /* radioTrackTrainMessage/ */ radioTrackTrainMessage;
  SessionManagement_T /* session/ */ session;
  RadioTrackTrainMessageQueue_T /* messageQueue/ */ messageQueue;
  Radio_TrackTrain_Header_T_TM /* _L90/ */ _L90;
  NID_MESSAGE /* _L89/ */ _L89;
  NID_MESSAGE /* _L94/ */ _L94;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L93/ */ _L93;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L92/ */ _L92;
  CompressedRadioMessage_TM /* _L96/ */ _L96;
  CompressedRadioMessage_TM /* _L99/ */ _L99;
  RBC_Data_T_RBC_DataBus_Pkg /* _L112/ */ _L112;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L111/ */ _L111;
  RBC_Data_T_RBC_DataBus_Pkg /* _L109/ */ _L109;
  RBC_Data_T_RBC_DataBus_Pkg /* _L108/ */ _L108;
  RadioTrackTrainMessageQueue_T /* _L107/ */ _L107;
  CompressedRadioMessage_TM /* _L106/ */ _L106;
  SessionManagement_T /* _L105/ */ _L105;
} outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority/ */
extern void RBC__ProcessMovementAuthority_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC);

extern void RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessMovementAuthority_init_RBC_Model_Pkg(
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC__ProcessMovementAuthority_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessMovementAuthority_RBC_Model_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

