/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr/ */
void deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int64 iteratorIndex,
  /* indexOfBG/ */
  kcg_int64 indexOfBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L6 = iteratorIndex;
  outC->_L3 = indexOfBG;
  outC->_L8 = outC->_L3 + outC->_L6;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L7, BGs_in);
  if ((kcg_lit_int64(0) <= outC->_L8) & (outC->_L8 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      &outC->_L7[outC->_L8]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  }
  outC->_L4 = iteratorIndex;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, BGs_in);
  if ((kcg_lit_int64(0) <= outC->_L4) & (outC->_L4 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L2,
      &outC->_L5[outC->_L4]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L2,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  }
  outC->_L9 = outC->_L2.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &outC->_L10);
  outC->cont = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void deleteBGs_beforeIndex_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L2.valid = kcg_true;
  outC->_L2.nid_c = kcg_lit_int64(0);
  outC->_L2.nid_bg = kcg_lit_int64(0);
  outC->_L2.q_link = Q_LINK_Unlinked;
  outC->_L2.location.nominal = kcg_lit_int64(0);
  outC->_L2.location.d_min = kcg_lit_int64(0);
  outC->_L2.location.d_max = kcg_lit_int64(0);
  outC->_L2.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.valid = kcg_true;
  outC->_L2.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L2.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L2.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.missed = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L5[idx2].valid = kcg_true;
    outC->_L5[idx2].nid_c = kcg_lit_int64(0);
    outC->_L5[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L5[idx2].q_link = Q_LINK_Unlinked;
    outC->_L5[idx2].location.nominal = kcg_lit_int64(0);
    outC->_L5[idx2].location.d_min = kcg_lit_int64(0);
    outC->_L5[idx2].location.d_max = kcg_lit_int64(0);
    outC->_L5[idx2].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.valid = kcg_true;
    outC->_L5[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L5[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.valid = kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L5[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
    }
    outC->_L5[idx2].missed = kcg_true;
  }
  outC->_L6 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L7[idx4].valid = kcg_true;
    outC->_L7[idx4].nid_c = kcg_lit_int64(0);
    outC->_L7[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L7[idx4].q_link = Q_LINK_Unlinked;
    outC->_L7[idx4].location.nominal = kcg_lit_int64(0);
    outC->_L7[idx4].location.d_min = kcg_lit_int64(0);
    outC->_L7[idx4].location.d_max = kcg_lit_int64(0);
    outC->_L7[idx4].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.valid = kcg_true;
    outC->_L7[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L7[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L7[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L7[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.valid = kcg_true;
    outC->_L7[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L7[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L7[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L7[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L7[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L7[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L7[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L7[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L7[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L7[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L7[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L7[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
    }
    outC->_L7[idx4].missed = kcg_true;
  }
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.nid_c = kcg_lit_int64(0);
  outC->_L10.nid_bg = kcg_lit_int64(0);
  outC->_L10.q_link = Q_LINK_Unlinked;
  outC->_L10.location.nominal = kcg_lit_int64(0);
  outC->_L10.location.d_min = kcg_lit_int64(0);
  outC->_L10.location.d_max = kcg_lit_int64(0);
  outC->_L10.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.valid = kcg_true;
  outC->_L10.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L10.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L10.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L10.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L10.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L10.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L10.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L10.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L10.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L10.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L10.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L10.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L10.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
    outC->_L10.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L10.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L10.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
    outC->_L10.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
    outC->_L10.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L10.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
  }
  outC->_L10.missed = kcg_true;
  outC->BG_out.valid = kcg_true;
  outC->BG_out.nid_c = kcg_lit_int64(0);
  outC->BG_out.nid_bg = kcg_lit_int64(0);
  outC->BG_out.q_link = Q_LINK_Unlinked;
  outC->BG_out.location.nominal = kcg_lit_int64(0);
  outC->BG_out.location.d_min = kcg_lit_int64(0);
  outC->BG_out.location.d_max = kcg_lit_int64(0);
  outC->BG_out.seqNoOnTrack = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.valid = kcg_true;
  outC->BG_out.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->BG_out.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->BG_out.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->BG_out.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->BG_out.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->BG_out.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->BG_out.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->BG_out.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->BG_out.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->BG_out.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->BG_out.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->BG_out.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->BG_out.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->BG_out.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->BG_out.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->BG_out.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BG_out.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BG_out.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG_out.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
  }
  outC->BG_out.missed = kcg_true;
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void deleteBGs_beforeIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

