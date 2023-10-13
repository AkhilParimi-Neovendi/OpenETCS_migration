/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id/ */
void indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_int64 acc;
  static kcg_size idx1;
  static kcg_int64 noname;

  outC->_L9 = cNoValidIndex_CalculateTrainPosition_Pkg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, BG);
  /* _L11/ */
  for (idx = 0; idx < 41; idx++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L11[idx], &outC->_L1);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs);
  outC->_L3 = enable;
  outC->_L6 = outC->_L9;
  /* _L8= */
  if (outC->_L3) {
    /* _L8= */
    for (idx1 = 0; idx1 < 41; idx1++) {
      acc = outC->_L6;
      /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr#1)/ */
      indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        /* _L8= */(kcg_int64) idx1,
        acc,
        &outC->_L11[idx1],
        &outC->_L2[idx1],
        &outC->Context_indexOfBG_by_id_itr_1[idx1]);
      outC->_L6 = outC->Context_indexOfBG_by_id_itr_1[idx1].indexOfBG;
      outC->_L8 = /* _L8= */(kcg_int64) (idx1 + 1);
      /* _L8= */
      if (!outC->Context_indexOfBG_by_id_itr_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L8 = kcg_lit_int64(0);
  }
  if ((kcg_lit_int64(0) <= outC->_L6) & (outC->_L6 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12,
      &outC->_L2[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L16 = outC->_L12.valid;
  outC->_L17 = cNoValidIndex_CalculateTrainPosition_Pkg;
  outC->_L18 = outC->_L6 != outC->_L17;
  outC->_L19 = outC->_L18 & outC->_L16;
  noname = outC->_L8;
  outC->indexValid = outC->_L18;
  outC->BG_found = outC->_L19;
  outC->indexOfBG = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.nid_c = kcg_lit_int64(0);
  outC->_L12.nid_bg = kcg_lit_int64(0);
  outC->_L12.q_link = Q_LINK_Unlinked;
  outC->_L12.location.nominal = kcg_lit_int64(0);
  outC->_L12.location.d_min = kcg_lit_int64(0);
  outC->_L12.location.d_max = kcg_lit_int64(0);
  outC->_L12.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.valid = kcg_true;
  outC->_L12.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L12.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L12.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.valid = kcg_true;
  outC->_L12.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L12.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L12.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L12.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L12.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L12.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L12.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L12.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L12.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L12.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L12.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L12.missed = kcg_true;
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L11[idx3].valid = kcg_true;
    outC->_L11[idx3].nid_c = kcg_lit_int64(0);
    outC->_L11[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L11[idx3].q_link = Q_LINK_Unlinked;
    outC->_L11[idx3].location.nominal = kcg_lit_int64(0);
    outC->_L11[idx3].location.d_min = kcg_lit_int64(0);
    outC->_L11[idx3].location.d_max = kcg_lit_int64(0);
    outC->_L11[idx3].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.valid = kcg_true;
    outC->_L11[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L11[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L11[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.valid = kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L11[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L11[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L11[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L11[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L11[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L11[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
    }
    outC->_L11[idx3].missed = kcg_true;
  }
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L2[idx5].valid = kcg_true;
    outC->_L2[idx5].nid_c = kcg_lit_int64(0);
    outC->_L2[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L2[idx5].q_link = Q_LINK_Unlinked;
    outC->_L2[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L2[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L2[idx5].location.d_max = kcg_lit_int64(0);
    outC->_L2[idx5].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.valid = kcg_true;
    outC->_L2[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L2[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L2[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.valid = kcg_true;
    outC->_L2[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L2[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L2[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L2[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
    }
    outC->_L2[idx5].missed = kcg_true;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_c = kcg_lit_int64(0);
  outC->_L1.nid_bg = kcg_lit_int64(0);
  outC->_L1.q_link = Q_LINK_Unlinked;
  outC->_L1.location.nominal = kcg_lit_int64(0);
  outC->_L1.location.d_min = kcg_lit_int64(0);
  outC->_L1.location.d_max = kcg_lit_int64(0);
  outC->_L1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.valid = kcg_true;
  outC->_L1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L1.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1.missed = kcg_true;
  outC->indexValid = kcg_true;
  outC->BG_found = kcg_true;
  outC->indexOfBG = kcg_lit_int64(0);
  for (idx = 0; idx < 41; idx++) {
    /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr#1)/ */
    indexOfBG_by_id_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_indexOfBG_by_id_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr#1)/ */
    indexOfBG_by_id_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_indexOfBG_by_id_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

