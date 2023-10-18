/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration/ */
void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* fullChecks/ */
  kcg_bool fullChecks,
  /* API_trackSide_Message/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* ActualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* reset/ */
  kcg_bool reset,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* modeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* tNvContact/ */
  T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* intrainVersion/ */
  M_VERSION intrainVersion,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* inSupervisingRbcId/ */
  connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* inAnnouncedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  /* inActiveCab/ */
  kcg_bool inActiveCab,
  /* inTrainDataValid/ */
  kcg_bool inTrainDataValid,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  static NID_C op_call;
  static NID_ERRORBG_BG_Types_Pkg _1_op_call;
  static kcg_bool _2_op_call;
  static kcg_bool _3_op_call;
  static kcg_bool _4_op_call;
  static kcg_bool _5_op_call;
  static kcg_bool _6_op_call;
  static ReceivedMessage_T_Common_Types_Pkg _7_op_call;
  static kcg_bool _8_op_call;
  static kcg_bool _9_op_call;
  static kcg_bool _10_op_call;
  static kcg_bool _11_op_call;
  static ReceivedMessage_T_Common_Types_Pkg _12_op_call;
  static connection_ids_T_Handover_Pkg noname;

  outC->_L3 = reset;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, API_trackSide_Message);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L2, ActualOdometry);
  /* _L8=(Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg#1)/ */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    outC->_L3,
    &outC->_L1,
    &outC->_L2,
    &outC->Context_Receive_TrackSide_Msg_1);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L8,
    &outC->Context_Receive_TrackSide_Msg_1.outTrackMessage_for_check);
  outC->_L33 = outC->_L8.msg_type;
  outC->_L37 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L36 = outC->_L37 == outC->_L33;
  outC->_L93 = outC->_L8.valid;
  outC->_L94 = outC->_L93 & outC->_L36;
  outC->doBaliseBranch = outC->_L94;
  outC->_L44 = outC->doBaliseBranch;
  outC->every1 = outC->_L44;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L43, inAnnouncedBGs);
  outC->_L197 = kcg_false;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L82, trainPosition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L195, &outC->_L82);
  if (kcg_true) {
    outC->_L195.trainPositionIsUnknown = outC->_L197;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPositionTest,
    &outC->_L195);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L87,
    &outC->trainPositionTest);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L7, modeAndLevel);
  outC->_L28 = outC->_L7.Mode;
  outC->_L69 = q_nvlocacc;
  outC->_L150 = intrainVersion;
  if (outC->every1) {
    /* _L14=(CheckBGConsistency_Pkg::CheckBGConsistency#1)/ */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      &outC->_L43,
      &outC->_L87,
      outC->_L28,
      &outC->_L8,
      outC->_L69,
      outC->_L150,
      &outC->Context_CheckBGConsistency_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_7_op_call,
      &outC->Context_CheckBGConsistency_1.passedBG_out);
    _6_op_call = outC->Context_CheckBGConsistency_1.applyServiceBrake;
    _5_op_call = outC->Context_CheckBGConsistency_1.badBaliseMessageToDMI;
    _4_op_call = outC->Context_CheckBGConsistency_1.errorLinkedBG;
    _3_op_call = outC->Context_CheckBGConsistency_1.errorUnlinkedBG;
    _2_op_call = outC->Context_CheckBGConsistency_1.incompatibleVersion;
    _1_op_call = outC->Context_CheckBGConsistency_1.nid_errorBG;
    op_call = outC->Context_CheckBGConsistency_1.nid_c;
  }
  outC->_L52 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L50 = outC->_L33 == outC->_L52;
  outC->doRadio = outC->_L50;
  outC->_L53 = outC->doRadio;
  outC->every = outC->_L53;
  outC->_L11 = tNvContact;
  outC->_L12 = lastRelevantEventTimestamp;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L13, radioStatus);
  outC->_L114 = fullChecks;
  if (outC->every) {
    /* _L38=(CheckEuroradioMessage::CheckEuroRadioMessage#1)/ */
    CheckEuroRadioMessage_CheckEuroradioMessage(
      &outC->_L8,
      outC->_L11,
      outC->_L12,
      &outC->_L13,
      outC->_L114,
      &outC->Context_CheckEuroRadioMessage_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_12_op_call,
      &outC->Context_CheckEuroRadioMessage_1.checkedMessage);
    _11_op_call = outC->Context_CheckEuroRadioMessage_1.radioSequenceError;
    _10_op_call = outC->Context_CheckEuroRadioMessage_1.tNvContactError;
    _9_op_call = outC->Context_CheckEuroRadioMessage_1.otherTimingError;
    _8_op_call = outC->Context_CheckEuroRadioMessage_1.radioMessageConsistencyError;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L65,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (outC->every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L38, &_12_op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L38, &outC->_L65);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L64,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (outC->every1) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L14, &_7_op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L14, &outC->_L64);
  }
  outC->_L27 = outC->doBaliseBranch;
  /* _L23= */
  if (outC->_L27) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, &outC->_L14);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, &outC->_L38);
  }
  outC->_L194 = kcg_true;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L79, &outC->_L82.LRBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L193, &outC->_L79);
  if (kcg_true) {
    outC->_L193.valid = outC->_L194;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->LRBG, &outC->_L193);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L80, &outC->LRBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L68, inAnnouncedBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L88,
    &outC->trainPositionTest);
  /* _L21=(ValidateDataDirection_Pkg::validateDataDirection#1)/ */
  validateDataDirection_ValidateDataDirection_Pkg(
    &outC->_L23,
    &outC->_L80,
    &outC->_L68,
    &outC->_L88,
    &outC->Context_validateDataDirection_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L21,
    &outC->Context_validateDataDirection_1.outMessage);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L109, modeAndLevel);
  outC->_L211 = kcg_lit_int64(0);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L159, inFilterEvents);
  outC->_L121 = inActiveCab;
  outC->_L122 = inTrainDataValid;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L215, radioStatus);
  /* _L102=(InformationFilter_Pkg::InformationFilter#3)/ */
  InformationFilter_InformationFilter_Pkg(
    &outC->_L21,
    &outC->_L109,
    outC->_L211,
    &outC->_L159,
    outC->_L121,
    outC->_L122,
    &outC->_L215,
    &outC->Context_InformationFilter_3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L102,
    &outC->Context_InformationFilter_3.outMessage);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L216,
    &outC->Context_InformationFilter_3.IF_toML);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->IF_toML,
    &outC->_L216);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L212, radioStatus);
  kcg_copy_connection_ids_T_Handover_Pkg(&outC->_L106, inSupervisingRbcId);
  kcg_copy_connection_ids_T_Handover_Pkg(&noname, &outC->_L106);
  outC->_L45 = kcg_false;
  if (outC->every1) {
    outC->_L17 = _4_op_call;
    outC->_L18 = _3_op_call;
    outC->_L151 = _2_op_call;
  }
  else {
    outC->_L17 = outC->_L45;
    outC->_L18 = outC->_L45;
    outC->_L151 = outC->_L45;
  }
  outC->_L63 = kcg_false;
  if (outC->every) {
    outC->_L61 = _11_op_call;
  }
  else {
    outC->_L61 = outC->_L63;
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L139, ActualOdometry);
  outC->_L140 = outC->_L139.timestamp;
  outC->_L141 = tNvContact;
  outC->_L142 = lastRelevantEventTimestamp;
  outC->_L143 = fullChecks;
  /* _L138=(CheckEuroradioMessage::ContinuousTimeoutCheck#1)/ */
  ContinuousTimeoutCheck_CheckEuroradioMessage(
    outC->_L140,
    outC->_L141,
    outC->_L142,
    outC->_L143,
    &outC->_L212,
    &outC->Context_ContinuousTimeoutCheck_1);
  outC->_L138 = outC->Context_ContinuousTimeoutCheck_1.tNvContactError;
  if (outC->every) {
    outC->_L62 = _10_op_call;
  }
  else {
    outC->_L62 = outC->_L63;
  }
  outC->_L144 = outC->_L62 | outC->_L138;
  outC->tNvContactError = outC->_L144;
  outC->_L145 = outC->tNvContactError;
  if (outC->every) {
    outC->_L123 = _9_op_call;
    outC->_L124 = _8_op_call;
  }
  else {
    outC->_L123 = outC->_L63;
    outC->_L124 = outC->_L63;
  }
  outC->_L163 = kcg_lit_int64(0);
  if (outC->every1) {
    outC->_L161 = op_call;
  }
  else {
    outC->_L161 = outC->_L163;
  }
  outC->_L162 = cUnknownBG_BG_Types_Pkg;
  if (outC->every1) {
    outC->_L160 = _1_op_call;
  }
  else {
    outC->_L160 = outC->_L162;
  }
  outC->_L129.linkedBGError = outC->_L17;
  outC->_L129.unlinkedBGError = outC->_L18;
  outC->_L129.BG_versionIncompatible = outC->_L151;
  outC->_L129.radioSequenceError = outC->_L61;
  outC->_L129.tNvContactError = outC->_L145;
  outC->_L129.otherTimingError = outC->_L123;
  outC->_L129.radioMessageConsistencyError = outC->_L124;
  outC->_L129.nid_c = outC->_L161;
  outC->_L129.nid_errorbg = outC->_L160;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->MsgErrors, &outC->_L129);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L192, &outC->MsgErrors);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->outCheckErrors, &outC->_L192);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L164, API_trackSide_Message);
  /* _L187=(xdebugSupport_Pkg::countPackets#1)/ */
  countPackets_xdebugSupport_Pkg(&outC->_L164, &outC->Context_countPackets_1);
  outC->_L187 = outC->Context_countPackets_1.count;
  outC->countPackets = outC->_L187;
  /* _L185=(xdebugSupport_Pkg::checkOnErrors#1)/ */
  checkOnErrors_xdebugSupport_Pkg(&outC->_L129, &outC->Context_checkOnErrors_1);
  outC->_L185 = outC->Context_checkOnErrors_1.radioMsgError;
  outC->_L186 = outC->Context_checkOnErrors_1.baliseError;
  outC->debug_ErrorMSG = outC->_L185;
  outC->errorBG = outC->_L186;
  outC->_L173 = kcg_lit_float64(100.0);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L169, ActualOdometry);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L170, &outC->_L169.odo);
  outC->_L171 = outC->_L170.o_nominal;
  outC->_L172 = /* _L172= */(kcg_float64) outC->_L171;
  outC->_L174 = outC->_L172 / outC->_L173;
  outC->positionM = outC->_L174;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outputMessage, &outC->_L102);
  if (outC->every1) {
    outC->_L15 = _6_op_call;
    outC->_L16 = _5_op_call;
  }
  else {
    outC->_L15 = outC->_L45;
    outC->_L16 = outC->_L45;
  }
  outC->BadBaliseMessageToDMI = outC->_L16;
  outC->ApplyServiceBrake = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
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

  outC->_L216.P12_received = kcg_true;
  outC->_L216.P15_received = kcg_true;
  outC->_L216.P21_received = kcg_true;
  outC->_L216.P27_received = kcg_true;
  outC->_L211 = kcg_lit_int64(0);
  outC->_L215.registration.valid = kcg_true;
  outC->_L215.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L215.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L215.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L215.registration.nid_mn = kcg_lit_int64(0);
  outC->_L215.connection.valid = kcg_true;
  outC->_L215.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L215.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L215.connection.nid_radio = kcg_lit_int64(0);
  outC->_L215.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L215.connection.connectionLost = kcg_true;
  outC->_L215.connection.isInRadioHole = kcg_true;
  outC->_L215.session.valid = kcg_true;
  outC->_L215.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L215.session.nid_c = kcg_lit_int64(0);
  outC->_L215.session.nid_rbc = kcg_lit_int64(0);
  outC->_L215.session.nid_radio = kcg_lit_int64(0);
  outC->_L212.registration.valid = kcg_true;
  outC->_L212.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L212.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L212.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L212.registration.nid_mn = kcg_lit_int64(0);
  outC->_L212.connection.valid = kcg_true;
  outC->_L212.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L212.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L212.connection.nid_radio = kcg_lit_int64(0);
  outC->_L212.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L212.connection.connectionLost = kcg_true;
  outC->_L212.connection.isInRadioHole = kcg_true;
  outC->_L212.session.valid = kcg_true;
  outC->_L212.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L212.session.nid_c = kcg_lit_int64(0);
  outC->_L212.session.nid_rbc = kcg_lit_int64(0);
  outC->_L212.session.nid_radio = kcg_lit_int64(0);
  outC->_L197 = kcg_true;
  outC->_L195.valid = kcg_true;
  outC->_L195.timestamp = kcg_lit_int64(0);
  outC->_L195.trainPositionIsUnknown = kcg_true;
  outC->_L195.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L195.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L195.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L195.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L195.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L195.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L195.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L195.LRBG.valid = kcg_true;
  outC->_L195.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L195.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L195.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L195.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L195.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L195.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L195.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L195.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L195.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L195.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L195.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L195.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L195.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L195.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L195.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L195.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L195.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L195.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L195.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L195.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L195.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L195.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L195.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L195.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L195.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L195.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L195.LRBG.missed = kcg_true;
  outC->_L195.prvLRBG.valid = kcg_true;
  outC->_L195.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L195.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L195.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L195.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L195.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L195.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L195.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L195.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L195.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L195.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L195.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L195.prvLRBG.missed = kcg_true;
  outC->_L195.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L195.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L195.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L195.linkingIsUsedOnboard = kcg_true;
  outC->_L195.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L195.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L195.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L194 = kcg_true;
  outC->_L193.valid = kcg_true;
  outC->_L193.nid_c = kcg_lit_int64(0);
  outC->_L193.nid_bg = kcg_lit_int64(0);
  outC->_L193.q_link = Q_LINK_Unlinked;
  outC->_L193.location.nominal = kcg_lit_int64(0);
  outC->_L193.location.d_min = kcg_lit_int64(0);
  outC->_L193.location.d_max = kcg_lit_int64(0);
  outC->_L193.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.valid = kcg_true;
  outC->_L193.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L193.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L193.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L193.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L193.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L193.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L193.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L193.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.valid = kcg_true;
  outC->_L193.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L193.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L193.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L193.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L193.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L193.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L193.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L193.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L193.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L193.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L193.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L193.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L193.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L193.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L193.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L193.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L193.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L193.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L193.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L193.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L193.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L193.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L193.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L193.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L193.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L193.missed = kcg_true;
  outC->_L192.linkedBGError = kcg_true;
  outC->_L192.unlinkedBGError = kcg_true;
  outC->_L192.BG_versionIncompatible = kcg_true;
  outC->_L192.radioSequenceError = kcg_true;
  outC->_L192.tNvContactError = kcg_true;
  outC->_L192.otherTimingError = kcg_true;
  outC->_L192.radioMessageConsistencyError = kcg_true;
  outC->_L192.nid_c = kcg_lit_int64(0);
  outC->_L192.nid_errorbg = kcg_lit_int64(0);
  outC->_L187 = kcg_lit_int64(0);
  outC->_L185 = kcg_true;
  outC->_L186 = kcg_true;
  outC->_L174 = kcg_lit_float64(0.0);
  outC->_L173 = kcg_lit_float64(0.0);
  outC->_L172 = kcg_lit_float64(0.0);
  outC->_L171 = kcg_lit_int64(0);
  outC->_L170.o_nominal = kcg_lit_int64(0);
  outC->_L170.o_min = kcg_lit_int64(0);
  outC->_L170.o_max = kcg_lit_int64(0);
  outC->_L169.valid = kcg_true;
  outC->_L169.timestamp = kcg_lit_int64(0);
  outC->_L169.odo.o_nominal = kcg_lit_int64(0);
  outC->_L169.odo.o_min = kcg_lit_int64(0);
  outC->_L169.odo.o_max = kcg_lit_int64(0);
  outC->_L169.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L169.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L169.speed.v_lower = kcg_lit_int64(0);
  outC->_L169.speed.v_upper = kcg_lit_int64(0);
  outC->_L169.acceleration = kcg_lit_int64(0);
  outC->_L169.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L169.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L164.valid = kcg_true;
  outC->_L164.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L164.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L164.btm_msg.present = kcg_true;
  outC->_L164.btm_msg.checkResult = kcg_true;
  outC->_L164.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L164.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L164.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L164.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L164.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L164.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L164.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L164.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L164.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L164.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L164.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L164.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L164.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L164.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L164.rtm_msg.present = kcg_true;
  outC->_L164.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L164.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L164.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L164.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L164.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L164.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L164.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L164.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L164.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L164.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L164.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L164.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L164.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
    outC->_L164.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L164.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L164.packets.PacketHeaders[idx3].startAddress = kcg_lit_int64(0);
    outC->_L164.packets.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L164.packets.PacketData[idx4] = kcg_lit_int64(0);
  }
  outC->_L163 = kcg_lit_int64(0);
  outC->_L162 = kcg_lit_int64(0);
  outC->_L160 = kcg_lit_int64(0);
  outC->_L161 = kcg_lit_int64(0);
  outC->_L159.pendingL1Transition = kcg_true;
  outC->_L159.pendingL12L3Transition = kcg_true;
  outC->_L159.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L159.emergencyStopAccepted = kcg_true;
  outC->_L159.lastAckTextMessageId = kcg_lit_int64(0);
  outC->_L159.pendingNTCTransition = kcg_true;
  outC->_L159.SPPAndGradientOnBoard = kcg_true;
  outC->_L159.MACoverNotFullLength = kcg_true;
  outC->_L151 = kcg_true;
  outC->_L150 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L145 = kcg_true;
  outC->_L144 = kcg_true;
  outC->_L143 = kcg_true;
  outC->_L142 = kcg_lit_int64(0);
  outC->_L141 = kcg_lit_int64(0);
  outC->_L140 = kcg_lit_int64(0);
  outC->_L139.valid = kcg_true;
  outC->_L139.timestamp = kcg_lit_int64(0);
  outC->_L139.odo.o_nominal = kcg_lit_int64(0);
  outC->_L139.odo.o_min = kcg_lit_int64(0);
  outC->_L139.odo.o_max = kcg_lit_int64(0);
  outC->_L139.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L139.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L139.speed.v_lower = kcg_lit_int64(0);
  outC->_L139.speed.v_upper = kcg_lit_int64(0);
  outC->_L139.acceleration = kcg_lit_int64(0);
  outC->_L139.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L139.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L138 = kcg_true;
  outC->_L129.linkedBGError = kcg_true;
  outC->_L129.unlinkedBGError = kcg_true;
  outC->_L129.BG_versionIncompatible = kcg_true;
  outC->_L129.radioSequenceError = kcg_true;
  outC->_L129.tNvContactError = kcg_true;
  outC->_L129.otherTimingError = kcg_true;
  outC->_L129.radioMessageConsistencyError = kcg_true;
  outC->_L129.nid_c = kcg_lit_int64(0);
  outC->_L129.nid_errorbg = kcg_lit_int64(0);
  outC->_L123 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L102.valid = kcg_true;
  outC->_L102.source = msrc_undefined_Common_Types_Pkg;
  outC->_L102.radioMetadata.t_train_reference = kcg_true;
  outC->_L102.radioMetadata.nid_em = kcg_true;
  outC->_L102.radioMetadata.q_scale = kcg_true;
  outC->_L102.radioMetadata.d_sr = kcg_true;
  outC->_L102.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L102.radioMetadata.d_ref = kcg_true;
  outC->_L102.radioMetadata.q_dir = kcg_true;
  outC->_L102.radioMetadata.d_emergencystop = kcg_true;
  outC->_L102.radioMetadata.m_version = kcg_true;
  outC->_L102.BG_Common_Header.valid = kcg_true;
  outC->_L102.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L102.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L102.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L102.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L102.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L102.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L102.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L102.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L102.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L102.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L102.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L102.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L102.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L102.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L102.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L102.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L102.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L102.packets.PacketHeaders[idx5].nid_packet = kcg_lit_int64(0);
    outC->_L102.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L102.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L102.packets.PacketHeaders[idx5].startAddress = kcg_lit_int64(0);
    outC->_L102.packets.PacketHeaders[idx5].endAddress = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L102.packets.PacketData[idx6] = kcg_lit_int64(0);
  }
  outC->_L102.sendingRBC.valid = kcg_true;
  outC->_L102.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L102.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L102.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L106.valid = kcg_true;
  outC->_L106.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L106.nid_c = kcg_lit_int64(0);
  outC->_L106.nid_RBC = kcg_lit_int64(0);
  outC->_L106.nid_radio = kcg_lit_int64(0);
  outC->_L106.nid_mn = kcg_lit_int64(0);
  outC->_L109.compatibleModeAndLevel = kcg_true;
  outC->_L109.level = M_LEVEL_Level_0;
  outC->_L109.newLevel = kcg_true;
  outC->_L109.Mode = M_MODE_Full_Supervision;
  outC->_L109.newMode = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L88.valid = kcg_true;
  outC->_L88.timestamp = kcg_lit_int64(0);
  outC->_L88.trainPositionIsUnknown = kcg_true;
  outC->_L88.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L88.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L88.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L88.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L88.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L88.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L88.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L88.LRBG.valid = kcg_true;
  outC->_L88.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L88.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L88.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L88.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L88.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L88.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L88.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L88.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L88.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L88.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L88.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L88.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L88.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L88.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L88.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L88.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L88.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L88.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L88.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L88.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L88.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L88.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L88.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L88.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L88.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int64(0);
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L88.LRBG.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
  }
  outC->_L88.LRBG.missed = kcg_true;
  outC->_L88.prvLRBG.valid = kcg_true;
  outC->_L88.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L88.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L88.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L88.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L88.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L88.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L88.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L88.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L88.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L88.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int64(0);
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int64(0);
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int64(0);
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L88.prvLRBG.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int64(0);
  }
  outC->_L88.prvLRBG.missed = kcg_true;
  outC->_L88.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L88.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L88.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L88.linkingIsUsedOnboard = kcg_true;
  outC->_L88.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L88.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L88.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L87.valid = kcg_true;
  outC->_L87.timestamp = kcg_lit_int64(0);
  outC->_L87.trainPositionIsUnknown = kcg_true;
  outC->_L87.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L87.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L87.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L87.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L87.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L87.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L87.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L87.LRBG.valid = kcg_true;
  outC->_L87.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L87.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L87.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L87.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L87.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L87.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L87.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L87.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L87.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L87.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L87.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L87.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L87.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L87.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L87.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L87.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L87.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L87.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L87.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L87.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L87.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L87.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L87.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L87.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L87.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int64(0);
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int64(0);
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int64(0);
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int64(0);
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L87.LRBG.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int64(0);
  }
  outC->_L87.LRBG.missed = kcg_true;
  outC->_L87.prvLRBG.valid = kcg_true;
  outC->_L87.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L87.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L87.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L87.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L87.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L87.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L87.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L87.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L87.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L87.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int64(0);
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int64(0);
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int64(0);
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int64(0);
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L87.prvLRBG.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int64(0);
  }
  outC->_L87.prvLRBG.missed = kcg_true;
  outC->_L87.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L87.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L87.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L87.linkingIsUsedOnboard = kcg_true;
  outC->_L87.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L87.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L87.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L82.valid = kcg_true;
  outC->_L82.timestamp = kcg_lit_int64(0);
  outC->_L82.trainPositionIsUnknown = kcg_true;
  outC->_L82.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L82.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L82.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L82.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L82.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L82.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L82.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L82.LRBG.valid = kcg_true;
  outC->_L82.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L82.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L82.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L82.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L82.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L82.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L82.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L82.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L82.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L82.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L82.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L82.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L82.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L82.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L82.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L82.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L82.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L82.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L82.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L82.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L82.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L82.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L82.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L82.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int64(0);
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int64(0);
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int64(0);
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int64(0);
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L82.LRBG.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int64(0);
  }
  outC->_L82.LRBG.missed = kcg_true;
  outC->_L82.prvLRBG.valid = kcg_true;
  outC->_L82.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L82.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L82.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L82.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L82.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L82.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L82.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L82.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L82.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L82.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int64(0);
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int64(0);
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int64(0);
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int64(0);
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L82.prvLRBG.infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int64(0);
  }
  outC->_L82.prvLRBG.missed = kcg_true;
  outC->_L82.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L82.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L82.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L82.linkingIsUsedOnboard = kcg_true;
  outC->_L82.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L82.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L82.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L80.valid = kcg_true;
  outC->_L80.nid_c = kcg_lit_int64(0);
  outC->_L80.nid_bg = kcg_lit_int64(0);
  outC->_L80.q_link = Q_LINK_Unlinked;
  outC->_L80.location.nominal = kcg_lit_int64(0);
  outC->_L80.location.d_min = kcg_lit_int64(0);
  outC->_L80.location.d_max = kcg_lit_int64(0);
  outC->_L80.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.valid = kcg_true;
  outC->_L80.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L80.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L80.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L80.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L80.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L80.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L80.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L80.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.valid = kcg_true;
  outC->_L80.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L80.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L80.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L80.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L80.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L80.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L80.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L80.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L80.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L80.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L80.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L80.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L80.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L80.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L80.infoFromPassing.linkedBGs[idx13].nid_LRBG = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
    outC->_L80.infoFromPassing.linkedBGs[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L80.infoFromPassing.linkedBGs[idx13].d_link = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L80.infoFromPassing.linkedBGs[idx13].nid_c = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx13].nid_bg = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L80.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L80.infoFromPassing.linkedBGs[idx13].q_locacc = kcg_lit_int64(0);
  }
  outC->_L80.missed = kcg_true;
  outC->_L79.valid = kcg_true;
  outC->_L79.nid_c = kcg_lit_int64(0);
  outC->_L79.nid_bg = kcg_lit_int64(0);
  outC->_L79.q_link = Q_LINK_Unlinked;
  outC->_L79.location.nominal = kcg_lit_int64(0);
  outC->_L79.location.d_min = kcg_lit_int64(0);
  outC->_L79.location.d_max = kcg_lit_int64(0);
  outC->_L79.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.valid = kcg_true;
  outC->_L79.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L79.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L79.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L79.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L79.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L79.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L79.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.valid = kcg_true;
  outC->_L79.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L79.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L79.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L79.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L79.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L79.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L79.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L79.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L79.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L79.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L79.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L79.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L79.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L79.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L79.infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int64(0);
    outC->_L79.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->_L79.infoFromPassing.linkedBGs[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L79.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int64(0);
    outC->_L79.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L79.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int64(0);
    outC->_L79.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int64(0);
    outC->_L79.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L79.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L79.infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int64(0);
  }
  outC->_L79.missed = kcg_true;
  outC->_L69 = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 41; idx16++) {
    outC->_L68[idx16].valid = kcg_true;
    outC->_L68[idx16].nid_c = kcg_lit_int64(0);
    outC->_L68[idx16].nid_bg = kcg_lit_int64(0);
    outC->_L68[idx16].q_link = Q_LINK_Unlinked;
    outC->_L68[idx16].location.nominal = kcg_lit_int64(0);
    outC->_L68[idx16].location.d_min = kcg_lit_int64(0);
    outC->_L68[idx16].location.d_max = kcg_lit_int64(0);
    outC->_L68[idx16].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.valid = kcg_true;
    outC->_L68[idx16].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L68[idx16].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L68[idx16].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L68[idx16].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L68[idx16].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L68[idx16].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L68[idx16].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.valid = kcg_true;
    outC->_L68[idx16].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L68[idx16].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L68[idx16].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L68[idx16].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L68[idx16].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L68[idx16].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L68[idx16].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L68[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L68[idx16].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L68[idx16].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L68[idx16].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx15 = 0; idx15 < 33; idx15++) {
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].valid = kcg_true;
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int64(0);
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int64(0);
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int64(0);
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int64(0);
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L68[idx16].infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int64(0);
    }
    outC->_L68[idx16].missed = kcg_true;
  }
  outC->_L65.valid = kcg_true;
  outC->_L65.source = msrc_undefined_Common_Types_Pkg;
  outC->_L65.radioMetadata.t_train_reference = kcg_true;
  outC->_L65.radioMetadata.nid_em = kcg_true;
  outC->_L65.radioMetadata.q_scale = kcg_true;
  outC->_L65.radioMetadata.d_sr = kcg_true;
  outC->_L65.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L65.radioMetadata.d_ref = kcg_true;
  outC->_L65.radioMetadata.q_dir = kcg_true;
  outC->_L65.radioMetadata.d_emergencystop = kcg_true;
  outC->_L65.radioMetadata.m_version = kcg_true;
  outC->_L65.BG_Common_Header.valid = kcg_true;
  outC->_L65.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L65.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L65.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L65.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L65.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L65.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L65.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L65.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L65.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L65.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L65.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L65.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L65.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L65.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L65.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L65.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L65.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L65.packets.PacketHeaders[idx17].nid_packet = kcg_lit_int64(0);
    outC->_L65.packets.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L65.packets.PacketHeaders[idx17].valid = kcg_true;
    outC->_L65.packets.PacketHeaders[idx17].startAddress = kcg_lit_int64(0);
    outC->_L65.packets.PacketHeaders[idx17].endAddress = kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L65.packets.PacketData[idx18] = kcg_lit_int64(0);
  }
  outC->_L65.sendingRBC.valid = kcg_true;
  outC->_L65.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L65.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L65.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L64.valid = kcg_true;
  outC->_L64.source = msrc_undefined_Common_Types_Pkg;
  outC->_L64.radioMetadata.t_train_reference = kcg_true;
  outC->_L64.radioMetadata.nid_em = kcg_true;
  outC->_L64.radioMetadata.q_scale = kcg_true;
  outC->_L64.radioMetadata.d_sr = kcg_true;
  outC->_L64.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L64.radioMetadata.d_ref = kcg_true;
  outC->_L64.radioMetadata.q_dir = kcg_true;
  outC->_L64.radioMetadata.d_emergencystop = kcg_true;
  outC->_L64.radioMetadata.m_version = kcg_true;
  outC->_L64.BG_Common_Header.valid = kcg_true;
  outC->_L64.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L64.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L64.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L64.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L64.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L64.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L64.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L64.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L64.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L64.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L64.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L64.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L64.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L64.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L64.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L64.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L64.packets.PacketHeaders[idx19].nid_packet = kcg_lit_int64(0);
    outC->_L64.packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L64.packets.PacketHeaders[idx19].valid = kcg_true;
    outC->_L64.packets.PacketHeaders[idx19].startAddress = kcg_lit_int64(0);
    outC->_L64.packets.PacketHeaders[idx19].endAddress = kcg_lit_int64(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L64.packets.PacketData[idx20] = kcg_lit_int64(0);
  }
  outC->_L64.sendingRBC.valid = kcg_true;
  outC->_L64.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L64.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L64.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L63 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L52 = msrc_undefined_Common_Types_Pkg;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  for (idx22 = 0; idx22 < 41; idx22++) {
    outC->_L43[idx22].valid = kcg_true;
    outC->_L43[idx22].nid_c = kcg_lit_int64(0);
    outC->_L43[idx22].nid_bg = kcg_lit_int64(0);
    outC->_L43[idx22].q_link = Q_LINK_Unlinked;
    outC->_L43[idx22].location.nominal = kcg_lit_int64(0);
    outC->_L43[idx22].location.d_min = kcg_lit_int64(0);
    outC->_L43[idx22].location.d_max = kcg_lit_int64(0);
    outC->_L43[idx22].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.valid = kcg_true;
    outC->_L43[idx22].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L43[idx22].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L43[idx22].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L43[idx22].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L43[idx22].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L43[idx22].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L43[idx22].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.valid = kcg_true;
    outC->_L43[idx22].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L43[idx22].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L43[idx22].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L43[idx22].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L43[idx22].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L43[idx22].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L43[idx22].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L43[idx22].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L43[idx22].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L43[idx22].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L43[idx22].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx21 = 0; idx21 < 33; idx21++) {
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].valid = kcg_true;
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int64(0);
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int64(0);
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int64(0);
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int64(0);
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L43[idx22].infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int64(0);
    }
    outC->_L43[idx22].missed = kcg_true;
  }
  outC->_L38.valid = kcg_true;
  outC->_L38.source = msrc_undefined_Common_Types_Pkg;
  outC->_L38.radioMetadata.t_train_reference = kcg_true;
  outC->_L38.radioMetadata.nid_em = kcg_true;
  outC->_L38.radioMetadata.q_scale = kcg_true;
  outC->_L38.radioMetadata.d_sr = kcg_true;
  outC->_L38.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L38.radioMetadata.d_ref = kcg_true;
  outC->_L38.radioMetadata.q_dir = kcg_true;
  outC->_L38.radioMetadata.d_emergencystop = kcg_true;
  outC->_L38.radioMetadata.m_version = kcg_true;
  outC->_L38.BG_Common_Header.valid = kcg_true;
  outC->_L38.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L38.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L38.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L38.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L38.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L38.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L38.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L38.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L38.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L38.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L38.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L38.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L38.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L38.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L38.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L38.packets.PacketHeaders[idx23].nid_packet = kcg_lit_int64(0);
    outC->_L38.packets.PacketHeaders[idx23].q_dir = Q_DIR_Reverse;
    outC->_L38.packets.PacketHeaders[idx23].valid = kcg_true;
    outC->_L38.packets.PacketHeaders[idx23].startAddress = kcg_lit_int64(0);
    outC->_L38.packets.PacketHeaders[idx23].endAddress = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L38.packets.PacketData[idx24] = kcg_lit_int64(0);
  }
  outC->_L38.sendingRBC.valid = kcg_true;
  outC->_L38.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L38.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L38.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L37 = msrc_undefined_Common_Types_Pkg;
  outC->_L36 = kcg_true;
  outC->_L33 = msrc_undefined_Common_Types_Pkg;
  outC->_L28 = M_MODE_Full_Supervision;
  outC->_L27 = kcg_true;
  outC->_L23.valid = kcg_true;
  outC->_L23.source = msrc_undefined_Common_Types_Pkg;
  outC->_L23.radioMetadata.t_train_reference = kcg_true;
  outC->_L23.radioMetadata.nid_em = kcg_true;
  outC->_L23.radioMetadata.q_scale = kcg_true;
  outC->_L23.radioMetadata.d_sr = kcg_true;
  outC->_L23.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L23.radioMetadata.d_ref = kcg_true;
  outC->_L23.radioMetadata.q_dir = kcg_true;
  outC->_L23.radioMetadata.d_emergencystop = kcg_true;
  outC->_L23.radioMetadata.m_version = kcg_true;
  outC->_L23.BG_Common_Header.valid = kcg_true;
  outC->_L23.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L23.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L23.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L23.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L23.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L23.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L23.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L23.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L23.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L23.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L23.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L23.packets.PacketHeaders[idx25].nid_packet = kcg_lit_int64(0);
    outC->_L23.packets.PacketHeaders[idx25].q_dir = Q_DIR_Reverse;
    outC->_L23.packets.PacketHeaders[idx25].valid = kcg_true;
    outC->_L23.packets.PacketHeaders[idx25].startAddress = kcg_lit_int64(0);
    outC->_L23.packets.PacketHeaders[idx25].endAddress = kcg_lit_int64(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L23.packets.PacketData[idx26] = kcg_lit_int64(0);
  }
  outC->_L23.sendingRBC.valid = kcg_true;
  outC->_L23.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L23.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L23.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.source = msrc_undefined_Common_Types_Pkg;
  outC->_L21.radioMetadata.t_train_reference = kcg_true;
  outC->_L21.radioMetadata.nid_em = kcg_true;
  outC->_L21.radioMetadata.q_scale = kcg_true;
  outC->_L21.radioMetadata.d_sr = kcg_true;
  outC->_L21.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L21.radioMetadata.d_ref = kcg_true;
  outC->_L21.radioMetadata.q_dir = kcg_true;
  outC->_L21.radioMetadata.d_emergencystop = kcg_true;
  outC->_L21.radioMetadata.m_version = kcg_true;
  outC->_L21.BG_Common_Header.valid = kcg_true;
  outC->_L21.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L21.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L21.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L21.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L21.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L21.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L21.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L21.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L21.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L21.packets.PacketHeaders[idx27].nid_packet = kcg_lit_int64(0);
    outC->_L21.packets.PacketHeaders[idx27].q_dir = Q_DIR_Reverse;
    outC->_L21.packets.PacketHeaders[idx27].valid = kcg_true;
    outC->_L21.packets.PacketHeaders[idx27].startAddress = kcg_lit_int64(0);
    outC->_L21.packets.PacketHeaders[idx27].endAddress = kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->_L21.packets.PacketData[idx28] = kcg_lit_int64(0);
  }
  outC->_L21.sendingRBC.valid = kcg_true;
  outC->_L21.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L21.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L21.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.source = msrc_undefined_Common_Types_Pkg;
  outC->_L14.radioMetadata.t_train_reference = kcg_true;
  outC->_L14.radioMetadata.nid_em = kcg_true;
  outC->_L14.radioMetadata.q_scale = kcg_true;
  outC->_L14.radioMetadata.d_sr = kcg_true;
  outC->_L14.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L14.radioMetadata.d_ref = kcg_true;
  outC->_L14.radioMetadata.q_dir = kcg_true;
  outC->_L14.radioMetadata.d_emergencystop = kcg_true;
  outC->_L14.radioMetadata.m_version = kcg_true;
  outC->_L14.BG_Common_Header.valid = kcg_true;
  outC->_L14.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L14.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L14.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L14.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L14.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L14.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L14.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L14.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L14.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L14.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L14.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L14.packets.PacketHeaders[idx29].nid_packet = kcg_lit_int64(0);
    outC->_L14.packets.PacketHeaders[idx29].q_dir = Q_DIR_Reverse;
    outC->_L14.packets.PacketHeaders[idx29].valid = kcg_true;
    outC->_L14.packets.PacketHeaders[idx29].startAddress = kcg_lit_int64(0);
    outC->_L14.packets.PacketHeaders[idx29].endAddress = kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L14.packets.PacketData[idx30] = kcg_lit_int64(0);
  }
  outC->_L14.sendingRBC.valid = kcg_true;
  outC->_L14.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L14.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L14.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L13.registration.valid = kcg_true;
  outC->_L13.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L13.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L13.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L13.registration.nid_mn = kcg_lit_int64(0);
  outC->_L13.connection.valid = kcg_true;
  outC->_L13.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L13.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L13.connection.nid_radio = kcg_lit_int64(0);
  outC->_L13.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L13.connection.connectionLost = kcg_true;
  outC->_L13.connection.isInRadioHole = kcg_true;
  outC->_L13.session.valid = kcg_true;
  outC->_L13.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L13.session.nid_c = kcg_lit_int64(0);
  outC->_L13.session.nid_rbc = kcg_lit_int64(0);
  outC->_L13.session.nid_radio = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.systemTime = kcg_lit_int64(0);
  outC->_L8.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L8.telegramHeaders.present = kcg_true;
  for (idx33 = 0; idx33 < 8; idx33++) {
    outC->_L8.telegramHeaders.Telegrams[idx33].valid = kcg_true;
    outC->_L8.telegramHeaders.Telegrams[idx33].checkResult = kcg_true;
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L8.telegramHeaders.Telegrams[idx33].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx31 = 0; idx31 < 30; idx31++) {
      outC->_L8.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].nid_packet =
        kcg_lit_int64(0);
      outC->_L8.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].q_dir =
        Q_DIR_Reverse;
      outC->_L8.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].valid =
        kcg_true;
      outC->_L8.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].startAddress =
        kcg_lit_int64(0);
      outC->_L8.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].endAddress =
        kcg_lit_int64(0);
    }
    for (idx32 = 0; idx32 < 500; idx32++) {
      outC->_L8.telegramHeaders.Telegrams[idx33].packets.PacketData[idx32] =
        kcg_lit_int64(0);
    }
  }
  outC->_L8.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L8.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L8.radio_Msg.present = kcg_true;
  outC->_L8.radio_Msg.consistencyError = kcg_true;
  outC->_L8.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L8.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.t_train_reference = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L8.radio_Msg.header.d_emergencystop = kcg_lit_int64(0);
  outC->_L8.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L8.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L8.radio_Msg.packets.PacketHeaders[idx34].nid_packet = kcg_lit_int64(0);
    outC->_L8.radio_Msg.packets.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->_L8.radio_Msg.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->_L8.radio_Msg.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int64(0);
    outC->_L8.radio_Msg.packets.PacketHeaders[idx34].endAddress = kcg_lit_int64(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L8.radio_Msg.packets.PacketData[idx35] = kcg_lit_int64(0);
  }
  outC->_L8.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L8.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L8.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L8.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L7.compatibleModeAndLevel = kcg_true;
  outC->_L7.level = M_LEVEL_Level_0;
  outC->_L7.newLevel = kcg_true;
  outC->_L7.Mode = M_MODE_Full_Supervision;
  outC->_L7.newMode = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int64(0);
  outC->_L2.odo.o_nominal = kcg_lit_int64(0);
  outC->_L2.odo.o_min = kcg_lit_int64(0);
  outC->_L2.odo.o_max = kcg_lit_int64(0);
  outC->_L2.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L2.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L2.speed.v_lower = kcg_lit_int64(0);
  outC->_L2.speed.v_upper = kcg_lit_int64(0);
  outC->_L2.acceleration = kcg_lit_int64(0);
  outC->_L2.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.btm_msg.present = kcg_true;
  outC->_L1.btm_msg.checkResult = kcg_true;
  outC->_L1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.rtm_msg.present = kcg_true;
  outC->_L1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L1.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L1.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L1.packets.PacketHeaders[idx36].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx36].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx36].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx36].endAddress = kcg_lit_int64(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L1.packets.PacketData[idx37] = kcg_lit_int64(0);
  }
  outC->MsgErrors.linkedBGError = kcg_true;
  outC->MsgErrors.unlinkedBGError = kcg_true;
  outC->MsgErrors.BG_versionIncompatible = kcg_true;
  outC->MsgErrors.radioSequenceError = kcg_true;
  outC->MsgErrors.tNvContactError = kcg_true;
  outC->MsgErrors.otherTimingError = kcg_true;
  outC->MsgErrors.radioMessageConsistencyError = kcg_true;
  outC->MsgErrors.nid_c = kcg_lit_int64(0);
  outC->MsgErrors.nid_errorbg = kcg_lit_int64(0);
  outC->countPackets = kcg_lit_int64(0);
  outC->errorBG = kcg_true;
  outC->debug_ErrorMSG = kcg_true;
  outC->positionM = kcg_lit_float64(0.0);
  outC->tNvContactError = kcg_true;
  outC->trainPositionTest.valid = kcg_true;
  outC->trainPositionTest.timestamp = kcg_lit_int64(0);
  outC->trainPositionTest.trainPositionIsUnknown = kcg_true;
  outC->trainPositionTest.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->trainPositionTest.trainPosition.nominal = kcg_lit_int64(0);
  outC->trainPositionTest.trainPosition.d_min = kcg_lit_int64(0);
  outC->trainPositionTest.trainPosition.d_max = kcg_lit_int64(0);
  outC->trainPositionTest.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->trainPositionTest.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->trainPositionTest.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.valid = kcg_true;
  outC->trainPositionTest.LRBG.nid_c = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.nid_bg = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionTest.LRBG.location.nominal = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.location.d_min = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.location.d_max = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionTest.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionTest.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionTest.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx38 = 0; idx38 < 33; idx38++) {
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].valid = kcg_true;
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].nid_LRBG =
      kcg_lit_int64(0);
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].d_link =
      kcg_lit_int64(0);
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].nid_c =
      kcg_lit_int64(0);
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].nid_bg =
      kcg_lit_int64(0);
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionTest.LRBG.infoFromPassing.linkedBGs[idx38].q_locacc =
      kcg_lit_int64(0);
  }
  outC->trainPositionTest.LRBG.missed = kcg_true;
  outC->trainPositionTest.prvLRBG.valid = kcg_true;
  outC->trainPositionTest.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionTest.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionTest.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionTest.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionTest.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx39 = 0; idx39 < 33; idx39++) {
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].valid =
      kcg_true;
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].nid_LRBG =
      kcg_lit_int64(0);
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].d_link =
      kcg_lit_int64(0);
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].nid_c =
      kcg_lit_int64(0);
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].nid_bg =
      kcg_lit_int64(0);
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionTest.prvLRBG.infoFromPassing.linkedBGs[idx39].q_locacc =
      kcg_lit_int64(0);
  }
  outC->trainPositionTest.prvLRBG.missed = kcg_true;
  outC->trainPositionTest.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPositionTest.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPositionTest.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPositionTest.linkingIsUsedOnboard = kcg_true;
  outC->trainPositionTest.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->trainPositionTest.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->trainPositionTest.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->LRBG.valid = kcg_true;
  outC->LRBG.nid_c = kcg_lit_int64(0);
  outC->LRBG.nid_bg = kcg_lit_int64(0);
  outC->LRBG.q_link = Q_LINK_Unlinked;
  outC->LRBG.location.nominal = kcg_lit_int64(0);
  outC->LRBG.location.d_min = kcg_lit_int64(0);
  outC->LRBG.location.d_max = kcg_lit_int64(0);
  outC->LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.valid = kcg_true;
  outC->LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.valid = kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->LRBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx40 = 0; idx40 < 33; idx40++) {
    outC->LRBG.infoFromPassing.linkedBGs[idx40].valid = kcg_true;
    outC->LRBG.infoFromPassing.linkedBGs[idx40].nid_LRBG = kcg_lit_int64(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx40].q_dir = Q_DIR_Reverse;
    outC->LRBG.infoFromPassing.linkedBGs[idx40].q_scale = Q_SCALE_10_cm_scale;
    outC->LRBG.infoFromPassing.linkedBGs[idx40].d_link = kcg_lit_int64(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx40].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->LRBG.infoFromPassing.linkedBGs[idx40].nid_c = kcg_lit_int64(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx40].nid_bg = kcg_lit_int64(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx40].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->LRBG.infoFromPassing.linkedBGs[idx40].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->LRBG.infoFromPassing.linkedBGs[idx40].q_locacc = kcg_lit_int64(0);
  }
  outC->LRBG.missed = kcg_true;
  outC->doRadio = kcg_true;
  outC->doBaliseBranch = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outCheckErrors.linkedBGError = kcg_true;
  outC->outCheckErrors.unlinkedBGError = kcg_true;
  outC->outCheckErrors.BG_versionIncompatible = kcg_true;
  outC->outCheckErrors.radioSequenceError = kcg_true;
  outC->outCheckErrors.tNvContactError = kcg_true;
  outC->outCheckErrors.otherTimingError = kcg_true;
  outC->outCheckErrors.radioMessageConsistencyError = kcg_true;
  outC->outCheckErrors.nid_c = kcg_lit_int64(0);
  outC->outCheckErrors.nid_errorbg = kcg_lit_int64(0);
  outC->BadBaliseMessageToDMI = kcg_true;
  outC->ApplyServiceBrake = kcg_true;
  outC->outputMessage.valid = kcg_true;
  outC->outputMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessage.radioMetadata.nid_em = kcg_true;
  outC->outputMessage.radioMetadata.q_scale = kcg_true;
  outC->outputMessage.radioMetadata.d_sr = kcg_true;
  outC->outputMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessage.radioMetadata.d_ref = kcg_true;
  outC->outputMessage.radioMetadata.q_dir = kcg_true;
  outC->outputMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessage.radioMetadata.m_version = kcg_true;
  outC->outputMessage.BG_Common_Header.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outputMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outputMessage.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->outputMessage.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->outputMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outputMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessage.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outputMessage.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->outputMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx41 = 0; idx41 < 30; idx41++) {
    outC->outputMessage.packets.PacketHeaders[idx41].nid_packet = kcg_lit_int64(0);
    outC->outputMessage.packets.PacketHeaders[idx41].q_dir = Q_DIR_Reverse;
    outC->outputMessage.packets.PacketHeaders[idx41].valid = kcg_true;
    outC->outputMessage.packets.PacketHeaders[idx41].startAddress =
      kcg_lit_int64(0);
    outC->outputMessage.packets.PacketHeaders[idx41].endAddress = kcg_lit_int64(0);
  }
  for (idx42 = 0; idx42 < 500; idx42++) {
    outC->outputMessage.packets.PacketData[idx42] = kcg_lit_int64(0);
  }
  outC->outputMessage.sendingRBC.valid = kcg_true;
  outC->outputMessage.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->outputMessage.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->outputMessage.sendingRBC.device_id = kcg_lit_int64(0);
  /* _L185=(xdebugSupport_Pkg::checkOnErrors#1)/ */
  checkOnErrors_init_xdebugSupport_Pkg(&outC->Context_checkOnErrors_1);
  /* _L187=(xdebugSupport_Pkg::countPackets#1)/ */
  countPackets_init_xdebugSupport_Pkg(&outC->Context_countPackets_1);
  /* _L138=(CheckEuroradioMessage::ContinuousTimeoutCheck#1)/ */
  ContinuousTimeoutCheck_init_CheckEuroradioMessage(
    &outC->Context_ContinuousTimeoutCheck_1);
  /* _L102=(InformationFilter_Pkg::InformationFilter#3)/ */
  InformationFilter_init_InformationFilter_Pkg(
    &outC->Context_InformationFilter_3);
  /* _L21=(ValidateDataDirection_Pkg::validateDataDirection#1)/ */
  validateDataDirection_init_ValidateDataDirection_Pkg(
    &outC->Context_validateDataDirection_1);
  /* _L38=(CheckEuroradioMessage::CheckEuroRadioMessage#1)/ */
  CheckEuroRadioMessage_init_CheckEuroradioMessage(
    &outC->Context_CheckEuroRadioMessage_1);
  /* _L14=(CheckBGConsistency_Pkg::CheckBGConsistency#1)/ */
  CheckBGConsistency_init_CheckBGConsistency_Pkg(
    &outC->Context_CheckBGConsistency_1);
  /* _L8=(Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg#1)/ */
  Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_Receive_TrackSide_Msg_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* _L185=(xdebugSupport_Pkg::checkOnErrors#1)/ */
  checkOnErrors_reset_xdebugSupport_Pkg(&outC->Context_checkOnErrors_1);
  /* _L187=(xdebugSupport_Pkg::countPackets#1)/ */
  countPackets_reset_xdebugSupport_Pkg(&outC->Context_countPackets_1);
  /* _L138=(CheckEuroradioMessage::ContinuousTimeoutCheck#1)/ */
  ContinuousTimeoutCheck_reset_CheckEuroradioMessage(
    &outC->Context_ContinuousTimeoutCheck_1);
  /* _L102=(InformationFilter_Pkg::InformationFilter#3)/ */
  InformationFilter_reset_InformationFilter_Pkg(
    &outC->Context_InformationFilter_3);
  /* _L21=(ValidateDataDirection_Pkg::validateDataDirection#1)/ */
  validateDataDirection_reset_ValidateDataDirection_Pkg(
    &outC->Context_validateDataDirection_1);
  /* _L38=(CheckEuroradioMessage::CheckEuroRadioMessage#1)/ */
  CheckEuroRadioMessage_reset_CheckEuroradioMessage(
    &outC->Context_CheckEuroRadioMessage_1);
  /* _L14=(CheckBGConsistency_Pkg::CheckBGConsistency#1)/ */
  CheckBGConsistency_reset_CheckBGConsistency_Pkg(
    &outC->Context_CheckBGConsistency_1);
  /* _L8=(Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg#1)/ */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_Receive_TrackSide_Msg_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

