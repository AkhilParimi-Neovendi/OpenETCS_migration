/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Output_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::manageDMI_Output/ */
void manageDMI_Output_manage_DMI_Output_Pkg(
  /* incurrentDMIStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* inOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* inBrakeCommand/ */
  Brake_command_T_TIU_Types_Pkg *inBrakeCommand,
  /* inSpeedSupervision/ */
  speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inNationalValues/ */
  nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* inMovementAuthority/ */
  movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* trainDataFromEVC/ */
  trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* dmi_evc_coded_train_data/ */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* dmi_trackDescription/ */
  DataForDMI_t_TrackAtlasTypes *dmi_trackDescription,
  /* evc_systemVersion/ */
  M_VERSION evc_systemVersion,
  /* dmi_displayControl/ */
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* dmi_EVC_levelList/ */
  DMI_LevelList_T_DMI_Types_Pkg *dmi_EVC_levelList,
  /* dmiUpdateLevelsDMI/ */
  kcg_bool dmiUpdateLevelsDMI,
  /* dmi_EVC_radioNet/ */
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* dmi_driverIdentifier/ */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* dmi_trainRunningNumber/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* dmi_adhesionFactor/ */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* dmi_fromBG/ */
  kcg_bool dmi_fromBG,
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevel/ */
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevel,
  /* inNTC/ */
  NID_NTC inNTC,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg op_call;

  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L15,
    dmi_entryRequest);
  outC->_L38 = inSystemTime;
  /* _L31=(manage_DMI_Output_Pkg::doEntryRequest#1)/ */
  doEntryRequest_manage_DMI_Output_Pkg(
    &outC->_L15,
    outC->_L38,
    &outC->Context_doEntryRequest_1);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L31,
    &outC->Context_doEntryRequest_1.new_menuRequest);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L30,
    &outC->Context_doEntryRequest_1.new_entryRequest);
  outC->_L37 = outC->Context_doEntryRequest_1.sendTrainDataToDMI;
  outC->_L81 = outC->Context_doEntryRequest_1.outLevelsNeeded;
  outC->doTrainData = outC->_L37;
  outC->_L50 = outC->doTrainData;
  outC->every = outC->_L50;
  outC->_L52 = inSystemTime;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L53, trainDataFromEVC);
  if (outC->every) {
    /* _L51=(manage_DMI_Output_Pkg::sendTrainData#2)/ */
    sendTrainData_manage_DMI_Output_Pkg(
      outC->_L52,
      &outC->_L53,
      &outC->Context_sendTrainData_2);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &op_call,
      &outC->Context_sendTrainData_2.trainData_ForDMI);
  }
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->_L96, dmi_trackDescription);
  outC->_L98 = outC->_L96.Gradient_profile_updated;
  outC->_L97 = outC->_L96.MRSP_updated;
  outC->_L99 = outC->_L97 | outC->_L98;
  outC->sendCyclic = outC->_L99;
  outC->_L100 = outC->sendCyclic;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L94, inMoRC_status);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L5, TIU_TrainStatus);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L3, incurrentDMIStatus);
  outC->_L4 = inSystemTime;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L6, inOdometry);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L7, inTrainPosition);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->_L8, inSpeedSupervision);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L9, inModeAndLevel);
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&outC->_L10, inNationalValues);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(
    &outC->_L11,
    inMovementAuthority);
  outC->_L47 = inNTC;
  /* _L2=(manage_DMI_Output_Pkg::cyclicReportToDMI#1)/ */
  cyclicReportToDMI_manage_DMI_Output_Pkg(
    &outC->_L3,
    outC->_L4,
    &outC->_L6,
    &outC->_L7,
    &outC->_L8,
    &outC->_L9,
    &outC->_L10,
    &outC->_L11,
    &outC->_L94,
    outC->_L47,
    outC->_L100,
    &outC->Context_cyclicReportToDMI_1);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L2,
    &outC->Context_cyclicReportToDMI_1.packetDynamic);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L16,
    dmi_evc_coded_train_data);
  outC->_L42 = inSystemTime;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->_L78, inStatusList);
  outC->_L40 = dmi_fromBG;
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L86,
    inModeLevel_Ack);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(&outC->_L87, announcedLevel);
  /* _L77=(manage_TextMessages_Pkg::manageTextMessages#1)/ */
  manageTextMessages_manage_TextMessages_Pkg(
    outC->_L42,
    &outC->_L78,
    outC->_L40,
    &outC->_L86,
    &outC->_L87,
    &outC->Context_manageTextMessages_1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L77,
    &outC->Context_manageTextMessages_1.dmi_textMessage);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L76,
    &outC->Context_manageTextMessages_1.outStatusList);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->_L18, dmi_trackDescription);
  outC->_L84 = inSystemTime;
  /* _L85=(manage_DMI_Output_Pkg::copyTrackDescription#1)/ */
  copyTrackDescription_manage_DMI_Output_Pkg(
    &outC->_L18,
    outC->_L84,
    &outC->Context_copyTrackDescription_1);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L85,
    &outC->Context_copyTrackDescription_1.toDMI);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L92, TIU_TrainStatus);
  outC->_L89 = inSystemTime;
  outC->_L91 = evc_systemVersion;
  /* _L88=(manage_DMI_Output_Pkg::doIdentifierRequest#1)/ */
  doIdentifierRequest_manage_DMI_Output_Pkg(
    &outC->_L92,
    outC->_L89,
    outC->_L91,
    &outC->Context_doIdentifierRequest_1);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L88,
    &outC->Context_doIdentifierRequest_1.identifierRequest);
  outC->_L68 = evc_systemVersion;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L69, incurrentDMIStatus);
  outC->_L67 = inSystemTime;
  /* _L66=(manage_DMI_Output_Pkg::sendVersion#1)/ */
  sendVersion_manage_DMI_Output_Pkg(
    outC->_L68,
    &outC->_L69,
    outC->_L67,
    &outC->Context_sendVersion_1);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L66,
    &outC->Context_sendVersion_1.VersionPkg);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->versionPackage,
    &outC->_L66);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L64,
    &outC->versionPackage);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L21,
    dmi_displayControl);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L73, dmi_EVC_levelList);
  outC->_L74 = dmiUpdateLevelsDMI;
  outC->levelUpdate = outC->_L81;
  outC->_L80 = outC->levelUpdate;
  outC->_L83 = outC->_L80 | outC->_L74;
  outC->_L72 = inSystemTime;
  /* _L70=(manage_DMI_Output_Pkg::sendLevelListPkg#1)/ */
  sendLevelListPkg_manage_DMI_Output_Pkg(
    &outC->_L73,
    outC->_L83,
    outC->_L72,
    &outC->Context_sendLevelListPkg_1);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L70,
    &outC->Context_sendLevelListPkg_1.levelDataPkg);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->LevelListPkg,
    &outC->_L70);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L75,
    &outC->LevelListPkg);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L23,
    dmi_EVC_radioNet);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L24,
    dmi_driverIdentifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L25,
    dmi_trainRunningNumber);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L49,
    (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
      &cDefaultTrainData_manage_DMI_Output_Pkg);
  if (outC->every) {
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L51, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L51, &outC->_L49);
  }
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_TrainData,
    &outC->_L51);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L55,
    &outC->DMI_TrainData);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L27,
    dmi_adhesionFactor);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L46, inBrakeCommand);
  outC->_L29 = inSystemTime;
  /* _L45=(manage_DMI_Output_Pkg::sendBrakesToDMI#2)/ */
  sendBrakesToDMI_manage_DMI_Output_Pkg(
    &outC->_L46,
    outC->_L29,
    &outC->Context_sendBrakesToDMI_2);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L45,
    &outC->Context_sendBrakesToDMI_2.dmi_iconRequest);
  /* _L1=(manage_DMI_Output_Pkg::collectDMIPackets#1)/ */
  collectDMIPackets_manage_DMI_Output_Pkg(
    &outC->_L5,
    &outC->_L2,
    &outC->_L31,
    &outC->_L30,
    &outC->_L16,
    &outC->_L77,
    &outC->_L85,
    &outC->_L88,
    &outC->_L64,
    &outC->_L21,
    &outC->_L75,
    &outC->_L23,
    &outC->_L24,
    &outC->_L25,
    &outC->_L55,
    &outC->_L27,
    &outC->_L45,
    outC->_L29,
    &outC->Context_collectDMIPackets_1);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &outC->_L1,
    &outC->Context_collectDMIPackets_1.to_DMI);
  /* _L93=(Messages::Write_EVC_to_DMI_to_int#1)/ */
  Write_EVC_to_DMI_to_int_Messages(
    &outC->_L1,
    &outC->Context_Write_EVC_to_DMI_to_int_1);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->_L93,
    &outC->Context_Write_EVC_to_DMI_to_int_1.evc_to_dmi_int);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->outStatusList,
    &outC->_L76);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->to_DMI, &outC->_L93);
}

#ifndef KCG_USER_DEFINED_INIT
void manageDMI_Output_init_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
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

  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L96.GradientProfile[idx].valid = kcg_true;
    outC->_L96.GradientProfile[idx].begin_section = kcg_lit_int64(0);
    outC->_L96.GradientProfile[idx].end_section = kcg_lit_int64(0);
    outC->_L96.GradientProfile[idx].gradient = kcg_lit_int64(0);
  }
  outC->_L96.Gradient_profile_updated = kcg_true;
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L96.MRSP[idx1].valid = kcg_true;
    outC->_L96.MRSP[idx1].Loc_Abs = kcg_lit_int64(0);
    outC->_L96.MRSP[idx1].Loc_LRBG = kcg_lit_int64(0);
    outC->_L96.MRSP[idx1].MRS = kcg_lit_int64(0);
  }
  outC->_L96.MRSP_updated = kcg_true;
  outC->_L94.registration.valid = kcg_true;
  outC->_L94.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L94.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L94.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L94.registration.nid_mn = kcg_lit_int64(0);
  outC->_L94.connection.valid = kcg_true;
  outC->_L94.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L94.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L94.connection.nid_radio = kcg_lit_int64(0);
  outC->_L94.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L94.connection.connectionLost = kcg_true;
  outC->_L94.connection.isInRadioHole = kcg_true;
  outC->_L94.session.valid = kcg_true;
  outC->_L94.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L94.session.nid_c = kcg_lit_int64(0);
  outC->_L94.session.nid_rbc = kcg_lit_int64(0);
  outC->_L94.session.nid_radio = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 999; idx2++) {
    outC->_L93[idx2] = kcg_lit_int64(0);
  }
  outC->_L92.valid = kcg_true;
  outC->_L92.deskOpen = kcg_true;
  outC->_L92.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L92.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L91 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L89 = kcg_lit_int64(0);
  outC->_L88.valid = kcg_true;
  outC->_L88.system_clock = kcg_lit_int64(0);
  outC->_L88.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L88.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L88.l_name = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L88.x_name[idx3] = ' ';
  }
  outC->_L88.l_extra = kcg_lit_int64(0);
  outC->_L87.LevelTransition.is_set = kcg_true;
  outC->_L87.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L87.LevelTransition.transition.position = kcg_lit_int64(0);
  outC->_L87.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L87.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L87.LevelTransition.transition.AckLength = kcg_lit_int64(0);
  outC->_L87.LevelTransition.LRBG = kcg_lit_int64(0);
  outC->_L87.LevelTransition.referenceLocation = kcg_lit_int64(0);
  outC->_L87.IsAvailableForUse = kcg_true;
  outC->_L86.valid = kcg_true;
  outC->_L86.whichMode = M_MODE_Full_Supervision;
  outC->_L86.SH_Req_RefusedByRBC = kcg_true;
  outC->_L86.LevelNeedsAck = kcg_true;
  outC->_L85.valid = kcg_true;
  outC->_L85.system_clock = kcg_lit_int64(0);
  outC->_L85.speedProfiles.profileChanged = kcg_true;
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L85.speedProfiles.speedProfiles[idx4].valid = kcg_true;
    outC->_L85.speedProfiles.speedProfiles[idx4].Loc_Abs = kcg_lit_int64(0);
    outC->_L85.speedProfiles.speedProfiles[idx4].Loc_LRBG = kcg_lit_int64(0);
    outC->_L85.speedProfiles.speedProfiles[idx4].MRS = kcg_lit_int64(0);
  }
  outC->_L85.gradientProfiles.profileChanged = kcg_true;
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L85.gradientProfiles.gradientProfiles[idx5].valid = kcg_true;
    outC->_L85.gradientProfiles.gradientProfiles[idx5].begin_section =
      kcg_lit_int64(0);
    outC->_L85.gradientProfiles.gradientProfiles[idx5].end_section =
      kcg_lit_int64(0);
    outC->_L85.gradientProfiles.gradientProfiles[idx5].gradient = kcg_lit_int64(0);
  }
  outC->_L85.trackConditions.nIter = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L85.trackConditions.trackCondition[idx6].d_trackcond = kcg_lit_int64(0);
    outC->_L85.trackConditions.trackCondition[idx6].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L84 = kcg_lit_int64(0);
  outC->_L83 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_true;
  for (idx7 = 0; idx7 < 31; idx7++) {
    outC->_L78[idx7].valid = kcg_true;
    outC->_L78[idx7].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L78[idx7].timeStamp = kcg_lit_int64(0);
    outC->_L78[idx7].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L78[idx7].context = con_undefined_DMI_Types_Pkg;
    outC->_L78[idx7].nid_textmessage = kcg_lit_int64(0);
    outC->_L78[idx7].whichLevel = M_LEVEL_Level_0;
    outC->_L78[idx7].whichMode = M_MODE_Full_Supervision;
  }
  for (idx8 = 0; idx8 < 31; idx8++) {
    outC->_L76[idx8].valid = kcg_true;
    outC->_L76[idx8].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L76[idx8].timeStamp = kcg_lit_int64(0);
    outC->_L76[idx8].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L76[idx8].context = con_undefined_DMI_Types_Pkg;
    outC->_L76[idx8].nid_textmessage = kcg_lit_int64(0);
    outC->_L76[idx8].whichLevel = M_LEVEL_Level_0;
    outC->_L76[idx8].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L77.valid = kcg_true;
  outC->_L77.system_clock = kcg_lit_int64(0);
  outC->_L77.textMessage_ID = kcg_lit_int64(0);
  outC->_L77.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L77.l_text = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 255; idx9++) {
    outC->_L77.x_text[idx9] = ' ';
  }
  outC->_L77.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L77.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L75.valid = kcg_true;
  outC->_L75.system_clock = kcg_lit_int64(0);
  outC->_L75.levelList.number = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L75.levelList.levelList[idx10].level = M_LEVEL_Level_0;
    outC->_L75.levelList.levelList[idx10].nid_stm = kcg_lit_int64(0);
  }
  outC->_L74 = kcg_true;
  outC->_L73.number = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L73.levelList[idx11].level = M_LEVEL_Level_0;
    outC->_L73.levelList[idx11].nid_stm = kcg_lit_int64(0);
  }
  outC->_L72 = kcg_lit_int64(0);
  outC->_L70.valid = kcg_true;
  outC->_L70.system_clock = kcg_lit_int64(0);
  outC->_L70.levelList.number = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 32; idx12++) {
    outC->_L70.levelList.levelList[idx12].level = M_LEVEL_Level_0;
    outC->_L70.levelList.levelList[idx12].nid_stm = kcg_lit_int64(0);
  }
  outC->_L69.DMI_Active = kcg_true;
  outC->_L69.DMI_Error = kcg_true;
  outC->_L69.DMI_DriverIdValidated = kcg_true;
  outC->_L69.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L69.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L69.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L69.DMI_TrainDataValidated = kcg_true;
  outC->_L69.DMI_StartReceived = kcg_true;
  outC->_L69.DMI_Identifier.valid = kcg_true;
  outC->_L69.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L69.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L69.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L69.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 255; idx13++) {
    outC->_L69.DMI_Identifier.DMI_name[idx13] = ' ';
  }
  outC->_L69.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L67 = kcg_lit_int64(0);
  outC->_L66.valid = kcg_true;
  outC->_L66.system_clock = kcg_lit_int64(0);
  outC->_L66.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64.valid = kcg_true;
  outC->_L64.system_clock = kcg_lit_int64(0);
  outC->_L64.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55.valid = kcg_true;
  outC->_L55.systemTime = kcg_lit_int64(0);
  outC->_L55.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L55.l_train = kcg_lit_int64(0);
  outC->_L55.m_brakeperct = kcg_lit_int64(0);
  outC->_L55.v_maxTrain = kcg_lit_int64(0);
  outC->_L55.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L55.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L55.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L49.valid = kcg_true;
  outC->_L49.systemTime = kcg_lit_int64(0);
  outC->_L49.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L49.l_train = kcg_lit_int64(0);
  outC->_L49.m_brakeperct = kcg_lit_int64(0);
  outC->_L49.v_maxTrain = kcg_lit_int64(0);
  outC->_L49.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L49.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L49.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L50 = kcg_true;
  outC->_L51.valid = kcg_true;
  outC->_L51.systemTime = kcg_lit_int64(0);
  outC->_L51.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L51.l_train = kcg_lit_int64(0);
  outC->_L51.m_brakeperct = kcg_lit_int64(0);
  outC->_L51.v_maxTrain = kcg_lit_int64(0);
  outC->_L51.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L51.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L51.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L52 = kcg_lit_int64(0);
  outC->_L53.valid = kcg_true;
  outC->_L53.acknowledgedByDriver = kcg_true;
  outC->_L53.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L53.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L53.trainLength = kcg_lit_int64(0);
  outC->_L53.brakePerctage = kcg_lit_int64(0);
  outC->_L53.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L53.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L53.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L53.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L53.axleNumber = kcg_lit_int64(0);
  outC->_L53.numberNationalSystems = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L53.nationSystems[idx14] = kcg_lit_int64(0);
  }
  outC->_L53.numberTractionSystems = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 4; idx15++) {
    outC->_L53.tractionSystem[idx15].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L53.tractionSystem[idx15].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46.valid = kcg_true;
  outC->_L46.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L46.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L45.valid = kcg_true;
  outC->_L45.system_clock = kcg_lit_int64(0);
  outC->_L45.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L45.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L45.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L45.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L45.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L45.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L45.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L40 = kcg_true;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_true;
  outC->_L30.valid = kcg_true;
  outC->_L30.system_clock = kcg_lit_int64(0);
  outC->_L30.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L31.valid = kcg_true;
  outC->_L31.system_clock = kcg_lit_int64(0);
  outC->_L31.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L31.available_menu.Menu_button_shunting = kcg_true;
  outC->_L31.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L31.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L31.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L31.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L31.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L31.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L31.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L31.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L31.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L31.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L31.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L31.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L31.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L31.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L31.available_menu.Menu_button_system_version = kcg_true;
  outC->_L31.available_menu.Menu_button_volume = kcg_true;
  outC->_L31.available_menu.Menu_button_luminance = kcg_true;
  outC->_L31.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L31.available_menu.Menu_button_isolation = kcg_true;
  outC->_L31.available_menu.Show_hourglass = kcg_true;
  outC->_L31.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L31.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L31.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L31.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L31.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L31.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L31.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L31.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L1.present = kcg_true;
  outC->_L1.dynamic.valid = kcg_true;
  outC->_L1.dynamic.system_clock = kcg_lit_int64(0);
  outC->_L1.dynamic.v_train = kcg_lit_int64(0);
  outC->_L1.dynamic.location_front_train = kcg_lit_int64(0);
  outC->_L1.dynamic.location_brake_target = kcg_lit_int64(0);
  outC->_L1.dynamic.v_target = kcg_lit_int64(0);
  outC->_L1.dynamic.v_permitted = kcg_lit_int64(0);
  outC->_L1.dynamic.v_release = kcg_lit_int64(0);
  outC->_L1.dynamic.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L1.dynamic.v_intervention = kcg_lit_int64(0);
  outC->_L1.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L1.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L1.dynamic.level.nid_stm = kcg_lit_int64(0);
  outC->_L1.dynamic.nid_c = kcg_lit_int64(0);
  outC->_L1.dynamic.nid_c_valid = kcg_true;
  outC->_L1.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1.dynamic.location_LOA = kcg_lit_int64(0);
  outC->_L1.dynamic.v_LOA = kcg_lit_int64(0);
  outC->_L1.dynamic.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->_L1.dynamic.distance_KP_Balise = kcg_lit_int64(0);
  outC->_L1.dynamic.distance_to_TSA = kcg_lit_int64(0);
  outC->_L1.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.dynamic.distanceIndicationPoint = kcg_lit_int64(0);
  outC->_L1.menu_request.valid = kcg_true;
  outC->_L1.menu_request.system_clock = kcg_lit_int64(0);
  outC->_L1.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L1.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L1.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L1.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L1.entry_request.valid = kcg_true;
  outC->_L1.entry_request.system_clock = kcg_lit_int64(0);
  outC->_L1.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L1.evc_coded_train_data.valid = kcg_true;
  outC->_L1.evc_coded_train_data.system_clock = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainID.number = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainID.dig1 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainID.dig2 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainID.dig3 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainID.dig4 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainID.dig5 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainLength.number = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.brakeModel.number = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.vmax.number = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.vmax.dig1 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.vmax.dig2 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.vmax.dig3 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L1.evc_coded_train_data.airTightSystem.number = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int64(0);
  outC->_L1.textMessage.valid = kcg_true;
  outC->_L1.textMessage.system_clock = kcg_lit_int64(0);
  outC->_L1.textMessage.textMessage_ID = kcg_lit_int64(0);
  outC->_L1.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.textMessage.l_text = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 255; idx16++) {
    outC->_L1.textMessage.x_text[idx16] = ' ';
  }
  outC->_L1.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1.trackDescription.valid = kcg_true;
  outC->_L1.trackDescription.system_clock = kcg_lit_int64(0);
  outC->_L1.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx17 = 0; idx17 < 32; idx17++) {
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx17].valid = kcg_true;
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx17].Loc_Abs =
      kcg_lit_int64(0);
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx17].Loc_LRBG =
      kcg_lit_int64(0);
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx17].MRS =
      kcg_lit_int64(0);
  }
  outC->_L1.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx18 = 0; idx18 < 32; idx18++) {
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx18].valid =
      kcg_true;
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx18].begin_section =
      kcg_lit_int64(0);
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx18].end_section =
      kcg_lit_int64(0);
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx18].gradient =
      kcg_lit_int64(0);
  }
  outC->_L1.trackDescription.trackConditions.nIter = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 32; idx19++) {
    outC->_L1.trackDescription.trackConditions.trackCondition[idx19].d_trackcond =
      kcg_lit_int64(0);
    outC->_L1.trackDescription.trackConditions.trackCondition[idx19].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L1.identifierRequest.valid = kcg_true;
  outC->_L1.identifierRequest.system_clock = kcg_lit_int64(0);
  outC->_L1.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.identifierRequest.l_name = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 255; idx20++) {
    outC->_L1.identifierRequest.x_name[idx20] = ' ';
  }
  outC->_L1.identifierRequest.l_extra = kcg_lit_int64(0);
  outC->_L1.systemVersion.valid = kcg_true;
  outC->_L1.systemVersion.system_clock = kcg_lit_int64(0);
  outC->_L1.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.displayControl.valid = kcg_true;
  outC->_L1.displayControl.cab_is_active = kcg_true;
  outC->_L1.displayControl.system_clock = kcg_lit_int64(0);
  outC->_L1.EVC_levelData.valid = kcg_true;
  outC->_L1.EVC_levelData.system_clock = kcg_lit_int64(0);
  outC->_L1.EVC_levelData.levelList.number = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 32; idx21++) {
    outC->_L1.EVC_levelData.levelList.levelList[idx21].level = M_LEVEL_Level_0;
    outC->_L1.EVC_levelData.levelList.levelList[idx21].nid_stm = kcg_lit_int64(0);
  }
  outC->_L1.EVC_radioNetData.valid = kcg_true;
  outC->_L1.EVC_radioNetData.system_clock = kcg_lit_int64(0);
  outC->_L1.EVC_radioNetData.nid_mn = kcg_lit_int64(0);
  outC->_L1.driverIdentifier.valid = kcg_true;
  outC->_L1.driverIdentifier.systemTime = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 9; idx22++) {
    outC->_L1.driverIdentifier.driverIdentifier[idx22] = ' ';
  }
  outC->_L1.trainRunningNumber.valid = kcg_true;
  outC->_L1.trainRunningNumber.systemTime = kcg_lit_int64(0);
  outC->_L1.trainRunningNumber.trainRunningNumber = kcg_lit_int64(0);
  outC->_L1.trainData.valid = kcg_true;
  outC->_L1.trainData.systemTime = kcg_lit_int64(0);
  outC->_L1.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.trainData.l_train = kcg_lit_int64(0);
  outC->_L1.trainData.m_brakeperct = kcg_lit_int64(0);
  outC->_L1.trainData.v_maxTrain = kcg_lit_int64(0);
  outC->_L1.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.adhesionFactor.valid = kcg_true;
  outC->_L1.adhesionFactor.systemTime = kcg_lit_int64(0);
  outC->_L1.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L1.iconRequest.valid = kcg_true;
  outC->_L1.iconRequest.system_clock = kcg_lit_int64(0);
  outC->_L1.iconRequest.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L1.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L1.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L1.iconRequest.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L1.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L1.iconRequest.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L1.iconRequest.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L27.valid = kcg_true;
  outC->_L27.systemTime = kcg_lit_int64(0);
  outC->_L27.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L25.valid = kcg_true;
  outC->_L25.systemTime = kcg_lit_int64(0);
  outC->_L25.trainRunningNumber = kcg_lit_int64(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.systemTime = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 9; idx23++) {
    outC->_L24.driverIdentifier[idx23] = ' ';
  }
  outC->_L23.valid = kcg_true;
  outC->_L23.system_clock = kcg_lit_int64(0);
  outC->_L23.nid_mn = kcg_lit_int64(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.cab_is_active = kcg_true;
  outC->_L21.system_clock = kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 50; idx24++) {
    outC->_L18.GradientProfile[idx24].valid = kcg_true;
    outC->_L18.GradientProfile[idx24].begin_section = kcg_lit_int64(0);
    outC->_L18.GradientProfile[idx24].end_section = kcg_lit_int64(0);
    outC->_L18.GradientProfile[idx24].gradient = kcg_lit_int64(0);
  }
  outC->_L18.Gradient_profile_updated = kcg_true;
  for (idx25 = 0; idx25 < 110; idx25++) {
    outC->_L18.MRSP[idx25].valid = kcg_true;
    outC->_L18.MRSP[idx25].Loc_Abs = kcg_lit_int64(0);
    outC->_L18.MRSP[idx25].Loc_LRBG = kcg_lit_int64(0);
    outC->_L18.MRSP[idx25].MRS = kcg_lit_int64(0);
  }
  outC->_L18.MRSP_updated = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.system_clock = kcg_lit_int64(0);
  outC->_L16.trainID.number = kcg_lit_int64(0);
  outC->_L16.trainID.dig1 = kcg_lit_int64(0);
  outC->_L16.trainID.dig2 = kcg_lit_int64(0);
  outC->_L16.trainID.dig3 = kcg_lit_int64(0);
  outC->_L16.trainID.dig4 = kcg_lit_int64(0);
  outC->_L16.trainID.dig5 = kcg_lit_int64(0);
  outC->_L16.trainLength.number = kcg_lit_int64(0);
  outC->_L16.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L16.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L16.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L16.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L16.brakeModel.number = kcg_lit_int64(0);
  outC->_L16.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L16.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L16.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L16.vmax.number = kcg_lit_int64(0);
  outC->_L16.vmax.dig1 = kcg_lit_int64(0);
  outC->_L16.vmax.dig2 = kcg_lit_int64(0);
  outC->_L16.vmax.dig3 = kcg_lit_int64(0);
  outC->_L16.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L16.airTightSystem.number = kcg_lit_int64(0);
  outC->_L16.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L16.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L16.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L16.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L16.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L16.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L16.mLoadingGauge.dig3 = kcg_lit_int64(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.system_clock = kcg_lit_int64(0);
  outC->_L15.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L11.valid = kcg_true;
  outC->_L11.location_LOA = kcg_lit_int64(0);
  outC->_L11.v_LOA = kcg_lit_int64(0);
  outC->_L10.valid = kcg_true;
  outC->_L10.nid_c = kcg_lit_int64(0);
  outC->_L10.nid_c_valid = kcg_true;
  outC->_L9.compatibleModeAndLevel = kcg_true;
  outC->_L9.level = M_LEVEL_Level_0;
  outC->_L9.newLevel = kcg_true;
  outC->_L9.Mode = M_MODE_Full_Supervision;
  outC->_L9.newMode = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.targetSpeed = kcg_lit_int64(0);
  outC->_L8.permittedSpeed = kcg_lit_int64(0);
  outC->_L8.releaseSpeed = kcg_lit_int64(0);
  outC->_L8.locationBrakeTarget = kcg_lit_int64(0);
  outC->_L8.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L8.interventionSpeed = kcg_lit_int64(0);
  outC->_L8.sup_status = CSM_DMI_Types_Pkg;
  outC->_L8.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L8.distanceIndicationPoint = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.timestamp = kcg_lit_int64(0);
  outC->_L7.trainPositionIsUnknown = kcg_true;
  outC->_L7.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L7.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L7.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L7.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L7.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L7.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L7.LRBG.valid = kcg_true;
  outC->_L7.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L7.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L7.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L7.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L7.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L7.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L7.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L7.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx26 = 0; idx26 < 33; idx26++) {
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].valid = kcg_true;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].q_dir = Q_DIR_Reverse;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].d_link = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].nid_c = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].nid_bg = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx26].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.LRBG.missed = kcg_true;
  outC->_L7.prvLRBG.valid = kcg_true;
  outC->_L7.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L7.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L7.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L7.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L7.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L7.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L7.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx27 = 0; idx27 < 33; idx27++) {
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].valid = kcg_true;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].q_dir = Q_DIR_Reverse;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].d_link = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].nid_c = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].nid_bg = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx27].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.prvLRBG.missed = kcg_true;
  outC->_L7.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L7.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L7.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L7.linkingIsUsedOnboard = kcg_true;
  outC->_L7.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L7.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L7.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.timestamp = kcg_lit_int64(0);
  outC->_L6.odo.o_nominal = kcg_lit_int64(0);
  outC->_L6.odo.o_min = kcg_lit_int64(0);
  outC->_L6.odo.o_max = kcg_lit_int64(0);
  outC->_L6.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L6.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L6.speed.v_lower = kcg_lit_int64(0);
  outC->_L6.speed.v_upper = kcg_lit_int64(0);
  outC->_L6.acceleration = kcg_lit_int64(0);
  outC->_L6.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.valid = kcg_true;
  outC->_L5.deskOpen = kcg_true;
  outC->_L5.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L5.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3.DMI_Active = kcg_true;
  outC->_L3.DMI_Error = kcg_true;
  outC->_L3.DMI_DriverIdValidated = kcg_true;
  outC->_L3.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L3.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L3.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L3.DMI_TrainDataValidated = kcg_true;
  outC->_L3.DMI_StartReceived = kcg_true;
  outC->_L3.DMI_Identifier.valid = kcg_true;
  outC->_L3.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L3.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L3.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L3.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx28 = 0; idx28 < 255; idx28++) {
    outC->_L3.DMI_Identifier.DMI_name[idx28] = ' ';
  }
  outC->_L3.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.valid = kcg_true;
  outC->_L2.system_clock = kcg_lit_int64(0);
  outC->_L2.v_train = kcg_lit_int64(0);
  outC->_L2.location_front_train = kcg_lit_int64(0);
  outC->_L2.location_brake_target = kcg_lit_int64(0);
  outC->_L2.v_target = kcg_lit_int64(0);
  outC->_L2.v_permitted = kcg_lit_int64(0);
  outC->_L2.v_release = kcg_lit_int64(0);
  outC->_L2.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L2.v_intervention = kcg_lit_int64(0);
  outC->_L2.mode = M_MODE_Full_Supervision;
  outC->_L2.level.level = M_LEVEL_Level_0;
  outC->_L2.level.nid_stm = kcg_lit_int64(0);
  outC->_L2.nid_c = kcg_lit_int64(0);
  outC->_L2.nid_c_valid = kcg_true;
  outC->_L2.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L2.sup_status = CSM_DMI_Types_Pkg;
  outC->_L2.location_LOA = kcg_lit_int64(0);
  outC->_L2.v_LOA = kcg_lit_int64(0);
  outC->_L2.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->_L2.distance_KP_Balise = kcg_lit_int64(0);
  outC->_L2.distance_to_TSA = kcg_lit_int64(0);
  outC->_L2.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L2.distanceIndicationPoint = kcg_lit_int64(0);
  outC->sendCyclic = kcg_true;
  outC->levelUpdate = kcg_true;
  outC->LevelListPkg.valid = kcg_true;
  outC->LevelListPkg.system_clock = kcg_lit_int64(0);
  outC->LevelListPkg.levelList.number = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 32; idx29++) {
    outC->LevelListPkg.levelList.levelList[idx29].level = M_LEVEL_Level_0;
    outC->LevelListPkg.levelList.levelList[idx29].nid_stm = kcg_lit_int64(0);
  }
  outC->versionPackage.valid = kcg_true;
  outC->versionPackage.system_clock = kcg_lit_int64(0);
  outC->versionPackage.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->DMI_TrainData.valid = kcg_true;
  outC->DMI_TrainData.systemTime = kcg_lit_int64(0);
  outC->DMI_TrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->DMI_TrainData.l_train = kcg_lit_int64(0);
  outC->DMI_TrainData.m_brakeperct = kcg_lit_int64(0);
  outC->DMI_TrainData.v_maxTrain = kcg_lit_int64(0);
  outC->DMI_TrainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->DMI_TrainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->DMI_TrainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->doTrainData = kcg_true;
  outC->every = kcg_true;
  for (idx30 = 0; idx30 < 31; idx30++) {
    outC->outStatusList[idx30].valid = kcg_true;
    outC->outStatusList[idx30].dmi_textMessageID = kcg_lit_int64(0);
    outC->outStatusList[idx30].timeStamp = kcg_lit_int64(0);
    outC->outStatusList[idx30].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[idx30].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[idx30].nid_textmessage = kcg_lit_int64(0);
    outC->outStatusList[idx30].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[idx30].whichMode = M_MODE_Full_Supervision;
  }
  for (idx31 = 0; idx31 < 999; idx31++) {
    outC->to_DMI[idx31] = kcg_lit_int64(0);
  }
  /* _L93=(Messages::Write_EVC_to_DMI_to_int#1)/ */
  Write_EVC_to_DMI_to_int_init_Messages(
    &outC->Context_Write_EVC_to_DMI_to_int_1);
  /* _L1=(manage_DMI_Output_Pkg::collectDMIPackets#1)/ */
  collectDMIPackets_init_manage_DMI_Output_Pkg(
    &outC->Context_collectDMIPackets_1);
  /* _L45=(manage_DMI_Output_Pkg::sendBrakesToDMI#2)/ */
  sendBrakesToDMI_init_manage_DMI_Output_Pkg(&outC->Context_sendBrakesToDMI_2);
  /* _L70=(manage_DMI_Output_Pkg::sendLevelListPkg#1)/ */
  sendLevelListPkg_init_manage_DMI_Output_Pkg(
    &outC->Context_sendLevelListPkg_1);
  /* _L66=(manage_DMI_Output_Pkg::sendVersion#1)/ */
  sendVersion_init_manage_DMI_Output_Pkg(&outC->Context_sendVersion_1);
  /* _L88=(manage_DMI_Output_Pkg::doIdentifierRequest#1)/ */
  doIdentifierRequest_init_manage_DMI_Output_Pkg(
    &outC->Context_doIdentifierRequest_1);
  /* _L85=(manage_DMI_Output_Pkg::copyTrackDescription#1)/ */
  copyTrackDescription_init_manage_DMI_Output_Pkg(
    &outC->Context_copyTrackDescription_1);
  /* _L77=(manage_TextMessages_Pkg::manageTextMessages#1)/ */
  manageTextMessages_init_manage_TextMessages_Pkg(
    &outC->Context_manageTextMessages_1);
  /* _L2=(manage_DMI_Output_Pkg::cyclicReportToDMI#1)/ */
  cyclicReportToDMI_init_manage_DMI_Output_Pkg(
    &outC->Context_cyclicReportToDMI_1);
  /* _L51=(manage_DMI_Output_Pkg::sendTrainData#2)/ */
  sendTrainData_init_manage_DMI_Output_Pkg(&outC->Context_sendTrainData_2);
  /* _L31=(manage_DMI_Output_Pkg::doEntryRequest#1)/ */
  doEntryRequest_init_manage_DMI_Output_Pkg(&outC->Context_doEntryRequest_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageDMI_Output_reset_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  /* _L93=(Messages::Write_EVC_to_DMI_to_int#1)/ */
  Write_EVC_to_DMI_to_int_reset_Messages(
    &outC->Context_Write_EVC_to_DMI_to_int_1);
  /* _L1=(manage_DMI_Output_Pkg::collectDMIPackets#1)/ */
  collectDMIPackets_reset_manage_DMI_Output_Pkg(
    &outC->Context_collectDMIPackets_1);
  /* _L45=(manage_DMI_Output_Pkg::sendBrakesToDMI#2)/ */
  sendBrakesToDMI_reset_manage_DMI_Output_Pkg(&outC->Context_sendBrakesToDMI_2);
  /* _L70=(manage_DMI_Output_Pkg::sendLevelListPkg#1)/ */
  sendLevelListPkg_reset_manage_DMI_Output_Pkg(
    &outC->Context_sendLevelListPkg_1);
  /* _L66=(manage_DMI_Output_Pkg::sendVersion#1)/ */
  sendVersion_reset_manage_DMI_Output_Pkg(&outC->Context_sendVersion_1);
  /* _L88=(manage_DMI_Output_Pkg::doIdentifierRequest#1)/ */
  doIdentifierRequest_reset_manage_DMI_Output_Pkg(
    &outC->Context_doIdentifierRequest_1);
  /* _L85=(manage_DMI_Output_Pkg::copyTrackDescription#1)/ */
  copyTrackDescription_reset_manage_DMI_Output_Pkg(
    &outC->Context_copyTrackDescription_1);
  /* _L77=(manage_TextMessages_Pkg::manageTextMessages#1)/ */
  manageTextMessages_reset_manage_TextMessages_Pkg(
    &outC->Context_manageTextMessages_1);
  /* _L2=(manage_DMI_Output_Pkg::cyclicReportToDMI#1)/ */
  cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
    &outC->Context_cyclicReportToDMI_1);
  /* _L51=(manage_DMI_Output_Pkg::sendTrainData#2)/ */
  sendTrainData_reset_manage_DMI_Output_Pkg(&outC->Context_sendTrainData_2);
  /* _L31=(manage_DMI_Output_Pkg::doEntryRequest#1)/ */
  doEntryRequest_reset_manage_DMI_Output_Pkg(&outC->Context_doEntryRequest_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_manageDMI_Output_manage_DMI_Output_Pkg(
  SV_manageDMI_Output_manage_DMI_Output_Pkg *SV,
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  kcg_save_SV_cyclicReportToDMI_manage_DMI_Output_Pkg(
    &SV->Context_cyclicReportToDMI_1,
    &outC->Context_cyclicReportToDMI_1);
  kcg_save_SV_doIdentifierRequest_manage_DMI_Output_Pkg(
    &SV->Context_doIdentifierRequest_1,
    &outC->Context_doIdentifierRequest_1);
  kcg_save_SV_sendVersion_manage_DMI_Output_Pkg(
    &SV->Context_sendVersion_1,
    &outC->Context_sendVersion_1);
  kcg_save_SV_sendBrakesToDMI_manage_DMI_Output_Pkg(
    &SV->Context_sendBrakesToDMI_2,
    &outC->Context_sendBrakesToDMI_2);
  kcg_save_SV_collectDMIPackets_manage_DMI_Output_Pkg(
    &SV->Context_collectDMIPackets_1,
    &outC->Context_collectDMIPackets_1);
}

void kcg_load_SV_manageDMI_Output_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC,
  SV_manageDMI_Output_manage_DMI_Output_Pkg *SV)
{
  kcg_load_SV_cyclicReportToDMI_manage_DMI_Output_Pkg(
    &outC->Context_cyclicReportToDMI_1,
    &SV->Context_cyclicReportToDMI_1);
  kcg_load_SV_doIdentifierRequest_manage_DMI_Output_Pkg(
    &outC->Context_doIdentifierRequest_1,
    &SV->Context_doIdentifierRequest_1);
  kcg_load_SV_sendVersion_manage_DMI_Output_Pkg(
    &outC->Context_sendVersion_1,
    &SV->Context_sendVersion_1);
  kcg_load_SV_sendBrakesToDMI_manage_DMI_Output_Pkg(
    &outC->Context_sendBrakesToDMI_2,
    &SV->Context_sendBrakesToDMI_2);
  kcg_load_SV_collectDMIPackets_manage_DMI_Output_Pkg(
    &outC->Context_collectDMIPackets_1,
    &SV->Context_collectDMIPackets_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageDMI_Output_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

