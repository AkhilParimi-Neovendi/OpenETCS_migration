/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessModeAndLevel_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessModeAndLevel/ */
void RBC__ProcessModeAndLevel_RBC_Model_Pkg(
  /* inTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inTrainTrackMessage,
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  /* mode/ */
  static M_MODE mode_partial;
  /* level/ */
  static M_LEVEL level_partial;
  /* mode/ */
  static M_MODE _1_mode_partial;
  /* level/ */
  static M_LEVEL _2_level_partial;
  /* level/ */
  static M_LEVEL _3_level_partial;
  /* mode/ */
  static M_MODE _4_mode_partial;
  /* level/ */
  static M_LEVEL _5_level_partial;
  /* mode/ */
  static M_MODE _6_mode_partial;
  /* level/ */
  static M_LEVEL last_level;
  /* mode/ */
  static M_MODE last_mode;

  last_level = outC->level;
  last_mode = outC->mode;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L1,
    inTrainTrackMessage);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1.outRadioTrainTrackPackets);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackPackets__GetP000_1.outRadioTrainTrackPacket);
  outC->_L5 = outC->_L3.valid;
  outC->p0_isValid = outC->_L5;
  outC->IfBlock1_clock = outC->p0_isValid == kcg_true;
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPackets__GetP001_1.outRadioTrainTrackPacket);
  outC->_L31 = outC->_L4.valid;
  outC->p1_isValid = outC->_L31;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = (outC->p1_isValid == kcg_true) &
      (outC->p0_isValid == kcg_false);
    if (outC->else_clock_IfBlock1) {
    }
    else {
      _3_level_partial = last_level;
      _4_mode_partial = last_mode;
    }
  }
  kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(
    &outC->_L28,
    &outC->_L4.packet1);
  outC->_L30 = outC->_L28.level;
  outC->p1_level = outC->_L30;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
    outC->_L2_then_else_IfBlock1 = outC->p1_level;
  }
  outC->_L29 = outC->_L28.mode;
  outC->p1_mode = outC->_L29;
  if (outC->IfBlock1_clock) {
  }
  else /* IfBlock1:else: */
  if (outC->else_clock_IfBlock1) {
    outC->_L1_then_else_IfBlock1 = outC->p1_mode;
    _5_level_partial = outC->_L2_then_else_IfBlock1;
    _6_mode_partial = outC->_L1_then_else_IfBlock1;
    _1_mode_partial = _6_mode_partial;
    _2_level_partial = _5_level_partial;
  }
  else {
    _1_mode_partial = _4_mode_partial;
    _2_level_partial = _3_level_partial;
  }
  kcg_copy_Position_Report_TrainToTrack(&outC->_L6, &outC->_L3.packet0);
  outC->_L27 = outC->_L6.level;
  outC->p0_level = outC->_L27;
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = outC->p0_level;
  }
  outC->_L7 = outC->_L6.mode;
  outC->p0_mode = outC->_L7;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = outC->p0_mode;
    mode_partial = outC->_L1_then_IfBlock1;
    level_partial = outC->_L2_then_IfBlock1;
    outC->mode = mode_partial;
    outC->level = level_partial;
  }
  else {
    outC->mode = _1_mode_partial;
    outC->level = _2_level_partial;
  }
  outC->_L33 = outC->mode;
  outC->_L32 = outC->level;
  outC->out_level = outC->_L32;
  outC->out_mode = outC->_L33;
  outC->_L24 = last_level;
  outC->_L23 = outC->level;
  outC->_L18 = kcg_false;
  outC->_L20 = kcg_true;
  outC->_L17 = outC->_L23 != outC->_L24;
  /* _L22= */
  if (outC->_L17) {
    outC->_L22 = outC->_L20;
  }
  else {
    outC->_L22 = outC->_L18;
  }
  outC->out_levelChanged = outC->_L22;
  outC->_L16 = outC->mode;
  outC->_L15 = kcg_false;
  outC->_L14 = kcg_true;
  outC->_L9 = last_mode;
  outC->_L11 = outC->_L16 != outC->_L9;
  /* _L12= */
  if (outC->_L11) {
    outC->_L12 = outC->_L14;
  }
  else {
    outC->_L12 = outC->_L15;
  }
  outC->out_modeChanged = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessModeAndLevel_init_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L33 = M_MODE_Full_Supervision;
  outC->_L32 = M_LEVEL_Level_0;
  outC->_L28.NID_PACKET = kcg_lit_int32(0);
  outC->_L28.L_PACKET = kcg_lit_int32(0);
  outC->_L28.qscale = Q_SCALE_10_cm_scale;
  outC->_L28.NID_LRBG = kcg_lit_int32(0);
  outC->_L28.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L28.D_LRBG = kcg_lit_int32(0);
  outC->_L28.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L28.dlrbg = Q_DLRBG_Reverse;
  outC->_L28.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L28.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L28.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L28.L_TRAININT = kcg_lit_int32(0);
  outC->_L28.V_TRAIN = kcg_lit_int32(0);
  outC->_L28.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L28.mode = M_MODE_Full_Supervision;
  outC->_L28.level = M_LEVEL_Level_0;
  outC->_L28.NID_NTC = kcg_lit_int32(0);
  outC->_L29 = M_MODE_Full_Supervision;
  outC->_L30 = M_LEVEL_Level_0;
  outC->_L31 = kcg_true;
  outC->_L27 = M_LEVEL_Level_0;
  outC->_L24 = M_LEVEL_Level_0;
  outC->_L23 = M_LEVEL_Level_0;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L16 = M_MODE_Full_Supervision;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L9 = M_MODE_Full_Supervision;
  outC->_L7 = M_MODE_Full_Supervision;
  outC->_L6.NID_PACKET = kcg_lit_int32(0);
  outC->_L6.L_PACKET = kcg_lit_int32(0);
  outC->_L6.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.NID_LRBG = kcg_lit_int32(0);
  outC->_L6.D_LRBG = kcg_lit_int32(0);
  outC->_L6.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L6.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L6.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.L_TRAININT = kcg_lit_int32(0);
  outC->_L6.V_TRAIN = kcg_lit_int32(0);
  outC->_L6.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.mode = M_MODE_Full_Supervision;
  outC->_L6.level = M_LEVEL_Level_0;
  outC->_L6.NID_NTC = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L4.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L4.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L4.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L4.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L4.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L4.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L4.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L4.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L4.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L4.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L4.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L4.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4.packet1.mode = M_MODE_Full_Supervision;
  outC->_L4.packet1.level = M_LEVEL_Level_0;
  outC->_L4.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L3.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L3.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L3.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L3.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L3.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L3.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L3.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L3.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.packet0.mode = M_MODE_Full_Supervision;
  outC->_L3.packet0.level = M_LEVEL_Level_0;
  outC->_L3.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L2.p0.valid = kcg_true;
  outC->_L2.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L2.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L2.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L2.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L2.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L2.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L2.p1.valid = kcg_true;
  outC->_L2.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L2.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L2.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L2.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L2.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L2.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L2.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L2.p3.valid = kcg_true;
  outC->_L2.p3.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L2.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L2.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L2.p4.valid = kcg_true;
  outC->_L2.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2.p5.valid = kcg_true;
  outC->_L2.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L2.p9.valid = kcg_true;
  outC->_L2.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L2.p11.valid = kcg_true;
  outC->_L2.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.p11.l_train = kcg_lit_int32(0);
  outC->_L2.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L2.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.p11.n_axle = kcg_lit_int32(0);
  outC->_L2.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L2.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L2.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L2.p11.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->_L1.present = kcg_true;
  outC->_L1.header.present = kcg_true;
  outC->_L1.header.nid_message = kcg_lit_int32(0);
  outC->_L1.header.t_train = kcg_lit_int32(0);
  outC->_L1.header.nid_engine = kcg_lit_int32(0);
  outC->_L1.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1.header.xNID_EM = kcg_lit_int32(0);
  outC->_L1.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1.packets.p0.valid = kcg_true;
  outC->_L1.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1.packets.p1.valid = kcg_true;
  outC->_L1.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L1.packets.p3.valid = kcg_true;
  outC->_L1.packets.p3.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L1.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L1.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L1.packets.p4.valid = kcg_true;
  outC->_L1.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.packets.p5.valid = kcg_true;
  outC->_L1.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L1.packets.p9.valid = kcg_true;
  outC->_L1.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L1.packets.p11.valid = kcg_true;
  outC->_L1.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L1.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L1.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L1.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.packets.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1.packets.p11.nid_ntc[idx7] = kcg_lit_int32(0);
  }
  outC->p1_mode = M_MODE_Full_Supervision;
  outC->p1_level = M_LEVEL_Level_0;
  outC->p0_level = M_LEVEL_Level_0;
  outC->p0_mode = M_MODE_Full_Supervision;
  outC->p1_isValid = kcg_true;
  outC->p0_isValid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = M_LEVEL_Level_0;
  outC->_L1_then_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1 = M_LEVEL_Level_0;
  outC->out_levelChanged = kcg_true;
  outC->out_level = M_LEVEL_Level_0;
  outC->out_modeChanged = kcg_true;
  outC->out_mode = M_MODE_Full_Supervision;
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  outC->mode = M_MODE_No_Power;
  outC->level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  outC->mode = M_MODE_No_Power;
  outC->level = M_LEVEL_Level_0;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessModeAndLevel_RBC_Model_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

