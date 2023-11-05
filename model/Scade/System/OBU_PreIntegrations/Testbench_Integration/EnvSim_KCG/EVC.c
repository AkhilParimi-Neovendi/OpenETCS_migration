/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC.h"

/* EVC/ */
void EVC(
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
  outC_EVC *outC)
{
  static DataForModeAndLevel_t_TrackAtlasTypes op_call;
  /* EVC_PersistentData/ */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg EVC_PersistentData_partial;
  /* EVC_ActiveLevelList/ */
  static DMI_LevelList_T_DMI_Types_Pkg EVC_ActiveLevelList_partial;
  /* ML_MemorizedLevel/ */
  static M_LEVEL ML_MemorizedLevel_partial;
  /* EVC_PersistentData/ */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg _2_EVC_PersistentData_partial;
  /* EVC_ActiveLevelList/ */
  static DMI_LevelList_T_DMI_Types_Pkg _3_EVC_ActiveLevelList_partial;
  /* ML_MemorizedLevel/ */
  static M_LEVEL _4_ML_MemorizedLevel_partial;
  static TIU_commandStatus_T_TIU_Types_Pkg noname;
  static Target_T_TargetManagement_types _5_noname;
  static SDM_Commands_T_SDM_Types_Pkg _6_noname;
  static kcg_bool _7_noname;
  static kcg_bool _8_noname;
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _9_noname;
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _10_noname;
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _11_noname;
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _12_noname;
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _13_noname;
  static kcg_bool _14_noname;
  static trainData_Trigger_T_trainData_Types_pkg _15_noname;
  static kcg_bool _16_noname;
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _17_noname;
  static MovementAuthority_t_TrackAtlasTypes _18_noname;
  static P003_OBU_T_TM _19_noname;
  static MRSP_Profile_t_TrackAtlasTypes _20_noname;
  static DataForModeAndLevel_t_TrackAtlasTypes _21_noname;
  static kcg_bool _22_noname;
  static kcg_bool _23_noname;
  static kcg_bool _24_noname;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _25_noname;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _26_noname;
  static Radio_TrainTrack_Message_T_TM_transitional _27_noname;
  static ReportedBGList_T_ProvidePositionReport_Pkg _28_noname;
  static kcg_bool _29_noname;
  static M_TrainTrack_Message_T_TM_radio_messages _30_noname;
  static RadioManagement_T_API_RadioCommunication_Pkg _31_noname;
  static kcg_bool _32_noname;
  static kcg_bool _33_noname;
  static kcg_bool _34_noname;
  static kcg_bool _35_noname;
  static kcg_bool _36_noname;
  static kcg_bool _37_noname;
  static kcg_bool _38_noname;
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _39_noname;
  static NID_RADIO _40_noname;
  static NID_MN _41_noname;
  static morcStatus_T_RCM_Session_Types_Pkg _42_noname;
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg _43_noname;
  static kcg_bool _44_noname;
  static MSG_Errors_T_Common_Types_Pkg _45_noname;
  static positionErrors_T_TrainPosition_Types_Pck _46_noname;
  static MSG_Errors_T_Common_Types_Pkg _47_noname;
  static kcg_bool _48_noname;
  static positionErrors_T_TrainPosition_Types_Pck _49_noname;
  static morcStatus_T_RCM_Session_Types_Pkg _50_noname;
  /* TIU_driverWindowEB/ */
  static kcg_bool last_TIU_driverWindowEB;
  /* ML_MemorizedLevel/ */
  static M_LEVEL last_ML_MemorizedLevel;
  /* MoRC_MN_1/ */
  static NID_MN last_MoRC_MN_1;
  /* MoRC_RadioID_1/ */
  static NID_RADIO last_MoRC_RadioID_1;
  /* MoRC_RadioStatus_1/ */
  static morcStatus_T_RCM_Session_Types_Pkg last_MoRC_RadioStatus_1;
  /* MoRC_ready/ */
  static kcg_bool last_MoRC_ready;
  /* TA_Packets/ */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg last_TA_Packets;
  /* rep_P1/ */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg last_rep_P1;
  /* td_status/ */
  static trainDataStatus_T_trainData_Types_pkg last_td_status;
  /* rep_P0/ */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg last_rep_P0;
  /* td_events/ */
  static trainData_Events_T_trainData_Types_pkg last_td_events;
  /* PROC_start_ack/ */
  static kcg_bool last_PROC_start_ack;
  /* EVC_TextMessageStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg last_EVC_TextMessageStatusList;
  /* EVC_ActiveLevelList/ */
  static DMI_LevelList_T_DMI_Types_Pkg last_EVC_ActiveLevelList;
  /* EVC_PersistentData/ */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg last_EVC_PersistentData;
  /* MSG_EmergencyBrakeActive/ */
  static kcg_bool last_MSG_EmergencyBrakeActive;
  /* ML_ModeAndLevel/ */
  static T_Mode_Level_Level_And_Mode_Types_Pkg last_ML_ModeAndLevel;
  /* EVC_currentNTC/ */
  static NID_NTC last_EVC_currentNTC;
  /* MSG_lastRadioMsgTimestamp/ */
  static T_internal_Type_Obu_BasicTypes_Pkg last_MSG_lastRadioMsgTimestamp;
  /* MoRC_newSessionEstablished/ */
  static kcg_bool last_MoRC_newSessionEstablished;
  /* TIU_trainProperties/ */
  static trainProperties_T_TrainPosition_Types_Pck last_TIU_trainProperties;
  /* CALC_BGs/ */
  static positionedBGs_T_TrainPosition_Types_Pck last_CALC_BGs;
  /* MoRC_supervisingRBC_Id/ */
  static connection_ids_T_Handover_Pkg last_MoRC_supervisingRBC_Id;
  /* td_trainData/ */
  static trainData_T_TIU_Types_Pkg last_td_trainData;
  /* DMI_sdmToDMI/ */
  static speedSupervisionForDMI_T_DMI_Types_Pkg last_DMI_sdmToDMI;
  /* SDM_speedSupervisionBrakeCommand/ */
  static Brake_command_T_TIU_Types_Pkg last_SDM_speedSupervisionBrakeCommand;
  /* CALC_TrainPosition/ */
  static trainPosition_T_TrainPosition_Types_Pck last_CALC_TrainPosition;
  /* DMI_currentDMIStatus/ */
  static DMI_EVC_status_T_DMI_Types_Pkg last_DMI_currentDMIStatus;
  /* PROC_powerOff_to_MoRC/ */
  static kcg_bool last_PROC_powerOff_to_MoRC;
  /* PROC_statusstartofmissionongoing_to_MoRC/ */
  static kcg_bool last_PROC_statusstartofmissionongoing_to_MoRC;
  /* PROC_powerUp_to_MoRC/ */
  static kcg_bool last_PROC_powerUp_to_MoRC;
  /* PROC_radioCmdFromProcedures/ */
  static radioManagementMessage_T_Common_Types_Pkg last_PROC_radioCmdFromProcedures;

  outC->_L1517 = kcg_true;
  outC->every2 = outC->_L1517;
  outC->_L777 = kcg_true;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L792, API_fromTrack);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L910, API_Odometry);
  outC->_L776 = _1_EVC_reset;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &last_CALC_TrainPosition,
    &outC->CALC_TrainPosition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L772,
    &last_CALC_TrainPosition);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &last_ML_ModeAndLevel,
    &outC->ML_ModeAndLevel);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L993,
    &last_ML_ModeAndLevel);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1345,
    (P3_NationalValues_T_Packet_Types_Pkg *)
      &cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->MSG_nationalValues,
    &outC->_L1345);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1277,
    &outC->MSG_nationalValues);
  outC->_L783 = outC->_L1277.t_nvcontact;
  outC->_L1244 = cOwnVersion;
  outC->EVC_ownVersion = outC->_L1244;
  outC->_L1149 = outC->EVC_ownVersion;
  last_MSG_lastRadioMsgTimestamp = outC->MSG_lastRadioMsgTimestamp;
  outC->_L939 = last_MSG_lastRadioMsgTimestamp;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &last_MoRC_RadioStatus_1,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L785,
    &last_MoRC_RadioStatus_1);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &last_MoRC_supervisingRBC_Id,
    &outC->MoRC_supervisingRBC_Id);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->_L786,
    &last_MoRC_supervisingRBC_Id);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &last_CALC_BGs,
    &outC->CALC_BGs);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L794, &last_CALC_BGs);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1272,
    &outC->MSG_nationalValues);
  outC->_L797 = outC->_L1272.q_nvlocacc;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L818, API_fromTIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(&last_td_trainData, &outC->td_trainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1223, &last_td_trainData);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1784,
    &last_ML_ModeAndLevel);
  last_TIU_driverWindowEB = outC->TIU_driverWindowEB;
  outC->_L1788 = last_TIU_driverWindowEB;
  /* _L815=(input_from_TIU_API_Pkg::manageTIU_input#5)/ */
  manageTIU_input_input_from_TIU_API_Pkg(
    &outC->_L818,
    &outC->_L1223,
    &outC->_L1784,
    outC->_L1788,
    &outC->Context_manageTIU_input_5);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L815,
    &outC->Context_manageTIU_input_5.outTIUStatus);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L816,
    &outC->Context_manageTIU_input_5.outTIUCurrentInfo);
  outC->_L1783 = outC->Context_manageTIU_input_5.outRevokeEB;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->TIU_trainStatus, &outC->_L815);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L1006, &outC->TIU_trainStatus);
  outC->_L1007 = outC->_L1006.deskOpen;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &last_td_status,
    &outC->td_status);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L1230, &last_td_status);
  outC->_L1009 = outC->_L1230.validatedbyRBC;
  outC->_L1481 = kcg_false;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L1443, &last_td_status);
  outC->_L1444 = outC->_L1443.waitingForRBCResponse;
  outC->_L1449 = kcg_false;
  outC->_L1099 = kcg_lit_int32(0);
  outC->MSG_lastAckTextMsgId = outC->_L1099;
  outC->_L1037 = outC->MSG_lastAckTextMsgId;
  outC->_L1086 = kcg_false;
  outC->MSG_pendingNTCTransition = outC->_L1086;
  outC->_L1015 = outC->MSG_pendingNTCTransition;
  outC->_L1482 = kcg_false;
  outC->MSG_MACoverNotFullLength = outC->_L1086;
  outC->_L1197 = outC->MSG_MACoverNotFullLength;
  outC->_L1195.pendingL1Transition = outC->_L1481;
  outC->_L1195.pendingL12L3Transition = outC->_L1481;
  outC->_L1195.pendingAckOfTrainDataFromRBC = outC->_L1444;
  outC->_L1195.emergencyStopAccepted = outC->_L1449;
  outC->_L1195.lastAckTextMessageId = outC->_L1037;
  outC->_L1195.pendingNTCTransition = outC->_L1015;
  outC->_L1195.SPPAndGradientOnBoard = outC->_L1482;
  outC->_L1195.MACoverNotFullLength = outC->_L1197;
  /* _L763=(Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration#2)/ */
  Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
    outC->_L777,
    &outC->_L792,
    &outC->_L910,
    outC->_L776,
    &outC->_L772,
    &outC->_L993,
    outC->_L783,
    outC->_L1149,
    outC->_L939,
    &outC->_L785,
    &outC->_L786,
    &outC->_L794,
    outC->_L797,
    outC->_L1007,
    outC->_L1009,
    &outC->_L1195,
    &outC->Context_Manage_TrackSideInformation_Integration_2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L763,
    &outC->Context_Manage_TrackSideInformation_Integration_2.outputMessage);
  outC->_L764 =
    outC->Context_Manage_TrackSideInformation_Integration_2.ApplyServiceBrake;
  outC->_L765 =
    outC->Context_Manage_TrackSideInformation_Integration_2.BadBaliseMessageToDMI;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L766,
    &outC->Context_Manage_TrackSideInformation_Integration_2.outCheckErrors);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L1777,
    &outC->Context_Manage_TrackSideInformation_Integration_2.IF_toML);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->MSG_trackMessage,
    &outC->_L763);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1471,
    &outC->MSG_trackMessage);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1259,
    &last_ML_ModeAndLevel);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1260, &last_td_trainData);
  outC->_L1261 = outC->_L1260.valid;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1253, API_Odometry);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L1252,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1258,
    &outC->MSG_trackMessage);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &last_TIU_trainProperties,
    &outC->TIU_trainProperties);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1251,
    &last_TIU_trainProperties);
  outC->_L1250 = _1_EVC_reset;
  /* _L1254=(CalculateTrainPosition_Pkg::calculateTrainPosition#3)/ */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    &outC->_L1253,
    &outC->_L1252,
    &outC->_L1258,
    &outC->_L1251,
    outC->_L1250,
    &outC->Context_calculateTrainPosition_3);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1254,
    &outC->Context_calculateTrainPosition_3.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L1255,
    &outC->Context_calculateTrainPosition_3.BGs);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1256,
    &outC->Context_calculateTrainPosition_3.errors);
  outC->_L1262 = outC->_L1260.trainLength;
  outC->_L1338 = API_SystemTime;
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &last_DMI_sdmToDMI,
    &outC->DMI_sdmToDMI);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L1362,
    &last_DMI_sdmToDMI);
  outC->_L1363 = outC->_L1362.location_brake_curve_starting_point;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1339, API_Odometry);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L735, API_fromDMI);
  outC->_L741 = _1_EVC_reset;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &last_EVC_TextMessageStatusList,
    &outC->EVC_TextMessageStatusList);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1179,
    &last_EVC_TextMessageStatusList);
  outC->_L1181 = API_SystemTime;
  last_EVC_currentNTC = outC->EVC_currentNTC;
  outC->_L1280 = last_EVC_currentNTC;
  /* _L742=(manage_DMI_Input_Pkg::manageDMI_Input#3)/ */
  manageDMI_Input_manage_DMI_Input_Pkg(
    &outC->_L735,
    outC->_L741,
    &outC->_L1179,
    outC->_L1181,
    outC->_L1280,
    &outC->Context_manageDMI_Input_3);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L742,
    &outC->Context_manageDMI_Input_3.currentDMIStatus);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L743,
    &outC->Context_manageDMI_Input_3.fromDMI_Identifier);
  outC->_L744 = outC->Context_manageDMI_Input_3.outUpdateLevelsDMI;
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L745,
    &outC->Context_manageDMI_Input_3.fromDMI_DriverIdentifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L746,
    &outC->Context_manageDMI_Input_3.fromDMI_TrainRunningNumber);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L747,
    &outC->Context_manageDMI_Input_3.fromDMI_RadioNetData);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L748,
    &outC->Context_manageDMI_Input_3.fromDMI_Icon_Ack);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L749,
    &outC->Context_manageDMI_Input_3.fromDMI_TrainData);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L750,
    &outC->Context_manageDMI_Input_3.fromDMI_TrainDataAck);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L751,
    &outC->Context_manageDMI_Input_3.fromDMI_AdhesionFactor);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
    &outC->_L752,
    &outC->Context_manageDMI_Input_3.forModesAndLevel);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L753,
    &outC->Context_manageDMI_Input_3.ML_levelTransition);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1187,
    &outC->Context_manageDMI_Input_3.outStatusList);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1232,
    &outC->Context_manageDMI_Input_3.outDriverRequest);
  outC->_L1279 = outC->Context_manageDMI_Input_3.updatedNTC;
  kcg_copy_Driver2MAR_T_MA_Request(
    &outC->_L1354,
    &outC->Context_manageDMI_Input_3.outForMA);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->TA_fromDriver, &outC->_L1354);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L1349, &outC->TA_fromDriver);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1340,
    &last_TIU_trainProperties);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &last_rep_P0,
    &outC->rep_P0);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L1341,
    &last_rep_P0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &last_rep_P1,
    &outC->rep_P1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1342,
    &last_rep_P1);
  outC->_L1324 = API_SystemTime;
  outC->EVC_t_Train = outC->_L1324;
  outC->_L1343 = outC->EVC_t_Train;
  kcg_copy_P203V1_OBU_T_TM_baseline2(
    &outC->_L1347,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_PermanentData_Pkg);
  kcg_copy_P003_permanent_data_T_TM_baseline2(
    &outC->_L1346,
    (P003_permanent_data_T_TM_baseline2 *)
      &cP003_PermanentData_EVC_PermanentData_Pkg);
  outC->_L1206 = _1_EVC_reset;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L1207, API_fromTIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L1208,
    &outC->_L1207.info.train_data_info);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_TrainData,
    &outC->_L749);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L1209,
    &outC->DMI_TrainData);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_TrainDataAck,
    &outC->_L750);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1234,
    &outC->DMI_TrainDataAck);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1485,
    &outC->MSG_trackMessage);
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &last_td_events,
    &outC->td_events);
  kcg_copy_trainData_Events_T_trainData_Types_pkg(&outC->_L1215, &last_td_events);
  outC->_L1203 = kcg_lit_int32(4065801);
  outC->EVC_nidEngine = outC->_L1203;
  outC->_L1218 = outC->EVC_nidEngine;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L1219,
    &last_rep_P0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1321,
    &last_rep_P1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1738,
    (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *) &cNoBus_trainData_pkg);
  outC->_L1538 = outC->EVC_ownVersion;
  outC->_L1328 = outC->EVC_t_Train;
  /* _L1204=(trainData_pkg::trainData#2)/ */
  trainData_trainData_pkg(
    outC->_L1206,
    &outC->_L1208,
    &outC->_L1209,
    &outC->_L1234,
    &outC->_L1485,
    &outC->_L1215,
    outC->_L1218,
    &outC->_L1219,
    &outC->_L1321,
    &outC->_L1738,
    outC->_L1538,
    outC->_L1328,
    &outC->Context_trainData_2);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L1204,
    &outC->Context_trainData_2.actualTrainData);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->_L1205,
    &outC->Context_trainData_2.triggerFromTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L1210,
    &outC->Context_trainData_2.updatedStatus);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1225,
    &outC->Context_trainData_2.outMessageBus);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->td_out2Radio,
    &outC->_L1225);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1552,
    &outC->td_out2Radio);
  /* _L1245=(TrackAtlas::TrackAtlas#2)/ */
  TrackAtlas_TrackAtlas(
    &outC->_L1471,
    &outC->_L1259,
    outC->_L1261,
    &outC->_L1254,
    outC->_L1262,
    outC->_L1338,
    outC->_L1363,
    &outC->_L1339,
    &outC->_L1349,
    &outC->_L1340,
    &outC->_L1341,
    &outC->_L1342,
    outC->_L1343,
    &outC->_L1347,
    &outC->_L1346,
    &outC->_L1552,
    &outC->_L1255,
    &outC->Context_TrackAtlas_2);
  kcg_copy_P003_OBU_T_TM(&outC->_L1245, &outC->Context_TrackAtlas_2.NV_raw_out);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L1246,
    &outC->Context_TrackAtlas_2.To_ModeAndLevel);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(
    &outC->_L1247,
    &outC->Context_TrackAtlas_2.to_DMI);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L1248,
    &outC->Context_TrackAtlas_2.to_Supervision);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L1249,
    &outC->Context_TrackAtlas_2.MA_onboard_out);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L1335,
    &outC->Context_TrackAtlas_2.MRSP);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->_L1337,
    &outC->Context_TrackAtlas_2.message147);
  outC->_L1487 = outC->Context_TrackAtlas_2.ces_accepted;
  outC->_L1488 = outC->Context_TrackAtlas_2.ces_revoked;
  outC->_L1489 = outC->Context_TrackAtlas_2.trip_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1490,
    &outC->Context_TrackAtlas_2.bus_out);
  if (outC->every2) {
    /* _L1510=(EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg#2)/ */
    patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg(
      &outC->_L1246,
      &outC->Context_patchEmergencyBrakeMsg_2);
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
      &op_call,
      &outC->Context_patchEmergencyBrakeMsg_2.outToML);
  }
  outC->_L1781 = kcg_true;
  outC->every = outC->_L1781;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1593, API_fromTrack);
  if (outC->every) {
    /* _=(EVC_MEM_Support_Pkg::probePackets#1)/ */
    probePackets_EVC_MEM_Support_Pkg(
      &outC->_L1593,
      &outC->Context_probePackets_1);
  }
  last_ML_MemorizedLevel = outC->ML_MemorizedLevel;
  last_MoRC_MN_1 = outC->MoRC_MN_1;
  last_MoRC_RadioID_1 = outC->MoRC_RadioID_1;
  last_MoRC_ready = outC->MoRC_ready;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &last_TA_Packets,
    &outC->TA_Packets);
  last_PROC_start_ack = outC->PROC_start_ack;
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
    &last_EVC_ActiveLevelList,
    &outC->EVC_ActiveLevelList);
  kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
    &last_EVC_PersistentData,
    &outC->EVC_PersistentData);
  last_MSG_EmergencyBrakeActive = outC->MSG_EmergencyBrakeActive;
  last_MoRC_newSessionEstablished = outC->MoRC_newSessionEstablished;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &last_SDM_speedSupervisionBrakeCommand,
    &outC->SDM_speedSupervisionBrakeCommand);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &last_DMI_currentDMIStatus,
    &outC->DMI_currentDMIStatus);
  last_PROC_powerOff_to_MoRC = outC->PROC_powerOff_to_MoRC;
  last_PROC_statusstartofmissionongoing_to_MoRC =
    outC->PROC_statusstartofmissionongoing_to_MoRC;
  last_PROC_powerUp_to_MoRC = outC->PROC_powerUp_to_MoRC;
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &last_PROC_radioCmdFromProcedures,
    &outC->PROC_radioCmdFromProcedures);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1622,
    &last_ML_ModeAndLevel);
  outC->_L1623 = outC->_L1622.Mode;
  outC->_L1624 = outC->_L1622.level;
  outC->_L1676 = last_PROC_powerUp_to_MoRC;
  outC->_L1677 = last_PROC_powerOff_to_MoRC;
  outC->_L1679 = kcg_false;
  outC->_L1678 = last_PROC_statusstartofmissionongoing_to_MoRC;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1680,
    &last_ML_ModeAndLevel);
  outC->_L1681 = outC->_L1680.newLevel;
  outC->_L1682 = kcg_false;
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->_L1705,
    &last_PROC_radioCmdFromProcedures);
  outC->_L1706 = outC->_L1705.valid;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L1751, &outC->TIU_trainStatus);
  outC->_L1750 = outC->_L1751.deskOpen;
  outC->_L1754 = !outC->_L1750;
  outC->_L1683 = kcg_false;
  outC->_L1675.atPowerUp = outC->_L1676;
  outC->_L1675.atPowerDown = outC->_L1677;
  outC->_L1675.atStartOfMission = outC->_L1679;
  outC->_L1675.modeChangeHasToBeReportedToRBC = outC->_L1678;
  outC->_L1675.driverHasManuallyChangedLevel_to_2_or_3 = outC->_L1679;
  outC->_L1675.trainFrontPassesStartOfAnnouncedRadioHole = outC->_L1679;
  outC->_L1675.trainFrontReachesEndOfAnnouncedRadioHole = outC->_L1679;
  outC->_L1675.trainFrontInsideInAnAnnouncedRadioHole = outC->_L1679;
  outC->_L1675.trainFrontPassesALevelTransitionBorder = outC->_L1681;
  outC->_L1675.trainFrontPassesA_RBC_RBC_border = outC->_L1682;
  outC->_L1675.startOfMissionProcedureCompleted_in_level_2_or_3 = outC->_L1682;
  outC->_L1675.isPartOfAnOngoingStartOfMissionProcedure = outC->_L1706;
  outC->_L1675.startOfMissionProcedureIsGoingOn = outC->_L1678;
  outC->_L1675.endOfMissionIsExecuted = outC->_L1754;
  outC->_L1675.triggerDecisionThatNoRadioNetworkIDAvailable = outC->_L1683;
  outC->_L1675.errorConditionRequiringTerminationDetected = outC->_L1683;
  outC->_L1675.trainIsRejectedByRBC_duringStartOfMission = outC->_L1683;
  outC->_L1675.driverClosesTheDeskduringStartOfMission = outC->_L1754;
  outC->_L1675.trainExitedFromAnRBCArea = outC->_L1683;
  outC->_L1675.isInCommunicationSessionWithAnRIU = outC->_L1683;
  outC->_L1675.level_1_isLeft = outC->_L1683;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->MoRC_HO_EventsAndPhases,
    &outC->_L1675);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L1613,
    &outC->MoRC_HO_EventsAndPhases);
  kcg_copy_radioNetWorkIDs_T_MoRC_Pck(
    &outC->_L1614,
    (radioNetWorkIDs_T_MoRC_Pck *) &cEmptyRadioNetworkIds);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L1652,
    &outC->_L1614.memorizedID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L1653,
    &outC->_L1614.ID_fromDriver);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L1621, API_mobileHWStatus);
  outC->_L1662 = kcg_lit_int32(0);
  outC->_L1715 = last_MoRC_MN_1;
  /* _L1661=(EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext#1)/ */
  MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg(
    &outC->_L1621,
    outC->_L1662,
    outC->_L1715,
    &outC->Context_MEM_MobileRegistrationContext_1);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L1661,
    &outC->Context_MEM_MobileRegistrationContext_1.MobileRegistrationContext);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L1664,
    (mobileRegistrationContext_T_RCM_Types_Pkg *) &cNoMobileRegistrationContext);
  outC->_L1671 = kcg_lit_int32(0);
  outC->_L1716 = last_MoRC_RadioID_1;
  outC->_L1660 = kcg_false;
  /* _L1658=(EVC_MEM_Support_Pkg::MEM_MobileConnectionContext#1)/ */
  MEM_MobileConnectionContext_EVC_MEM_Support_Pkg(
    &outC->_L1621,
    outC->_L1671,
    outC->_L1716,
    outC->_L1660,
    &outC->Context_MEM_MobileConnectionContext_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1658,
    &outC->Context_MEM_MobileConnectionContext_1.MobileConnectionContext);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1663,
    (mobileConnectionContext_T_RCM_Types_Pkg *) &cNoMobileConnectionContext);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1668,
    &outC->MSG_trackMessage);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    &outC->_L1255);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L806, &outC->CALC_BGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    &outC->_L1254);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L807,
    &outC->CALC_TrainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L906, API_Odometry);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L950,
    &last_TIU_trainProperties);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_trainRunningNumber,
    &outC->_L746);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L951,
    &outC->DMI_trainRunningNumber);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L952, &last_td_trainData);
  outC->_L1330 = outC->EVC_nidEngine;
  /* _L947=(EVC_MEM_Support_Pkg::maintainTrainProperties#1)/ */
  maintainTrainProperties_EVC_MEM_Support_Pkg(
    &outC->_L950,
    &outC->_L951,
    &outC->_L952,
    outC->_L1330,
    &outC->Context_maintainTrainProperties_1);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L947,
    &outC->Context_maintainTrainProperties_1.UpdatedtrainProperties);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->TIU_trainProperties,
    &outC->_L947);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L971,
    &outC->TIU_trainProperties);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L953,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *) &cEmptyLocationBasedEvents);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->REP_trackinfo,
    &outC->_L953);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L828,
    &outC->REP_trackinfo);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1315,
    &outC->MSG_trackMessage);
  outC->_L905 = API_SystemTime;
  outC->_L813 = last_MoRC_newSessionEstablished;
  outC->_L812.newSessionEstablished = outC->_L813;
  outC->EVC_currentNTC = outC->_L1279;
  outC->_L965 = outC->EVC_currentNTC;
  outC->_L963 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L961.nid_ntc = outC->_L965;
  outC->_L961.q_length = outC->_L963;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->REP_Train2TrackStatus,
    &outC->_L961);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->_L829,
    &outC->REP_Train2TrackStatus);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1176,
    &outC->CALC_TrainPosition);
  outC->_L1177 = outC->_L1176.trainRunningDirectionToLRBG;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->CALC_positionErrors,
    &outC->_L1256);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L834,
    &outC->CALC_positionErrors);
  outC->_L835 = outC->_L834.BG_LinkingConsistencyError;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->MSG_errors, &outC->_L766);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L827, &outC->MSG_errors);
  outC->_L830 = outC->_L827.linkedBGError;
  outC->_L831 = outC->_L827.unlinkedBGError;
  outC->_L832 = outC->_L827.radioMessageConsistencyError;
  outC->_L833 = outC->_L827.radioSequenceError;
  outC->_L844 = kcg_false;
  outC->_L955 = kcg_false;
  outC->REP_safetyCriticalFailure = outC->_L955;
  outC->_L843 = outC->REP_safetyCriticalFailure;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L837,
    &outC->CALC_positionErrors);
  outC->_L836 = outC->_L837.twoConsecutiveLinkedBGs_missed;
  outC->_L838 = outC->_L837.doubleRepositioningError;
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->DMI_DMItoModes, &outC->_L752);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->_L982, &outC->DMI_DMItoModes);
  outC->_L1047 = kcg_false;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1769,
    (positionErrors_T_TrainPosition_Types_Pck *) &cNoPositioningErrors);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1039,
    &outC->CALC_TrainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1040, API_Odometry);
  outC->_L1044 = outC->_L1040.speed.v_safeNominal;
  outC->_L1043 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1041 = outC->_L1040.motionState;
  outC->_L1042 = outC->_L1041 == outC->_L1043;
  outC->_L1038.BG_In_List_Expected_BG_In_SR = outC->_L1047;
  outC->_L1038.BG_In_List_Expected_BG_In_SH = outC->_L1047;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1038.PositionErrors,
    &outC->_L1769);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1038.Train_Position,
    &outC->_L1039);
  outC->_L1038.Train_Speed = outC->_L1044;
  outC->_L1038.Train_Standstill = outC->_L1042;
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->ML_DataFromLocalisation,
    &outC->_L1038);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L984,
    &outC->ML_DataFromLocalisation);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->TIU_InputMessage,
    &outC->_L816);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L1048,
    &outC->TIU_InputMessage);
  if (outC->every2) {
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L1510, &op_call);
  }
  else {
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L1510, &outC->_L1246);
  }
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->TA_forModeLevel,
    &outC->_L1510);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L1466,
    &outC->TA_forModeLevel);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L1467,
    &outC->_L1466.train_messages);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1773,
    &outC->MSG_trackMessage);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1774,
    &last_ML_ModeAndLevel);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1775,
    &outC->CALC_TrainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1776,
    &outC->TIU_trainProperties);
  kcg_copy_P003_OBU_T_TM(&outC->TA_nationalValues, &outC->_L1245);
  kcg_copy_P003_OBU_T_TM(&outC->_L1782, &outC->TA_nationalValues);
  /* _L1772=(EVC_MEM_Support_Pkg::MEM_combineForLevelChange#1)/ */
  MEM_combineForLevelChange_EVC_MEM_Support_Pkg(
    &outC->_L1773,
    &outC->_L1774,
    &outC->_L1775,
    &outC->_L1776,
    &outC->_L1782,
    &outC->Context_MEM_combineForLevelChange_1);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L1772,
    &outC->Context_MEM_combineForLevelChange_1.Data_From_Track_Packets_at_ML);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->TA_Packets,
    &outC->_L1772);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L1503,
    &outC->TA_Packets);
  outC->_L1080 = kcg_false;
  outC->_L1057.Estim_front_End_overpass_SR_Dist = outC->_L1080;
  outC->_L1057.Estim_Front_End_Rear_SSP = outC->_L1080;
  outC->_L1057.Override_Function_Active = outC->_L1080;
  outC->_L1057.EOA_Antenna_Overpass = outC->_L1080;
  outC->_L1057.EOA_Front_End = outC->_L1080;
  outC->_L1057.Train_Speed_Under_Overide_Limit = outC->_L1080;
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->SMD_DataForML,
    &outC->_L1057);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L1056,
    &outC->SMD_DataForML);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L1076, &outC->TIU_trainStatus);
  outC->_L1077 = outC->_L1076.ownCab;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->ML_driverLevelTransition,
    &outC->_L753);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L1078,
    &outC->ML_driverLevelTransition);
  outC->_L1091 = kcg_true;
  outC->_L1092 = kcg_false;
  outC->_L1088.NTC = outC->_L1091;
  outC->_L1088.L0 = outC->_L1091;
  outC->_L1088.L1 = outC->_L1091;
  outC->_L1088.L2 = outC->_L1091;
  outC->_L1088.L3 = outC->_L1092;
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->ML_ERTMS_capabiities,
    &outC->_L1088);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L1079,
    &outC->ML_ERTMS_capabiities);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->MSG_toML,
    &outC->_L1777);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L1461,
    &outC->MSG_toML);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L1770,
    (MSG_Errors_T_Common_Types_Pkg *) &cNoMsgErrors);
  outC->_L1087 = kcg_false;
  outC->EVC_SystemFault = outC->_L1087;
  outC->_L1060 = outC->EVC_SystemFault;
  outC->_L1500 = kcg_false;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L1499.Common_Errors,
    &outC->_L1770);
  outC->_L1499.Failure_Occured = outC->_L1060;
  outC->_L1499.Continue_Shunting_Active = outC->_L1500;
  outC->_L1499.Stop_Shunting_Stored = outC->_L1500;
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(
    &outC->_L1501,
    (T_Data_From_STM_Level_And_Mode_Types_Pkg *) &cEmptyData_From_STM);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L1240, &outC->TIU_trainStatus);
  outC->_L1242 = outC->_L1240.deskOpen;
  outC->_L1241 = outC->_L1240.valid;
  outC->_L1243 = outC->_L1241 & outC->_L1242;
  outC->EVC_cabIsOpen = outC->_L1243;
  outC->IfBlock1_clock = outC->EVC_cabIsOpen;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &outC->_L9_then_IfBlock1,
      &last_ML_ModeAndLevel);
    outC->_L8_then_IfBlock1 = outC->_L9_then_IfBlock1.level;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->_L3_then_IfBlock1,
      &last_EVC_PersistentData);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->_L5_then_IfBlock1,
      API_persistentData);
    /* IfBlock1:then:_L1= */
    if (outC->init) {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->_L1_then_IfBlock1,
        &outC->_L5_then_IfBlock1);
    }
    else {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->_L1_then_IfBlock1,
        &outC->_L3_then_IfBlock1);
    }
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &EVC_PersistentData_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->_L6_then_IfBlock1,
      &EVC_PersistentData_partial);
    outC->_L7_then_IfBlock1 = outC->_L6_then_IfBlock1.lastActiveLevel;
    /* IfBlock1:then:_L10= */
    if (outC->init) {
      outC->_L10_then_IfBlock1 = outC->_L7_then_IfBlock1;
    }
    else {
      outC->_L10_then_IfBlock1 = outC->_L8_then_IfBlock1;
    }
    ML_MemorizedLevel_partial = outC->_L10_then_IfBlock1;
    outC->ML_MemorizedLevel = ML_MemorizedLevel_partial;
  }
  else {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &outC->_L6_else_IfBlock1,
      &last_ML_ModeAndLevel);
    outC->_L5_else_IfBlock1 = outC->_L6_else_IfBlock1.level;
    _4_ML_MemorizedLevel_partial = outC->_L5_else_IfBlock1;
    outC->ML_MemorizedLevel = _4_ML_MemorizedLevel_partial;
  }
  outC->_L1755 = outC->ML_MemorizedLevel;
  /* _L973=(ManageLevelAndMode#2)/ */
  ManageLevelAndMode(
    &outC->_L982,
    &outC->_L984,
    &outC->_L1048,
    &outC->_L1467,
    &outC->_L1503,
    &outC->_L1056,
    outC->_L1077,
    &outC->_L1078,
    &outC->_L1079,
    &outC->_L1461,
    &outC->_L1499,
    &outC->_L1501,
    outC->_L1755,
    &outC->Context_ManageLevelAndMode_2);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L973,
    &outC->Context_ManageLevelAndMode_2.Compatible_Mode_And_Level);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L974,
    &outC->Context_ManageLevelAndMode_2.Data_To_BG_Management);
  outC->_L975 = outC->Context_ManageLevelAndMode_2.Service_Brake_Command;
  outC->_L976 = outC->Context_ManageLevelAndMode_2.EB_Requested;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->_L977,
    &outC->Context_ManageLevelAndMode_2.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L1479,
    &outC->Context_ManageLevelAndMode_2.Data_To_DMI_Ack);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    &outC->_L973);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L994,
    &outC->ML_ModeAndLevel);
  outC->_L995 = outC->_L994.Mode;
  outC->_L996 = outC->_L994.level;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1521,
    &outC->ML_ModeAndLevel);
  outC->_L1522 = outC->_L1521.newLevel;
  outC->_L1166.currMode = outC->_L995;
  outC->_L1166.currLevel = outC->_L996;
  outC->_L1166.levelTransitionBorderPassed = outC->_L1522;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L1168,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->TA_bus2RTM,
    &outC->_L1490);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1562,
    &outC->TA_bus2RTM);
  outC->_L1543 = outC->EVC_ownVersion;
  outC->_L1542 = outC->EVC_t_Train;
  /* _L805=(ProvidePositionReport_Pkg::ProvidePositionReport#2)/ */
  ProvidePositionReport_ProvidePositionReport_Pkg(
    &outC->_L806,
    &outC->_L807,
    &outC->_L906,
    &outC->_L971,
    &outC->_L828,
    &outC->_L1315,
    outC->_L905,
    &outC->_L812,
    &outC->_L829,
    outC->_L1177,
    outC->_L835,
    outC->_L830,
    outC->_L831,
    outC->_L832,
    outC->_L833,
    outC->_L844,
    outC->_L843,
    outC->_L836,
    outC->_L838,
    &outC->_L1166,
    &outC->_L1168,
    &outC->_L1562,
    outC->_L1543,
    outC->_L1542,
    &outC->Context_ProvidePositionReport_2);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L805,
    &outC->Context_ProvidePositionReport_2.out_reportedBGs);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L1159,
    &outC->Context_ProvidePositionReport_2.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1313,
    &outC->Context_ProvidePositionReport_2.packet1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1314,
    &outC->Context_ProvidePositionReport_2.posReport);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->TM_to_MsgOut,
    &outC->_L1314);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1673,
    &outC->TM_to_MsgOut);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1667,
    &last_CALC_TrainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1666, &last_CALC_BGs);
  outC->_L1665 = outC->EVC_t_Train;
  outC->_L1629 = API_SystemTime;
  outC->_L1657 = _1_EVC_reset;
  outC->_L1669 = isAbleToManageOneSession_Handover_Pkg;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1617,
    &outC->TIU_trainProperties);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &outC->_L1670,
    (morc_configData_T_RCM_Session_Types_Pkg *)
      &cMoRC_ConfigData_EVC_PermanentData_Pkg);
  kcg_copy_P003_TM_TrainToTrack(
    &outC->_L1558,
    (P003_TM_TrainToTrack *) &cMoRC_own_P3ng_EVC_PermanentData_Pkg);
  kcg_copy_P003_TM_TrainToTrack(&outC->MoRC_P3ng, &outC->_L1558);
  kcg_copy_P003_TM_TrainToTrack(&outC->_L1632, &outC->MoRC_P3ng);
  outC->_L1631 = outC->EVC_ownVersion;
  /* _L1633=(MoRC_HO_Pkg::MoRC_HO#1)/ */
  MoRC_HO_MoRC_HO_Pkg(
    outC->_L1623,
    outC->_L1624,
    &outC->_L1613,
    &outC->_L1652,
    &outC->_L1653,
    &outC->_L1661,
    &outC->_L1664,
    &outC->_L1658,
    &outC->_L1663,
    &outC->_L1668,
    &outC->_L1673,
    &outC->_L1667,
    &outC->_L1666,
    outC->_L1665,
    outC->_L1665,
    outC->_L1629,
    outC->_L1657,
    outC->_L1669,
    &outC->_L1617,
    &outC->_L1670,
    &outC->_L1632,
    outC->_L1631,
    &outC->Context_MoRC_HO_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1633,
    &outC->Context_MoRC_HO_1.radioStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1634,
    &outC->Context_MoRC_HO_1.radioStatus_2);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L1635,
    &outC->Context_MoRC_HO_1.mobileConnectionCmd_1);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L1636,
    &outC->Context_MoRC_HO_1.mobileConnectionCmd_2);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L1637,
    &outC->Context_MoRC_HO_1.mobileRegistrationCmd_1);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L1638,
    &outC->Context_MoRC_HO_1.mobileRegistrationCmd_2);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->_L1639,
    &outC->Context_MoRC_HO_1.safeRadioIndication);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->_L1640,
    &outC->Context_MoRC_HO_1.supervisingRBC);
  outC->_L1641 = outC->Context_MoRC_HO_1.bufferInformationFromAcceptingRBC;
  outC->_L1642 =
    outC->Context_MoRC_HO_1.trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1643,
    &outC->Context_MoRC_HO_1.msgBus_2_RBC_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1644,
    &outC->Context_MoRC_HO_1.msgBus_2_RBC_2);
  outC->_L1645 = outC->Context_MoRC_HO_1.triggerPositionReport;
  outC->_L1646 = outC->Context_MoRC_HO_1.triggerTrainData;
  outC->_L1647 = outC->Context_MoRC_HO_1.rejectOrderToContactRBC_or_RIU;
  outC->_L1648 = outC->Context_MoRC_HO_1.infomDriverNoCompatibleVersionSupported;
  outC->_L1649 = outC->Context_MoRC_HO_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L1650,
    &outC->Context_MoRC_HO_1.lastReceivedRadioNetworkID);
  outC->_L1651 = outC->Context_MoRC_HO_1.ready;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_1,
    &outC->_L1633);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1768,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_50_noname, &outC->_L1768);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1767,
    &outC->CALC_positionErrors);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&_49_noname, &outC->_L1767);
  outC->ML_EB_Request = outC->_L976;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1791,
    &outC->ML_ModeAndLevel);
  outC->_L1103 = outC->ML_EB_Request;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1793,
    &outC->MSG_trackMessage);
  outC->TIU_driverResponseEB = outC->_L1783;
  outC->_L1792 = outC->TIU_driverResponseEB;
  /* _L1789=(EVC_MEM_Support_Pkg::Procedure_TRIP#2)/ */
  Procedure_TRIP_EVC_MEM_Support_Pkg(
    &outC->_L1791,
    outC->_L1103,
    &outC->_L1793,
    outC->_L1792,
    &outC->Context_Procedure_TRIP_2);
  outC->_L1789 = outC->Context_Procedure_TRIP_2.outEB;
  outC->_L1790 = outC->Context_Procedure_TRIP_2.TIU_driverWindow;
  outC->TIU_driverWindowEB = outC->_L1790;
  outC->_L1780 = outC->_L1593.valid;
  _48_noname = outC->_L1780;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1441, &outC->MSG_errors);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&_47_noname, &outC->_L1441);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1045,
    &outC->CALC_positionErrors);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&_46_noname, &outC->_L1045);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1766, &outC->MSG_errors);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&_45_noname, &outC->_L1766);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->probe_MsgErrors, &outC->_L766);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_2,
    &outC->_L1634);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1760,
    &outC->MoRC_RadioStatus_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1759,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->probe_PositioningErrors,
    &outC->_L1256);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1742,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1748,
    &outC->_L1742.session);
  outC->_L1741 = outC->_L1748.phase;
  outC->_L1746 = sp_maintaining_RCM_Session_Types_Pkg;
  outC->_L1747 = outC->_L1746 == outC->_L1741;
  outC->MoRC_newSessionEstablished = outC->_L1747;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1739,
    &last_MoRC_RadioStatus_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1745,
    &outC->_L1739.connection);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1740,
    &outC->_L1742.connection);
  outC->_L1744 = !kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &outC->_L1740,
      &outC->_L1745);
  outC->_L1743 = outC->_L1747 & outC->_L1744;
  _44_noname = outC->_L1743;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1724,
    &outC->MoRC_RadioStatus_1);
  outC->_L1723 = kcg_true;
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->MoRC_safeRadioConnectionStatus_toDriver,
    &outC->_L1639);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->_L1721,
    &outC->MoRC_safeRadioConnectionStatus_toDriver);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &_43_noname,
    &outC->_L1721);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1720,
    &outC->MoRC_RadioStatus_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_42_noname, &outC->_L1720);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1698,
    &outC->MSG_trackMessage);
  /* _L1699=(trainData_pkg::checkGeneralMessage#3)/ */
  checkGeneralMessage_trainData_pkg(
    &outC->_L1698,
    &outC->Context_checkGeneralMessage_3);
  outC->_L1699 = outC->Context_checkGeneralMessage_3.genMessageReceived;
  outC->_L1700 = outC->Context_checkGeneralMessage_3.ackRequested;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1688,
    &outC->ML_ModeAndLevel);
  outC->_L1690 = outC->EVC_ownVersion;
  outC->_L1691 = outC->EVC_t_Train;
  /* _L1684=(radioOutput_Pkg::collectRadioOutput#1)/ */
  collectRadioOutput_radioOutput_Pkg(
    &outC->_L1643,
    outC->_L1699,
    &outC->_L1688,
    &outC->_L1759,
    &outC->_L1635,
    &outC->_L1637,
    outC->_L1690,
    outC->_L1691,
    &outC->Context_collectRadioOutput_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L1684,
    &outC->Context_collectRadioOutput_1.toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->_L1685,
    &outC->Context_collectRadioOutput_1.API_RTM_management);
  outC->_L1711 = outC->Context_collectRadioOutput_1.outRadio;
  outC->_L1712 = outC->Context_collectRadioOutput_1.outMN;
  /* _L1718=(RadioSupport_Pkg::probe_MsgOut#3)/ */
  probe_MsgOut_RadioSupport_Pkg(
    &outC->_L1684,
    outC->_L1723,
    &outC->Context_probe_MsgOut_3);
  outC->_L1718 = outC->Context_probe_MsgOut_3.Msg_0ut;
  outC->_L1719 = outC->Context_probe_MsgOut_3.outTTrain;
  outC->probe_MSGout = outC->_L1718;
  outC->probe_TTrain = outC->_L1719;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1689,
    &outC->ML_ModeAndLevel);
  outC->_L1693 = outC->EVC_ownVersion;
  outC->_L1692 = outC->EVC_t_Train;
  /* _L1686=(radioOutput_Pkg::collectRadioOutput#2)/ */
  collectRadioOutput_radioOutput_Pkg(
    &outC->_L1644,
    outC->_L1699,
    &outC->_L1689,
    &outC->_L1760,
    &outC->_L1636,
    &outC->_L1638,
    outC->_L1693,
    outC->_L1692,
    &outC->Context_collectRadioOutput_2);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L1686,
    &outC->Context_collectRadioOutput_2.toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->_L1687,
    &outC->Context_collectRadioOutput_2.API_RTM_management);
  outC->_L1713 = outC->Context_collectRadioOutput_2.outRadio;
  outC->_L1714 = outC->Context_collectRadioOutput_2.outMN;
  _41_noname = outC->_L1714;
  _40_noname = outC->_L1713;
  outC->MoRC_RadioID_1 = outC->_L1711;
  outC->MoRC_MN_1 = outC->_L1712;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    &outC->_L1684);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->_L1685);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_39_noname,
    &outC->_L1650);
  _38_noname = outC->_L1649;
  _37_noname = outC->_L1648;
  _36_noname = outC->_L1647;
  _35_noname = outC->_L1646;
  _34_noname = outC->_L1645;
  _33_noname = outC->_L1642;
  _32_noname = outC->_L1641;
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &_31_noname,
    &outC->_L1687);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_30_noname, &outC->_L1686);
  _29_noname = outC->_L1700;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&_28_noname, &outC->_L805);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->MoRC_supervisingRBC_Id,
    &outC->_L1640);
  outC->MoRC_ready = outC->_L1651;
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&_27_noname, &outC->_L1337);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1596,
    &outC->td_out2Radio);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_26_noname, &outC->_L1596);
  outC->_L1594 = kcg_false;
  /* _L1586=(xdebugSupport_Pkg::setProbes#2)/ */
  setProbes_xdebugSupport_Pkg(
    &outC->_L1593,
    outC->_L1594,
    &outC->Context_setProbes_2);
  outC->_L1586 = outC->Context_setProbes_2.isChanged;
  outC->_L1587 = outC->Context_setProbes_2.radioMSG;
  outC->_L1588 = outC->Context_setProbes_2.BG_ID;
  outC->_L1589 = outC->Context_setProbes_2.packet_id1;
  outC->_L1590 = outC->Context_setProbes_2.packet_id2;
  outC->_L1591 = outC->Context_setProbes_2.lastRadioMSG;
  outC->_L1592 = outC->Context_setProbes_2.lastBG_ID;
  outC->probe_newInput = outC->_L1586;
  outC->probe_lastBG_ID = outC->_L1592;
  outC->probe_lastMSG_in = outC->_L1591;
  outC->probe_nid_packet2 = outC->_L1590;
  outC->probe_nid_packet1 = outC->_L1589;
  outC->probe_MSG_in = outC->_L1587;
  outC->probe_BG_ID = outC->_L1588;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1563,
    &outC->TM_to_MsgOut);
  /* _L1564=(RadioSupport_Pkg::probe_RadioOutput#2)/ */
  probe_RadioOutput_RadioSupport_Pkg(
    &outC->_L1563,
    &outC->Context_probe_RadioOutput_2);
  outC->_L1564 = outC->Context_probe_RadioOutput_2.msg1;
  outC->_L1565 = outC->Context_probe_RadioOutput_2.msg2;
  outC->_L1566 = outC->Context_probe_RadioOutput_2.msg3;
  outC->_L1567 = outC->Context_probe_RadioOutput_2.msg4;
  outC->_L1568 = outC->Context_probe_RadioOutput_2.msg5;
  outC->probe_Msg_5 = outC->_L1568;
  outC->probe_Msg_4 = outC->_L1567;
  outC->probe_Msg_3 = outC->_L1566;
  outC->probe_Msg_2 = outC->_L1565;
  outC->probe_Msg_1 = outC->_L1564;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1540,
    &outC->td_out2Radio);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_25_noname, &outC->_L1540);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->ML_AnnouncedLevelTransitions,
    &outC->_L977);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->_L1525,
    &outC->ML_AnnouncedLevelTransitions);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1495, API_Odometry);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1496,
    &outC->MSG_trackMessage);
  /* _L1511=(xdebugSupport_Pkg::distanceLastBG#2)/ */
  distanceLastBG_xdebugSupport_Pkg(
    &outC->_L1495,
    &outC->_L1496,
    &outC->Context_distanceLastBG_2);
  outC->_L1511 = outC->Context_distanceLastBG_2.distance;
  outC->_L1512 = outC->Context_distanceLastBG_2.lastBG;
  outC->probe_BG_afterCheck = outC->_L1512;
  outC->_L1516 = kcg_false;
  /* _L1513=(xdebugSupport_Pkg::distanceLastMSG#2)/ */
  distanceLastMSG_xdebugSupport_Pkg(
    &outC->_L1495,
    &outC->_L1496,
    outC->_L1516,
    &outC->Context_distanceLastMSG_2);
  outC->_L1513 = outC->Context_distanceLastMSG_2.distance;
  outC->_L1514 = outC->Context_distanceLastMSG_2.lastMSG;
  outC->_L1515 = outC->Context_distanceLastMSG_2.lastLRBG;
  outC->probe_MSGinAfterFilter = outC->_L1514;
  outC->probe_LRBG = outC->_L1515;
  outC->probe_distMsg = outC->_L1513;
  outC->probe_distBG = outC->_L1511;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1497, &outC->MSG_errors);
  /* _L1498=(xdebugSupport_Pkg::setProbesBalises#2)/ */
  setProbesBalises_xdebugSupport_Pkg(
    &outC->_L1496,
    &outC->_L1497,
    &outC->Context_setProbesBalises_2);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &outC->_L1498,
    &outC->Context_setProbesBalises_2.baliseInformation);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(&outC->probe_Balises, &outC->_L1498);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->probe_Odometry, &outC->_L1495);
  outC->TA_tripTrain = outC->_L1489;
  outC->_L1493 = outC->TA_tripTrain;
  _24_noname = outC->_L1493;
  outC->TA_ces_revoked = outC->_L1488;
  outC->_L1492 = outC->TA_ces_revoked;
  _23_noname = outC->_L1492;
  outC->TA_ces_accepted = outC->_L1487;
  outC->_L1491 = outC->TA_ces_accepted;
  _22_noname = outC->_L1491;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1486,
    &outC->MSG_trackMessage);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L1462,
    &outC->TA_forModeLevel);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&_21_noname, &outC->_L1462);
  outC->_L1457 = kcg_false;
  outC->_L1456 = last_MoRC_ready;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP_profile, &outC->_L1335);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L1334, &outC->MRSP_profile);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_20_noname, &outC->_L1334);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->td_trainData, &outC->_L1204);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1333, &outC->td_trainData);
  outC->_L1320 = last_MoRC_newSessionEstablished;
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->TA_toDMI, &outC->_L1247);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->_L1319, &outC->TA_toDMI);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->rep_P1,
    &outC->_L1313);
  outC->_L1301 = noMotion_Obu_BasicTypes_Pkg;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1295, API_Odometry);
  outC->_L1297 = outC->_L1295.motionState;
  outC->_L1296 = outC->_L1297 == outC->_L1301;
  outC->_L1299 = outC->_L1295.valid;
  outC->_L1302 = outC->_L1299 & outC->_L1296;
  outC->_L1294 = kcg_false;
  outC->_L1300.trainStandStill = outC->_L1302;
  outC->_L1300.driverRequestModify = outC->_L1457;
  outC->_L1300.communicationSessionEstablished = outC->_L1320;
  outC->_L1300.safeRadioConnectionLost = outC->_L1294;
  outC->_L1300.approachingRBCarea = outC->_L1294;
  outC->_L1300.MoRCreadyFlag = outC->_L1456;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->td_events,
    &outC->_L1300);
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(
    &outC->_L163,
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus);
  kcg_copy_P003_OBU_T_TM(&outC->_L1278, &outC->TA_nationalValues);
  kcg_copy_P003_OBU_T_TM(&_19_noname, &outC->_L1278);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->TA_MA_onboard,
    &outC->_L1249);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L1276,
    &outC->TA_MA_onboard);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_18_noname, &outC->_L1276);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->TA_forSupervision,
    &outC->_L1248);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L1275,
    &outC->TA_forSupervision);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1273,
    &outC->MSG_nationalValues);
  outC->_L1267 = outC->_L1254.trainPosition.nominal;
  outC->_L1266 = outC->_L1254.trainPosition.d_min;
  outC->debugTrainPositionDeltaMin = outC->_L1266;
  outC->_L1265 = outC->_L1254.trainPosition.d_max;
  outC->debugTrainPositionDeltaMax = outC->_L1265;
  outC->debugTrainPositionNominal = outC->_L1267;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->_L4_then_IfBlock1,
      &outC->_L1_then_IfBlock1.availableLevelsList);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &EVC_ActiveLevelList_partial,
      &outC->_L4_then_IfBlock1);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->EVC_PersistentData,
      &EVC_PersistentData_partial);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->EVC_ActiveLevelList,
      &EVC_ActiveLevelList_partial);
  }
  else {
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &_2_EVC_PersistentData_partial,
      &last_EVC_PersistentData);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->_L7_else_IfBlock1,
      &last_EVC_ActiveLevelList);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &_3_EVC_ActiveLevelList_partial,
      &outC->_L7_else_IfBlock1);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->EVC_PersistentData,
      &_2_EVC_PersistentData_partial);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->EVC_ActiveLevelList,
      &_3_EVC_ActiveLevelList_partial);
  }
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->ML_dataToBG_Management,
    &outC->_L974);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L1229,
    &outC->ML_dataToBG_Management);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &_17_noname,
    &outC->_L1229);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L949,
    &outC->MSG_nationalValues);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L639,
    &outC->CALC_TrainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L914, API_Odometry);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L948,
    &outC->TIU_trainProperties);
  outC->MSG_BGcheck_applySB = outC->_L764;
  outC->_L1154 = outC->MSG_BGcheck_applySB;
  outC->ML_ServiceBrakeCmd = outC->_L975;
  outC->_L1104 = outC->ML_ServiceBrakeCmd;
  outC->_L1153 = outC->_L1104 | outC->_L1154;
  /* _L632=(SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration#2)/ */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    &outC->_L949,
    &outC->_L639,
    &outC->_L914,
    &outC->_L948,
    &outC->_L1333,
    &outC->_L1275,
    outC->_L1153,
    outC->_L1789,
    &outC->Context_SpeedSupervision_Integration_2);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L632,
    &outC->Context_SpeedSupervision_Integration_2.sdmToDMI);
  kcg_copy_Target_T_TargetManagement_types(
    &outC->_L633,
    &outC->Context_SpeedSupervision_Integration_2.target);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(
    &outC->_L634,
    &outC->Context_SpeedSupervision_Integration_2.sdmCommands);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L635,
    &outC->Context_SpeedSupervision_Integration_2.brakeCmd);
  outC->_L636 = outC->Context_SpeedSupervision_Integration_2.EOA_overpassed;
  outC->_L637 = outC->Context_SpeedSupervision_Integration_2.Target_Speed_Reached;
  outC->SDM_EOA_overpassed = outC->_L636;
  outC->_L1228 = outC->SDM_EOA_overpassed;
  _16_noname = outC->_L1228;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->td_status, &outC->_L1210);
  /* _L578= */
  if (outC->init1) {
    outC->_L578 = kcg_false;
  }
  else {
    outC->_L578 = outC->_L477;
  }
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L523,
    &last_DMI_currentDMIStatus);
  outC->_L904 = API_SystemTime;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L988,
    &outC->ML_ModeAndLevel);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L484,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L487, &outC->TIU_trainStatus);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1131,
    &outC->CALC_TrainPosition);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L1132,
    &outC->_L1131.LRBG);
  outC->_L1133 = outC->_L1132.valid;
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_driverRequest,
    &outC->_L1232);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1189,
    &outC->DMI_driverRequest);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L1191,
    &last_DMI_currentDMIStatus);
  outC->_L1193 = outC->_L1191.DMI_LevelSelectedByDirver;
  /* _L472=(ManageProcedure_Pkg::Master_Procedure#2)/ */
  Master_Procedure_ManageProcedure_Pkg(
    &outC->_L523,
    outC->_L578,
    outC->_L904,
    &outC->_L988,
    &outC->_L484,
    &outC->_L487,
    outC->_L1133,
    &outC->_L1189,
    outC->_L1193,
    &outC->Context_Master_Procedure_2);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L472,
    &outC->Context_Master_Procedure_2.DMI_Entry_Request_to_DMI);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->_L473,
    &outC->Context_Master_Procedure_2.request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC);
  outC->_L474 = outC->Context_Master_Procedure_2.powerUp_to_MoRC;
  outC->_L475 =
    outC->Context_Master_Procedure_2.statusstartofmissionongoing_to_MoRC;
  outC->_L476 = outC->Context_Master_Procedure_2.powerOff_to_MoRC;
  outC->_L477 =
    outC->Context_Master_Procedure_2.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  outC->_L478 =
    outC->Context_Master_Procedure_2.request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  outC->_L624 = outC->Context_Master_Procedure_2.start_ack_to_TIU;
  outC->PROC_start_ack = outC->_L624;
  outC->_L1224 = outC->PROC_start_ack;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->rep_P0,
    &outC->_L1159);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->td_trigger,
    &outC->_L1205);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->_L1213,
    &outC->td_trigger);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(&_15_noname, &outC->_L1213);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->_L1202,
    (Type_I_train_commands_T_TIU_Types_Pkg *) &cEmptyTrainCommand);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1200,
    &outC->ML_ModeAndLevel);
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(
    &outC->_L166,
    (Brake_inhibition_command_T_TIU_Types_Pkg *) &cEmptyBrakeInhibitionCommand);
  _14_noname = outC->_L478;
  outC->_L1199 = outC->MoRC_ready;
  outC->EVC_ready = outC->_L1199;
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_13_noname,
    &outC->_L751);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_12_noname, &outC->_L748);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_11_noname,
    &outC->_L747);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_10_noname,
    &outC->_L745);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&_9_noname, &outC->_L743);
  outC->MSG_badBGPassedtoDMI = outC->_L765;
  outC->_L1185 = outC->MSG_badBGPassedtoDMI;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L568,
    &last_DMI_currentDMIStatus);
  outC->_L889 = API_SystemTime;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L318, &outC->TIU_trainStatus);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L888, API_Odometry);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L538,
    &outC->CALC_TrainPosition);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->SDM_speedSupervisionBrakeCommand,
    &outC->_L635);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L699,
    &outC->SDM_speedSupervisionBrakeCommand);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    &outC->_L632);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L652,
    &outC->DMI_sdmToDMI);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L981,
    &outC->ML_ModeAndLevel);
  outC->_L893 = kcg_true;
  outC->_L891 = outC->_L1273.nid_cArray[0].nid_c;
  outC->_L903 = kcg_true;
  outC->_L894.valid = outC->_L893;
  outC->_L894.nid_c = outC->_L891;
  outC->_L894.nid_c_valid = outC->_L903;
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&outC->DMI_NV, &outC->_L894);
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&outC->_L890, &outC->DMI_NV);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(
    &outC->_L895,
    (movementAuthorityForDMI_T_DMI_Types_Pkg *) &cEmptyDMIMA);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(&outC->DMI_MA, &outC->_L895);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(&outC->_L896, &outC->DMI_MA);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L899, &outC->td_trainData);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->DMI_entryRequest,
    &outC->_L472);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L489,
    &outC->DMI_entryRequest);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L541,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIEVCcodedTrainData);
  outC->_L1152 = outC->EVC_ownVersion;
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L327,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMIDisplayControl);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
    &outC->_L1117,
    &outC->EVC_ActiveLevelList);
  outC->DMI_updateLevels = outC->_L744;
  outC->_L1107 = outC->DMI_updateLevels;
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L325,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMIRadioNet);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L324,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIDriverIdentifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L322,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainRunningNumber);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L320,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->ML_AckToDMI,
    &outC->_L1479);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L1095,
    &outC->ML_AckToDMI);
  outC->_L978 = outC->EVC_currentNTC;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->transport_TextMessageStatusList,
    &outC->_L1187);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1183,
    &outC->transport_TextMessageStatusList);
  /* _L171=(manage_DMI_Output_Pkg::manageDMI_Output#2)/ */
  manageDMI_Output_manage_DMI_Output_Pkg(
    &outC->_L568,
    outC->_L889,
    &outC->_L318,
    &outC->_L888,
    &outC->_L538,
    &outC->_L699,
    &outC->_L652,
    &outC->_L981,
    &outC->_L890,
    &outC->_L896,
    &outC->_L1724,
    &outC->_L899,
    &outC->_L489,
    &outC->_L541,
    &outC->_L1319,
    outC->_L1152,
    &outC->_L327,
    &outC->_L1117,
    outC->_L1107,
    &outC->_L325,
    &outC->_L324,
    &outC->_L322,
    &outC->_L320,
    outC->_L1185,
    &outC->_L1095,
    &outC->_L1525,
    outC->_L978,
    &outC->_L1183,
    &outC->Context_manageDMI_Output_2);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->_L171,
    &outC->Context_manageDMI_Output_2.to_DMI);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1182,
    &outC->Context_manageDMI_Output_2.outStatusList);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->EVC_TextMessageStatusList,
    &outC->_L1182);
  outC->_L1032 = kcg_false;
  outC->_L1022 = last_MSG_EmergencyBrakeActive;
  outC->_L1030 = kcg_true;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L1016,
    &outC->SDM_speedSupervisionBrakeCommand);
  outC->_L1017 = outC->_L1016.valid;
  outC->_L1018 = outC->_L1016.m_emergencybrake_cm;
  outC->_L1019 = apply_brake_TIU_Types_Pkg;
  outC->_L1020 = outC->_L1019 == outC->_L1018;
  outC->_L1021 = outC->_L1020 & outC->_L1017;
  /* _L1029= */
  if (outC->_L1021) {
    outC->_L1029 = outC->_L1030;
  }
  else {
    outC->_L1029 = outC->_L1022;
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L1028,
    &outC->SDM_speedSupervisionBrakeCommand);
  outC->_L1026 = outC->_L1028.valid;
  outC->_L1025 = outC->_L1028.m_emergencybrake_cm;
  outC->_L1023 = release_brake_TIU_Types_Pkg;
  outC->_L1027 = outC->_L1023 == outC->_L1025;
  outC->_L1024 = outC->_L1027 & outC->_L1026;
  /* _L1031= */
  if (outC->_L1024) {
    outC->_L1031 = outC->_L1032;
  }
  else {
    outC->_L1031 = outC->_L1029;
  }
  outC->MSG_EmergencyBrakeActive = outC->_L1031;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1003,
    &outC->ML_ModeAndLevel);
  outC->_L1005 = outC->_L1003.level;
  outC->_L1002 = outC->_L1003.Mode;
  outC->_L601 = _1_EVC_reset;
  /* _L600=(digital::FlipFlopJK#2)/ */
  FlipFlopJK_digital(
    outC->_L578,
    outC->_L601,
    kcg_false,
    &outC->Context_FlipFlopJK_2);
  outC->_L600 = outC->Context_FlipFlopJK_2.Output;
  _8_noname = outC->_L600;
  outC->_L938 = last_MSG_lastRadioMsgTimestamp;
  outC->_L935 = outC->_L1486.Radio_Common_Header.receivedSystemTime;
  outC->_L930 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L932 = outC->_L1486.source;
  outC->_L929 = outC->_L932 == outC->_L930;
  outC->_L931 = outC->_L1486.valid;
  outC->_L928 = outC->_L931 & outC->_L929;
  /* _L937= */
  if (outC->_L928) {
    outC->_L937 = outC->_L935;
  }
  else {
    outC->_L937 = outC->_L938;
  }
  outC->MSG_lastRadioMsgTimestamp = outC->_L937;
  outC->debugCurrentMode = outC->_L1002;
  outC->debugCurrentLevel = outC->_L1005;
  outC->_L885 = _1_EVC_reset;
  outC->resetOut = outC->_L885;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L647,
    &outC->SDM_speedSupervisionBrakeCommand);
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &outC->_L167,
    (Change_traction_system_T_TIU_Types_Pkg *) &cEmptyChangeTractionSystem);
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &outC->_L168,
    (Passenger_door_control_info_T_TIU_Types_Pkg *) &cPassengerDoorControlInfo);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &outC->_L169,
    (Change_of_allowed_current_consumption_T_TIU_Types_Pkg *)
      &cEmptyChangeOfAllowedCurrentConsumption);
  /* _L161=(output_to_TIU_API_Pkg::TIU_OutputIntegration#2)/ */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    &outC->_L163,
    &outC->_L647,
    &outC->_L166,
    &outC->_L1202,
    &outC->_L167,
    &outC->_L168,
    &outC->_L169,
    &outC->_L1200,
    &outC->Context_TIU_OutputIntegration_2);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->_L161,
    &outC->Context_TIU_OutputIntegration_2.outTIU_to_API);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->_L162,
    &outC->Context_TIU_OutputIntegration_2.outCommandStatusforEVC);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->API_toTIU, &outC->_L161);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->API_toDMI, &outC->_L171);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    &outC->_L742);
  outC->_L721 = outC->_L632.permittedSpeed;
  outC->_L719 = kcg_lit_int32(0);
  /* _L718= */
  if (outC->_L1224) {
    outC->_L718 = outC->_L721;
  }
  else {
    outC->_L718 = outC->_L719;
  }
  outC->_L711 = /* _L711= */(kcg_float32) outC->_L718;
  outC->_L709 = outC->_L632.interventionSpeed;
  outC->_L710 = /* _L710= */(kcg_float32) outC->_L709;
  outC->debugIinterventionSpeed = outC->_L710;
  outC->debugPermittedSpeed = outC->_L711;
  _7_noname = outC->_L637;
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&_6_noname, &outC->_L634);
  kcg_copy_Target_T_TargetManagement_types(&_5_noname, &outC->_L633);
  outC->PROC_powerOff_to_MoRC = outC->_L476;
  outC->PROC_statusstartofmissionongoing_to_MoRC = outC->_L475;
  outC->PROC_powerUp_to_MoRC = outC->_L474;
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->PROC_radioCmdFromProcedures,
    &outC->_L473);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(&noname, &outC->_L162);
  outC->init1 = kcg_false;
  if (outC->IfBlock1_clock) {
    outC->init = kcg_false;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void EVC_init(outC_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;
  static kcg_size idx95;
  static kcg_size idx96;
  static kcg_size idx97;
  static kcg_size idx98;
  static kcg_size idx99;
  static kcg_size idx100;
  static kcg_size idx101;
  static kcg_size idx102;
  static kcg_size idx103;
  static kcg_size idx104;
  static kcg_size idx105;
  static kcg_size idx106;
  static kcg_size idx107;
  static kcg_size idx108;
  static kcg_size idx109;
  static kcg_size idx110;
  static kcg_size idx111;
  static kcg_size idx112;
  static kcg_size idx113;
  static kcg_size idx114;
  static kcg_size idx115;
  static kcg_size idx116;
  static kcg_size idx117;
  static kcg_size idx118;
  static kcg_size idx119;
  static kcg_size idx120;
  static kcg_size idx121;
  static kcg_size idx122;
  static kcg_size idx123;
  static kcg_size idx124;
  static kcg_size idx125;
  static kcg_size idx126;
  static kcg_size idx127;
  static kcg_size idx128;
  static kcg_size idx129;
  static kcg_size idx130;
  static kcg_size idx131;
  static kcg_size idx132;
  static kcg_size idx133;
  static kcg_size idx134;
  static kcg_size idx135;
  static kcg_size idx136;
  static kcg_size idx137;
  static kcg_size idx138;
  static kcg_size idx139;
  static kcg_size idx140;
  static kcg_size idx141;
  static kcg_size idx142;
  static kcg_size idx143;
  static kcg_size idx144;
  static kcg_size idx145;
  static kcg_size idx146;
  static kcg_size idx147;
  static kcg_size idx148;
  static kcg_size idx149;
  static kcg_size idx150;
  static kcg_size idx151;
  static kcg_size idx152;
  static kcg_size idx153;
  static kcg_size idx154;
  static kcg_size idx155;
  static kcg_size idx156;
  static kcg_size idx157;
  static kcg_size idx158;
  static kcg_size idx159;
  static kcg_size idx160;
  static kcg_size idx161;
  static kcg_size idx162;
  static kcg_size idx163;
  static kcg_size idx164;
  static kcg_size idx165;
  static kcg_size idx166;
  static kcg_size idx167;
  static kcg_size idx168;
  static kcg_size idx169;
  static kcg_size idx170;
  static kcg_size idx171;
  static kcg_size idx172;
  static kcg_size idx173;
  static kcg_size idx174;
  static kcg_size idx175;
  static kcg_size idx176;
  static kcg_size idx177;
  static kcg_size idx178;
  static kcg_size idx179;
  static kcg_size idx180;
  static kcg_size idx181;
  static kcg_size idx182;
  static kcg_size idx183;
  static kcg_size idx184;
  static kcg_size idx185;
  static kcg_size idx186;
  static kcg_size idx187;
  static kcg_size idx188;
  static kcg_size idx189;
  static kcg_size idx190;
  static kcg_size idx191;
  static kcg_size idx192;
  static kcg_size idx193;
  static kcg_size idx194;
  static kcg_size idx195;
  static kcg_size idx196;
  static kcg_size idx197;
  static kcg_size idx198;
  static kcg_size idx199;
  static kcg_size idx200;
  static kcg_size idx201;
  static kcg_size idx202;
  static kcg_size idx203;
  static kcg_size idx204;
  static kcg_size idx205;
  static kcg_size idx206;
  static kcg_size idx207;
  static kcg_size idx208;
  static kcg_size idx209;
  static kcg_size idx210;
  static kcg_size idx211;
  static kcg_size idx212;
  static kcg_size idx213;
  static kcg_size idx214;
  static kcg_size idx215;
  static kcg_size idx216;
  static kcg_size idx217;
  static kcg_size idx218;
  static kcg_size idx219;
  static kcg_size idx220;
  static kcg_size idx221;
  static kcg_size idx222;
  static kcg_size idx223;
  static kcg_size idx224;
  static kcg_size idx225;
  static kcg_size idx226;
  static kcg_size idx227;
  static kcg_size idx228;
  static kcg_size idx229;
  static kcg_size idx230;
  static kcg_size idx231;
  static kcg_size idx232;
  static kcg_size idx233;
  static kcg_size idx234;
  static kcg_size idx235;
  static kcg_size idx236;
  static kcg_size idx237;
  static kcg_size idx238;
  static kcg_size idx239;
  static kcg_size idx240;
  static kcg_size idx241;
  static kcg_size idx242;
  static kcg_size idx243;
  static kcg_size idx244;
  static kcg_size idx245;
  static kcg_size idx246;
  static kcg_size idx247;
  static kcg_size idx248;
  static kcg_size idx249;
  static kcg_size idx250;
  static kcg_size idx251;
  static kcg_size idx252;
  static kcg_size idx253;
  static kcg_size idx254;
  static kcg_size idx255;
  static kcg_size idx256;
  static kcg_size idx257;
  static kcg_size idx258;
  static kcg_size idx259;
  static kcg_size idx260;
  static kcg_size idx261;
  static kcg_size idx262;
  static kcg_size idx263;
  static kcg_size idx264;
  static kcg_size idx265;
  static kcg_size idx266;
  static kcg_size idx267;
  static kcg_size idx268;
  static kcg_size idx269;
  static kcg_size idx270;
  static kcg_size idx271;
  static kcg_size idx272;
  static kcg_size idx273;
  static kcg_size idx274;
  static kcg_size idx275;
  static kcg_size idx276;
  static kcg_size idx277;
  static kcg_size idx278;
  static kcg_size idx279;
  static kcg_size idx280;
  static kcg_size idx281;
  static kcg_size idx282;
  static kcg_size idx283;
  static kcg_size idx284;
  static kcg_size idx285;
  static kcg_size idx286;
  static kcg_size idx287;
  static kcg_size idx288;
  static kcg_size idx289;
  static kcg_size idx290;
  static kcg_size idx291;
  static kcg_size idx292;
  static kcg_size idx293;
  static kcg_size idx294;
  static kcg_size idx295;
  static kcg_size idx296;
  static kcg_size idx297;
  static kcg_size idx298;
  static kcg_size idx299;
  static kcg_size idx300;
  static kcg_size idx301;
  static kcg_size idx302;
  static kcg_size idx303;

  outC->_L1790 = kcg_true;
  outC->_L1789 = kcg_true;
  outC->_L1791.compatibleModeAndLevel = kcg_true;
  outC->_L1791.level = M_LEVEL_Level_0;
  outC->_L1791.newLevel = kcg_true;
  outC->_L1791.Mode = M_MODE_Full_Supervision;
  outC->_L1791.newMode = kcg_true;
  outC->_L1792 = kcg_true;
  outC->_L1793.valid = kcg_true;
  outC->_L1793.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1793.radioMetadata.t_train_reference = kcg_true;
  outC->_L1793.radioMetadata.nid_em = kcg_true;
  outC->_L1793.radioMetadata.q_scale = kcg_true;
  outC->_L1793.radioMetadata.d_sr = kcg_true;
  outC->_L1793.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1793.radioMetadata.d_ref = kcg_true;
  outC->_L1793.radioMetadata.q_dir = kcg_true;
  outC->_L1793.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1793.radioMetadata.m_version = kcg_true;
  outC->_L1793.BG_Common_Header.valid = kcg_true;
  outC->_L1793.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1793.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1793.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1793.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1793.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1793.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1793.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1793.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1793.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1793.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1793.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1793.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1793.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1793.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1793.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1793.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1793.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L1793.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L1793.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1793.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1793.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L1793.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1793.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L1793.sendingRBC.valid = kcg_true;
  outC->_L1793.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1793.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1793.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1788 = kcg_true;
  outC->_L1784.compatibleModeAndLevel = kcg_true;
  outC->_L1784.level = M_LEVEL_Level_0;
  outC->_L1784.newLevel = kcg_true;
  outC->_L1784.Mode = M_MODE_Full_Supervision;
  outC->_L1784.newMode = kcg_true;
  outC->_L1783 = kcg_true;
  outC->_L1782.valid = kcg_true;
  outC->_L1782.nid_packet = kcg_lit_int32(0);
  outC->_L1782.q_dir = Q_DIR_Reverse;
  outC->_L1782.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1782.d_validnv = kcg_lit_int32(0);
  outC->_L1782.nid_c = kcg_lit_int32(0);
  outC->_L1782.n_iter_nid_c = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L1782.nid_c_list[idx2].valid = kcg_true;
    outC->_L1782.nid_c_list[idx2].nid_c = kcg_lit_int32(0);
  }
  outC->_L1782.v_nvshunt = kcg_lit_int32(0);
  outC->_L1782.v_nvstff = kcg_lit_int32(0);
  outC->_L1782.v_nvonsight = kcg_lit_int32(0);
  outC->_L1782.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1782.v_nvunfit = kcg_lit_int32(0);
  outC->_L1782.v_nvrel = kcg_lit_int32(0);
  outC->_L1782.d_nvroll = kcg_lit_int32(0);
  outC->_L1782.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1782.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1782.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1782.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1782.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1782.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1782.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1782.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1782.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1782.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1782.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1782.t_nvcontact = kcg_lit_int32(0);
  outC->_L1782.m_nvderun = M_NVDERUN_No;
  outC->_L1782.d_nvstff = kcg_lit_int32(0);
  outC->_L1782.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1782.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1782.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1782.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1782.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1782.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1782.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1782.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1782.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1782.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L1782.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L1782.v_nvkvint = kcg_lit_int32(0);
  outC->_L1782.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L1782.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L1782.n_iter_n = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L1782.n_iter_n_list[idx3].valid = kcg_true;
    outC->_L1782.n_iter_n_list[idx3].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L1782.n_iter_n_list[idx3].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L1782.n_iter_n_list[idx3].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L1782.n_iter_k = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L1782.n_iter_k_list[idx5].valid = kcg_true;
    outC->_L1782.n_iter_k_list[idx5].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L1782.n_iter_k_list[idx5].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L1782.n_iter_k_list[idx5].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L1782.n_iter_k_list[idx5].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L1782.n_iter_k_list[idx5].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L1782.n_iter_k_list[idx5].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L1782.n_iter_k_list[idx5].n_iter_k_m = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 32; idx4++) {
      outC->_L1782.n_iter_k_list[idx5].n_iter_k_m_list[idx4].valid = kcg_true;
      outC->_L1782.n_iter_k_list[idx5].n_iter_k_m_list[idx4].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L1782.n_iter_k_list[idx5].n_iter_k_m_list[idx4].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L1782.n_iter_k_list[idx5].n_iter_k_m_list[idx4].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L1782.l_nvkrint = L_NVKRINT_0m;
  outC->_L1782.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L1782.n_iter_l = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L1782.n_iter_l_list[idx6].valid = kcg_true;
    outC->_L1782.n_iter_l_list[idx6].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1782.n_iter_l_list[idx6].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L1782.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1781 = kcg_true;
  outC->_L1780 = kcg_true;
  outC->_L1777.P12_received = kcg_true;
  outC->_L1777.P15_received = kcg_true;
  outC->_L1777.P21_received = kcg_true;
  outC->_L1777.P27_received = kcg_true;
  outC->_L1776.nid_engine = kcg_lit_int32(0);
  outC->_L1776.nid_operational = kcg_lit_int32(0);
  outC->_L1776.l_train = kcg_lit_int32(0);
  outC->_L1776.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L1776.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L1776.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L1776.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L1776.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L1776.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L1776.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1776.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1776.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1776.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1776.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1776.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1775.valid = kcg_true;
  outC->_L1775.timestamp = kcg_lit_int32(0);
  outC->_L1775.trainPositionIsUnknown = kcg_true;
  outC->_L1775.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1775.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1775.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1775.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1775.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1775.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1775.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1775.LRBG.valid = kcg_true;
  outC->_L1775.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1775.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1775.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1775.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1775.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1775.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1775.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1775.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1775.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1775.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1775.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1775.LRBG.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1775.LRBG.missed = kcg_true;
  outC->_L1775.prvLRBG.valid = kcg_true;
  outC->_L1775.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1775.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1775.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(
      0);
  outC->_L1775.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1775.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1775.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1775.prvLRBG.infoFromPassing.linkedBGs[idx8].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1775.prvLRBG.missed = kcg_true;
  outC->_L1775.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1775.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1775.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1775.linkingIsUsedOnboard = kcg_true;
  outC->_L1775.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1775.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1775.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1774.compatibleModeAndLevel = kcg_true;
  outC->_L1774.level = M_LEVEL_Level_0;
  outC->_L1774.newLevel = kcg_true;
  outC->_L1774.Mode = M_MODE_Full_Supervision;
  outC->_L1774.newMode = kcg_true;
  outC->_L1773.valid = kcg_true;
  outC->_L1773.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1773.radioMetadata.t_train_reference = kcg_true;
  outC->_L1773.radioMetadata.nid_em = kcg_true;
  outC->_L1773.radioMetadata.q_scale = kcg_true;
  outC->_L1773.radioMetadata.d_sr = kcg_true;
  outC->_L1773.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1773.radioMetadata.d_ref = kcg_true;
  outC->_L1773.radioMetadata.q_dir = kcg_true;
  outC->_L1773.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1773.radioMetadata.m_version = kcg_true;
  outC->_L1773.BG_Common_Header.valid = kcg_true;
  outC->_L1773.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1773.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1773.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1773.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1773.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1773.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1773.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1773.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1773.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1773.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1773.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1773.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1773.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1773.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1773.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1773.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1773.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L1773.packets.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L1773.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L1773.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L1773.packets.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L1773.packets.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L1773.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->_L1773.sendingRBC.valid = kcg_true;
  outC->_L1773.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1773.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1773.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L1772.P_12[idx11].valid = kcg_true;
    outC->_L1772.P_12[idx11].q_dir = Q_DIR_Reverse;
    outC->_L1772.P_12[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1772.P_12[idx11].v_main = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].v_loa = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].t_loa = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].l_section = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1772.P_12[idx11].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].l_endsection = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1772.P_12[idx11].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1772.P_12[idx11].t_endtimer = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1772.P_12[idx11].d_dp = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].v_releasedp = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1772.P_12[idx11].d_startol = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].t_ol = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].d_ol = kcg_lit_int32(0);
    outC->_L1772.P_12[idx11].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L1772.P_135.valid = kcg_true;
  outC->_L1772.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1772.P_137.valid = kcg_true;
  outC->_L1772.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1772.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1772.P_138.valid = kcg_true;
  outC->_L1772.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1772.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1772.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L1772.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L1772.P_139.valid = kcg_true;
  outC->_L1772.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1772.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1772.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L1772.P_139.v_reverse = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L1772.P_15[idx12].valid = kcg_true;
    outC->_L1772.P_15[idx12].q_dir = Q_DIR_Reverse;
    outC->_L1772.P_15[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1772.P_15[idx12].v_loa = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].t_loa = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].l_section = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1772.P_15[idx12].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].l_endsection = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1772.P_15[idx12].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1772.P_15[idx12].t_endtimer = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1772.P_15[idx12].d_dp = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].v_releasedp = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1772.P_15[idx12].d_startol = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].t_ol = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].d_ol = kcg_lit_int32(0);
    outC->_L1772.P_15[idx12].v_releaseol = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L1772.P_21[idx13].valid = kcg_true;
    outC->_L1772.P_21[idx13].q_dir = Q_DIR_Reverse;
    outC->_L1772.P_21[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1772.P_21[idx13].d_gradient = kcg_lit_int32(0);
    outC->_L1772.P_21[idx13].q_gdir = Q_GDIR_downhill;
    outC->_L1772.P_21[idx13].g_a = kcg_lit_int32(0);
  }
  outC->_L1772.P_27.valid = kcg_true;
  outC->_L1772.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1772.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1772.P_27.d_static = kcg_lit_int32(0);
  outC->_L1772.P_27.v_static = kcg_lit_int32(0);
  outC->_L1772.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx14 = 0; idx14 < 7; idx14++) {
    outC->_L1772.P_27.diffArray[idx14].valid = kcg_true;
    outC->_L1772.P_27.diffArray[idx14].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1772.P_27.diffArray[idx14].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1772.P_27.diffArray[idx14].nc_diff = kcg_lit_int32(0);
    outC->_L1772.P_27.diffArray[idx14].v_diff = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 7; idx16++) {
    outC->_L1772.P_27.SSPArray[idx16].valid = kcg_true;
    outC->_L1772.P_27.SSPArray[idx16].d_static = kcg_lit_int32(0);
    outC->_L1772.P_27.SSPArray[idx16].v_static = kcg_lit_int32(0);
    outC->_L1772.P_27.SSPArray[idx16].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx15 = 0; idx15 < 7; idx15++) {
      outC->_L1772.P_27.SSPArray[idx16].diffArray[idx15].valid = kcg_true;
      outC->_L1772.P_27.SSPArray[idx16].diffArray[idx15].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1772.P_27.SSPArray[idx16].diffArray[idx15].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1772.P_27.SSPArray[idx16].diffArray[idx15].nc_diff = kcg_lit_int32(0);
      outC->_L1772.P_27.SSPArray[idx16].diffArray[idx15].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx17 = 0; idx17 < 7; idx17++) {
    outC->_L1772.P_41[idx17].valid = kcg_true;
    outC->_L1772.P_41[idx17].q_dir = Q_DIR_Reverse;
    outC->_L1772.P_41[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1772.P_41[idx17].d_leveltr = kcg_lit_int32(0);
    outC->_L1772.P_41[idx17].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1772.P_41[idx17].nid_ntc = kcg_lit_int32(0);
    outC->_L1772.P_41[idx17].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->_L1772.P_46[idx18].valid = kcg_true;
    outC->_L1772.P_46[idx18].q_dir = Q_DIR_Reverse;
    outC->_L1772.P_46[idx18].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1772.P_46[idx18].nid_ntc = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->_L1772.P_63[idx19].valid = kcg_true;
    outC->_L1772.P_63[idx19].q_dir = Q_DIR_Reverse;
    outC->_L1772.P_63[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1772.P_63[idx19].nid_c = kcg_lit_int32(0);
    outC->_L1772.P_63[idx19].nid_bg = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 3; idx20++) {
    outC->_L1772.P_80[idx20].valid = kcg_true;
    outC->_L1772.P_80[idx20].q_dir = Q_DIR_Reverse;
    outC->_L1772.P_80[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1772.P_80[idx20].d_mamode = kcg_lit_int32(0);
    outC->_L1772.P_80[idx20].m_mamode = M_MAMODE_On_Sight;
    outC->_L1772.P_80[idx20].v_mamode = kcg_lit_int32(0);
    outC->_L1772.P_80[idx20].l_mamode = kcg_lit_int32(0);
    outC->_L1772.P_80[idx20].l_ackmamode = kcg_lit_int32(0);
    outC->_L1772.P_80[idx20].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1772.LRBG = kcg_lit_int32(0);
  outC->_L1772.referenceLocation = kcg_lit_int32(0);
  outC->_L1770.linkedBGError = kcg_true;
  outC->_L1770.unlinkedBGError = kcg_true;
  outC->_L1770.BG_versionIncompatible = kcg_true;
  outC->_L1770.radioSequenceError = kcg_true;
  outC->_L1770.tNvContactError = kcg_true;
  outC->_L1770.otherTimingError = kcg_true;
  outC->_L1770.radioMessageConsistencyError = kcg_true;
  outC->_L1770.nid_c = kcg_lit_int32(0);
  outC->_L1770.nid_errorbg = kcg_lit_int32(0);
  outC->_L1769.outOfMemSpace = kcg_true;
  outC->_L1769.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1769.positionCalculation_inconsistent = kcg_true;
  outC->_L1769.linkedBGMissed = kcg_true;
  outC->_L1769.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1769.BG_LinkingConsistencyError = kcg_true;
  outC->_L1769.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1769.doubleRepositioningError = kcg_true;
  outC->_L1769.bg.valid = kcg_true;
  outC->_L1769.bg.nid_c = kcg_lit_int32(0);
  outC->_L1769.bg.nid_bg = kcg_lit_int32(0);
  outC->_L1769.bg.q_link = Q_LINK_Unlinked;
  outC->_L1769.bg.location.nominal = kcg_lit_int32(0);
  outC->_L1769.bg.location.d_min = kcg_lit_int32(0);
  outC->_L1769.bg.location.d_max = kcg_lit_int32(0);
  outC->_L1769.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.valid = kcg_true;
  outC->_L1769.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1769.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1769.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1769.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1769.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1769.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1769.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.valid = kcg_true;
  outC->_L1769.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1769.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1769.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1769.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1769.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1769.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1769.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1769.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1769.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1769.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1769.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int32(0);
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int32(0);
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int32(0);
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int32(0);
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1769.bg.infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1769.bg.missed = kcg_true;
  outC->_L1768.registration.valid = kcg_true;
  outC->_L1768.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1768.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1768.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1768.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1768.connection.valid = kcg_true;
  outC->_L1768.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1768.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1768.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1768.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1768.connection.connectionLost = kcg_true;
  outC->_L1768.connection.isInRadioHole = kcg_true;
  outC->_L1768.session.valid = kcg_true;
  outC->_L1768.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1768.session.nid_c = kcg_lit_int32(0);
  outC->_L1768.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1768.session.nid_radio = kcg_lit_int32(0);
  outC->_L1767.outOfMemSpace = kcg_true;
  outC->_L1767.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1767.positionCalculation_inconsistent = kcg_true;
  outC->_L1767.linkedBGMissed = kcg_true;
  outC->_L1767.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1767.BG_LinkingConsistencyError = kcg_true;
  outC->_L1767.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1767.doubleRepositioningError = kcg_true;
  outC->_L1767.bg.valid = kcg_true;
  outC->_L1767.bg.nid_c = kcg_lit_int32(0);
  outC->_L1767.bg.nid_bg = kcg_lit_int32(0);
  outC->_L1767.bg.q_link = Q_LINK_Unlinked;
  outC->_L1767.bg.location.nominal = kcg_lit_int32(0);
  outC->_L1767.bg.location.d_min = kcg_lit_int32(0);
  outC->_L1767.bg.location.d_max = kcg_lit_int32(0);
  outC->_L1767.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.valid = kcg_true;
  outC->_L1767.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1767.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1767.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1767.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.valid = kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1767.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1767.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1767.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1767.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1767.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1767.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1767.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].valid = kcg_true;
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].nid_LRBG = kcg_lit_int32(0);
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].d_link = kcg_lit_int32(0);
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].nid_c = kcg_lit_int32(0);
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].nid_bg = kcg_lit_int32(0);
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1767.bg.infoFromPassing.linkedBGs[idx22].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1767.bg.missed = kcg_true;
  outC->_L1766.linkedBGError = kcg_true;
  outC->_L1766.unlinkedBGError = kcg_true;
  outC->_L1766.BG_versionIncompatible = kcg_true;
  outC->_L1766.radioSequenceError = kcg_true;
  outC->_L1766.tNvContactError = kcg_true;
  outC->_L1766.otherTimingError = kcg_true;
  outC->_L1766.radioMessageConsistencyError = kcg_true;
  outC->_L1766.nid_c = kcg_lit_int32(0);
  outC->_L1766.nid_errorbg = kcg_lit_int32(0);
  outC->_L1760.registration.valid = kcg_true;
  outC->_L1760.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1760.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1760.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1760.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1760.connection.valid = kcg_true;
  outC->_L1760.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1760.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1760.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1760.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1760.connection.connectionLost = kcg_true;
  outC->_L1760.connection.isInRadioHole = kcg_true;
  outC->_L1760.session.valid = kcg_true;
  outC->_L1760.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1760.session.nid_c = kcg_lit_int32(0);
  outC->_L1760.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1760.session.nid_radio = kcg_lit_int32(0);
  outC->_L1759.registration.valid = kcg_true;
  outC->_L1759.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1759.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1759.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1759.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1759.connection.valid = kcg_true;
  outC->_L1759.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1759.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1759.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1759.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1759.connection.connectionLost = kcg_true;
  outC->_L1759.connection.isInRadioHole = kcg_true;
  outC->_L1759.session.valid = kcg_true;
  outC->_L1759.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1759.session.nid_c = kcg_lit_int32(0);
  outC->_L1759.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1759.session.nid_radio = kcg_lit_int32(0);
  outC->_L1755 = M_LEVEL_Level_0;
  outC->_L1754 = kcg_true;
  outC->_L1751.valid = kcg_true;
  outC->_L1751.deskOpen = kcg_true;
  outC->_L1751.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1751.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1750 = kcg_true;
  outC->_L1748.valid = kcg_true;
  outC->_L1748.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1748.nid_c = kcg_lit_int32(0);
  outC->_L1748.nid_rbc = kcg_lit_int32(0);
  outC->_L1748.nid_radio = kcg_lit_int32(0);
  outC->_L1739.registration.valid = kcg_true;
  outC->_L1739.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1739.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1739.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1739.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1739.connection.valid = kcg_true;
  outC->_L1739.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1739.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1739.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1739.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1739.connection.connectionLost = kcg_true;
  outC->_L1739.connection.isInRadioHole = kcg_true;
  outC->_L1739.session.valid = kcg_true;
  outC->_L1739.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1739.session.nid_c = kcg_lit_int32(0);
  outC->_L1739.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1739.session.nid_radio = kcg_lit_int32(0);
  outC->_L1740.valid = kcg_true;
  outC->_L1740.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1740.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1740.nid_radio = kcg_lit_int32(0);
  outC->_L1740.settingUpConnectionHasFailed = kcg_true;
  outC->_L1740.connectionLost = kcg_true;
  outC->_L1740.isInRadioHole = kcg_true;
  outC->_L1741 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1742.registration.valid = kcg_true;
  outC->_L1742.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1742.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1742.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1742.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1742.connection.valid = kcg_true;
  outC->_L1742.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1742.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1742.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1742.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1742.connection.connectionLost = kcg_true;
  outC->_L1742.connection.isInRadioHole = kcg_true;
  outC->_L1742.session.valid = kcg_true;
  outC->_L1742.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1742.session.nid_c = kcg_lit_int32(0);
  outC->_L1742.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1742.session.nid_radio = kcg_lit_int32(0);
  outC->_L1743 = kcg_true;
  outC->_L1744 = kcg_true;
  outC->_L1745.valid = kcg_true;
  outC->_L1745.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1745.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1745.nid_radio = kcg_lit_int32(0);
  outC->_L1745.settingUpConnectionHasFailed = kcg_true;
  outC->_L1745.connectionLost = kcg_true;
  outC->_L1745.isInRadioHole = kcg_true;
  outC->_L1746 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1747 = kcg_true;
  for (idx24 = 0; idx24 < 5; idx24++) {
    outC->_L1738[idx24].Message.valid = kcg_true;
    outC->_L1738[idx24].Message.nid_message = kcg_lit_int32(0);
    outC->_L1738[idx24].Message.l_message = kcg_lit_int32(0);
    outC->_L1738[idx24].Message.t_train = kcg_lit_int32(0);
    outC->_L1738[idx24].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1738[idx24].Message.field1 = kcg_lit_int32(0);
    outC->_L1738[idx24].Message.field2 = kcg_lit_int32(0);
    outC->_L1738[idx24].Message.field3 = kcg_lit_int32(0);
    for (idx23 = 0; idx23 < 50; idx23++) {
      outC->_L1738[idx24].OptionalPackets[idx23] = kcg_lit_int32(0);
    }
  }
  outC->_L1724.registration.valid = kcg_true;
  outC->_L1724.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1724.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1724.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1724.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1724.connection.valid = kcg_true;
  outC->_L1724.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1724.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1724.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1724.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1724.connection.connectionLost = kcg_true;
  outC->_L1724.connection.isInRadioHole = kcg_true;
  outC->_L1724.session.valid = kcg_true;
  outC->_L1724.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1724.session.nid_c = kcg_lit_int32(0);
  outC->_L1724.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1724.session.nid_radio = kcg_lit_int32(0);
  outC->_L1723 = kcg_true;
  outC->_L1720.registration.valid = kcg_true;
  outC->_L1720.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1720.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1720.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1720.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1720.connection.valid = kcg_true;
  outC->_L1720.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1720.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1720.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1720.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1720.connection.connectionLost = kcg_true;
  outC->_L1720.connection.isInRadioHole = kcg_true;
  outC->_L1720.session.valid = kcg_true;
  outC->_L1720.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1720.session.nid_c = kcg_lit_int32(0);
  outC->_L1720.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1720.session.nid_radio = kcg_lit_int32(0);
  outC->_L1721.valid = kcg_true;
  outC->_L1721.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L1719 = kcg_lit_int32(0);
  outC->_L1718 = kcg_lit_int32(0);
  outC->_L1716 = kcg_lit_int32(0);
  outC->_L1715 = kcg_lit_int32(0);
  outC->_L1713 = kcg_lit_int32(0);
  outC->_L1714 = kcg_lit_int32(0);
  outC->_L1711 = kcg_lit_int32(0);
  outC->_L1712 = kcg_lit_int32(0);
  outC->_L1705.valid = kcg_true;
  outC->_L1705.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L1705.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1705.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1705.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1705.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1705.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1705.p42.valid = kcg_true;
  outC->_L1705.p42.q_dir = Q_DIR_Reverse;
  outC->_L1705.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1705.p42.nid_c = kcg_lit_int32(0);
  outC->_L1705.p42.nid_rbc = kcg_lit_int32(0);
  outC->_L1705.p42.nid_radio = kcg_lit_int32(0);
  outC->_L1705.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1705.p45.valid = kcg_true;
  outC->_L1705.p45.q_dir = Q_DIR_Reverse;
  outC->_L1705.p45.nid_mn = kcg_lit_int32(0);
  outC->_L1705.sendingRBC.valid = kcg_true;
  outC->_L1705.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1705.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1705.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1706 = kcg_true;
  outC->_L1698.valid = kcg_true;
  outC->_L1698.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1698.radioMetadata.t_train_reference = kcg_true;
  outC->_L1698.radioMetadata.nid_em = kcg_true;
  outC->_L1698.radioMetadata.q_scale = kcg_true;
  outC->_L1698.radioMetadata.d_sr = kcg_true;
  outC->_L1698.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1698.radioMetadata.d_ref = kcg_true;
  outC->_L1698.radioMetadata.q_dir = kcg_true;
  outC->_L1698.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1698.radioMetadata.m_version = kcg_true;
  outC->_L1698.BG_Common_Header.valid = kcg_true;
  outC->_L1698.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1698.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1698.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1698.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1698.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1698.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1698.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1698.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1698.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1698.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1698.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1698.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1698.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1698.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1698.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1698.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1698.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L1698.packets.PacketHeaders[idx25].nid_packet = kcg_lit_int32(0);
    outC->_L1698.packets.PacketHeaders[idx25].q_dir = Q_DIR_Reverse;
    outC->_L1698.packets.PacketHeaders[idx25].valid = kcg_true;
    outC->_L1698.packets.PacketHeaders[idx25].startAddress = kcg_lit_int32(0);
    outC->_L1698.packets.PacketHeaders[idx25].endAddress = kcg_lit_int32(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L1698.packets.PacketData[idx26] = kcg_lit_int32(0);
  }
  outC->_L1698.sendingRBC.valid = kcg_true;
  outC->_L1698.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1698.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1698.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1700 = kcg_true;
  outC->_L1699 = kcg_true;
  outC->_L1692 = kcg_lit_int32(0);
  outC->_L1693 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1690 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1691 = kcg_lit_int32(0);
  outC->_L1689.compatibleModeAndLevel = kcg_true;
  outC->_L1689.level = M_LEVEL_Level_0;
  outC->_L1689.newLevel = kcg_true;
  outC->_L1689.Mode = M_MODE_Full_Supervision;
  outC->_L1689.newMode = kcg_true;
  outC->_L1688.compatibleModeAndLevel = kcg_true;
  outC->_L1688.level = M_LEVEL_Level_0;
  outC->_L1688.newLevel = kcg_true;
  outC->_L1688.Mode = M_MODE_Full_Supervision;
  outC->_L1688.newMode = kcg_true;
  outC->_L1686.Message.valid = kcg_true;
  outC->_L1686.Message.nid_message = kcg_lit_int32(0);
  outC->_L1686.Message.l_message = kcg_lit_int32(0);
  outC->_L1686.Message.t_train = kcg_lit_int32(0);
  outC->_L1686.Message.nid_engine = kcg_lit_int32(0);
  outC->_L1686.Message.field1 = kcg_lit_int32(0);
  outC->_L1686.Message.field2 = kcg_lit_int32(0);
  outC->_L1686.Message.field3 = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 50; idx27++) {
    outC->_L1686.OptionalPackets[idx27] = kcg_lit_int32(0);
  }
  outC->_L1687.valid = kcg_true;
  outC->_L1687.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L1687.networkID = kcg_lit_int32(0);
  outC->_L1684.Message.valid = kcg_true;
  outC->_L1684.Message.nid_message = kcg_lit_int32(0);
  outC->_L1684.Message.l_message = kcg_lit_int32(0);
  outC->_L1684.Message.t_train = kcg_lit_int32(0);
  outC->_L1684.Message.nid_engine = kcg_lit_int32(0);
  outC->_L1684.Message.field1 = kcg_lit_int32(0);
  outC->_L1684.Message.field2 = kcg_lit_int32(0);
  outC->_L1684.Message.field3 = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 50; idx28++) {
    outC->_L1684.OptionalPackets[idx28] = kcg_lit_int32(0);
  }
  outC->_L1685.valid = kcg_true;
  outC->_L1685.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L1685.networkID = kcg_lit_int32(0);
  outC->_L1683 = kcg_true;
  outC->_L1682 = kcg_true;
  outC->_L1681 = kcg_true;
  outC->_L1680.compatibleModeAndLevel = kcg_true;
  outC->_L1680.level = M_LEVEL_Level_0;
  outC->_L1680.newLevel = kcg_true;
  outC->_L1680.Mode = M_MODE_Full_Supervision;
  outC->_L1680.newMode = kcg_true;
  outC->_L1679 = kcg_true;
  outC->_L1678 = kcg_true;
  outC->_L1676 = kcg_true;
  outC->_L1677 = kcg_true;
  outC->_L1675.atPowerUp = kcg_true;
  outC->_L1675.atPowerDown = kcg_true;
  outC->_L1675.atStartOfMission = kcg_true;
  outC->_L1675.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L1675.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L1675.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L1675.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L1675.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L1675.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L1675.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L1675.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L1675.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L1675.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L1675.endOfMissionIsExecuted = kcg_true;
  outC->_L1675.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L1675.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L1675.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L1675.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L1675.trainExitedFromAnRBCArea = kcg_true;
  outC->_L1675.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L1675.level_1_isLeft = kcg_true;
  for (idx30 = 0; idx30 < 5; idx30++) {
    outC->_L1673[idx30].Message.valid = kcg_true;
    outC->_L1673[idx30].Message.nid_message = kcg_lit_int32(0);
    outC->_L1673[idx30].Message.l_message = kcg_lit_int32(0);
    outC->_L1673[idx30].Message.t_train = kcg_lit_int32(0);
    outC->_L1673[idx30].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1673[idx30].Message.field1 = kcg_lit_int32(0);
    outC->_L1673[idx30].Message.field2 = kcg_lit_int32(0);
    outC->_L1673[idx30].Message.field3 = kcg_lit_int32(0);
    for (idx29 = 0; idx29 < 50; idx29++) {
      outC->_L1673[idx30].OptionalPackets[idx29] = kcg_lit_int32(0);
    }
  }
  outC->_L1671 = kcg_lit_int32(0);
  outC->_L1670.radioNetworkID_Default.valid = kcg_true;
  outC->_L1670.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L1670.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L1670.nid_radio_shortNumberStoredOnboard = kcg_lit_int32(0);
  outC->_L1670.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L1670.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L1670.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L1670.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L1670.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L1670.onboardPhoneNumbers.valid = kcg_true;
  outC->_L1670.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 1; idx32++) {
    outC->_L1670.onboardPhoneNumbers.aNID_RADIO[idx32].valid = kcg_true;
    for (idx31 = 0; idx31 < 15; idx31++) {
      outC->_L1670.onboardPhoneNumbers.aNID_RADIO[idx32].telephoneNumber[idx31] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1670.nid_engine = kcg_lit_int32(0);
  outC->_L1670.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L1670.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L1669 = isAbleToManageOneSession_Handover_Pkg;
  outC->_L1668.valid = kcg_true;
  outC->_L1668.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1668.radioMetadata.t_train_reference = kcg_true;
  outC->_L1668.radioMetadata.nid_em = kcg_true;
  outC->_L1668.radioMetadata.q_scale = kcg_true;
  outC->_L1668.radioMetadata.d_sr = kcg_true;
  outC->_L1668.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1668.radioMetadata.d_ref = kcg_true;
  outC->_L1668.radioMetadata.q_dir = kcg_true;
  outC->_L1668.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1668.radioMetadata.m_version = kcg_true;
  outC->_L1668.BG_Common_Header.valid = kcg_true;
  outC->_L1668.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1668.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1668.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1668.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1668.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1668.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1668.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1668.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1668.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1668.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1668.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1668.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1668.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1668.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1668.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1668.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1668.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L1668.packets.PacketHeaders[idx33].nid_packet = kcg_lit_int32(0);
    outC->_L1668.packets.PacketHeaders[idx33].q_dir = Q_DIR_Reverse;
    outC->_L1668.packets.PacketHeaders[idx33].valid = kcg_true;
    outC->_L1668.packets.PacketHeaders[idx33].startAddress = kcg_lit_int32(0);
    outC->_L1668.packets.PacketHeaders[idx33].endAddress = kcg_lit_int32(0);
  }
  for (idx34 = 0; idx34 < 500; idx34++) {
    outC->_L1668.packets.PacketData[idx34] = kcg_lit_int32(0);
  }
  outC->_L1668.sendingRBC.valid = kcg_true;
  outC->_L1668.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1668.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1668.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1667.valid = kcg_true;
  outC->_L1667.timestamp = kcg_lit_int32(0);
  outC->_L1667.trainPositionIsUnknown = kcg_true;
  outC->_L1667.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1667.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1667.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1667.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1667.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1667.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1667.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1667.LRBG.valid = kcg_true;
  outC->_L1667.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1667.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1667.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1667.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1667.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1667.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1667.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1667.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1667.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx35 = 0; idx35 < 33; idx35++) {
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].valid = kcg_true;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].nid_LRBG = kcg_lit_int32(0);
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].q_dir = Q_DIR_Reverse;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].d_link = kcg_lit_int32(0);
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].nid_c = kcg_lit_int32(0);
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].nid_bg = kcg_lit_int32(0);
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[idx35].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1667.LRBG.missed = kcg_true;
  outC->_L1667.prvLRBG.valid = kcg_true;
  outC->_L1667.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1667.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(
      0);
  outC->_L1667.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx36 = 0; idx36 < 33; idx36++) {
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].valid = kcg_true;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].q_dir = Q_DIR_Reverse;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].d_link = kcg_lit_int32(0);
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].nid_c = kcg_lit_int32(0);
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].nid_bg = kcg_lit_int32(0);
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[idx36].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1667.prvLRBG.missed = kcg_true;
  outC->_L1667.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1667.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1667.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1667.linkingIsUsedOnboard = kcg_true;
  outC->_L1667.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1667.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1667.maxSafeRearEndPosition = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 41; idx38++) {
    outC->_L1666[idx38].valid = kcg_true;
    outC->_L1666[idx38].nid_c = kcg_lit_int32(0);
    outC->_L1666[idx38].nid_bg = kcg_lit_int32(0);
    outC->_L1666[idx38].q_link = Q_LINK_Unlinked;
    outC->_L1666[idx38].location.nominal = kcg_lit_int32(0);
    outC->_L1666[idx38].location.d_min = kcg_lit_int32(0);
    outC->_L1666[idx38].location.d_max = kcg_lit_int32(0);
    outC->_L1666[idx38].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.valid = kcg_true;
    outC->_L1666[idx38].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1666[idx38].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1666[idx38].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1666[idx38].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1666[idx38].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1666[idx38].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1666[idx38].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.valid = kcg_true;
    outC->_L1666[idx38].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1666[idx38].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1666[idx38].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1666[idx38].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1666[idx38].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1666[idx38].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1666[idx38].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1666[idx38].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L1666[idx38].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1666[idx38].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1666[idx38].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx37 = 0; idx37 < 33; idx37++) {
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].valid = kcg_true;
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].q_dir = Q_DIR_Reverse;
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].d_link = kcg_lit_int32(0);
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].nid_c = kcg_lit_int32(0);
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].nid_bg = kcg_lit_int32(0);
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1666[idx38].infoFromPassing.linkedBGs[idx37].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L1666[idx38].missed = kcg_true;
  }
  outC->_L1665 = kcg_lit_int32(0);
  outC->_L1664.valid = kcg_true;
  outC->_L1664.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1664.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1664.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1664.nid_mn = kcg_lit_int32(0);
  outC->_L1663.valid = kcg_true;
  outC->_L1663.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1663.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1663.nid_radio = kcg_lit_int32(0);
  outC->_L1663.settingUpConnectionHasFailed = kcg_true;
  outC->_L1663.connectionLost = kcg_true;
  outC->_L1663.isInRadioHole = kcg_true;
  outC->_L1662 = kcg_lit_int32(0);
  outC->_L1661.valid = kcg_true;
  outC->_L1661.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1661.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1661.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1661.nid_mn = kcg_lit_int32(0);
  outC->_L1660 = kcg_true;
  outC->_L1658.valid = kcg_true;
  outC->_L1658.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1658.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1658.nid_radio = kcg_lit_int32(0);
  outC->_L1658.settingUpConnectionHasFailed = kcg_true;
  outC->_L1658.connectionLost = kcg_true;
  outC->_L1658.isInRadioHole = kcg_true;
  outC->_L1657 = kcg_true;
  outC->_L1653.valid = kcg_true;
  outC->_L1653.q_dir = Q_DIR_Reverse;
  outC->_L1653.nid_mn = kcg_lit_int32(0);
  outC->_L1652.valid = kcg_true;
  outC->_L1652.q_dir = Q_DIR_Reverse;
  outC->_L1652.nid_mn = kcg_lit_int32(0);
  outC->_L1633.registration.valid = kcg_true;
  outC->_L1633.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1633.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1633.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1633.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1633.connection.valid = kcg_true;
  outC->_L1633.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1633.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1633.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1633.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1633.connection.connectionLost = kcg_true;
  outC->_L1633.connection.isInRadioHole = kcg_true;
  outC->_L1633.session.valid = kcg_true;
  outC->_L1633.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1633.session.nid_c = kcg_lit_int32(0);
  outC->_L1633.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1633.session.nid_radio = kcg_lit_int32(0);
  outC->_L1634.registration.valid = kcg_true;
  outC->_L1634.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1634.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1634.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1634.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1634.connection.valid = kcg_true;
  outC->_L1634.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1634.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1634.connection.nid_radio = kcg_lit_int32(0);
  outC->_L1634.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1634.connection.connectionLost = kcg_true;
  outC->_L1634.connection.isInRadioHole = kcg_true;
  outC->_L1634.session.valid = kcg_true;
  outC->_L1634.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1634.session.nid_c = kcg_lit_int32(0);
  outC->_L1634.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1634.session.nid_radio = kcg_lit_int32(0);
  outC->_L1635.valid = kcg_true;
  outC->_L1635.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1635.action = mca_nop_RCM_Types_Pkg;
  outC->_L1635.nid_radio = kcg_lit_int32(0);
  outC->_L1636.valid = kcg_true;
  outC->_L1636.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1636.action = mca_nop_RCM_Types_Pkg;
  outC->_L1636.nid_radio = kcg_lit_int32(0);
  outC->_L1637.valid = kcg_true;
  outC->_L1637.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1637.action = mra_nop_RCM_Types_Pkg;
  outC->_L1637.network_id = kcg_lit_int32(0);
  outC->_L1638.valid = kcg_true;
  outC->_L1638.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1638.action = mra_nop_RCM_Types_Pkg;
  outC->_L1638.network_id = kcg_lit_int32(0);
  outC->_L1639.valid = kcg_true;
  outC->_L1639.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L1640.valid = kcg_true;
  outC->_L1640.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1640.nid_c = kcg_lit_int32(0);
  outC->_L1640.nid_RBC = kcg_lit_int32(0);
  outC->_L1640.nid_radio = kcg_lit_int32(0);
  outC->_L1640.nid_mn = kcg_lit_int32(0);
  outC->_L1641 = kcg_true;
  outC->_L1642 = kcg_true;
  for (idx40 = 0; idx40 < 5; idx40++) {
    outC->_L1643[idx40].Message.valid = kcg_true;
    outC->_L1643[idx40].Message.nid_message = kcg_lit_int32(0);
    outC->_L1643[idx40].Message.l_message = kcg_lit_int32(0);
    outC->_L1643[idx40].Message.t_train = kcg_lit_int32(0);
    outC->_L1643[idx40].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1643[idx40].Message.field1 = kcg_lit_int32(0);
    outC->_L1643[idx40].Message.field2 = kcg_lit_int32(0);
    outC->_L1643[idx40].Message.field3 = kcg_lit_int32(0);
    for (idx39 = 0; idx39 < 50; idx39++) {
      outC->_L1643[idx40].OptionalPackets[idx39] = kcg_lit_int32(0);
    }
  }
  for (idx42 = 0; idx42 < 5; idx42++) {
    outC->_L1644[idx42].Message.valid = kcg_true;
    outC->_L1644[idx42].Message.nid_message = kcg_lit_int32(0);
    outC->_L1644[idx42].Message.l_message = kcg_lit_int32(0);
    outC->_L1644[idx42].Message.t_train = kcg_lit_int32(0);
    outC->_L1644[idx42].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1644[idx42].Message.field1 = kcg_lit_int32(0);
    outC->_L1644[idx42].Message.field2 = kcg_lit_int32(0);
    outC->_L1644[idx42].Message.field3 = kcg_lit_int32(0);
    for (idx41 = 0; idx41 < 50; idx41++) {
      outC->_L1644[idx42].OptionalPackets[idx41] = kcg_lit_int32(0);
    }
  }
  outC->_L1645 = kcg_true;
  outC->_L1646 = kcg_true;
  outC->_L1647 = kcg_true;
  outC->_L1648 = kcg_true;
  outC->_L1649 = kcg_true;
  outC->_L1650.valid = kcg_true;
  outC->_L1650.q_dir = Q_DIR_Reverse;
  outC->_L1650.nid_mn = kcg_lit_int32(0);
  outC->_L1651 = kcg_true;
  outC->_L1613.atPowerUp = kcg_true;
  outC->_L1613.atPowerDown = kcg_true;
  outC->_L1613.atStartOfMission = kcg_true;
  outC->_L1613.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L1613.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L1613.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L1613.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L1613.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L1613.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L1613.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L1613.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L1613.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L1613.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L1613.endOfMissionIsExecuted = kcg_true;
  outC->_L1613.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L1613.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L1613.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L1613.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L1613.trainExitedFromAnRBCArea = kcg_true;
  outC->_L1613.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L1613.level_1_isLeft = kcg_true;
  outC->_L1614.defaultID.valid = kcg_true;
  outC->_L1614.defaultID.q_dir = Q_DIR_Reverse;
  outC->_L1614.defaultID.nid_mn = kcg_lit_int32(0);
  outC->_L1614.memorizedID.valid = kcg_true;
  outC->_L1614.memorizedID.q_dir = Q_DIR_Reverse;
  outC->_L1614.memorizedID.nid_mn = kcg_lit_int32(0);
  outC->_L1614.ID_fromDriver.valid = kcg_true;
  outC->_L1614.ID_fromDriver.q_dir = Q_DIR_Reverse;
  outC->_L1614.ID_fromDriver.nid_mn = kcg_lit_int32(0);
  outC->_L1617.nid_engine = kcg_lit_int32(0);
  outC->_L1617.nid_operational = kcg_lit_int32(0);
  outC->_L1617.l_train = kcg_lit_int32(0);
  outC->_L1617.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L1617.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L1617.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L1617.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L1617.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L1617.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L1617.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1617.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1617.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1617.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1617.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1617.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1621.valid = kcg_true;
  outC->_L1621.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L1621.settingUpConnectionHasFailed = kcg_true;
  outC->_L1621.connectionLost = kcg_true;
  outC->_L1622.compatibleModeAndLevel = kcg_true;
  outC->_L1622.level = M_LEVEL_Level_0;
  outC->_L1622.newLevel = kcg_true;
  outC->_L1622.Mode = M_MODE_Full_Supervision;
  outC->_L1622.newMode = kcg_true;
  outC->_L1623 = M_MODE_Full_Supervision;
  outC->_L1624 = M_LEVEL_Level_0;
  outC->_L1629 = kcg_lit_int32(0);
  outC->_L1631 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1632.valid = kcg_true;
  outC->_L1632.nid_packet = kcg_lit_int32(0);
  outC->_L1632.l_packet = kcg_lit_int32(0);
  outC->_L1632.n_iter = kcg_lit_int32(0);
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->_L1632.nid_radio[idx43] = kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 5; idx45++) {
    outC->_L1596[idx45].Message.valid = kcg_true;
    outC->_L1596[idx45].Message.nid_message = kcg_lit_int32(0);
    outC->_L1596[idx45].Message.l_message = kcg_lit_int32(0);
    outC->_L1596[idx45].Message.t_train = kcg_lit_int32(0);
    outC->_L1596[idx45].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1596[idx45].Message.field1 = kcg_lit_int32(0);
    outC->_L1596[idx45].Message.field2 = kcg_lit_int32(0);
    outC->_L1596[idx45].Message.field3 = kcg_lit_int32(0);
    for (idx44 = 0; idx44 < 50; idx44++) {
      outC->_L1596[idx45].OptionalPackets[idx44] = kcg_lit_int32(0);
    }
  }
  outC->_L1594 = kcg_true;
  outC->_L1593.valid = kcg_true;
  outC->_L1593.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L1593.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1593.btm_msg.present = kcg_true;
  outC->_L1593.btm_msg.checkResult = kcg_true;
  outC->_L1593.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1593.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1593.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1593.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1593.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1593.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1593.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1593.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L1593.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L1593.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L1593.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1593.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1593.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1593.rtm_msg.present = kcg_true;
  outC->_L1593.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1593.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1593.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1593.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1593.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1593.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1593.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1593.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L1593.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx46 = 0; idx46 < 30; idx46++) {
    outC->_L1593.packets.PacketHeaders[idx46].nid_packet = kcg_lit_int32(0);
    outC->_L1593.packets.PacketHeaders[idx46].q_dir = Q_DIR_Reverse;
    outC->_L1593.packets.PacketHeaders[idx46].valid = kcg_true;
    outC->_L1593.packets.PacketHeaders[idx46].startAddress = kcg_lit_int32(0);
    outC->_L1593.packets.PacketHeaders[idx46].endAddress = kcg_lit_int32(0);
  }
  for (idx47 = 0; idx47 < 500; idx47++) {
    outC->_L1593.packets.PacketData[idx47] = kcg_lit_int32(0);
  }
  outC->_L1586 = kcg_true;
  outC->_L1587 = kcg_lit_int32(0);
  outC->_L1588 = kcg_lit_int32(0);
  outC->_L1589 = kcg_lit_int32(0);
  outC->_L1590 = kcg_lit_int32(0);
  outC->_L1591 = kcg_lit_int32(0);
  outC->_L1592 = kcg_lit_int32(0);
  outC->_L1564 = kcg_lit_int32(0);
  outC->_L1565 = kcg_lit_int32(0);
  outC->_L1566 = kcg_lit_int32(0);
  outC->_L1567 = kcg_lit_int32(0);
  outC->_L1568 = kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 5; idx49++) {
    outC->_L1563[idx49].Message.valid = kcg_true;
    outC->_L1563[idx49].Message.nid_message = kcg_lit_int32(0);
    outC->_L1563[idx49].Message.l_message = kcg_lit_int32(0);
    outC->_L1563[idx49].Message.t_train = kcg_lit_int32(0);
    outC->_L1563[idx49].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1563[idx49].Message.field1 = kcg_lit_int32(0);
    outC->_L1563[idx49].Message.field2 = kcg_lit_int32(0);
    outC->_L1563[idx49].Message.field3 = kcg_lit_int32(0);
    for (idx48 = 0; idx48 < 50; idx48++) {
      outC->_L1563[idx49].OptionalPackets[idx48] = kcg_lit_int32(0);
    }
  }
  for (idx51 = 0; idx51 < 5; idx51++) {
    outC->_L1562[idx51].Message.valid = kcg_true;
    outC->_L1562[idx51].Message.nid_message = kcg_lit_int32(0);
    outC->_L1562[idx51].Message.l_message = kcg_lit_int32(0);
    outC->_L1562[idx51].Message.t_train = kcg_lit_int32(0);
    outC->_L1562[idx51].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1562[idx51].Message.field1 = kcg_lit_int32(0);
    outC->_L1562[idx51].Message.field2 = kcg_lit_int32(0);
    outC->_L1562[idx51].Message.field3 = kcg_lit_int32(0);
    for (idx50 = 0; idx50 < 50; idx50++) {
      outC->_L1562[idx51].OptionalPackets[idx50] = kcg_lit_int32(0);
    }
  }
  outC->_L1558.valid = kcg_true;
  outC->_L1558.nid_packet = kcg_lit_int32(0);
  outC->_L1558.l_packet = kcg_lit_int32(0);
  outC->_L1558.n_iter = kcg_lit_int32(0);
  for (idx52 = 0; idx52 < 5; idx52++) {
    outC->_L1558.nid_radio[idx52] = kcg_lit_int32(0);
  }
  for (idx54 = 0; idx54 < 5; idx54++) {
    outC->_L1552[idx54].Message.valid = kcg_true;
    outC->_L1552[idx54].Message.nid_message = kcg_lit_int32(0);
    outC->_L1552[idx54].Message.l_message = kcg_lit_int32(0);
    outC->_L1552[idx54].Message.t_train = kcg_lit_int32(0);
    outC->_L1552[idx54].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1552[idx54].Message.field1 = kcg_lit_int32(0);
    outC->_L1552[idx54].Message.field2 = kcg_lit_int32(0);
    outC->_L1552[idx54].Message.field3 = kcg_lit_int32(0);
    for (idx53 = 0; idx53 < 50; idx53++) {
      outC->_L1552[idx54].OptionalPackets[idx53] = kcg_lit_int32(0);
    }
  }
  outC->_L1543 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1542 = kcg_lit_int32(0);
  for (idx56 = 0; idx56 < 5; idx56++) {
    outC->_L1540[idx56].Message.valid = kcg_true;
    outC->_L1540[idx56].Message.nid_message = kcg_lit_int32(0);
    outC->_L1540[idx56].Message.l_message = kcg_lit_int32(0);
    outC->_L1540[idx56].Message.t_train = kcg_lit_int32(0);
    outC->_L1540[idx56].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1540[idx56].Message.field1 = kcg_lit_int32(0);
    outC->_L1540[idx56].Message.field2 = kcg_lit_int32(0);
    outC->_L1540[idx56].Message.field3 = kcg_lit_int32(0);
    for (idx55 = 0; idx55 < 50; idx55++) {
      outC->_L1540[idx56].OptionalPackets[idx55] = kcg_lit_int32(0);
    }
  }
  outC->_L1538 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1525.LevelTransition.is_set = kcg_true;
  outC->_L1525.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L1525.LevelTransition.transition.position = kcg_lit_int32(0);
  outC->_L1525.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1525.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L1525.LevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->_L1525.LevelTransition.LRBG = kcg_lit_int32(0);
  outC->_L1525.LevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->_L1525.IsAvailableForUse = kcg_true;
  outC->_L1522 = kcg_true;
  outC->_L1521.compatibleModeAndLevel = kcg_true;
  outC->_L1521.level = M_LEVEL_Level_0;
  outC->_L1521.newLevel = kcg_true;
  outC->_L1521.Mode = M_MODE_Full_Supervision;
  outC->_L1521.newMode = kcg_true;
  outC->_L1517 = kcg_true;
  outC->_L1516 = kcg_true;
  outC->_L1513 = kcg_lit_float32(0.0);
  outC->_L1514 = kcg_lit_int32(0);
  outC->_L1515 = kcg_lit_int32(0);
  outC->_L1511 = kcg_lit_float32(0.0);
  outC->_L1512 = kcg_lit_int32(0);
  for (idx57 = 0; idx57 < 5; idx57++) {
    outC->_L1510.train_packets.P_12[idx57].valid = kcg_true;
    outC->_L1510.train_packets.P_12[idx57].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_12[idx57].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_12[idx57].v_main = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].v_loa = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].t_loa = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].l_section = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_12[idx57].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].l_endsection = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_12[idx57].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1510.train_packets.P_12[idx57].t_endtimer = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1510.train_packets.P_12[idx57].d_dp = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].v_releasedp = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1510.train_packets.P_12[idx57].d_startol = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].t_ol = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].d_ol = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_12[idx57].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L1510.train_packets.P_135.valid = kcg_true;
  outC->_L1510.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_137.valid = kcg_true;
  outC->_L1510.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1510.train_packets.P_138.valid = kcg_true;
  outC->_L1510.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1510.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L1510.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L1510.train_packets.P_139.valid = kcg_true;
  outC->_L1510.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1510.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L1510.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx58 = 0; idx58 < 5; idx58++) {
    outC->_L1510.train_packets.P_15[idx58].valid = kcg_true;
    outC->_L1510.train_packets.P_15[idx58].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_15[idx58].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_15[idx58].v_loa = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].t_loa = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].l_section = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_15[idx58].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].l_endsection = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_15[idx58].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1510.train_packets.P_15[idx58].t_endtimer = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1510.train_packets.P_15[idx58].d_dp = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].v_releasedp = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1510.train_packets.P_15[idx58].d_startol = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].t_ol = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].d_ol = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_15[idx58].v_releaseol = kcg_lit_int32(0);
  }
  for (idx59 = 0; idx59 < 7; idx59++) {
    outC->_L1510.train_packets.P_21[idx59].valid = kcg_true;
    outC->_L1510.train_packets.P_21[idx59].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_21[idx59].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_21[idx59].d_gradient = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_21[idx59].q_gdir = Q_GDIR_downhill;
    outC->_L1510.train_packets.P_21[idx59].g_a = kcg_lit_int32(0);
  }
  outC->_L1510.train_packets.P_27.valid = kcg_true;
  outC->_L1510.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1510.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->_L1510.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->_L1510.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx60 = 0; idx60 < 7; idx60++) {
    outC->_L1510.train_packets.P_27.diffArray[idx60].valid = kcg_true;
    outC->_L1510.train_packets.P_27.diffArray[idx60].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1510.train_packets.P_27.diffArray[idx60].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1510.train_packets.P_27.diffArray[idx60].nc_diff = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_27.diffArray[idx60].v_diff = kcg_lit_int32(0);
  }
  for (idx62 = 0; idx62 < 7; idx62++) {
    outC->_L1510.train_packets.P_27.SSPArray[idx62].valid = kcg_true;
    outC->_L1510.train_packets.P_27.SSPArray[idx62].d_static = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_27.SSPArray[idx62].v_static = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_27.SSPArray[idx62].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx61 = 0; idx61 < 7; idx61++) {
      outC->_L1510.train_packets.P_27.SSPArray[idx62].diffArray[idx61].valid =
        kcg_true;
      outC->_L1510.train_packets.P_27.SSPArray[idx62].diffArray[idx61].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1510.train_packets.P_27.SSPArray[idx62].diffArray[idx61].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1510.train_packets.P_27.SSPArray[idx62].diffArray[idx61].nc_diff =
        kcg_lit_int32(0);
      outC->_L1510.train_packets.P_27.SSPArray[idx62].diffArray[idx61].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx63 = 0; idx63 < 7; idx63++) {
    outC->_L1510.train_packets.P_41[idx63].valid = kcg_true;
    outC->_L1510.train_packets.P_41[idx63].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_41[idx63].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_41[idx63].d_leveltr = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_41[idx63].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1510.train_packets.P_41[idx63].nid_ntc = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_41[idx63].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx64 = 0; idx64 < 7; idx64++) {
    outC->_L1510.train_packets.P_46[idx64].valid = kcg_true;
    outC->_L1510.train_packets.P_46[idx64].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_46[idx64].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1510.train_packets.P_46[idx64].nid_ntc = kcg_lit_int32(0);
  }
  for (idx65 = 0; idx65 < 7; idx65++) {
    outC->_L1510.train_packets.P_63[idx65].valid = kcg_true;
    outC->_L1510.train_packets.P_63[idx65].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_63[idx65].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1510.train_packets.P_63[idx65].nid_c = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_63[idx65].nid_bg = kcg_lit_int32(0);
  }
  for (idx66 = 0; idx66 < 3; idx66++) {
    outC->_L1510.train_packets.P_80[idx66].valid = kcg_true;
    outC->_L1510.train_packets.P_80[idx66].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_80[idx66].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_80[idx66].d_mamode = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_80[idx66].m_mamode = M_MAMODE_On_Sight;
    outC->_L1510.train_packets.P_80[idx66].v_mamode = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_80[idx66].l_mamode = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_80[idx66].l_ackmamode = kcg_lit_int32(0);
    outC->_L1510.train_packets.P_80[idx66].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1510.train_packets.LRBG = kcg_lit_int32(0);
  outC->_L1510.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->_L1510.train_messages.Mess_15 = kcg_true;
  outC->_L1510.train_messages.Mess_16 = kcg_true;
  outC->_L1510.train_messages.Mess_2 = kcg_true;
  outC->_L1510.train_messages.Mess_27 = kcg_true;
  outC->_L1510.train_messages.Mess_28 = kcg_true;
  outC->_L1510.train_messages.Mess_6 = kcg_true;
  outC->_L1510.p12 = kcg_true;
  outC->_L1510.p15 = kcg_true;
  outC->_L1510.p21 = kcg_true;
  outC->_L1510.p27 = kcg_true;
  for (idx67 = 0; idx67 < 5; idx67++) {
    outC->_L1503.P_12[idx67].valid = kcg_true;
    outC->_L1503.P_12[idx67].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_12[idx67].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_12[idx67].v_main = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].v_loa = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].t_loa = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].l_section = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_12[idx67].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].l_endsection = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_12[idx67].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1503.P_12[idx67].t_endtimer = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1503.P_12[idx67].d_dp = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].v_releasedp = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1503.P_12[idx67].d_startol = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].t_ol = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].d_ol = kcg_lit_int32(0);
    outC->_L1503.P_12[idx67].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L1503.P_135.valid = kcg_true;
  outC->_L1503.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_137.valid = kcg_true;
  outC->_L1503.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1503.P_138.valid = kcg_true;
  outC->_L1503.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1503.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L1503.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L1503.P_139.valid = kcg_true;
  outC->_L1503.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1503.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L1503.P_139.v_reverse = kcg_lit_int32(0);
  for (idx68 = 0; idx68 < 5; idx68++) {
    outC->_L1503.P_15[idx68].valid = kcg_true;
    outC->_L1503.P_15[idx68].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_15[idx68].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_15[idx68].v_loa = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].t_loa = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].l_section = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_15[idx68].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].l_endsection = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_15[idx68].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1503.P_15[idx68].t_endtimer = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1503.P_15[idx68].d_dp = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].v_releasedp = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1503.P_15[idx68].d_startol = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].t_ol = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].d_ol = kcg_lit_int32(0);
    outC->_L1503.P_15[idx68].v_releaseol = kcg_lit_int32(0);
  }
  for (idx69 = 0; idx69 < 7; idx69++) {
    outC->_L1503.P_21[idx69].valid = kcg_true;
    outC->_L1503.P_21[idx69].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_21[idx69].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_21[idx69].d_gradient = kcg_lit_int32(0);
    outC->_L1503.P_21[idx69].q_gdir = Q_GDIR_downhill;
    outC->_L1503.P_21[idx69].g_a = kcg_lit_int32(0);
  }
  outC->_L1503.P_27.valid = kcg_true;
  outC->_L1503.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1503.P_27.d_static = kcg_lit_int32(0);
  outC->_L1503.P_27.v_static = kcg_lit_int32(0);
  outC->_L1503.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx70 = 0; idx70 < 7; idx70++) {
    outC->_L1503.P_27.diffArray[idx70].valid = kcg_true;
    outC->_L1503.P_27.diffArray[idx70].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1503.P_27.diffArray[idx70].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1503.P_27.diffArray[idx70].nc_diff = kcg_lit_int32(0);
    outC->_L1503.P_27.diffArray[idx70].v_diff = kcg_lit_int32(0);
  }
  for (idx72 = 0; idx72 < 7; idx72++) {
    outC->_L1503.P_27.SSPArray[idx72].valid = kcg_true;
    outC->_L1503.P_27.SSPArray[idx72].d_static = kcg_lit_int32(0);
    outC->_L1503.P_27.SSPArray[idx72].v_static = kcg_lit_int32(0);
    outC->_L1503.P_27.SSPArray[idx72].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx71 = 0; idx71 < 7; idx71++) {
      outC->_L1503.P_27.SSPArray[idx72].diffArray[idx71].valid = kcg_true;
      outC->_L1503.P_27.SSPArray[idx72].diffArray[idx71].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1503.P_27.SSPArray[idx72].diffArray[idx71].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1503.P_27.SSPArray[idx72].diffArray[idx71].nc_diff = kcg_lit_int32(0);
      outC->_L1503.P_27.SSPArray[idx72].diffArray[idx71].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx73 = 0; idx73 < 7; idx73++) {
    outC->_L1503.P_41[idx73].valid = kcg_true;
    outC->_L1503.P_41[idx73].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_41[idx73].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_41[idx73].d_leveltr = kcg_lit_int32(0);
    outC->_L1503.P_41[idx73].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1503.P_41[idx73].nid_ntc = kcg_lit_int32(0);
    outC->_L1503.P_41[idx73].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx74 = 0; idx74 < 7; idx74++) {
    outC->_L1503.P_46[idx74].valid = kcg_true;
    outC->_L1503.P_46[idx74].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_46[idx74].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1503.P_46[idx74].nid_ntc = kcg_lit_int32(0);
  }
  for (idx75 = 0; idx75 < 7; idx75++) {
    outC->_L1503.P_63[idx75].valid = kcg_true;
    outC->_L1503.P_63[idx75].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_63[idx75].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1503.P_63[idx75].nid_c = kcg_lit_int32(0);
    outC->_L1503.P_63[idx75].nid_bg = kcg_lit_int32(0);
  }
  for (idx76 = 0; idx76 < 3; idx76++) {
    outC->_L1503.P_80[idx76].valid = kcg_true;
    outC->_L1503.P_80[idx76].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_80[idx76].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_80[idx76].d_mamode = kcg_lit_int32(0);
    outC->_L1503.P_80[idx76].m_mamode = M_MAMODE_On_Sight;
    outC->_L1503.P_80[idx76].v_mamode = kcg_lit_int32(0);
    outC->_L1503.P_80[idx76].l_mamode = kcg_lit_int32(0);
    outC->_L1503.P_80[idx76].l_ackmamode = kcg_lit_int32(0);
    outC->_L1503.P_80[idx76].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1503.LRBG = kcg_lit_int32(0);
  outC->_L1503.referenceLocation = kcg_lit_int32(0);
  outC->_L1501.Interface_To_National_System = kcg_true;
  outC->_L1501.National_trip_Order = kcg_true;
  outC->_L1500 = kcg_true;
  outC->_L1499.Common_Errors.linkedBGError = kcg_true;
  outC->_L1499.Common_Errors.unlinkedBGError = kcg_true;
  outC->_L1499.Common_Errors.BG_versionIncompatible = kcg_true;
  outC->_L1499.Common_Errors.radioSequenceError = kcg_true;
  outC->_L1499.Common_Errors.tNvContactError = kcg_true;
  outC->_L1499.Common_Errors.otherTimingError = kcg_true;
  outC->_L1499.Common_Errors.radioMessageConsistencyError = kcg_true;
  outC->_L1499.Common_Errors.nid_c = kcg_lit_int32(0);
  outC->_L1499.Common_Errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L1499.Failure_Occured = kcg_true;
  outC->_L1499.Continue_Shunting_Active = kcg_true;
  outC->_L1499.Stop_Shunting_Stored = kcg_true;
  outC->_L1498.isChanged = kcg_true;
  outC->_L1498.bg_id = kcg_lit_int32(0);
  outC->_L1498.nid_c = kcg_lit_int32(0);
  outC->_L1498.errors.linkedBGError = kcg_true;
  outC->_L1498.errors.unlinkedBGError = kcg_true;
  outC->_L1498.errors.BG_versionIncompatible = kcg_true;
  outC->_L1498.errors.radioSequenceError = kcg_true;
  outC->_L1498.errors.tNvContactError = kcg_true;
  outC->_L1498.errors.otherTimingError = kcg_true;
  outC->_L1498.errors.radioMessageConsistencyError = kcg_true;
  outC->_L1498.errors.nid_c = kcg_lit_int32(0);
  outC->_L1498.errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L1497.linkedBGError = kcg_true;
  outC->_L1497.unlinkedBGError = kcg_true;
  outC->_L1497.BG_versionIncompatible = kcg_true;
  outC->_L1497.radioSequenceError = kcg_true;
  outC->_L1497.tNvContactError = kcg_true;
  outC->_L1497.otherTimingError = kcg_true;
  outC->_L1497.radioMessageConsistencyError = kcg_true;
  outC->_L1497.nid_c = kcg_lit_int32(0);
  outC->_L1497.nid_errorbg = kcg_lit_int32(0);
  outC->_L1496.valid = kcg_true;
  outC->_L1496.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1496.radioMetadata.t_train_reference = kcg_true;
  outC->_L1496.radioMetadata.nid_em = kcg_true;
  outC->_L1496.radioMetadata.q_scale = kcg_true;
  outC->_L1496.radioMetadata.d_sr = kcg_true;
  outC->_L1496.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1496.radioMetadata.d_ref = kcg_true;
  outC->_L1496.radioMetadata.q_dir = kcg_true;
  outC->_L1496.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1496.radioMetadata.m_version = kcg_true;
  outC->_L1496.BG_Common_Header.valid = kcg_true;
  outC->_L1496.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1496.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1496.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1496.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1496.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1496.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1496.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1496.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1496.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1496.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1496.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1496.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1496.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1496.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1496.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1496.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1496.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx77 = 0; idx77 < 30; idx77++) {
    outC->_L1496.packets.PacketHeaders[idx77].nid_packet = kcg_lit_int32(0);
    outC->_L1496.packets.PacketHeaders[idx77].q_dir = Q_DIR_Reverse;
    outC->_L1496.packets.PacketHeaders[idx77].valid = kcg_true;
    outC->_L1496.packets.PacketHeaders[idx77].startAddress = kcg_lit_int32(0);
    outC->_L1496.packets.PacketHeaders[idx77].endAddress = kcg_lit_int32(0);
  }
  for (idx78 = 0; idx78 < 500; idx78++) {
    outC->_L1496.packets.PacketData[idx78] = kcg_lit_int32(0);
  }
  outC->_L1496.sendingRBC.valid = kcg_true;
  outC->_L1496.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1496.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1496.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1495.valid = kcg_true;
  outC->_L1495.timestamp = kcg_lit_int32(0);
  outC->_L1495.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1495.odo.o_min = kcg_lit_int32(0);
  outC->_L1495.odo.o_max = kcg_lit_int32(0);
  outC->_L1495.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1495.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1495.speed.v_lower = kcg_lit_int32(0);
  outC->_L1495.speed.v_upper = kcg_lit_int32(0);
  outC->_L1495.acceleration = kcg_lit_int32(0);
  outC->_L1495.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1495.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1493 = kcg_true;
  outC->_L1492 = kcg_true;
  outC->_L1491 = kcg_true;
  outC->_L1487 = kcg_true;
  outC->_L1488 = kcg_true;
  outC->_L1489 = kcg_true;
  for (idx80 = 0; idx80 < 5; idx80++) {
    outC->_L1490[idx80].Message.valid = kcg_true;
    outC->_L1490[idx80].Message.nid_message = kcg_lit_int32(0);
    outC->_L1490[idx80].Message.l_message = kcg_lit_int32(0);
    outC->_L1490[idx80].Message.t_train = kcg_lit_int32(0);
    outC->_L1490[idx80].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1490[idx80].Message.field1 = kcg_lit_int32(0);
    outC->_L1490[idx80].Message.field2 = kcg_lit_int32(0);
    outC->_L1490[idx80].Message.field3 = kcg_lit_int32(0);
    for (idx79 = 0; idx79 < 50; idx79++) {
      outC->_L1490[idx80].OptionalPackets[idx79] = kcg_lit_int32(0);
    }
  }
  outC->_L1486.valid = kcg_true;
  outC->_L1486.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1486.radioMetadata.t_train_reference = kcg_true;
  outC->_L1486.radioMetadata.nid_em = kcg_true;
  outC->_L1486.radioMetadata.q_scale = kcg_true;
  outC->_L1486.radioMetadata.d_sr = kcg_true;
  outC->_L1486.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1486.radioMetadata.d_ref = kcg_true;
  outC->_L1486.radioMetadata.q_dir = kcg_true;
  outC->_L1486.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1486.radioMetadata.m_version = kcg_true;
  outC->_L1486.BG_Common_Header.valid = kcg_true;
  outC->_L1486.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1486.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1486.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1486.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1486.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1486.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1486.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1486.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1486.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1486.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1486.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1486.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1486.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1486.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1486.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1486.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1486.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx81 = 0; idx81 < 30; idx81++) {
    outC->_L1486.packets.PacketHeaders[idx81].nid_packet = kcg_lit_int32(0);
    outC->_L1486.packets.PacketHeaders[idx81].q_dir = Q_DIR_Reverse;
    outC->_L1486.packets.PacketHeaders[idx81].valid = kcg_true;
    outC->_L1486.packets.PacketHeaders[idx81].startAddress = kcg_lit_int32(0);
    outC->_L1486.packets.PacketHeaders[idx81].endAddress = kcg_lit_int32(0);
  }
  for (idx82 = 0; idx82 < 500; idx82++) {
    outC->_L1486.packets.PacketData[idx82] = kcg_lit_int32(0);
  }
  outC->_L1486.sendingRBC.valid = kcg_true;
  outC->_L1486.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1486.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1486.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1485.valid = kcg_true;
  outC->_L1485.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1485.radioMetadata.t_train_reference = kcg_true;
  outC->_L1485.radioMetadata.nid_em = kcg_true;
  outC->_L1485.radioMetadata.q_scale = kcg_true;
  outC->_L1485.radioMetadata.d_sr = kcg_true;
  outC->_L1485.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1485.radioMetadata.d_ref = kcg_true;
  outC->_L1485.radioMetadata.q_dir = kcg_true;
  outC->_L1485.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1485.radioMetadata.m_version = kcg_true;
  outC->_L1485.BG_Common_Header.valid = kcg_true;
  outC->_L1485.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1485.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1485.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1485.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1485.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1485.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1485.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1485.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1485.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1485.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1485.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1485.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1485.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1485.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1485.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1485.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1485.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx83 = 0; idx83 < 30; idx83++) {
    outC->_L1485.packets.PacketHeaders[idx83].nid_packet = kcg_lit_int32(0);
    outC->_L1485.packets.PacketHeaders[idx83].q_dir = Q_DIR_Reverse;
    outC->_L1485.packets.PacketHeaders[idx83].valid = kcg_true;
    outC->_L1485.packets.PacketHeaders[idx83].startAddress = kcg_lit_int32(0);
    outC->_L1485.packets.PacketHeaders[idx83].endAddress = kcg_lit_int32(0);
  }
  for (idx84 = 0; idx84 < 500; idx84++) {
    outC->_L1485.packets.PacketData[idx84] = kcg_lit_int32(0);
  }
  outC->_L1485.sendingRBC.valid = kcg_true;
  outC->_L1485.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1485.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1485.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1482 = kcg_true;
  outC->_L1481 = kcg_true;
  outC->_L1479.valid = kcg_true;
  outC->_L1479.whichMode = M_MODE_Full_Supervision;
  outC->_L1479.SH_Req_RefusedByRBC = kcg_true;
  outC->_L1479.LevelNeedsAck = kcg_true;
  outC->_L1471.valid = kcg_true;
  outC->_L1471.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1471.radioMetadata.t_train_reference = kcg_true;
  outC->_L1471.radioMetadata.nid_em = kcg_true;
  outC->_L1471.radioMetadata.q_scale = kcg_true;
  outC->_L1471.radioMetadata.d_sr = kcg_true;
  outC->_L1471.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1471.radioMetadata.d_ref = kcg_true;
  outC->_L1471.radioMetadata.q_dir = kcg_true;
  outC->_L1471.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1471.radioMetadata.m_version = kcg_true;
  outC->_L1471.BG_Common_Header.valid = kcg_true;
  outC->_L1471.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1471.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1471.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1471.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1471.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1471.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1471.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1471.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1471.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1471.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1471.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1471.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1471.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1471.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1471.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1471.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1471.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx85 = 0; idx85 < 30; idx85++) {
    outC->_L1471.packets.PacketHeaders[idx85].nid_packet = kcg_lit_int32(0);
    outC->_L1471.packets.PacketHeaders[idx85].q_dir = Q_DIR_Reverse;
    outC->_L1471.packets.PacketHeaders[idx85].valid = kcg_true;
    outC->_L1471.packets.PacketHeaders[idx85].startAddress = kcg_lit_int32(0);
    outC->_L1471.packets.PacketHeaders[idx85].endAddress = kcg_lit_int32(0);
  }
  for (idx86 = 0; idx86 < 500; idx86++) {
    outC->_L1471.packets.PacketData[idx86] = kcg_lit_int32(0);
  }
  outC->_L1471.sendingRBC.valid = kcg_true;
  outC->_L1471.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1471.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1471.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1467.Mess_15 = kcg_true;
  outC->_L1467.Mess_16 = kcg_true;
  outC->_L1467.Mess_2 = kcg_true;
  outC->_L1467.Mess_27 = kcg_true;
  outC->_L1467.Mess_28 = kcg_true;
  outC->_L1467.Mess_6 = kcg_true;
  for (idx87 = 0; idx87 < 5; idx87++) {
    outC->_L1466.train_packets.P_12[idx87].valid = kcg_true;
    outC->_L1466.train_packets.P_12[idx87].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_12[idx87].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_12[idx87].v_main = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].v_loa = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].t_loa = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].l_section = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_12[idx87].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].l_endsection = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_12[idx87].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1466.train_packets.P_12[idx87].t_endtimer = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1466.train_packets.P_12[idx87].d_dp = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].v_releasedp = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1466.train_packets.P_12[idx87].d_startol = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].t_ol = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].d_ol = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_12[idx87].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L1466.train_packets.P_135.valid = kcg_true;
  outC->_L1466.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_137.valid = kcg_true;
  outC->_L1466.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1466.train_packets.P_138.valid = kcg_true;
  outC->_L1466.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1466.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L1466.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L1466.train_packets.P_139.valid = kcg_true;
  outC->_L1466.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1466.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L1466.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx88 = 0; idx88 < 5; idx88++) {
    outC->_L1466.train_packets.P_15[idx88].valid = kcg_true;
    outC->_L1466.train_packets.P_15[idx88].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_15[idx88].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_15[idx88].v_loa = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].t_loa = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].l_section = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_15[idx88].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].l_endsection = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_15[idx88].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1466.train_packets.P_15[idx88].t_endtimer = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1466.train_packets.P_15[idx88].d_dp = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].v_releasedp = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1466.train_packets.P_15[idx88].d_startol = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].t_ol = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].d_ol = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_15[idx88].v_releaseol = kcg_lit_int32(0);
  }
  for (idx89 = 0; idx89 < 7; idx89++) {
    outC->_L1466.train_packets.P_21[idx89].valid = kcg_true;
    outC->_L1466.train_packets.P_21[idx89].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_21[idx89].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_21[idx89].d_gradient = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_21[idx89].q_gdir = Q_GDIR_downhill;
    outC->_L1466.train_packets.P_21[idx89].g_a = kcg_lit_int32(0);
  }
  outC->_L1466.train_packets.P_27.valid = kcg_true;
  outC->_L1466.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1466.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->_L1466.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->_L1466.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx90 = 0; idx90 < 7; idx90++) {
    outC->_L1466.train_packets.P_27.diffArray[idx90].valid = kcg_true;
    outC->_L1466.train_packets.P_27.diffArray[idx90].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1466.train_packets.P_27.diffArray[idx90].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1466.train_packets.P_27.diffArray[idx90].nc_diff = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_27.diffArray[idx90].v_diff = kcg_lit_int32(0);
  }
  for (idx92 = 0; idx92 < 7; idx92++) {
    outC->_L1466.train_packets.P_27.SSPArray[idx92].valid = kcg_true;
    outC->_L1466.train_packets.P_27.SSPArray[idx92].d_static = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_27.SSPArray[idx92].v_static = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_27.SSPArray[idx92].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx91 = 0; idx91 < 7; idx91++) {
      outC->_L1466.train_packets.P_27.SSPArray[idx92].diffArray[idx91].valid =
        kcg_true;
      outC->_L1466.train_packets.P_27.SSPArray[idx92].diffArray[idx91].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1466.train_packets.P_27.SSPArray[idx92].diffArray[idx91].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1466.train_packets.P_27.SSPArray[idx92].diffArray[idx91].nc_diff =
        kcg_lit_int32(0);
      outC->_L1466.train_packets.P_27.SSPArray[idx92].diffArray[idx91].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx93 = 0; idx93 < 7; idx93++) {
    outC->_L1466.train_packets.P_41[idx93].valid = kcg_true;
    outC->_L1466.train_packets.P_41[idx93].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_41[idx93].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_41[idx93].d_leveltr = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_41[idx93].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1466.train_packets.P_41[idx93].nid_ntc = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_41[idx93].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx94 = 0; idx94 < 7; idx94++) {
    outC->_L1466.train_packets.P_46[idx94].valid = kcg_true;
    outC->_L1466.train_packets.P_46[idx94].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_46[idx94].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1466.train_packets.P_46[idx94].nid_ntc = kcg_lit_int32(0);
  }
  for (idx95 = 0; idx95 < 7; idx95++) {
    outC->_L1466.train_packets.P_63[idx95].valid = kcg_true;
    outC->_L1466.train_packets.P_63[idx95].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_63[idx95].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1466.train_packets.P_63[idx95].nid_c = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_63[idx95].nid_bg = kcg_lit_int32(0);
  }
  for (idx96 = 0; idx96 < 3; idx96++) {
    outC->_L1466.train_packets.P_80[idx96].valid = kcg_true;
    outC->_L1466.train_packets.P_80[idx96].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_80[idx96].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_80[idx96].d_mamode = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_80[idx96].m_mamode = M_MAMODE_On_Sight;
    outC->_L1466.train_packets.P_80[idx96].v_mamode = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_80[idx96].l_mamode = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_80[idx96].l_ackmamode = kcg_lit_int32(0);
    outC->_L1466.train_packets.P_80[idx96].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1466.train_packets.LRBG = kcg_lit_int32(0);
  outC->_L1466.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->_L1466.train_messages.Mess_15 = kcg_true;
  outC->_L1466.train_messages.Mess_16 = kcg_true;
  outC->_L1466.train_messages.Mess_2 = kcg_true;
  outC->_L1466.train_messages.Mess_27 = kcg_true;
  outC->_L1466.train_messages.Mess_28 = kcg_true;
  outC->_L1466.train_messages.Mess_6 = kcg_true;
  outC->_L1466.p12 = kcg_true;
  outC->_L1466.p15 = kcg_true;
  outC->_L1466.p21 = kcg_true;
  outC->_L1466.p27 = kcg_true;
  for (idx97 = 0; idx97 < 5; idx97++) {
    outC->_L1462.train_packets.P_12[idx97].valid = kcg_true;
    outC->_L1462.train_packets.P_12[idx97].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_12[idx97].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_12[idx97].v_main = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].v_loa = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].t_loa = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].l_section = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_12[idx97].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].l_endsection = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_12[idx97].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1462.train_packets.P_12[idx97].t_endtimer = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1462.train_packets.P_12[idx97].d_dp = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].v_releasedp = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1462.train_packets.P_12[idx97].d_startol = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].t_ol = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].d_ol = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_12[idx97].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L1462.train_packets.P_135.valid = kcg_true;
  outC->_L1462.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_137.valid = kcg_true;
  outC->_L1462.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1462.train_packets.P_138.valid = kcg_true;
  outC->_L1462.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1462.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L1462.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L1462.train_packets.P_139.valid = kcg_true;
  outC->_L1462.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1462.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L1462.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx98 = 0; idx98 < 5; idx98++) {
    outC->_L1462.train_packets.P_15[idx98].valid = kcg_true;
    outC->_L1462.train_packets.P_15[idx98].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_15[idx98].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_15[idx98].v_loa = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].t_loa = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].l_section = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_15[idx98].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].l_endsection = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_15[idx98].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1462.train_packets.P_15[idx98].t_endtimer = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1462.train_packets.P_15[idx98].d_dp = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].v_releasedp = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1462.train_packets.P_15[idx98].d_startol = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].t_ol = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].d_ol = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_15[idx98].v_releaseol = kcg_lit_int32(0);
  }
  for (idx99 = 0; idx99 < 7; idx99++) {
    outC->_L1462.train_packets.P_21[idx99].valid = kcg_true;
    outC->_L1462.train_packets.P_21[idx99].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_21[idx99].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_21[idx99].d_gradient = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_21[idx99].q_gdir = Q_GDIR_downhill;
    outC->_L1462.train_packets.P_21[idx99].g_a = kcg_lit_int32(0);
  }
  outC->_L1462.train_packets.P_27.valid = kcg_true;
  outC->_L1462.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1462.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->_L1462.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->_L1462.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx100 = 0; idx100 < 7; idx100++) {
    outC->_L1462.train_packets.P_27.diffArray[idx100].valid = kcg_true;
    outC->_L1462.train_packets.P_27.diffArray[idx100].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1462.train_packets.P_27.diffArray[idx100].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1462.train_packets.P_27.diffArray[idx100].nc_diff = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_27.diffArray[idx100].v_diff = kcg_lit_int32(0);
  }
  for (idx102 = 0; idx102 < 7; idx102++) {
    outC->_L1462.train_packets.P_27.SSPArray[idx102].valid = kcg_true;
    outC->_L1462.train_packets.P_27.SSPArray[idx102].d_static = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_27.SSPArray[idx102].v_static = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_27.SSPArray[idx102].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx101 = 0; idx101 < 7; idx101++) {
      outC->_L1462.train_packets.P_27.SSPArray[idx102].diffArray[idx101].valid =
        kcg_true;
      outC->_L1462.train_packets.P_27.SSPArray[idx102].diffArray[idx101].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1462.train_packets.P_27.SSPArray[idx102].diffArray[idx101].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1462.train_packets.P_27.SSPArray[idx102].diffArray[idx101].nc_diff =
        kcg_lit_int32(0);
      outC->_L1462.train_packets.P_27.SSPArray[idx102].diffArray[idx101].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx103 = 0; idx103 < 7; idx103++) {
    outC->_L1462.train_packets.P_41[idx103].valid = kcg_true;
    outC->_L1462.train_packets.P_41[idx103].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_41[idx103].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_41[idx103].d_leveltr = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_41[idx103].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1462.train_packets.P_41[idx103].nid_ntc = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_41[idx103].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx104 = 0; idx104 < 7; idx104++) {
    outC->_L1462.train_packets.P_46[idx104].valid = kcg_true;
    outC->_L1462.train_packets.P_46[idx104].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_46[idx104].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1462.train_packets.P_46[idx104].nid_ntc = kcg_lit_int32(0);
  }
  for (idx105 = 0; idx105 < 7; idx105++) {
    outC->_L1462.train_packets.P_63[idx105].valid = kcg_true;
    outC->_L1462.train_packets.P_63[idx105].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_63[idx105].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1462.train_packets.P_63[idx105].nid_c = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_63[idx105].nid_bg = kcg_lit_int32(0);
  }
  for (idx106 = 0; idx106 < 3; idx106++) {
    outC->_L1462.train_packets.P_80[idx106].valid = kcg_true;
    outC->_L1462.train_packets.P_80[idx106].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_80[idx106].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_80[idx106].d_mamode = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_80[idx106].m_mamode = M_MAMODE_On_Sight;
    outC->_L1462.train_packets.P_80[idx106].v_mamode = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_80[idx106].l_mamode = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_80[idx106].l_ackmamode = kcg_lit_int32(0);
    outC->_L1462.train_packets.P_80[idx106].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1462.train_packets.LRBG = kcg_lit_int32(0);
  outC->_L1462.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->_L1462.train_messages.Mess_15 = kcg_true;
  outC->_L1462.train_messages.Mess_16 = kcg_true;
  outC->_L1462.train_messages.Mess_2 = kcg_true;
  outC->_L1462.train_messages.Mess_27 = kcg_true;
  outC->_L1462.train_messages.Mess_28 = kcg_true;
  outC->_L1462.train_messages.Mess_6 = kcg_true;
  outC->_L1462.p12 = kcg_true;
  outC->_L1462.p15 = kcg_true;
  outC->_L1462.p21 = kcg_true;
  outC->_L1462.p27 = kcg_true;
  outC->_L1461.P12_received = kcg_true;
  outC->_L1461.P15_received = kcg_true;
  outC->_L1461.P21_received = kcg_true;
  outC->_L1461.P27_received = kcg_true;
  outC->_L1457 = kcg_true;
  outC->_L1456 = kcg_true;
  outC->_L1449 = kcg_true;
  outC->_L1444 = kcg_true;
  outC->_L1443.valid = kcg_true;
  outC->_L1443.validatedByDriver = kcg_true;
  outC->_L1443.RBCsystemVersionOnboard = kcg_true;
  outC->_L1443.validatedbyRBC = kcg_true;
  outC->_L1443.waitingForRBCResponse = kcg_true;
  outC->_L1443.driverIsModificationTrainData = kcg_true;
  outC->_L1443.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L1441.linkedBGError = kcg_true;
  outC->_L1441.unlinkedBGError = kcg_true;
  outC->_L1441.BG_versionIncompatible = kcg_true;
  outC->_L1441.radioSequenceError = kcg_true;
  outC->_L1441.tNvContactError = kcg_true;
  outC->_L1441.otherTimingError = kcg_true;
  outC->_L1441.radioMessageConsistencyError = kcg_true;
  outC->_L1441.nid_c = kcg_lit_int32(0);
  outC->_L1441.nid_errorbg = kcg_lit_int32(0);
  outC->_L1363 = kcg_lit_int32(0);
  outC->_L1362.valid = kcg_true;
  outC->_L1362.targetSpeed = kcg_lit_int32(0);
  outC->_L1362.permittedSpeed = kcg_lit_int32(0);
  outC->_L1362.releaseSpeed = kcg_lit_int32(0);
  outC->_L1362.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L1362.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L1362.interventionSpeed = kcg_lit_int32(0);
  outC->_L1362.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1362.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L1362.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L1354.trackAheadFree = kcg_true;
  outC->_L1354.driverSelectsStart = kcg_true;
  outC->_L1349.trackAheadFree = kcg_true;
  outC->_L1349.driverSelectsStart = kcg_true;
  outC->_L1347.valid = kcg_true;
  outC->_L1347.nid_packet = kcg_lit_int32(0);
  outC->_L1347.q_dir = Q_DIR_Reverse;
  outC->_L1347.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1347.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1347.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1347.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1347.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1347.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1347.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1347.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1347.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1347.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1347.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1347.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L1347.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L1347.v_nvkvint = kcg_lit_int32(0);
  outC->_L1347.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L1347.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L1347.n_iter_n = kcg_lit_int32(0);
  for (idx107 = 0; idx107 < 32; idx107++) {
    outC->_L1347.n_iter_n_list[idx107].valid = kcg_true;
    outC->_L1347.n_iter_n_list[idx107].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L1347.n_iter_n_list[idx107].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L1347.n_iter_n_list[idx107].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L1347.n_iter_k = kcg_lit_int32(0);
  for (idx109 = 0; idx109 < 32; idx109++) {
    outC->_L1347.n_iter_k_list[idx109].valid = kcg_true;
    outC->_L1347.n_iter_k_list[idx109].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L1347.n_iter_k_list[idx109].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L1347.n_iter_k_list[idx109].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L1347.n_iter_k_list[idx109].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L1347.n_iter_k_list[idx109].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L1347.n_iter_k_list[idx109].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L1347.n_iter_k_list[idx109].n_iter_k_m = kcg_lit_int32(0);
    for (idx108 = 0; idx108 < 32; idx108++) {
      outC->_L1347.n_iter_k_list[idx109].n_iter_k_m_list[idx108].valid = kcg_true;
      outC->_L1347.n_iter_k_list[idx109].n_iter_k_m_list[idx108].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L1347.n_iter_k_list[idx109].n_iter_k_m_list[idx108].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L1347.n_iter_k_list[idx109].n_iter_k_m_list[idx108].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L1347.l_nvkrint = L_NVKRINT_0m;
  outC->_L1347.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L1347.n_iter_l = kcg_lit_int32(0);
  for (idx110 = 0; idx110 < 32; idx110++) {
    outC->_L1347.n_iter_l_list[idx110].valid = kcg_true;
    outC->_L1347.n_iter_l_list[idx110].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1347.n_iter_l_list[idx110].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L1347.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1346.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1346.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1345.valid = kcg_true;
  outC->_L1345.q_dir = Q_DIR_Reverse;
  outC->_L1345.d_validnv = kcg_lit_int32(0);
  for (idx111 = 0; idx111 < 7; idx111++) {
    outC->_L1345.nid_cArray[idx111].valid = kcg_true;
    outC->_L1345.nid_cArray[idx111].nid_c = kcg_lit_int32(0);
  }
  outC->_L1345.v_nvshunt = kcg_lit_int32(0);
  outC->_L1345.v_nvstff = kcg_lit_int32(0);
  outC->_L1345.v_nvonsight = kcg_lit_int32(0);
  outC->_L1345.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1345.v_nvunfit = kcg_lit_int32(0);
  outC->_L1345.v_nvrel = kcg_lit_int32(0);
  outC->_L1345.d_nvroll = kcg_lit_int32(0);
  outC->_L1345.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1345.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1345.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1345.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1345.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1345.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1345.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1345.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1345.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1345.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1345.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1345.t_nvcontact = kcg_lit_int32(0);
  outC->_L1345.m_nvderun = M_NVDERUN_No;
  outC->_L1345.d_nvstff = kcg_lit_int32(0);
  outC->_L1345.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1345.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1345.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1345.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1345.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1345.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1345.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1345.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx113 = 0; idx113 < 7; idx113++) {
    outC->_L1345.nvkvintsetArray[idx113].valid = kcg_true;
    outC->_L1345.nvkvintsetArray[idx113].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L1345.nvkvintsetArray[idx113].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L1345.nvkvintsetArray[idx113].a_nvp23 = kcg_lit_float32(0.0);
    for (idx112 = 0; idx112 < 7; idx112++) {
      outC->_L1345.nvkvintsetArray[idx113].nvkintArray[idx112].valid = kcg_true;
      outC->_L1345.nvkvintsetArray[idx113].nvkintArray[idx112].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L1345.nvkvintsetArray[idx113].nvkintArray[idx112].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L1345.nvkvintsetArray[idx113].nvkintArray[idx112].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx114 = 0; idx114 < 7; idx114++) {
    outC->_L1345.nvkrintArray[idx114].valid = kcg_true;
    outC->_L1345.nvkrintArray[idx114].l_nvkrint = L_NVKRINT_0m;
    outC->_L1345.nvkrintArray[idx114].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L1345.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1343 = kcg_lit_int32(0);
  outC->_L1342.valid = kcg_true;
  outC->_L1342.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1342.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1342.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1342.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1342.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1342.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1342.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1342.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1342.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1342.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1342.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1342.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1342.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1342.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1342.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1342.packet1.level = M_LEVEL_Level_0;
  outC->_L1342.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L1341.valid = kcg_true;
  outC->_L1341.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1341.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1341.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1341.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1341.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1341.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1341.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1341.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1341.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1341.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1341.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1341.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1341.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1341.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1341.packet0.level = M_LEVEL_Level_0;
  outC->_L1341.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1340.nid_engine = kcg_lit_int32(0);
  outC->_L1340.nid_operational = kcg_lit_int32(0);
  outC->_L1340.l_train = kcg_lit_int32(0);
  outC->_L1340.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L1340.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L1340.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L1340.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L1340.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L1340.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L1340.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1340.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1340.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1340.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1340.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1340.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1339.valid = kcg_true;
  outC->_L1339.timestamp = kcg_lit_int32(0);
  outC->_L1339.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1339.odo.o_min = kcg_lit_int32(0);
  outC->_L1339.odo.o_max = kcg_lit_int32(0);
  outC->_L1339.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1339.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1339.speed.v_lower = kcg_lit_int32(0);
  outC->_L1339.speed.v_upper = kcg_lit_int32(0);
  outC->_L1339.acceleration = kcg_lit_int32(0);
  outC->_L1339.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1339.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1338 = kcg_lit_int32(0);
  outC->_L1337.present = kcg_true;
  outC->_L1337.header.present = kcg_true;
  outC->_L1337.header.nid_message = kcg_lit_int32(0);
  outC->_L1337.header.t_train = kcg_lit_int32(0);
  outC->_L1337.header.nid_engine = kcg_lit_int32(0);
  outC->_L1337.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1337.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1337.header.xNID_EM = kcg_lit_int32(0);
  outC->_L1337.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1337.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1337.packets.p0.valid = kcg_true;
  outC->_L1337.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1337.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1337.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1337.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1337.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1337.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1337.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1337.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1337.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1337.packets.p1.valid = kcg_true;
  outC->_L1337.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1337.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1337.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1337.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1337.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1337.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1337.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1337.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1337.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L1337.packets.p3.valid = kcg_true;
  outC->_L1337.packets.p3.number = kcg_lit_int32(0);
  for (idx116 = 0; idx116 < 1; idx116++) {
    outC->_L1337.packets.p3.aNID_RADIO[idx116].valid = kcg_true;
    for (idx115 = 0; idx115 < 15; idx115++) {
      outC->_L1337.packets.p3.aNID_RADIO[idx116].telephoneNumber[idx115] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1337.packets.p4.valid = kcg_true;
  outC->_L1337.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1337.packets.p5.valid = kcg_true;
  outC->_L1337.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L1337.packets.p9.valid = kcg_true;
  outC->_L1337.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L1337.packets.p11.valid = kcg_true;
  outC->_L1337.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1337.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1337.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L1337.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L1337.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1337.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1337.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1337.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L1337.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx117 = 0; idx117 < 4; idx117++) {
    outC->_L1337.packets.p11.tractionIdentity[idx117].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1337.packets.p11.tractionIdentity[idx117].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L1337.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx118 = 0; idx118 < 5; idx118++) {
    outC->_L1337.packets.p11.nid_ntc[idx118] = kcg_lit_int32(0);
  }
  for (idx119 = 0; idx119 < 110; idx119++) {
    outC->_L1335[idx119].valid = kcg_true;
    outC->_L1335[idx119].Loc_Abs = kcg_lit_int32(0);
    outC->_L1335[idx119].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1335[idx119].MRS = kcg_lit_int32(0);
  }
  for (idx120 = 0; idx120 < 110; idx120++) {
    outC->_L1334[idx120].valid = kcg_true;
    outC->_L1334[idx120].Loc_Abs = kcg_lit_int32(0);
    outC->_L1334[idx120].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1334[idx120].MRS = kcg_lit_int32(0);
  }
  outC->_L1333.valid = kcg_true;
  outC->_L1333.acknowledgedByDriver = kcg_true;
  outC->_L1333.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1333.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1333.trainLength = kcg_lit_int32(0);
  outC->_L1333.brakePerctage = kcg_lit_int32(0);
  outC->_L1333.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1333.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1333.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1333.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1333.axleNumber = kcg_lit_int32(0);
  outC->_L1333.numberNationalSystems = kcg_lit_int32(0);
  for (idx121 = 0; idx121 < 5; idx121++) {
    outC->_L1333.nationSystems[idx121] = kcg_lit_int32(0);
  }
  outC->_L1333.numberTractionSystems = kcg_lit_int32(0);
  for (idx122 = 0; idx122 < 4; idx122++) {
    outC->_L1333.tractionSystem[idx122].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1333.tractionSystem[idx122].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1330 = kcg_lit_int32(0);
  outC->_L1328 = kcg_lit_int32(0);
  outC->_L1324 = kcg_lit_int32(0);
  outC->_L1321.valid = kcg_true;
  outC->_L1321.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1321.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1321.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1321.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1321.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1321.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1321.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1321.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1321.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1321.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1321.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1321.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1321.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1321.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1321.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1321.packet1.level = M_LEVEL_Level_0;
  outC->_L1321.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L1320 = kcg_true;
  for (idx123 = 0; idx123 < 50; idx123++) {
    outC->_L1319.GradientProfile[idx123].valid = kcg_true;
    outC->_L1319.GradientProfile[idx123].begin_section = kcg_lit_int32(0);
    outC->_L1319.GradientProfile[idx123].end_section = kcg_lit_int32(0);
    outC->_L1319.GradientProfile[idx123].gradient = kcg_lit_int32(0);
  }
  outC->_L1319.Gradient_profile_updated = kcg_true;
  for (idx124 = 0; idx124 < 110; idx124++) {
    outC->_L1319.MRSP[idx124].valid = kcg_true;
    outC->_L1319.MRSP[idx124].Loc_Abs = kcg_lit_int32(0);
    outC->_L1319.MRSP[idx124].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1319.MRSP[idx124].MRS = kcg_lit_int32(0);
  }
  outC->_L1319.MRSP_updated = kcg_true;
  outC->_L1315.valid = kcg_true;
  outC->_L1315.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1315.radioMetadata.t_train_reference = kcg_true;
  outC->_L1315.radioMetadata.nid_em = kcg_true;
  outC->_L1315.radioMetadata.q_scale = kcg_true;
  outC->_L1315.radioMetadata.d_sr = kcg_true;
  outC->_L1315.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1315.radioMetadata.d_ref = kcg_true;
  outC->_L1315.radioMetadata.q_dir = kcg_true;
  outC->_L1315.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1315.radioMetadata.m_version = kcg_true;
  outC->_L1315.BG_Common_Header.valid = kcg_true;
  outC->_L1315.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1315.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1315.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1315.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1315.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1315.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1315.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1315.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1315.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1315.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1315.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1315.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1315.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1315.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1315.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1315.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1315.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx125 = 0; idx125 < 30; idx125++) {
    outC->_L1315.packets.PacketHeaders[idx125].nid_packet = kcg_lit_int32(0);
    outC->_L1315.packets.PacketHeaders[idx125].q_dir = Q_DIR_Reverse;
    outC->_L1315.packets.PacketHeaders[idx125].valid = kcg_true;
    outC->_L1315.packets.PacketHeaders[idx125].startAddress = kcg_lit_int32(0);
    outC->_L1315.packets.PacketHeaders[idx125].endAddress = kcg_lit_int32(0);
  }
  for (idx126 = 0; idx126 < 500; idx126++) {
    outC->_L1315.packets.PacketData[idx126] = kcg_lit_int32(0);
  }
  outC->_L1315.sendingRBC.valid = kcg_true;
  outC->_L1315.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1315.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1315.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1313.valid = kcg_true;
  outC->_L1313.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1313.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1313.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1313.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1313.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1313.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1313.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1313.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1313.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1313.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1313.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1313.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1313.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1313.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1313.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1313.packet1.level = M_LEVEL_Level_0;
  outC->_L1313.packet1.NID_NTC = kcg_lit_int32(0);
  for (idx128 = 0; idx128 < 5; idx128++) {
    outC->_L1314[idx128].Message.valid = kcg_true;
    outC->_L1314[idx128].Message.nid_message = kcg_lit_int32(0);
    outC->_L1314[idx128].Message.l_message = kcg_lit_int32(0);
    outC->_L1314[idx128].Message.t_train = kcg_lit_int32(0);
    outC->_L1314[idx128].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1314[idx128].Message.field1 = kcg_lit_int32(0);
    outC->_L1314[idx128].Message.field2 = kcg_lit_int32(0);
    outC->_L1314[idx128].Message.field3 = kcg_lit_int32(0);
    for (idx127 = 0; idx127 < 50; idx127++) {
      outC->_L1314[idx128].OptionalPackets[idx127] = kcg_lit_int32(0);
    }
  }
  outC->_L1302 = kcg_true;
  outC->_L1301 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1294 = kcg_true;
  outC->_L1295.valid = kcg_true;
  outC->_L1295.timestamp = kcg_lit_int32(0);
  outC->_L1295.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1295.odo.o_min = kcg_lit_int32(0);
  outC->_L1295.odo.o_max = kcg_lit_int32(0);
  outC->_L1295.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1295.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1295.speed.v_lower = kcg_lit_int32(0);
  outC->_L1295.speed.v_upper = kcg_lit_int32(0);
  outC->_L1295.acceleration = kcg_lit_int32(0);
  outC->_L1295.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1295.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1296 = kcg_true;
  outC->_L1297 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1299 = kcg_true;
  outC->_L1300.trainStandStill = kcg_true;
  outC->_L1300.driverRequestModify = kcg_true;
  outC->_L1300.communicationSessionEstablished = kcg_true;
  outC->_L1300.safeRadioConnectionLost = kcg_true;
  outC->_L1300.approachingRBCarea = kcg_true;
  outC->_L1300.MoRCreadyFlag = kcg_true;
  outC->_L163.valid = kcg_true;
  outC->_L163.isolation_status = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L1280 = kcg_lit_int32(0);
  outC->_L1279 = kcg_lit_int32(0);
  outC->_L1278.valid = kcg_true;
  outC->_L1278.nid_packet = kcg_lit_int32(0);
  outC->_L1278.q_dir = Q_DIR_Reverse;
  outC->_L1278.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1278.d_validnv = kcg_lit_int32(0);
  outC->_L1278.nid_c = kcg_lit_int32(0);
  outC->_L1278.n_iter_nid_c = kcg_lit_int32(0);
  for (idx129 = 0; idx129 < 32; idx129++) {
    outC->_L1278.nid_c_list[idx129].valid = kcg_true;
    outC->_L1278.nid_c_list[idx129].nid_c = kcg_lit_int32(0);
  }
  outC->_L1278.v_nvshunt = kcg_lit_int32(0);
  outC->_L1278.v_nvstff = kcg_lit_int32(0);
  outC->_L1278.v_nvonsight = kcg_lit_int32(0);
  outC->_L1278.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1278.v_nvunfit = kcg_lit_int32(0);
  outC->_L1278.v_nvrel = kcg_lit_int32(0);
  outC->_L1278.d_nvroll = kcg_lit_int32(0);
  outC->_L1278.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1278.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1278.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1278.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1278.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1278.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1278.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1278.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1278.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1278.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1278.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1278.t_nvcontact = kcg_lit_int32(0);
  outC->_L1278.m_nvderun = M_NVDERUN_No;
  outC->_L1278.d_nvstff = kcg_lit_int32(0);
  outC->_L1278.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1278.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1278.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1278.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1278.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1278.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1278.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1278.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1278.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1278.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L1278.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L1278.v_nvkvint = kcg_lit_int32(0);
  outC->_L1278.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L1278.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L1278.n_iter_n = kcg_lit_int32(0);
  for (idx130 = 0; idx130 < 32; idx130++) {
    outC->_L1278.n_iter_n_list[idx130].valid = kcg_true;
    outC->_L1278.n_iter_n_list[idx130].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L1278.n_iter_n_list[idx130].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L1278.n_iter_n_list[idx130].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L1278.n_iter_k = kcg_lit_int32(0);
  for (idx132 = 0; idx132 < 32; idx132++) {
    outC->_L1278.n_iter_k_list[idx132].valid = kcg_true;
    outC->_L1278.n_iter_k_list[idx132].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L1278.n_iter_k_list[idx132].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L1278.n_iter_k_list[idx132].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L1278.n_iter_k_list[idx132].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L1278.n_iter_k_list[idx132].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L1278.n_iter_k_list[idx132].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L1278.n_iter_k_list[idx132].n_iter_k_m = kcg_lit_int32(0);
    for (idx131 = 0; idx131 < 32; idx131++) {
      outC->_L1278.n_iter_k_list[idx132].n_iter_k_m_list[idx131].valid = kcg_true;
      outC->_L1278.n_iter_k_list[idx132].n_iter_k_m_list[idx131].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L1278.n_iter_k_list[idx132].n_iter_k_m_list[idx131].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L1278.n_iter_k_list[idx132].n_iter_k_m_list[idx131].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L1278.l_nvkrint = L_NVKRINT_0m;
  outC->_L1278.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L1278.n_iter_l = kcg_lit_int32(0);
  for (idx133 = 0; idx133 < 32; idx133++) {
    outC->_L1278.n_iter_l_list[idx133].valid = kcg_true;
    outC->_L1278.n_iter_l_list[idx133].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1278.n_iter_l_list[idx133].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L1278.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1277.valid = kcg_true;
  outC->_L1277.q_dir = Q_DIR_Reverse;
  outC->_L1277.d_validnv = kcg_lit_int32(0);
  for (idx134 = 0; idx134 < 7; idx134++) {
    outC->_L1277.nid_cArray[idx134].valid = kcg_true;
    outC->_L1277.nid_cArray[idx134].nid_c = kcg_lit_int32(0);
  }
  outC->_L1277.v_nvshunt = kcg_lit_int32(0);
  outC->_L1277.v_nvstff = kcg_lit_int32(0);
  outC->_L1277.v_nvonsight = kcg_lit_int32(0);
  outC->_L1277.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1277.v_nvunfit = kcg_lit_int32(0);
  outC->_L1277.v_nvrel = kcg_lit_int32(0);
  outC->_L1277.d_nvroll = kcg_lit_int32(0);
  outC->_L1277.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1277.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1277.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1277.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1277.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1277.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1277.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1277.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1277.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1277.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1277.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1277.t_nvcontact = kcg_lit_int32(0);
  outC->_L1277.m_nvderun = M_NVDERUN_No;
  outC->_L1277.d_nvstff = kcg_lit_int32(0);
  outC->_L1277.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1277.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1277.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1277.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1277.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1277.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1277.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1277.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx136 = 0; idx136 < 7; idx136++) {
    outC->_L1277.nvkvintsetArray[idx136].valid = kcg_true;
    outC->_L1277.nvkvintsetArray[idx136].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L1277.nvkvintsetArray[idx136].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L1277.nvkvintsetArray[idx136].a_nvp23 = kcg_lit_float32(0.0);
    for (idx135 = 0; idx135 < 7; idx135++) {
      outC->_L1277.nvkvintsetArray[idx136].nvkintArray[idx135].valid = kcg_true;
      outC->_L1277.nvkvintsetArray[idx136].nvkintArray[idx135].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L1277.nvkvintsetArray[idx136].nvkintArray[idx135].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L1277.nvkvintsetArray[idx136].nvkintArray[idx135].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx137 = 0; idx137 < 7; idx137++) {
    outC->_L1277.nvkrintArray[idx137].valid = kcg_true;
    outC->_L1277.nvkrintArray[idx137].l_nvkrint = L_NVKRINT_0m;
    outC->_L1277.nvkrintArray[idx137].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L1277.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1276.valid = kcg_true;
  outC->_L1276.Level = MA_L1_TrackAtlasTypes;
  outC->_L1276.q_dir = Q_DIR_Reverse;
  outC->_L1276.v_main = kcg_lit_int32(0);
  outC->_L1276.v_loa = kcg_lit_int32(0);
  outC->_L1276.t_loa_unlimited = kcg_true;
  outC->_L1276.t_loa = kcg_lit_int32(0);
  outC->_L1276.n_iter = kcg_lit_int32(0);
  for (idx138 = 0; idx138 < 10; idx138++) {
    outC->_L1276.sections[idx138].valid = kcg_true;
    outC->_L1276.sections[idx138].q_endsection = kcg_true;
    outC->_L1276.sections[idx138].l_section = kcg_lit_int32(0);
    outC->_L1276.sections[idx138].q_sectiontimer = kcg_true;
    outC->_L1276.sections[idx138].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1276.sections[idx138].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1276.q_dangerpoint = kcg_true;
  outC->_L1276.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1276.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1276.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1276.q_overlap = kcg_true;
  outC->_L1276.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1276.overlap.v_release = kcg_lit_int32(0);
  outC->_L1276.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1276.q_endtimer = kcg_true;
  outC->_L1276.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1276.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L1275.freshMA = kcg_true;
  outC->_L1275.MA.valid = kcg_true;
  outC->_L1275.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L1275.MA.q_dir = Q_DIR_Reverse;
  outC->_L1275.MA.v_main = kcg_lit_int32(0);
  outC->_L1275.MA.v_loa = kcg_lit_int32(0);
  outC->_L1275.MA.t_loa_unlimited = kcg_true;
  outC->_L1275.MA.t_loa = kcg_lit_int32(0);
  outC->_L1275.MA.n_iter = kcg_lit_int32(0);
  for (idx139 = 0; idx139 < 10; idx139++) {
    outC->_L1275.MA.sections[idx139].valid = kcg_true;
    outC->_L1275.MA.sections[idx139].q_endsection = kcg_true;
    outC->_L1275.MA.sections[idx139].l_section = kcg_lit_int32(0);
    outC->_L1275.MA.sections[idx139].q_sectiontimer = kcg_true;
    outC->_L1275.MA.sections[idx139].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1275.MA.sections[idx139].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1275.MA.q_dangerpoint = kcg_true;
  outC->_L1275.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1275.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1275.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1275.MA.q_overlap = kcg_true;
  outC->_L1275.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1275.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L1275.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1275.MA.q_endtimer = kcg_true;
  outC->_L1275.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1275.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L1275.freshGradientProfile = kcg_true;
  for (idx140 = 0; idx140 < 50; idx140++) {
    outC->_L1275.GradientProfile[idx140].valid = kcg_true;
    outC->_L1275.GradientProfile[idx140].Loc_Absolute = kcg_lit_int32(0);
    outC->_L1275.GradientProfile[idx140].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1275.GradientProfile[idx140].Gradient = kcg_lit_int32(0);
    outC->_L1275.GradientProfile[idx140].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L1275.freshMRSP = kcg_true;
  for (idx141 = 0; idx141 < 110; idx141++) {
    outC->_L1275.MRSP[idx141].valid = kcg_true;
    outC->_L1275.MRSP[idx141].Loc_Abs = kcg_lit_int32(0);
    outC->_L1275.MRSP[idx141].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1275.MRSP[idx141].MRS = kcg_lit_int32(0);
  }
  outC->_L1273.valid = kcg_true;
  outC->_L1273.q_dir = Q_DIR_Reverse;
  outC->_L1273.d_validnv = kcg_lit_int32(0);
  for (idx142 = 0; idx142 < 7; idx142++) {
    outC->_L1273.nid_cArray[idx142].valid = kcg_true;
    outC->_L1273.nid_cArray[idx142].nid_c = kcg_lit_int32(0);
  }
  outC->_L1273.v_nvshunt = kcg_lit_int32(0);
  outC->_L1273.v_nvstff = kcg_lit_int32(0);
  outC->_L1273.v_nvonsight = kcg_lit_int32(0);
  outC->_L1273.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1273.v_nvunfit = kcg_lit_int32(0);
  outC->_L1273.v_nvrel = kcg_lit_int32(0);
  outC->_L1273.d_nvroll = kcg_lit_int32(0);
  outC->_L1273.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1273.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1273.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1273.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1273.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1273.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1273.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1273.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1273.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1273.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1273.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1273.t_nvcontact = kcg_lit_int32(0);
  outC->_L1273.m_nvderun = M_NVDERUN_No;
  outC->_L1273.d_nvstff = kcg_lit_int32(0);
  outC->_L1273.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1273.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1273.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1273.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1273.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1273.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1273.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1273.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx144 = 0; idx144 < 7; idx144++) {
    outC->_L1273.nvkvintsetArray[idx144].valid = kcg_true;
    outC->_L1273.nvkvintsetArray[idx144].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L1273.nvkvintsetArray[idx144].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L1273.nvkvintsetArray[idx144].a_nvp23 = kcg_lit_float32(0.0);
    for (idx143 = 0; idx143 < 7; idx143++) {
      outC->_L1273.nvkvintsetArray[idx144].nvkintArray[idx143].valid = kcg_true;
      outC->_L1273.nvkvintsetArray[idx144].nvkintArray[idx143].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L1273.nvkvintsetArray[idx144].nvkintArray[idx143].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L1273.nvkvintsetArray[idx144].nvkintArray[idx143].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx145 = 0; idx145 < 7; idx145++) {
    outC->_L1273.nvkrintArray[idx145].valid = kcg_true;
    outC->_L1273.nvkrintArray[idx145].l_nvkrint = L_NVKRINT_0m;
    outC->_L1273.nvkrintArray[idx145].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L1273.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1272.valid = kcg_true;
  outC->_L1272.q_dir = Q_DIR_Reverse;
  outC->_L1272.d_validnv = kcg_lit_int32(0);
  for (idx146 = 0; idx146 < 7; idx146++) {
    outC->_L1272.nid_cArray[idx146].valid = kcg_true;
    outC->_L1272.nid_cArray[idx146].nid_c = kcg_lit_int32(0);
  }
  outC->_L1272.v_nvshunt = kcg_lit_int32(0);
  outC->_L1272.v_nvstff = kcg_lit_int32(0);
  outC->_L1272.v_nvonsight = kcg_lit_int32(0);
  outC->_L1272.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1272.v_nvunfit = kcg_lit_int32(0);
  outC->_L1272.v_nvrel = kcg_lit_int32(0);
  outC->_L1272.d_nvroll = kcg_lit_int32(0);
  outC->_L1272.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1272.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1272.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1272.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1272.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1272.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1272.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1272.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1272.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1272.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1272.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1272.t_nvcontact = kcg_lit_int32(0);
  outC->_L1272.m_nvderun = M_NVDERUN_No;
  outC->_L1272.d_nvstff = kcg_lit_int32(0);
  outC->_L1272.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1272.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1272.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1272.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1272.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1272.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1272.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1272.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx148 = 0; idx148 < 7; idx148++) {
    outC->_L1272.nvkvintsetArray[idx148].valid = kcg_true;
    outC->_L1272.nvkvintsetArray[idx148].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L1272.nvkvintsetArray[idx148].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L1272.nvkvintsetArray[idx148].a_nvp23 = kcg_lit_float32(0.0);
    for (idx147 = 0; idx147 < 7; idx147++) {
      outC->_L1272.nvkvintsetArray[idx148].nvkintArray[idx147].valid = kcg_true;
      outC->_L1272.nvkvintsetArray[idx148].nvkintArray[idx147].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L1272.nvkvintsetArray[idx148].nvkintArray[idx147].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L1272.nvkvintsetArray[idx148].nvkintArray[idx147].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx149 = 0; idx149 < 7; idx149++) {
    outC->_L1272.nvkrintArray[idx149].valid = kcg_true;
    outC->_L1272.nvkrintArray[idx149].l_nvkrint = L_NVKRINT_0m;
    outC->_L1272.nvkrintArray[idx149].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L1272.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1265 = kcg_lit_int32(0);
  outC->_L1266 = kcg_lit_int32(0);
  outC->_L1267 = kcg_lit_int32(0);
  outC->_L1262 = kcg_lit_int32(0);
  outC->_L1261 = kcg_true;
  outC->_L1260.valid = kcg_true;
  outC->_L1260.acknowledgedByDriver = kcg_true;
  outC->_L1260.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1260.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1260.trainLength = kcg_lit_int32(0);
  outC->_L1260.brakePerctage = kcg_lit_int32(0);
  outC->_L1260.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1260.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1260.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1260.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1260.axleNumber = kcg_lit_int32(0);
  outC->_L1260.numberNationalSystems = kcg_lit_int32(0);
  for (idx150 = 0; idx150 < 5; idx150++) {
    outC->_L1260.nationSystems[idx150] = kcg_lit_int32(0);
  }
  outC->_L1260.numberTractionSystems = kcg_lit_int32(0);
  for (idx151 = 0; idx151 < 4; idx151++) {
    outC->_L1260.tractionSystem[idx151].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1260.tractionSystem[idx151].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1259.compatibleModeAndLevel = kcg_true;
  outC->_L1259.level = M_LEVEL_Level_0;
  outC->_L1259.newLevel = kcg_true;
  outC->_L1259.Mode = M_MODE_Full_Supervision;
  outC->_L1259.newMode = kcg_true;
  outC->_L1258.valid = kcg_true;
  outC->_L1258.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1258.radioMetadata.t_train_reference = kcg_true;
  outC->_L1258.radioMetadata.nid_em = kcg_true;
  outC->_L1258.radioMetadata.q_scale = kcg_true;
  outC->_L1258.radioMetadata.d_sr = kcg_true;
  outC->_L1258.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1258.radioMetadata.d_ref = kcg_true;
  outC->_L1258.radioMetadata.q_dir = kcg_true;
  outC->_L1258.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1258.radioMetadata.m_version = kcg_true;
  outC->_L1258.BG_Common_Header.valid = kcg_true;
  outC->_L1258.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1258.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1258.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1258.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1258.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1258.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1258.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1258.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1258.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1258.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1258.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1258.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1258.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1258.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1258.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1258.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1258.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx152 = 0; idx152 < 30; idx152++) {
    outC->_L1258.packets.PacketHeaders[idx152].nid_packet = kcg_lit_int32(0);
    outC->_L1258.packets.PacketHeaders[idx152].q_dir = Q_DIR_Reverse;
    outC->_L1258.packets.PacketHeaders[idx152].valid = kcg_true;
    outC->_L1258.packets.PacketHeaders[idx152].startAddress = kcg_lit_int32(0);
    outC->_L1258.packets.PacketHeaders[idx152].endAddress = kcg_lit_int32(0);
  }
  for (idx153 = 0; idx153 < 500; idx153++) {
    outC->_L1258.packets.PacketData[idx153] = kcg_lit_int32(0);
  }
  outC->_L1258.sendingRBC.valid = kcg_true;
  outC->_L1258.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1258.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1258.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1250 = kcg_true;
  outC->_L1251.nid_engine = kcg_lit_int32(0);
  outC->_L1251.nid_operational = kcg_lit_int32(0);
  outC->_L1251.l_train = kcg_lit_int32(0);
  outC->_L1251.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L1251.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L1251.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L1251.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L1251.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L1251.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L1251.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1251.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1251.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1251.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1251.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1251.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1252.valid = kcg_true;
  outC->_L1252.BG_Header.valid = kcg_true;
  outC->_L1252.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1252.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1252.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1252.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1252.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1252.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1252.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1252.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1252.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1252.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1252.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1252.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1252.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1252.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1252.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1252.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1252.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1252.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1252.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx154 = 0; idx154 < 33; idx154++) {
    outC->_L1252.linkedBGs[idx154].valid = kcg_true;
    outC->_L1252.linkedBGs[idx154].nid_LRBG = kcg_lit_int32(0);
    outC->_L1252.linkedBGs[idx154].q_dir = Q_DIR_Reverse;
    outC->_L1252.linkedBGs[idx154].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1252.linkedBGs[idx154].d_link = kcg_lit_int32(0);
    outC->_L1252.linkedBGs[idx154].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1252.linkedBGs[idx154].nid_c = kcg_lit_int32(0);
    outC->_L1252.linkedBGs[idx154].nid_bg = kcg_lit_int32(0);
    outC->_L1252.linkedBGs[idx154].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1252.linkedBGs[idx154].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L1252.linkedBGs[idx154].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1253.valid = kcg_true;
  outC->_L1253.timestamp = kcg_lit_int32(0);
  outC->_L1253.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1253.odo.o_min = kcg_lit_int32(0);
  outC->_L1253.odo.o_max = kcg_lit_int32(0);
  outC->_L1253.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1253.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1253.speed.v_lower = kcg_lit_int32(0);
  outC->_L1253.speed.v_upper = kcg_lit_int32(0);
  outC->_L1253.acceleration = kcg_lit_int32(0);
  outC->_L1253.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1253.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1256.outOfMemSpace = kcg_true;
  outC->_L1256.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1256.positionCalculation_inconsistent = kcg_true;
  outC->_L1256.linkedBGMissed = kcg_true;
  outC->_L1256.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1256.BG_LinkingConsistencyError = kcg_true;
  outC->_L1256.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1256.doubleRepositioningError = kcg_true;
  outC->_L1256.bg.valid = kcg_true;
  outC->_L1256.bg.nid_c = kcg_lit_int32(0);
  outC->_L1256.bg.nid_bg = kcg_lit_int32(0);
  outC->_L1256.bg.q_link = Q_LINK_Unlinked;
  outC->_L1256.bg.location.nominal = kcg_lit_int32(0);
  outC->_L1256.bg.location.d_min = kcg_lit_int32(0);
  outC->_L1256.bg.location.d_max = kcg_lit_int32(0);
  outC->_L1256.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.valid = kcg_true;
  outC->_L1256.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1256.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1256.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1256.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.valid = kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1256.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1256.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1256.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1256.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1256.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1256.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1256.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx155 = 0; idx155 < 33; idx155++) {
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].valid = kcg_true;
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].nid_LRBG = kcg_lit_int32(0);
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].q_dir = Q_DIR_Reverse;
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].d_link = kcg_lit_int32(0);
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].nid_c = kcg_lit_int32(0);
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].nid_bg = kcg_lit_int32(0);
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1256.bg.infoFromPassing.linkedBGs[idx155].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1256.bg.missed = kcg_true;
  for (idx157 = 0; idx157 < 41; idx157++) {
    outC->_L1255[idx157].valid = kcg_true;
    outC->_L1255[idx157].nid_c = kcg_lit_int32(0);
    outC->_L1255[idx157].nid_bg = kcg_lit_int32(0);
    outC->_L1255[idx157].q_link = Q_LINK_Unlinked;
    outC->_L1255[idx157].location.nominal = kcg_lit_int32(0);
    outC->_L1255[idx157].location.d_min = kcg_lit_int32(0);
    outC->_L1255[idx157].location.d_max = kcg_lit_int32(0);
    outC->_L1255[idx157].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.valid = kcg_true;
    outC->_L1255[idx157].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1255[idx157].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1255[idx157].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1255[idx157].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1255[idx157].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1255[idx157].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1255[idx157].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.valid = kcg_true;
    outC->_L1255[idx157].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1255[idx157].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1255[idx157].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1255[idx157].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1255[idx157].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1255[idx157].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1255[idx157].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1255[idx157].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L1255[idx157].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1255[idx157].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1255[idx157].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx156 = 0; idx156 < 33; idx156++) {
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].valid = kcg_true;
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].q_dir = Q_DIR_Reverse;
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].d_link =
        kcg_lit_int32(0);
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].nid_c = kcg_lit_int32(0);
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].nid_bg =
        kcg_lit_int32(0);
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1255[idx157].infoFromPassing.linkedBGs[idx156].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L1255[idx157].missed = kcg_true;
  }
  outC->_L1254.valid = kcg_true;
  outC->_L1254.timestamp = kcg_lit_int32(0);
  outC->_L1254.trainPositionIsUnknown = kcg_true;
  outC->_L1254.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1254.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1254.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1254.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1254.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1254.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1254.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1254.LRBG.valid = kcg_true;
  outC->_L1254.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1254.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1254.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1254.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1254.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1254.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1254.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1254.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1254.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx158 = 0; idx158 < 33; idx158++) {
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].valid = kcg_true;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].nid_LRBG = kcg_lit_int32(0);
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].q_dir = Q_DIR_Reverse;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].d_link = kcg_lit_int32(0);
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].nid_c = kcg_lit_int32(0);
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].nid_bg = kcg_lit_int32(0);
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[idx158].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1254.LRBG.missed = kcg_true;
  outC->_L1254.prvLRBG.valid = kcg_true;
  outC->_L1254.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1254.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(
      0);
  outC->_L1254.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx159 = 0; idx159 < 33; idx159++) {
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].valid = kcg_true;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].q_dir = Q_DIR_Reverse;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].d_link =
      kcg_lit_int32(0);
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].nid_c = kcg_lit_int32(0);
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].nid_bg =
      kcg_lit_int32(0);
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[idx159].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1254.prvLRBG.missed = kcg_true;
  outC->_L1254.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1254.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1254.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1254.linkingIsUsedOnboard = kcg_true;
  outC->_L1254.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1254.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1254.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1245.valid = kcg_true;
  outC->_L1245.nid_packet = kcg_lit_int32(0);
  outC->_L1245.q_dir = Q_DIR_Reverse;
  outC->_L1245.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1245.d_validnv = kcg_lit_int32(0);
  outC->_L1245.nid_c = kcg_lit_int32(0);
  outC->_L1245.n_iter_nid_c = kcg_lit_int32(0);
  for (idx160 = 0; idx160 < 32; idx160++) {
    outC->_L1245.nid_c_list[idx160].valid = kcg_true;
    outC->_L1245.nid_c_list[idx160].nid_c = kcg_lit_int32(0);
  }
  outC->_L1245.v_nvshunt = kcg_lit_int32(0);
  outC->_L1245.v_nvstff = kcg_lit_int32(0);
  outC->_L1245.v_nvonsight = kcg_lit_int32(0);
  outC->_L1245.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1245.v_nvunfit = kcg_lit_int32(0);
  outC->_L1245.v_nvrel = kcg_lit_int32(0);
  outC->_L1245.d_nvroll = kcg_lit_int32(0);
  outC->_L1245.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1245.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1245.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1245.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1245.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1245.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1245.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1245.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1245.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1245.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1245.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1245.t_nvcontact = kcg_lit_int32(0);
  outC->_L1245.m_nvderun = M_NVDERUN_No;
  outC->_L1245.d_nvstff = kcg_lit_int32(0);
  outC->_L1245.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1245.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1245.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1245.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1245.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1245.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1245.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1245.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1245.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1245.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L1245.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L1245.v_nvkvint = kcg_lit_int32(0);
  outC->_L1245.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L1245.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L1245.n_iter_n = kcg_lit_int32(0);
  for (idx161 = 0; idx161 < 32; idx161++) {
    outC->_L1245.n_iter_n_list[idx161].valid = kcg_true;
    outC->_L1245.n_iter_n_list[idx161].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L1245.n_iter_n_list[idx161].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L1245.n_iter_n_list[idx161].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L1245.n_iter_k = kcg_lit_int32(0);
  for (idx163 = 0; idx163 < 32; idx163++) {
    outC->_L1245.n_iter_k_list[idx163].valid = kcg_true;
    outC->_L1245.n_iter_k_list[idx163].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L1245.n_iter_k_list[idx163].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L1245.n_iter_k_list[idx163].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L1245.n_iter_k_list[idx163].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L1245.n_iter_k_list[idx163].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L1245.n_iter_k_list[idx163].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L1245.n_iter_k_list[idx163].n_iter_k_m = kcg_lit_int32(0);
    for (idx162 = 0; idx162 < 32; idx162++) {
      outC->_L1245.n_iter_k_list[idx163].n_iter_k_m_list[idx162].valid = kcg_true;
      outC->_L1245.n_iter_k_list[idx163].n_iter_k_m_list[idx162].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L1245.n_iter_k_list[idx163].n_iter_k_m_list[idx162].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L1245.n_iter_k_list[idx163].n_iter_k_m_list[idx162].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L1245.l_nvkrint = L_NVKRINT_0m;
  outC->_L1245.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L1245.n_iter_l = kcg_lit_int32(0);
  for (idx164 = 0; idx164 < 32; idx164++) {
    outC->_L1245.n_iter_l_list[idx164].valid = kcg_true;
    outC->_L1245.n_iter_l_list[idx164].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1245.n_iter_l_list[idx164].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L1245.m_nvktint = kcg_lit_float32(0.0);
  for (idx165 = 0; idx165 < 5; idx165++) {
    outC->_L1246.train_packets.P_12[idx165].valid = kcg_true;
    outC->_L1246.train_packets.P_12[idx165].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_12[idx165].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_12[idx165].v_main = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].v_loa = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].t_loa = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].l_section = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_12[idx165].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].l_endsection = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_12[idx165].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1246.train_packets.P_12[idx165].t_endtimer = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1246.train_packets.P_12[idx165].d_dp = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].v_releasedp = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1246.train_packets.P_12[idx165].d_startol = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].t_ol = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].d_ol = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_12[idx165].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L1246.train_packets.P_135.valid = kcg_true;
  outC->_L1246.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_137.valid = kcg_true;
  outC->_L1246.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1246.train_packets.P_138.valid = kcg_true;
  outC->_L1246.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1246.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L1246.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L1246.train_packets.P_139.valid = kcg_true;
  outC->_L1246.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1246.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L1246.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx166 = 0; idx166 < 5; idx166++) {
    outC->_L1246.train_packets.P_15[idx166].valid = kcg_true;
    outC->_L1246.train_packets.P_15[idx166].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_15[idx166].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_15[idx166].v_loa = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].t_loa = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].l_section = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_15[idx166].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].l_endsection = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_15[idx166].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1246.train_packets.P_15[idx166].t_endtimer = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1246.train_packets.P_15[idx166].d_dp = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].v_releasedp = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1246.train_packets.P_15[idx166].d_startol = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].t_ol = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].d_ol = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_15[idx166].v_releaseol = kcg_lit_int32(0);
  }
  for (idx167 = 0; idx167 < 7; idx167++) {
    outC->_L1246.train_packets.P_21[idx167].valid = kcg_true;
    outC->_L1246.train_packets.P_21[idx167].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_21[idx167].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_21[idx167].d_gradient = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_21[idx167].q_gdir = Q_GDIR_downhill;
    outC->_L1246.train_packets.P_21[idx167].g_a = kcg_lit_int32(0);
  }
  outC->_L1246.train_packets.P_27.valid = kcg_true;
  outC->_L1246.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1246.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->_L1246.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->_L1246.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx168 = 0; idx168 < 7; idx168++) {
    outC->_L1246.train_packets.P_27.diffArray[idx168].valid = kcg_true;
    outC->_L1246.train_packets.P_27.diffArray[idx168].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1246.train_packets.P_27.diffArray[idx168].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1246.train_packets.P_27.diffArray[idx168].nc_diff = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_27.diffArray[idx168].v_diff = kcg_lit_int32(0);
  }
  for (idx170 = 0; idx170 < 7; idx170++) {
    outC->_L1246.train_packets.P_27.SSPArray[idx170].valid = kcg_true;
    outC->_L1246.train_packets.P_27.SSPArray[idx170].d_static = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_27.SSPArray[idx170].v_static = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_27.SSPArray[idx170].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx169 = 0; idx169 < 7; idx169++) {
      outC->_L1246.train_packets.P_27.SSPArray[idx170].diffArray[idx169].valid =
        kcg_true;
      outC->_L1246.train_packets.P_27.SSPArray[idx170].diffArray[idx169].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1246.train_packets.P_27.SSPArray[idx170].diffArray[idx169].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1246.train_packets.P_27.SSPArray[idx170].diffArray[idx169].nc_diff =
        kcg_lit_int32(0);
      outC->_L1246.train_packets.P_27.SSPArray[idx170].diffArray[idx169].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx171 = 0; idx171 < 7; idx171++) {
    outC->_L1246.train_packets.P_41[idx171].valid = kcg_true;
    outC->_L1246.train_packets.P_41[idx171].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_41[idx171].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_41[idx171].d_leveltr = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_41[idx171].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1246.train_packets.P_41[idx171].nid_ntc = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_41[idx171].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx172 = 0; idx172 < 7; idx172++) {
    outC->_L1246.train_packets.P_46[idx172].valid = kcg_true;
    outC->_L1246.train_packets.P_46[idx172].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_46[idx172].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1246.train_packets.P_46[idx172].nid_ntc = kcg_lit_int32(0);
  }
  for (idx173 = 0; idx173 < 7; idx173++) {
    outC->_L1246.train_packets.P_63[idx173].valid = kcg_true;
    outC->_L1246.train_packets.P_63[idx173].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_63[idx173].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1246.train_packets.P_63[idx173].nid_c = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_63[idx173].nid_bg = kcg_lit_int32(0);
  }
  for (idx174 = 0; idx174 < 3; idx174++) {
    outC->_L1246.train_packets.P_80[idx174].valid = kcg_true;
    outC->_L1246.train_packets.P_80[idx174].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_80[idx174].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_80[idx174].d_mamode = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_80[idx174].m_mamode = M_MAMODE_On_Sight;
    outC->_L1246.train_packets.P_80[idx174].v_mamode = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_80[idx174].l_mamode = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_80[idx174].l_ackmamode = kcg_lit_int32(0);
    outC->_L1246.train_packets.P_80[idx174].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1246.train_packets.LRBG = kcg_lit_int32(0);
  outC->_L1246.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->_L1246.train_messages.Mess_15 = kcg_true;
  outC->_L1246.train_messages.Mess_16 = kcg_true;
  outC->_L1246.train_messages.Mess_2 = kcg_true;
  outC->_L1246.train_messages.Mess_27 = kcg_true;
  outC->_L1246.train_messages.Mess_28 = kcg_true;
  outC->_L1246.train_messages.Mess_6 = kcg_true;
  outC->_L1246.p12 = kcg_true;
  outC->_L1246.p15 = kcg_true;
  outC->_L1246.p21 = kcg_true;
  outC->_L1246.p27 = kcg_true;
  for (idx175 = 0; idx175 < 50; idx175++) {
    outC->_L1247.GradientProfile[idx175].valid = kcg_true;
    outC->_L1247.GradientProfile[idx175].begin_section = kcg_lit_int32(0);
    outC->_L1247.GradientProfile[idx175].end_section = kcg_lit_int32(0);
    outC->_L1247.GradientProfile[idx175].gradient = kcg_lit_int32(0);
  }
  outC->_L1247.Gradient_profile_updated = kcg_true;
  for (idx176 = 0; idx176 < 110; idx176++) {
    outC->_L1247.MRSP[idx176].valid = kcg_true;
    outC->_L1247.MRSP[idx176].Loc_Abs = kcg_lit_int32(0);
    outC->_L1247.MRSP[idx176].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1247.MRSP[idx176].MRS = kcg_lit_int32(0);
  }
  outC->_L1247.MRSP_updated = kcg_true;
  outC->_L1248.freshMA = kcg_true;
  outC->_L1248.MA.valid = kcg_true;
  outC->_L1248.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L1248.MA.q_dir = Q_DIR_Reverse;
  outC->_L1248.MA.v_main = kcg_lit_int32(0);
  outC->_L1248.MA.v_loa = kcg_lit_int32(0);
  outC->_L1248.MA.t_loa_unlimited = kcg_true;
  outC->_L1248.MA.t_loa = kcg_lit_int32(0);
  outC->_L1248.MA.n_iter = kcg_lit_int32(0);
  for (idx177 = 0; idx177 < 10; idx177++) {
    outC->_L1248.MA.sections[idx177].valid = kcg_true;
    outC->_L1248.MA.sections[idx177].q_endsection = kcg_true;
    outC->_L1248.MA.sections[idx177].l_section = kcg_lit_int32(0);
    outC->_L1248.MA.sections[idx177].q_sectiontimer = kcg_true;
    outC->_L1248.MA.sections[idx177].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1248.MA.sections[idx177].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1248.MA.q_dangerpoint = kcg_true;
  outC->_L1248.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1248.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1248.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1248.MA.q_overlap = kcg_true;
  outC->_L1248.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1248.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L1248.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1248.MA.q_endtimer = kcg_true;
  outC->_L1248.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1248.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L1248.freshGradientProfile = kcg_true;
  for (idx178 = 0; idx178 < 50; idx178++) {
    outC->_L1248.GradientProfile[idx178].valid = kcg_true;
    outC->_L1248.GradientProfile[idx178].Loc_Absolute = kcg_lit_int32(0);
    outC->_L1248.GradientProfile[idx178].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1248.GradientProfile[idx178].Gradient = kcg_lit_int32(0);
    outC->_L1248.GradientProfile[idx178].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L1248.freshMRSP = kcg_true;
  for (idx179 = 0; idx179 < 110; idx179++) {
    outC->_L1248.MRSP[idx179].valid = kcg_true;
    outC->_L1248.MRSP[idx179].Loc_Abs = kcg_lit_int32(0);
    outC->_L1248.MRSP[idx179].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1248.MRSP[idx179].MRS = kcg_lit_int32(0);
  }
  outC->_L1249.valid = kcg_true;
  outC->_L1249.Level = MA_L1_TrackAtlasTypes;
  outC->_L1249.q_dir = Q_DIR_Reverse;
  outC->_L1249.v_main = kcg_lit_int32(0);
  outC->_L1249.v_loa = kcg_lit_int32(0);
  outC->_L1249.t_loa_unlimited = kcg_true;
  outC->_L1249.t_loa = kcg_lit_int32(0);
  outC->_L1249.n_iter = kcg_lit_int32(0);
  for (idx180 = 0; idx180 < 10; idx180++) {
    outC->_L1249.sections[idx180].valid = kcg_true;
    outC->_L1249.sections[idx180].q_endsection = kcg_true;
    outC->_L1249.sections[idx180].l_section = kcg_lit_int32(0);
    outC->_L1249.sections[idx180].q_sectiontimer = kcg_true;
    outC->_L1249.sections[idx180].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1249.sections[idx180].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1249.q_dangerpoint = kcg_true;
  outC->_L1249.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1249.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1249.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1249.q_overlap = kcg_true;
  outC->_L1249.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1249.overlap.v_release = kcg_lit_int32(0);
  outC->_L1249.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1249.q_endtimer = kcg_true;
  outC->_L1249.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1249.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L1244 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1243 = kcg_true;
  outC->_L1242 = kcg_true;
  outC->_L1241 = kcg_true;
  outC->_L1240.valid = kcg_true;
  outC->_L1240.deskOpen = kcg_true;
  outC->_L1240.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1240.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1234.valid = kcg_true;
  outC->_L1234.systemTime = kcg_lit_int32(0);
  outC->_L1234.acknowledged = kcg_true;
  outC->_L1232.valid = kcg_true;
  outC->_L1232.systemTime = kcg_lit_int32(0);
  outC->_L1232.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L1230.valid = kcg_true;
  outC->_L1230.validatedByDriver = kcg_true;
  outC->_L1230.RBCsystemVersionOnboard = kcg_true;
  outC->_L1230.validatedbyRBC = kcg_true;
  outC->_L1230.waitingForRBCResponse = kcg_true;
  outC->_L1230.driverIsModificationTrainData = kcg_true;
  outC->_L1230.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L1229.EoM_Procedure_req = kcg_true;
  outC->_L1229.Clean_BG_List_SH_Area = kcg_true;
  outC->_L1229.MA_Req = kcg_true;
  outC->_L1229.Req_for_SH_from_Driver = kcg_true;
  outC->_L1229.Connection_to_RBC_req = kcg_true;
  outC->_L1229.Position_Repport_Needed = kcg_true;
  outC->_L1228 = kcg_true;
  for (idx182 = 0; idx182 < 5; idx182++) {
    outC->_L1225[idx182].Message.valid = kcg_true;
    outC->_L1225[idx182].Message.nid_message = kcg_lit_int32(0);
    outC->_L1225[idx182].Message.l_message = kcg_lit_int32(0);
    outC->_L1225[idx182].Message.t_train = kcg_lit_int32(0);
    outC->_L1225[idx182].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1225[idx182].Message.field1 = kcg_lit_int32(0);
    outC->_L1225[idx182].Message.field2 = kcg_lit_int32(0);
    outC->_L1225[idx182].Message.field3 = kcg_lit_int32(0);
    for (idx181 = 0; idx181 < 50; idx181++) {
      outC->_L1225[idx182].OptionalPackets[idx181] = kcg_lit_int32(0);
    }
  }
  outC->_L1224 = kcg_true;
  outC->_L1223.valid = kcg_true;
  outC->_L1223.acknowledgedByDriver = kcg_true;
  outC->_L1223.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1223.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1223.trainLength = kcg_lit_int32(0);
  outC->_L1223.brakePerctage = kcg_lit_int32(0);
  outC->_L1223.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1223.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1223.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1223.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1223.axleNumber = kcg_lit_int32(0);
  outC->_L1223.numberNationalSystems = kcg_lit_int32(0);
  for (idx183 = 0; idx183 < 5; idx183++) {
    outC->_L1223.nationSystems[idx183] = kcg_lit_int32(0);
  }
  outC->_L1223.numberTractionSystems = kcg_lit_int32(0);
  for (idx184 = 0; idx184 < 4; idx184++) {
    outC->_L1223.tractionSystem[idx184].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1223.tractionSystem[idx184].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1219.valid = kcg_true;
  outC->_L1219.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1219.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1219.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1219.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1219.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1219.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1219.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1219.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1219.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1219.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1219.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1219.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1219.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1219.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1219.packet0.level = M_LEVEL_Level_0;
  outC->_L1219.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1218 = kcg_lit_int32(0);
  outC->_L1215.trainStandStill = kcg_true;
  outC->_L1215.driverRequestModify = kcg_true;
  outC->_L1215.communicationSessionEstablished = kcg_true;
  outC->_L1215.safeRadioConnectionLost = kcg_true;
  outC->_L1215.approachingRBCarea = kcg_true;
  outC->_L1215.MoRCreadyFlag = kcg_true;
  outC->_L1213.brakeTrigger = kcg_true;
  outC->_L1213.driverRequestModify = kcg_true;
  outC->_L1213.shortenLocationBasedInformation = kcg_true;
  outC->_L1213.deleteMA = kcg_true;
  outC->_L1213.trainLengthIncreased = kcg_true;
  outC->_L1210.valid = kcg_true;
  outC->_L1210.validatedByDriver = kcg_true;
  outC->_L1210.RBCsystemVersionOnboard = kcg_true;
  outC->_L1210.validatedbyRBC = kcg_true;
  outC->_L1210.waitingForRBCResponse = kcg_true;
  outC->_L1210.driverIsModificationTrainData = kcg_true;
  outC->_L1210.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L1209.valid = kcg_true;
  outC->_L1209.systemTime = kcg_lit_int32(0);
  outC->_L1209.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1209.l_train = kcg_lit_int32(0);
  outC->_L1209.m_brakeperct = kcg_lit_int32(0);
  outC->_L1209.v_maxTrain = kcg_lit_int32(0);
  outC->_L1209.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1209.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1209.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1208.valid = kcg_true;
  outC->_L1208.acknowledgedByDriver = kcg_true;
  outC->_L1208.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1208.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1208.trainLength = kcg_lit_int32(0);
  outC->_L1208.brakePerctage = kcg_lit_int32(0);
  outC->_L1208.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1208.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1208.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1208.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1208.axleNumber = kcg_lit_int32(0);
  outC->_L1208.numberNationalSystems = kcg_lit_int32(0);
  for (idx185 = 0; idx185 < 5; idx185++) {
    outC->_L1208.nationSystems[idx185] = kcg_lit_int32(0);
  }
  outC->_L1208.numberTractionSystems = kcg_lit_int32(0);
  for (idx186 = 0; idx186 < 4; idx186++) {
    outC->_L1208.tractionSystem[idx186].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1208.tractionSystem[idx186].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1207.valid = kcg_true;
  outC->_L1207.info.train_status.valid = kcg_true;
  outC->_L1207.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.valid = kcg_true;
  outC->_L1207.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_pressure.valid = kcg_true;
  outC->_L1207.info.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L1207.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L1207.info.train_data_info.valid = kcg_true;
  outC->_L1207.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L1207.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1207.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1207.info.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L1207.info.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L1207.info.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1207.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1207.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1207.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1207.info.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L1207.info.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx187 = 0; idx187 < 5; idx187++) {
    outC->_L1207.info.train_data_info.nationSystems[idx187] = kcg_lit_int32(0);
  }
  outC->_L1207.info.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx188 = 0; idx188 < 4; idx188++) {
    outC->_L1207.info.train_data_info.tractionSystem[idx188].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1207.info.train_data_info.tractionSystem[idx188].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L1207.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L1207.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L1207.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L1206 = kcg_true;
  outC->_L1204.valid = kcg_true;
  outC->_L1204.acknowledgedByDriver = kcg_true;
  outC->_L1204.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1204.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1204.trainLength = kcg_lit_int32(0);
  outC->_L1204.brakePerctage = kcg_lit_int32(0);
  outC->_L1204.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1204.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1204.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1204.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1204.axleNumber = kcg_lit_int32(0);
  outC->_L1204.numberNationalSystems = kcg_lit_int32(0);
  for (idx189 = 0; idx189 < 5; idx189++) {
    outC->_L1204.nationSystems[idx189] = kcg_lit_int32(0);
  }
  outC->_L1204.numberTractionSystems = kcg_lit_int32(0);
  for (idx190 = 0; idx190 < 4; idx190++) {
    outC->_L1204.tractionSystem[idx190].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1204.tractionSystem[idx190].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1205.brakeTrigger = kcg_true;
  outC->_L1205.driverRequestModify = kcg_true;
  outC->_L1205.shortenLocationBasedInformation = kcg_true;
  outC->_L1205.deleteMA = kcg_true;
  outC->_L1205.trainLengthIncreased = kcg_true;
  outC->_L1203 = kcg_lit_int32(0);
  outC->_L1202.valid = kcg_true;
  outC->_L1202.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L1202.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L1202.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L1202.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L1200.compatibleModeAndLevel = kcg_true;
  outC->_L1200.level = M_LEVEL_Level_0;
  outC->_L1200.newLevel = kcg_true;
  outC->_L1200.Mode = M_MODE_Full_Supervision;
  outC->_L1200.newMode = kcg_true;
  outC->_L166.valid = kcg_true;
  outC->_L166.m_regenerativebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L166.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L166.m_magneticshoebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L1199 = kcg_true;
  outC->_L1197 = kcg_true;
  outC->_L1195.pendingL1Transition = kcg_true;
  outC->_L1195.pendingL12L3Transition = kcg_true;
  outC->_L1195.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L1195.emergencyStopAccepted = kcg_true;
  outC->_L1195.lastAckTextMessageId = kcg_lit_int32(0);
  outC->_L1195.pendingNTCTransition = kcg_true;
  outC->_L1195.SPPAndGradientOnBoard = kcg_true;
  outC->_L1195.MACoverNotFullLength = kcg_true;
  outC->_L1193 = kcg_true;
  outC->_L1191.DMI_Active = kcg_true;
  outC->_L1191.DMI_Error = kcg_true;
  outC->_L1191.DMI_DriverIdValidated = kcg_true;
  outC->_L1191.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L1191.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L1191.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L1191.DMI_TrainDataValidated = kcg_true;
  outC->_L1191.DMI_StartReceived = kcg_true;
  outC->_L1191.DMI_Identifier.valid = kcg_true;
  outC->_L1191.DMI_Identifier.systemTime = kcg_lit_int32(0);
  outC->_L1191.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L1191.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L1191.DMI_Identifier.l_name = kcg_lit_int32(0);
  for (idx191 = 0; idx191 < 255; idx191++) {
    outC->_L1191.DMI_Identifier.DMI_name[idx191] = ' ';
  }
  outC->_L1191.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1189.valid = kcg_true;
  outC->_L1189.systemTime = kcg_lit_int32(0);
  outC->_L1189.m_request = Start_of_mission_DMI_Types_Pkg;
  for (idx192 = 0; idx192 < 31; idx192++) {
    outC->_L1187[idx192].valid = kcg_true;
    outC->_L1187[idx192].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L1187[idx192].timeStamp = kcg_lit_int32(0);
    outC->_L1187[idx192].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1187[idx192].context = con_undefined_DMI_Types_Pkg;
    outC->_L1187[idx192].nid_textmessage = kcg_lit_int32(0);
    outC->_L1187[idx192].whichLevel = M_LEVEL_Level_0;
    outC->_L1187[idx192].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L1185 = kcg_true;
  for (idx193 = 0; idx193 < 31; idx193++) {
    outC->_L1183[idx193].valid = kcg_true;
    outC->_L1183[idx193].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L1183[idx193].timeStamp = kcg_lit_int32(0);
    outC->_L1183[idx193].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1183[idx193].context = con_undefined_DMI_Types_Pkg;
    outC->_L1183[idx193].nid_textmessage = kcg_lit_int32(0);
    outC->_L1183[idx193].whichLevel = M_LEVEL_Level_0;
    outC->_L1183[idx193].whichMode = M_MODE_Full_Supervision;
  }
  for (idx194 = 0; idx194 < 31; idx194++) {
    outC->_L1182[idx194].valid = kcg_true;
    outC->_L1182[idx194].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L1182[idx194].timeStamp = kcg_lit_int32(0);
    outC->_L1182[idx194].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1182[idx194].context = con_undefined_DMI_Types_Pkg;
    outC->_L1182[idx194].nid_textmessage = kcg_lit_int32(0);
    outC->_L1182[idx194].whichLevel = M_LEVEL_Level_0;
    outC->_L1182[idx194].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L1181 = kcg_lit_int32(0);
  for (idx195 = 0; idx195 < 31; idx195++) {
    outC->_L1179[idx195].valid = kcg_true;
    outC->_L1179[idx195].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L1179[idx195].timeStamp = kcg_lit_int32(0);
    outC->_L1179[idx195].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1179[idx195].context = con_undefined_DMI_Types_Pkg;
    outC->_L1179[idx195].nid_textmessage = kcg_lit_int32(0);
    outC->_L1179[idx195].whichLevel = M_LEVEL_Level_0;
    outC->_L1179[idx195].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L1177 = Q_DIRTRAIN_Reverse;
  outC->_L1176.valid = kcg_true;
  outC->_L1176.timestamp = kcg_lit_int32(0);
  outC->_L1176.trainPositionIsUnknown = kcg_true;
  outC->_L1176.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1176.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1176.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1176.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1176.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1176.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1176.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1176.LRBG.valid = kcg_true;
  outC->_L1176.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1176.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1176.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1176.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1176.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1176.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1176.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1176.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1176.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx196 = 0; idx196 < 33; idx196++) {
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].valid = kcg_true;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].nid_LRBG = kcg_lit_int32(0);
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].q_dir = Q_DIR_Reverse;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].d_link = kcg_lit_int32(0);
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].nid_c = kcg_lit_int32(0);
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].nid_bg = kcg_lit_int32(0);
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[idx196].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1176.LRBG.missed = kcg_true;
  outC->_L1176.prvLRBG.valid = kcg_true;
  outC->_L1176.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1176.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(
      0);
  outC->_L1176.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx197 = 0; idx197 < 33; idx197++) {
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].valid = kcg_true;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].q_dir = Q_DIR_Reverse;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].d_link =
      kcg_lit_int32(0);
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].nid_c = kcg_lit_int32(0);
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].nid_bg =
      kcg_lit_int32(0);
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[idx197].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1176.prvLRBG.missed = kcg_true;
  outC->_L1176.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1176.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1176.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1176.linkingIsUsedOnboard = kcg_true;
  outC->_L1176.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1176.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1176.maxSafeRearEndPosition = kcg_lit_int32(0);
  for (idx198 = 0; idx198 < 8; idx198++) {
    outC->_L1168[idx198].valid = kcg_true;
    outC->_L1168[idx198].nidBG = kcg_lit_int32(0);
    outC->_L1168[idx198].location.nominal = kcg_lit_int32(0);
    outC->_L1168[idx198].location.d_min = kcg_lit_int32(0);
    outC->_L1168[idx198].location.d_max = kcg_lit_int32(0);
  }
  outC->_L1166.currMode = M_MODE_Full_Supervision;
  outC->_L1166.currLevel = M_LEVEL_Level_0;
  outC->_L1166.levelTransitionBorderPassed = kcg_true;
  outC->_L1159.valid = kcg_true;
  outC->_L1159.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1159.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1159.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1159.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1159.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1159.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1159.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1159.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1159.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1159.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1159.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1159.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1159.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1159.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1159.packet0.level = M_LEVEL_Level_0;
  outC->_L1159.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1154 = kcg_true;
  outC->_L1153 = kcg_true;
  outC->_L1152 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1149 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1133 = kcg_true;
  outC->_L1132.valid = kcg_true;
  outC->_L1132.nid_c = kcg_lit_int32(0);
  outC->_L1132.nid_bg = kcg_lit_int32(0);
  outC->_L1132.q_link = Q_LINK_Unlinked;
  outC->_L1132.location.nominal = kcg_lit_int32(0);
  outC->_L1132.location.d_min = kcg_lit_int32(0);
  outC->_L1132.location.d_max = kcg_lit_int32(0);
  outC->_L1132.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.valid = kcg_true;
  outC->_L1132.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1132.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1132.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1132.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1132.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1132.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1132.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1132.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.valid = kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1132.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1132.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1132.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1132.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1132.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1132.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1132.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx199 = 0; idx199 < 33; idx199++) {
    outC->_L1132.infoFromPassing.linkedBGs[idx199].valid = kcg_true;
    outC->_L1132.infoFromPassing.linkedBGs[idx199].nid_LRBG = kcg_lit_int32(0);
    outC->_L1132.infoFromPassing.linkedBGs[idx199].q_dir = Q_DIR_Reverse;
    outC->_L1132.infoFromPassing.linkedBGs[idx199].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1132.infoFromPassing.linkedBGs[idx199].d_link = kcg_lit_int32(0);
    outC->_L1132.infoFromPassing.linkedBGs[idx199].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1132.infoFromPassing.linkedBGs[idx199].nid_c = kcg_lit_int32(0);
    outC->_L1132.infoFromPassing.linkedBGs[idx199].nid_bg = kcg_lit_int32(0);
    outC->_L1132.infoFromPassing.linkedBGs[idx199].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1132.infoFromPassing.linkedBGs[idx199].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1132.infoFromPassing.linkedBGs[idx199].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1132.missed = kcg_true;
  outC->_L1131.valid = kcg_true;
  outC->_L1131.timestamp = kcg_lit_int32(0);
  outC->_L1131.trainPositionIsUnknown = kcg_true;
  outC->_L1131.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1131.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1131.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1131.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1131.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1131.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1131.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1131.LRBG.valid = kcg_true;
  outC->_L1131.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1131.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1131.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1131.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1131.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1131.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1131.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1131.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1131.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx200 = 0; idx200 < 33; idx200++) {
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].valid = kcg_true;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].nid_LRBG = kcg_lit_int32(0);
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].q_dir = Q_DIR_Reverse;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].d_link = kcg_lit_int32(0);
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].nid_c = kcg_lit_int32(0);
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].nid_bg = kcg_lit_int32(0);
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[idx200].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1131.LRBG.missed = kcg_true;
  outC->_L1131.prvLRBG.valid = kcg_true;
  outC->_L1131.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1131.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(
      0);
  outC->_L1131.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx201 = 0; idx201 < 33; idx201++) {
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].valid = kcg_true;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].q_dir = Q_DIR_Reverse;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].d_link =
      kcg_lit_int32(0);
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].nid_c = kcg_lit_int32(0);
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].nid_bg =
      kcg_lit_int32(0);
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[idx201].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1131.prvLRBG.missed = kcg_true;
  outC->_L1131.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1131.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1131.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1131.linkingIsUsedOnboard = kcg_true;
  outC->_L1131.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1131.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1131.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1117.number = kcg_lit_int32(0);
  for (idx202 = 0; idx202 < 32; idx202++) {
    outC->_L1117.levelList[idx202].level = M_LEVEL_Level_0;
    outC->_L1117.levelList[idx202].nid_stm = kcg_lit_int32(0);
  }
  outC->_L1107 = kcg_true;
  outC->_L1104 = kcg_true;
  outC->_L1103 = kcg_true;
  outC->_L1099 = kcg_lit_int32(0);
  outC->_L1095.valid = kcg_true;
  outC->_L1095.whichMode = M_MODE_Full_Supervision;
  outC->_L1095.SH_Req_RefusedByRBC = kcg_true;
  outC->_L1095.LevelNeedsAck = kcg_true;
  outC->_L1092 = kcg_true;
  outC->_L1091 = kcg_true;
  outC->_L1088.NTC = kcg_true;
  outC->_L1088.L0 = kcg_true;
  outC->_L1088.L1 = kcg_true;
  outC->_L1088.L2 = kcg_true;
  outC->_L1088.L3 = kcg_true;
  outC->_L1087 = kcg_true;
  outC->_L1086 = kcg_true;
  outC->_L1080 = kcg_true;
  outC->_L1079.NTC = kcg_true;
  outC->_L1079.L0 = kcg_true;
  outC->_L1079.L1 = kcg_true;
  outC->_L1079.L2 = kcg_true;
  outC->_L1079.L3 = kcg_true;
  outC->_L1078.is_set = kcg_true;
  outC->_L1078.transition.level = M_LEVEL_Level_0;
  outC->_L1078.transition.position = kcg_lit_int32(0);
  outC->_L1078.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1078.transition.immediateAck = kcg_true;
  outC->_L1078.transition.AckLength = kcg_lit_int32(0);
  outC->_L1078.LRBG = kcg_lit_int32(0);
  outC->_L1078.referenceLocation = kcg_lit_int32(0);
  outC->_L1077 = CabUndefined_TIU_Types_Pkg;
  outC->_L1076.valid = kcg_true;
  outC->_L1076.deskOpen = kcg_true;
  outC->_L1076.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1076.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1060 = kcg_true;
  outC->_L1057.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L1057.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L1057.Override_Function_Active = kcg_true;
  outC->_L1057.EOA_Antenna_Overpass = kcg_true;
  outC->_L1057.EOA_Front_End = kcg_true;
  outC->_L1057.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L1056.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L1056.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L1056.Override_Function_Active = kcg_true;
  outC->_L1056.EOA_Antenna_Overpass = kcg_true;
  outC->_L1056.EOA_Front_End = kcg_true;
  outC->_L1056.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L1048.train_status.valid = kcg_true;
  outC->_L1048.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L1048.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L1048.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L1048.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L1048.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L1048.brake_status.valid = kcg_true;
  outC->_L1048.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_pressure.valid = kcg_true;
  outC->_L1048.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L1048.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L1048.train_data_info.valid = kcg_true;
  outC->_L1048.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L1048.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1048.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1048.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L1048.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L1048.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1048.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1048.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1048.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1048.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L1048.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx203 = 0; idx203 < 5; idx203++) {
    outC->_L1048.train_data_info.nationSystems[idx203] = kcg_lit_int32(0);
  }
  outC->_L1048.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx204 = 0; idx204 < 4; idx204++) {
    outC->_L1048.train_data_info.tractionSystem[idx204].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1048.train_data_info.tractionSystem[idx204].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L1048.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L1048.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L1048.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L1047 = kcg_true;
  outC->_L1045.outOfMemSpace = kcg_true;
  outC->_L1045.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1045.positionCalculation_inconsistent = kcg_true;
  outC->_L1045.linkedBGMissed = kcg_true;
  outC->_L1045.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1045.BG_LinkingConsistencyError = kcg_true;
  outC->_L1045.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1045.doubleRepositioningError = kcg_true;
  outC->_L1045.bg.valid = kcg_true;
  outC->_L1045.bg.nid_c = kcg_lit_int32(0);
  outC->_L1045.bg.nid_bg = kcg_lit_int32(0);
  outC->_L1045.bg.q_link = Q_LINK_Unlinked;
  outC->_L1045.bg.location.nominal = kcg_lit_int32(0);
  outC->_L1045.bg.location.d_min = kcg_lit_int32(0);
  outC->_L1045.bg.location.d_max = kcg_lit_int32(0);
  outC->_L1045.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.valid = kcg_true;
  outC->_L1045.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1045.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1045.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1045.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.valid = kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1045.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1045.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1045.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1045.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1045.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1045.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1045.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx205 = 0; idx205 < 33; idx205++) {
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].valid = kcg_true;
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].nid_LRBG = kcg_lit_int32(0);
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].q_dir = Q_DIR_Reverse;
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].d_link = kcg_lit_int32(0);
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].nid_c = kcg_lit_int32(0);
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].nid_bg = kcg_lit_int32(0);
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1045.bg.infoFromPassing.linkedBGs[idx205].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1045.bg.missed = kcg_true;
  outC->_L1044 = kcg_lit_int32(0);
  outC->_L1043 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1042 = kcg_true;
  outC->_L1041 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1040.valid = kcg_true;
  outC->_L1040.timestamp = kcg_lit_int32(0);
  outC->_L1040.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1040.odo.o_min = kcg_lit_int32(0);
  outC->_L1040.odo.o_max = kcg_lit_int32(0);
  outC->_L1040.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1040.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1040.speed.v_lower = kcg_lit_int32(0);
  outC->_L1040.speed.v_upper = kcg_lit_int32(0);
  outC->_L1040.acceleration = kcg_lit_int32(0);
  outC->_L1040.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1040.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1039.valid = kcg_true;
  outC->_L1039.timestamp = kcg_lit_int32(0);
  outC->_L1039.trainPositionIsUnknown = kcg_true;
  outC->_L1039.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1039.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1039.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1039.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1039.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1039.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1039.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1039.LRBG.valid = kcg_true;
  outC->_L1039.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1039.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1039.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1039.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1039.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1039.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1039.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1039.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1039.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx206 = 0; idx206 < 33; idx206++) {
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].valid = kcg_true;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].nid_LRBG = kcg_lit_int32(0);
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].q_dir = Q_DIR_Reverse;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].d_link = kcg_lit_int32(0);
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].nid_c = kcg_lit_int32(0);
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].nid_bg = kcg_lit_int32(0);
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[idx206].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1039.LRBG.missed = kcg_true;
  outC->_L1039.prvLRBG.valid = kcg_true;
  outC->_L1039.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1039.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(
      0);
  outC->_L1039.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx207 = 0; idx207 < 33; idx207++) {
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].valid = kcg_true;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].q_dir = Q_DIR_Reverse;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].d_link =
      kcg_lit_int32(0);
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].nid_c = kcg_lit_int32(0);
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].nid_bg =
      kcg_lit_int32(0);
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[idx207].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1039.prvLRBG.missed = kcg_true;
  outC->_L1039.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1039.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1039.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1039.linkingIsUsedOnboard = kcg_true;
  outC->_L1039.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1039.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1039.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1038.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L1038.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L1038.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L1038.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1038.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L1038.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L1038.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1038.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L1038.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1038.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L1038.PositionErrors.bg.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L1038.PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx208 = 0; idx208 < 33; idx208++) {
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].valid =
      kcg_true;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].q_dir =
      Q_DIR_Reverse;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].d_link =
      kcg_lit_int32(0);
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].nid_c =
      kcg_lit_int32(0);
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].nid_bg =
      kcg_lit_int32(0);
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[idx208].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1038.PositionErrors.bg.missed = kcg_true;
  outC->_L1038.Train_Position.valid = kcg_true;
  outC->_L1038.Train_Position.timestamp = kcg_lit_int32(0);
  outC->_L1038.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L1038.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1038.Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1038.Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1038.Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1038.Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1038.Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1038.Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1038.Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx209 = 0; idx209 < 33; idx209++) {
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].valid =
      kcg_true;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].q_dir =
      Q_DIR_Reverse;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].d_link =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].nid_c =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].nid_bg =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[idx209].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1038.Train_Position.LRBG.missed = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1038.Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx210 = 0; idx210 < 33; idx210++) {
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].valid =
      kcg_true;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].q_dir =
      Q_DIR_Reverse;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].d_link =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].nid_c =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].nid_bg =
      kcg_lit_int32(0);
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx210].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1038.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L1038.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1038.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1038.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1038.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L1038.Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1038.Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1038.Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1038.Train_Speed = kcg_lit_int32(0);
  outC->_L1038.Train_Standstill = kcg_true;
  outC->_L1037 = kcg_lit_int32(0);
  outC->_L1032 = kcg_true;
  outC->_L1031 = kcg_true;
  outC->_L1030 = kcg_true;
  outC->_L1029 = kcg_true;
  outC->_L1023 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1024 = kcg_true;
  outC->_L1025 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1026 = kcg_true;
  outC->_L1027 = kcg_true;
  outC->_L1028.valid = kcg_true;
  outC->_L1028.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1028.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1022 = kcg_true;
  outC->_L1021 = kcg_true;
  outC->_L1020 = kcg_true;
  outC->_L1019 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1018 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1017 = kcg_true;
  outC->_L1016.valid = kcg_true;
  outC->_L1016.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1016.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1015 = kcg_true;
  outC->_L1009 = kcg_true;
  outC->_L1007 = kcg_true;
  outC->_L1006.valid = kcg_true;
  outC->_L1006.deskOpen = kcg_true;
  outC->_L1006.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1006.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1005 = M_LEVEL_Level_0;
  outC->_L1003.compatibleModeAndLevel = kcg_true;
  outC->_L1003.level = M_LEVEL_Level_0;
  outC->_L1003.newLevel = kcg_true;
  outC->_L1003.Mode = M_MODE_Full_Supervision;
  outC->_L1003.newMode = kcg_true;
  outC->_L1002 = M_MODE_Full_Supervision;
  outC->_L996 = M_LEVEL_Level_0;
  outC->_L995 = M_MODE_Full_Supervision;
  outC->_L994.compatibleModeAndLevel = kcg_true;
  outC->_L994.level = M_LEVEL_Level_0;
  outC->_L994.newLevel = kcg_true;
  outC->_L994.Mode = M_MODE_Full_Supervision;
  outC->_L994.newMode = kcg_true;
  outC->_L993.compatibleModeAndLevel = kcg_true;
  outC->_L993.level = M_LEVEL_Level_0;
  outC->_L993.newLevel = kcg_true;
  outC->_L993.Mode = M_MODE_Full_Supervision;
  outC->_L993.newMode = kcg_true;
  outC->_L988.compatibleModeAndLevel = kcg_true;
  outC->_L988.level = M_LEVEL_Level_0;
  outC->_L988.newLevel = kcg_true;
  outC->_L988.Mode = M_MODE_Full_Supervision;
  outC->_L988.newMode = kcg_true;
  outC->_L984.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L984.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L984.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L984.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L984.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L984.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L984.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L984.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L984.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L984.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L984.PositionErrors.bg.valid = kcg_true;
  outC->_L984.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L984.PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx211 = 0; idx211 < 33; idx211++) {
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].valid =
      kcg_true;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].q_dir =
      Q_DIR_Reverse;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].d_link =
      kcg_lit_int32(0);
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].nid_c =
      kcg_lit_int32(0);
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].nid_bg =
      kcg_lit_int32(0);
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[idx211].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L984.PositionErrors.bg.missed = kcg_true;
  outC->_L984.Train_Position.valid = kcg_true;
  outC->_L984.Train_Position.timestamp = kcg_lit_int32(0);
  outC->_L984.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L984.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L984.Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L984.Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L984.Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L984.Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L984.Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L984.Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L984.Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx212 = 0; idx212 < 33; idx212++) {
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].valid =
      kcg_true;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].q_dir =
      Q_DIR_Reverse;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].d_link =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].nid_c =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].nid_bg =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[idx212].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L984.Train_Position.LRBG.missed = kcg_true;
  outC->_L984.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L984.Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx213 = 0; idx213 < 33; idx213++) {
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].valid =
      kcg_true;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].q_dir =
      Q_DIR_Reverse;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].d_link =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].nid_c =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].nid_bg =
      kcg_lit_int32(0);
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx213].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L984.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L984.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L984.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L984.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L984.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L984.Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L984.Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L984.Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L984.Train_Speed = kcg_lit_int32(0);
  outC->_L984.Train_Standstill = kcg_true;
  outC->_L982.valid = kcg_true;
  outC->_L982.DriverAck.valid = kcg_true;
  outC->_L982.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L982.DriverAck.acknowledgement = kcg_true;
  outC->_L982.DriverRequest.valid = kcg_true;
  outC->_L982.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L982.DriverRequest.Req_NL = kcg_true;
  outC->_L982.DriverRequest.Req_Override = kcg_true;
  outC->_L982.DriverRequest.Req_SH = kcg_true;
  outC->_L982.DriverRequest.Req_Start = kcg_true;
  outC->_L982.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L982.LevelAck = kcg_true;
  outC->_L981.compatibleModeAndLevel = kcg_true;
  outC->_L981.level = M_LEVEL_Level_0;
  outC->_L981.newLevel = kcg_true;
  outC->_L981.Mode = M_MODE_Full_Supervision;
  outC->_L981.newMode = kcg_true;
  outC->_L978 = kcg_lit_int32(0);
  outC->_L973.compatibleModeAndLevel = kcg_true;
  outC->_L973.level = M_LEVEL_Level_0;
  outC->_L973.newLevel = kcg_true;
  outC->_L973.Mode = M_MODE_Full_Supervision;
  outC->_L973.newMode = kcg_true;
  outC->_L974.EoM_Procedure_req = kcg_true;
  outC->_L974.Clean_BG_List_SH_Area = kcg_true;
  outC->_L974.MA_Req = kcg_true;
  outC->_L974.Req_for_SH_from_Driver = kcg_true;
  outC->_L974.Connection_to_RBC_req = kcg_true;
  outC->_L974.Position_Repport_Needed = kcg_true;
  outC->_L975 = kcg_true;
  outC->_L976 = kcg_true;
  outC->_L977.LevelTransition.is_set = kcg_true;
  outC->_L977.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L977.LevelTransition.transition.position = kcg_lit_int32(0);
  outC->_L977.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L977.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L977.LevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->_L977.LevelTransition.LRBG = kcg_lit_int32(0);
  outC->_L977.LevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->_L977.IsAvailableForUse = kcg_true;
  outC->_L971.nid_engine = kcg_lit_int32(0);
  outC->_L971.nid_operational = kcg_lit_int32(0);
  outC->_L971.l_train = kcg_lit_int32(0);
  outC->_L971.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L971.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L971.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L971.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L971.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L971.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L971.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L971.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L971.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L971.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L971.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L971.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L965 = kcg_lit_int32(0);
  outC->_L963 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L961.nid_ntc = kcg_lit_int32(0);
  outC->_L961.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L955 = kcg_true;
  outC->_L953.minSafeRearEndPassed = kcg_true;
  outC->_L953.maxSafeFrontEndPassed = kcg_true;
  outC->_L952.valid = kcg_true;
  outC->_L952.acknowledgedByDriver = kcg_true;
  outC->_L952.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L952.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L952.trainLength = kcg_lit_int32(0);
  outC->_L952.brakePerctage = kcg_lit_int32(0);
  outC->_L952.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L952.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L952.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L952.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L952.axleNumber = kcg_lit_int32(0);
  outC->_L952.numberNationalSystems = kcg_lit_int32(0);
  for (idx214 = 0; idx214 < 5; idx214++) {
    outC->_L952.nationSystems[idx214] = kcg_lit_int32(0);
  }
  outC->_L952.numberTractionSystems = kcg_lit_int32(0);
  for (idx215 = 0; idx215 < 4; idx215++) {
    outC->_L952.tractionSystem[idx215].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L952.tractionSystem[idx215].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L951.valid = kcg_true;
  outC->_L951.systemTime = kcg_lit_int32(0);
  outC->_L951.trainRunningNumber = kcg_lit_int32(0);
  outC->_L950.nid_engine = kcg_lit_int32(0);
  outC->_L950.nid_operational = kcg_lit_int32(0);
  outC->_L950.l_train = kcg_lit_int32(0);
  outC->_L950.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L950.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L950.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L950.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L950.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L950.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L950.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L950.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L950.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L950.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L950.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L950.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L949.valid = kcg_true;
  outC->_L949.q_dir = Q_DIR_Reverse;
  outC->_L949.d_validnv = kcg_lit_int32(0);
  for (idx216 = 0; idx216 < 7; idx216++) {
    outC->_L949.nid_cArray[idx216].valid = kcg_true;
    outC->_L949.nid_cArray[idx216].nid_c = kcg_lit_int32(0);
  }
  outC->_L949.v_nvshunt = kcg_lit_int32(0);
  outC->_L949.v_nvstff = kcg_lit_int32(0);
  outC->_L949.v_nvonsight = kcg_lit_int32(0);
  outC->_L949.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L949.v_nvunfit = kcg_lit_int32(0);
  outC->_L949.v_nvrel = kcg_lit_int32(0);
  outC->_L949.d_nvroll = kcg_lit_int32(0);
  outC->_L949.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L949.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L949.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L949.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L949.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L949.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L949.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L949.d_nvovtrp = kcg_lit_int32(0);
  outC->_L949.t_nvovtrp = kcg_lit_int32(0);
  outC->_L949.d_nvpotrp = kcg_lit_int32(0);
  outC->_L949.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L949.t_nvcontact = kcg_lit_int32(0);
  outC->_L949.m_nvderun = M_NVDERUN_No;
  outC->_L949.d_nvstff = kcg_lit_int32(0);
  outC->_L949.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L949.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L949.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L949.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L949.q_nvlocacc = kcg_lit_int32(0);
  outC->_L949.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L949.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L949.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx218 = 0; idx218 < 7; idx218++) {
    outC->_L949.nvkvintsetArray[idx218].valid = kcg_true;
    outC->_L949.nvkvintsetArray[idx218].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L949.nvkvintsetArray[idx218].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L949.nvkvintsetArray[idx218].a_nvp23 = kcg_lit_float32(0.0);
    for (idx217 = 0; idx217 < 7; idx217++) {
      outC->_L949.nvkvintsetArray[idx218].nvkintArray[idx217].valid = kcg_true;
      outC->_L949.nvkvintsetArray[idx218].nvkintArray[idx217].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L949.nvkvintsetArray[idx218].nvkintArray[idx217].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L949.nvkvintsetArray[idx218].nvkintArray[idx217].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx219 = 0; idx219 < 7; idx219++) {
    outC->_L949.nvkrintArray[idx219].valid = kcg_true;
    outC->_L949.nvkrintArray[idx219].l_nvkrint = L_NVKRINT_0m;
    outC->_L949.nvkrintArray[idx219].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L949.m_nvktint = kcg_lit_float32(0.0);
  outC->_L948.nid_engine = kcg_lit_int32(0);
  outC->_L948.nid_operational = kcg_lit_int32(0);
  outC->_L948.l_train = kcg_lit_int32(0);
  outC->_L948.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L948.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L948.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L948.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L948.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L948.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L948.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L948.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L948.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L948.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L948.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L948.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L947.nid_engine = kcg_lit_int32(0);
  outC->_L947.nid_operational = kcg_lit_int32(0);
  outC->_L947.l_train = kcg_lit_int32(0);
  outC->_L947.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L947.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L947.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L947.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L947.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L947.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L947.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L947.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L947.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L947.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L947.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L947.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L939 = kcg_lit_int32(0);
  outC->_L938 = kcg_lit_int32(0);
  outC->_L937 = kcg_lit_int32(0);
  outC->_L928 = kcg_true;
  outC->_L929 = kcg_true;
  outC->_L930 = msrc_undefined_Common_Types_Pkg;
  outC->_L931 = kcg_true;
  outC->_L932 = msrc_undefined_Common_Types_Pkg;
  outC->_L935 = kcg_lit_int32(0);
  outC->_L914.valid = kcg_true;
  outC->_L914.timestamp = kcg_lit_int32(0);
  outC->_L914.odo.o_nominal = kcg_lit_int32(0);
  outC->_L914.odo.o_min = kcg_lit_int32(0);
  outC->_L914.odo.o_max = kcg_lit_int32(0);
  outC->_L914.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L914.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L914.speed.v_lower = kcg_lit_int32(0);
  outC->_L914.speed.v_upper = kcg_lit_int32(0);
  outC->_L914.acceleration = kcg_lit_int32(0);
  outC->_L914.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L914.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L910.valid = kcg_true;
  outC->_L910.timestamp = kcg_lit_int32(0);
  outC->_L910.odo.o_nominal = kcg_lit_int32(0);
  outC->_L910.odo.o_min = kcg_lit_int32(0);
  outC->_L910.odo.o_max = kcg_lit_int32(0);
  outC->_L910.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L910.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L910.speed.v_lower = kcg_lit_int32(0);
  outC->_L910.speed.v_upper = kcg_lit_int32(0);
  outC->_L910.acceleration = kcg_lit_int32(0);
  outC->_L910.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L910.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L906.valid = kcg_true;
  outC->_L906.timestamp = kcg_lit_int32(0);
  outC->_L906.odo.o_nominal = kcg_lit_int32(0);
  outC->_L906.odo.o_min = kcg_lit_int32(0);
  outC->_L906.odo.o_max = kcg_lit_int32(0);
  outC->_L906.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L906.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L906.speed.v_lower = kcg_lit_int32(0);
  outC->_L906.speed.v_upper = kcg_lit_int32(0);
  outC->_L906.acceleration = kcg_lit_int32(0);
  outC->_L906.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L906.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L905 = kcg_lit_int32(0);
  outC->_L904 = kcg_lit_int32(0);
  outC->_L903 = kcg_true;
  outC->_L899.valid = kcg_true;
  outC->_L899.acknowledgedByDriver = kcg_true;
  outC->_L899.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L899.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L899.trainLength = kcg_lit_int32(0);
  outC->_L899.brakePerctage = kcg_lit_int32(0);
  outC->_L899.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L899.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L899.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L899.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L899.axleNumber = kcg_lit_int32(0);
  outC->_L899.numberNationalSystems = kcg_lit_int32(0);
  for (idx220 = 0; idx220 < 5; idx220++) {
    outC->_L899.nationSystems[idx220] = kcg_lit_int32(0);
  }
  outC->_L899.numberTractionSystems = kcg_lit_int32(0);
  for (idx221 = 0; idx221 < 4; idx221++) {
    outC->_L899.tractionSystem[idx221].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L899.tractionSystem[idx221].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L896.valid = kcg_true;
  outC->_L896.location_LOA = kcg_lit_int32(0);
  outC->_L896.v_LOA = kcg_lit_int32(0);
  outC->_L895.valid = kcg_true;
  outC->_L895.location_LOA = kcg_lit_int32(0);
  outC->_L895.v_LOA = kcg_lit_int32(0);
  outC->_L891 = kcg_lit_int32(0);
  outC->_L893 = kcg_true;
  outC->_L894.valid = kcg_true;
  outC->_L894.nid_c = kcg_lit_int32(0);
  outC->_L894.nid_c_valid = kcg_true;
  outC->_L890.valid = kcg_true;
  outC->_L890.nid_c = kcg_lit_int32(0);
  outC->_L890.nid_c_valid = kcg_true;
  outC->_L889 = kcg_lit_int32(0);
  outC->_L888.valid = kcg_true;
  outC->_L888.timestamp = kcg_lit_int32(0);
  outC->_L888.odo.o_nominal = kcg_lit_int32(0);
  outC->_L888.odo.o_min = kcg_lit_int32(0);
  outC->_L888.odo.o_max = kcg_lit_int32(0);
  outC->_L888.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L888.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L888.speed.v_lower = kcg_lit_int32(0);
  outC->_L888.speed.v_upper = kcg_lit_int32(0);
  outC->_L888.acceleration = kcg_lit_int32(0);
  outC->_L888.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L888.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L885 = kcg_true;
  outC->_L844 = kcg_true;
  outC->_L843 = kcg_true;
  outC->_L838 = kcg_true;
  outC->_L836 = kcg_true;
  outC->_L837.outOfMemSpace = kcg_true;
  outC->_L837.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L837.positionCalculation_inconsistent = kcg_true;
  outC->_L837.linkedBGMissed = kcg_true;
  outC->_L837.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L837.BG_LinkingConsistencyError = kcg_true;
  outC->_L837.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L837.doubleRepositioningError = kcg_true;
  outC->_L837.bg.valid = kcg_true;
  outC->_L837.bg.nid_c = kcg_lit_int32(0);
  outC->_L837.bg.nid_bg = kcg_lit_int32(0);
  outC->_L837.bg.q_link = Q_LINK_Unlinked;
  outC->_L837.bg.location.nominal = kcg_lit_int32(0);
  outC->_L837.bg.location.d_min = kcg_lit_int32(0);
  outC->_L837.bg.location.d_max = kcg_lit_int32(0);
  outC->_L837.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.valid = kcg_true;
  outC->_L837.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L837.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L837.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L837.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L837.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.valid = kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L837.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L837.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L837.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L837.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L837.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L837.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L837.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx222 = 0; idx222 < 33; idx222++) {
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].valid = kcg_true;
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].nid_LRBG = kcg_lit_int32(0);
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].q_dir = Q_DIR_Reverse;
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].q_scale = Q_SCALE_10_cm_scale;
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].d_link = kcg_lit_int32(0);
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].nid_c = kcg_lit_int32(0);
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].nid_bg = kcg_lit_int32(0);
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L837.bg.infoFromPassing.linkedBGs[idx222].q_locacc = kcg_lit_int32(0);
  }
  outC->_L837.bg.missed = kcg_true;
  outC->_L835 = kcg_true;
  outC->_L834.outOfMemSpace = kcg_true;
  outC->_L834.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L834.positionCalculation_inconsistent = kcg_true;
  outC->_L834.linkedBGMissed = kcg_true;
  outC->_L834.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L834.BG_LinkingConsistencyError = kcg_true;
  outC->_L834.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L834.doubleRepositioningError = kcg_true;
  outC->_L834.bg.valid = kcg_true;
  outC->_L834.bg.nid_c = kcg_lit_int32(0);
  outC->_L834.bg.nid_bg = kcg_lit_int32(0);
  outC->_L834.bg.q_link = Q_LINK_Unlinked;
  outC->_L834.bg.location.nominal = kcg_lit_int32(0);
  outC->_L834.bg.location.d_min = kcg_lit_int32(0);
  outC->_L834.bg.location.d_max = kcg_lit_int32(0);
  outC->_L834.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.valid = kcg_true;
  outC->_L834.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L834.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L834.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L834.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L834.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.valid = kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L834.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L834.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L834.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L834.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L834.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L834.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L834.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx223 = 0; idx223 < 33; idx223++) {
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].valid = kcg_true;
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].nid_LRBG = kcg_lit_int32(0);
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].q_dir = Q_DIR_Reverse;
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].q_scale = Q_SCALE_10_cm_scale;
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].d_link = kcg_lit_int32(0);
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].nid_c = kcg_lit_int32(0);
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].nid_bg = kcg_lit_int32(0);
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L834.bg.infoFromPassing.linkedBGs[idx223].q_locacc = kcg_lit_int32(0);
  }
  outC->_L834.bg.missed = kcg_true;
  outC->_L833 = kcg_true;
  outC->_L832 = kcg_true;
  outC->_L831 = kcg_true;
  outC->_L830 = kcg_true;
  outC->_L829.nid_ntc = kcg_lit_int32(0);
  outC->_L829.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L828.minSafeRearEndPassed = kcg_true;
  outC->_L828.maxSafeFrontEndPassed = kcg_true;
  outC->_L827.linkedBGError = kcg_true;
  outC->_L827.unlinkedBGError = kcg_true;
  outC->_L827.BG_versionIncompatible = kcg_true;
  outC->_L827.radioSequenceError = kcg_true;
  outC->_L827.tNvContactError = kcg_true;
  outC->_L827.otherTimingError = kcg_true;
  outC->_L827.radioMessageConsistencyError = kcg_true;
  outC->_L827.nid_c = kcg_lit_int32(0);
  outC->_L827.nid_errorbg = kcg_lit_int32(0);
  outC->_L816.train_status.valid = kcg_true;
  outC->_L816.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L816.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L816.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L816.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L816.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L816.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L816.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L816.brake_status.valid = kcg_true;
  outC->_L816.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_pressure.valid = kcg_true;
  outC->_L816.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L816.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L816.train_data_info.valid = kcg_true;
  outC->_L816.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L816.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L816.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L816.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L816.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L816.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L816.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L816.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L816.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L816.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L816.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx224 = 0; idx224 < 5; idx224++) {
    outC->_L816.train_data_info.nationSystems[idx224] = kcg_lit_int32(0);
  }
  outC->_L816.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx225 = 0; idx225 < 4; idx225++) {
    outC->_L816.train_data_info.tractionSystem[idx225].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L816.train_data_info.tractionSystem[idx225].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L816.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L816.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L816.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L815.valid = kcg_true;
  outC->_L815.deskOpen = kcg_true;
  outC->_L815.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L815.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L818.valid = kcg_true;
  outC->_L818.info.train_status.valid = kcg_true;
  outC->_L818.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L818.info.brake_status.valid = kcg_true;
  outC->_L818.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_pressure.valid = kcg_true;
  outC->_L818.info.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L818.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L818.info.train_data_info.valid = kcg_true;
  outC->_L818.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L818.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L818.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L818.info.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L818.info.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L818.info.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L818.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L818.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L818.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L818.info.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L818.info.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx226 = 0; idx226 < 5; idx226++) {
    outC->_L818.info.train_data_info.nationSystems[idx226] = kcg_lit_int32(0);
  }
  outC->_L818.info.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx227 = 0; idx227 < 4; idx227++) {
    outC->_L818.info.train_data_info.tractionSystem[idx227].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L818.info.train_data_info.tractionSystem[idx227].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L818.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L818.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L818.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L813 = kcg_true;
  outC->_L812.newSessionEstablished = kcg_true;
  outC->_L807.valid = kcg_true;
  outC->_L807.timestamp = kcg_lit_int32(0);
  outC->_L807.trainPositionIsUnknown = kcg_true;
  outC->_L807.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L807.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L807.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L807.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L807.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L807.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L807.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L807.LRBG.valid = kcg_true;
  outC->_L807.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L807.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L807.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L807.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L807.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L807.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L807.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L807.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L807.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L807.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L807.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L807.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L807.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L807.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx228 = 0; idx228 < 33; idx228++) {
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].valid = kcg_true;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].nid_LRBG = kcg_lit_int32(0);
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].q_dir = Q_DIR_Reverse;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].d_link = kcg_lit_int32(0);
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].nid_c = kcg_lit_int32(0);
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].nid_bg = kcg_lit_int32(0);
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[idx228].q_locacc = kcg_lit_int32(0);
  }
  outC->_L807.LRBG.missed = kcg_true;
  outC->_L807.prvLRBG.valid = kcg_true;
  outC->_L807.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L807.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L807.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L807.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L807.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L807.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L807.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx229 = 0; idx229 < 33; idx229++) {
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].valid = kcg_true;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].q_dir = Q_DIR_Reverse;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].d_link = kcg_lit_int32(0);
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].nid_c = kcg_lit_int32(0);
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].nid_bg = kcg_lit_int32(0);
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[idx229].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L807.prvLRBG.missed = kcg_true;
  outC->_L807.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L807.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L807.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L807.linkingIsUsedOnboard = kcg_true;
  outC->_L807.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L807.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L807.maxSafeRearEndPosition = kcg_lit_int32(0);
  for (idx231 = 0; idx231 < 41; idx231++) {
    outC->_L806[idx231].valid = kcg_true;
    outC->_L806[idx231].nid_c = kcg_lit_int32(0);
    outC->_L806[idx231].nid_bg = kcg_lit_int32(0);
    outC->_L806[idx231].q_link = Q_LINK_Unlinked;
    outC->_L806[idx231].location.nominal = kcg_lit_int32(0);
    outC->_L806[idx231].location.d_min = kcg_lit_int32(0);
    outC->_L806[idx231].location.d_max = kcg_lit_int32(0);
    outC->_L806[idx231].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.valid = kcg_true;
    outC->_L806[idx231].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L806[idx231].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L806[idx231].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L806[idx231].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L806[idx231].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L806[idx231].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L806[idx231].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.valid = kcg_true;
    outC->_L806[idx231].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L806[idx231].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L806[idx231].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L806[idx231].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L806[idx231].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L806[idx231].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L806[idx231].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L806[idx231].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L806[idx231].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L806[idx231].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L806[idx231].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx230 = 0; idx230 < 33; idx230++) {
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].valid = kcg_true;
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].q_dir = Q_DIR_Reverse;
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].d_link = kcg_lit_int32(0);
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].nid_c = kcg_lit_int32(0);
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].nid_bg = kcg_lit_int32(0);
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L806[idx231].infoFromPassing.linkedBGs[idx230].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L806[idx231].missed = kcg_true;
  }
  for (idx232 = 0; idx232 < 8; idx232++) {
    outC->_L805[idx232].valid = kcg_true;
    outC->_L805[idx232].nidBG = kcg_lit_int32(0);
    outC->_L805[idx232].location.nominal = kcg_lit_int32(0);
    outC->_L805[idx232].location.d_min = kcg_lit_int32(0);
    outC->_L805[idx232].location.d_max = kcg_lit_int32(0);
  }
  outC->_L797 = kcg_lit_int32(0);
  for (idx234 = 0; idx234 < 41; idx234++) {
    outC->_L794[idx234].valid = kcg_true;
    outC->_L794[idx234].nid_c = kcg_lit_int32(0);
    outC->_L794[idx234].nid_bg = kcg_lit_int32(0);
    outC->_L794[idx234].q_link = Q_LINK_Unlinked;
    outC->_L794[idx234].location.nominal = kcg_lit_int32(0);
    outC->_L794[idx234].location.d_min = kcg_lit_int32(0);
    outC->_L794[idx234].location.d_max = kcg_lit_int32(0);
    outC->_L794[idx234].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.valid = kcg_true;
    outC->_L794[idx234].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L794[idx234].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L794[idx234].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L794[idx234].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L794[idx234].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L794[idx234].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L794[idx234].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.valid = kcg_true;
    outC->_L794[idx234].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L794[idx234].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L794[idx234].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L794[idx234].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L794[idx234].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L794[idx234].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L794[idx234].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L794[idx234].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L794[idx234].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L794[idx234].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L794[idx234].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx233 = 0; idx233 < 33; idx233++) {
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].valid = kcg_true;
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].q_dir = Q_DIR_Reverse;
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].d_link = kcg_lit_int32(0);
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].nid_c = kcg_lit_int32(0);
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].nid_bg = kcg_lit_int32(0);
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L794[idx234].infoFromPassing.linkedBGs[idx233].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L794[idx234].missed = kcg_true;
  }
  outC->_L792.valid = kcg_true;
  outC->_L792.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L792.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L792.btm_msg.present = kcg_true;
  outC->_L792.btm_msg.checkResult = kcg_true;
  outC->_L792.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L792.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L792.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L792.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L792.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L792.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L792.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L792.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L792.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L792.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L792.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L792.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L792.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L792.rtm_msg.present = kcg_true;
  outC->_L792.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L792.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L792.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L792.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L792.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L792.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L792.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L792.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L792.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L792.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L792.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx235 = 0; idx235 < 30; idx235++) {
    outC->_L792.packets.PacketHeaders[idx235].nid_packet = kcg_lit_int32(0);
    outC->_L792.packets.PacketHeaders[idx235].q_dir = Q_DIR_Reverse;
    outC->_L792.packets.PacketHeaders[idx235].valid = kcg_true;
    outC->_L792.packets.PacketHeaders[idx235].startAddress = kcg_lit_int32(0);
    outC->_L792.packets.PacketHeaders[idx235].endAddress = kcg_lit_int32(0);
  }
  for (idx236 = 0; idx236 < 500; idx236++) {
    outC->_L792.packets.PacketData[idx236] = kcg_lit_int32(0);
  }
  outC->_L786.valid = kcg_true;
  outC->_L786.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L786.nid_c = kcg_lit_int32(0);
  outC->_L786.nid_RBC = kcg_lit_int32(0);
  outC->_L786.nid_radio = kcg_lit_int32(0);
  outC->_L786.nid_mn = kcg_lit_int32(0);
  outC->_L785.registration.valid = kcg_true;
  outC->_L785.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L785.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L785.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L785.registration.nid_mn = kcg_lit_int32(0);
  outC->_L785.connection.valid = kcg_true;
  outC->_L785.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L785.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L785.connection.nid_radio = kcg_lit_int32(0);
  outC->_L785.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L785.connection.connectionLost = kcg_true;
  outC->_L785.connection.isInRadioHole = kcg_true;
  outC->_L785.session.valid = kcg_true;
  outC->_L785.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L785.session.nid_c = kcg_lit_int32(0);
  outC->_L785.session.nid_rbc = kcg_lit_int32(0);
  outC->_L785.session.nid_radio = kcg_lit_int32(0);
  outC->_L783 = kcg_lit_int32(0);
  outC->_L777 = kcg_true;
  outC->_L776 = kcg_true;
  outC->_L772.valid = kcg_true;
  outC->_L772.timestamp = kcg_lit_int32(0);
  outC->_L772.trainPositionIsUnknown = kcg_true;
  outC->_L772.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L772.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L772.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L772.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L772.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L772.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L772.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L772.LRBG.valid = kcg_true;
  outC->_L772.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L772.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L772.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L772.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L772.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L772.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L772.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L772.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L772.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L772.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L772.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L772.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L772.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L772.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx237 = 0; idx237 < 33; idx237++) {
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].valid = kcg_true;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].nid_LRBG = kcg_lit_int32(0);
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].q_dir = Q_DIR_Reverse;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].d_link = kcg_lit_int32(0);
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].nid_c = kcg_lit_int32(0);
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].nid_bg = kcg_lit_int32(0);
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[idx237].q_locacc = kcg_lit_int32(0);
  }
  outC->_L772.LRBG.missed = kcg_true;
  outC->_L772.prvLRBG.valid = kcg_true;
  outC->_L772.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L772.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L772.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L772.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L772.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L772.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L772.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx238 = 0; idx238 < 33; idx238++) {
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].valid = kcg_true;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].q_dir = Q_DIR_Reverse;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].d_link = kcg_lit_int32(0);
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].nid_c = kcg_lit_int32(0);
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].nid_bg = kcg_lit_int32(0);
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[idx238].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L772.prvLRBG.missed = kcg_true;
  outC->_L772.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L772.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L772.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L772.linkingIsUsedOnboard = kcg_true;
  outC->_L772.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L772.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L772.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L763.valid = kcg_true;
  outC->_L763.source = msrc_undefined_Common_Types_Pkg;
  outC->_L763.radioMetadata.t_train_reference = kcg_true;
  outC->_L763.radioMetadata.nid_em = kcg_true;
  outC->_L763.radioMetadata.q_scale = kcg_true;
  outC->_L763.radioMetadata.d_sr = kcg_true;
  outC->_L763.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L763.radioMetadata.d_ref = kcg_true;
  outC->_L763.radioMetadata.q_dir = kcg_true;
  outC->_L763.radioMetadata.d_emergencystop = kcg_true;
  outC->_L763.radioMetadata.m_version = kcg_true;
  outC->_L763.BG_Common_Header.valid = kcg_true;
  outC->_L763.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L763.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L763.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L763.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L763.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L763.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L763.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L763.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L763.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L763.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L763.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L763.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L763.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L763.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L763.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L763.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L763.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx239 = 0; idx239 < 30; idx239++) {
    outC->_L763.packets.PacketHeaders[idx239].nid_packet = kcg_lit_int32(0);
    outC->_L763.packets.PacketHeaders[idx239].q_dir = Q_DIR_Reverse;
    outC->_L763.packets.PacketHeaders[idx239].valid = kcg_true;
    outC->_L763.packets.PacketHeaders[idx239].startAddress = kcg_lit_int32(0);
    outC->_L763.packets.PacketHeaders[idx239].endAddress = kcg_lit_int32(0);
  }
  for (idx240 = 0; idx240 < 500; idx240++) {
    outC->_L763.packets.PacketData[idx240] = kcg_lit_int32(0);
  }
  outC->_L763.sendingRBC.valid = kcg_true;
  outC->_L763.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L763.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L763.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L764 = kcg_true;
  outC->_L765 = kcg_true;
  outC->_L766.linkedBGError = kcg_true;
  outC->_L766.unlinkedBGError = kcg_true;
  outC->_L766.BG_versionIncompatible = kcg_true;
  outC->_L766.radioSequenceError = kcg_true;
  outC->_L766.tNvContactError = kcg_true;
  outC->_L766.otherTimingError = kcg_true;
  outC->_L766.radioMessageConsistencyError = kcg_true;
  outC->_L766.nid_c = kcg_lit_int32(0);
  outC->_L766.nid_errorbg = kcg_lit_int32(0);
  outC->_L741 = kcg_true;
  outC->_L753.is_set = kcg_true;
  outC->_L753.transition.level = M_LEVEL_Level_0;
  outC->_L753.transition.position = kcg_lit_int32(0);
  outC->_L753.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L753.transition.immediateAck = kcg_true;
  outC->_L753.transition.AckLength = kcg_lit_int32(0);
  outC->_L753.LRBG = kcg_lit_int32(0);
  outC->_L753.referenceLocation = kcg_lit_int32(0);
  outC->_L752.valid = kcg_true;
  outC->_L752.DriverAck.valid = kcg_true;
  outC->_L752.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L752.DriverAck.acknowledgement = kcg_true;
  outC->_L752.DriverRequest.valid = kcg_true;
  outC->_L752.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L752.DriverRequest.Req_NL = kcg_true;
  outC->_L752.DriverRequest.Req_Override = kcg_true;
  outC->_L752.DriverRequest.Req_SH = kcg_true;
  outC->_L752.DriverRequest.Req_Start = kcg_true;
  outC->_L752.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L752.LevelAck = kcg_true;
  outC->_L751.valid = kcg_true;
  outC->_L751.systemTime = kcg_lit_int32(0);
  outC->_L751.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L750.valid = kcg_true;
  outC->_L750.systemTime = kcg_lit_int32(0);
  outC->_L750.acknowledged = kcg_true;
  outC->_L749.valid = kcg_true;
  outC->_L749.systemTime = kcg_lit_int32(0);
  outC->_L749.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L749.l_train = kcg_lit_int32(0);
  outC->_L749.m_brakeperct = kcg_lit_int32(0);
  outC->_L749.v_maxTrain = kcg_lit_int32(0);
  outC->_L749.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L749.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L749.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L748.valid = kcg_true;
  outC->_L748.systemTime = kcg_lit_int32(0);
  outC->_L748.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L747.valid = kcg_true;
  outC->_L747.systemTime = kcg_lit_int32(0);
  outC->_L746.valid = kcg_true;
  outC->_L746.systemTime = kcg_lit_int32(0);
  outC->_L746.trainRunningNumber = kcg_lit_int32(0);
  outC->_L745.valid = kcg_true;
  outC->_L745.systemTime = kcg_lit_int32(0);
  for (idx241 = 0; idx241 < 9; idx241++) {
    outC->_L745.driverIdentifier[idx241] = ' ';
  }
  outC->_L744 = kcg_true;
  outC->_L743.valid = kcg_true;
  outC->_L743.systemTime = kcg_lit_int32(0);
  outC->_L743.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L743.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L743.l_name = kcg_lit_int32(0);
  for (idx242 = 0; idx242 < 255; idx242++) {
    outC->_L743.DMI_name[idx242] = ' ';
  }
  outC->_L743.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L742.DMI_Active = kcg_true;
  outC->_L742.DMI_Error = kcg_true;
  outC->_L742.DMI_DriverIdValidated = kcg_true;
  outC->_L742.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L742.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L742.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L742.DMI_TrainDataValidated = kcg_true;
  outC->_L742.DMI_StartReceived = kcg_true;
  outC->_L742.DMI_Identifier.valid = kcg_true;
  outC->_L742.DMI_Identifier.systemTime = kcg_lit_int32(0);
  outC->_L742.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L742.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L742.DMI_Identifier.l_name = kcg_lit_int32(0);
  for (idx243 = 0; idx243 < 255; idx243++) {
    outC->_L742.DMI_Identifier.DMI_name[idx243] = ' ';
  }
  outC->_L742.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx244 = 0; idx244 < 311; idx244++) {
    outC->_L735[idx244] = kcg_lit_int32(0);
  }
  outC->_L721 = kcg_lit_int32(0);
  outC->_L719 = kcg_lit_int32(0);
  outC->_L718 = kcg_lit_int32(0);
  outC->_L711 = kcg_lit_float32(0.0);
  outC->_L710 = kcg_lit_float32(0.0);
  outC->_L709 = kcg_lit_int32(0);
  outC->_L699.valid = kcg_true;
  outC->_L699.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L699.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L652.valid = kcg_true;
  outC->_L652.targetSpeed = kcg_lit_int32(0);
  outC->_L652.permittedSpeed = kcg_lit_int32(0);
  outC->_L652.releaseSpeed = kcg_lit_int32(0);
  outC->_L652.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L652.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L652.interventionSpeed = kcg_lit_int32(0);
  outC->_L652.sup_status = CSM_DMI_Types_Pkg;
  outC->_L652.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L652.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L647.valid = kcg_true;
  outC->_L647.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L647.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L639.valid = kcg_true;
  outC->_L639.timestamp = kcg_lit_int32(0);
  outC->_L639.trainPositionIsUnknown = kcg_true;
  outC->_L639.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L639.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L639.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L639.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L639.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L639.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L639.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L639.LRBG.valid = kcg_true;
  outC->_L639.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L639.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L639.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L639.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L639.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L639.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L639.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L639.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L639.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L639.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L639.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L639.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L639.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L639.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx245 = 0; idx245 < 33; idx245++) {
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].valid = kcg_true;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].nid_LRBG = kcg_lit_int32(0);
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].q_dir = Q_DIR_Reverse;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].d_link = kcg_lit_int32(0);
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].nid_c = kcg_lit_int32(0);
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].nid_bg = kcg_lit_int32(0);
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[idx245].q_locacc = kcg_lit_int32(0);
  }
  outC->_L639.LRBG.missed = kcg_true;
  outC->_L639.prvLRBG.valid = kcg_true;
  outC->_L639.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L639.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L639.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L639.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L639.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L639.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L639.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx246 = 0; idx246 < 33; idx246++) {
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].valid = kcg_true;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].q_dir = Q_DIR_Reverse;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].d_link = kcg_lit_int32(0);
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].nid_c = kcg_lit_int32(0);
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].nid_bg = kcg_lit_int32(0);
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[idx246].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L639.prvLRBG.missed = kcg_true;
  outC->_L639.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L639.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L639.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L639.linkingIsUsedOnboard = kcg_true;
  outC->_L639.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L639.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L639.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L632.valid = kcg_true;
  outC->_L632.targetSpeed = kcg_lit_int32(0);
  outC->_L632.permittedSpeed = kcg_lit_int32(0);
  outC->_L632.releaseSpeed = kcg_lit_int32(0);
  outC->_L632.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L632.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L632.interventionSpeed = kcg_lit_int32(0);
  outC->_L632.sup_status = CSM_DMI_Types_Pkg;
  outC->_L632.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L632.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L633.targetType = EoA_TargetManagement_types;
  outC->_L633.distance = kcg_lit_int32(0);
  outC->_L633.speed = kcg_lit_int32(0);
  outC->_L633.valid = kcg_true;
  outC->_L634.valid = kcg_true;
  outC->_L634.estimatedSpeed = kcg_lit_int32(0);
  outC->_L634.valid_v_est = kcg_true;
  outC->_L634.permittedSpeed = kcg_lit_int32(0);
  outC->_L634.valid_v_permitted = kcg_true;
  outC->_L634.releaseSpeed = kcg_lit_int32(0);
  outC->_L634.valid_v_release = kcg_true;
  outC->_L634.mrdtSpeed = kcg_lit_int32(0);
  outC->_L634.valid_v_mrdt = kcg_true;
  outC->_L634.sbiSpeed = kcg_lit_int32(0);
  outC->_L634.valid_v_sbi = kcg_true;
  outC->_L634.targetDistance = kcg_lit_int32(0);
  outC->_L634.valid_targetDistance = kcg_true;
  outC->_L634.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L634.sdmType = CSM_SDM_Types_Pkg;
  outC->_L634.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L634.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L634.revokedSB = kcg_true;
  outC->_L634.triggeredSB = kcg_true;
  outC->_L634.revokedEB = kcg_true;
  outC->_L634.triggeredEB = kcg_true;
  outC->_L634.revokedTCO = kcg_true;
  outC->_L634.triggeredTCO = kcg_true;
  outC->_L634.ebCmd = kcg_true;
  outC->_L635.valid = kcg_true;
  outC->_L635.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L635.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L636 = kcg_true;
  outC->_L637 = kcg_true;
  outC->_L624 = kcg_true;
  outC->_L601 = kcg_true;
  outC->_L600 = kcg_true;
  outC->_L578 = kcg_true;
  outC->_L568.DMI_Active = kcg_true;
  outC->_L568.DMI_Error = kcg_true;
  outC->_L568.DMI_DriverIdValidated = kcg_true;
  outC->_L568.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L568.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L568.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L568.DMI_TrainDataValidated = kcg_true;
  outC->_L568.DMI_StartReceived = kcg_true;
  outC->_L568.DMI_Identifier.valid = kcg_true;
  outC->_L568.DMI_Identifier.systemTime = kcg_lit_int32(0);
  outC->_L568.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L568.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L568.DMI_Identifier.l_name = kcg_lit_int32(0);
  for (idx247 = 0; idx247 < 255; idx247++) {
    outC->_L568.DMI_Identifier.DMI_name[idx247] = ' ';
  }
  outC->_L568.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L541.valid = kcg_true;
  outC->_L541.system_clock = kcg_lit_int32(0);
  outC->_L541.trainID.number = kcg_lit_int32(0);
  outC->_L541.trainID.dig1 = kcg_lit_int32(0);
  outC->_L541.trainID.dig2 = kcg_lit_int32(0);
  outC->_L541.trainID.dig3 = kcg_lit_int32(0);
  outC->_L541.trainID.dig4 = kcg_lit_int32(0);
  outC->_L541.trainID.dig5 = kcg_lit_int32(0);
  outC->_L541.trainLength.number = kcg_lit_int32(0);
  outC->_L541.trainLength.dig1 = kcg_lit_int32(0);
  outC->_L541.trainLength.dig2 = kcg_lit_int32(0);
  outC->_L541.trainLength.dig3 = kcg_lit_int32(0);
  outC->_L541.trainLength.dig4 = kcg_lit_int32(0);
  outC->_L541.brakeModel.number = kcg_lit_int32(0);
  outC->_L541.brakeModel.dig1 = kcg_lit_int32(0);
  outC->_L541.brakeModel.dig2 = kcg_lit_int32(0);
  outC->_L541.brakeModel.dig3 = kcg_lit_int32(0);
  outC->_L541.vmax.number = kcg_lit_int32(0);
  outC->_L541.vmax.dig1 = kcg_lit_int32(0);
  outC->_L541.vmax.dig2 = kcg_lit_int32(0);
  outC->_L541.vmax.dig3 = kcg_lit_int32(0);
  outC->_L541.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L541.airTightSystem.number = kcg_lit_int32(0);
  outC->_L541.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->_L541.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->_L541.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->_L541.mLoadingGauge.number = kcg_lit_int32(0);
  outC->_L541.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->_L541.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->_L541.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->_L538.valid = kcg_true;
  outC->_L538.timestamp = kcg_lit_int32(0);
  outC->_L538.trainPositionIsUnknown = kcg_true;
  outC->_L538.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L538.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L538.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L538.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L538.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L538.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L538.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L538.LRBG.valid = kcg_true;
  outC->_L538.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L538.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L538.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L538.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L538.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L538.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L538.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L538.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L538.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L538.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L538.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L538.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L538.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L538.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx248 = 0; idx248 < 33; idx248++) {
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].valid = kcg_true;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].nid_LRBG = kcg_lit_int32(0);
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].q_dir = Q_DIR_Reverse;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].d_link = kcg_lit_int32(0);
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].nid_c = kcg_lit_int32(0);
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].nid_bg = kcg_lit_int32(0);
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[idx248].q_locacc = kcg_lit_int32(0);
  }
  outC->_L538.LRBG.missed = kcg_true;
  outC->_L538.prvLRBG.valid = kcg_true;
  outC->_L538.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L538.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L538.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L538.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L538.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L538.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L538.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx249 = 0; idx249 < 33; idx249++) {
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].valid = kcg_true;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].q_dir = Q_DIR_Reverse;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].d_link = kcg_lit_int32(0);
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].nid_c = kcg_lit_int32(0);
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].nid_bg = kcg_lit_int32(0);
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[idx249].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L538.prvLRBG.missed = kcg_true;
  outC->_L538.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L538.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L538.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L538.linkingIsUsedOnboard = kcg_true;
  outC->_L538.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L538.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L538.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L523.DMI_Active = kcg_true;
  outC->_L523.DMI_Error = kcg_true;
  outC->_L523.DMI_DriverIdValidated = kcg_true;
  outC->_L523.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L523.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L523.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L523.DMI_TrainDataValidated = kcg_true;
  outC->_L523.DMI_StartReceived = kcg_true;
  outC->_L523.DMI_Identifier.valid = kcg_true;
  outC->_L523.DMI_Identifier.systemTime = kcg_lit_int32(0);
  outC->_L523.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L523.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L523.DMI_Identifier.l_name = kcg_lit_int32(0);
  for (idx250 = 0; idx250 < 255; idx250++) {
    outC->_L523.DMI_Identifier.DMI_name[idx250] = ' ';
  }
  outC->_L523.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L489.valid = kcg_true;
  outC->_L489.system_clock = kcg_lit_int32(0);
  outC->_L489.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L487.valid = kcg_true;
  outC->_L487.deskOpen = kcg_true;
  outC->_L487.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L487.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L484.registration.valid = kcg_true;
  outC->_L484.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L484.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L484.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L484.registration.nid_mn = kcg_lit_int32(0);
  outC->_L484.connection.valid = kcg_true;
  outC->_L484.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L484.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L484.connection.nid_radio = kcg_lit_int32(0);
  outC->_L484.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L484.connection.connectionLost = kcg_true;
  outC->_L484.connection.isInRadioHole = kcg_true;
  outC->_L484.session.valid = kcg_true;
  outC->_L484.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L484.session.nid_c = kcg_lit_int32(0);
  outC->_L484.session.nid_rbc = kcg_lit_int32(0);
  outC->_L484.session.nid_radio = kcg_lit_int32(0);
  outC->_L472.valid = kcg_true;
  outC->_L472.system_clock = kcg_lit_int32(0);
  outC->_L472.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L473.valid = kcg_true;
  outC->_L473.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L473.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L473.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L473.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L473.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L473.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L473.p42.valid = kcg_true;
  outC->_L473.p42.q_dir = Q_DIR_Reverse;
  outC->_L473.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L473.p42.nid_c = kcg_lit_int32(0);
  outC->_L473.p42.nid_rbc = kcg_lit_int32(0);
  outC->_L473.p42.nid_radio = kcg_lit_int32(0);
  outC->_L473.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L473.p45.valid = kcg_true;
  outC->_L473.p45.q_dir = Q_DIR_Reverse;
  outC->_L473.p45.nid_mn = kcg_lit_int32(0);
  outC->_L473.sendingRBC.valid = kcg_true;
  outC->_L473.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L473.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L473.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L474 = kcg_true;
  outC->_L475 = kcg_true;
  outC->_L476 = kcg_true;
  outC->_L478 = kcg_true;
  outC->_L327.valid = kcg_true;
  outC->_L327.cab_is_active = kcg_true;
  outC->_L327.system_clock = kcg_lit_int32(0);
  outC->_L325.valid = kcg_true;
  outC->_L325.system_clock = kcg_lit_int32(0);
  outC->_L325.nid_mn = kcg_lit_int32(0);
  outC->_L324.valid = kcg_true;
  outC->_L324.systemTime = kcg_lit_int32(0);
  for (idx251 = 0; idx251 < 9; idx251++) {
    outC->_L324.driverIdentifier[idx251] = ' ';
  }
  outC->_L322.valid = kcg_true;
  outC->_L322.systemTime = kcg_lit_int32(0);
  outC->_L322.trainRunningNumber = kcg_lit_int32(0);
  outC->_L320.valid = kcg_true;
  outC->_L320.systemTime = kcg_lit_int32(0);
  outC->_L320.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L318.valid = kcg_true;
  outC->_L318.deskOpen = kcg_true;
  outC->_L318.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L318.activeCab = CabUndefined_TIU_Types_Pkg;
  for (idx252 = 0; idx252 < 999; idx252++) {
    outC->_L171[idx252] = kcg_lit_int32(0);
  }
  outC->_L169.valid = kcg_true;
  outC->_L169.d_test_current.now = kcg_lit_int32(0);
  outC->_L169.d_test_current.distance = kcg_lit_int32(0);
  outC->_L169.m_current.no_restriction = kcg_true;
  outC->_L169.m_current.restriction = kcg_lit_int32(0);
  outC->_L168.valid = kcg_true;
  outC->_L168.door_control_info = kcg_lit_int32(0);
  outC->_L167.valid = kcg_true;
  outC->_L167.d_test_traction.now = kcg_lit_int32(0);
  outC->_L167.d_test_traction.distance = kcg_lit_int32(0);
  outC->_L167.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L167.m_voltage.NID_ctraction = kcg_lit_int32(0);
  outC->_L162.valid = kcg_true;
  outC->_L162.emergencyBrakeActive = kcg_true;
  outC->_L162.isolationStatus = kcg_true;
  outC->_L161.valid = kcg_true;
  outC->_L161.info.isolation_status.valid = kcg_true;
  outC->_L161.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L161.info.brake_command.valid = kcg_true;
  outC->_L161.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_inhibition.valid = kcg_true;
  outC->_L161.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.valid = kcg_true;
  outC->_L161.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.change_traction_system.valid = kcg_true;
  outC->_L161.info.change_traction_system.d_test_traction.now = kcg_lit_int32(0);
  outC->_L161.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int32(0);
  outC->_L161.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L161.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int32(0);
  outC->_L161.info.passenger_door_control_info.valid = kcg_true;
  outC->_L161.info.passenger_door_control_info.door_control_info =
    kcg_lit_int32(0);
  outC->_L161.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L161.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int32(0);
  outC->_L161.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int32(0);
  outC->_L161.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L161.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int32(0);
  outC->TIU_driverResponseEB = kcg_true;
  outC->probe_MsgErrors.linkedBGError = kcg_true;
  outC->probe_MsgErrors.unlinkedBGError = kcg_true;
  outC->probe_MsgErrors.BG_versionIncompatible = kcg_true;
  outC->probe_MsgErrors.radioSequenceError = kcg_true;
  outC->probe_MsgErrors.tNvContactError = kcg_true;
  outC->probe_MsgErrors.otherTimingError = kcg_true;
  outC->probe_MsgErrors.radioMessageConsistencyError = kcg_true;
  outC->probe_MsgErrors.nid_c = kcg_lit_int32(0);
  outC->probe_MsgErrors.nid_errorbg = kcg_lit_int32(0);
  outC->probe_PositioningErrors.outOfMemSpace = kcg_true;
  outC->probe_PositioningErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->probe_PositioningErrors.positionCalculation_inconsistent = kcg_true;
  outC->probe_PositioningErrors.linkedBGMissed = kcg_true;
  outC->probe_PositioningErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->probe_PositioningErrors.BG_LinkingConsistencyError = kcg_true;
  outC->probe_PositioningErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->probe_PositioningErrors.doubleRepositioningError = kcg_true;
  outC->probe_PositioningErrors.bg.valid = kcg_true;
  outC->probe_PositioningErrors.bg.nid_c = kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.q_link = Q_LINK_Unlinked;
  outC->probe_PositioningErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->probe_PositioningErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx253 = 0; idx253 < 33; idx253++) {
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].valid =
      kcg_true;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].nid_LRBG =
      kcg_lit_int32(0);
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].q_dir =
      Q_DIR_Reverse;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].q_scale =
      Q_SCALE_10_cm_scale;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].d_link =
      kcg_lit_int32(0);
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].nid_c =
      kcg_lit_int32(0);
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].nid_bg =
      kcg_lit_int32(0);
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[idx253].q_locacc =
      kcg_lit_int32(0);
  }
  outC->probe_PositioningErrors.bg.missed = kcg_true;
  outC->MoRC_HO_EventsAndPhases.atPowerUp = kcg_true;
  outC->MoRC_HO_EventsAndPhases.atPowerDown = kcg_true;
  outC->MoRC_HO_EventsAndPhases.atStartOfMission = kcg_true;
  outC->MoRC_HO_EventsAndPhases.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->MoRC_HO_EventsAndPhases.driverHasManuallyChangedLevel_to_2_or_3 =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontPassesStartOfAnnouncedRadioHole =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->MoRC_HO_EventsAndPhases.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->MoRC_HO_EventsAndPhases.endOfMissionIsExecuted = kcg_true;
  outC->MoRC_HO_EventsAndPhases.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.errorConditionRequiringTerminationDetected =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainExitedFromAnRBCArea = kcg_true;
  outC->MoRC_HO_EventsAndPhases.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->MoRC_HO_EventsAndPhases.level_1_isLeft = kcg_true;
  outC->MoRC_RadioStatus_2.registration.valid = kcg_true;
  outC->MoRC_RadioStatus_2.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->MoRC_RadioStatus_2.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_2.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_2.registration.nid_mn = kcg_lit_int32(0);
  outC->MoRC_RadioStatus_2.connection.valid = kcg_true;
  outC->MoRC_RadioStatus_2.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->MoRC_RadioStatus_2.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_2.connection.nid_radio = kcg_lit_int32(0);
  outC->MoRC_RadioStatus_2.connection.settingUpConnectionHasFailed = kcg_true;
  outC->MoRC_RadioStatus_2.connection.connectionLost = kcg_true;
  outC->MoRC_RadioStatus_2.connection.isInRadioHole = kcg_true;
  outC->MoRC_RadioStatus_2.session.valid = kcg_true;
  outC->MoRC_RadioStatus_2.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->MoRC_RadioStatus_2.session.nid_c = kcg_lit_int32(0);
  outC->MoRC_RadioStatus_2.session.nid_rbc = kcg_lit_int32(0);
  outC->MoRC_RadioStatus_2.session.nid_radio = kcg_lit_int32(0);
  outC->MoRC_safeRadioConnectionStatus_toDriver.valid = kcg_true;
  outC->MoRC_safeRadioConnectionStatus_toDriver.indicator =
    srci_noConnection_RCM_Session_Types_Pkg;
  outC->probe_lastBG_ID = kcg_lit_int32(0);
  outC->probe_lastMSG_in = kcg_lit_int32(0);
  outC->probe_BG_ID = kcg_lit_int32(0);
  outC->probe_MSG_in = kcg_lit_int32(0);
  outC->probe_newInput = kcg_true;
  outC->probe_nid_packet1 = kcg_lit_int32(0);
  outC->probe_nid_packet2 = kcg_lit_int32(0);
  outC->probe_TTrain = kcg_lit_int32(0);
  outC->probe_MSGout = kcg_lit_int32(0);
  outC->probe_Msg_5 = kcg_lit_int32(0);
  outC->probe_Msg_4 = kcg_lit_int32(0);
  outC->probe_Msg_3 = kcg_lit_int32(0);
  outC->probe_Msg_2 = kcg_lit_int32(0);
  outC->probe_Msg_1 = kcg_lit_int32(0);
  for (idx255 = 0; idx255 < 5; idx255++) {
    outC->TM_to_MsgOut[idx255].Message.valid = kcg_true;
    outC->TM_to_MsgOut[idx255].Message.nid_message = kcg_lit_int32(0);
    outC->TM_to_MsgOut[idx255].Message.l_message = kcg_lit_int32(0);
    outC->TM_to_MsgOut[idx255].Message.t_train = kcg_lit_int32(0);
    outC->TM_to_MsgOut[idx255].Message.nid_engine = kcg_lit_int32(0);
    outC->TM_to_MsgOut[idx255].Message.field1 = kcg_lit_int32(0);
    outC->TM_to_MsgOut[idx255].Message.field2 = kcg_lit_int32(0);
    outC->TM_to_MsgOut[idx255].Message.field3 = kcg_lit_int32(0);
    for (idx254 = 0; idx254 < 50; idx254++) {
      outC->TM_to_MsgOut[idx255].OptionalPackets[idx254] = kcg_lit_int32(0);
    }
  }
  outC->MoRC_P3ng.valid = kcg_true;
  outC->MoRC_P3ng.nid_packet = kcg_lit_int32(0);
  outC->MoRC_P3ng.l_packet = kcg_lit_int32(0);
  outC->MoRC_P3ng.n_iter = kcg_lit_int32(0);
  for (idx256 = 0; idx256 < 5; idx256++) {
    outC->MoRC_P3ng.nid_radio[idx256] = kcg_lit_int32(0);
  }
  for (idx258 = 0; idx258 < 5; idx258++) {
    outC->TA_bus2RTM[idx258].Message.valid = kcg_true;
    outC->TA_bus2RTM[idx258].Message.nid_message = kcg_lit_int32(0);
    outC->TA_bus2RTM[idx258].Message.l_message = kcg_lit_int32(0);
    outC->TA_bus2RTM[idx258].Message.t_train = kcg_lit_int32(0);
    outC->TA_bus2RTM[idx258].Message.nid_engine = kcg_lit_int32(0);
    outC->TA_bus2RTM[idx258].Message.field1 = kcg_lit_int32(0);
    outC->TA_bus2RTM[idx258].Message.field2 = kcg_lit_int32(0);
    outC->TA_bus2RTM[idx258].Message.field3 = kcg_lit_int32(0);
    for (idx257 = 0; idx257 < 50; idx257++) {
      outC->TA_bus2RTM[idx258].OptionalPackets[idx257] = kcg_lit_int32(0);
    }
  }
  for (idx260 = 0; idx260 < 5; idx260++) {
    outC->td_out2Radio[idx260].Message.valid = kcg_true;
    outC->td_out2Radio[idx260].Message.nid_message = kcg_lit_int32(0);
    outC->td_out2Radio[idx260].Message.l_message = kcg_lit_int32(0);
    outC->td_out2Radio[idx260].Message.t_train = kcg_lit_int32(0);
    outC->td_out2Radio[idx260].Message.nid_engine = kcg_lit_int32(0);
    outC->td_out2Radio[idx260].Message.field1 = kcg_lit_int32(0);
    outC->td_out2Radio[idx260].Message.field2 = kcg_lit_int32(0);
    outC->td_out2Radio[idx260].Message.field3 = kcg_lit_int32(0);
    for (idx259 = 0; idx259 < 50; idx259++) {
      outC->td_out2Radio[idx260].OptionalPackets[idx259] = kcg_lit_int32(0);
    }
  }
  outC->ML_AnnouncedLevelTransitions.LevelTransition.is_set = kcg_true;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.level =
    M_LEVEL_Level_0;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.position =
    kcg_lit_int32(0);
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.immediateAck =
    kcg_true;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.AckLength =
    kcg_lit_int32(0);
  outC->ML_AnnouncedLevelTransitions.LevelTransition.LRBG = kcg_lit_int32(0);
  outC->ML_AnnouncedLevelTransitions.LevelTransition.referenceLocation =
    kcg_lit_int32(0);
  outC->ML_AnnouncedLevelTransitions.IsAvailableForUse = kcg_true;
  outC->probe_BG_afterCheck = kcg_lit_int32(0);
  outC->probe_LRBG = kcg_lit_int32(0);
  outC->probe_MSGinAfterFilter = kcg_lit_int32(0);
  outC->probe_distBG = kcg_lit_float32(0.0);
  outC->probe_distMsg = kcg_lit_float32(0.0);
  outC->probe_Balises.isChanged = kcg_true;
  outC->probe_Balises.bg_id = kcg_lit_int32(0);
  outC->probe_Balises.nid_c = kcg_lit_int32(0);
  outC->probe_Balises.errors.linkedBGError = kcg_true;
  outC->probe_Balises.errors.unlinkedBGError = kcg_true;
  outC->probe_Balises.errors.BG_versionIncompatible = kcg_true;
  outC->probe_Balises.errors.radioSequenceError = kcg_true;
  outC->probe_Balises.errors.tNvContactError = kcg_true;
  outC->probe_Balises.errors.otherTimingError = kcg_true;
  outC->probe_Balises.errors.radioMessageConsistencyError = kcg_true;
  outC->probe_Balises.errors.nid_c = kcg_lit_int32(0);
  outC->probe_Balises.errors.nid_errorbg = kcg_lit_int32(0);
  outC->probe_Odometry.valid = kcg_true;
  outC->probe_Odometry.timestamp = kcg_lit_int32(0);
  outC->probe_Odometry.odo.o_nominal = kcg_lit_int32(0);
  outC->probe_Odometry.odo.o_min = kcg_lit_int32(0);
  outC->probe_Odometry.odo.o_max = kcg_lit_int32(0);
  outC->probe_Odometry.speed.v_safeNominal = kcg_lit_int32(0);
  outC->probe_Odometry.speed.v_rawNominal = kcg_lit_int32(0);
  outC->probe_Odometry.speed.v_lower = kcg_lit_int32(0);
  outC->probe_Odometry.speed.v_upper = kcg_lit_int32(0);
  outC->probe_Odometry.acceleration = kcg_lit_int32(0);
  outC->probe_Odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->probe_Odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->TA_tripTrain = kcg_true;
  outC->TA_ces_revoked = kcg_true;
  outC->TA_ces_accepted = kcg_true;
  outC->MSG_toML.P12_received = kcg_true;
  outC->MSG_toML.P15_received = kcg_true;
  outC->MSG_toML.P21_received = kcg_true;
  outC->MSG_toML.P27_received = kcg_true;
  outC->TA_fromDriver.trackAheadFree = kcg_true;
  outC->TA_fromDriver.driverSelectsStart = kcg_true;
  for (idx261 = 0; idx261 < 5; idx261++) {
    outC->TA_forModeLevel.train_packets.P_12[idx261].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_12[idx261].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_12[idx261].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_12[idx261].v_main = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].v_loa = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].t_loa = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].l_section = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_12[idx261].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].l_endsection =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_12[idx261].t_sectiontimer =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->TA_forModeLevel.train_packets.P_12[idx261].t_endtimer = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->TA_forModeLevel.train_packets.P_12[idx261].d_dp = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].v_releasedp = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->TA_forModeLevel.train_packets.P_12[idx261].d_startol = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].t_ol = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].d_ol = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_12[idx261].v_releaseol = kcg_lit_int32(0);
  }
  outC->TA_forModeLevel.train_packets.P_135.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_137.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->TA_forModeLevel.train_packets.P_138.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_forModeLevel.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->TA_forModeLevel.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->TA_forModeLevel.train_packets.P_139.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_forModeLevel.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->TA_forModeLevel.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx262 = 0; idx262 < 5; idx262++) {
    outC->TA_forModeLevel.train_packets.P_15[idx262].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_15[idx262].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_15[idx262].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_15[idx262].v_loa = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].t_loa = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].l_section = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_15[idx262].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].l_endsection =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_15[idx262].t_sectiontimer =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->TA_forModeLevel.train_packets.P_15[idx262].t_endtimer = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->TA_forModeLevel.train_packets.P_15[idx262].d_dp = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].v_releasedp = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->TA_forModeLevel.train_packets.P_15[idx262].d_startol = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].t_ol = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].d_ol = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_15[idx262].v_releaseol = kcg_lit_int32(0);
  }
  for (idx263 = 0; idx263 < 7; idx263++) {
    outC->TA_forModeLevel.train_packets.P_21[idx263].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_21[idx263].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_21[idx263].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_21[idx263].d_gradient = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_21[idx263].q_gdir = Q_GDIR_downhill;
    outC->TA_forModeLevel.train_packets.P_21[idx263].g_a = kcg_lit_int32(0);
  }
  outC->TA_forModeLevel.train_packets.P_27.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_forModeLevel.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->TA_forModeLevel.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->TA_forModeLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx264 = 0; idx264 < 7; idx264++) {
    outC->TA_forModeLevel.train_packets.P_27.diffArray[idx264].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_27.diffArray[idx264].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->TA_forModeLevel.train_packets.P_27.diffArray[idx264].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->TA_forModeLevel.train_packets.P_27.diffArray[idx264].nc_diff =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_27.diffArray[idx264].v_diff =
      kcg_lit_int32(0);
  }
  for (idx266 = 0; idx266 < 7; idx266++) {
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].d_static =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].v_static =
      kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx265 = 0; idx265 < 7; idx265++) {
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].diffArray[idx265].valid =
        kcg_true;
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].diffArray[idx265].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].diffArray[idx265].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].diffArray[idx265].nc_diff =
        kcg_lit_int32(0);
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[idx266].diffArray[idx265].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx267 = 0; idx267 < 7; idx267++) {
    outC->TA_forModeLevel.train_packets.P_41[idx267].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_41[idx267].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_41[idx267].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_41[idx267].d_leveltr = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_41[idx267].m_leveltr = M_LEVELTR_Level_0;
    outC->TA_forModeLevel.train_packets.P_41[idx267].nid_ntc = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_41[idx267].l_ackleveltr =
      kcg_lit_int32(0);
  }
  for (idx268 = 0; idx268 < 7; idx268++) {
    outC->TA_forModeLevel.train_packets.P_46[idx268].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_46[idx268].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_46[idx268].m_leveltr = M_LEVELTR_Level_0;
    outC->TA_forModeLevel.train_packets.P_46[idx268].nid_ntc = kcg_lit_int32(0);
  }
  for (idx269 = 0; idx269 < 7; idx269++) {
    outC->TA_forModeLevel.train_packets.P_63[idx269].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_63[idx269].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_63[idx269].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->TA_forModeLevel.train_packets.P_63[idx269].nid_c = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_63[idx269].nid_bg = kcg_lit_int32(0);
  }
  for (idx270 = 0; idx270 < 3; idx270++) {
    outC->TA_forModeLevel.train_packets.P_80[idx270].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_80[idx270].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_80[idx270].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_80[idx270].d_mamode = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_80[idx270].m_mamode = M_MAMODE_On_Sight;
    outC->TA_forModeLevel.train_packets.P_80[idx270].v_mamode = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_80[idx270].l_mamode = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_80[idx270].l_ackmamode = kcg_lit_int32(0);
    outC->TA_forModeLevel.train_packets.P_80[idx270].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->TA_forModeLevel.train_packets.LRBG = kcg_lit_int32(0);
  outC->TA_forModeLevel.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->TA_forModeLevel.train_messages.Mess_15 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_16 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_2 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_27 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_28 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_6 = kcg_true;
  outC->TA_forModeLevel.p12 = kcg_true;
  outC->TA_forModeLevel.p15 = kcg_true;
  outC->TA_forModeLevel.p21 = kcg_true;
  outC->TA_forModeLevel.p27 = kcg_true;
  outC->EVC_t_Train = kcg_lit_int32(0);
  outC->TA_MA_onboard.valid = kcg_true;
  outC->TA_MA_onboard.Level = MA_L1_TrackAtlasTypes;
  outC->TA_MA_onboard.q_dir = Q_DIR_Reverse;
  outC->TA_MA_onboard.v_main = kcg_lit_int32(0);
  outC->TA_MA_onboard.v_loa = kcg_lit_int32(0);
  outC->TA_MA_onboard.t_loa_unlimited = kcg_true;
  outC->TA_MA_onboard.t_loa = kcg_lit_int32(0);
  outC->TA_MA_onboard.n_iter = kcg_lit_int32(0);
  for (idx271 = 0; idx271 < 10; idx271++) {
    outC->TA_MA_onboard.sections[idx271].valid = kcg_true;
    outC->TA_MA_onboard.sections[idx271].q_endsection = kcg_true;
    outC->TA_MA_onboard.sections[idx271].l_section = kcg_lit_int32(0);
    outC->TA_MA_onboard.sections[idx271].q_sectiontimer = kcg_true;
    outC->TA_MA_onboard.sections[idx271].t_sectiontimer = kcg_lit_int32(0);
    outC->TA_MA_onboard.sections[idx271].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->TA_MA_onboard.q_dangerpoint = kcg_true;
  outC->TA_MA_onboard.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->TA_MA_onboard.dangerpoint.v_release = kcg_lit_int32(0);
  outC->TA_MA_onboard.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->TA_MA_onboard.q_overlap = kcg_true;
  outC->TA_MA_onboard.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->TA_MA_onboard.overlap.v_release = kcg_lit_int32(0);
  outC->TA_MA_onboard.overlap.calc_v_release_onboard = kcg_true;
  outC->TA_MA_onboard.q_endtimer = kcg_true;
  outC->TA_MA_onboard.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->TA_MA_onboard.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->TA_forSupervision.freshMA = kcg_true;
  outC->TA_forSupervision.MA.valid = kcg_true;
  outC->TA_forSupervision.MA.Level = MA_L1_TrackAtlasTypes;
  outC->TA_forSupervision.MA.q_dir = Q_DIR_Reverse;
  outC->TA_forSupervision.MA.v_main = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.v_loa = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.t_loa_unlimited = kcg_true;
  outC->TA_forSupervision.MA.t_loa = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.n_iter = kcg_lit_int32(0);
  for (idx272 = 0; idx272 < 10; idx272++) {
    outC->TA_forSupervision.MA.sections[idx272].valid = kcg_true;
    outC->TA_forSupervision.MA.sections[idx272].q_endsection = kcg_true;
    outC->TA_forSupervision.MA.sections[idx272].l_section = kcg_lit_int32(0);
    outC->TA_forSupervision.MA.sections[idx272].q_sectiontimer = kcg_true;
    outC->TA_forSupervision.MA.sections[idx272].t_sectiontimer = kcg_lit_int32(0);
    outC->TA_forSupervision.MA.sections[idx272].d_sectiontimerstoploc =
      kcg_lit_int32(0);
  }
  outC->TA_forSupervision.MA.q_dangerpoint = kcg_true;
  outC->TA_forSupervision.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->TA_forSupervision.MA.q_overlap = kcg_true;
  outC->TA_forSupervision.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.overlap.v_release = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->TA_forSupervision.MA.q_endtimer = kcg_true;
  outC->TA_forSupervision.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->TA_forSupervision.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->TA_forSupervision.freshGradientProfile = kcg_true;
  for (idx273 = 0; idx273 < 50; idx273++) {
    outC->TA_forSupervision.GradientProfile[idx273].valid = kcg_true;
    outC->TA_forSupervision.GradientProfile[idx273].Loc_Absolute = kcg_lit_int32(0);
    outC->TA_forSupervision.GradientProfile[idx273].Loc_LRBG = kcg_lit_int32(0);
    outC->TA_forSupervision.GradientProfile[idx273].Gradient = kcg_lit_int32(0);
    outC->TA_forSupervision.GradientProfile[idx273].L_Gradient = kcg_lit_int32(0);
  }
  outC->TA_forSupervision.freshMRSP = kcg_true;
  for (idx274 = 0; idx274 < 110; idx274++) {
    outC->TA_forSupervision.MRSP[idx274].valid = kcg_true;
    outC->TA_forSupervision.MRSP[idx274].Loc_Abs = kcg_lit_int32(0);
    outC->TA_forSupervision.MRSP[idx274].Loc_LRBG = kcg_lit_int32(0);
    outC->TA_forSupervision.MRSP[idx274].MRS = kcg_lit_int32(0);
  }
  for (idx275 = 0; idx275 < 50; idx275++) {
    outC->TA_toDMI.GradientProfile[idx275].valid = kcg_true;
    outC->TA_toDMI.GradientProfile[idx275].begin_section = kcg_lit_int32(0);
    outC->TA_toDMI.GradientProfile[idx275].end_section = kcg_lit_int32(0);
    outC->TA_toDMI.GradientProfile[idx275].gradient = kcg_lit_int32(0);
  }
  outC->TA_toDMI.Gradient_profile_updated = kcg_true;
  for (idx276 = 0; idx276 < 110; idx276++) {
    outC->TA_toDMI.MRSP[idx276].valid = kcg_true;
    outC->TA_toDMI.MRSP[idx276].Loc_Abs = kcg_lit_int32(0);
    outC->TA_toDMI.MRSP[idx276].Loc_LRBG = kcg_lit_int32(0);
    outC->TA_toDMI.MRSP[idx276].MRS = kcg_lit_int32(0);
  }
  outC->TA_toDMI.MRSP_updated = kcg_true;
  outC->TA_nationalValues.valid = kcg_true;
  outC->TA_nationalValues.nid_packet = kcg_lit_int32(0);
  outC->TA_nationalValues.q_dir = Q_DIR_Reverse;
  outC->TA_nationalValues.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_nationalValues.d_validnv = kcg_lit_int32(0);
  outC->TA_nationalValues.nid_c = kcg_lit_int32(0);
  outC->TA_nationalValues.n_iter_nid_c = kcg_lit_int32(0);
  for (idx277 = 0; idx277 < 32; idx277++) {
    outC->TA_nationalValues.nid_c_list[idx277].valid = kcg_true;
    outC->TA_nationalValues.nid_c_list[idx277].nid_c = kcg_lit_int32(0);
  }
  outC->TA_nationalValues.v_nvshunt = kcg_lit_int32(0);
  outC->TA_nationalValues.v_nvstff = kcg_lit_int32(0);
  outC->TA_nationalValues.v_nvonsight = kcg_lit_int32(0);
  outC->TA_nationalValues.v_nvlimsuperv = kcg_lit_int32(0);
  outC->TA_nationalValues.v_nvunfit = kcg_lit_int32(0);
  outC->TA_nationalValues.v_nvrel = kcg_lit_int32(0);
  outC->TA_nationalValues.d_nvroll = kcg_lit_int32(0);
  outC->TA_nationalValues.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->TA_nationalValues.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->TA_nationalValues.q_nvguiperm = Q_NVGUIPERM_No;
  outC->TA_nationalValues.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->TA_nationalValues.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->TA_nationalValues.v_nvallowovtrp = kcg_lit_int32(0);
  outC->TA_nationalValues.v_nvsupovtrp = kcg_lit_int32(0);
  outC->TA_nationalValues.d_nvovtrp = kcg_lit_int32(0);
  outC->TA_nationalValues.t_nvovtrp = kcg_lit_int32(0);
  outC->TA_nationalValues.d_nvpotrp = kcg_lit_int32(0);
  outC->TA_nationalValues.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->TA_nationalValues.t_nvcontact = kcg_lit_int32(0);
  outC->TA_nationalValues.m_nvderun = M_NVDERUN_No;
  outC->TA_nationalValues.d_nvstff = kcg_lit_int32(0);
  outC->TA_nationalValues.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->TA_nationalValues.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->TA_nationalValues.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->TA_nationalValues.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->TA_nationalValues.q_nvlocacc = kcg_lit_int32(0);
  outC->TA_nationalValues.m_nvavadh = kcg_lit_float32(0.0);
  outC->TA_nationalValues.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->TA_nationalValues.q_nvkint =
    Q_NVKINT_No_integrated_correction_factors_follow;
  outC->TA_nationalValues.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->TA_nationalValues.a_nvp12 = kcg_lit_float32(0.0);
  outC->TA_nationalValues.a_nvp23 = kcg_lit_float32(0.0);
  outC->TA_nationalValues.v_nvkvint = kcg_lit_int32(0);
  outC->TA_nationalValues.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->TA_nationalValues.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->TA_nationalValues.n_iter_n = kcg_lit_int32(0);
  for (idx278 = 0; idx278 < 32; idx278++) {
    outC->TA_nationalValues.n_iter_n_list[idx278].valid = kcg_true;
    outC->TA_nationalValues.n_iter_n_list[idx278].v_nvkvint_n = kcg_lit_int32(0);
    outC->TA_nationalValues.n_iter_n_list[idx278].m_nvkvint_n_12 =
      kcg_lit_float32(0.0);
    outC->TA_nationalValues.n_iter_n_list[idx278].m_nvkvint_n_23 =
      kcg_lit_float32(0.0);
  }
  outC->TA_nationalValues.n_iter_k = kcg_lit_int32(0);
  for (idx280 = 0; idx280 < 32; idx280++) {
    outC->TA_nationalValues.n_iter_k_list[idx280].valid = kcg_true;
    outC->TA_nationalValues.n_iter_k_list[idx280].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->TA_nationalValues.n_iter_k_list[idx280].a_nvp12_k = kcg_lit_float32(0.0);
    outC->TA_nationalValues.n_iter_k_list[idx280].a_nvp23_k = kcg_lit_float32(0.0);
    outC->TA_nationalValues.n_iter_k_list[idx280].v_nvkvint_k = kcg_lit_int32(0);
    outC->TA_nationalValues.n_iter_k_list[idx280].m_nvkvint_k_12 =
      kcg_lit_float32(0.0);
    outC->TA_nationalValues.n_iter_k_list[idx280].m_nvkvint_k_23 =
      kcg_lit_float32(0.0);
    outC->TA_nationalValues.n_iter_k_list[idx280].n_iter_k_m = kcg_lit_int32(0);
    for (idx279 = 0; idx279 < 32; idx279++) {
      outC->TA_nationalValues.n_iter_k_list[idx280].n_iter_k_m_list[idx279].valid =
        kcg_true;
      outC->TA_nationalValues.n_iter_k_list[idx280].n_iter_k_m_list[idx279].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->TA_nationalValues.n_iter_k_list[idx280].n_iter_k_m_list[idx279].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->TA_nationalValues.n_iter_k_list[idx280].n_iter_k_m_list[idx279].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->TA_nationalValues.l_nvkrint = L_NVKRINT_0m;
  outC->TA_nationalValues.m_nvkrint = kcg_lit_float32(0.0);
  outC->TA_nationalValues.n_iter_l = kcg_lit_int32(0);
  for (idx281 = 0; idx281 < 32; idx281++) {
    outC->TA_nationalValues.n_iter_l_list[idx281].valid = kcg_true;
    outC->TA_nationalValues.n_iter_l_list[idx281].l_nvkrint_l = L_NVKRINT_0m;
    outC->TA_nationalValues.n_iter_l_list[idx281].m_nvkrint_l = kcg_lit_float32(
        0.0);
  }
  outC->TA_nationalValues.m_nvktint = kcg_lit_float32(0.0);
  outC->EVC_cabIsOpen = kcg_true;
  outC->DMI_TrainDataAck.valid = kcg_true;
  outC->DMI_TrainDataAck.systemTime = kcg_lit_int32(0);
  outC->DMI_TrainDataAck.acknowledged = kcg_true;
  outC->td_trigger.brakeTrigger = kcg_true;
  outC->td_trigger.driverRequestModify = kcg_true;
  outC->td_trigger.shortenLocationBasedInformation = kcg_true;
  outC->td_trigger.deleteMA = kcg_true;
  outC->td_trigger.trainLengthIncreased = kcg_true;
  outC->EVC_nidEngine = kcg_lit_int32(0);
  outC->MSG_MACoverNotFullLength = kcg_true;
  outC->DMI_driverRequest.valid = kcg_true;
  outC->DMI_driverRequest.systemTime = kcg_lit_int32(0);
  outC->DMI_driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->MSG_badBGPassedtoDMI = kcg_true;
  for (idx282 = 0; idx282 < 31; idx282++) {
    outC->transport_TextMessageStatusList[idx282].valid = kcg_true;
    outC->transport_TextMessageStatusList[idx282].dmi_textMessageID =
      kcg_lit_int32(0);
    outC->transport_TextMessageStatusList[idx282].timeStamp = kcg_lit_int32(0);
    outC->transport_TextMessageStatusList[idx282].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->transport_TextMessageStatusList[idx282].context =
      con_undefined_DMI_Types_Pkg;
    outC->transport_TextMessageStatusList[idx282].nid_textmessage =
      kcg_lit_int32(0);
    outC->transport_TextMessageStatusList[idx282].whichLevel = M_LEVEL_Level_0;
    outC->transport_TextMessageStatusList[idx282].whichMode =
      M_MODE_Full_Supervision;
  }
  outC->MSG_BGcheck_applySB = kcg_true;
  outC->EVC_ownVersion =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->DMI_updateLevels = kcg_true;
  outC->ML_ERTMS_capabiities.NTC = kcg_true;
  outC->ML_ERTMS_capabiities.L0 = kcg_true;
  outC->ML_ERTMS_capabiities.L1 = kcg_true;
  outC->ML_ERTMS_capabiities.L2 = kcg_true;
  outC->ML_ERTMS_capabiities.L3 = kcg_true;
  outC->ML_driverLevelTransition.is_set = kcg_true;
  outC->ML_driverLevelTransition.transition.level = M_LEVEL_Level_0;
  outC->ML_driverLevelTransition.transition.position = kcg_lit_int32(0);
  outC->ML_driverLevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_driverLevelTransition.transition.immediateAck = kcg_true;
  outC->ML_driverLevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->ML_driverLevelTransition.LRBG = kcg_lit_int32(0);
  outC->ML_driverLevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->EVC_SystemFault = kcg_true;
  outC->SMD_DataForML.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->SMD_DataForML.Estim_Front_End_Rear_SSP = kcg_true;
  outC->SMD_DataForML.Override_Function_Active = kcg_true;
  outC->SMD_DataForML.EOA_Antenna_Overpass = kcg_true;
  outC->SMD_DataForML.EOA_Front_End = kcg_true;
  outC->SMD_DataForML.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->TIU_InputMessage.train_status.valid = kcg_true;
  outC->TIU_InputMessage.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.valid = kcg_true;
  outC->TIU_InputMessage.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_pressure.valid = kcg_true;
  outC->TIU_InputMessage.brake_pressure.pressure = kcg_lit_int32(0);
  outC->TIU_InputMessage.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_data_info.valid = kcg_true;
  outC->TIU_InputMessage.train_data_info.acknowledgedByDriver = kcg_true;
  outC->TIU_InputMessage.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->TIU_InputMessage.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->TIU_InputMessage.train_data_info.trainLength = kcg_lit_int32(0);
  outC->TIU_InputMessage.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->TIU_InputMessage.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->TIU_InputMessage.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->TIU_InputMessage.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->TIU_InputMessage.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->TIU_InputMessage.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->TIU_InputMessage.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx283 = 0; idx283 < 5; idx283++) {
    outC->TIU_InputMessage.train_data_info.nationSystems[idx283] = kcg_lit_int32(0);
  }
  outC->TIU_InputMessage.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx284 = 0; idx284 < 4; idx284++) {
    outC->TIU_InputMessage.train_data_info.tractionSystem[idx284].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->TIU_InputMessage.train_data_info.tractionSystem[idx284].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->MSG_pendingNTCTransition = kcg_true;
  outC->MSG_lastAckTextMsgId = kcg_lit_int32(0);
  outC->ML_EB_Request = kcg_true;
  outC->ML_ServiceBrakeCmd = kcg_true;
  outC->ML_dataToBG_Management.EoM_Procedure_req = kcg_true;
  outC->ML_dataToBG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->ML_dataToBG_Management.MA_Req = kcg_true;
  outC->ML_dataToBG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->ML_dataToBG_Management.Connection_to_RBC_req = kcg_true;
  outC->ML_dataToBG_Management.Position_Repport_Needed = kcg_true;
  outC->ML_DataFromLocalisation.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->ML_DataFromLocalisation.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.outOfMemSpace = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.positionCalculation_inconsistent =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.linkedBGMissed = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.BG_LinkingConsistencyError =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.doubleRepositioningError =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.valid = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.PositionErrors.bg.location.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.location.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.location.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx285 = 0; idx285 < 33; idx285++) {
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].valid =
      kcg_true;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].nid_LRBG =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].q_dir =
      Q_DIR_Reverse;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].q_scale =
      Q_SCALE_10_cm_scale;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].d_link =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].nid_c =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].nid_bg =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[idx285].q_locacc =
      kcg_lit_int32(0);
  }
  outC->ML_DataFromLocalisation.PositionErrors.bg.missed = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.valid = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.timestamp = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.trainPosition.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.trainPosition.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.trainPosition.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.estimatedFrontEndPosition =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.minSafeFrontEndPosition =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.maxSafeFrontEndPostion =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.valid = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.location.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.location.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.location.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx286 = 0; idx286 < 33; idx286++) {
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].valid =
      kcg_true;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].nid_LRBG =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].q_dir =
      Q_DIR_Reverse;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].q_scale =
      Q_SCALE_10_cm_scale;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].d_link =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].nid_c =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].nid_bg =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[idx286].q_locacc =
      kcg_lit_int32(0);
  }
  outC->ML_DataFromLocalisation.Train_Position.LRBG.missed = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.valid = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.location.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.location.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.location.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx287 = 0; idx287 < 33; idx287++) {
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].valid =
      kcg_true;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].nid_LRBG =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].q_dir =
      Q_DIR_Reverse;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].q_scale =
      Q_SCALE_10_cm_scale;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].d_link =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].nid_c =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].nid_bg =
      kcg_lit_int32(0);
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx287].q_locacc =
      kcg_lit_int32(0);
  }
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.missed = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.nominalOrReverseToLRBG =
    Q_DLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.trainOrientationToLRBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.trainRunningDirectionToLRBG =
    Q_DIRTRAIN_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.estimatedRearEndPosition =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.minSafeRearEndPosition =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Position.maxSafeRearEndPosition =
    kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Speed = kcg_lit_int32(0);
  outC->ML_DataFromLocalisation.Train_Standstill = kcg_true;
  outC->ML_AckToDMI.valid = kcg_true;
  outC->ML_AckToDMI.whichMode = M_MODE_Full_Supervision;
  outC->ML_AckToDMI.SH_Req_RefusedByRBC = kcg_true;
  outC->ML_AckToDMI.LevelNeedsAck = kcg_true;
  outC->DMI_DMItoModes.valid = kcg_true;
  outC->DMI_DMItoModes.DriverAck.valid = kcg_true;
  outC->DMI_DMItoModes.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->DMI_DMItoModes.DriverAck.acknowledgement = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.valid = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_Exit_SH = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_NL = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_Override = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_SH = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_Start = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.ETCS_Isolated = kcg_true;
  outC->DMI_DMItoModes.LevelAck = kcg_true;
  outC->DMI_trainRunningNumber.valid = kcg_true;
  outC->DMI_trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->DMI_trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->DMI_MA.valid = kcg_true;
  outC->DMI_MA.location_LOA = kcg_lit_int32(0);
  outC->DMI_MA.v_LOA = kcg_lit_int32(0);
  outC->DMI_NV.valid = kcg_true;
  outC->DMI_NV.nid_c = kcg_lit_int32(0);
  outC->DMI_NV.nid_c_valid = kcg_true;
  for (idx288 = 0; idx288 < 110; idx288++) {
    outC->MRSP_profile[idx288].valid = kcg_true;
    outC->MRSP_profile[idx288].Loc_Abs = kcg_lit_int32(0);
    outC->MRSP_profile[idx288].Loc_LRBG = kcg_lit_int32(0);
    outC->MRSP_profile[idx288].MRS = kcg_lit_int32(0);
  }
  outC->REP_safetyCriticalFailure = kcg_true;
  outC->REP_Train2TrackStatus.nid_ntc = kcg_lit_int32(0);
  outC->REP_Train2TrackStatus.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->REP_trackinfo.minSafeRearEndPassed = kcg_true;
  outC->REP_trackinfo.maxSafeFrontEndPassed = kcg_true;
  outC->MSG_errors.linkedBGError = kcg_true;
  outC->MSG_errors.unlinkedBGError = kcg_true;
  outC->MSG_errors.BG_versionIncompatible = kcg_true;
  outC->MSG_errors.radioSequenceError = kcg_true;
  outC->MSG_errors.tNvContactError = kcg_true;
  outC->MSG_errors.otherTimingError = kcg_true;
  outC->MSG_errors.radioMessageConsistencyError = kcg_true;
  outC->MSG_errors.nid_c = kcg_lit_int32(0);
  outC->MSG_errors.nid_errorbg = kcg_lit_int32(0);
  outC->CALC_positionErrors.outOfMemSpace = kcg_true;
  outC->CALC_positionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->CALC_positionErrors.positionCalculation_inconsistent = kcg_true;
  outC->CALC_positionErrors.linkedBGMissed = kcg_true;
  outC->CALC_positionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->CALC_positionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->CALC_positionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->CALC_positionErrors.doubleRepositioningError = kcg_true;
  outC->CALC_positionErrors.bg.valid = kcg_true;
  outC->CALC_positionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->CALC_positionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx289 = 0; idx289 < 33; idx289++) {
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].valid = kcg_true;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].nid_LRBG =
      kcg_lit_int32(0);
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].q_dir =
      Q_DIR_Reverse;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].q_scale =
      Q_SCALE_10_cm_scale;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].d_link =
      kcg_lit_int32(0);
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].nid_c =
      kcg_lit_int32(0);
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].nid_bg =
      kcg_lit_int32(0);
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[idx289].q_locacc =
      kcg_lit_int32(0);
  }
  outC->CALC_positionErrors.bg.missed = kcg_true;
  outC->MSG_nationalValues.valid = kcg_true;
  outC->MSG_nationalValues.q_dir = Q_DIR_Reverse;
  outC->MSG_nationalValues.d_validnv = kcg_lit_int32(0);
  for (idx290 = 0; idx290 < 7; idx290++) {
    outC->MSG_nationalValues.nid_cArray[idx290].valid = kcg_true;
    outC->MSG_nationalValues.nid_cArray[idx290].nid_c = kcg_lit_int32(0);
  }
  outC->MSG_nationalValues.v_nvshunt = kcg_lit_int32(0);
  outC->MSG_nationalValues.v_nvstff = kcg_lit_int32(0);
  outC->MSG_nationalValues.v_nvonsight = kcg_lit_int32(0);
  outC->MSG_nationalValues.v_nvlimsuperv = kcg_lit_int32(0);
  outC->MSG_nationalValues.v_nvunfit = kcg_lit_int32(0);
  outC->MSG_nationalValues.v_nvrel = kcg_lit_int32(0);
  outC->MSG_nationalValues.d_nvroll = kcg_lit_int32(0);
  outC->MSG_nationalValues.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->MSG_nationalValues.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->MSG_nationalValues.q_nvguiperm = Q_NVGUIPERM_No;
  outC->MSG_nationalValues.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->MSG_nationalValues.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->MSG_nationalValues.v_nvallowovtrp = kcg_lit_int32(0);
  outC->MSG_nationalValues.v_nvsupovtrp = kcg_lit_int32(0);
  outC->MSG_nationalValues.d_nvovtrp = kcg_lit_int32(0);
  outC->MSG_nationalValues.t_nvovtrp = kcg_lit_int32(0);
  outC->MSG_nationalValues.d_nvpotrp = kcg_lit_int32(0);
  outC->MSG_nationalValues.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->MSG_nationalValues.t_nvcontact = kcg_lit_int32(0);
  outC->MSG_nationalValues.m_nvderun = M_NVDERUN_No;
  outC->MSG_nationalValues.d_nvstff = kcg_lit_int32(0);
  outC->MSG_nationalValues.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->MSG_nationalValues.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->MSG_nationalValues.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->MSG_nationalValues.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->MSG_nationalValues.q_nvlocacc = kcg_lit_int32(0);
  outC->MSG_nationalValues.m_nvavadh = kcg_lit_float32(0.0);
  outC->MSG_nationalValues.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->MSG_nationalValues.q_nvkint =
    Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx292 = 0; idx292 < 7; idx292++) {
    outC->MSG_nationalValues.nvkvintsetArray[idx292].valid = kcg_true;
    outC->MSG_nationalValues.nvkvintsetArray[idx292].q_nvkvintset =
      Q_NVKVINTSET_Freight_trains;
    outC->MSG_nationalValues.nvkvintsetArray[idx292].a_nvp12 = kcg_lit_float32(0.0);
    outC->MSG_nationalValues.nvkvintsetArray[idx292].a_nvp23 = kcg_lit_float32(0.0);
    for (idx291 = 0; idx291 < 7; idx291++) {
      outC->MSG_nationalValues.nvkvintsetArray[idx292].nvkintArray[idx291].valid =
        kcg_true;
      outC->MSG_nationalValues.nvkvintsetArray[idx292].nvkintArray[idx291].v_nvkvint =
        kcg_lit_int32(0);
      outC->MSG_nationalValues.nvkvintsetArray[idx292].nvkintArray[idx291].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->MSG_nationalValues.nvkvintsetArray[idx292].nvkintArray[idx291].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx293 = 0; idx293 < 7; idx293++) {
    outC->MSG_nationalValues.nvkrintArray[idx293].valid = kcg_true;
    outC->MSG_nationalValues.nvkrintArray[idx293].l_nvkrint = L_NVKRINT_0m;
    outC->MSG_nationalValues.nvkrintArray[idx293].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->MSG_nationalValues.m_nvktint = kcg_lit_float32(0.0);
  outC->DMI_TrainData.valid = kcg_true;
  outC->DMI_TrainData.systemTime = kcg_lit_int32(0);
  outC->DMI_TrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->DMI_TrainData.l_train = kcg_lit_int32(0);
  outC->DMI_TrainData.m_brakeperct = kcg_lit_int32(0);
  outC->DMI_TrainData.v_maxTrain = kcg_lit_int32(0);
  outC->DMI_TrainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->DMI_TrainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->DMI_TrainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->SDM_EOA_overpassed = kcg_true;
  outC->MSG_trackMessage.valid = kcg_true;
  outC->MSG_trackMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->MSG_trackMessage.radioMetadata.t_train_reference = kcg_true;
  outC->MSG_trackMessage.radioMetadata.nid_em = kcg_true;
  outC->MSG_trackMessage.radioMetadata.q_scale = kcg_true;
  outC->MSG_trackMessage.radioMetadata.d_sr = kcg_true;
  outC->MSG_trackMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->MSG_trackMessage.radioMetadata.d_ref = kcg_true;
  outC->MSG_trackMessage.radioMetadata.q_dir = kcg_true;
  outC->MSG_trackMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->MSG_trackMessage.radioMetadata.m_version = kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.valid = kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->MSG_trackMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->MSG_trackMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->MSG_trackMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->MSG_trackMessage.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->MSG_trackMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->MSG_trackMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->MSG_trackMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->MSG_trackMessage.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(
      0);
  outC->MSG_trackMessage.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->MSG_trackMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->MSG_trackMessage.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->MSG_trackMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->MSG_trackMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx294 = 0; idx294 < 30; idx294++) {
    outC->MSG_trackMessage.packets.PacketHeaders[idx294].nid_packet =
      kcg_lit_int32(0);
    outC->MSG_trackMessage.packets.PacketHeaders[idx294].q_dir = Q_DIR_Reverse;
    outC->MSG_trackMessage.packets.PacketHeaders[idx294].valid = kcg_true;
    outC->MSG_trackMessage.packets.PacketHeaders[idx294].startAddress =
      kcg_lit_int32(0);
    outC->MSG_trackMessage.packets.PacketHeaders[idx294].endAddress =
      kcg_lit_int32(0);
  }
  for (idx295 = 0; idx295 < 500; idx295++) {
    outC->MSG_trackMessage.packets.PacketData[idx295] = kcg_lit_int32(0);
  }
  outC->MSG_trackMessage.sendingRBC.valid = kcg_true;
  outC->MSG_trackMessage.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->MSG_trackMessage.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->MSG_trackMessage.sendingRBC.device_id = kcg_lit_int32(0);
  outC->DMI_entryRequest.valid = kcg_true;
  outC->DMI_entryRequest.system_clock = kcg_lit_int32(0);
  outC->DMI_entryRequest.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->TIU_trainStatus.valid = kcg_true;
  outC->TIU_trainStatus.deskOpen = kcg_true;
  outC->TIU_trainStatus.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->TIU_trainStatus.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->IfBlock1_clock = kcg_true;
  outC->every2 = kcg_true;
  outC->every = kcg_true;
  outC->_L6_else_IfBlock1.compatibleModeAndLevel = kcg_true;
  outC->_L6_else_IfBlock1.level = M_LEVEL_Level_0;
  outC->_L6_else_IfBlock1.newLevel = kcg_true;
  outC->_L6_else_IfBlock1.Mode = M_MODE_Full_Supervision;
  outC->_L6_else_IfBlock1.newMode = kcg_true;
  outC->_L5_else_IfBlock1 = M_LEVEL_Level_0;
  outC->_L7_else_IfBlock1.number = kcg_lit_int32(0);
  for (idx296 = 0; idx296 < 32; idx296++) {
    outC->_L7_else_IfBlock1.levelList[idx296].level = M_LEVEL_Level_0;
    outC->_L7_else_IfBlock1.levelList[idx296].nid_stm = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L5_then_IfBlock1.lastActiveNTC = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.availableLevelsList.number = kcg_lit_int32(0);
  for (idx297 = 0; idx297 < 32; idx297++) {
    outC->_L5_then_IfBlock1.availableLevelsList.levelList[idx297].level =
      M_LEVEL_Level_0;
    outC->_L5_then_IfBlock1.availableLevelsList.levelList[idx297].nid_stm =
      kcg_lit_int32(0);
  }
  outC->_L4_then_IfBlock1.number = kcg_lit_int32(0);
  for (idx298 = 0; idx298 < 32; idx298++) {
    outC->_L4_then_IfBlock1.levelList[idx298].level = M_LEVEL_Level_0;
    outC->_L4_then_IfBlock1.levelList[idx298].nid_stm = kcg_lit_int32(0);
  }
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L3_then_IfBlock1.lastActiveNTC = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.availableLevelsList.number = kcg_lit_int32(0);
  for (idx299 = 0; idx299 < 32; idx299++) {
    outC->_L3_then_IfBlock1.availableLevelsList.levelList[idx299].level =
      M_LEVEL_Level_0;
    outC->_L3_then_IfBlock1.availableLevelsList.levelList[idx299].nid_stm =
      kcg_lit_int32(0);
  }
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1.lastActiveNTC = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.availableLevelsList.number = kcg_lit_int32(0);
  for (idx300 = 0; idx300 < 32; idx300++) {
    outC->_L1_then_IfBlock1.availableLevelsList.levelList[idx300].level =
      M_LEVEL_Level_0;
    outC->_L1_then_IfBlock1.availableLevelsList.levelList[idx300].nid_stm =
      kcg_lit_int32(0);
  }
  outC->_L7_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L6_then_IfBlock1.lastActiveNTC = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.availableLevelsList.number = kcg_lit_int32(0);
  for (idx301 = 0; idx301 < 32; idx301++) {
    outC->_L6_then_IfBlock1.availableLevelsList.levelList[idx301].level =
      M_LEVEL_Level_0;
    outC->_L6_then_IfBlock1.availableLevelsList.levelList[idx301].nid_stm =
      kcg_lit_int32(0);
  }
  outC->_L9_then_IfBlock1.compatibleModeAndLevel = kcg_true;
  outC->_L9_then_IfBlock1.level = M_LEVEL_Level_0;
  outC->_L9_then_IfBlock1.newLevel = kcg_true;
  outC->_L9_then_IfBlock1.Mode = M_MODE_Full_Supervision;
  outC->_L9_then_IfBlock1.newMode = kcg_true;
  outC->_L8_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L10_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L477 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->debugCurrentLevel = M_LEVEL_Level_0;
  outC->debugCurrentMode = M_MODE_Full_Supervision;
  outC->debugIinterventionSpeed = kcg_lit_float32(0.0);
  outC->debugPermittedSpeed = kcg_lit_float32(0.0);
  outC->debugTrainPositionDeltaMin = kcg_lit_int32(0);
  outC->debugTrainPositionDeltaMax = kcg_lit_int32(0);
  outC->debugTrainPositionNominal = kcg_lit_int32(0);
  outC->EVC_ready = kcg_true;
  outC->API_toTIU.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.valid = kcg_true;
  outC->API_toTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.valid = kcg_true;
  outC->API_toTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.valid = kcg_true;
  outC->API_toTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.valid = kcg_true;
  outC->API_toTIU.info.change_traction_system.d_test_traction.now =
    kcg_lit_int32(0);
  outC->API_toTIU.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int32(0);
  outC->API_toTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int32(0);
  outC->API_toTIU.info.passenger_door_control_info.valid = kcg_true;
  outC->API_toTIU.info.passenger_door_control_info.door_control_info =
    kcg_lit_int32(0);
  outC->API_toTIU.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int32(0);
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int32(0);
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int32(0);
  for (idx302 = 0; idx302 < 999; idx302++) {
    outC->API_toDMI[idx302] = kcg_lit_int32(0);
  }
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_management.networkID = kcg_lit_int32(0);
  outC->API_toRBC.Message.valid = kcg_true;
  outC->API_toRBC.Message.nid_message = kcg_lit_int32(0);
  outC->API_toRBC.Message.l_message = kcg_lit_int32(0);
  outC->API_toRBC.Message.t_train = kcg_lit_int32(0);
  outC->API_toRBC.Message.nid_engine = kcg_lit_int32(0);
  outC->API_toRBC.Message.field1 = kcg_lit_int32(0);
  outC->API_toRBC.Message.field2 = kcg_lit_int32(0);
  outC->API_toRBC.Message.field3 = kcg_lit_int32(0);
  for (idx303 = 0; idx303 < 50; idx303++) {
    outC->API_toRBC.OptionalPackets[idx303] = kcg_lit_int32(0);
  }
  outC->resetOut = kcg_true;
  /* _L161=(output_to_TIU_API_Pkg::TIU_OutputIntegration#2)/ */
  TIU_OutputIntegration_init_output_to_TIU_API_Pkg(
    &outC->Context_TIU_OutputIntegration_2);
  /* _L600=(digital::FlipFlopJK#2)/ */
  FlipFlopJK_init_digital(&outC->Context_FlipFlopJK_2);
  /* _L171=(manage_DMI_Output_Pkg::manageDMI_Output#2)/ */
  manageDMI_Output_init_manage_DMI_Output_Pkg(
    &outC->Context_manageDMI_Output_2);
  /* _L472=(ManageProcedure_Pkg::Master_Procedure#2)/ */
  Master_Procedure_init_ManageProcedure_Pkg(&outC->Context_Master_Procedure_2);
  /* _L632=(SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration#2)/ */
  SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
    &outC->Context_SpeedSupervision_Integration_2);
  /* _L1498=(xdebugSupport_Pkg::setProbesBalises#2)/ */
  setProbesBalises_init_xdebugSupport_Pkg(&outC->Context_setProbesBalises_2);
  /* _L1513=(xdebugSupport_Pkg::distanceLastMSG#2)/ */
  distanceLastMSG_init_xdebugSupport_Pkg(&outC->Context_distanceLastMSG_2);
  /* _L1511=(xdebugSupport_Pkg::distanceLastBG#2)/ */
  distanceLastBG_init_xdebugSupport_Pkg(&outC->Context_distanceLastBG_2);
  /* _L1564=(RadioSupport_Pkg::probe_RadioOutput#2)/ */
  probe_RadioOutput_init_RadioSupport_Pkg(&outC->Context_probe_RadioOutput_2);
  /* _L1586=(xdebugSupport_Pkg::setProbes#2)/ */
  setProbes_init_xdebugSupport_Pkg(&outC->Context_setProbes_2);
  /* _L1686=(radioOutput_Pkg::collectRadioOutput#2)/ */
  collectRadioOutput_init_radioOutput_Pkg(&outC->Context_collectRadioOutput_2);
  /* _L1718=(RadioSupport_Pkg::probe_MsgOut#3)/ */
  probe_MsgOut_init_RadioSupport_Pkg(&outC->Context_probe_MsgOut_3);
  /* _L1684=(radioOutput_Pkg::collectRadioOutput#1)/ */
  collectRadioOutput_init_radioOutput_Pkg(&outC->Context_collectRadioOutput_1);
  /* _L1699=(trainData_pkg::checkGeneralMessage#3)/ */
  checkGeneralMessage_init_trainData_pkg(&outC->Context_checkGeneralMessage_3);
  /* _L1789=(EVC_MEM_Support_Pkg::Procedure_TRIP#2)/ */
  Procedure_TRIP_init_EVC_MEM_Support_Pkg(&outC->Context_Procedure_TRIP_2);
  /* _L1633=(MoRC_HO_Pkg::MoRC_HO#1)/ */
  MoRC_HO_init_MoRC_HO_Pkg(&outC->Context_MoRC_HO_1);
  /* _L805=(ProvidePositionReport_Pkg::ProvidePositionReport#2)/ */
  ProvidePositionReport_init_ProvidePositionReport_Pkg(
    &outC->Context_ProvidePositionReport_2);
  /* _L973=(ManageLevelAndMode#2)/ */
  ManageLevelAndMode_init(&outC->Context_ManageLevelAndMode_2);
  /* _L1772=(EVC_MEM_Support_Pkg::MEM_combineForLevelChange#1)/ */
  MEM_combineForLevelChange_init_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_combineForLevelChange_1);
  /* _L947=(EVC_MEM_Support_Pkg::maintainTrainProperties#1)/ */
  maintainTrainProperties_init_EVC_MEM_Support_Pkg(
    &outC->Context_maintainTrainProperties_1);
  /* _L1658=(EVC_MEM_Support_Pkg::MEM_MobileConnectionContext#1)/ */
  MEM_MobileConnectionContext_init_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_MobileConnectionContext_1);
  /* _L1661=(EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext#1)/ */
  MEM_MobileRegistrationContext_init_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_MobileRegistrationContext_1);
  /* _=(EVC_MEM_Support_Pkg::probePackets#1)/ */
  probePackets_init_EVC_MEM_Support_Pkg(&outC->Context_probePackets_1);
  /* _L1510=(EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg#2)/ */
  patchEmergencyBrakeMsg_init_EVC_MEM_Support_Pkg(
    &outC->Context_patchEmergencyBrakeMsg_2);
  /* _L1245=(TrackAtlas::TrackAtlas#2)/ */
  TrackAtlas_init_TrackAtlas(&outC->Context_TrackAtlas_2);
  /* _L1204=(trainData_pkg::trainData#2)/ */
  trainData_init_trainData_pkg(&outC->Context_trainData_2);
  /* _L742=(manage_DMI_Input_Pkg::manageDMI_Input#3)/ */
  manageDMI_Input_init_manage_DMI_Input_Pkg(&outC->Context_manageDMI_Input_3);
  /* _L1254=(CalculateTrainPosition_Pkg::calculateTrainPosition#3)/ */
  calculateTrainPosition_init_CalculateTrainPosition_Pkg(
    &outC->Context_calculateTrainPosition_3);
  /* _L763=(Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration#2)/ */
  Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_Manage_TrackSideInformation_Integration_2);
  /* _L815=(input_from_TIU_API_Pkg::manageTIU_input#5)/ */
  manageTIU_input_init_input_from_TIU_API_Pkg(&outC->Context_manageTIU_input_5);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->PROC_radioCmdFromProcedures,
    (radioManagementMessage_T_Common_Types_Pkg *) &cNoRadioCmd);
  outC->PROC_powerUp_to_MoRC = kcg_false;
  outC->PROC_statusstartofmissionongoing_to_MoRC = kcg_false;
  outC->PROC_powerOff_to_MoRC = kcg_false;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    (DMI_EVC_status_T_DMI_Types_Pkg *) &cDMI_EVC_Status_Default_DMI_Types_Pkg);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->SDM_speedSupervisionBrakeCommand,
    (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCommand);
  outC->MoRC_newSessionEstablished = kcg_false;
  outC->MSG_EmergencyBrakeActive = kcg_true;
  kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
    &outC->EVC_PersistentData,
    (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *) &cNoPersistentData);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
    &outC->EVC_ActiveLevelList,
    (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
  outC->PROC_start_ack = kcg_false;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->TA_Packets,
    (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *) &cNoPacketsForML);
  outC->MoRC_ready = kcg_false;
  outC->MoRC_RadioID_1 = kcg_lit_int32(0);
  outC->MoRC_MN_1 = kcg_lit_int32(0);
  outC->ML_MemorizedLevel = M_LEVEL_Level_0;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->td_events,
    (trainData_Events_T_trainData_Types_pkg *) &cNoTDEvents);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->rep_P1,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->rep_P0,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
  outC->EVC_currentNTC = cNo_STM_manage_DMI_Input_Pkg;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->EVC_TextMessageStatusList,
    (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *) &cEmptyTestStatusList_DMI_Types_Pkg);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    (speedSupervisionForDMI_T_DMI_Types_Pkg *) &cEmptySpeedForDMI);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->TIU_trainProperties,
    (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->td_status,
    (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  outC->TIU_driverWindowEB = kcg_false;
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->td_trainData,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->MoRC_supervisingRBC_Id,
    (connection_ids_T_Handover_Pkg *) &cNoSupervisingRBC);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_1,
    (morcStatus_T_RCM_Session_Types_Pkg *) &cNoMoRCStatus_RCM_Session_Types_Pkg);
  outC->MSG_lastRadioMsgTimestamp = cTTrainUnknown1_CheckEuroradioMessage;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVC_reset(outC_EVC *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* _L161=(output_to_TIU_API_Pkg::TIU_OutputIntegration#2)/ */
  TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(
    &outC->Context_TIU_OutputIntegration_2);
  /* _L600=(digital::FlipFlopJK#2)/ */
  FlipFlopJK_reset_digital(&outC->Context_FlipFlopJK_2);
  /* _L171=(manage_DMI_Output_Pkg::manageDMI_Output#2)/ */
  manageDMI_Output_reset_manage_DMI_Output_Pkg(
    &outC->Context_manageDMI_Output_2);
  /* _L472=(ManageProcedure_Pkg::Master_Procedure#2)/ */
  Master_Procedure_reset_ManageProcedure_Pkg(&outC->Context_Master_Procedure_2);
  /* _L632=(SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration#2)/ */
  SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
    &outC->Context_SpeedSupervision_Integration_2);
  /* _L1498=(xdebugSupport_Pkg::setProbesBalises#2)/ */
  setProbesBalises_reset_xdebugSupport_Pkg(&outC->Context_setProbesBalises_2);
  /* _L1513=(xdebugSupport_Pkg::distanceLastMSG#2)/ */
  distanceLastMSG_reset_xdebugSupport_Pkg(&outC->Context_distanceLastMSG_2);
  /* _L1511=(xdebugSupport_Pkg::distanceLastBG#2)/ */
  distanceLastBG_reset_xdebugSupport_Pkg(&outC->Context_distanceLastBG_2);
  /* _L1564=(RadioSupport_Pkg::probe_RadioOutput#2)/ */
  probe_RadioOutput_reset_RadioSupport_Pkg(&outC->Context_probe_RadioOutput_2);
  /* _L1586=(xdebugSupport_Pkg::setProbes#2)/ */
  setProbes_reset_xdebugSupport_Pkg(&outC->Context_setProbes_2);
  /* _L1686=(radioOutput_Pkg::collectRadioOutput#2)/ */
  collectRadioOutput_reset_radioOutput_Pkg(&outC->Context_collectRadioOutput_2);
  /* _L1718=(RadioSupport_Pkg::probe_MsgOut#3)/ */
  probe_MsgOut_reset_RadioSupport_Pkg(&outC->Context_probe_MsgOut_3);
  /* _L1684=(radioOutput_Pkg::collectRadioOutput#1)/ */
  collectRadioOutput_reset_radioOutput_Pkg(&outC->Context_collectRadioOutput_1);
  /* _L1699=(trainData_pkg::checkGeneralMessage#3)/ */
  checkGeneralMessage_reset_trainData_pkg(&outC->Context_checkGeneralMessage_3);
  /* _L1789=(EVC_MEM_Support_Pkg::Procedure_TRIP#2)/ */
  Procedure_TRIP_reset_EVC_MEM_Support_Pkg(&outC->Context_Procedure_TRIP_2);
  /* _L1633=(MoRC_HO_Pkg::MoRC_HO#1)/ */
  MoRC_HO_reset_MoRC_HO_Pkg(&outC->Context_MoRC_HO_1);
  /* _L805=(ProvidePositionReport_Pkg::ProvidePositionReport#2)/ */
  ProvidePositionReport_reset_ProvidePositionReport_Pkg(
    &outC->Context_ProvidePositionReport_2);
  /* _L973=(ManageLevelAndMode#2)/ */
  ManageLevelAndMode_reset(&outC->Context_ManageLevelAndMode_2);
  /* _L1772=(EVC_MEM_Support_Pkg::MEM_combineForLevelChange#1)/ */
  MEM_combineForLevelChange_reset_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_combineForLevelChange_1);
  /* _L947=(EVC_MEM_Support_Pkg::maintainTrainProperties#1)/ */
  maintainTrainProperties_reset_EVC_MEM_Support_Pkg(
    &outC->Context_maintainTrainProperties_1);
  /* _L1658=(EVC_MEM_Support_Pkg::MEM_MobileConnectionContext#1)/ */
  MEM_MobileConnectionContext_reset_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_MobileConnectionContext_1);
  /* _L1661=(EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext#1)/ */
  MEM_MobileRegistrationContext_reset_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_MobileRegistrationContext_1);
  /* _=(EVC_MEM_Support_Pkg::probePackets#1)/ */
  probePackets_reset_EVC_MEM_Support_Pkg(&outC->Context_probePackets_1);
  /* _L1510=(EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg#2)/ */
  patchEmergencyBrakeMsg_reset_EVC_MEM_Support_Pkg(
    &outC->Context_patchEmergencyBrakeMsg_2);
  /* _L1245=(TrackAtlas::TrackAtlas#2)/ */
  TrackAtlas_reset_TrackAtlas(&outC->Context_TrackAtlas_2);
  /* _L1204=(trainData_pkg::trainData#2)/ */
  trainData_reset_trainData_pkg(&outC->Context_trainData_2);
  /* _L742=(manage_DMI_Input_Pkg::manageDMI_Input#3)/ */
  manageDMI_Input_reset_manage_DMI_Input_Pkg(&outC->Context_manageDMI_Input_3);
  /* _L1254=(CalculateTrainPosition_Pkg::calculateTrainPosition#3)/ */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
    &outC->Context_calculateTrainPosition_3);
  /* _L763=(Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration#2)/ */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_Manage_TrackSideInformation_Integration_2);
  /* _L815=(input_from_TIU_API_Pkg::manageTIU_input#5)/ */
  manageTIU_input_reset_input_from_TIU_API_Pkg(
    &outC->Context_manageTIU_input_5);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->PROC_radioCmdFromProcedures,
    (radioManagementMessage_T_Common_Types_Pkg *) &cNoRadioCmd);
  outC->PROC_powerUp_to_MoRC = kcg_false;
  outC->PROC_statusstartofmissionongoing_to_MoRC = kcg_false;
  outC->PROC_powerOff_to_MoRC = kcg_false;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    (DMI_EVC_status_T_DMI_Types_Pkg *) &cDMI_EVC_Status_Default_DMI_Types_Pkg);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->SDM_speedSupervisionBrakeCommand,
    (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCommand);
  outC->MoRC_newSessionEstablished = kcg_false;
  outC->MSG_EmergencyBrakeActive = kcg_true;
  kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
    &outC->EVC_PersistentData,
    (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *) &cNoPersistentData);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
    &outC->EVC_ActiveLevelList,
    (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
  outC->PROC_start_ack = kcg_false;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->TA_Packets,
    (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *) &cNoPacketsForML);
  outC->MoRC_ready = kcg_false;
  outC->MoRC_RadioID_1 = kcg_lit_int32(0);
  outC->MoRC_MN_1 = kcg_lit_int32(0);
  outC->ML_MemorizedLevel = M_LEVEL_Level_0;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->td_events,
    (trainData_Events_T_trainData_Types_pkg *) &cNoTDEvents);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->rep_P1,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->rep_P0,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
  outC->EVC_currentNTC = cNo_STM_manage_DMI_Input_Pkg;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->EVC_TextMessageStatusList,
    (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *) &cEmptyTestStatusList_DMI_Types_Pkg);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    (speedSupervisionForDMI_T_DMI_Types_Pkg *) &cEmptySpeedForDMI);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->TIU_trainProperties,
    (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->td_status,
    (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  outC->TIU_driverWindowEB = kcg_false;
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->td_trainData,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->MoRC_supervisingRBC_Id,
    (connection_ids_T_Handover_Pkg *) &cNoSupervisingRBC);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_1,
    (morcStatus_T_RCM_Session_Types_Pkg *) &cNoMoRCStatus_RCM_Session_Types_Pkg);
  outC->MSG_lastRadioMsgTimestamp = cTTrainUnknown1_CheckEuroradioMessage;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVC.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

