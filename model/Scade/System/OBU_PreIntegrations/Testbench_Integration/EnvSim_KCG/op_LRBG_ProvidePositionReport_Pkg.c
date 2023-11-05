/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_LRBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_LRBG/ */
void op_LRBG_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_LRBG_ProvidePositionReport_Pkg *outC)
{
  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, trainPos);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L32,
    &outC->_L2.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, posBGs);
  /* _L38=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs)/ */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
    &outC->_L1,
    &outC->_L2,
    &outC->Context_op_GetLRBGfromBGs);
  outC->_L38 = outC->Context_op_GetLRBGfromBGs.found;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L39,
    &outC->Context_op_GetLRBGfromBGs.lrbg);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L37, &outC->_L39.location);
  /* _L31=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L32,
    &outC->_L37,
    &outC->Context_sub_2_distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L31,
    &outC->Context_sub_2_distances_1.distance);
  outC->_L33 = outC->_L31.nominal;
  outC->A_Input_Abs_1_int32 = outC->_L33;
  outC->_L5_Abs_1_int32 = outC->A_Input_Abs_1_int32;
  outC->_L3_Abs_1_int32 = - outC->_L5_Abs_1_int32;
  outC->_L1_Abs_1_int32 = outC->_L8_Abs_1_int32 <= outC->_L5_Abs_1_int32;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_int32) {
    outC->_L2_Abs_1_int32 = outC->_L5_Abs_1_int32;
  }
  else {
    outC->_L2_Abs_1_int32 = outC->_L3_Abs_1_int32;
  }
  outC->A_Output_Abs_1_int32 = outC->_L2_Abs_1_int32;
  outC->_L20 = kcg_lit_int32(32767);
  outC->_L19 = outC->A_Output_Abs_1_int32;
  outC->_L15 = outC->_L2.trainPositionIsUnknown;
  outC->_L16 = !outC->_L15;
  outC->_L14 = outC->_L2.valid;
  outC->_L18 = outC->_L14 & outC->_L16 & outC->_L38;
  /* _L13= */
  if (outC->_L18) {
    outC->_L13 = outC->_L19;
  }
  else {
    outC->_L13 = outC->_L20;
  }
  outC->d_lrbg = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void op_LRBG_init_ProvidePositionReport_Pkg(
  outC_op_LRBG_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L38 = kcg_true;
  outC->_L39.valid = kcg_true;
  outC->_L39.nid_c = kcg_lit_int32(0);
  outC->_L39.nid_bg = kcg_lit_int32(0);
  outC->_L39.q_link = Q_LINK_Unlinked;
  outC->_L39.location.nominal = kcg_lit_int32(0);
  outC->_L39.location.d_min = kcg_lit_int32(0);
  outC->_L39.location.d_max = kcg_lit_int32(0);
  outC->_L39.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.valid = kcg_true;
  outC->_L39.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L39.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L39.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L39.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L39.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L39.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L39.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L39.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.valid = kcg_true;
  outC->_L39.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L39.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L39.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L39.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L39.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L39.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L39.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L39.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L39.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L39.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L39.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L39.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L39.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L39.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L39.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L39.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L39.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L39.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L39.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L39.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L39.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L39.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L39.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L39.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L39.missed = kcg_true;
  outC->_L37.nominal = kcg_lit_int32(0);
  outC->_L37.d_min = kcg_lit_int32(0);
  outC->_L37.d_max = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32.nominal = kcg_lit_int32(0);
  outC->_L32.d_min = kcg_lit_int32(0);
  outC->_L32.d_max = kcg_lit_int32(0);
  outC->_L31.nominal = kcg_lit_int32(0);
  outC->_L31.d_min = kcg_lit_int32(0);
  outC->_L31.d_max = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L1[idx2].valid = kcg_true;
    outC->_L1[idx2].nid_c = kcg_lit_int32(0);
    outC->_L1[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L1[idx2].q_link = Q_LINK_Unlinked;
    outC->_L1[idx2].location.nominal = kcg_lit_int32(0);
    outC->_L1[idx2].location.d_min = kcg_lit_int32(0);
    outC->_L1[idx2].location.d_max = kcg_lit_int32(0);
    outC->_L1[idx2].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.valid = kcg_true;
    outC->_L1[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.valid = kcg_true;
    outC->_L1[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L1[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
    }
    outC->_L1[idx2].missed = kcg_true;
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int32(0);
  outC->_L2.trainPositionIsUnknown = kcg_true;
  outC->_L2.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L2.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L2.LRBG.valid = kcg_true;
  outC->_L2.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.LRBG.missed = kcg_true;
  outC->_L2.prvLRBG.valid = kcg_true;
  outC->_L2.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.prvLRBG.missed = kcg_true;
  outC->_L2.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L2.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L2.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L2.linkingIsUsedOnboard = kcg_true;
  outC->_L2.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1_Abs_1_int32 = kcg_true;
  outC->_L2_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L3_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L5_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Output_Abs_1_int32 = kcg_lit_int32(0);
  outC->d_lrbg = kcg_lit_int32(0);
  /* _L31=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L38=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs)/ */
  op_GetLRBGfromBGs_init_ProvidePositionReport_Pkg(
    &outC->Context_op_GetLRBGfromBGs);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_LRBG_reset_ProvidePositionReport_Pkg(
  outC_op_LRBG_ProvidePositionReport_Pkg *outC)
{
  /* _L31=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L38=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs)/ */
  op_GetLRBGfromBGs_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_GetLRBGfromBGs);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ProvidePositionReport_Pkg::op_LRBG/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_LRBG_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

