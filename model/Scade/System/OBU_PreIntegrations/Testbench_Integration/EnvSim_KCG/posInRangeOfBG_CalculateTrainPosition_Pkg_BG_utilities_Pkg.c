/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG/ */
void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* position/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_int32 acc;
  static kcg_size idx1;
  static kcg_int32 noname;

  outC->_L8 = cNoValidIndex_CalculateTrainPosition_Pkg;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, position);
  /* _L9/ */
  for (idx = 0; idx < 41; idx++) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L9[idx], &outC->_L2);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L3, BGs);
  outC->_L4 = enable;
  outC->_L5 = outC->_L8;
  /* _L7= */
  if (outC->_L4) {
    /* _L7= */
    for (idx1 = 0; idx1 < 41; idx1++) {
      acc = outC->_L5;
      /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr#1)/ */
      posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        /* _L7= */(kcg_int32) idx1,
        acc,
        &outC->_L9[idx1],
        &outC->_L3[idx1],
        &outC->Context_posInRangeOfBG_itr_1[idx1]);
      outC->_L5 = outC->Context_posInRangeOfBG_itr_1[idx1].indexOfBG;
      outC->_L7 = /* _L7= */(kcg_int32) (idx1 + 1);
      /* _L7= */
      if (!outC->Context_posInRangeOfBG_itr_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L7 = kcg_lit_int32(0);
  }
  if ((kcg_lit_int32(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      &outC->_L3[outC->_L5]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L12 = outC->_L10.valid;
  noname = outC->_L7;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG, &outC->_L10);
  outC->indexOfBG = outC->_L5;
  outC->isInRange = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void posInRangeOfBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L12 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.nid_c = kcg_lit_int32(0);
  outC->_L10.nid_bg = kcg_lit_int32(0);
  outC->_L10.q_link = Q_LINK_Unlinked;
  outC->_L10.location.nominal = kcg_lit_int32(0);
  outC->_L10.location.d_min = kcg_lit_int32(0);
  outC->_L10.location.d_max = kcg_lit_int32(0);
  outC->_L10.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.valid = kcg_true;
  outC->_L10.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L10.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L10.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L10.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L10.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L10.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L10.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L10.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L10.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L10.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L10.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L10.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L10.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L10.missed = kcg_true;
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L9[idx2].nominal = kcg_lit_int32(0);
    outC->_L9[idx2].d_min = kcg_lit_int32(0);
    outC->_L9[idx2].d_max = kcg_lit_int32(0);
  }
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L3[idx4].valid = kcg_true;
    outC->_L3[idx4].nid_c = kcg_lit_int32(0);
    outC->_L3[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L3[idx4].q_link = Q_LINK_Unlinked;
    outC->_L3[idx4].location.nominal = kcg_lit_int32(0);
    outC->_L3[idx4].location.d_min = kcg_lit_int32(0);
    outC->_L3[idx4].location.d_max = kcg_lit_int32(0);
    outC->_L3[idx4].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.valid = kcg_true;
    outC->_L3[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L3[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L3[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L3[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.valid = kcg_true;
    outC->_L3[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L3[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L3[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L3[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L3[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L3[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L3[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L3[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L3[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L3[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
    }
    outC->_L3[idx4].missed = kcg_true;
  }
  outC->_L2.nominal = kcg_lit_int32(0);
  outC->_L2.d_min = kcg_lit_int32(0);
  outC->_L2.d_max = kcg_lit_int32(0);
  outC->BG.valid = kcg_true;
  outC->BG.nid_c = kcg_lit_int32(0);
  outC->BG.nid_bg = kcg_lit_int32(0);
  outC->BG.q_link = Q_LINK_Unlinked;
  outC->BG.location.nominal = kcg_lit_int32(0);
  outC->BG.location.d_min = kcg_lit_int32(0);
  outC->BG.location.d_max = kcg_lit_int32(0);
  outC->BG.seqNoOnTrack = kcg_lit_int32(0);
  outC->BG.infoFromLinking.valid = kcg_true;
  outC->BG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->BG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->BG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->BG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->BG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->BG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->BG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->BG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->BG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->BG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->BG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->BG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->BG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->BG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->BG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->BG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->BG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->BG.infoFromLinking.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->BG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->BG.infoFromPassing.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->BG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->BG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->BG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->BG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->BG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->BG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->BG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->BG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->BG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->BG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->BG.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->BG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->BG.missed = kcg_true;
  outC->indexOfBG = kcg_lit_int32(0);
  outC->isInRange = kcg_true;
  for (idx = 0; idx < 41; idx++) {
    /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr#1)/ */
    posInRangeOfBG_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_posInRangeOfBG_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void posInRangeOfBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr#1)/ */
    posInRangeOfBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_posInRangeOfBG_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

