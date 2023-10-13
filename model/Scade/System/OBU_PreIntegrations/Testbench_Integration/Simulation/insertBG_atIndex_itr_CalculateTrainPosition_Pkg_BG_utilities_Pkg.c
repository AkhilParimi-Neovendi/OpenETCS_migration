/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr/ */
void insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int64 iteratorIndex,
  /* indexOfBG/ */
  kcg_int64 indexOfBG,
  /* BG_toBeInserted/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_toBeInserted,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* BG_shifted_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_shifted_in,
  outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* cont/ */
  static kcg_bool cont_partial;
  /* BG_out/ */
  static positionedBG_T_TrainPosition_Types_Pck BG_out_partial;
  /* cont/ */
  static kcg_bool _1_cont_partial;
  /* BG_out/ */
  static positionedBG_T_TrainPosition_Types_Pck _2_BG_out_partial;
  /* BG_out/ */
  static positionedBG_T_TrainPosition_Types_Pck _3_BG_out_partial;
  /* cont/ */
  static kcg_bool _4_cont_partial;
  /* BG_out/ */
  static positionedBG_T_TrainPosition_Types_Pck _5_BG_out_partial;
  /* cont/ */
  static kcg_bool _6_cont_partial;

  outC->IfBlock1_clock = iteratorIndex < indexOfBG;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_true;
    cont_partial = outC->_L2_then_IfBlock1;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L1_then_IfBlock1,
      BG_in);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &BG_out_partial,
      &outC->_L1_then_IfBlock1);
    outC->cont = cont_partial;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &BG_out_partial);
  }
  else {
    outC->else_clock_IfBlock1 = iteratorIndex == indexOfBG;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L3_then_else_IfBlock1,
        BG_toBeInserted);
      outC->_L2_then_else_IfBlock1 = kcg_true;
      _6_cont_partial = outC->_L2_then_else_IfBlock1;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_5_BG_out_partial,
        &outC->_L3_then_else_IfBlock1);
      _1_cont_partial = _6_cont_partial;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_2_BG_out_partial,
        &_5_BG_out_partial);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L1_else_else_IfBlock1,
        BG_shifted_in);
      outC->_L2_else_else_IfBlock1 = outC->_L1_else_else_IfBlock1.valid;
      _4_cont_partial = outC->_L2_else_else_IfBlock1;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_3_BG_out_partial,
        &outC->_L1_else_else_IfBlock1);
      _1_cont_partial = _4_cont_partial;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_2_BG_out_partial,
        &_3_BG_out_partial);
    }
    outC->cont = _1_cont_partial;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->BG_out,
      &_2_BG_out_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void insertBG_atIndex_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L3_then_else_IfBlock1.location.nominal = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.location.d_min = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.location.d_max = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3_then_else_IfBlock1.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3_then_else_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].q_dir =
      Q_DIR_Reverse;
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].d_link =
      kcg_lit_int64(0);
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].nid_c =
      kcg_lit_int64(0);
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].nid_bg =
      kcg_lit_int64(0);
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3_then_else_IfBlock1.infoFromPassing.linkedBGs[idx].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L3_then_else_IfBlock1.missed = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L1_else_else_IfBlock1.location.nominal = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.location.d_min = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.location.d_max = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1_else_else_IfBlock1.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_else_else_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].q_dir =
      Q_DIR_Reverse;
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].d_link =
      kcg_lit_int64(0);
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].nid_c =
      kcg_lit_int64(0);
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].nid_bg =
      kcg_lit_int64(0);
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1_else_else_IfBlock1.infoFromPassing.linkedBGs[idx1].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L1_else_else_IfBlock1.missed = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L1_then_IfBlock1.location.nominal = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.location.d_min = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.location.d_max = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L1_then_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1_then_IfBlock1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1_then_IfBlock1.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L1_then_IfBlock1.missed = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_true;
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
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->BG_out.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->BG_out.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->BG_out.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->BG_out.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BG_out.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BG_out.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG_out.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->BG_out.missed = kcg_true;
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void insertBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

