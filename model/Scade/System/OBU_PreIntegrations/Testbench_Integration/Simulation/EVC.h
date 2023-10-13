/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _EVC_H_
#define _EVC_H_

#include "kcg_types.h"
#include "Procedure_TRIP_EVC_MEM_Support_Pkg.h"
#include "probePackets_EVC_MEM_Support_Pkg.h"
#include "MEM_combineForLevelChange_EVC_MEM_Support_Pkg.h"
#include "probe_MsgOut_RadioSupport_Pkg.h"
#include "checkGeneralMessage_trainData_pkg.h"
#include "collectRadioOutput_radioOutput_Pkg.h"
#include "MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg.h"
#include "MEM_MobileConnectionContext_EVC_MEM_Support_Pkg.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"
#include "setProbes_xdebugSupport_Pkg.h"
#include "probe_RadioOutput_RadioSupport_Pkg.h"
#include "distanceLastMSG_xdebugSupport_Pkg.h"
#include "distanceLastBG_xdebugSupport_Pkg.h"
#include "patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg.h"
#include "setProbesBalises_xdebugSupport_Pkg.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"
#include "TrackAtlas_TrackAtlas.h"
#include "trainData_trainData_pkg.h"
#include "ManageLevelAndMode.h"
#include "maintainTrainProperties_EVC_MEM_Support_Pkg.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"
#include "FlipFlopJK_digital.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"
#include "manageDMI_Output_manage_DMI_Output_Pkg.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* resetOut/ */ resetOut;
  M_TrainTrack_Message_T_TM_radio_messages /* API_toRBC/ */ API_toRBC;
  RadioManagement_T_API_RadioCommunication_Pkg /* API_RTM_management/ */ API_RTM_management;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* API_toDMI/ */ API_toDMI;
  TIU_Output_msg_API_TIU_Pkg /* API_toTIU/ */ API_toTIU;
  kcg_bool /* EVC_ready/ */ EVC_ready;
  L_internal_Type_Obu_BasicTypes_Pkg /* debugTrainPositionNominal/ */ debugTrainPositionNominal;
  L_internal_Type_Obu_BasicTypes_Pkg /* debugTrainPositionDeltaMax/ */ debugTrainPositionDeltaMax;
  L_internal_Type_Obu_BasicTypes_Pkg /* debugTrainPositionDeltaMin/ */ debugTrainPositionDeltaMin;
  kcg_float64 /* debugPermittedSpeed/ */ debugPermittedSpeed;
  kcg_float64 /* debugIinterventionSpeed/ */ debugIinterventionSpeed;
  M_MODE /* debugCurrentMode/ */ debugCurrentMode;
  M_LEVEL /* debugCurrentLevel/ */ debugCurrentLevel;
  /* -----------------------   local probes  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* probe_Odometry/ */ probe_Odometry;
  probesBalises_T_xdebugSupport_Pkg /* probe_Balises/ */ probe_Balises;
  kcg_float64 /* probe_distMsg/ */ probe_distMsg;
  kcg_float64 /* probe_distBG/ */ probe_distBG;
  NID_MESSAGE /* probe_MSGinAfterFilter/ */ probe_MSGinAfterFilter;
  NID_LRBG /* probe_LRBG/ */ probe_LRBG;
  NID_BG /* probe_BG_afterCheck/ */ probe_BG_afterCheck;
  NID_MESSAGE /* probe_Msg_1/ */ probe_Msg_1;
  NID_MESSAGE /* probe_Msg_2/ */ probe_Msg_2;
  NID_MESSAGE /* probe_Msg_3/ */ probe_Msg_3;
  NID_MESSAGE /* probe_Msg_4/ */ probe_Msg_4;
  NID_MESSAGE /* probe_Msg_5/ */ probe_Msg_5;
  NID_MESSAGE /* probe_MSGout/ */ probe_MSGout;
  T_TRAIN /* probe_TTrain/ */ probe_TTrain;
  NID_PACKET /* probe_nid_packet2/ */ probe_nid_packet2;
  NID_PACKET /* probe_nid_packet1/ */ probe_nid_packet1;
  kcg_bool /* probe_newInput/ */ probe_newInput;
  NID_MESSAGE /* probe_MSG_in/ */ probe_MSG_in;
  NID_BG /* probe_BG_ID/ */ probe_BG_ID;
  NID_MESSAGE /* probe_lastMSG_in/ */ probe_lastMSG_in;
  NID_BG /* probe_lastBG_ID/ */ probe_lastBG_ID;
  positionErrors_T_TrainPosition_Types_Pck /* probe_PositioningErrors/ */ probe_PositioningErrors;
  MSG_Errors_T_Common_Types_Pkg /* probe_MsgErrors/ */ probe_MsgErrors;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  radioManagementMessage_T_Common_Types_Pkg /* PROC_radioCmdFromProcedures/ */ PROC_radioCmdFromProcedures;
  kcg_bool /* PROC_powerUp_to_MoRC/ */ PROC_powerUp_to_MoRC;
  kcg_bool /* PROC_statusstartofmissionongoing_to_MoRC/ */ PROC_statusstartofmissionongoing_to_MoRC;
  kcg_bool /* PROC_powerOff_to_MoRC/ */ PROC_powerOff_to_MoRC;
  DMI_EVC_status_T_DMI_Types_Pkg /* DMI_currentDMIStatus/ */ DMI_currentDMIStatus;
  trainPosition_T_TrainPosition_Types_Pck /* CALC_TrainPosition/ */ CALC_TrainPosition;
  Brake_command_T_TIU_Types_Pkg /* SDM_speedSupervisionBrakeCommand/ */ SDM_speedSupervisionBrakeCommand;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* DMI_sdmToDMI/ */ DMI_sdmToDMI;
  trainData_T_TIU_Types_Pkg /* td_trainData/ */ td_trainData;
  connection_ids_T_Handover_Pkg /* MoRC_supervisingRBC_Id/ */ MoRC_supervisingRBC_Id;
  positionedBGs_T_TrainPosition_Types_Pck /* CALC_BGs/ */ CALC_BGs;
  trainProperties_T_TrainPosition_Types_Pck /* TIU_trainProperties/ */ TIU_trainProperties;
  kcg_bool /* MoRC_newSessionEstablished/ */ MoRC_newSessionEstablished;
  T_internal_Type_Obu_BasicTypes_Pkg /* MSG_lastRadioMsgTimestamp/ */ MSG_lastRadioMsgTimestamp;
  NID_NTC /* EVC_currentNTC/ */ EVC_currentNTC;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* ML_ModeAndLevel/ */ ML_ModeAndLevel;
  kcg_bool /* MSG_EmergencyBrakeActive/ */ MSG_EmergencyBrakeActive;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* EVC_PersistentData/ */ EVC_PersistentData;
  DMI_LevelList_T_DMI_Types_Pkg /* EVC_ActiveLevelList/ */ EVC_ActiveLevelList;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* EVC_TextMessageStatusList/ */ EVC_TextMessageStatusList;
  kcg_bool /* PROC_start_ack/ */ PROC_start_ack;
  trainData_Events_T_trainData_Types_pkg /* td_events/ */ td_events;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* rep_P0/ */ rep_P0;
  trainDataStatus_T_trainData_Types_pkg /* td_status/ */ td_status;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* rep_P1/ */ rep_P1;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* TA_Packets/ */ TA_Packets;
  kcg_bool /* MoRC_ready/ */ MoRC_ready;
  morcStatus_T_RCM_Session_Types_Pkg /* MoRC_RadioStatus_1/ */ MoRC_RadioStatus_1;
  NID_RADIO /* MoRC_RadioID_1/ */ MoRC_RadioID_1;
  NID_MN /* MoRC_MN_1/ */ MoRC_MN_1;
  M_LEVEL /* ML_MemorizedLevel/ */ ML_MemorizedLevel;
  kcg_bool /* TIU_driverWindowEB/ */ TIU_driverWindowEB;
  kcg_bool /* _L477/ */ _L477;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg /* _L161=(output_to_TIU_API_Pkg::TIU_OutputIntegration#2)/ */ Context_TIU_OutputIntegration_2;
  outC_FlipFlopJK_digital /* _L600=(digital::FlipFlopJK#2)/ */ Context_FlipFlopJK_2;
  outC_manageDMI_Output_manage_DMI_Output_Pkg /* _L171=(manage_DMI_Output_Pkg::manageDMI_Output#2)/ */ Context_manageDMI_Output_2;
  outC_Master_Procedure_ManageProcedure_Pkg /* _L472=(ManageProcedure_Pkg::Master_Procedure#2)/ */ Context_Master_Procedure_2;
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg /* _L632=(SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration#2)/ */ Context_SpeedSupervision_Integration_2;
  outC_setProbesBalises_xdebugSupport_Pkg /* _L1498=(xdebugSupport_Pkg::setProbesBalises#2)/ */ Context_setProbesBalises_2;
  outC_distanceLastMSG_xdebugSupport_Pkg /* _L1513=(xdebugSupport_Pkg::distanceLastMSG#2)/ */ Context_distanceLastMSG_2;
  outC_distanceLastBG_xdebugSupport_Pkg /* _L1511=(xdebugSupport_Pkg::distanceLastBG#2)/ */ Context_distanceLastBG_2;
  outC_probe_RadioOutput_RadioSupport_Pkg /* _L1564=(RadioSupport_Pkg::probe_RadioOutput#2)/ */ Context_probe_RadioOutput_2;
  outC_setProbes_xdebugSupport_Pkg /* _L1586=(xdebugSupport_Pkg::setProbes#2)/ */ Context_setProbes_2;
  outC_collectRadioOutput_radioOutput_Pkg /* _L1686=(radioOutput_Pkg::collectRadioOutput#2)/ */ Context_collectRadioOutput_2;
  outC_probe_MsgOut_RadioSupport_Pkg /* _L1718=(RadioSupport_Pkg::probe_MsgOut#3)/ */ Context_probe_MsgOut_3;
  outC_collectRadioOutput_radioOutput_Pkg /* _L1684=(radioOutput_Pkg::collectRadioOutput#1)/ */ Context_collectRadioOutput_1;
  outC_checkGeneralMessage_trainData_pkg /* _L1699=(trainData_pkg::checkGeneralMessage#3)/ */ Context_checkGeneralMessage_3;
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg /* _L1789=(EVC_MEM_Support_Pkg::Procedure_TRIP#2)/ */ Context_Procedure_TRIP_2;
  outC_MoRC_HO_MoRC_HO_Pkg /* _L1633=(MoRC_HO_Pkg::MoRC_HO#1)/ */ Context_MoRC_HO_1;
  outC_ProvidePositionReport_ProvidePositionReport_Pkg /* _L805=(ProvidePositionReport_Pkg::ProvidePositionReport#2)/ */ Context_ProvidePositionReport_2;
  outC_ManageLevelAndMode /* _L973=(ManageLevelAndMode#2)/ */ Context_ManageLevelAndMode_2;
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg /* _L1772=(EVC_MEM_Support_Pkg::MEM_combineForLevelChange#1)/ */ Context_MEM_combineForLevelChange_1;
  outC_maintainTrainProperties_EVC_MEM_Support_Pkg /* _L947=(EVC_MEM_Support_Pkg::maintainTrainProperties#1)/ */ Context_maintainTrainProperties_1;
  outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg /* _L1658=(EVC_MEM_Support_Pkg::MEM_MobileConnectionContext#1)/ */ Context_MEM_MobileConnectionContext_1;
  outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg /* _L1661=(EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext#1)/ */ Context_MEM_MobileRegistrationContext_1;
  outC_probePackets_EVC_MEM_Support_Pkg /* _=(EVC_MEM_Support_Pkg::probePackets#1)/ */ Context_probePackets_1;
  outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg /* _L1510=(EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg#2)/ */ Context_patchEmergencyBrakeMsg_2;
  outC_TrackAtlas_TrackAtlas /* _L1245=(TrackAtlas::TrackAtlas#2)/ */ Context_TrackAtlas_2;
  outC_trainData_trainData_pkg /* _L1204=(trainData_pkg::trainData#2)/ */ Context_trainData_2;
  outC_manageDMI_Input_manage_DMI_Input_Pkg /* _L742=(manage_DMI_Input_Pkg::manageDMI_Input#3)/ */ Context_manageDMI_Input_3;
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg /* _L1254=(CalculateTrainPosition_Pkg::calculateTrainPosition#3)/ */ Context_calculateTrainPosition_3;
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg /* _L763=(Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration#2)/ */ Context_Manage_TrackSideInformation_Integration_2;
  outC_manageTIU_input_input_from_TIU_API_Pkg /* _L815=(input_from_TIU_API_Pkg::manageTIU_input#5)/ */ Context_manageTIU_input_5;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every2;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_LevelList_T_DMI_Types_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  DMI_LevelList_T_DMI_Types_Pkg /* IfBlock1:else:_L7/ */ _L7_else_IfBlock1;
  M_LEVEL /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  TIU_trainStatus_T_TIU_Types_Pkg /* TIU_trainStatus/ */ TIU_trainStatus;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_entryRequest/ */ DMI_entryRequest;
  ReceivedMessage_T_Common_Types_Pkg /* MSG_trackMessage/ */ MSG_trackMessage;
  kcg_bool /* SDM_EOA_overpassed/ */ SDM_EOA_overpassed;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* DMI_TrainData/ */ DMI_TrainData;
  P3_NationalValues_T_Packet_Types_Pkg /* MSG_nationalValues/ */ MSG_nationalValues;
  positionErrors_T_TrainPosition_Types_Pck /* CALC_positionErrors/ */ CALC_positionErrors;
  MSG_Errors_T_Common_Types_Pkg /* MSG_errors/ */ MSG_errors;
  LocationBasedEvents_T_ProvidePositionReport_Pkg /* REP_trackinfo/ */ REP_trackinfo;
  TrainToTrackStatus_T_BG_Types_Pkg /* REP_Train2TrackStatus/ */ REP_Train2TrackStatus;
  kcg_bool /* REP_safetyCriticalFailure/ */ REP_safetyCriticalFailure;
  MRSP_Profile_t_TrackAtlasTypes /* MRSP_profile/ */ MRSP_profile;
  nationValuesForDMI_T_DMI_Types_Pkg /* DMI_NV/ */ DMI_NV;
  movementAuthorityForDMI_T_DMI_Types_Pkg /* DMI_MA/ */ DMI_MA;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* DMI_trainRunningNumber/ */ DMI_trainRunningNumber;
  DMI_To_Modes_T_DMI_Types_Pkg /* DMI_DMItoModes/ */ DMI_DMItoModes;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* ML_AckToDMI/ */ ML_AckToDMI;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* ML_DataFromLocalisation/ */ ML_DataFromLocalisation;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* ML_dataToBG_Management/ */ ML_dataToBG_Management;
  kcg_bool /* ML_ServiceBrakeCmd/ */ ML_ServiceBrakeCmd;
  kcg_bool /* ML_EB_Request/ */ ML_EB_Request;
  kcg_int64 /* MSG_lastAckTextMsgId/ */ MSG_lastAckTextMsgId;
  kcg_bool /* MSG_pendingNTCTransition/ */ MSG_pendingNTCTransition;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* TIU_InputMessage/ */ TIU_InputMessage;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* SMD_DataForML/ */ SMD_DataForML;
  kcg_bool /* EVC_SystemFault/ */ EVC_SystemFault;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* ML_driverLevelTransition/ */ ML_driverLevelTransition;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* ML_ERTMS_capabiities/ */ ML_ERTMS_capabiities;
  kcg_bool /* DMI_updateLevels/ */ DMI_updateLevels;
  M_VERSION /* EVC_ownVersion/ */ EVC_ownVersion;
  kcg_bool /* MSG_BGcheck_applySB/ */ MSG_BGcheck_applySB;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* transport_TextMessageStatusList/ */ transport_TextMessageStatusList;
  kcg_bool /* MSG_badBGPassedtoDMI/ */ MSG_badBGPassedtoDMI;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_driverRequest/ */ DMI_driverRequest;
  kcg_bool /* MSG_MACoverNotFullLength/ */ MSG_MACoverNotFullLength;
  NID_ENGINE /* EVC_nidEngine/ */ EVC_nidEngine;
  trainData_Trigger_T_trainData_Types_pkg /* td_trigger/ */ td_trigger;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_TrainDataAck/ */ DMI_TrainDataAck;
  kcg_bool /* EVC_cabIsOpen/ */ EVC_cabIsOpen;
  P003_OBU_T_TM /* TA_nationalValues/ */ TA_nationalValues;
  DataForDMI_t_TrackAtlasTypes /* TA_toDMI/ */ TA_toDMI;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TA_forSupervision/ */ TA_forSupervision;
  MovementAuthority_t_TrackAtlasTypes /* TA_MA_onboard/ */ TA_MA_onboard;
  T_TRAIN /* EVC_t_Train/ */ EVC_t_Train;
  DataForModeAndLevel_t_TrackAtlasTypes /* TA_forModeLevel/ */ TA_forModeLevel;
  Driver2MAR_T_MA_Request /* TA_fromDriver/ */ TA_fromDriver;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* MSG_toML/ */ MSG_toML;
  kcg_bool /* TA_ces_accepted/ */ TA_ces_accepted;
  kcg_bool /* TA_ces_revoked/ */ TA_ces_revoked;
  kcg_bool /* TA_tripTrain/ */ TA_tripTrain;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* ML_AnnouncedLevelTransitions/ */ ML_AnnouncedLevelTransitions;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* td_out2Radio/ */ td_out2Radio;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TA_bus2RTM/ */ TA_bus2RTM;
  P003_TM_TrainToTrack /* MoRC_P3ng/ */ MoRC_P3ng;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_to_MsgOut/ */ TM_to_MsgOut;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* MoRC_safeRadioConnectionStatus_toDriver/ */ MoRC_safeRadioConnectionStatus_toDriver;
  morcStatus_T_RCM_Session_Types_Pkg /* MoRC_RadioStatus_2/ */ MoRC_RadioStatus_2;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* MoRC_HO_EventsAndPhases/ */ MoRC_HO_EventsAndPhases;
  kcg_bool /* TIU_driverResponseEB/ */ TIU_driverResponseEB;
  TIU_Output_msg_API_TIU_Pkg /* _L161/ */ _L161;
  TIU_commandStatus_T_TIU_Types_Pkg /* _L162/ */ _L162;
  Change_traction_system_T_TIU_Types_Pkg /* _L167/ */ _L167;
  Passenger_door_control_info_T_TIU_Types_Pkg /* _L168/ */ _L168;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg /* _L169/ */ _L169;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L171/ */ _L171;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L318/ */ _L318;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L320/ */ _L320;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L322/ */ _L322;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L324/ */ _L324;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L325/ */ _L325;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg /* _L327/ */ _L327;
  kcg_bool /* _L478/ */ _L478;
  kcg_bool /* _L476/ */ _L476;
  kcg_bool /* _L475/ */ _L475;
  kcg_bool /* _L474/ */ _L474;
  radioManagementMessage_T_Common_Types_Pkg /* _L473/ */ _L473;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L472/ */ _L472;
  morcStatus_T_RCM_Session_Types_Pkg /* _L484/ */ _L484;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L487/ */ _L487;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L489/ */ _L489;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L523/ */ _L523;
  trainPosition_T_TrainPosition_Types_Pck /* _L538/ */ _L538;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L541/ */ _L541;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L568/ */ _L568;
  kcg_bool /* _L578/ */ _L578;
  kcg_bool /* _L600/ */ _L600;
  kcg_bool /* _L601/ */ _L601;
  kcg_bool /* _L624/ */ _L624;
  kcg_bool /* _L637/ */ _L637;
  kcg_bool /* _L636/ */ _L636;
  Brake_command_T_TIU_Types_Pkg /* _L635/ */ _L635;
  SDM_Commands_T_SDM_Types_Pkg /* _L634/ */ _L634;
  Target_T_TargetManagement_types /* _L633/ */ _L633;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L632/ */ _L632;
  trainPosition_T_TrainPosition_Types_Pck /* _L639/ */ _L639;
  Brake_command_T_TIU_Types_Pkg /* _L647/ */ _L647;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L652/ */ _L652;
  Brake_command_T_TIU_Types_Pkg /* _L699/ */ _L699;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L709/ */ _L709;
  kcg_float64 /* _L710/ */ _L710;
  kcg_float64 /* _L711/ */ _L711;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L718/ */ _L718;
  kcg_int64 /* _L719/ */ _L719;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L721/ */ _L721;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L735/ */ _L735;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L742/ */ _L742;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L743/ */ _L743;
  kcg_bool /* _L744/ */ _L744;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L745/ */ _L745;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L746/ */ _L746;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* _L747/ */ _L747;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L748/ */ _L748;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L749/ */ _L749;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L750/ */ _L750;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L751/ */ _L751;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L752/ */ _L752;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L753/ */ _L753;
  kcg_bool /* _L741/ */ _L741;
  MSG_Errors_T_Common_Types_Pkg /* _L766/ */ _L766;
  kcg_bool /* _L765/ */ _L765;
  kcg_bool /* _L764/ */ _L764;
  ReceivedMessage_T_Common_Types_Pkg /* _L763/ */ _L763;
  trainPosition_T_TrainPosition_Types_Pck /* _L772/ */ _L772;
  kcg_bool /* _L776/ */ _L776;
  kcg_bool /* _L777/ */ _L777;
  T_NVCONTACT /* _L783/ */ _L783;
  morcStatus_T_RCM_Session_Types_Pkg /* _L785/ */ _L785;
  connection_ids_T_Handover_Pkg /* _L786/ */ _L786;
  API_TrackSideInput_T_API_Msg_Pkg /* _L792/ */ _L792;
  positionedBGs_T_TrainPosition_Types_Pck /* _L794/ */ _L794;
  Q_NVLOCACC /* _L797/ */ _L797;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L805/ */ _L805;
  positionedBGs_T_TrainPosition_Types_Pck /* _L806/ */ _L806;
  trainPosition_T_TrainPosition_Types_Pck /* _L807/ */ _L807;
  RBC_Communication_T_ProvidePositionReport_Pkg /* _L812/ */ _L812;
  kcg_bool /* _L813/ */ _L813;
  TIU_Input_msg_API_TIU_Pkg /* _L818/ */ _L818;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L815/ */ _L815;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L816/ */ _L816;
  MSG_Errors_T_Common_Types_Pkg /* _L827/ */ _L827;
  LocationBasedEvents_T_ProvidePositionReport_Pkg /* _L828/ */ _L828;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L829/ */ _L829;
  kcg_bool /* _L830/ */ _L830;
  kcg_bool /* _L831/ */ _L831;
  kcg_bool /* _L832/ */ _L832;
  kcg_bool /* _L833/ */ _L833;
  positionErrors_T_TrainPosition_Types_Pck /* _L834/ */ _L834;
  kcg_bool /* _L835/ */ _L835;
  positionErrors_T_TrainPosition_Types_Pck /* _L837/ */ _L837;
  kcg_bool /* _L836/ */ _L836;
  kcg_bool /* _L838/ */ _L838;
  kcg_bool /* _L843/ */ _L843;
  kcg_bool /* _L844/ */ _L844;
  kcg_bool /* _L885/ */ _L885;
  odometry_T_Obu_BasicTypes_Pkg /* _L888/ */ _L888;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L889/ */ _L889;
  nationValuesForDMI_T_DMI_Types_Pkg /* _L890/ */ _L890;
  nationValuesForDMI_T_DMI_Types_Pkg /* _L894/ */ _L894;
  kcg_bool /* _L893/ */ _L893;
  NID_C /* _L891/ */ _L891;
  movementAuthorityForDMI_T_DMI_Types_Pkg /* _L895/ */ _L895;
  movementAuthorityForDMI_T_DMI_Types_Pkg /* _L896/ */ _L896;
  trainData_T_TIU_Types_Pkg /* _L899/ */ _L899;
  kcg_bool /* _L903/ */ _L903;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L904/ */ _L904;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L905/ */ _L905;
  odometry_T_Obu_BasicTypes_Pkg /* _L906/ */ _L906;
  odometry_T_Obu_BasicTypes_Pkg /* _L910/ */ _L910;
  odometry_T_Obu_BasicTypes_Pkg /* _L914/ */ _L914;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L935/ */ _L935;
  MsgSource_T_Common_Types_Pkg /* _L932/ */ _L932;
  kcg_bool /* _L931/ */ _L931;
  MsgSource_T_Common_Types_Pkg /* _L930/ */ _L930;
  kcg_bool /* _L929/ */ _L929;
  kcg_bool /* _L928/ */ _L928;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L937/ */ _L937;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L938/ */ _L938;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L939/ */ _L939;
  trainProperties_T_TrainPosition_Types_Pck /* _L947/ */ _L947;
  trainProperties_T_TrainPosition_Types_Pck /* _L948/ */ _L948;
  P3_NationalValues_T_Packet_Types_Pkg /* _L949/ */ _L949;
  trainProperties_T_TrainPosition_Types_Pck /* _L950/ */ _L950;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L951/ */ _L951;
  trainData_T_TIU_Types_Pkg /* _L952/ */ _L952;
  LocationBasedEvents_T_ProvidePositionReport_Pkg /* _L953/ */ _L953;
  kcg_bool /* _L955/ */ _L955;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L961/ */ _L961;
  Q_LENGTH /* _L963/ */ _L963;
  NID_NTC /* _L965/ */ _L965;
  trainProperties_T_TrainPosition_Types_Pck /* _L971/ */ _L971;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* _L977/ */ _L977;
  kcg_bool /* _L976/ */ _L976;
  kcg_bool /* _L975/ */ _L975;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L974/ */ _L974;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L973/ */ _L973;
  NID_NTC /* _L978/ */ _L978;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L981/ */ _L981;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L982/ */ _L982;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L984/ */ _L984;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L988/ */ _L988;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L993/ */ _L993;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L994/ */ _L994;
  M_MODE /* _L995/ */ _L995;
  M_LEVEL /* _L996/ */ _L996;
  M_MODE /* _L1002/ */ _L1002;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1003/ */ _L1003;
  M_LEVEL /* _L1005/ */ _L1005;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L1006/ */ _L1006;
  kcg_bool /* _L1007/ */ _L1007;
  kcg_bool /* _L1009/ */ _L1009;
  kcg_bool /* _L1015/ */ _L1015;
  Brake_command_T_TIU_Types_Pkg /* _L1016/ */ _L1016;
  kcg_bool /* _L1017/ */ _L1017;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L1018/ */ _L1018;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L1019/ */ _L1019;
  kcg_bool /* _L1020/ */ _L1020;
  kcg_bool /* _L1021/ */ _L1021;
  kcg_bool /* _L1022/ */ _L1022;
  Brake_command_T_TIU_Types_Pkg /* _L1028/ */ _L1028;
  kcg_bool /* _L1027/ */ _L1027;
  kcg_bool /* _L1026/ */ _L1026;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L1025/ */ _L1025;
  kcg_bool /* _L1024/ */ _L1024;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L1023/ */ _L1023;
  kcg_bool /* _L1029/ */ _L1029;
  kcg_bool /* _L1030/ */ _L1030;
  kcg_bool /* _L1031/ */ _L1031;
  kcg_bool /* _L1032/ */ _L1032;
  kcg_int64 /* _L1037/ */ _L1037;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L1038/ */ _L1038;
  trainPosition_T_TrainPosition_Types_Pck /* _L1039/ */ _L1039;
  odometry_T_Obu_BasicTypes_Pkg /* _L1040/ */ _L1040;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L1041/ */ _L1041;
  kcg_bool /* _L1042/ */ _L1042;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L1043/ */ _L1043;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1044/ */ _L1044;
  positionErrors_T_TrainPosition_Types_Pck /* _L1045/ */ _L1045;
  kcg_bool /* _L1047/ */ _L1047;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L1048/ */ _L1048;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L1056/ */ _L1056;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L1057/ */ _L1057;
  kcg_bool /* _L1060/ */ _L1060;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L1076/ */ _L1076;
  cab_ID_T_TIU_Types_Pkg /* _L1077/ */ _L1077;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L1078/ */ _L1078;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L1079/ */ _L1079;
  kcg_bool /* _L1080/ */ _L1080;
  kcg_bool /* _L1086/ */ _L1086;
  kcg_bool /* _L1087/ */ _L1087;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L1088/ */ _L1088;
  kcg_bool /* _L1091/ */ _L1091;
  kcg_bool /* _L1092/ */ _L1092;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L1095/ */ _L1095;
  kcg_int64 /* _L1099/ */ _L1099;
  kcg_bool /* _L1103/ */ _L1103;
  kcg_bool /* _L1104/ */ _L1104;
  kcg_bool /* _L1107/ */ _L1107;
  DMI_LevelList_T_DMI_Types_Pkg /* _L1117/ */ _L1117;
  trainPosition_T_TrainPosition_Types_Pck /* _L1131/ */ _L1131;
  positionedBG_T_TrainPosition_Types_Pck /* _L1132/ */ _L1132;
  kcg_bool /* _L1133/ */ _L1133;
  M_VERSION /* _L1149/ */ _L1149;
  M_VERSION /* _L1152/ */ _L1152;
  kcg_bool /* _L1153/ */ _L1153;
  kcg_bool /* _L1154/ */ _L1154;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1159/ */ _L1159;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L1166/ */ _L1166;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L1168/ */ _L1168;
  trainPosition_T_TrainPosition_Types_Pck /* _L1176/ */ _L1176;
  Q_DIRTRAIN /* _L1177/ */ _L1177;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L1179/ */ _L1179;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L1181/ */ _L1181;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L1182/ */ _L1182;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L1183/ */ _L1183;
  kcg_bool /* _L1185/ */ _L1185;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L1187/ */ _L1187;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L1189/ */ _L1189;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L1191/ */ _L1191;
  kcg_bool /* _L1193/ */ _L1193;
  filterRelatedEvents_T_Common_Types_Pkg /* _L1195/ */ _L1195;
  kcg_bool /* _L1197/ */ _L1197;
  kcg_bool /* _L1199/ */ _L1199;
  Brake_inhibition_command_T_TIU_Types_Pkg /* _L166/ */ _L166;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1200/ */ _L1200;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L1202/ */ _L1202;
  kcg_int64 /* _L1203/ */ _L1203;
  trainData_Trigger_T_trainData_Types_pkg /* _L1205/ */ _L1205;
  trainData_T_TIU_Types_Pkg /* _L1204/ */ _L1204;
  kcg_bool /* _L1206/ */ _L1206;
  TIU_Input_msg_API_TIU_Pkg /* _L1207/ */ _L1207;
  trainData_T_TIU_Types_Pkg /* _L1208/ */ _L1208;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L1209/ */ _L1209;
  trainDataStatus_T_trainData_Types_pkg /* _L1210/ */ _L1210;
  trainData_Trigger_T_trainData_Types_pkg /* _L1213/ */ _L1213;
  trainData_Events_T_trainData_Types_pkg /* _L1215/ */ _L1215;
  NID_ENGINE /* _L1218/ */ _L1218;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1219/ */ _L1219;
  trainData_T_TIU_Types_Pkg /* _L1223/ */ _L1223;
  kcg_bool /* _L1224/ */ _L1224;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1225/ */ _L1225;
  kcg_bool /* _L1228/ */ _L1228;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L1229/ */ _L1229;
  trainDataStatus_T_trainData_Types_pkg /* _L1230/ */ _L1230;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L1232/ */ _L1232;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L1234/ */ _L1234;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L1240/ */ _L1240;
  kcg_bool /* _L1241/ */ _L1241;
  kcg_bool /* _L1242/ */ _L1242;
  kcg_bool /* _L1243/ */ _L1243;
  M_VERSION /* _L1244/ */ _L1244;
  MovementAuthority_t_TrackAtlasTypes /* _L1249/ */ _L1249;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L1248/ */ _L1248;
  DataForDMI_t_TrackAtlasTypes /* _L1247/ */ _L1247;
  DataForModeAndLevel_t_TrackAtlasTypes /* _L1246/ */ _L1246;
  P003_OBU_T_TM /* _L1245/ */ _L1245;
  trainPosition_T_TrainPosition_Types_Pck /* _L1254/ */ _L1254;
  positionedBGs_T_TrainPosition_Types_Pck /* _L1255/ */ _L1255;
  positionErrors_T_TrainPosition_Types_Pck /* _L1256/ */ _L1256;
  odometry_T_Obu_BasicTypes_Pkg /* _L1253/ */ _L1253;
  passedBG_T_BG_Types_Pkg /* _L1252/ */ _L1252;
  trainProperties_T_TrainPosition_Types_Pck /* _L1251/ */ _L1251;
  kcg_bool /* _L1250/ */ _L1250;
  ReceivedMessage_T_Common_Types_Pkg /* _L1258/ */ _L1258;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1259/ */ _L1259;
  trainData_T_TIU_Types_Pkg /* _L1260/ */ _L1260;
  kcg_bool /* _L1261/ */ _L1261;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1262/ */ _L1262;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1267/ */ _L1267;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1266/ */ _L1266;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1265/ */ _L1265;
  P3_NationalValues_T_Packet_Types_Pkg /* _L1272/ */ _L1272;
  P3_NationalValues_T_Packet_Types_Pkg /* _L1273/ */ _L1273;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L1275/ */ _L1275;
  MovementAuthority_t_TrackAtlasTypes /* _L1276/ */ _L1276;
  P3_NationalValues_T_Packet_Types_Pkg /* _L1277/ */ _L1277;
  P003_OBU_T_TM /* _L1278/ */ _L1278;
  NID_STM_DMI_Types_Pkg /* _L1279/ */ _L1279;
  NID_NTC /* _L1280/ */ _L1280;
  Isolation_Status_T_TIU_Types_Pkg /* _L163/ */ _L163;
  trainData_Events_T_trainData_Types_pkg /* _L1300/ */ _L1300;
  kcg_bool /* _L1299/ */ _L1299;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L1297/ */ _L1297;
  kcg_bool /* _L1296/ */ _L1296;
  odometry_T_Obu_BasicTypes_Pkg /* _L1295/ */ _L1295;
  kcg_bool /* _L1294/ */ _L1294;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L1301/ */ _L1301;
  kcg_bool /* _L1302/ */ _L1302;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1314/ */ _L1314;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L1313/ */ _L1313;
  ReceivedMessage_T_Common_Types_Pkg /* _L1315/ */ _L1315;
  DataForDMI_t_TrackAtlasTypes /* _L1319/ */ _L1319;
  kcg_bool /* _L1320/ */ _L1320;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L1321/ */ _L1321;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L1324/ */ _L1324;
  T_TRAIN /* _L1328/ */ _L1328;
  NID_ENGINE /* _L1330/ */ _L1330;
  trainData_T_TIU_Types_Pkg /* _L1333/ */ _L1333;
  MRSP_Profile_t_TrackAtlasTypes /* _L1334/ */ _L1334;
  MRSP_Profile_t_TrackAtlasTypes /* _L1335/ */ _L1335;
  Radio_TrainTrack_Message_T_TM_transitional /* _L1337/ */ _L1337;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L1338/ */ _L1338;
  odometry_T_Obu_BasicTypes_Pkg /* _L1339/ */ _L1339;
  trainProperties_T_TrainPosition_Types_Pck /* _L1340/ */ _L1340;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1341/ */ _L1341;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L1342/ */ _L1342;
  T_TRAIN /* _L1343/ */ _L1343;
  P3_NationalValues_T_Packet_Types_Pkg /* _L1345/ */ _L1345;
  P003_permanent_data_T_TM_baseline2 /* _L1346/ */ _L1346;
  P203V1_OBU_T_TM_baseline2 /* _L1347/ */ _L1347;
  Driver2MAR_T_MA_Request /* _L1349/ */ _L1349;
  Driver2MAR_T_MA_Request /* _L1354/ */ _L1354;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L1362/ */ _L1362;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1363/ */ _L1363;
  MSG_Errors_T_Common_Types_Pkg /* _L1441/ */ _L1441;
  trainDataStatus_T_trainData_Types_pkg /* _L1443/ */ _L1443;
  kcg_bool /* _L1444/ */ _L1444;
  kcg_bool /* _L1449/ */ _L1449;
  kcg_bool /* _L1456/ */ _L1456;
  kcg_bool /* _L1457/ */ _L1457;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L1461/ */ _L1461;
  DataForModeAndLevel_t_TrackAtlasTypes /* _L1462/ */ _L1462;
  DataForModeAndLevel_t_TrackAtlasTypes /* _L1466/ */ _L1466;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L1467/ */ _L1467;
  ReceivedMessage_T_Common_Types_Pkg /* _L1471/ */ _L1471;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L1479/ */ _L1479;
  kcg_bool /* _L1481/ */ _L1481;
  kcg_bool /* _L1482/ */ _L1482;
  ReceivedMessage_T_Common_Types_Pkg /* _L1485/ */ _L1485;
  ReceivedMessage_T_Common_Types_Pkg /* _L1486/ */ _L1486;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1490/ */ _L1490;
  kcg_bool /* _L1489/ */ _L1489;
  kcg_bool /* _L1488/ */ _L1488;
  kcg_bool /* _L1487/ */ _L1487;
  kcg_bool /* _L1491/ */ _L1491;
  kcg_bool /* _L1492/ */ _L1492;
  kcg_bool /* _L1493/ */ _L1493;
  odometry_T_Obu_BasicTypes_Pkg /* _L1495/ */ _L1495;
  ReceivedMessage_T_Common_Types_Pkg /* _L1496/ */ _L1496;
  MSG_Errors_T_Common_Types_Pkg /* _L1497/ */ _L1497;
  probesBalises_T_xdebugSupport_Pkg /* _L1498/ */ _L1498;
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg /* _L1499/ */ _L1499;
  kcg_bool /* _L1500/ */ _L1500;
  T_Data_From_STM_Level_And_Mode_Types_Pkg /* _L1501/ */ _L1501;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L1503/ */ _L1503;
  DataForModeAndLevel_t_TrackAtlasTypes /* _L1510/ */ _L1510;
  NID_BG /* _L1512/ */ _L1512;
  kcg_float64 /* _L1511/ */ _L1511;
  NID_LRBG /* _L1515/ */ _L1515;
  NID_BG /* _L1514/ */ _L1514;
  kcg_float64 /* _L1513/ */ _L1513;
  kcg_bool /* _L1516/ */ _L1516;
  kcg_bool /* _L1517/ */ _L1517;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1521/ */ _L1521;
  kcg_bool /* _L1522/ */ _L1522;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* _L1525/ */ _L1525;
  M_VERSION /* _L1538/ */ _L1538;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1540/ */ _L1540;
  T_TRAIN /* _L1542/ */ _L1542;
  M_VERSION /* _L1543/ */ _L1543;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1552/ */ _L1552;
  P003_TM_TrainToTrack /* _L1558/ */ _L1558;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1562/ */ _L1562;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1563/ */ _L1563;
  NID_MESSAGE /* _L1568/ */ _L1568;
  NID_MESSAGE /* _L1567/ */ _L1567;
  NID_MESSAGE /* _L1566/ */ _L1566;
  NID_MESSAGE /* _L1565/ */ _L1565;
  NID_MESSAGE /* _L1564/ */ _L1564;
  NID_BG /* _L1592/ */ _L1592;
  NID_MESSAGE /* _L1591/ */ _L1591;
  NID_PACKET /* _L1590/ */ _L1590;
  NID_PACKET /* _L1589/ */ _L1589;
  NID_BG /* _L1588/ */ _L1588;
  NID_MESSAGE /* _L1587/ */ _L1587;
  kcg_bool /* _L1586/ */ _L1586;
  API_TrackSideInput_T_API_Msg_Pkg /* _L1593/ */ _L1593;
  kcg_bool /* _L1594/ */ _L1594;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1596/ */ _L1596;
  P003_TM_TrainToTrack /* _L1632/ */ _L1632;
  M_VERSION /* _L1631/ */ _L1631;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L1629/ */ _L1629;
  M_LEVEL /* _L1624/ */ _L1624;
  M_MODE /* _L1623/ */ _L1623;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1622/ */ _L1622;
  mobileHWStatus_Type_MoRC_Pck /* _L1621/ */ _L1621;
  trainProperties_T_TrainPosition_Types_Pck /* _L1617/ */ _L1617;
  radioNetWorkIDs_T_MoRC_Pck /* _L1614/ */ _L1614;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L1613/ */ _L1613;
  kcg_bool /* _L1651/ */ _L1651;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L1650/ */ _L1650;
  kcg_bool /* _L1649/ */ _L1649;
  kcg_bool /* _L1648/ */ _L1648;
  kcg_bool /* _L1647/ */ _L1647;
  kcg_bool /* _L1646/ */ _L1646;
  kcg_bool /* _L1645/ */ _L1645;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1644/ */ _L1644;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1643/ */ _L1643;
  kcg_bool /* _L1642/ */ _L1642;
  kcg_bool /* _L1641/ */ _L1641;
  connection_ids_T_Handover_Pkg /* _L1640/ */ _L1640;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* _L1639/ */ _L1639;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L1638/ */ _L1638;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L1637/ */ _L1637;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L1636/ */ _L1636;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L1635/ */ _L1635;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1634/ */ _L1634;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1633/ */ _L1633;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L1652/ */ _L1652;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L1653/ */ _L1653;
  kcg_bool /* _L1657/ */ _L1657;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L1658/ */ _L1658;
  kcg_bool /* _L1660/ */ _L1660;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L1661/ */ _L1661;
  kcg_int64 /* _L1662/ */ _L1662;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L1663/ */ _L1663;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L1664/ */ _L1664;
  T_TRAIN /* _L1665/ */ _L1665;
  positionedBGs_T_TrainPosition_Types_Pck /* _L1666/ */ _L1666;
  trainPosition_T_TrainPosition_Types_Pck /* _L1667/ */ _L1667;
  ReceivedMessage_T_Common_Types_Pkg /* _L1668/ */ _L1668;
  abilityToHandleCommunicationSessions_Handover_Pkg /* _L1669/ */ _L1669;
  morc_configData_T_RCM_Session_Types_Pkg /* _L1670/ */ _L1670;
  kcg_int64 /* _L1671/ */ _L1671;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1673/ */ _L1673;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L1675/ */ _L1675;
  kcg_bool /* _L1677/ */ _L1677;
  kcg_bool /* _L1676/ */ _L1676;
  kcg_bool /* _L1678/ */ _L1678;
  kcg_bool /* _L1679/ */ _L1679;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1680/ */ _L1680;
  kcg_bool /* _L1681/ */ _L1681;
  kcg_bool /* _L1682/ */ _L1682;
  kcg_bool /* _L1683/ */ _L1683;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L1685/ */ _L1685;
  M_TrainTrack_Message_T_TM_radio_messages /* _L1684/ */ _L1684;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L1687/ */ _L1687;
  M_TrainTrack_Message_T_TM_radio_messages /* _L1686/ */ _L1686;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1688/ */ _L1688;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1689/ */ _L1689;
  T_TRAIN /* _L1691/ */ _L1691;
  M_VERSION /* _L1690/ */ _L1690;
  M_VERSION /* _L1693/ */ _L1693;
  T_TRAIN /* _L1692/ */ _L1692;
  kcg_bool /* _L1699/ */ _L1699;
  kcg_bool /* _L1700/ */ _L1700;
  ReceivedMessage_T_Common_Types_Pkg /* _L1698/ */ _L1698;
  kcg_bool /* _L1706/ */ _L1706;
  radioManagementMessage_T_Common_Types_Pkg /* _L1705/ */ _L1705;
  NID_MN /* _L1712/ */ _L1712;
  NID_RADIO /* _L1711/ */ _L1711;
  NID_MN /* _L1714/ */ _L1714;
  NID_RADIO /* _L1713/ */ _L1713;
  NID_MN /* _L1715/ */ _L1715;
  NID_RADIO /* _L1716/ */ _L1716;
  NID_MESSAGE /* _L1718/ */ _L1718;
  T_TRAIN /* _L1719/ */ _L1719;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* _L1721/ */ _L1721;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1720/ */ _L1720;
  kcg_bool /* _L1723/ */ _L1723;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1724/ */ _L1724;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1738/ */ _L1738;
  kcg_bool /* _L1747/ */ _L1747;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L1746/ */ _L1746;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L1745/ */ _L1745;
  kcg_bool /* _L1744/ */ _L1744;
  kcg_bool /* _L1743/ */ _L1743;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1742/ */ _L1742;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L1741/ */ _L1741;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L1740/ */ _L1740;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1739/ */ _L1739;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L1748/ */ _L1748;
  kcg_bool /* _L1750/ */ _L1750;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L1751/ */ _L1751;
  kcg_bool /* _L1754/ */ _L1754;
  M_LEVEL /* _L1755/ */ _L1755;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1759/ */ _L1759;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1760/ */ _L1760;
  MSG_Errors_T_Common_Types_Pkg /* _L1766/ */ _L1766;
  positionErrors_T_TrainPosition_Types_Pck /* _L1767/ */ _L1767;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1768/ */ _L1768;
  positionErrors_T_TrainPosition_Types_Pck /* _L1769/ */ _L1769;
  MSG_Errors_T_Common_Types_Pkg /* _L1770/ */ _L1770;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L1772/ */ _L1772;
  ReceivedMessage_T_Common_Types_Pkg /* _L1773/ */ _L1773;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1774/ */ _L1774;
  trainPosition_T_TrainPosition_Types_Pck /* _L1775/ */ _L1775;
  trainProperties_T_TrainPosition_Types_Pck /* _L1776/ */ _L1776;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L1777/ */ _L1777;
  kcg_bool /* _L1780/ */ _L1780;
  kcg_bool /* _L1781/ */ _L1781;
  P003_OBU_T_TM /* _L1782/ */ _L1782;
  kcg_bool /* _L1783/ */ _L1783;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1784/ */ _L1784;
  kcg_bool /* _L1788/ */ _L1788;
  ReceivedMessage_T_Common_Types_Pkg /* _L1793/ */ _L1793;
  kcg_bool /* _L1792/ */ _L1792;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1791/ */ _L1791;
  kcg_bool /* _L1789/ */ _L1789;
  kcg_bool /* _L1790/ */ _L1790;
} outC_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* EVC/ */
extern void EVC(
  /* EVC_reset/ */
  kcg_bool _1_EVC_reset,
  /* API_Odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *API_Odometry,
  /* API_SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg API_SystemTime,
  /* API_fromTrack/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_fromTrack,
  /* API_fromDMI/ */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *API_fromDMI,
  /* API_fromTIU/ */
  TIU_Input_msg_API_TIU_Pkg *API_fromTIU,
  /* API_mobileHWStatus/ */
  mobileHWStatus_Type_MoRC_Pck *API_mobileHWStatus,
  /* API_persistentData/ */
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *API_persistentData,
  outC_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVC_reset(outC_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVC_init(outC_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* _L477/ */ Context__L477;
  kcg_bool /* TIU_driverWindowEB/ */ Context_TIU_driverWindowEB;
  M_LEVEL /* ML_MemorizedLevel/ */ Context_ML_MemorizedLevel;
  NID_MN /* MoRC_MN_1/ */ Context_MoRC_MN_1;
  NID_RADIO /* MoRC_RadioID_1/ */ Context_MoRC_RadioID_1;
  morcStatus_T_RCM_Session_Types_Pkg /* MoRC_RadioStatus_1/ */ Context_MoRC_RadioStatus_1;
  kcg_bool /* MoRC_ready/ */ Context_MoRC_ready;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* TA_Packets/ */ Context_TA_Packets;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* rep_P1/ */ Context_rep_P1;
  trainDataStatus_T_trainData_Types_pkg /* td_status/ */ Context_td_status;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* rep_P0/ */ Context_rep_P0;
  trainData_Events_T_trainData_Types_pkg /* td_events/ */ Context_td_events;
  kcg_bool /* PROC_start_ack/ */ Context_PROC_start_ack;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* EVC_TextMessageStatusList/ */ Context_EVC_TextMessageStatusList;
  DMI_LevelList_T_DMI_Types_Pkg /* EVC_ActiveLevelList/ */ Context_EVC_ActiveLevelList;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* EVC_PersistentData/ */ Context_EVC_PersistentData;
  kcg_bool /* MSG_EmergencyBrakeActive/ */ Context_MSG_EmergencyBrakeActive;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* ML_ModeAndLevel/ */ Context_ML_ModeAndLevel;
  NID_NTC /* EVC_currentNTC/ */ Context_EVC_currentNTC;
  T_internal_Type_Obu_BasicTypes_Pkg /* MSG_lastRadioMsgTimestamp/ */ Context_MSG_lastRadioMsgTimestamp;
  kcg_bool /* MoRC_newSessionEstablished/ */ Context_MoRC_newSessionEstablished;
  trainProperties_T_TrainPosition_Types_Pck /* TIU_trainProperties/ */ Context_TIU_trainProperties;
  positionedBGs_T_TrainPosition_Types_Pck /* CALC_BGs/ */ Context_CALC_BGs;
  connection_ids_T_Handover_Pkg /* MoRC_supervisingRBC_Id/ */ Context_MoRC_supervisingRBC_Id;
  trainData_T_TIU_Types_Pkg /* td_trainData/ */ Context_td_trainData;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* DMI_sdmToDMI/ */ Context_DMI_sdmToDMI;
  Brake_command_T_TIU_Types_Pkg /* SDM_speedSupervisionBrakeCommand/ */ Context_SDM_speedSupervisionBrakeCommand;
  trainPosition_T_TrainPosition_Types_Pck /* CALC_TrainPosition/ */ Context_CALC_TrainPosition;
  DMI_EVC_status_T_DMI_Types_Pkg /* DMI_currentDMIStatus/ */ Context_DMI_currentDMIStatus;
  kcg_bool /* PROC_powerOff_to_MoRC/ */ Context_PROC_powerOff_to_MoRC;
  kcg_bool /* PROC_statusstartofmissionongoing_to_MoRC/ */ Context_PROC_statusstartofmissionongoing_to_MoRC;
  kcg_bool /* PROC_powerUp_to_MoRC/ */ Context_PROC_powerUp_to_MoRC;
  radioManagementMessage_T_Common_Types_Pkg /* PROC_radioCmdFromProcedures/ */ Context_PROC_radioCmdFromProcedures;
  kcg_bool _1_Context_init;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_manageTIU_input_input_from_TIU_API_Pkg Context_manageTIU_input_5;
  SV_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg Context_Manage_TrackSideInformation_Integration_2;
  SV_calculateTrainPosition_CalculateTrainPosition_Pkg Context_calculateTrainPosition_3;
  SV_manageDMI_Input_manage_DMI_Input_Pkg Context_manageDMI_Input_3;
  SV_trainData_trainData_pkg Context_trainData_2;
  SV_TrackAtlas_TrackAtlas Context_TrackAtlas_2;
  SV_MEM_combineForLevelChange_EVC_MEM_Support_Pkg Context_MEM_combineForLevelChange_1;
  SV_ManageLevelAndMode Context_ManageLevelAndMode_2;
  SV_ProvidePositionReport_ProvidePositionReport_Pkg Context_ProvidePositionReport_2;
  SV_MoRC_HO_MoRC_HO_Pkg Context_MoRC_HO_1;
  SV_Procedure_TRIP_EVC_MEM_Support_Pkg Context_Procedure_TRIP_2;
  SV_checkGeneralMessage_trainData_pkg Context_checkGeneralMessage_3;
  SV_collectRadioOutput_radioOutput_Pkg Context_collectRadioOutput_1;
  SV_probe_MsgOut_RadioSupport_Pkg Context_probe_MsgOut_3;
  SV_collectRadioOutput_radioOutput_Pkg Context_collectRadioOutput_2;
  SV_setProbes_xdebugSupport_Pkg Context_setProbes_2;
  SV_distanceLastBG_xdebugSupport_Pkg Context_distanceLastBG_2;
  SV_distanceLastMSG_xdebugSupport_Pkg Context_distanceLastMSG_2;
  SV_setProbesBalises_xdebugSupport_Pkg Context_setProbesBalises_2;
  SV_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg Context_SpeedSupervision_Integration_2;
  SV_Master_Procedure_ManageProcedure_Pkg Context_Master_Procedure_2;
  SV_manageDMI_Output_manage_DMI_Output_Pkg Context_manageDMI_Output_2;
  SV_FlipFlopJK_digital Context_FlipFlopJK_2;
  SV_TIU_OutputIntegration_output_to_TIU_API_Pkg Context_TIU_OutputIntegration_2;
} SV_EVC;

extern void kcg_save_SV_EVC(SV_EVC *SV, outC_EVC *outC);
extern void kcg_load_SV_EVC(outC_EVC *outC, SV_EVC *SV);



#endif /* _EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVC.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

