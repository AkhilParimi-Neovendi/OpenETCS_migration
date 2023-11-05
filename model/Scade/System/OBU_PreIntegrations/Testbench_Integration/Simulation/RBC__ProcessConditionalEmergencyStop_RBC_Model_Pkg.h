/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg_H_
#define _RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg_H_

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
  SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM /* CONDITIONAL_EMERGENCY_STOP_SM: */ CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  kcg_bool /* CONDITIONAL_EMERGENCY_STOP_SM: */ CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  kcg_bool /* CONDITIONAL_EMERGENCY_STOP_SM: */ CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  NID_EM /* radioTrackTrainMessageWasSentEmergencyStopId/ */ radioTrackTrainMessageWasSentEmergencyStopId;
  SessionManagement_T /* session/ */ session;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */ Context_RadioTrackTrainHeader__Get_NID_EM_1;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */ Context_RadioTrackTrainMessage__GetHeader_3;
  outC_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */ Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */ Context_RadioTrainTrackMessage__GetHeader_5;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */ Context_RadioTrackTrainMessageQueue__TryPut_3;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_3;
  outC_SessionManagement__SetPosData_RBC_Session_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */ Context_SessionManagement__SetPosData_5;
  outC_PosData__Update_RBC_Session_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */ Context_PosData__Update_5;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */ Context_SessionManagement__GetPosData_5;
  outC_RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */ Context_RadioTrainTrackHeader__Get_NID_EM_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */ Context_RadioTrainTrackMessage__GetHeader_3;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#2)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_2;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */ Context_RadioTrackTrainMessage__GetHeader_4;
  outC_RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */ Context_RadioTrainTrackMessage__GetHeader_4;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */ IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM /* CONDITIONAL_EMERGENCY_STOP_SM: */ CONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueue_T /* CONDITIONAL_EMERGENCY_STOP_SM:IDLE:_L5/ */ _L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* CONDITIONAL_EMERGENCY_STOP_SM:IDLE:_L4/ */ _L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:IDLE:_L3/ */ _L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L71/ */ _L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L64/ */ _L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L70/ */ _L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L62/ */ _L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L57/ */ _L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueueEntry_T /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L59/ */ _L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrackTrain_Header_T_TM /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L56/ */ _L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  NID_EM /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L54/ */ _L54_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  CompressedRadioMessage_TM /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L52/ */ _L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:_L3/ */ _L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* CONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:_L4/ */ _L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* CONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:_L5/ */ _L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  RadioTrackTrainMessageQueue_T /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L36/ */ _L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L37/ */ _L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  NID_EM /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27/ */ _L27_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26/ */ _L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L25/ */ _L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  NID_EM /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:emergencyStopId/ */ emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13/ */ _L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L12/ */ _L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  PosData_T /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11/ */ _L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  PosData_T /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10/ */ _L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L14/ */ _L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  Q_EMERGENCYSTOP /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L16/ */ _L16_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L17/ */ _L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L21/ */ _L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  SessionManagement_T /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L20/ */ _L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM /* CONDITIONAL_EMERGENCY_STOP_SM: */ CONDITIONAL_EMERGENCY_STOP_SM_state_sel;
  SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM /* CONDITIONAL_EMERGENCY_STOP_SM: */ CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM /* CONDITIONAL_EMERGENCY_STOP_SM: */ CONDITIONAL_EMERGENCY_STOP_SM_fired;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  NID_MESSAGE /* radioTrackTrainMessageId/ */ radioTrackTrainMessageId;
  CompressedRadioMessage_TM /* radioTrackTrainMessage/ */ radioTrackTrainMessage;
  RadioTrackTrainMessageQueue_T /* messageQueue/ */ messageQueue;
  CompressedRadioMessage_TM /* _L60/ */ _L60;
  Radio_TrackTrain_Header_T_TM /* _L65/ */ _L65;
  CompressedRadioMessage_TM /* _L64/ */ _L64;
  NID_MESSAGE /* _L63/ */ _L63;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L68/ */ _L68;
  NID_MESSAGE /* _L67/ */ _L67;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L66/ */ _L66;
  CompressedRadioMessage_TM /* _L72/ */ _L72;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L69/ */ _L69;
  RBC_Data_T_RBC_DataBus_Pkg /* _L76/ */ _L76;
  RBC_Data_T_RBC_DataBus_Pkg /* _L75/ */ _L75;
  RadioTrackTrainMessageQueue_T /* _L78/ */ _L78;
  RBC_Data_T_RBC_DataBus_Pkg /* _L79/ */ _L79;
  SessionManagement_T /* _L80/ */ _L80;
} outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop/ */
extern void RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC);

extern void RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessConditionalEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  SessionManagement_T /* session/ */ Context_session;
  NID_EM /* radioTrackTrainMessageWasSentEmergencyStopId/ */ Context_radioTrackTrainMessageWasSentEmergencyStopId;
  kcg_bool /* CONDITIONAL_EMERGENCY_STOP_SM: */ Context_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  kcg_bool /* CONDITIONAL_EMERGENCY_STOP_SM: */ Context_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM /* CONDITIONAL_EMERGENCY_STOP_SM: */ Context_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  kcg_bool /* validAck/ */ Context_validAck;
  kcg_bool /* invalidAck/ */ Context_invalidAck;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg;

extern void kcg_save_SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *SV,
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC);
extern void kcg_load_SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC,
  SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *SV);



#endif /* _RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

