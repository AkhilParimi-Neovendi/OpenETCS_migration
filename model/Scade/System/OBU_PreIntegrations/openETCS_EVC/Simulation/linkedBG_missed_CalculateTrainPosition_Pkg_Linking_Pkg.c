/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed/ */
void linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* position/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* enable/ */
  kcg_bool enable,
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* weakenedPosition/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg weakenedPosition_partial;
  L_internal_Type_Obu_BasicTypes_Pkg noname;
  L_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  /* weakenedPosition/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg _2_weakenedPosition_partial;
  L_internal_Type_Obu_BasicTypes_Pkg _3_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _4_noname;
  kcg_bool _5_noname;
  kcg_int32 _6_noname;
  /* position/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg last_position;

  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&last_position, &outC->mem_position);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->mem_position, position);
  /* _L7= */
  if (outC->init) {
    outC->_L7 = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  else {
    outC->_L7 = outC->_L2;
  }
  _6_noname = outC->_L7;
  /* _L10= */
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L10, &outC->_L3);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, BGs_in);
  outC->_L74 = outC->_L10.valid;
  /* _L71=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L10,
    &outC->_L5,
    outC->_L74,
    &outC->Context_indexOfBG_by_id_2);
  outC->_L71 = outC->Context_indexOfBG_by_id_2.indexOfBG;
  outC->_L72 = outC->Context_indexOfBG_by_id_2.BG_found;
  outC->_L73 = outC->Context_indexOfBG_by_id_2.indexValid;
  if ((kcg_lit_int32(0) <= outC->_L71) & (outC->_L71 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L75,
      &outC->_L5[outC->_L71]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L75,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _5_noname = outC->_L73;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L66, BGs_in);
  outC->_L17 = outC->_L75.infoFromPassing.valid;
  outC->_L18 = !outC->_L17;
  outC->_L15 = Q_LINK_Linked;
  outC->_L11 = outC->_L75.q_link;
  outC->_L16 = outC->_L11 == outC->_L15;
  outC->_L57 = kcg_lit_int32(0);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L54, position);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L52, &last_position);
  /* _L56=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L54,
    &outC->_L52,
    &outC->Context_sub_2_distances_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L56,
    &outC->Context_sub_2_distances_2.distance);
  outC->_L55 = outC->_L56.nominal;
  outC->_L53 = outC->_L55 >= outC->_L57;
  outC->movedAhead = outC->_L53;
  outC->IfBlock1_clock = outC->movedAhead;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1_then_IfBlock1, position);
    outC->_L3_then_IfBlock1 = outC->_L1_then_IfBlock1.nominal;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L2_then_IfBlock1,
      &last_position);
    outC->_L9_then_IfBlock1 = outC->_L2_then_IfBlock1.d_min;
    outC->_L8_then_IfBlock1 = outC->_L2_then_IfBlock1.nominal;
    outC->_L11_then_IfBlock1 = outC->_L8_then_IfBlock1 + outC->_L9_then_IfBlock1;
    outC->_L12_then_IfBlock1 = outC->_L11_then_IfBlock1 - outC->_L3_then_IfBlock1;
    outC->_L5_then_IfBlock1 = outC->_L1_then_IfBlock1.d_max;
    outC->_L6_then_IfBlock1.nominal = outC->_L3_then_IfBlock1;
    outC->_L6_then_IfBlock1.d_min = outC->_L12_then_IfBlock1;
    outC->_L6_then_IfBlock1.d_max = outC->_L5_then_IfBlock1;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &weakenedPosition_partial,
      &outC->_L6_then_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->weakenedPosition,
      &weakenedPosition_partial);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L3_else_IfBlock1, position);
    outC->_L11_else_IfBlock1 = outC->_L3_else_IfBlock1.nominal;
    outC->_L12_else_IfBlock1 = outC->_L3_else_IfBlock1.d_min;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L9_else_IfBlock1,
      &last_position);
    outC->_L7_else_IfBlock1 = outC->_L9_else_IfBlock1.d_max;
    outC->_L5_else_IfBlock1 = outC->_L9_else_IfBlock1.nominal;
    outC->_L4_else_IfBlock1 = outC->_L5_else_IfBlock1 + outC->_L7_else_IfBlock1;
    outC->_L10_else_IfBlock1 = outC->_L4_else_IfBlock1 - outC->_L11_else_IfBlock1;
    outC->_L8_else_IfBlock1.nominal = outC->_L11_else_IfBlock1;
    outC->_L8_else_IfBlock1.d_min = outC->_L12_else_IfBlock1;
    outC->_L8_else_IfBlock1.d_max = outC->_L10_else_IfBlock1;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_2_weakenedPosition_partial,
      &outC->_L8_else_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->weakenedPosition,
      &_2_weakenedPosition_partial);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L51,
    &outC->weakenedPosition);
  outC->_L6 = enable;
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG#1)/ */
  posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L51,
    &outC->_L5,
    outC->_L6,
    &outC->Context_posInRangeOfBG_1);
  outC->_L1 = outC->Context_posInRangeOfBG_1.isInRange;
  outC->_L2 = outC->Context_posInRangeOfBG_1.indexOfBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L3,
    &outC->Context_posInRangeOfBG_1.BG);
  /* _L8=(digital::FallingEdge#1)/ */
  FallingEdge_digital(outC->_L1, &outC->Context_FallingEdge_1);
  outC->_L8 = outC->Context_FallingEdge_1.FE_Output;
  /* _L59=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */
  positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L3,
    &outC->_L10,
    &outC->Context_positionedBGs_ids_notEqual_1);
  outC->_L59 = outC->Context_positionedBGs_ids_notEqual_1.idsNotEqual;
  outC->_L60 = outC->_L59 & outC->_L1;
  outC->_L58 = outC->_L60 | outC->_L8;
  outC->_L19 = outC->_L58 & outC->_L16 & outC->_L18 & outC->_L72;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, &outC->_L75);
  if (kcg_true) {
    outC->_L62.missed = outC->_L19;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L64, &outC->_L66);
  if ((kcg_lit_int32(0) <= outC->_L71) & (outC->_L71 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L64[outC->_L71],
      &outC->_L62);
  }
  /* _L65= */
  if (outC->_L19) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L65, &outC->_L64);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L65, &outC->_L66);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L65);
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = outC->_L1_then_IfBlock1.d_min;
    noname = outC->_L4_then_IfBlock1;
    outC->_L10_then_IfBlock1 = outC->_L2_then_IfBlock1.d_max;
    _1_noname = outC->_L10_then_IfBlock1;
  }
  else {
    outC->_L6_else_IfBlock1 = outC->_L9_else_IfBlock1.d_min;
    _3_noname = outC->_L6_else_IfBlock1;
    outC->_L13_else_IfBlock1 = outC->_L3_else_IfBlock1.d_max;
    _4_noname = outC->_L13_else_IfBlock1;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG, &outC->_L62);
  outC->indexOfBG = outC->_L71;
  outC->missed = outC->_L19;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void linkedBG_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
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

  outC->_L75.valid = kcg_true;
  outC->_L75.nid_c = kcg_lit_int32(0);
  outC->_L75.nid_bg = kcg_lit_int32(0);
  outC->_L75.q_link = Q_LINK_Unlinked;
  outC->_L75.location.nominal = kcg_lit_int32(0);
  outC->_L75.location.d_min = kcg_lit_int32(0);
  outC->_L75.location.d_max = kcg_lit_int32(0);
  outC->_L75.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.valid = kcg_true;
  outC->_L75.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L75.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L75.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L75.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L75.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L75.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L75.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.valid = kcg_true;
  outC->_L75.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L75.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L75.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L75.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L75.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L75.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L75.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L75.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L75.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L75.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L75.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L75.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L75.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L75.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L75.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L75.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L75.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L75.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L75.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L75.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L75.missed = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L71 = kcg_lit_int32(0);
  outC->_L72 = kcg_true;
  outC->_L73 = kcg_true;
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L66[idx2].valid = kcg_true;
    outC->_L66[idx2].nid_c = kcg_lit_int32(0);
    outC->_L66[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L66[idx2].q_link = Q_LINK_Unlinked;
    outC->_L66[idx2].location.nominal = kcg_lit_int32(0);
    outC->_L66[idx2].location.d_min = kcg_lit_int32(0);
    outC->_L66[idx2].location.d_max = kcg_lit_int32(0);
    outC->_L66[idx2].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.valid = kcg_true;
    outC->_L66[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L66[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L66[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L66[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L66[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L66[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L66[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.valid = kcg_true;
    outC->_L66[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L66[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L66[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L66[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L66[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L66[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L66[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L66[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L66[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L66[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L66[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L66[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
    }
    outC->_L66[idx2].missed = kcg_true;
  }
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L65[idx4].valid = kcg_true;
    outC->_L65[idx4].nid_c = kcg_lit_int32(0);
    outC->_L65[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L65[idx4].q_link = Q_LINK_Unlinked;
    outC->_L65[idx4].location.nominal = kcg_lit_int32(0);
    outC->_L65[idx4].location.d_min = kcg_lit_int32(0);
    outC->_L65[idx4].location.d_max = kcg_lit_int32(0);
    outC->_L65[idx4].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.valid = kcg_true;
    outC->_L65[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L65[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L65[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L65[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L65[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L65[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L65[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.valid = kcg_true;
    outC->_L65[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L65[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L65[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L65[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L65[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L65[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L65[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L65[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L65[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L65[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L65[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L65[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
    }
    outC->_L65[idx4].missed = kcg_true;
  }
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L64[idx6].valid = kcg_true;
    outC->_L64[idx6].nid_c = kcg_lit_int32(0);
    outC->_L64[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L64[idx6].q_link = Q_LINK_Unlinked;
    outC->_L64[idx6].location.nominal = kcg_lit_int32(0);
    outC->_L64[idx6].location.d_min = kcg_lit_int32(0);
    outC->_L64[idx6].location.d_max = kcg_lit_int32(0);
    outC->_L64[idx6].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.valid = kcg_true;
    outC->_L64[idx6].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L64[idx6].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L64[idx6].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L64[idx6].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L64[idx6].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L64[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L64[idx6].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.valid = kcg_true;
    outC->_L64[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L64[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L64[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L64[idx6].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L64[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L64[idx6].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L64[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L64[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L64[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L64[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L64[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L64[idx6].infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
    }
    outC->_L64[idx6].missed = kcg_true;
  }
  outC->_L62.valid = kcg_true;
  outC->_L62.nid_c = kcg_lit_int32(0);
  outC->_L62.nid_bg = kcg_lit_int32(0);
  outC->_L62.q_link = Q_LINK_Unlinked;
  outC->_L62.location.nominal = kcg_lit_int32(0);
  outC->_L62.location.d_min = kcg_lit_int32(0);
  outC->_L62.location.d_max = kcg_lit_int32(0);
  outC->_L62.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.valid = kcg_true;
  outC->_L62.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L62.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L62.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L62.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L62.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L62.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L62.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L62.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L62.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L62.missed = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L52.nominal = kcg_lit_int32(0);
  outC->_L52.d_min = kcg_lit_int32(0);
  outC->_L52.d_max = kcg_lit_int32(0);
  outC->_L53 = kcg_true;
  outC->_L54.nominal = kcg_lit_int32(0);
  outC->_L54.d_min = kcg_lit_int32(0);
  outC->_L54.d_max = kcg_lit_int32(0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L56.nominal = kcg_lit_int32(0);
  outC->_L56.d_min = kcg_lit_int32(0);
  outC->_L56.d_max = kcg_lit_int32(0);
  outC->_L57 = kcg_lit_int32(0);
  outC->_L51.nominal = kcg_lit_int32(0);
  outC->_L51.d_min = kcg_lit_int32(0);
  outC->_L51.d_max = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = Q_LINK_Unlinked;
  outC->_L11 = Q_LINK_Unlinked;
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
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L10.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L10.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L10.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L10.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L10.missed = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  for (idx10 = 0; idx10 < 41; idx10++) {
    outC->_L5[idx10].valid = kcg_true;
    outC->_L5[idx10].nid_c = kcg_lit_int32(0);
    outC->_L5[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L5[idx10].q_link = Q_LINK_Unlinked;
    outC->_L5[idx10].location.nominal = kcg_lit_int32(0);
    outC->_L5[idx10].location.d_min = kcg_lit_int32(0);
    outC->_L5[idx10].location.d_max = kcg_lit_int32(0);
    outC->_L5[idx10].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.valid = kcg_true;
    outC->_L5[idx10].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L5[idx10].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L5[idx10].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx10].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx10].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx10].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5[idx10].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.valid = kcg_true;
    outC->_L5[idx10].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L5[idx10].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx10].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx10].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx10].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx10].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx10].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L5[idx10].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L5[idx10].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L5[idx10].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx9 = 0; idx9 < 33; idx9++) {
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].valid = kcg_true;
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L5[idx10].infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
    }
    outC->_L5[idx10].missed = kcg_true;
  }
  outC->_L1 = kcg_true;
  outC->weakenedPosition.nominal = kcg_lit_int32(0);
  outC->weakenedPosition.d_min = kcg_lit_int32(0);
  outC->weakenedPosition.d_max = kcg_lit_int32(0);
  outC->movedAhead = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L11_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L9_else_IfBlock1.nominal = kcg_lit_int32(0);
  outC->_L9_else_IfBlock1.d_min = kcg_lit_int32(0);
  outC->_L9_else_IfBlock1.d_max = kcg_lit_int32(0);
  outC->_L8_else_IfBlock1.nominal = kcg_lit_int32(0);
  outC->_L8_else_IfBlock1.d_min = kcg_lit_int32(0);
  outC->_L8_else_IfBlock1.d_max = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.nominal = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.d_min = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.d_max = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.nominal = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.d_min = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.d_max = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.nominal = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.d_min = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.d_max = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.nominal = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.d_min = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.d_max = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_c = kcg_lit_int32(0);
  outC->_L3.nid_bg = kcg_lit_int32(0);
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L3.location.nominal = kcg_lit_int32(0);
  outC->_L3.location.d_min = kcg_lit_int32(0);
  outC->_L3.location.d_max = kcg_lit_int32(0);
  outC->_L3.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.valid = kcg_true;
  outC->_L3.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L3.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L3.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L3.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.missed = kcg_true;
  outC->init = kcg_true;
  for (idx13 = 0; idx13 < 41; idx13++) {
    outC->BGs_out[idx13].valid = kcg_true;
    outC->BGs_out[idx13].nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx13].nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx13].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx13].location.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx13].location.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx13].location.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx13].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx13].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx13].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_out[idx13].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx13].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].valid = kcg_true;
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int32(0);
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int32(0);
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int32(0);
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx13].infoFromPassing.linkedBGs[idx12].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_out[idx13].missed = kcg_true;
  }
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
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->BG.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->BG.infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->BG.infoFromPassing.linkedBGs[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->BG.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BG.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int32(0);
    outC->BG.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BG.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG.infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int32(0);
  }
  outC->BG.missed = kcg_true;
  outC->indexOfBG = kcg_lit_int32(0);
  outC->missed = kcg_true;
  /* _L59=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */
  positionedBGs_ids_notEqual_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_notEqual_1);
  /* _L8=(digital::FallingEdge#1)/ */
  FallingEdge_init_digital(&outC->Context_FallingEdge_1);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG#1)/ */
  posInRangeOfBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_posInRangeOfBG_1);
  /* _L56=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_2);
  /* _L71=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->mem_position,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L59=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */
  positionedBGs_ids_notEqual_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_notEqual_1);
  /* _L8=(digital::FallingEdge#1)/ */
  FallingEdge_reset_digital(&outC->Context_FallingEdge_1);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG#1)/ */
  posInRangeOfBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_posInRangeOfBG_1);
  /* _L56=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_2);
  /* _L71=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->mem_position,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

