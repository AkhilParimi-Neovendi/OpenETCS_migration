/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack/ */
void mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_int64 _2_noname;

  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L48, BG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L65, BG);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L75,
    &outC->_L65.infoFromLinking);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L8, BGs_in);
  outC->_L9 = outC->_L7.valid;
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L7,
    &outC->_L8,
    outC->_L9,
    &outC->Context_indexOfBG_by_id_2);
  outC->_L1 = outC->Context_indexOfBG_by_id_2.indexOfBG;
  outC->_L2 = outC->Context_indexOfBG_by_id_2.BG_found;
  outC->_L3 = outC->Context_indexOfBG_by_id_2.indexValid;
  outC->indexOfBGInBGs = outC->_L1;
  outC->_L63 = outC->indexOfBGInBGs;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L62, BGs_in);
  if ((kcg_lit_int64(0) <= outC->_L63) & (outC->_L63 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L61,
      &outC->_L62[outC->_L63]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L61,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L74, &outC->_L61);
  if (kcg_true) {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &outC->_L74.infoFromLinking,
      &outC->_L75);
  }
  outC->_L72 = outC->_L65.infoFromLinking.valid;
  outC->_L67 = outC->_L65.valid;
  outC->_L66 = outC->_L65.infoFromPassing.valid;
  outC->_L68 = !outC->_L66;
  outC->_L69 = outC->_L68 & outC->_L67 & outC->_L72;
  outC->_L73 = outC->_L61.infoFromPassing.valid;
  outC->_L71 = outC->_L61.missed;
  outC->_L70 = outC->_L71 | outC->_L73;
  outC->bgFound = outC->_L2;
  outC->_L64 = outC->bgFound;
  outC->_L58 = outC->_L64 & outC->_L70 & outC->_L69;
  /* _L47= */
  if (outC->_L58) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L47, &outC->_L74);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L47, &outC->_L48);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->bg_loc, &outC->_L47);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L81, &outC->bg_loc);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L11, BGs_in);
  /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack#1)/ */
  indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L81,
    &outC->_L11,
    outC->_L9,
    &outC->Context_indexOfBG_onTrack_1);
  outC->_L4 = outC->Context_indexOfBG_onTrack_1.indexOfBG;
  outC->_L5 = outC->Context_indexOfBG_onTrack_1.BG_found;
  outC->_L6 = outC->Context_indexOfBG_onTrack_1.indexValid;
  _2_noname = outC->_L4;
  /* _L83= */
  if (outC->_L2) {
    outC->_L83 = outC->_L1;
  }
  else {
    outC->_L83 = outC->_L4;
  }
  outC->_L82 = kcg_false;
  outC->_L13 = outC->_L1 != outC->_L4;
  outC->_L12 = outC->_L13 & outC->_L2 & outC->_L3 & outC->_L6;
  _1_noname = outC->_L12;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L80, &outC->bg_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L21, BG);
  outC->_L20 = outC->_L21.valid;
  outC->_L22 = outC->_L20 & outC->_L6;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L16, BGs_in);
  /* _L15=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex#1)/ */
  deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L16,
    outC->_L1,
    outC->_L82,
    &outC->Context_deleteBG_atIndex_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L15,
    &outC->Context_deleteBG_atIndex_1.BGs_out);
  /* _L17=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex#1)/ */
  insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L80,
    &outC->_L15,
    outC->_L83,
    outC->_L22,
    &outC->Context_insertBG_atIndex_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L17,
    &outC->Context_insertBG_atIndex_1.BGs_out);
  outC->_L18 = outC->Context_insertBG_atIndex_1.overrun;
  noname = outC->_L5;
  outC->overrun = outC->_L18;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void mergeBG_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
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

  outC->_L83 = kcg_lit_int64(0);
  outC->_L82 = kcg_true;
  outC->_L81.valid = kcg_true;
  outC->_L81.nid_c = kcg_lit_int64(0);
  outC->_L81.nid_bg = kcg_lit_int64(0);
  outC->_L81.q_link = Q_LINK_Unlinked;
  outC->_L81.location.nominal = kcg_lit_int64(0);
  outC->_L81.location.d_min = kcg_lit_int64(0);
  outC->_L81.location.d_max = kcg_lit_int64(0);
  outC->_L81.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.valid = kcg_true;
  outC->_L81.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L81.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L81.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L81.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L81.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L81.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L81.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.valid = kcg_true;
  outC->_L81.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L81.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L81.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L81.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L81.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L81.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L81.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L81.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L81.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L81.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L81.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L81.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L81.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L81.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L81.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L81.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L81.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L81.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L81.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L81.missed = kcg_true;
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
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L80.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L80.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L80.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L80.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L80.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L80.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L80.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L80.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L80.missed = kcg_true;
  outC->_L75.valid = kcg_true;
  outC->_L75.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L75.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L75.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L75.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L75.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L75.d_link.nominal = kcg_lit_int64(0);
  outC->_L75.d_link.d_min = kcg_lit_int64(0);
  outC->_L75.d_link.d_max = kcg_lit_int64(0);
  outC->_L75.linkingInfo.valid = kcg_true;
  outC->_L75.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L75.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L75.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L75.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L75.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L75.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L75.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L75.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L75.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L74.valid = kcg_true;
  outC->_L74.nid_c = kcg_lit_int64(0);
  outC->_L74.nid_bg = kcg_lit_int64(0);
  outC->_L74.q_link = Q_LINK_Unlinked;
  outC->_L74.location.nominal = kcg_lit_int64(0);
  outC->_L74.location.d_min = kcg_lit_int64(0);
  outC->_L74.location.d_max = kcg_lit_int64(0);
  outC->_L74.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.valid = kcg_true;
  outC->_L74.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L74.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L74.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L74.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L74.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L74.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.valid = kcg_true;
  outC->_L74.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L74.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L74.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L74.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L74.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L74.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L74.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L74.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L74.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L74.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L74.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L74.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L74.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L74.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L74.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L74.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L74.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L74.missed = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65.valid = kcg_true;
  outC->_L65.nid_c = kcg_lit_int64(0);
  outC->_L65.nid_bg = kcg_lit_int64(0);
  outC->_L65.q_link = Q_LINK_Unlinked;
  outC->_L65.location.nominal = kcg_lit_int64(0);
  outC->_L65.location.d_min = kcg_lit_int64(0);
  outC->_L65.location.d_max = kcg_lit_int64(0);
  outC->_L65.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.valid = kcg_true;
  outC->_L65.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L65.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L65.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L65.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L65.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L65.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L65.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L65.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.valid = kcg_true;
  outC->_L65.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L65.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L65.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L65.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L65.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L65.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L65.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L65.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L65.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L65.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L65.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L65.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L65.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L65.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L65.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L65.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L65.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L65.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L65.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L65.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L65.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L65.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L65.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L65.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L65.missed = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L62[idx5].valid = kcg_true;
    outC->_L62[idx5].nid_c = kcg_lit_int64(0);
    outC->_L62[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L62[idx5].q_link = Q_LINK_Unlinked;
    outC->_L62[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L62[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L62[idx5].location.d_max = kcg_lit_int64(0);
    outC->_L62[idx5].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.valid = kcg_true;
    outC->_L62[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L62[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L62[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L62[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.valid = kcg_true;
    outC->_L62[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L62[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L62[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L62[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L62[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L62[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L62[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L62[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L62[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L62[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L62[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L62[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
    }
    outC->_L62[idx5].missed = kcg_true;
  }
  outC->_L47.valid = kcg_true;
  outC->_L47.nid_c = kcg_lit_int64(0);
  outC->_L47.nid_bg = kcg_lit_int64(0);
  outC->_L47.q_link = Q_LINK_Unlinked;
  outC->_L47.location.nominal = kcg_lit_int64(0);
  outC->_L47.location.d_min = kcg_lit_int64(0);
  outC->_L47.location.d_max = kcg_lit_int64(0);
  outC->_L47.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.valid = kcg_true;
  outC->_L47.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L47.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L47.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L47.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L47.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L47.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L47.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L47.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.valid = kcg_true;
  outC->_L47.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L47.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L47.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L47.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L47.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L47.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L47.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L47.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L47.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L47.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L47.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L47.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->_L47.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L47.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L47.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int64(0);
    outC->_L47.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L47.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
    outC->_L47.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L47.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L47.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L47.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
  }
  outC->_L47.missed = kcg_true;
  outC->_L48.valid = kcg_true;
  outC->_L48.nid_c = kcg_lit_int64(0);
  outC->_L48.nid_bg = kcg_lit_int64(0);
  outC->_L48.q_link = Q_LINK_Unlinked;
  outC->_L48.location.nominal = kcg_lit_int64(0);
  outC->_L48.location.d_min = kcg_lit_int64(0);
  outC->_L48.location.d_max = kcg_lit_int64(0);
  outC->_L48.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.valid = kcg_true;
  outC->_L48.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L48.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L48.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L48.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L48.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L48.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L48.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L48.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.valid = kcg_true;
  outC->_L48.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L48.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L48.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L48.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L48.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L48.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L48.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L48.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L48.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L48.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L48.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L48.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L48.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L48.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L48.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
    outC->_L48.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L48.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L48.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int64(0);
    outC->_L48.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L48.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
    outC->_L48.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L48.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L48.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L48.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
  }
  outC->_L48.missed = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L61.valid = kcg_true;
  outC->_L61.nid_c = kcg_lit_int64(0);
  outC->_L61.nid_bg = kcg_lit_int64(0);
  outC->_L61.q_link = Q_LINK_Unlinked;
  outC->_L61.location.nominal = kcg_lit_int64(0);
  outC->_L61.location.d_min = kcg_lit_int64(0);
  outC->_L61.location.d_max = kcg_lit_int64(0);
  outC->_L61.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.valid = kcg_true;
  outC->_L61.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L61.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L61.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L61.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L61.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L61.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L61.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L61.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L61.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L61.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L61.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L61.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L61.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L61.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L61.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L61.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L61.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int64(0);
    outC->_L61.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L61.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L61.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int64(0);
    outC->_L61.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L61.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int64(0);
    outC->_L61.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L61.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L61.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L61.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int64(0);
  }
  outC->_L61.missed = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.nid_c = kcg_lit_int64(0);
  outC->_L21.nid_bg = kcg_lit_int64(0);
  outC->_L21.q_link = Q_LINK_Unlinked;
  outC->_L21.location.nominal = kcg_lit_int64(0);
  outC->_L21.location.d_min = kcg_lit_int64(0);
  outC->_L21.location.d_max = kcg_lit_int64(0);
  outC->_L21.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.valid = kcg_true;
  outC->_L21.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L21.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L21.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L21.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L21.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L21.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L21.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L21.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L21.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L21.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L21.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L21.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L21.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L21.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int64(0);
    outC->_L21.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L21.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L21.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int64(0);
    outC->_L21.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int64(0);
    outC->_L21.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int64(0);
    outC->_L21.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int64(0);
  }
  outC->_L21.missed = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L18 = kcg_true;
  for (idx11 = 0; idx11 < 41; idx11++) {
    outC->_L17[idx11].valid = kcg_true;
    outC->_L17[idx11].nid_c = kcg_lit_int64(0);
    outC->_L17[idx11].nid_bg = kcg_lit_int64(0);
    outC->_L17[idx11].q_link = Q_LINK_Unlinked;
    outC->_L17[idx11].location.nominal = kcg_lit_int64(0);
    outC->_L17[idx11].location.d_min = kcg_lit_int64(0);
    outC->_L17[idx11].location.d_max = kcg_lit_int64(0);
    outC->_L17[idx11].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.valid = kcg_true;
    outC->_L17[idx11].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L17[idx11].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L17[idx11].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L17[idx11].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17[idx11].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17[idx11].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17[idx11].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.valid = kcg_true;
    outC->_L17[idx11].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L17[idx11].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L17[idx11].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L17[idx11].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L17[idx11].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L17[idx11].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L17[idx11].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L17[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L17[idx11].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L17[idx11].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L17[idx11].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx10 = 0; idx10 < 33; idx10++) {
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].valid = kcg_true;
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int64(0);
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int64(0);
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int64(0);
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int64(0);
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L17[idx11].infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int64(0);
    }
    outC->_L17[idx11].missed = kcg_true;
  }
  for (idx13 = 0; idx13 < 41; idx13++) {
    outC->_L16[idx13].valid = kcg_true;
    outC->_L16[idx13].nid_c = kcg_lit_int64(0);
    outC->_L16[idx13].nid_bg = kcg_lit_int64(0);
    outC->_L16[idx13].q_link = Q_LINK_Unlinked;
    outC->_L16[idx13].location.nominal = kcg_lit_int64(0);
    outC->_L16[idx13].location.d_min = kcg_lit_int64(0);
    outC->_L16[idx13].location.d_max = kcg_lit_int64(0);
    outC->_L16[idx13].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.valid = kcg_true;
    outC->_L16[idx13].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L16[idx13].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L16[idx13].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L16[idx13].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.valid = kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L16[idx13].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L16[idx13].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L16[idx13].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L16[idx13].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L16[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L16[idx13].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].valid = kcg_true;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int64(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int64(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int64(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int64(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int64(0);
    }
    outC->_L16[idx13].missed = kcg_true;
  }
  for (idx15 = 0; idx15 < 41; idx15++) {
    outC->_L15[idx15].valid = kcg_true;
    outC->_L15[idx15].nid_c = kcg_lit_int64(0);
    outC->_L15[idx15].nid_bg = kcg_lit_int64(0);
    outC->_L15[idx15].q_link = Q_LINK_Unlinked;
    outC->_L15[idx15].location.nominal = kcg_lit_int64(0);
    outC->_L15[idx15].location.d_min = kcg_lit_int64(0);
    outC->_L15[idx15].location.d_max = kcg_lit_int64(0);
    outC->_L15[idx15].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.valid = kcg_true;
    outC->_L15[idx15].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L15[idx15].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L15[idx15].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L15[idx15].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15[idx15].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15[idx15].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15[idx15].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.valid = kcg_true;
    outC->_L15[idx15].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L15[idx15].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15[idx15].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15[idx15].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L15[idx15].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15[idx15].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L15[idx15].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L15[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L15[idx15].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L15[idx15].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L15[idx15].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx14 = 0; idx14 < 33; idx14++) {
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].valid = kcg_true;
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int64(0);
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int64(0);
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int64(0);
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int64(0);
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L15[idx15].infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int64(0);
    }
    outC->_L15[idx15].missed = kcg_true;
  }
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  for (idx17 = 0; idx17 < 41; idx17++) {
    outC->_L11[idx17].valid = kcg_true;
    outC->_L11[idx17].nid_c = kcg_lit_int64(0);
    outC->_L11[idx17].nid_bg = kcg_lit_int64(0);
    outC->_L11[idx17].q_link = Q_LINK_Unlinked;
    outC->_L11[idx17].location.nominal = kcg_lit_int64(0);
    outC->_L11[idx17].location.d_min = kcg_lit_int64(0);
    outC->_L11[idx17].location.d_max = kcg_lit_int64(0);
    outC->_L11[idx17].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.valid = kcg_true;
    outC->_L11[idx17].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L11[idx17].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L11[idx17].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L11[idx17].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11[idx17].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11[idx17].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11[idx17].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.valid = kcg_true;
    outC->_L11[idx17].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L11[idx17].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L11[idx17].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L11[idx17].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L11[idx17].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L11[idx17].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L11[idx17].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L11[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L11[idx17].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L11[idx17].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L11[idx17].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx16 = 0; idx16 < 33; idx16++) {
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].valid = kcg_true;
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].nid_LRBG = kcg_lit_int64(0);
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int64(0);
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int64(0);
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int64(0);
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L11[idx17].infoFromPassing.linkedBGs[idx16].q_locacc = kcg_lit_int64(0);
    }
    outC->_L11[idx17].missed = kcg_true;
  }
  outC->_L9 = kcg_true;
  for (idx19 = 0; idx19 < 41; idx19++) {
    outC->_L8[idx19].valid = kcg_true;
    outC->_L8[idx19].nid_c = kcg_lit_int64(0);
    outC->_L8[idx19].nid_bg = kcg_lit_int64(0);
    outC->_L8[idx19].q_link = Q_LINK_Unlinked;
    outC->_L8[idx19].location.nominal = kcg_lit_int64(0);
    outC->_L8[idx19].location.d_min = kcg_lit_int64(0);
    outC->_L8[idx19].location.d_max = kcg_lit_int64(0);
    outC->_L8[idx19].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.valid = kcg_true;
    outC->_L8[idx19].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L8[idx19].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L8[idx19].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L8[idx19].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8[idx19].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8[idx19].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8[idx19].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.valid = kcg_true;
    outC->_L8[idx19].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L8[idx19].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L8[idx19].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L8[idx19].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L8[idx19].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L8[idx19].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L8[idx19].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L8[idx19].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L8[idx19].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L8[idx19].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L8[idx19].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx18 = 0; idx18 < 33; idx18++) {
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].valid = kcg_true;
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int64(0);
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].q_scale = Q_SCALE_10_cm_scale;
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int64(0);
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int64(0);
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int64(0);
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L8[idx19].infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int64(0);
    }
    outC->_L8[idx19].missed = kcg_true;
  }
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_c = kcg_lit_int64(0);
  outC->_L7.nid_bg = kcg_lit_int64(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L7.location.nominal = kcg_lit_int64(0);
  outC->_L7.location.d_min = kcg_lit_int64(0);
  outC->_L7.location.d_max = kcg_lit_int64(0);
  outC->_L7.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.valid = kcg_true;
  outC->_L7.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L7.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->_L7.infoFromPassing.linkedBGs[idx20].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
    outC->_L7.infoFromPassing.linkedBGs[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.infoFromPassing.linkedBGs[idx20].d_link = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.infoFromPassing.linkedBGs[idx20].nid_c = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx20].nid_bg = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.infoFromPassing.linkedBGs[idx20].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.missed = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->bg_loc.valid = kcg_true;
  outC->bg_loc.nid_c = kcg_lit_int64(0);
  outC->bg_loc.nid_bg = kcg_lit_int64(0);
  outC->bg_loc.q_link = Q_LINK_Unlinked;
  outC->bg_loc.location.nominal = kcg_lit_int64(0);
  outC->bg_loc.location.d_min = kcg_lit_int64(0);
  outC->bg_loc.location.d_max = kcg_lit_int64(0);
  outC->bg_loc.seqNoOnTrack = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.valid = kcg_true;
  outC->bg_loc.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->bg_loc.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->bg_loc.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->bg_loc.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->bg_loc.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->bg_loc.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->bg_loc.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->bg_loc.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.valid = kcg_true;
  outC->bg_loc.infoFromPassing.BG_Header.valid = kcg_true;
  outC->bg_loc.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->bg_loc.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->bg_loc.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->bg_loc.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->bg_loc.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->bg_loc.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->bg_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->bg_loc.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->bg_loc.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->bg_loc.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int64(0);
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int64(0);
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int64(0);
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int64(0);
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->bg_loc.infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int64(0);
  }
  outC->bg_loc.missed = kcg_true;
  outC->bgFound = kcg_true;
  outC->indexOfBGInBGs = kcg_lit_int64(0);
  outC->overrun = kcg_true;
  for (idx23 = 0; idx23 < 41; idx23++) {
    outC->BGs_out[idx23].valid = kcg_true;
    outC->BGs_out[idx23].nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx23].nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx23].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx23].location.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx23].location.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx23].location.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx23].seqNoOnTrack = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx23].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx23].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->BGs_out[idx23].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx23].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx22 = 0; idx22 < 33; idx22++) {
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].valid = kcg_true;
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].nid_LRBG =
        kcg_lit_int64(0);
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].d_link = kcg_lit_int64(0);
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].nid_c = kcg_lit_int64(0);
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].nid_bg = kcg_lit_int64(0);
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx23].infoFromPassing.linkedBGs[idx22].q_locacc =
        kcg_lit_int64(0);
    }
    outC->BGs_out[idx23].missed = kcg_true;
  }
  /* _L17=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex#1)/ */
  insertBG_atIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_insertBG_atIndex_1);
  /* _L15=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex#1)/ */
  deleteBG_atIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_deleteBG_atIndex_1);
  /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack#1)/ */
  indexOfBG_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_onTrack_1);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mergeBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* _L17=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex#1)/ */
  insertBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_insertBG_atIndex_1);
  /* _L15=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex#1)/ */
  deleteBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_deleteBG_atIndex_1);
  /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack#1)/ */
  indexOfBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_onTrack_1);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

