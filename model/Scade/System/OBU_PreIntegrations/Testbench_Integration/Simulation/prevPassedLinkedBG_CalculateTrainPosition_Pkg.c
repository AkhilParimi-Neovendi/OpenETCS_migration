/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::prevPassedLinkedBG/ */
void prevPassedLinkedBG_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* last_BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *last_BGs,
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  static kcg_bool noname;

  outC->_L72 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L63, last_BGs);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L68, passedBG);
  outC->_L67 = outC->_L68.valid;
  /* _L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */
  indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L72,
    &outC->_L63,
    outC->_L67,
    &outC->Context_indexOfLastPassedBG_1);
  outC->_L60 = outC->Context_indexOfLastPassedBG_1.indexOfBG;
  outC->_L61 = outC->Context_indexOfLastPassedBG_1.BG_found;
  outC->_L62 = outC->Context_indexOfLastPassedBG_1.indexValid;
  noname = outC->_L62;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L71,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if ((kcg_lit_int64(0) <= outC->_L60) & (outC->_L60 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L64,
      &outC->_L63[outC->_L60]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L64,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L45 = outC->_L64.nid_c;
  outC->_L46 = outC->_L64.nid_bg;
  outC->_L49 = outC->_L68.BG_Header.nid_c;
  outC->_L50 = outC->_L68.BG_Header.nid_bg;
  /* _L42=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal#1)/ */
  nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L45,
    outC->_L46,
    outC->_L49,
    outC->_L50,
    &outC->Context_nidBG_nidc_equal_1);
  outC->_L42 = outC->Context_nidBG_nidc_equal_1.isEqual;
  outC->_L55 = !outC->_L42;
  outC->_L69 = outC->_L61 & outC->_L55;
  /* _L70= */
  if (outC->_L69) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &outC->_L64);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &outC->_L71);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->previouslyPassedBG,
    &outC->_L70);
}

#ifndef KCG_USER_DEFINED_INIT
void prevPassedLinkedBG_init_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L72 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.nid_c = kcg_lit_int64(0);
  outC->_L71.nid_bg = kcg_lit_int64(0);
  outC->_L71.q_link = Q_LINK_Unlinked;
  outC->_L71.location.nominal = kcg_lit_int64(0);
  outC->_L71.location.d_min = kcg_lit_int64(0);
  outC->_L71.location.d_max = kcg_lit_int64(0);
  outC->_L71.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.valid = kcg_true;
  outC->_L71.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L71.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L71.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L71.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L71.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L71.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L71.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L71.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L71.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L71.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L71.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L71.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L71.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L71.missed = kcg_true;
  outC->_L70.valid = kcg_true;
  outC->_L70.nid_c = kcg_lit_int64(0);
  outC->_L70.nid_bg = kcg_lit_int64(0);
  outC->_L70.q_link = Q_LINK_Unlinked;
  outC->_L70.location.nominal = kcg_lit_int64(0);
  outC->_L70.location.d_min = kcg_lit_int64(0);
  outC->_L70.location.d_max = kcg_lit_int64(0);
  outC->_L70.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.valid = kcg_true;
  outC->_L70.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L70.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L70.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L70.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L70.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L70.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L70.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L70.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L70.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L70.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L70.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L70.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L70.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L70.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L70.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L70.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L70.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L70.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L70.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L70.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L70.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L70.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L70.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L70.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L70.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L70.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L70.missed = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L68.valid = kcg_true;
  outC->_L68.BG_Header.valid = kcg_true;
  outC->_L68.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L68.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L68.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L68.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L68.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L68.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L68.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L68.BG_Header.bgPosition.valid = kcg_true;
  outC->_L68.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L68.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L68.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L68.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L68.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L68.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L68.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L68.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L68.linkedBGs[idx2].valid = kcg_true;
    outC->_L68.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L68.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L68.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L68.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L68.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L68.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L68.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L68.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L68.linkedBGs[idx2].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L68.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L64.valid = kcg_true;
  outC->_L64.nid_c = kcg_lit_int64(0);
  outC->_L64.nid_bg = kcg_lit_int64(0);
  outC->_L64.q_link = Q_LINK_Unlinked;
  outC->_L64.location.nominal = kcg_lit_int64(0);
  outC->_L64.location.d_min = kcg_lit_int64(0);
  outC->_L64.location.d_max = kcg_lit_int64(0);
  outC->_L64.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.valid = kcg_true;
  outC->_L64.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L64.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L64.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L64.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L64.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L64.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L64.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L64.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.valid = kcg_true;
  outC->_L64.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L64.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L64.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L64.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L64.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L64.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L64.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L64.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L64.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L64.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L64.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L64.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L64.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L64.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L64.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L64.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L64.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L64.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L64.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L64.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L64.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L64.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L64.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L64.missed = kcg_true;
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L63[idx5].valid = kcg_true;
    outC->_L63[idx5].nid_c = kcg_lit_int64(0);
    outC->_L63[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L63[idx5].q_link = Q_LINK_Unlinked;
    outC->_L63[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L63[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L63[idx5].location.d_max = kcg_lit_int64(0);
    outC->_L63[idx5].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.valid = kcg_true;
    outC->_L63[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L63[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L63[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L63[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L63[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L63[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L63[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.valid = kcg_true;
    outC->_L63[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L63[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L63[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L63[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L63[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L63[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L63[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L63[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L63[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L63[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L63[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L63[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
    }
    outC->_L63[idx5].missed = kcg_true;
  }
  outC->_L60 = kcg_lit_int64(0);
  outC->_L61 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L50 = kcg_lit_int64(0);
  outC->_L49 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->previouslyPassedBG.valid = kcg_true;
  outC->previouslyPassedBG.nid_c = kcg_lit_int64(0);
  outC->previouslyPassedBG.nid_bg = kcg_lit_int64(0);
  outC->previouslyPassedBG.q_link = Q_LINK_Unlinked;
  outC->previouslyPassedBG.location.nominal = kcg_lit_int64(0);
  outC->previouslyPassedBG.location.d_min = kcg_lit_int64(0);
  outC->previouslyPassedBG.location.d_max = kcg_lit_int64(0);
  outC->previouslyPassedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.valid = kcg_true;
  outC->previouslyPassedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->previouslyPassedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->previouslyPassedBG.infoFromPassing.valid = kcg_true;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->previouslyPassedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].nid_LRBG =
      kcg_lit_int64(0);
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].d_link =
      kcg_lit_int64(0);
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].nid_c =
      kcg_lit_int64(0);
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].nid_bg =
      kcg_lit_int64(0);
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[idx6].q_locacc =
      kcg_lit_int64(0);
  }
  outC->previouslyPassedBG.missed = kcg_true;
  /* _L42=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal#1)/ */
  nidBG_nidc_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidBG_nidc_equal_1);
  /* _L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */
  indexOfLastPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfLastPassedBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  /* _L42=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal#1)/ */
  nidBG_nidc_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidBG_nidc_equal_1);
  /* _L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */
  indexOfLastPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfLastPassedBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** prevPassedLinkedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

