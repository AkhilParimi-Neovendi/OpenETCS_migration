/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _RBC__ProcessTripAndPostTrip_RBC_Model_Pkg_H_
#define _RBC__ProcessTripAndPostTrip_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RBC__ProcessModeAndLevel_RBC_Model_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
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
  SSM_ST_TRIP_AND_POST_TRIP_SM /* TRIP_AND_POST_TRIP_SM: */ TRIP_AND_POST_TRIP_SM_state_nxt;
  kcg_bool /* TRIP_AND_POST_TRIP_SM: */ TRIP_AND_POST_TRIP_SM_reset_act;
  kcg_bool /* TRIP_AND_POST_TRIP_SM: */ TRIP_AND_POST_TRIP_SM_reset_nxt;
  T_TRAIN /* recognitionMessageWasSentTimestamp/ */ recognitionMessageWasSentTimestamp;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#4)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_4;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L25=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */ Context_RadioTrackTrainMessage__GetHeader_5;
  outC_RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */ Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */ Context_RadioTrainTrackMessage__GetHeader_2;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_2;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */ Context_RadioTrackTrainMessage__GetHeader_3;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */ Context_RadioTrackTrainMessageQueue__TryPut_3;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L7=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_3;
  outC_RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2#3)/ */ Context_RadioTrackTrainFactory__CreateMsg006_BSL2_3;
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L9=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */ Context_PosData__Get_NID_LRBG_3;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L6=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */ Context_SessionManagement__GetPosData_3;
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg /* _L82=(RBC_Model_Pkg::RBC__ProcessModeAndLevel#3)/ */ Context_RBC__ProcessModeAndLevel_3;
  outC_RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */ IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  SSM_ST_TRIP_AND_POST_TRIP_SM /* TRIP_AND_POST_TRIP_SM: */ TRIP_AND_POST_TRIP_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueue_T /* TRIP_AND_POST_TRIP_SM:IDLE:_L3/ */ _L3_IDLE_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:IDLE:_L4/ */ _L4_IDLE_TRIP_AND_POST_TRIP_SM;
  SessionManagement_T /* TRIP_AND_POST_TRIP_SM:IDLE:_L5/ */ _L5_IDLE_TRIP_AND_POST_TRIP_SM;
  SessionManagement_T /* TRIP_AND_POST_TRIP_SM:MODE_TRIP:_L64/ */ _L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:MODE_TRIP:_L65/ */ _L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
  RadioTrackTrainMessageQueue_T /* TRIP_AND_POST_TRIP_SM:MODE_TRIP:_L66/ */ _L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L29/ */ _L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  CompressedRadioMessage_TM /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L30/ */ _L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  RadioTrackTrainMessageQueue_T /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L26/ */ _L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L27/ */ _L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  SessionManagement_T /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L28/ */ _L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  NID_MESSAGE /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L18/ */ _L18_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L19/ */ _L19_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L20/ */ _L20_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  kcg_bool /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L21/ */ _L21_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L22/ */ _L22_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  kcg_int64 /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L23/ */ _L23_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  Radio_TrackTrain_Header_T_TM /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L25/ */ _L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L25/ */ _L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  CompressedRadioMessage_TM /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26/ */ _L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  RadioTrackTrainMessageQueue_T /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22/ */ _L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23/ */ _L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  SessionManagement_T /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L24/ */ _L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L21/ */ _L21_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  kcg_int64 /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L13/ */ _L13_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  kcg_bool /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14/ */ _L14_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  NID_MESSAGE /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L15/ */ _L15_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  Radio_TrackTrain_Header_T_TM /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16/ */ _L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L18/ */ _L18_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19/ */ _L19_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L1/ */ _L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L4/ */ _L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L8/ */ _L8_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:acknowledgementMessageTimestamp/ */ acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L13/ */ _L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  RadioTrackTrainMessageQueue_T /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L10/ */ _L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L11/ */ _L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  SessionManagement_T /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L12/ */ _L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  M_ACK /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L2/ */ _L2_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  T_TRAIN /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L3/ */ _L3_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  RadioTrackTrainMessageQueue_T /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L4/ */ _L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  CompressedRadioMessage_TM /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L5/ */ _L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  PosData_T /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L6/ */ _L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  RadioTrackTrainMessageQueueEntry_T /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L7/ */ _L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  NID_LRBG /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L9/ */ _L9_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  SSM_ST_TRIP_AND_POST_TRIP_SM /* TRIP_AND_POST_TRIP_SM: */ TRIP_AND_POST_TRIP_SM_state_sel;
  SSM_TR_TRIP_AND_POST_TRIP_SM /* TRIP_AND_POST_TRIP_SM: */ TRIP_AND_POST_TRIP_SM_fired_strong;
  SSM_TR_TRIP_AND_POST_TRIP_SM /* TRIP_AND_POST_TRIP_SM: */ TRIP_AND_POST_TRIP_SM_fired;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  kcg_bool /* modeChanged/ */ modeChanged;
  M_MODE /* mode/ */ mode;
  RadioTrackTrainMessageQueue_T /* messageQueue/ */ messageQueue;
  SessionManagement_T /* session/ */ session;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L68/ */ _L68;
  NID_MESSAGE /* _L67/ */ _L67;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L66/ */ _L66;
  kcg_bool /* _L85/ */ _L85;
  M_LEVEL /* _L84/ */ _L84;
  kcg_bool /* _L83/ */ _L83;
  M_MODE /* _L82/ */ _L82;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L94/ */ _L94;
  RBC_Data_T_RBC_DataBus_Pkg /* _L93/ */ _L93;
  RBC_Data_T_RBC_DataBus_Pkg /* _L92/ */ _L92;
  RBC_Data_T_RBC_DataBus_Pkg /* _L91/ */ _L91;
  RadioTrackTrainMessageQueue_T /* _L90/ */ _L90;
  SessionManagement_T /* _L89/ */ _L89;
  CompressedRadioMessage_TM /* _L87/ */ _L87;
} outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip/ */
extern void RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC);

extern void RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessTripAndPostTrip_init_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* recognitionMessageWasSentTimestamp/ */ Context_recognitionMessageWasSentTimestamp;
  kcg_bool /* TRIP_AND_POST_TRIP_SM: */ Context_TRIP_AND_POST_TRIP_SM_reset_nxt;
  kcg_bool /* TRIP_AND_POST_TRIP_SM: */ Context_TRIP_AND_POST_TRIP_SM_reset_act;
  SSM_ST_TRIP_AND_POST_TRIP_SM /* TRIP_AND_POST_TRIP_SM: */ Context_TRIP_AND_POST_TRIP_SM_state_nxt;
  kcg_bool /* validAck/ */ Context_validAck;
  kcg_bool /* invalidAck/ */ Context_invalidAck;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg Context_RBC__ProcessModeAndLevel_3;
} SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg;

extern void kcg_save_SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *SV,
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC);
extern void kcg_load_SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC,
  SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *SV);



#endif /* _RBC__ProcessTripAndPostTrip_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

