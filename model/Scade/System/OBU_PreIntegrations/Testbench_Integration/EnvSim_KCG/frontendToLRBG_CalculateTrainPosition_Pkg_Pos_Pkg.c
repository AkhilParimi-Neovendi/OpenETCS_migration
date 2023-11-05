/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG/ */
void frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* LRBG/ */
  positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* trainPositionInfo/ */
  trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* nominalOrReverseToLRBG/ */
  static Q_DLRBG nominalOrReverseToLRBG_partial;
  /* nominalOrReverseToLRBG/ */
  static Q_DLRBG _1_nominalOrReverseToLRBG_partial;
  /* nominalOrReverseToLRBG/ */
  static Q_DLRBG _2_nominalOrReverseToLRBG_partial;
  /* nominalOrReverseToLRBG/ */
  static Q_DLRBG _3_nominalOrReverseToLRBG_partial;

  outC->_L17 = Q_DIRLRBG_Unknown;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, LRBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L12, &outC->_L7.infoFromPassing);
  outC->_L14 = outC->_L12.BG_Header.trainOrientationToBG;
  outC->_L13 = outC->_L12.valid;
  outC->_L8 = outC->_L7.valid;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L1,
    trainPositionInfo);
  outC->_L2 = outC->_L1.valid;
  outC->_L18 = outC->_L2 & outC->_L8 & outC->_L13;
  /* _L19= */
  if (outC->_L18) {
    outC->_L19 = outC->_L14;
  }
  else {
    outC->_L19 = outC->_L17;
  }
  outC->trainOrientationToLRBG = outC->_L19;
  outC->IfBlock1_clock = outC->trainOrientationToLRBG == Q_DIRLRBG_Nominal;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->trainOrientationToLRBG == Q_DIRLRBG_Reverse;
    if (outC->else_clock_IfBlock1) {
      outC->_L6_then_else_IfBlock1 = kcg_lit_int32(0);
    }
    else {
      outC->_L1_else_else_IfBlock1 = Q_DLRBG_Unknown;
      _2_nominalOrReverseToLRBG_partial = outC->_L1_else_else_IfBlock1;
    }
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L3,
    &outC->_L1.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L4, trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->_L4.d_baliseAntenna_2_frontend);
  /* _L6=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L3,
    &outC->_L5,
    &outC->Context_add_2_Distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L6,
    &outC->Context_add_2_Distances_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L9, &outC->_L7.location);
  /* _L10=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L6,
    &outC->_L9,
    &outC->Context_sub_2_distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L10,
    &outC->Context_sub_2_distances_1.distance);
  outC->_L11 = outC->_L10.nominal;
  outC->estimated_d_LRBGToFrontend = outC->_L11;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L6_then_IfBlock1 = Q_DLRBG_Reverse;
    outC->_L5_then_IfBlock1 = Q_DLRBG_Nominal;
    outC->_L3_then_IfBlock1 = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1 = outC->estimated_d_LRBGToFrontend;
    outC->_L2_then_IfBlock1 = outC->_L1_then_IfBlock1 > outC->_L3_then_IfBlock1;
    /* IfBlock1:then:_L4= */
    if (outC->_L2_then_IfBlock1) {
      outC->_L4_then_IfBlock1 = outC->_L5_then_IfBlock1;
    }
    else {
      outC->_L4_then_IfBlock1 = outC->_L6_then_IfBlock1;
    }
    nominalOrReverseToLRBG_partial = outC->_L4_then_IfBlock1;
    outC->nominalOrReverseToLRBG = nominalOrReverseToLRBG_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = outC->estimated_d_LRBGToFrontend;
      outC->_L10_then_else_IfBlock1 = outC->_L5_then_else_IfBlock1 >
        outC->_L6_then_else_IfBlock1;
      outC->_L9_then_else_IfBlock1 = Q_DLRBG_Reverse;
      outC->_L8_then_else_IfBlock1 = Q_DLRBG_Nominal;
      /* IfBlock1:else:then:_L7= */
      if (outC->_L10_then_else_IfBlock1) {
        outC->_L7_then_else_IfBlock1 = outC->_L9_then_else_IfBlock1;
      }
      else {
        outC->_L7_then_else_IfBlock1 = outC->_L8_then_else_IfBlock1;
      }
      _3_nominalOrReverseToLRBG_partial = outC->_L7_then_else_IfBlock1;
      _1_nominalOrReverseToLRBG_partial = _3_nominalOrReverseToLRBG_partial;
    }
    else {
      _1_nominalOrReverseToLRBG_partial = _2_nominalOrReverseToLRBG_partial;
    }
    outC->nominalOrReverseToLRBG = _1_nominalOrReverseToLRBG_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void frontendToLRBG_init_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L19 = Q_DIRLRBG_Reverse;
  outC->_L18 = kcg_true;
  outC->_L17 = Q_DIRLRBG_Reverse;
  outC->_L14 = Q_DIRLRBG_Reverse;
  outC->_L13 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.BG_Header.valid = kcg_true;
  outC->_L12.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L12.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.BG_Header.bgPosition.valid = kcg_true;
  outC->_L12.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L12.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L12.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L12.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L12.linkedBGs[idx].valid = kcg_true;
    outC->_L12.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L12.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L12.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L12.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L12.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L12.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.linkedBGs[idx].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L12.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10.nominal = kcg_lit_int32(0);
  outC->_L10.d_min = kcg_lit_int32(0);
  outC->_L10.d_max = kcg_lit_int32(0);
  outC->_L9.nominal = kcg_lit_int32(0);
  outC->_L9.d_min = kcg_lit_int32(0);
  outC->_L9.d_max = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_c = kcg_lit_int32(0);
  outC->_L7.nid_bg = kcg_lit_int32(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L7.location.nominal = kcg_lit_int32(0);
  outC->_L7.location.d_min = kcg_lit_int32(0);
  outC->_L7.location.d_max = kcg_lit_int32(0);
  outC->_L7.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.valid = kcg_true;
  outC->_L7.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L7.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L7.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L7.missed = kcg_true;
  outC->_L6.nominal = kcg_lit_int32(0);
  outC->_L6.d_min = kcg_lit_int32(0);
  outC->_L6.d_max = kcg_lit_int32(0);
  outC->_L5.nominal = kcg_lit_int32(0);
  outC->_L5.d_min = kcg_lit_int32(0);
  outC->_L5.d_max = kcg_lit_int32(0);
  outC->_L4.nid_engine = kcg_lit_int32(0);
  outC->_L4.nid_operational = kcg_lit_int32(0);
  outC->_L4.l_train = kcg_lit_int32(0);
  outC->_L4.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L4.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L4.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L4.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L4.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L4.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L4.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L4.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L4.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L4.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L4.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L4.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L3.nominal = kcg_lit_int32(0);
  outC->_L3.d_min = kcg_lit_int32(0);
  outC->_L3.d_max = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = kcg_lit_int32(0);
  outC->_L1.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1.trainPositionDerivedFromLastLinkedBG.nominal = kcg_lit_int32(0);
  outC->_L1.trainPositionDerivedFromLastLinkedBG.d_min = kcg_lit_int32(0);
  outC->_L1.trainPositionDerivedFromLastLinkedBG.d_max = kcg_lit_int32(0);
  outC->_L1.trainPositionDerivedFromLastUnlinkedBG.nominal = kcg_lit_int32(0);
  outC->_L1.trainPositionDerivedFromLastUnlinkedBG.d_min = kcg_lit_int32(0);
  outC->_L1.trainPositionDerivedFromLastUnlinkedBG.d_max = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.valid = kcg_true;
  outC->_L1.prevPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L1.prevPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L1.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_dir =
      Q_DIR_Reverse;
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int32(0);
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int32(0);
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int32(0);
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1.prevPassedLinkedBG.missed = kcg_true;
  outC->_L1.lastPassedLinkedBG.valid = kcg_true;
  outC->_L1.lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L1.lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L1.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].q_dir =
      Q_DIR_Reverse;
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].d_link =
      kcg_lit_int32(0);
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].nid_c =
      kcg_lit_int32(0);
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].nid_bg =
      kcg_lit_int32(0);
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx3].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1.lastPassedLinkedBG.missed = kcg_true;
  outC->_L1.lastPassedUnlinkedBG.valid = kcg_true;
  outC->_L1.lastPassedUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L1.lastPassedUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_dir =
      Q_DIR_Reverse;
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].d_link =
      kcg_lit_int32(0);
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].nid_c =
      kcg_lit_int32(0);
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].nid_bg =
      kcg_lit_int32(0);
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1.lastPassedUnlinkedBG.missed = kcg_true;
  outC->_L1.speed = kcg_lit_int32(0);
  outC->_L1.linkingIsUsedOnboard = kcg_true;
  outC->trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->estimated_d_LRBGToFrontend = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_then_else_IfBlock1 = Q_DLRBG_Reverse;
  outC->_L8_then_else_IfBlock1 = Q_DLRBG_Reverse;
  outC->_L9_then_else_IfBlock1 = Q_DLRBG_Reverse;
  outC->_L10_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = Q_DLRBG_Reverse;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = Q_DLRBG_Reverse;
  outC->_L5_then_IfBlock1 = Q_DLRBG_Reverse;
  outC->_L6_then_IfBlock1 = Q_DLRBG_Reverse;
  outC->nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  /* _L10=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L6=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void frontendToLRBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* _L10=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L6=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

