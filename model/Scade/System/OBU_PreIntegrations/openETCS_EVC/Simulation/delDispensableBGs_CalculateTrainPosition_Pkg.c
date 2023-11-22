/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::delDispensableBGs/ */
void delDispensableBGs_CalculateTrainPosition_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* deleteBG/ */
  kcg_bool deleteBG,
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC)
{
  /* BGs_out/ */
  positionedBGs_T_TrainPosition_Types_Pck BGs_out_partial;
  /* BGs_out/ */
  positionedBGs_T_TrainPosition_Types_Pck _1_BGs_out_partial;
  kcg_bool noname;
  kcg_bool _2_noname;

  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L8, BGs_in);
  outC->_L11 = deleteBG;
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs#1)/ */
  countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L8,
    outC->_L11,
    &outC->Context_countBGs_1);
  outC->_L1 = outC->Context_countBGs_1.empty;
  outC->_L2 = outC->Context_countBGs_1.full;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L3,
    &outC->Context_countBGs_1.counters);
  outC->_L15 = outC->_L3.passedLinkedBGsCount;
  outC->passedLinkedBGsCount = outC->_L15;
  outC->IfBlock1_clock = outC->passedLinkedBGsCount > kcg_lit_int32(0);
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->_L62_else_IfBlock1 =
      cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg;
  }
  outC->_L16 = outC->_L3.passedUnlinkedBGsCount;
  outC->passedUnlinkedBGsCount = outC->_L16;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L14_then_IfBlock1,
      BGs_in);
    outC->_L8_then_IfBlock1 = kcg_true;
    outC->_L5_then_IfBlock1 = kcg_lit_int32(1);
    outC->_L3_then_IfBlock1 = cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg;
    outC->_L1_then_IfBlock1 = outC->passedLinkedBGsCount;
    outC->_L2_then_IfBlock1 = outC->_L1_then_IfBlock1 - outC->_L3_then_IfBlock1;
    outC->_L4_then_IfBlock1 = outC->_L2_then_IfBlock1 + outC->_L5_then_IfBlock1;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L9_then_IfBlock1,
      BGs_in);
    outC->_L10_then_IfBlock1 = deleteBG;
    /* IfBlock1:then:_L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#2)/ */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L8_then_IfBlock1,
      outC->_L4_then_IfBlock1,
      &outC->_L9_then_IfBlock1,
      outC->_L10_then_IfBlock1,
      &outC->Context_indexOf_nthPassedBG_2);
    outC->_L6_then_IfBlock1 = outC->Context_indexOf_nthPassedBG_2.indexOfBG;
    outC->_L7_then_IfBlock1 = outC->Context_indexOf_nthPassedBG_2.BG_found;
    outC->_L12_then_IfBlock1 = deleteBG;
    outC->_L11_then_IfBlock1 = outC->_L7_then_IfBlock1 & outC->_L12_then_IfBlock1;
    /* IfBlock1:then:_L13=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#2)/ */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L14_then_IfBlock1,
      outC->_L6_then_IfBlock1,
      outC->_L11_then_IfBlock1,
      &outC->Context_deleteBGs_beforeIndex_2);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L13_then_IfBlock1,
      &outC->Context_deleteBGs_beforeIndex_2.BGs_out);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &BGs_out_partial,
      &outC->_L13_then_IfBlock1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs_out,
      &BGs_out_partial);
  }
  else {
    outC->_L61_else_IfBlock1 = outC->passedUnlinkedBGsCount;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L59_else_IfBlock1,
      BGs_in);
    outC->_L53_else_IfBlock1 = kcg_false;
    outC->_L51_else_IfBlock1 = kcg_lit_int32(1);
    outC->_L47_else_IfBlock1 = outC->_L61_else_IfBlock1 - outC->_L62_else_IfBlock1;
    outC->_L49_else_IfBlock1 = outC->_L47_else_IfBlock1 + outC->_L51_else_IfBlock1;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L56_else_IfBlock1,
      BGs_in);
    outC->_L57_else_IfBlock1 = deleteBG;
    /* IfBlock1:else:_L54=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#9)/ */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L53_else_IfBlock1,
      outC->_L49_else_IfBlock1,
      &outC->_L56_else_IfBlock1,
      outC->_L57_else_IfBlock1,
      &outC->Context_indexOf_nthPassedBG_9);
    outC->_L54_else_IfBlock1 = outC->Context_indexOf_nthPassedBG_9.indexOfBG;
    outC->_L55_else_IfBlock1 = outC->Context_indexOf_nthPassedBG_9.BG_found;
    outC->_L52_else_IfBlock1 = deleteBG;
    outC->_L58_else_IfBlock1 = outC->_L55_else_IfBlock1 & outC->_L52_else_IfBlock1;
    /* IfBlock1:else:_L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#9)/ */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L59_else_IfBlock1,
      outC->_L54_else_IfBlock1,
      outC->_L58_else_IfBlock1,
      &outC->Context_deleteBGs_beforeIndex_9);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L60_else_IfBlock1,
      &outC->Context_deleteBGs_beforeIndex_9.BGs_out);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_1_BGs_out_partial,
      &outC->_L60_else_IfBlock1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs_out,
      &_1_BGs_out_partial);
  }
  _2_noname = outC->_L2;
  noname = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void delDispensableBGs_init_CalculateTrainPosition_Pkg(
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;

  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L8[idx1].valid = kcg_true;
    outC->_L8[idx1].nid_c = kcg_lit_int32(0);
    outC->_L8[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L8[idx1].q_link = Q_LINK_Unlinked;
    outC->_L8[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L8[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L8[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L8[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.valid = kcg_true;
    outC->_L8[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L8[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L8[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L8[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.valid = kcg_true;
    outC->_L8[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L8[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L8[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L8[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L8[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L8[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L8[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L8[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L8[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L8[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L8[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L8[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L8[idx1].missed = kcg_true;
  }
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3.unlinkedBGsCount = kcg_lit_int32(0);
  outC->_L3.linkedBGsCount = kcg_lit_int32(0);
  outC->_L3.totalBGsCount = kcg_lit_int32(0);
  outC->_L3.passedUnlinkedBGsCount = kcg_lit_int32(0);
  outC->_L3.passedLinkedBGsCount = kcg_lit_int32(0);
  outC->_L3.passedTotalBGsCount = kcg_lit_int32(0);
  outC->passedUnlinkedBGsCount = kcg_lit_int32(0);
  outC->passedLinkedBGsCount = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L60_else_IfBlock1[idx3].valid = kcg_true;
    outC->_L60_else_IfBlock1[idx3].nid_c = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].q_link = Q_LINK_Unlinked;
    outC->_L60_else_IfBlock1[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.valid = kcg_true;
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L60_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.valid = kcg_true;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L60_else_IfBlock1[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_dir =
        Q_DIR_Reverse;
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].d_link =
        kcg_lit_int32(0);
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].nid_c =
        kcg_lit_int32(0);
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].nid_bg =
        kcg_lit_int32(0);
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L60_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L60_else_IfBlock1[idx3].missed = kcg_true;
  }
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L59_else_IfBlock1[idx5].valid = kcg_true;
    outC->_L59_else_IfBlock1[idx5].nid_c = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].q_link = Q_LINK_Unlinked;
    outC->_L59_else_IfBlock1[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.valid = kcg_true;
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L59_else_IfBlock1[idx5].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.valid = kcg_true;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L59_else_IfBlock1[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].q_dir =
        Q_DIR_Reverse;
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].d_link =
        kcg_lit_int32(0);
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].nid_c =
        kcg_lit_int32(0);
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].nid_bg =
        kcg_lit_int32(0);
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L59_else_IfBlock1[idx5].infoFromPassing.linkedBGs[idx4].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L59_else_IfBlock1[idx5].missed = kcg_true;
  }
  outC->_L58_else_IfBlock1 = kcg_true;
  outC->_L57_else_IfBlock1 = kcg_true;
  for (idx7 = 0; idx7 < 41; idx7++) {
    outC->_L56_else_IfBlock1[idx7].valid = kcg_true;
    outC->_L56_else_IfBlock1[idx7].nid_c = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].q_link = Q_LINK_Unlinked;
    outC->_L56_else_IfBlock1[idx7].location.nominal = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].location.d_min = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].location.d_max = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.valid = kcg_true;
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L56_else_IfBlock1[idx7].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.valid = kcg_true;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L56_else_IfBlock1[idx7].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx6 = 0; idx6 < 33; idx6++) {
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].valid = kcg_true;
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].q_dir =
        Q_DIR_Reverse;
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].d_link =
        kcg_lit_int32(0);
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].nid_c =
        kcg_lit_int32(0);
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].nid_bg =
        kcg_lit_int32(0);
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L56_else_IfBlock1[idx7].infoFromPassing.linkedBGs[idx6].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L56_else_IfBlock1[idx7].missed = kcg_true;
  }
  outC->_L54_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L55_else_IfBlock1 = kcg_true;
  outC->_L53_else_IfBlock1 = kcg_true;
  outC->_L52_else_IfBlock1 = kcg_true;
  outC->_L51_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L49_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 = kcg_true;
  for (idx9 = 0; idx9 < 41; idx9++) {
    outC->_L9_then_IfBlock1[idx9].valid = kcg_true;
    outC->_L9_then_IfBlock1[idx9].nid_c = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].q_link = Q_LINK_Unlinked;
    outC->_L9_then_IfBlock1[idx9].location.nominal = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].location.d_min = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].location.d_max = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.valid = kcg_true;
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9_then_IfBlock1[idx9].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.valid = kcg_true;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L9_then_IfBlock1[idx9].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx8 = 0; idx8 < 33; idx8++) {
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].valid = kcg_true;
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].q_dir =
        Q_DIR_Reverse;
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].d_link =
        kcg_lit_int32(0);
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].nid_c =
        kcg_lit_int32(0);
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].nid_bg =
        kcg_lit_int32(0);
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L9_then_IfBlock1[idx9].infoFromPassing.linkedBGs[idx8].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L9_then_IfBlock1[idx9].missed = kcg_true;
  }
  outC->_L10_then_IfBlock1 = kcg_true;
  outC->_L11_then_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1 = kcg_true;
  for (idx11 = 0; idx11 < 41; idx11++) {
    outC->_L13_then_IfBlock1[idx11].valid = kcg_true;
    outC->_L13_then_IfBlock1[idx11].nid_c = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].q_link = Q_LINK_Unlinked;
    outC->_L13_then_IfBlock1[idx11].location.nominal = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].location.d_min = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].location.d_max = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.valid = kcg_true;
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L13_then_IfBlock1[idx11].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.valid = kcg_true;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L13_then_IfBlock1[idx11].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx10 = 0; idx10 < 33; idx10++) {
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].valid =
        kcg_true;
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].d_link =
        kcg_lit_int32(0);
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].nid_c =
        kcg_lit_int32(0);
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].nid_bg =
        kcg_lit_int32(0);
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L13_then_IfBlock1[idx11].infoFromPassing.linkedBGs[idx10].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L13_then_IfBlock1[idx11].missed = kcg_true;
  }
  for (idx13 = 0; idx13 < 41; idx13++) {
    outC->_L14_then_IfBlock1[idx13].valid = kcg_true;
    outC->_L14_then_IfBlock1[idx13].nid_c = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].nid_bg = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].q_link = Q_LINK_Unlinked;
    outC->_L14_then_IfBlock1[idx13].location.nominal = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].location.d_min = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].location.d_max = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.valid = kcg_true;
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14_then_IfBlock1[idx13].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.valid = kcg_true;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L14_then_IfBlock1[idx13].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].valid =
        kcg_true;
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].q_dir =
        Q_DIR_Reverse;
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].d_link =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].nid_c =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].nid_bg =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L14_then_IfBlock1[idx13].infoFromPassing.linkedBGs[idx12].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L14_then_IfBlock1[idx13].missed = kcg_true;
  }
  for (idx15 = 0; idx15 < 41; idx15++) {
    outC->BGs_out[idx15].valid = kcg_true;
    outC->BGs_out[idx15].nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx15].nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx15].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx15].location.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx15].location.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx15].location.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx15].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx15].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx15].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_out[idx15].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx15].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx14 = 0; idx14 < 33; idx14++) {
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].valid = kcg_true;
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int32(0);
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int32(0);
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int32(0);
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx15].infoFromPassing.linkedBGs[idx14].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_out[idx15].missed = kcg_true;
  }
  /* IfBlock1:then:_L13=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#2)/ */
  deleteBGs_beforeIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_deleteBGs_beforeIndex_2);
  /* IfBlock1:then:_L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#2)/ */
  indexOf_nthPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOf_nthPassedBG_2);
  /* IfBlock1:else:_L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#9)/ */
  deleteBGs_beforeIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_deleteBGs_beforeIndex_9);
  /* IfBlock1:else:_L54=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#9)/ */
  indexOf_nthPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOf_nthPassedBG_9);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs#1)/ */
  countBGs_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_countBGs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void delDispensableBGs_reset_CalculateTrainPosition_Pkg(
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC)
{
  /* IfBlock1:then:_L13=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#2)/ */
  deleteBGs_beforeIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_deleteBGs_beforeIndex_2);
  /* IfBlock1:then:_L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#2)/ */
  indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOf_nthPassedBG_2);
  /* IfBlock1:else:_L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#9)/ */
  deleteBGs_beforeIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_deleteBGs_beforeIndex_9);
  /* IfBlock1:else:_L54=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#9)/ */
  indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOf_nthPassedBG_9);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs#1)/ */
  countBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_countBGs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** delDispensableBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

