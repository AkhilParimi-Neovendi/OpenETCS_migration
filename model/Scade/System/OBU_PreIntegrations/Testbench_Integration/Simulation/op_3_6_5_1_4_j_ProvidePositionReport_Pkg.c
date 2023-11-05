/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j/ */
void op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  /* LRBG/ */
  positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  /* LRBG/ */
  static positionedBG_T_TrainPosition_Types_Pck last_LRBG;

  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&last_LRBG, &outC->mem_LRBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->mem_LRBG, LRBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L21, &last_LRBG);
  outC->_L22 = outC->_L21.nid_bg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, LRBG);
  outC->_L23 = outC->_L1.nid_bg;
  outC->_L24 = outC->_L23 != outC->_L22;
  outC->_L14 = outC->_L1.valid;
  outC->_L2 = outC->_L1.q_link;
  outC->_L4 = Q_LINK_Linked;
  outC->_L3 = outC->_L4 == outC->_L2;
  outC->_L17 = outC->_L3 & outC->_L14;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L6,
    &outC->_L1.infoFromLinking);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L7, &outC->_L6.linkingInfo);
  outC->_L8 = outC->_L7.nid_bg;
  outC->_L5 = outC->_L1.nid_bg;
  outC->_L9 = outC->_L5 == outC->_L8;
  outC->_L18 = outC->_L9 & outC->_L17;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L19, trainPos);
  outC->_L20 = outC->_L19.linkingIsUsedOnboard;
  /* _L16= */
  if (outC->_L20) {
    outC->_L16 = outC->_L18;
  }
  else {
    outC->_L16 = outC->_L17;
  }
  outC->_L25 = outC->_L16 & outC->_L24;
  outC->trigger = outC->_L25;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.nid_c = kcg_lit_int32(0);
  outC->_L21.nid_bg = kcg_lit_int32(0);
  outC->_L21.q_link = Q_LINK_Unlinked;
  outC->_L21.location.nominal = kcg_lit_int32(0);
  outC->_L21.location.d_min = kcg_lit_int32(0);
  outC->_L21.location.d_max = kcg_lit_int32(0);
  outC->_L21.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.valid = kcg_true;
  outC->_L21.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L21.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L21.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L21.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L21.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L21.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L21.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L21.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L21.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L21.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L21.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L21.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L21.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L21.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L21.missed = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19.valid = kcg_true;
  outC->_L19.timestamp = kcg_lit_int32(0);
  outC->_L19.trainPositionIsUnknown = kcg_true;
  outC->_L19.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L19.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L19.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L19.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L19.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L19.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L19.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L19.LRBG.valid = kcg_true;
  outC->_L19.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L19.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L19.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L19.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L19.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L19.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L19.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L19.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L19.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.LRBG.missed = kcg_true;
  outC->_L19.prvLRBG.valid = kcg_true;
  outC->_L19.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L19.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L19.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L19.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L19.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L19.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L19.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.prvLRBG.missed = kcg_true;
  outC->_L19.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L19.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L19.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L19.linkingIsUsedOnboard = kcg_true;
  outC->_L19.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L19.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L19.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_LRBG = kcg_lit_int32(0);
  outC->_L7.q_dir = Q_DIR_Reverse;
  outC->_L7.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.d_link = kcg_lit_int32(0);
  outC->_L7.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.nid_c = kcg_lit_int32(0);
  outC->_L7.nid_bg = kcg_lit_int32(0);
  outC->_L7.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L7.q_locacc = kcg_lit_int32(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L6.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L6.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L6.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L6.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L6.d_link.nominal = kcg_lit_int32(0);
  outC->_L6.d_link.d_min = kcg_lit_int32(0);
  outC->_L6.d_link.d_max = kcg_lit_int32(0);
  outC->_L6.linkingInfo.valid = kcg_true;
  outC->_L6.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L6.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L6.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L6.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L6.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L6.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L6.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = Q_LINK_Unlinked;
  outC->_L3 = kcg_true;
  outC->_L2 = Q_LINK_Unlinked;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_bg = kcg_lit_int32(0);
  outC->_L1.q_link = Q_LINK_Unlinked;
  outC->_L1.location.nominal = kcg_lit_int32(0);
  outC->_L1.location.d_min = kcg_lit_int32(0);
  outC->_L1.location.d_max = kcg_lit_int32(0);
  outC->_L1.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.valid = kcg_true;
  outC->_L1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L1.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.missed = kcg_true;
  outC->trigger = kcg_true;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->mem_LRBG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cPositionedBG_T_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->mem_LRBG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cPositionedBG_T_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *SV,
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &SV->Context_mem_LRBG,
    &outC->mem_LRBG);
}

void kcg_load_SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC,
  SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *SV)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->mem_LRBG,
    &SV->Context_mem_LRBG);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_j_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

