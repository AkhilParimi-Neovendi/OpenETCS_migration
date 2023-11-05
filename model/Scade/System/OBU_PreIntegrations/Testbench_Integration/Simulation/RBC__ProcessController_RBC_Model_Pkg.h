/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RBC__ProcessController_RBC_Model_Pkg_H_
#define _RBC__ProcessController_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__Reset_RBC_Session_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.h"
#include "PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg.h"
#include "DynamicConfig__GetPosRepParams_RBC_Config_Pkg.h"
#include "MAReqParams__Get_T_MAR_RBC_Config_Pkg.h"
#include "RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.h"
#include "PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"
#include "PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"
#include "PosRepParams__Get_Q_DIR_RBC_Config_Pkg.h"
#include "DynamicConfig__GetMAReqParams_RBC_Config_Pkg.h"
#include "RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "PosRepParams__Get_Q_SCALE_RBC_Config_Pkg.h"
#include "PosRepParams__Get_M_LOC_RBC_Config_Pkg.h"
#include "MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg.h"
#include "MAReqParams__Get_Q_DIR_RBC_Config_Pkg.h"
#include "RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.h"
#include "RBC__ProcessGeneralMessage_RBC_Model_Pkg.h"
#include "RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg.h"
#include "RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.h"
#include "RBC__ProcessMovementAuthority_RBC_Model_Pkg.h"
#include "RBC__ProcessPositionReport_RBC_Model_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "TrainData__UpdateWithP011_RBC_Session_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "TrainData__UpdateWithP003_RBC_Session_Pkg.h"
#include "RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "DynamicConfig__Get_M_VERSION_RBC_Config_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg032_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "SessionManagement__SetTrainData_RBC_Session_Pkg.h"
#include "SessionManagement__GetTrainData_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "TrainData__Set_NID_ENGINE_RBC_Session_Pkg.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"
#include "PosData__Set_NID_LRBG_RBC_Session_Pkg.h"
#include "Clock__Reset_RBC_Time_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* outDataBus/ */ outDataBus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_reset_nxt_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_reset_act_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_state_nxt_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:radioTrackTrainMessageWasSentTimestamp/ */ radioTrackTrainMessageWasSentTimestamp_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:radioTrackTrainMessageWasSentTimestamp/ */ radioTrackTrainMessageWasSentTimestamp_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:radioTrackTrainMessageWasSentTimestamp/ */ radioTrackTrainMessageWasSentTimestamp_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* paramsSent/ */ paramsSent;
  kcg_bool /* invalidAckForMAandPosRepParams/ */ invalidAckForMAandPosRepParams;
  kcg_bool /* trainDataValidated/ */ trainDataValidated;
  kcg_bool /* invalidAckForMessage129/ */ invalidAckForMessage129;
  SSM_ST_CONTROLLER_SM /* CONTROLLER_SM: */ CONTROLLER_SM_state_nxt;
  kcg_bool /* CONTROLLER_SM: */ CONTROLLER_SM_reset_act;
  kcg_bool /* CONTROLLER_SM: */ CONTROLLER_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Clock__Reset_RBC_Time_Pkg /* CONTROLLER_SM:SESSION_TERMINATED:_L6=(RBC_Time_Pkg::Clock__Reset#2)/ */ Context_Clock__Reset_2;
  outC_SessionManagement__SetTrainData_RBC_Session_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L37=(RBC_Session_Pkg::SessionManagement__SetTrainData#10)/ */ Context_SessionManagement__SetTrainData_10;
  outC_TrainData__Set_NID_ENGINE_RBC_Session_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L31=(RBC_Session_Pkg::TrainData__Set_NID_ENGINE#2)/ */ Context_TrainData__Set_NID_ENGINE_2;
  outC_RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L32=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_ENGINE#2)/ */ Context_RadioTrainTrackHeader__Get_NID_ENGINE_2;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L33=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */ Context_RadioTrainTrackMessage__GetHeader_5;
  outC_SessionManagement__GetTrainData_RBC_Session_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L36=(RBC_Session_Pkg::SessionManagement__GetTrainData#10)/ */ Context_SessionManagement__GetTrainData_10;
  outC_SessionManagement__SetPosData_RBC_Session_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L16=(RBC_Session_Pkg::SessionManagement__SetPosData#2)/ */ Context_SessionManagement__SetPosData_2;
  outC_PosData__Set_NID_LRBG_RBC_Session_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L14=(RBC_Session_Pkg::PosData__Set_NID_LRBG#1)/ */ Context_PosData__Set_NID_LRBG_1;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L13=(RBC_Session_Pkg::SessionManagement__GetPosData#2)/ */ Context_SessionManagement__GetPosData_2;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L49=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#6)/ */ Context_RadioTrackTrainMessageQueue__TryPut_6;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L50=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#6)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_6;
  outC_RadioTrackTrainFactory__CreateMsg032_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L40=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg032_BSL2#2)/ */ Context_RadioTrackTrainFactory__CreateMsg032_BSL2_2;
  outC_DynamicConfig__Get_M_VERSION_RBC_Config_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L44=(RBC_Config_Pkg::DynamicConfig__Get_M_VERSION#2)/ */ Context_DynamicConfig__Get_M_VERSION_2;
  outC_SessionManagement__SetTrainData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L22=(RBC_Session_Pkg::SessionManagement__SetTrainData#9)/ */ Context_SessionManagement__SetTrainData_9;
  outC_TrainData__UpdateWithP003_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L20=(RBC_Session_Pkg::TrainData__UpdateWithP003#7)/ */ Context_TrainData__UpdateWithP003_7;
  outC_SessionManagement__GetTrainData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L19=(RBC_Session_Pkg::SessionManagement__GetTrainData#9)/ */ Context_SessionManagement__GetTrainData_9;
  outC_RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */ Context_RadioTrainTrackPacket003__IsValid_1;
  outC_RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */ Context_RadioTrainTrackPackets__GetP003_1;
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L49=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L50=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#1)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_1;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L44=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */ Context_RadioTrackTrainMessage__GetHeader_1;
  outC_RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L53=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */ Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L55=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */ Context_RadioTrainTrackMessage__GetHeader_2;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#4)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_4;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */ Context_RadioTrackTrainMessage__GetHeader_3;
  outC_SessionManagement__SetTrainData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L58=(RBC_Session_Pkg::SessionManagement__SetTrainData#11)/ */ Context_SessionManagement__SetTrainData_11;
  outC_TrainData__UpdateWithP011_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L53=(RBC_Session_Pkg::TrainData__UpdateWithP011#2)/ */ Context_TrainData__UpdateWithP011_2;
  outC_SessionManagement__GetTrainData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L55=(RBC_Session_Pkg::SessionManagement__GetTrainData#11)/ */ Context_SessionManagement__GetTrainData_11;
  outC_SessionManagement__SetPosData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L57=(RBC_Session_Pkg::SessionManagement__SetPosData#3)/ */ Context_SessionManagement__SetPosData_3;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L77=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#7)/ */ Context_RadioTrackTrainMessageQueue__TryPut_7;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L75=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#7)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_7;
  outC_RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L66=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2#2)/ */ Context_RadioTrackTrainFactory__CreateMsg008_BSL2_2;
  outC_RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L63=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN#2)/ */ Context_RadioTrainTrackHeader__Get_T_TRAIN_2;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#6)/ */ Context_RadioTrainTrackMessage__GetHeader_6;
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L71=(RBC_Session_Pkg::PosData__Get_NID_LRBG#7)/ */ Context_PosData__Get_NID_LRBG_7;
  outC_PosData__Update_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L14=(RBC_Session_Pkg::PosData__Update#1)/ */ Context_PosData__Update_1;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L20=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */ Context_SessionManagement__GetPosData_1;
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L172=(RBC_Model_Pkg::RBC__ProcessGeneralMessage#2)/ */ Context_RBC__ProcessGeneralMessage_2;
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L176=(RBC_Model_Pkg::RBC__ProcessTripAndPostTrip#1)/ */ Context_RBC__ProcessTripAndPostTrip_1;
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L175=(RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop#1)/ */ Context_RBC__ProcessRevocationOfEmergencyStop_1;
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L173=(RBC_Model_Pkg::RBC__ProcessMovementAuthority#1)/ */ Context_RBC__ProcessMovementAuthority_1;
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L177=(RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop#1)/ */ Context_RBC__ProcessUnconditionalEmergencyStop_1;
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L171=(RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop#1)/ */ Context_RBC__ProcessConditionalEmergencyStop_1;
  outC_RBC__PingTrain_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L170=(RBC_Model_Pkg::RBC__PingTrain#1)/ */ Context_RBC__PingTrain_1;
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L174=(RBC_Model_Pkg::RBC__ProcessPositionReport#1)/ */ Context_RBC__ProcessPositionReport_1;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L11=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#6)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_6;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */ Context_RadioTrackTrainMessage__GetHeader_5;
  outC_RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */ Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#7)/ */ Context_RadioTrainTrackMessage__GetHeader_7;
  outC_RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L1=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */ Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#5)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_5;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */ Context_RadioTrackTrainMessage__GetHeader_4;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L16=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#9)/ */ Context_RadioTrackTrainMessageQueue__TryPut_9;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#9)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_9;
  outC_RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L24=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2#2)/ */ Context_RadioTrackTrainFactory__CreateMsg024_BSL2_2;
  outC_RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L21=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058#2)/ */ Context_RadioTrackTrainFactory__CreateP058_2;
  outC_PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L18=(RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers#2)/ */ Context_PosRepParams__GetIncrementalDistancesAndQualifiers_2;
  outC_PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L19=(RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers#2)/ */ Context_PosRepParams__CountIncrementalDistancesAndQualifiers_2;
  outC_PosRepParams__Get_M_LOC_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L6=(RBC_Config_Pkg::PosRepParams__Get_M_LOC#2)/ */ Context_PosRepParams__Get_M_LOC_2;
  outC_PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L26=(RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC#2)/ */ Context_PosRepParams__Get_D_CYCLOC_2;
  outC_PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L25=(RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC#2)/ */ Context_PosRepParams__Get_T_CYCLOC_2;
  outC_PosRepParams__Get_Q_SCALE_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L7=(RBC_Config_Pkg::PosRepParams__Get_Q_SCALE#2)/ */ Context_PosRepParams__Get_Q_SCALE_2;
  outC_PosRepParams__Get_Q_DIR_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L17=(RBC_Config_Pkg::PosRepParams__Get_Q_DIR#2)/ */ Context_PosRepParams__Get_Q_DIR_2;
  outC_DynamicConfig__GetPosRepParams_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L23=(RBC_Config_Pkg::DynamicConfig__GetPosRepParams#2)/ */ Context_DynamicConfig__GetPosRepParams_2;
  outC_RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057#2)/ */ Context_RadioTrackTrainFactory__CreateP057_2;
  outC_MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L3=(RBC_Config_Pkg::MAReqParams__Get_T_CYCRQST#2)/ */ Context_MAReqParams__Get_T_CYCRQST_2;
  outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L20=(RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST#2)/ */ Context_MAReqParams__Get_T_TIMEOUTRQST_2;
  outC_MAReqParams__Get_T_MAR_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L22=(RBC_Config_Pkg::MAReqParams__Get_T_MAR#2)/ */ Context_MAReqParams__Get_T_MAR_2;
  outC_MAReqParams__Get_Q_DIR_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L1=(RBC_Config_Pkg::MAReqParams__Get_Q_DIR#2)/ */ Context_MAReqParams__Get_Q_DIR_2;
  outC_DynamicConfig__GetMAReqParams_RBC_Config_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L12=(RBC_Config_Pkg::DynamicConfig__GetMAReqParams#2)/ */ Context_DynamicConfig__GetMAReqParams_2;
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L15=(RBC_Session_Pkg::PosData__Get_NID_LRBG#9)/ */ Context_PosData__Get_NID_LRBG_9;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L11=(RBC_Session_Pkg::SessionManagement__GetPosData#7)/ */ Context_SessionManagement__GetPosData_7;
  outC_RBC__PingTrain_RBC_Model_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L42=(RBC_Model_Pkg::RBC__PingTrain#2)/ */ Context_RBC__PingTrain_2;
  outC_SessionManagement__Reset_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L23=(RBC_Session_Pkg::SessionManagement__Reset#1)/ */ Context_SessionManagement__Reset_1;
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L19=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#5)/ */ Context_RadioTrackTrainMessageQueue__TryPut_5;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L18=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#5)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_5;
  outC_RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg039_BSL2#1)/ */ Context_RadioTrackTrainFactory__CreateMsg039_BSL2_1;
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L11=(RBC_Session_Pkg::PosData__Get_NID_LRBG#4)/ */ Context_PosData__Get_NID_LRBG_4;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L4=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */ Context_SessionManagement__GetPosData_5;
  outC_RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_clock_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ _5_SESSION_ESTABLISHED_SM_clock_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:IfBlock1: */ IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_clock_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ _6_SEND_MA_AMD_POS_REP_PARAMS_SM_clock_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */ IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_clock_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ _7_PROCESS_VALIDATED_TRAIN_DATA_SM_clock_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1: */ IfBlock1_clock_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_CONTROLLER_SM /* CONTROLLER_SM: */ CONTROLLER_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Clock_T /* CONTROLLER_SM:SESSION_TERMINATED:_L14/ */ _L14_SESSION_TERMINATED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_TERMINATED:_L13/ */ _L13_SESSION_TERMINATED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_TERMINATED:_L7/ */ _L7_SESSION_TERMINATED_CONTROLLER_SM;
  Clock_T /* CONTROLLER_SM:SESSION_TERMINATED:_L6/ */ _L6_SESSION_TERMINATED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L62/ */ _L62_SEND_RBC_VERSION_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L61/ */ _L61_SEND_RBC_VERSION_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L60/ */ _L60_SEND_RBC_VERSION_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L58/ */ _L58_SEND_RBC_VERSION_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L59/ */ _L59_SEND_RBC_VERSION_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L56/ */ _L56_SEND_RBC_VERSION_CONTROLLER_SM;
  DynamicConfig_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L57/ */ _L57_SEND_RBC_VERSION_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L55/ */ _L55_SEND_RBC_VERSION_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L54/ */ _L54_SEND_RBC_VERSION_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L49/ */ _L49_SEND_RBC_VERSION_CONTROLLER_SM;
  RadioTrackTrainMessageQueueEntry_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L50/ */ _L50_SEND_RBC_VERSION_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SEND_RBC_VERSION:_L40/ */ _L40_SEND_RBC_VERSION_CONTROLLER_SM;
  NID_LRBG /* CONTROLLER_SM:SEND_RBC_VERSION:_L41/ */ _L41_SEND_RBC_VERSION_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SEND_RBC_VERSION:_L42/ */ _L42_SEND_RBC_VERSION_CONTROLLER_SM;
  M_ACK /* CONTROLLER_SM:SEND_RBC_VERSION:_L43/ */ _L43_SEND_RBC_VERSION_CONTROLLER_SM;
  M_VERSION /* CONTROLLER_SM:SEND_RBC_VERSION:_L44/ */ _L44_SEND_RBC_VERSION_CONTROLLER_SM;
  TrainData_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L31/ */ _L31_SEND_RBC_VERSION_CONTROLLER_SM;
  NID_ENGINE /* CONTROLLER_SM:SEND_RBC_VERSION:_L32/ */ _L32_SEND_RBC_VERSION_CONTROLLER_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L33/ */ _L33_SEND_RBC_VERSION_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SEND_RBC_VERSION:_L35/ */ _L35_SEND_RBC_VERSION_CONTROLLER_SM;
  TrainData_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L36/ */ _L36_SEND_RBC_VERSION_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L37/ */ _L37_SEND_RBC_VERSION_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L16/ */ _L16_SEND_RBC_VERSION_CONTROLLER_SM;
  NID_LRBG /* CONTROLLER_SM:SEND_RBC_VERSION:_L15/ */ _L15_SEND_RBC_VERSION_CONTROLLER_SM;
  PosData_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L14/ */ _L14_SEND_RBC_VERSION_CONTROLLER_SM;
  PosData_T /* CONTROLLER_SM:SEND_RBC_VERSION:_L13/ */ _L13_SEND_RBC_VERSION_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:AWAIT_SESSION_ESTABLISHED_REPORT:_L11/ */ _L11_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM;
  SSM_TR_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_fired_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_TR_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_fired_strong_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_state_act_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ SESSION_ESTABLISHED_SM_state_sel_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L34/ */ _L34_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L27/ */ _L27_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L20/ */ _L20_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L41/ */ _L41_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L44/ */ _L44_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L43/ */ _L43_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RBC_REQUEST_SESSION_TERMINATION:_L42/ */ _L42_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:START:_L1/ */ _L1_START_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:START:_L2/ */ _L2_START_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L33/ */ _L33_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L34/ */ _L34_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  DynamicConfig_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L31/ */ _L31_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L32/ */ _L32_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L28/ */ _L28_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L27/ */ _L27_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Q_DIR /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L1/ */ _L1_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_CYCRQST /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L3/ */ _L3_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueueEntry_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L4/ */ _L4_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L5/ */ _L5_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  M_LOC /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L6/ */ _L6_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Q_SCALE /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L7/ */ _L7_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  P057_trackside_int_T_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L9/ */ _L9_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  M_ACK /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L10/ */ _L10_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  PosData_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L11/ */ _L11_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  MAReqParams_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L12/ */ _L12_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_LRBG /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L15/ */ _L15_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L16/ */ _L16_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Q_DIR /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L17/ */ _L17_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  _68_array /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L18/ */ _L18_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  N_ITER /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L19/ */ _L19_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TIMEOUTRQST /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L20/ */ _L20_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  P058_trackside_int_T_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L21/ */ _L21_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_MAR /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L22/ */ _L22_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  PosRepParams_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L23/ */ _L23_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L24/ */ _L24_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_CYCLOC /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L25/ */ _L25_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  D_CYCLOC /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:SEND_MA_AND_POS_REP_PARAMS:_L26/ */ _L26_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L15/ */ _L15_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L16/ */ _L16_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L13/ */ _L13_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L14/ */ _L14_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_MESSAGE /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L2/ */ _L2_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrackTrain_Header_T_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L4/ */ _L4_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_int32 /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L5/ */ _L5_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L7/ */ _L7_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L8/ */ _L8_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L11/ */ _L11_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:_L12/ */ _L12_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L20/ */ _L20_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L21/ */ _L21_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L16/ */ _L16_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L17/ */ _L17_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_MESSAGE /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L1/ */ _L1_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L4/ */ _L4_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_int32 /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L5/ */ _L5_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrackTrain_Header_T_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L6/ */ _L6_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L7/ */ _L7_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L8/ */ _L8_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L12/ */ _L12_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L13/ */ _L13_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L14/ */ _L14_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:_L15/ */ _L15_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:radioTrainTrackMessageTimestamp/ */ radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ SEND_MA_AMD_POS_REP_PARAMS_SM_fired_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:messageQueue/ */ messageQueue_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:_L35/ */ _L35_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:_L36/ */ _L36_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:_L38/ */ _L38_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:AWAIT_SESSION_TERMINATION_REQUEST:_L10/ */ _L10_AWAIT_SESSION_TERMINATION_REQUEST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:AWAIT_VALIDATED_TRAIN_DATA:_L10/ */ _L10_AWAIT_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L3/ */ _L3_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L27/ */ _L27_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L35/ */ _L35_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L38/ */ _L38_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L54/ */ _L54_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L132/ */ _L132_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L129/ */ _L129_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L139/ */ _L139_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L136/ */ _L136_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L141/ */ _L141_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L147/ */ _L147_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L144/ */ _L144_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L154/ */ _L154_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L151/ */ _L151_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L158/ */ _L158_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L161/ */ _L161_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L168/ */ _L168_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L165/ */ _L165_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L170/ */ _L170_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L171/ */ _L171_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L172/ */ _L172_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L173/ */ _L173_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L174/ */ _L174_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L175/ */ _L175_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L176/ */ _L176_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L177/ */ _L177_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L178/ */ _L178_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:RECEIVE_AND_TRIGGER:_L179/ */ _L179_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L62/ */ _L62_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L61/ */ _L61_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L60/ */ _L60_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L55/ */ _L55_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L53/ */ _L53_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L54/ */ _L54_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrackTrain_Header_T_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L44/ */ _L44_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L45/ */ _L45_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L46/ */ _L46_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L48/ */ _L48_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_MESSAGE /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L49/ */ _L49_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L50/ */ _L50_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_MESSAGE /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L51/ */ _L51_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:TRY_PROCESS_ACKNOWLEDGEMENT:radioTrainTrackMessageTimestamp/ */ radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L29/ */ _L29_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L30/ */ _L30_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L28/ */ _L28_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L23/ */ _L23_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L16/ */ _L16_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L17/ */ _L17_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_MESSAGE /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L18/ */ _L18_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_MESSAGE /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L19/ */ _L19_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrackTrain_Header_T_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L20/ */ _L20_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:AWAIT_ACKNOWLEDGEMENT:_L21/ */ _L21_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L85/ */ _L85_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L86/ */ _L86_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L83/ */ _L83_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L84/ */ _L84_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L80/ */ _L80_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L81/ */ _L81_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L82/ */ _L82_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueueEntry_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L75/ */ _L75_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L77/ */ _L77_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L63/ */ _L63_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  M_ACK /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L64/ */ _L64_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L65/ */ _L65_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L66/ */ _L66_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L68/ */ _L68_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L70/ */ _L70_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  NID_LRBG /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L71/ */ _L71_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L57/ */ _L57_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L58/ */ _L58_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  TrainData_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L53/ */ _L53_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  TrainData_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L55/ */ _L55_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  PosData_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L20/ */ _L20_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L15/ */ _L15_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  PosData_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM:PROCESS_VALIDATED_TRAIN_DATA:_L14/ */ _L14_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ PROCESS_VALIDATED_TRAIN_DATA_SM_fired_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L26/ */ _L26_then_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L27/ */ _L27_then_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L24/ */ _L24_then_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L22/ */ _L22_then_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  TrainData_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L20/ */ _L20_then_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  TrainData_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:then:_L19/ */ _L19_then_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:else:_L5/ */ _L5_else_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:IfBlock1:else:_L4/ */ _L4_else_IfBlock1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:valid/ */ valid_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:session/ */ session_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L5/ */ _L5_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L4/ */ _L4_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  outPackets_T_Common_Types_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L3/ */ _L3_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L2/ */ _L2_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L13/ */ _L13_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L14/ */ _L14_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_SESSION_ESTABLISHED_REPORT:_L15/ */ _L15_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L35/ */ _L35_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L36/ */ _L36_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L26/ */ _L26_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L27/ */ _L27_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L28/ */ _L28_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L24/ */ _L24_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  RBC_Data_T_RBC_DataBus_Pkg /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L25/ */ _L25_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  SessionManagement_T /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L23/ */ _L23_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  RadioTrackTrainMessageQueueEntry_T /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L18/ */ _L18_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  RadioTrackTrainMessageQueue_T /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L19/ */ _L19_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  NID_LRBG /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L11/ */ _L11_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  T_TRAIN /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L6/ */ _L6_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  PosData_T /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L4/ */ _L4_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  CompressedRadioMessage_TM /* CONTROLLER_SM:SESSION_TERMINATION_REQUEST:_L3/ */ _L3_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
  SSM_ST_CONTROLLER_SM /* CONTROLLER_SM: */ CONTROLLER_SM_state_sel;
  SSM_TR_CONTROLLER_SM /* CONTROLLER_SM: */ CONTROLLER_SM_fired_strong;
  SSM_TR_CONTROLLER_SM /* CONTROLLER_SM: */ CONTROLLER_SM_fired;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L2/ */ _L2;
  NID_MESSAGE /* _L4/ */ _L4;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L5/ */ _L5;
} outC_RBC__ProcessController_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessController/ */
extern void RBC__ProcessController_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessController_RBC_Model_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC__ProcessController_reset_RBC_Model_Pkg(
  outC_RBC__ProcessController_RBC_Model_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessController_init_RBC_Model_Pkg(
  outC_RBC__ProcessController_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* outDataBus/ */ Context_outDataBus;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* CONTROLLER_SM: */ Context_CONTROLLER_SM_reset_nxt;
  kcg_bool /* CONTROLLER_SM: */ Context_CONTROLLER_SM_reset_act;
  SSM_ST_CONTROLLER_SM /* CONTROLLER_SM: */ Context_CONTROLLER_SM_state_nxt;
  kcg_bool /* invalidAckForMessage129/ */ Context_invalidAckForMessage129;
  kcg_bool /* trainDataValidated/ */ Context_trainDataValidated;
  kcg_bool /* invalidAckForMAandPosRepParams/ */ Context_invalidAckForMAandPosRepParams;
  kcg_bool /* paramsSent/ */ Context_paramsSent;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:radioTrackTrainMessageWasSentTimestamp/ */ _6_Context_radioTrackTrainMessageWasSentTimestamp;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ Context_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ Context_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act;
  SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */ Context_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ Context_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ Context_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act;
  SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */ Context_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:TRY_PROCESS_ACKNOWLEDGMENT:radioTrackTrainMessageWasSentTimestamp/ */ _5_Context_radioTrackTrainMessageWasSentTimestamp;
  T_TRAIN /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM:AWAIT_ACKNOWLEDGMENT:radioTrackTrainMessageWasSentTimestamp/ */ Context_radioTrackTrainMessageWasSentTimestamp;
  SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ Context_SESSION_ESTABLISHED_SM_state_nxt;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ Context_SESSION_ESTABLISHED_SM_reset_act;
  kcg_bool /* CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */ Context_SESSION_ESTABLISHED_SM_reset_nxt;
  kcg_bool _4_Context_init;
  kcg_bool _3_Context_init;
  kcg_bool _2_Context_init;
  kcg_bool _1_Context_init;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_RBC__PingTrain_RBC_Model_Pkg Context_RBC__PingTrain_2;
  SV_RBC__ProcessPositionReport_RBC_Model_Pkg Context_RBC__ProcessPositionReport_1;
  SV_RBC__PingTrain_RBC_Model_Pkg Context_RBC__PingTrain_1;
  SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg Context_RBC__ProcessConditionalEmergencyStop_1;
  SV_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg Context_RBC__ProcessUnconditionalEmergencyStop_1;
  SV_RBC__ProcessMovementAuthority_RBC_Model_Pkg Context_RBC__ProcessMovementAuthority_1;
  SV_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg Context_RBC__ProcessRevocationOfEmergencyStop_1;
  SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg Context_RBC__ProcessTripAndPostTrip_1;
  SV_RBC__ProcessGeneralMessage_RBC_Model_Pkg Context_RBC__ProcessGeneralMessage_2;
} SV_RBC__ProcessController_RBC_Model_Pkg;

extern void kcg_save_SV_RBC__ProcessController_RBC_Model_Pkg(
  SV_RBC__ProcessController_RBC_Model_Pkg *SV,
  outC_RBC__ProcessController_RBC_Model_Pkg *outC);
extern void kcg_load_SV_RBC__ProcessController_RBC_Model_Pkg(
  outC_RBC__ProcessController_RBC_Model_Pkg *outC,
  SV_RBC__ProcessController_RBC_Model_Pkg *SV);



#endif /* _RBC__ProcessController_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessController_RBC_Model_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

