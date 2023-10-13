/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition/ */
void MEM_dataForLevelTransition_EVC_MEM_Support_Pkg(
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* storedData/ */
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *storedData,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* positionNeeded/ */
  kcg_bool positionNeeded,
  /* actualLevel/ */
  M_LEVEL actualLevel,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg *outC)
{
  static kcg_bool op_call;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_op_call;
  static kcg_bool _2_op_call;
  static NID_LRBG _3_op_call;
  static M_LEVEL _4_op_call;
  static P80_ModeProfiles_T_Packet_Types_Pkg _5_op_call;
  static M_LEVEL _6_op_call;
  static P015_OBU_T_TM noname;
  static P021_OBU_T_TM _7_noname;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2, actualMessage);
  outC->_L137 = outC->_L2.Radio_Common_Header.nid_message;
  outC->_L138 = cm03_Movement_Authority_Id_Pkg;
  outC->_L139 = outC->_L138 == outC->_L137;
  outC->isMsg3 = outC->_L139;
  outC->_L147 = outC->isMsg3;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L19, &outC->_L2.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L75, &outC->_L19.PacketHeaders);
  outC->_L76 = cp041_Level_Transition_Order_Id_Pkg;
  /* _L74=(xdebugSupport_Pkg::packetValid#2)/ */
  packetValid_xdebugSupport_Pkg(
    &outC->_L75,
    outC->_L76,
    &outC->Context_packetValid_2);
  outC->_L74 = outC->Context_packetValid_2.isValid;
  outC->p41Valid = outC->_L74;
  outC->_L120 = outC->p41Valid;
  outC->every2 = outC->_L120;
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L23,
    storedData);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L24,
    &outC->_L23.p41);
  if (outC->every2) {
    /* _L117=(xdebugSupport_Pkg::getP41Level#1)/ */
    getP41Level_xdebugSupport_Pkg(&outC->_L24, &outC->Context_getP41Level_1);
    _4_op_call = outC->Context_getP41Level_1.p41_level;
  }
  outC->_L119 = M_LEVEL_Level_0;
  if (outC->every2) {
    outC->_L117 = _4_op_call;
  }
  else {
    outC->_L117 = outC->_L119;
  }
  outC->levelStored = outC->_L117;
  outC->_L156 = outC->levelStored;
  outC->_L149 = outC->p41Valid;
  outC->every = outC->_L149;
  /* _L18=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_TM_specific(&outC->_L19, &outC->Context_Read_P041_Legacy_1);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L18,
    &outC->Context_Read_P041_Legacy_1.P041_legacy_out);
  if (outC->every) {
    /* _L148=(xdebugSupport_Pkg::getP41Level#2)/ */
    getP41Level_xdebugSupport_Pkg(&outC->_L18, &outC->Context_getP41Level_2);
    _6_op_call = outC->Context_getP41Level_2.p41_level;
  }
  outC->_L151 = M_LEVEL_Level_0;
  if (outC->every) {
    outC->_L148 = _6_op_call;
  }
  else {
    outC->_L148 = outC->_L151;
  }
  outC->levelIn = outC->_L148;
  outC->_L155 = outC->levelIn;
  outC->_L153 = outC->_L155 != outC->_L156;
  outC->_L159 = outC->p41Valid;
  outC->_L158 = outC->_L159 & outC->_L153;
  outC->noConflictWithOngoingTransmission = outC->_L158;
  outC->_L167 = outC->noConflictWithOngoingTransmission;
  outC->_L68 = positionNeeded;
  outC->_L71 = outC->_L68 | outC->_L167 | outC->_L147;
  outC->every5 = outC->_L71;
  outC->_L166 = outC->noConflictWithOngoingTransmission;
  outC->_L168 = outC->isMsg3;
  outC->_L169 = outC->_L168 | outC->_L166;
  outC->every3 = outC->_L169;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L49, actualMessage);
  if (outC->every3) {
    /* _L116=(xdebugSupport_Pkg::getLRBGFromMsg#1)/ */
    getLRBGFromMsg_xdebugSupport_Pkg(
      &outC->_L49,
      &outC->Context_getLRBGFromMsg_1);
    _3_op_call = outC->Context_getLRBGFromMsg_1.LRBG;
  }
  outC->_L55 = outC->_L23.LRBG;
  if (outC->every3) {
    outC->_L116 = _3_op_call;
  }
  else {
    outC->_L116 = outC->_L55;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L62, trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L125,
    trainProperties);
  if (outC->every5) {
    /* _L61=(EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG#1)/ */
    MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg(
      outC->_L116,
      &outC->_L62,
      &outC->_L125,
      &outC->Context_MEM_locationOfReferenceLRBG_1);
    _1_op_call = outC->Context_MEM_locationOfReferenceLRBG_1.position;
    op_call = outC->Context_MEM_locationOfReferenceLRBG_1.passed;
  }
  outC->_L86 = outC->p41Valid;
  outC->every4 = outC->_L86;
  if (outC->every4) {
    /* _L85=(xdebugSupport_Pkg::checkNTCPriority#1)/ */
    checkNTCPriority_xdebugSupport_Pkg(
      &outC->_L18,
      &outC->Context_checkNTCPriority_1);
    _2_op_call = outC->Context_checkNTCPriority_1.isNTC;
  }
  /* _L129=(TM::Read_P080#1)/ */
  Read_P080_TM(&outC->_L19, &outC->Context_Read_P080_1);
  outC->_L129 = outC->Context_Read_P080_1.received;
  kcg_copy_P080_OBU_T_TM(&outC->_L130, &outC->Context_Read_P080_1.P080_OBU_out);
  outC->every1 = outC->_L129;
  kcg_copy_P003_OBU_T_TM(&outC->_L136, nationalValues);
  if (outC->every1) {
    /* _L128=(EVC_MEM_Support_Pkg::MEM_convertP80#1)/ */
    MEM_convertP80_EVC_MEM_Support_Pkg(
      &outC->_L130,
      &outC->_L136,
      &outC->Context_MEM_convertP80_1);
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
      &_5_op_call,
      &outC->Context_MEM_convertP80_1.p80);
  }
  outC->_L66 = positionNeeded;
  outC->_L170 = !outC->_L66;
  outC->_L162 = outC->noConflictWithOngoingTransmission;
  outC->_L152 = outC->levelStored;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->_L142,
    (P80_ModeProfiles_T_Packet_Types_Pkg *)
      &Default_P80_legacy_EVC_MEM_Support_Pkg);
  outC->_L141 = outC->isMsg3;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L127, &outC->_L23.p80);
  /* _L140= */
  if (outC->_L141) {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L140, &outC->_L142);
  }
  else {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L140, &outC->_L127);
  }
  outC->p80Valid = outC->_L129;
  outC->_L134 = outC->p80Valid;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->_L132,
    (P80_ModeProfiles_T_Packet_Types_Pkg *)
      &Default_P80_legacy_EVC_MEM_Support_Pkg);
  if (outC->every1) {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L128, &_5_op_call);
  }
  else {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L128, &outC->_L132);
  }
  /* _L133= */
  if (outC->_L134) {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L133, &outC->_L128);
  }
  else {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L133, &outC->_L140);
  }
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L124,
    (P41_LevelTransistionOrders_T_Packet_Types_Pkg *) &cNoP41_EVC_MEM_Support_Pkg);
  outC->_L122 = actualLevel;
  outC->_L121 = outC->_L122 == outC->_L152;
  /* _L123= */
  if (outC->_L121) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L123,
      &outC->_L124);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L123,
      &outC->_L24);
  }
  /* _L13= */
  if (outC->_L162) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L13,
      &outC->_L18);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L13,
      &outC->_L123);
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L26,
    storedData);
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L25,
    &outC->_L26);
  if (kcg_true) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L25.p41,
      &outC->_L13);
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L126,
    &outC->_L25);
  if (kcg_true) {
    kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L126.p80, &outC->_L133);
  }
  outC->_L65 = outC->_L23.referenceLocation;
  if (outC->every5) {
    outC->_L61 = _1_op_call;
  }
  else {
    outC->_L61 = outC->_L65;
  }
  outC->_L87 = kcg_false;
  if (outC->every4) {
    outC->_L85 = _2_op_call;
  }
  else {
    outC->_L85 = outC->_L87;
  }
  outC->ntcRequested = outC->_L85;
  outC->_L84 = outC->ntcRequested;
  outC->_L36 = outC->_L23.p27_received;
  /* _L38=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_TM_specific(
    &outC->_L19,
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L38,
    &outC->Context_Read_P027V1_Legacy_for_ML_1.P027_legacy_out);
  outC->_L43 = outC->_L38.valid;
  outC->_L46 = outC->_L43 | outC->_L36 | outC->_L84;
  outC->_L35 = outC->_L23.p21_received;
  /* _L20=(TM::Read_P021#1)/ */
  Read_P021_TM(&outC->_L19, &outC->Context_Read_P021_1);
  outC->_L20 = outC->Context_Read_P021_1.received;
  kcg_copy_P021_OBU_T_TM(&outC->_L21, &outC->Context_Read_P021_1.P021_OBU_out);
  outC->_L33 = outC->_L20 | outC->_L35;
  outC->_L83 = outC->ntcRequested;
  outC->_L29 = outC->_L23.p15_received;
  /* _L3=(TM::Read_P015#1)/ */
  Read_P015_TM(&outC->_L19, &outC->Context_Read_P015_1);
  outC->_L3 = outC->Context_Read_P015_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L4, &outC->Context_Read_P015_1.P015_OBU_out);
  outC->_L30 = outC->_L3 | outC->_L29 | outC->_L83;
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L28,
    &outC->_L23.p46);
  /* _L11=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_TM_specific(&outC->_L19, &outC->Context_Read_P046_Legacy_1);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L11,
    &outC->Context_Read_P046_Legacy_1.P046_legacy_out);
  outC->_L78 = cp046_Conditional_Level_Transition_Order_Id_Pkg;
  /* _L77=(xdebugSupport_Pkg::packetValid#1)/ */
  packetValid_xdebugSupport_Pkg(
    &outC->_L75,
    outC->_L78,
    &outC->Context_packetValid_1);
  outC->_L77 = outC->Context_packetValid_1.isValid;
  outC->p46Valid = outC->_L77;
  outC->_L48 = outC->p46Valid;
  /* _L10= */
  if (outC->_L48) {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &outC->_L10,
      &outC->_L11);
  }
  else {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &outC->_L10,
      &outC->_L28);
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L27,
    &outC->_L126);
  if (kcg_true) {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &outC->_L27.p46,
      &outC->_L10);
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L31,
    &outC->_L27);
  if (kcg_true) {
    outC->_L31.p15_received = outC->_L30;
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L32,
    &outC->_L31);
  if (kcg_true) {
    outC->_L32.p21_received = outC->_L33;
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L40,
    &outC->_L32);
  if (kcg_true) {
    outC->_L40.p27_received = outC->_L46;
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L59,
    &outC->_L40);
  if (kcg_true) {
    outC->_L59.LRBG = outC->_L116;
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L63,
    &outC->_L59);
  if (kcg_true) {
    outC->_L63.referenceLocation = outC->_L61;
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->outstoredData,
    &outC->_L63);
  if (outC->every5) {
    outC->_L60 = op_call;
  }
  else {
    outC->_L60 = outC->_L170;
  }
  outC->_L73 = !outC->_L60;
  outC->outPositionNeeded = outC->_L73;
  kcg_copy_P021_OBU_T_TM(&_7_noname, &outC->_L21);
  kcg_copy_P015_OBU_T_TM(&noname, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void MEM_dataForLevelTransition_init_EVC_MEM_Support_Pkg(
  outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg *outC)
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

  outC->_L170 = kcg_true;
  outC->_L169 = kcg_true;
  outC->_L168 = kcg_true;
  outC->_L167 = kcg_true;
  outC->_L166 = kcg_true;
  outC->_L162 = kcg_true;
  outC->_L159 = kcg_true;
  outC->_L158 = kcg_true;
  outC->_L156 = M_LEVEL_Level_0;
  outC->_L155 = M_LEVEL_Level_0;
  outC->_L153 = kcg_true;
  outC->_L152 = M_LEVEL_Level_0;
  outC->_L151 = M_LEVEL_Level_0;
  outC->_L148 = M_LEVEL_Level_0;
  outC->_L149 = kcg_true;
  outC->_L147 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L142[idx].valid = kcg_true;
    outC->_L142[idx].q_dir = Q_DIR_Reverse;
    outC->_L142[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L142[idx].d_mamode = kcg_lit_int64(0);
    outC->_L142[idx].m_mamode = M_MAMODE_On_Sight;
    outC->_L142[idx].v_mamode = kcg_lit_int64(0);
    outC->_L142[idx].l_mamode = kcg_lit_int64(0);
    outC->_L142[idx].l_ackmamode = kcg_lit_int64(0);
    outC->_L142[idx].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L141 = kcg_true;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L140[idx1].valid = kcg_true;
    outC->_L140[idx1].q_dir = Q_DIR_Reverse;
    outC->_L140[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L140[idx1].d_mamode = kcg_lit_int64(0);
    outC->_L140[idx1].m_mamode = M_MAMODE_On_Sight;
    outC->_L140[idx1].v_mamode = kcg_lit_int64(0);
    outC->_L140[idx1].l_mamode = kcg_lit_int64(0);
    outC->_L140[idx1].l_ackmamode = kcg_lit_int64(0);
    outC->_L140[idx1].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L139 = kcg_true;
  outC->_L138 = kcg_lit_int64(0);
  outC->_L137 = kcg_lit_int64(0);
  outC->_L136.valid = kcg_true;
  outC->_L136.nid_packet = kcg_lit_int64(0);
  outC->_L136.q_dir = Q_DIR_Reverse;
  outC->_L136.q_scale = Q_SCALE_10_cm_scale;
  outC->_L136.d_validnv = kcg_lit_int64(0);
  outC->_L136.nid_c = kcg_lit_int64(0);
  outC->_L136.n_iter_nid_c = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L136.nid_c_list[idx2].valid = kcg_true;
    outC->_L136.nid_c_list[idx2].nid_c = kcg_lit_int64(0);
  }
  outC->_L136.v_nvshunt = kcg_lit_int64(0);
  outC->_L136.v_nvstff = kcg_lit_int64(0);
  outC->_L136.v_nvonsight = kcg_lit_int64(0);
  outC->_L136.v_nvlimsuperv = kcg_lit_int64(0);
  outC->_L136.v_nvunfit = kcg_lit_int64(0);
  outC->_L136.v_nvrel = kcg_lit_int64(0);
  outC->_L136.d_nvroll = kcg_lit_int64(0);
  outC->_L136.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L136.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L136.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L136.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L136.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L136.v_nvallowovtrp = kcg_lit_int64(0);
  outC->_L136.v_nvsupovtrp = kcg_lit_int64(0);
  outC->_L136.d_nvovtrp = kcg_lit_int64(0);
  outC->_L136.t_nvovtrp = kcg_lit_int64(0);
  outC->_L136.d_nvpotrp = kcg_lit_int64(0);
  outC->_L136.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L136.t_nvcontact = kcg_lit_int64(0);
  outC->_L136.m_nvderun = M_NVDERUN_No;
  outC->_L136.d_nvstff = kcg_lit_int64(0);
  outC->_L136.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L136.a_nvmaxredadh1 = kcg_lit_float64(0.0);
  outC->_L136.a_nvmaxredadh2 = kcg_lit_float64(0.0);
  outC->_L136.a_nvmaxredadh3 = kcg_lit_float64(0.0);
  outC->_L136.q_nvlocacc = kcg_lit_int64(0);
  outC->_L136.m_nvavadh = kcg_lit_float64(0.0);
  outC->_L136.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L136.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L136.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L136.a_nvp12 = kcg_lit_float64(0.0);
  outC->_L136.a_nvp23 = kcg_lit_float64(0.0);
  outC->_L136.v_nvkvint = kcg_lit_int64(0);
  outC->_L136.m_nvkvint_12 = kcg_lit_float64(0.0);
  outC->_L136.m_nvkvint_23 = kcg_lit_float64(0.0);
  outC->_L136.n_iter_n = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L136.n_iter_n_list[idx3].valid = kcg_true;
    outC->_L136.n_iter_n_list[idx3].v_nvkvint_n = kcg_lit_int64(0);
    outC->_L136.n_iter_n_list[idx3].m_nvkvint_n_12 = kcg_lit_float64(0.0);
    outC->_L136.n_iter_n_list[idx3].m_nvkvint_n_23 = kcg_lit_float64(0.0);
  }
  outC->_L136.n_iter_k = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L136.n_iter_k_list[idx5].valid = kcg_true;
    outC->_L136.n_iter_k_list[idx5].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L136.n_iter_k_list[idx5].a_nvp12_k = kcg_lit_float64(0.0);
    outC->_L136.n_iter_k_list[idx5].a_nvp23_k = kcg_lit_float64(0.0);
    outC->_L136.n_iter_k_list[idx5].v_nvkvint_k = kcg_lit_int64(0);
    outC->_L136.n_iter_k_list[idx5].m_nvkvint_k_12 = kcg_lit_float64(0.0);
    outC->_L136.n_iter_k_list[idx5].m_nvkvint_k_23 = kcg_lit_float64(0.0);
    outC->_L136.n_iter_k_list[idx5].n_iter_k_m = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 32; idx4++) {
      outC->_L136.n_iter_k_list[idx5].n_iter_k_m_list[idx4].valid = kcg_true;
      outC->_L136.n_iter_k_list[idx5].n_iter_k_m_list[idx4].v_nvkvint_k_m =
        kcg_lit_int64(0);
      outC->_L136.n_iter_k_list[idx5].n_iter_k_m_list[idx4].m_nvkvint_km_12 =
        kcg_lit_float64(0.0);
      outC->_L136.n_iter_k_list[idx5].n_iter_k_m_list[idx4].m_nvkvint_km_23 =
        kcg_lit_float64(0.0);
    }
  }
  outC->_L136.l_nvkrint = L_NVKRINT_0m;
  outC->_L136.m_nvkrint = kcg_lit_float64(0.0);
  outC->_L136.n_iter_l = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L136.n_iter_l_list[idx6].valid = kcg_true;
    outC->_L136.n_iter_l_list[idx6].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L136.n_iter_l_list[idx6].m_nvkrint_l = kcg_lit_float64(0.0);
  }
  outC->_L136.m_nvktint = kcg_lit_float64(0.0);
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L133[idx7].valid = kcg_true;
    outC->_L133[idx7].q_dir = Q_DIR_Reverse;
    outC->_L133[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L133[idx7].d_mamode = kcg_lit_int64(0);
    outC->_L133[idx7].m_mamode = M_MAMODE_On_Sight;
    outC->_L133[idx7].v_mamode = kcg_lit_int64(0);
    outC->_L133[idx7].l_mamode = kcg_lit_int64(0);
    outC->_L133[idx7].l_ackmamode = kcg_lit_int64(0);
    outC->_L133[idx7].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L134 = kcg_true;
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L132[idx8].valid = kcg_true;
    outC->_L132[idx8].q_dir = Q_DIR_Reverse;
    outC->_L132[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L132[idx8].d_mamode = kcg_lit_int64(0);
    outC->_L132[idx8].m_mamode = M_MAMODE_On_Sight;
    outC->_L132[idx8].v_mamode = kcg_lit_int64(0);
    outC->_L132[idx8].l_mamode = kcg_lit_int64(0);
    outC->_L132[idx8].l_ackmamode = kcg_lit_int64(0);
    outC->_L132[idx8].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L128[idx9].valid = kcg_true;
    outC->_L128[idx9].q_dir = Q_DIR_Reverse;
    outC->_L128[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L128[idx9].d_mamode = kcg_lit_int64(0);
    outC->_L128[idx9].m_mamode = M_MAMODE_On_Sight;
    outC->_L128[idx9].v_mamode = kcg_lit_int64(0);
    outC->_L128[idx9].l_mamode = kcg_lit_int64(0);
    outC->_L128[idx9].l_ackmamode = kcg_lit_int64(0);
    outC->_L128[idx9].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L130.valid = kcg_true;
  outC->_L130.q_dir = Q_DIR_Reverse;
  outC->_L130.l_packet = kcg_lit_int64(0);
  outC->_L130.q_scale = Q_SCALE_10_cm_scale;
  outC->_L130.n_iter = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L130.sections[idx10].valid = kcg_true;
    outC->_L130.sections[idx10].d_mamode = kcg_lit_int64(0);
    outC->_L130.sections[idx10].m_mamode = M_MAMODE_On_Sight;
    outC->_L130.sections[idx10].v_mamode = kcg_lit_int64(0);
    outC->_L130.sections[idx10].l_mamode = kcg_lit_int64(0);
    outC->_L130.sections[idx10].l_ackmamode = kcg_lit_int64(0);
    outC->_L130.sections[idx10].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L129 = kcg_true;
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L127[idx11].valid = kcg_true;
    outC->_L127[idx11].q_dir = Q_DIR_Reverse;
    outC->_L127[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L127[idx11].d_mamode = kcg_lit_int64(0);
    outC->_L127[idx11].m_mamode = M_MAMODE_On_Sight;
    outC->_L127[idx11].v_mamode = kcg_lit_int64(0);
    outC->_L127[idx11].l_mamode = kcg_lit_int64(0);
    outC->_L127[idx11].l_ackmamode = kcg_lit_int64(0);
    outC->_L127[idx11].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L126.p41[idx12].valid = kcg_true;
    outC->_L126.p41[idx12].q_dir = Q_DIR_Reverse;
    outC->_L126.p41[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L126.p41[idx12].d_leveltr = kcg_lit_int64(0);
    outC->_L126.p41[idx12].m_leveltr = M_LEVELTR_Level_0;
    outC->_L126.p41[idx12].nid_ntc = kcg_lit_int64(0);
    outC->_L126.p41[idx12].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L126.p46[idx13].valid = kcg_true;
    outC->_L126.p46[idx13].q_dir = Q_DIR_Reverse;
    outC->_L126.p46[idx13].m_leveltr = M_LEVELTR_Level_0;
    outC->_L126.p46[idx13].nid_ntc = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L126.p80[idx14].valid = kcg_true;
    outC->_L126.p80[idx14].q_dir = Q_DIR_Reverse;
    outC->_L126.p80[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L126.p80[idx14].d_mamode = kcg_lit_int64(0);
    outC->_L126.p80[idx14].m_mamode = M_MAMODE_On_Sight;
    outC->_L126.p80[idx14].v_mamode = kcg_lit_int64(0);
    outC->_L126.p80[idx14].l_mamode = kcg_lit_int64(0);
    outC->_L126.p80[idx14].l_ackmamode = kcg_lit_int64(0);
    outC->_L126.p80[idx14].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L126.p12_received = kcg_true;
  outC->_L126.p15_received = kcg_true;
  outC->_L126.p21_received = kcg_true;
  outC->_L126.p27_received = kcg_true;
  outC->_L126.LRBG = kcg_lit_int64(0);
  outC->_L126.referenceLocation = kcg_lit_int64(0);
  outC->_L125.nid_engine = kcg_lit_int64(0);
  outC->_L125.nid_operational = kcg_lit_int64(0);
  outC->_L125.l_train = kcg_lit_int64(0);
  outC->_L125.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L125.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L125.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L125.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L125.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L125.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L125.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L125.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L125.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L125.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L125.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L125.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 7; idx15++) {
    outC->_L124[idx15].valid = kcg_true;
    outC->_L124[idx15].q_dir = Q_DIR_Reverse;
    outC->_L124[idx15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124[idx15].d_leveltr = kcg_lit_int64(0);
    outC->_L124[idx15].m_leveltr = M_LEVELTR_Level_0;
    outC->_L124[idx15].nid_ntc = kcg_lit_int64(0);
    outC->_L124[idx15].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 7; idx16++) {
    outC->_L123[idx16].valid = kcg_true;
    outC->_L123[idx16].q_dir = Q_DIR_Reverse;
    outC->_L123[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L123[idx16].d_leveltr = kcg_lit_int64(0);
    outC->_L123[idx16].m_leveltr = M_LEVELTR_Level_0;
    outC->_L123[idx16].nid_ntc = kcg_lit_int64(0);
    outC->_L123[idx16].l_ackleveltr = kcg_lit_int64(0);
  }
  outC->_L122 = M_LEVEL_Level_0;
  outC->_L121 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L119 = M_LEVEL_Level_0;
  outC->_L117 = M_LEVEL_Level_0;
  outC->_L116 = kcg_lit_int64(0);
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L78 = kcg_lit_int64(0);
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L75[idx17].nid_packet = kcg_lit_int64(0);
    outC->_L75[idx17].q_dir = Q_DIR_Reverse;
    outC->_L75[idx17].valid = kcg_true;
    outC->_L75[idx17].startAddress = kcg_lit_int64(0);
    outC->_L75[idx17].endAddress = kcg_lit_int64(0);
  }
  outC->_L74 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->_L63.p41[idx18].valid = kcg_true;
    outC->_L63.p41[idx18].q_dir = Q_DIR_Reverse;
    outC->_L63.p41[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L63.p41[idx18].d_leveltr = kcg_lit_int64(0);
    outC->_L63.p41[idx18].m_leveltr = M_LEVELTR_Level_0;
    outC->_L63.p41[idx18].nid_ntc = kcg_lit_int64(0);
    outC->_L63.p41[idx18].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->_L63.p46[idx19].valid = kcg_true;
    outC->_L63.p46[idx19].q_dir = Q_DIR_Reverse;
    outC->_L63.p46[idx19].m_leveltr = M_LEVELTR_Level_0;
    outC->_L63.p46[idx19].nid_ntc = kcg_lit_int64(0);
  }
  for (idx20 = 0; idx20 < 3; idx20++) {
    outC->_L63.p80[idx20].valid = kcg_true;
    outC->_L63.p80[idx20].q_dir = Q_DIR_Reverse;
    outC->_L63.p80[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L63.p80[idx20].d_mamode = kcg_lit_int64(0);
    outC->_L63.p80[idx20].m_mamode = M_MAMODE_On_Sight;
    outC->_L63.p80[idx20].v_mamode = kcg_lit_int64(0);
    outC->_L63.p80[idx20].l_mamode = kcg_lit_int64(0);
    outC->_L63.p80[idx20].l_ackmamode = kcg_lit_int64(0);
    outC->_L63.p80[idx20].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L63.p12_received = kcg_true;
  outC->_L63.p15_received = kcg_true;
  outC->_L63.p21_received = kcg_true;
  outC->_L63.p27_received = kcg_true;
  outC->_L63.LRBG = kcg_lit_int64(0);
  outC->_L63.referenceLocation = kcg_lit_int64(0);
  outC->_L62.valid = kcg_true;
  outC->_L62.timestamp = kcg_lit_int64(0);
  outC->_L62.trainPositionIsUnknown = kcg_true;
  outC->_L62.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L62.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L62.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L62.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L62.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L62.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L62.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L62.LRBG.valid = kcg_true;
  outC->_L62.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L62.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L62.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L62.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L62.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L62.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L62.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L62.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L62.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L62.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L62.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L62.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int64(0);
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int64(0);
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int64(0);
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int64(0);
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int64(0);
  }
  outC->_L62.LRBG.missed = kcg_true;
  outC->_L62.prvLRBG.valid = kcg_true;
  outC->_L62.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L62.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L62.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L62.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L62.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L62.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L62.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].valid = kcg_true;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].nid_LRBG = kcg_lit_int64(0);
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].d_link = kcg_lit_int64(0);
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].nid_c = kcg_lit_int64(0);
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].nid_bg = kcg_lit_int64(0);
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[idx22].q_locacc = kcg_lit_int64(0);
  }
  outC->_L62.prvLRBG.missed = kcg_true;
  outC->_L62.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L62.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L62.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L62.linkingIsUsedOnboard = kcg_true;
  outC->_L62.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L62.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L62.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L60 = kcg_true;
  outC->_L61 = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->_L59.p41[idx23].valid = kcg_true;
    outC->_L59.p41[idx23].q_dir = Q_DIR_Reverse;
    outC->_L59.p41[idx23].q_scale = Q_SCALE_10_cm_scale;
    outC->_L59.p41[idx23].d_leveltr = kcg_lit_int64(0);
    outC->_L59.p41[idx23].m_leveltr = M_LEVELTR_Level_0;
    outC->_L59.p41[idx23].nid_ntc = kcg_lit_int64(0);
    outC->_L59.p41[idx23].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 7; idx24++) {
    outC->_L59.p46[idx24].valid = kcg_true;
    outC->_L59.p46[idx24].q_dir = Q_DIR_Reverse;
    outC->_L59.p46[idx24].m_leveltr = M_LEVELTR_Level_0;
    outC->_L59.p46[idx24].nid_ntc = kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 3; idx25++) {
    outC->_L59.p80[idx25].valid = kcg_true;
    outC->_L59.p80[idx25].q_dir = Q_DIR_Reverse;
    outC->_L59.p80[idx25].q_scale = Q_SCALE_10_cm_scale;
    outC->_L59.p80[idx25].d_mamode = kcg_lit_int64(0);
    outC->_L59.p80[idx25].m_mamode = M_MAMODE_On_Sight;
    outC->_L59.p80[idx25].v_mamode = kcg_lit_int64(0);
    outC->_L59.p80[idx25].l_mamode = kcg_lit_int64(0);
    outC->_L59.p80[idx25].l_ackmamode = kcg_lit_int64(0);
    outC->_L59.p80[idx25].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L59.p12_received = kcg_true;
  outC->_L59.p15_received = kcg_true;
  outC->_L59.p21_received = kcg_true;
  outC->_L59.p27_received = kcg_true;
  outC->_L59.LRBG = kcg_lit_int64(0);
  outC->_L59.referenceLocation = kcg_lit_int64(0);
  outC->_L55 = kcg_lit_int64(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.source = msrc_undefined_Common_Types_Pkg;
  outC->_L49.radioMetadata.t_train_reference = kcg_true;
  outC->_L49.radioMetadata.nid_em = kcg_true;
  outC->_L49.radioMetadata.q_scale = kcg_true;
  outC->_L49.radioMetadata.d_sr = kcg_true;
  outC->_L49.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L49.radioMetadata.d_ref = kcg_true;
  outC->_L49.radioMetadata.q_dir = kcg_true;
  outC->_L49.radioMetadata.d_emergencystop = kcg_true;
  outC->_L49.radioMetadata.m_version = kcg_true;
  outC->_L49.BG_Common_Header.valid = kcg_true;
  outC->_L49.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L49.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L49.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L49.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L49.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L49.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L49.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L49.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L49.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L49.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L49.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L49.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L49.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L49.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L49.packets.PacketHeaders[idx26].nid_packet = kcg_lit_int64(0);
    outC->_L49.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L49.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L49.packets.PacketHeaders[idx26].startAddress = kcg_lit_int64(0);
    outC->_L49.packets.PacketHeaders[idx26].endAddress = kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L49.packets.PacketData[idx27] = kcg_lit_int64(0);
  }
  outC->_L49.sendingRBC.valid = kcg_true;
  outC->_L49.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L49.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L49.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L48 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L43 = kcg_true;
  for (idx28 = 0; idx28 < 7; idx28++) {
    outC->_L40.p41[idx28].valid = kcg_true;
    outC->_L40.p41[idx28].q_dir = Q_DIR_Reverse;
    outC->_L40.p41[idx28].q_scale = Q_SCALE_10_cm_scale;
    outC->_L40.p41[idx28].d_leveltr = kcg_lit_int64(0);
    outC->_L40.p41[idx28].m_leveltr = M_LEVELTR_Level_0;
    outC->_L40.p41[idx28].nid_ntc = kcg_lit_int64(0);
    outC->_L40.p41[idx28].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 7; idx29++) {
    outC->_L40.p46[idx29].valid = kcg_true;
    outC->_L40.p46[idx29].q_dir = Q_DIR_Reverse;
    outC->_L40.p46[idx29].m_leveltr = M_LEVELTR_Level_0;
    outC->_L40.p46[idx29].nid_ntc = kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 3; idx30++) {
    outC->_L40.p80[idx30].valid = kcg_true;
    outC->_L40.p80[idx30].q_dir = Q_DIR_Reverse;
    outC->_L40.p80[idx30].q_scale = Q_SCALE_10_cm_scale;
    outC->_L40.p80[idx30].d_mamode = kcg_lit_int64(0);
    outC->_L40.p80[idx30].m_mamode = M_MAMODE_On_Sight;
    outC->_L40.p80[idx30].v_mamode = kcg_lit_int64(0);
    outC->_L40.p80[idx30].l_mamode = kcg_lit_int64(0);
    outC->_L40.p80[idx30].l_ackmamode = kcg_lit_int64(0);
    outC->_L40.p80[idx30].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L40.p12_received = kcg_true;
  outC->_L40.p15_received = kcg_true;
  outC->_L40.p21_received = kcg_true;
  outC->_L40.p27_received = kcg_true;
  outC->_L40.LRBG = kcg_lit_int64(0);
  outC->_L40.referenceLocation = kcg_lit_int64(0);
  outC->_L38.valid = kcg_true;
  outC->_L38.q_dir = Q_DIR_Reverse;
  outC->_L38.q_scale = Q_SCALE_10_cm_scale;
  outC->_L38.d_static = kcg_lit_int64(0);
  outC->_L38.v_static = kcg_lit_int64(0);
  outC->_L38.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx31 = 0; idx31 < 7; idx31++) {
    outC->_L38.diffArray[idx31].valid = kcg_true;
    outC->_L38.diffArray[idx31].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L38.diffArray[idx31].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L38.diffArray[idx31].nc_diff = kcg_lit_int64(0);
    outC->_L38.diffArray[idx31].v_diff = kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 7; idx33++) {
    outC->_L38.SSPArray[idx33].valid = kcg_true;
    outC->_L38.SSPArray[idx33].d_static = kcg_lit_int64(0);
    outC->_L38.SSPArray[idx33].v_static = kcg_lit_int64(0);
    outC->_L38.SSPArray[idx33].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx32 = 0; idx32 < 7; idx32++) {
      outC->_L38.SSPArray[idx33].diffArray[idx32].valid = kcg_true;
      outC->_L38.SSPArray[idx33].diffArray[idx32].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L38.SSPArray[idx33].diffArray[idx32].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L38.SSPArray[idx33].diffArray[idx32].nc_diff = kcg_lit_int64(0);
      outC->_L38.SSPArray[idx33].diffArray[idx32].v_diff = kcg_lit_int64(0);
    }
  }
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L33 = kcg_true;
  for (idx34 = 0; idx34 < 7; idx34++) {
    outC->_L32.p41[idx34].valid = kcg_true;
    outC->_L32.p41[idx34].q_dir = Q_DIR_Reverse;
    outC->_L32.p41[idx34].q_scale = Q_SCALE_10_cm_scale;
    outC->_L32.p41[idx34].d_leveltr = kcg_lit_int64(0);
    outC->_L32.p41[idx34].m_leveltr = M_LEVELTR_Level_0;
    outC->_L32.p41[idx34].nid_ntc = kcg_lit_int64(0);
    outC->_L32.p41[idx34].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx35 = 0; idx35 < 7; idx35++) {
    outC->_L32.p46[idx35].valid = kcg_true;
    outC->_L32.p46[idx35].q_dir = Q_DIR_Reverse;
    outC->_L32.p46[idx35].m_leveltr = M_LEVELTR_Level_0;
    outC->_L32.p46[idx35].nid_ntc = kcg_lit_int64(0);
  }
  for (idx36 = 0; idx36 < 3; idx36++) {
    outC->_L32.p80[idx36].valid = kcg_true;
    outC->_L32.p80[idx36].q_dir = Q_DIR_Reverse;
    outC->_L32.p80[idx36].q_scale = Q_SCALE_10_cm_scale;
    outC->_L32.p80[idx36].d_mamode = kcg_lit_int64(0);
    outC->_L32.p80[idx36].m_mamode = M_MAMODE_On_Sight;
    outC->_L32.p80[idx36].v_mamode = kcg_lit_int64(0);
    outC->_L32.p80[idx36].l_mamode = kcg_lit_int64(0);
    outC->_L32.p80[idx36].l_ackmamode = kcg_lit_int64(0);
    outC->_L32.p80[idx36].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L32.p12_received = kcg_true;
  outC->_L32.p15_received = kcg_true;
  outC->_L32.p21_received = kcg_true;
  outC->_L32.p27_received = kcg_true;
  outC->_L32.LRBG = kcg_lit_int64(0);
  outC->_L32.referenceLocation = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 7; idx37++) {
    outC->_L31.p41[idx37].valid = kcg_true;
    outC->_L31.p41[idx37].q_dir = Q_DIR_Reverse;
    outC->_L31.p41[idx37].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31.p41[idx37].d_leveltr = kcg_lit_int64(0);
    outC->_L31.p41[idx37].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31.p41[idx37].nid_ntc = kcg_lit_int64(0);
    outC->_L31.p41[idx37].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx38 = 0; idx38 < 7; idx38++) {
    outC->_L31.p46[idx38].valid = kcg_true;
    outC->_L31.p46[idx38].q_dir = Q_DIR_Reverse;
    outC->_L31.p46[idx38].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31.p46[idx38].nid_ntc = kcg_lit_int64(0);
  }
  for (idx39 = 0; idx39 < 3; idx39++) {
    outC->_L31.p80[idx39].valid = kcg_true;
    outC->_L31.p80[idx39].q_dir = Q_DIR_Reverse;
    outC->_L31.p80[idx39].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31.p80[idx39].d_mamode = kcg_lit_int64(0);
    outC->_L31.p80[idx39].m_mamode = M_MAMODE_On_Sight;
    outC->_L31.p80[idx39].v_mamode = kcg_lit_int64(0);
    outC->_L31.p80[idx39].l_mamode = kcg_lit_int64(0);
    outC->_L31.p80[idx39].l_ackmamode = kcg_lit_int64(0);
    outC->_L31.p80[idx39].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L31.p12_received = kcg_true;
  outC->_L31.p15_received = kcg_true;
  outC->_L31.p21_received = kcg_true;
  outC->_L31.p27_received = kcg_true;
  outC->_L31.LRBG = kcg_lit_int64(0);
  outC->_L31.referenceLocation = kcg_lit_int64(0);
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  for (idx40 = 0; idx40 < 7; idx40++) {
    outC->_L28[idx40].valid = kcg_true;
    outC->_L28[idx40].q_dir = Q_DIR_Reverse;
    outC->_L28[idx40].m_leveltr = M_LEVELTR_Level_0;
    outC->_L28[idx40].nid_ntc = kcg_lit_int64(0);
  }
  for (idx41 = 0; idx41 < 7; idx41++) {
    outC->_L27.p41[idx41].valid = kcg_true;
    outC->_L27.p41[idx41].q_dir = Q_DIR_Reverse;
    outC->_L27.p41[idx41].q_scale = Q_SCALE_10_cm_scale;
    outC->_L27.p41[idx41].d_leveltr = kcg_lit_int64(0);
    outC->_L27.p41[idx41].m_leveltr = M_LEVELTR_Level_0;
    outC->_L27.p41[idx41].nid_ntc = kcg_lit_int64(0);
    outC->_L27.p41[idx41].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx42 = 0; idx42 < 7; idx42++) {
    outC->_L27.p46[idx42].valid = kcg_true;
    outC->_L27.p46[idx42].q_dir = Q_DIR_Reverse;
    outC->_L27.p46[idx42].m_leveltr = M_LEVELTR_Level_0;
    outC->_L27.p46[idx42].nid_ntc = kcg_lit_int64(0);
  }
  for (idx43 = 0; idx43 < 3; idx43++) {
    outC->_L27.p80[idx43].valid = kcg_true;
    outC->_L27.p80[idx43].q_dir = Q_DIR_Reverse;
    outC->_L27.p80[idx43].q_scale = Q_SCALE_10_cm_scale;
    outC->_L27.p80[idx43].d_mamode = kcg_lit_int64(0);
    outC->_L27.p80[idx43].m_mamode = M_MAMODE_On_Sight;
    outC->_L27.p80[idx43].v_mamode = kcg_lit_int64(0);
    outC->_L27.p80[idx43].l_mamode = kcg_lit_int64(0);
    outC->_L27.p80[idx43].l_ackmamode = kcg_lit_int64(0);
    outC->_L27.p80[idx43].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L27.p12_received = kcg_true;
  outC->_L27.p15_received = kcg_true;
  outC->_L27.p21_received = kcg_true;
  outC->_L27.p27_received = kcg_true;
  outC->_L27.LRBG = kcg_lit_int64(0);
  outC->_L27.referenceLocation = kcg_lit_int64(0);
  for (idx44 = 0; idx44 < 7; idx44++) {
    outC->_L26.p41[idx44].valid = kcg_true;
    outC->_L26.p41[idx44].q_dir = Q_DIR_Reverse;
    outC->_L26.p41[idx44].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26.p41[idx44].d_leveltr = kcg_lit_int64(0);
    outC->_L26.p41[idx44].m_leveltr = M_LEVELTR_Level_0;
    outC->_L26.p41[idx44].nid_ntc = kcg_lit_int64(0);
    outC->_L26.p41[idx44].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx45 = 0; idx45 < 7; idx45++) {
    outC->_L26.p46[idx45].valid = kcg_true;
    outC->_L26.p46[idx45].q_dir = Q_DIR_Reverse;
    outC->_L26.p46[idx45].m_leveltr = M_LEVELTR_Level_0;
    outC->_L26.p46[idx45].nid_ntc = kcg_lit_int64(0);
  }
  for (idx46 = 0; idx46 < 3; idx46++) {
    outC->_L26.p80[idx46].valid = kcg_true;
    outC->_L26.p80[idx46].q_dir = Q_DIR_Reverse;
    outC->_L26.p80[idx46].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26.p80[idx46].d_mamode = kcg_lit_int64(0);
    outC->_L26.p80[idx46].m_mamode = M_MAMODE_On_Sight;
    outC->_L26.p80[idx46].v_mamode = kcg_lit_int64(0);
    outC->_L26.p80[idx46].l_mamode = kcg_lit_int64(0);
    outC->_L26.p80[idx46].l_ackmamode = kcg_lit_int64(0);
    outC->_L26.p80[idx46].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L26.p12_received = kcg_true;
  outC->_L26.p15_received = kcg_true;
  outC->_L26.p21_received = kcg_true;
  outC->_L26.p27_received = kcg_true;
  outC->_L26.LRBG = kcg_lit_int64(0);
  outC->_L26.referenceLocation = kcg_lit_int64(0);
  for (idx47 = 0; idx47 < 7; idx47++) {
    outC->_L25.p41[idx47].valid = kcg_true;
    outC->_L25.p41[idx47].q_dir = Q_DIR_Reverse;
    outC->_L25.p41[idx47].q_scale = Q_SCALE_10_cm_scale;
    outC->_L25.p41[idx47].d_leveltr = kcg_lit_int64(0);
    outC->_L25.p41[idx47].m_leveltr = M_LEVELTR_Level_0;
    outC->_L25.p41[idx47].nid_ntc = kcg_lit_int64(0);
    outC->_L25.p41[idx47].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx48 = 0; idx48 < 7; idx48++) {
    outC->_L25.p46[idx48].valid = kcg_true;
    outC->_L25.p46[idx48].q_dir = Q_DIR_Reverse;
    outC->_L25.p46[idx48].m_leveltr = M_LEVELTR_Level_0;
    outC->_L25.p46[idx48].nid_ntc = kcg_lit_int64(0);
  }
  for (idx49 = 0; idx49 < 3; idx49++) {
    outC->_L25.p80[idx49].valid = kcg_true;
    outC->_L25.p80[idx49].q_dir = Q_DIR_Reverse;
    outC->_L25.p80[idx49].q_scale = Q_SCALE_10_cm_scale;
    outC->_L25.p80[idx49].d_mamode = kcg_lit_int64(0);
    outC->_L25.p80[idx49].m_mamode = M_MAMODE_On_Sight;
    outC->_L25.p80[idx49].v_mamode = kcg_lit_int64(0);
    outC->_L25.p80[idx49].l_mamode = kcg_lit_int64(0);
    outC->_L25.p80[idx49].l_ackmamode = kcg_lit_int64(0);
    outC->_L25.p80[idx49].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L25.p12_received = kcg_true;
  outC->_L25.p15_received = kcg_true;
  outC->_L25.p21_received = kcg_true;
  outC->_L25.p27_received = kcg_true;
  outC->_L25.LRBG = kcg_lit_int64(0);
  outC->_L25.referenceLocation = kcg_lit_int64(0);
  for (idx50 = 0; idx50 < 7; idx50++) {
    outC->_L24[idx50].valid = kcg_true;
    outC->_L24[idx50].q_dir = Q_DIR_Reverse;
    outC->_L24[idx50].q_scale = Q_SCALE_10_cm_scale;
    outC->_L24[idx50].d_leveltr = kcg_lit_int64(0);
    outC->_L24[idx50].m_leveltr = M_LEVELTR_Level_0;
    outC->_L24[idx50].nid_ntc = kcg_lit_int64(0);
    outC->_L24[idx50].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx51 = 0; idx51 < 7; idx51++) {
    outC->_L23.p41[idx51].valid = kcg_true;
    outC->_L23.p41[idx51].q_dir = Q_DIR_Reverse;
    outC->_L23.p41[idx51].q_scale = Q_SCALE_10_cm_scale;
    outC->_L23.p41[idx51].d_leveltr = kcg_lit_int64(0);
    outC->_L23.p41[idx51].m_leveltr = M_LEVELTR_Level_0;
    outC->_L23.p41[idx51].nid_ntc = kcg_lit_int64(0);
    outC->_L23.p41[idx51].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx52 = 0; idx52 < 7; idx52++) {
    outC->_L23.p46[idx52].valid = kcg_true;
    outC->_L23.p46[idx52].q_dir = Q_DIR_Reverse;
    outC->_L23.p46[idx52].m_leveltr = M_LEVELTR_Level_0;
    outC->_L23.p46[idx52].nid_ntc = kcg_lit_int64(0);
  }
  for (idx53 = 0; idx53 < 3; idx53++) {
    outC->_L23.p80[idx53].valid = kcg_true;
    outC->_L23.p80[idx53].q_dir = Q_DIR_Reverse;
    outC->_L23.p80[idx53].q_scale = Q_SCALE_10_cm_scale;
    outC->_L23.p80[idx53].d_mamode = kcg_lit_int64(0);
    outC->_L23.p80[idx53].m_mamode = M_MAMODE_On_Sight;
    outC->_L23.p80[idx53].v_mamode = kcg_lit_int64(0);
    outC->_L23.p80[idx53].l_mamode = kcg_lit_int64(0);
    outC->_L23.p80[idx53].l_ackmamode = kcg_lit_int64(0);
    outC->_L23.p80[idx53].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L23.p12_received = kcg_true;
  outC->_L23.p15_received = kcg_true;
  outC->_L23.p21_received = kcg_true;
  outC->_L23.p27_received = kcg_true;
  outC->_L23.LRBG = kcg_lit_int64(0);
  outC->_L23.referenceLocation = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.q_dir = Q_DIR_Reverse;
  outC->_L21.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.n_iter = kcg_lit_int64(0);
  for (idx54 = 0; idx54 < 33; idx54++) {
    outC->_L21.sections[idx54].valid = kcg_true;
    outC->_L21.sections[idx54].d_gradient = kcg_lit_int64(0);
    outC->_L21.sections[idx54].q_gdir = Q_GDIR_downhill;
    outC->_L21.sections[idx54].g_a = kcg_lit_int64(0);
  }
  for (idx55 = 0; idx55 < 30; idx55++) {
    outC->_L19.PacketHeaders[idx55].nid_packet = kcg_lit_int64(0);
    outC->_L19.PacketHeaders[idx55].q_dir = Q_DIR_Reverse;
    outC->_L19.PacketHeaders[idx55].valid = kcg_true;
    outC->_L19.PacketHeaders[idx55].startAddress = kcg_lit_int64(0);
    outC->_L19.PacketHeaders[idx55].endAddress = kcg_lit_int64(0);
  }
  for (idx56 = 0; idx56 < 500; idx56++) {
    outC->_L19.PacketData[idx56] = kcg_lit_int64(0);
  }
  for (idx57 = 0; idx57 < 7; idx57++) {
    outC->_L18[idx57].valid = kcg_true;
    outC->_L18[idx57].q_dir = Q_DIR_Reverse;
    outC->_L18[idx57].q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[idx57].d_leveltr = kcg_lit_int64(0);
    outC->_L18[idx57].m_leveltr = M_LEVELTR_Level_0;
    outC->_L18[idx57].nid_ntc = kcg_lit_int64(0);
    outC->_L18[idx57].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx58 = 0; idx58 < 7; idx58++) {
    outC->_L13[idx58].valid = kcg_true;
    outC->_L13[idx58].q_dir = Q_DIR_Reverse;
    outC->_L13[idx58].q_scale = Q_SCALE_10_cm_scale;
    outC->_L13[idx58].d_leveltr = kcg_lit_int64(0);
    outC->_L13[idx58].m_leveltr = M_LEVELTR_Level_0;
    outC->_L13[idx58].nid_ntc = kcg_lit_int64(0);
    outC->_L13[idx58].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx59 = 0; idx59 < 7; idx59++) {
    outC->_L11[idx59].valid = kcg_true;
    outC->_L11[idx59].q_dir = Q_DIR_Reverse;
    outC->_L11[idx59].m_leveltr = M_LEVELTR_Level_0;
    outC->_L11[idx59].nid_ntc = kcg_lit_int64(0);
  }
  for (idx60 = 0; idx60 < 7; idx60++) {
    outC->_L10[idx60].valid = kcg_true;
    outC->_L10[idx60].q_dir = Q_DIR_Reverse;
    outC->_L10[idx60].m_leveltr = M_LEVELTR_Level_0;
    outC->_L10[idx60].nid_ntc = kcg_lit_int64(0);
  }
  outC->_L4.valid = kcg_true;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.v_loa = kcg_lit_int64(0);
  outC->_L4.t_loa = kcg_lit_int64(0);
  outC->_L4.n_iter = kcg_lit_int64(0);
  for (idx61 = 0; idx61 < 32; idx61++) {
    outC->_L4.sections[idx61].valid = kcg_true;
    outC->_L4.sections[idx61].l_section = kcg_lit_int64(0);
    outC->_L4.sections[idx61].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L4.sections[idx61].t_sectiontimer = kcg_lit_int64(0);
    outC->_L4.sections[idx61].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L4.l_endsection = kcg_lit_int64(0);
  outC->_L4.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L4.t_sectiontimer = kcg_lit_int64(0);
  outC->_L4.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L4.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L4.t_endtimer = kcg_lit_int64(0);
  outC->_L4.d_endtimerstartloc = kcg_lit_int64(0);
  outC->_L4.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L4.d_dp = kcg_lit_int64(0);
  outC->_L4.v_releasedp = kcg_lit_int64(0);
  outC->_L4.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L4.d_startol = kcg_lit_int64(0);
  outC->_L4.t_ol = kcg_lit_int64(0);
  outC->_L4.d_ol = kcg_lit_int64(0);
  outC->_L4.v_releaseol = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2.radioMetadata.t_train_reference = kcg_true;
  outC->_L2.radioMetadata.nid_em = kcg_true;
  outC->_L2.radioMetadata.q_scale = kcg_true;
  outC->_L2.radioMetadata.d_sr = kcg_true;
  outC->_L2.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2.radioMetadata.d_ref = kcg_true;
  outC->_L2.radioMetadata.q_dir = kcg_true;
  outC->_L2.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2.radioMetadata.m_version = kcg_true;
  outC->_L2.BG_Common_Header.valid = kcg_true;
  outC->_L2.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L2.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx62 = 0; idx62 < 30; idx62++) {
    outC->_L2.packets.PacketHeaders[idx62].nid_packet = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx62].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx62].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx62].startAddress = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx62].endAddress = kcg_lit_int64(0);
  }
  for (idx63 = 0; idx63 < 500; idx63++) {
    outC->_L2.packets.PacketData[idx63] = kcg_lit_int64(0);
  }
  outC->_L2.sendingRBC.valid = kcg_true;
  outC->_L2.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L2.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L2.sendingRBC.device_id = kcg_lit_int64(0);
  outC->noConflictWithOngoingTransmission = kcg_true;
  outC->levelIn = M_LEVEL_Level_0;
  outC->levelStored = M_LEVEL_Level_0;
  outC->isMsg3 = kcg_true;
  outC->p80Valid = kcg_true;
  outC->ntcRequested = kcg_true;
  outC->p46Valid = kcg_true;
  outC->p41Valid = kcg_true;
  outC->every5 = kcg_true;
  outC->every4 = kcg_true;
  outC->every3 = kcg_true;
  outC->every2 = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->outPositionNeeded = kcg_true;
  for (idx64 = 0; idx64 < 7; idx64++) {
    outC->outstoredData.p41[idx64].valid = kcg_true;
    outC->outstoredData.p41[idx64].q_dir = Q_DIR_Reverse;
    outC->outstoredData.p41[idx64].q_scale = Q_SCALE_10_cm_scale;
    outC->outstoredData.p41[idx64].d_leveltr = kcg_lit_int64(0);
    outC->outstoredData.p41[idx64].m_leveltr = M_LEVELTR_Level_0;
    outC->outstoredData.p41[idx64].nid_ntc = kcg_lit_int64(0);
    outC->outstoredData.p41[idx64].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx65 = 0; idx65 < 7; idx65++) {
    outC->outstoredData.p46[idx65].valid = kcg_true;
    outC->outstoredData.p46[idx65].q_dir = Q_DIR_Reverse;
    outC->outstoredData.p46[idx65].m_leveltr = M_LEVELTR_Level_0;
    outC->outstoredData.p46[idx65].nid_ntc = kcg_lit_int64(0);
  }
  for (idx66 = 0; idx66 < 3; idx66++) {
    outC->outstoredData.p80[idx66].valid = kcg_true;
    outC->outstoredData.p80[idx66].q_dir = Q_DIR_Reverse;
    outC->outstoredData.p80[idx66].q_scale = Q_SCALE_10_cm_scale;
    outC->outstoredData.p80[idx66].d_mamode = kcg_lit_int64(0);
    outC->outstoredData.p80[idx66].m_mamode = M_MAMODE_On_Sight;
    outC->outstoredData.p80[idx66].v_mamode = kcg_lit_int64(0);
    outC->outstoredData.p80[idx66].l_mamode = kcg_lit_int64(0);
    outC->outstoredData.p80[idx66].l_ackmamode = kcg_lit_int64(0);
    outC->outstoredData.p80[idx66].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->outstoredData.p12_received = kcg_true;
  outC->outstoredData.p15_received = kcg_true;
  outC->outstoredData.p21_received = kcg_true;
  outC->outstoredData.p27_received = kcg_true;
  outC->outstoredData.LRBG = kcg_lit_int64(0);
  outC->outstoredData.referenceLocation = kcg_lit_int64(0);
  /* _L77=(xdebugSupport_Pkg::packetValid#1)/ */
  packetValid_init_xdebugSupport_Pkg(&outC->Context_packetValid_1);
  /* _L11=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_init_TM_specific(&outC->Context_Read_P046_Legacy_1);
  /* _L3=(TM::Read_P015#1)/ */ Read_P015_init_TM(&outC->Context_Read_P015_1);
  /* _L20=(TM::Read_P021#1)/ */ Read_P021_init_TM(&outC->Context_Read_P021_1);
  /* _L38=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_init_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L128=(EVC_MEM_Support_Pkg::MEM_convertP80#1)/ */
  MEM_convertP80_init_EVC_MEM_Support_Pkg(&outC->Context_MEM_convertP80_1);
  /* _L129=(TM::Read_P080#1)/ */ Read_P080_init_TM(&outC->Context_Read_P080_1);
  /* _L85=(xdebugSupport_Pkg::checkNTCPriority#1)/ */
  checkNTCPriority_init_xdebugSupport_Pkg(&outC->Context_checkNTCPriority_1);
  /* _L61=(EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG#1)/ */
  MEM_locationOfReferenceLRBG_init_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_locationOfReferenceLRBG_1);
  /* _L116=(xdebugSupport_Pkg::getLRBGFromMsg#1)/ */
  getLRBGFromMsg_init_xdebugSupport_Pkg(&outC->Context_getLRBGFromMsg_1);
  /* _L148=(xdebugSupport_Pkg::getP41Level#2)/ */
  getP41Level_init_xdebugSupport_Pkg(&outC->Context_getP41Level_2);
  /* _L18=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_init_TM_specific(&outC->Context_Read_P041_Legacy_1);
  /* _L117=(xdebugSupport_Pkg::getP41Level#1)/ */
  getP41Level_init_xdebugSupport_Pkg(&outC->Context_getP41Level_1);
  /* _L74=(xdebugSupport_Pkg::packetValid#2)/ */
  packetValid_init_xdebugSupport_Pkg(&outC->Context_packetValid_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_dataForLevelTransition_reset_EVC_MEM_Support_Pkg(
  outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg *outC)
{
  /* _L77=(xdebugSupport_Pkg::packetValid#1)/ */
  packetValid_reset_xdebugSupport_Pkg(&outC->Context_packetValid_1);
  /* _L11=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_reset_TM_specific(&outC->Context_Read_P046_Legacy_1);
  /* _L3=(TM::Read_P015#1)/ */ Read_P015_reset_TM(&outC->Context_Read_P015_1);
  /* _L20=(TM::Read_P021#1)/ */ Read_P021_reset_TM(&outC->Context_Read_P021_1);
  /* _L38=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_reset_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L128=(EVC_MEM_Support_Pkg::MEM_convertP80#1)/ */
  MEM_convertP80_reset_EVC_MEM_Support_Pkg(&outC->Context_MEM_convertP80_1);
  /* _L129=(TM::Read_P080#1)/ */ Read_P080_reset_TM(&outC->Context_Read_P080_1);
  /* _L85=(xdebugSupport_Pkg::checkNTCPriority#1)/ */
  checkNTCPriority_reset_xdebugSupport_Pkg(&outC->Context_checkNTCPriority_1);
  /* _L61=(EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG#1)/ */
  MEM_locationOfReferenceLRBG_reset_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_locationOfReferenceLRBG_1);
  /* _L116=(xdebugSupport_Pkg::getLRBGFromMsg#1)/ */
  getLRBGFromMsg_reset_xdebugSupport_Pkg(&outC->Context_getLRBGFromMsg_1);
  /* _L148=(xdebugSupport_Pkg::getP41Level#2)/ */
  getP41Level_reset_xdebugSupport_Pkg(&outC->Context_getP41Level_2);
  /* _L18=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_reset_TM_specific(&outC->Context_Read_P041_Legacy_1);
  /* _L117=(xdebugSupport_Pkg::getP41Level#1)/ */
  getP41Level_reset_xdebugSupport_Pkg(&outC->Context_getP41Level_1);
  /* _L74=(xdebugSupport_Pkg::packetValid#2)/ */
  packetValid_reset_xdebugSupport_Pkg(&outC->Context_packetValid_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

