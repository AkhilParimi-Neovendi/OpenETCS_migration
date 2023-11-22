/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead/ */
void recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* prevLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* refBG/ */
  positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* sumOfBestDistances/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L204, BG_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L205, &outC->_L204.location);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L187, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L188, &outC->_L187.infoFromPassing);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L198,
    &outC->_L188.BG_Header.BG_centerDetectionInaccuraccuracies);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L190,
    &outC->_L188.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L191, prevLinkedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L194, &outC->_L191.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L193,
    &outC->_L194.BG_Header.bgPosition.odo);
  /* _L196=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L190,
    &outC->_L193,
    &outC->Context_sub_2_odoDistances_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L196,
    &outC->Context_sub_2_odoDistances_2.distance);
  /* _L199=(BasicLocationFunctions_Pkg::add_2_Distances#5)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L198,
    &outC->_L196,
    &outC->Context_add_2_Distances_5);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L199,
    &outC->Context_add_2_Distances_5.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L197, &outC->_L191.location);
  /* _L200=(BasicLocationFunctions_Pkg::add_2_Distances#6)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L199,
    &outC->_L197,
    &outC->Context_add_2_Distances_6);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L200,
    &outC->Context_add_2_Distances_6.distance);
  outC->_L192 = outC->_L194.valid;
  outC->_L189 = outC->_L188.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L164, refBG);
  outC->_L168 = outC->_L164.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L163, prevLinkedBG);
  outC->_L167 = outC->_L163.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L162, BG_in);
  outC->_L166 = outC->_L162.valid;
  outC->_L165 = outC->_L166 & outC->_L167 & outC->_L168;
  outC->_L195 = outC->_L165 & outC->_L189 & outC->_L192;
  /* _L203= */
  if (outC->_L195) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L203, &outC->_L200);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L203, &outC->_L205);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L172, BG_in);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L184,
    trainProperties);
  /* _L183=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies#1)/ */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L172,
    &outC->_L184,
    &outC->Context_calculateLocalBGInaccuracies_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L183,
    &outC->Context_calculateLocalBGInaccuracies_1.localInaccuracies);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L178, refBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L179, &outC->_L178.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L177, sumOfBestDistances);
  /* _L180=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L179,
    &outC->_L177,
    &outC->Context_add_2_Distances_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L180,
    &outC->Context_add_2_Distances_3.distance);
  /* _L181=(BasicLocationFunctions_Pkg::add_2_Distances#4)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L183,
    &outC->_L180,
    &outC->Context_add_2_Distances_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L181,
    &outC->Context_add_2_Distances_4.distance);
  outC->_L175 = Q_LINK_Linked;
  outC->_L176 = outC->_L172.q_link;
  outC->_L174 = outC->_L176 == outC->_L175;
  outC->_L182 = outC->_L165 & outC->_L174;
  /* _L185= */
  if (outC->_L182) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L185, &outC->_L181);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L185, &outC->_L203);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L171, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L186, &outC->_L171);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L186.location, &outC->_L185);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &outC->_L186);
}

#ifndef KCG_USER_DEFINED_INIT
void recalculate_BG_location_ahead_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
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

  outC->_L205.nominal = kcg_lit_int32(0);
  outC->_L205.d_min = kcg_lit_int32(0);
  outC->_L205.d_max = kcg_lit_int32(0);
  outC->_L204.valid = kcg_true;
  outC->_L204.nid_c = kcg_lit_int32(0);
  outC->_L204.nid_bg = kcg_lit_int32(0);
  outC->_L204.q_link = Q_LINK_Unlinked;
  outC->_L204.location.nominal = kcg_lit_int32(0);
  outC->_L204.location.d_min = kcg_lit_int32(0);
  outC->_L204.location.d_max = kcg_lit_int32(0);
  outC->_L204.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.valid = kcg_true;
  outC->_L204.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L204.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L204.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L204.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L204.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L204.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L204.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L204.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.valid = kcg_true;
  outC->_L204.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L204.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L204.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L204.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L204.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L204.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L204.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L204.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L204.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L204.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L204.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L204.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L204.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L204.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L204.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L204.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L204.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L204.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L204.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L204.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L204.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L204.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L204.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L204.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L204.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L204.missed = kcg_true;
  outC->_L203.nominal = kcg_lit_int32(0);
  outC->_L203.d_min = kcg_lit_int32(0);
  outC->_L203.d_max = kcg_lit_int32(0);
  outC->_L200.nominal = kcg_lit_int32(0);
  outC->_L200.d_min = kcg_lit_int32(0);
  outC->_L200.d_max = kcg_lit_int32(0);
  outC->_L199.nominal = kcg_lit_int32(0);
  outC->_L199.d_min = kcg_lit_int32(0);
  outC->_L199.d_max = kcg_lit_int32(0);
  outC->_L198.nominal = kcg_lit_int32(0);
  outC->_L198.d_min = kcg_lit_int32(0);
  outC->_L198.d_max = kcg_lit_int32(0);
  outC->_L197.nominal = kcg_lit_int32(0);
  outC->_L197.d_min = kcg_lit_int32(0);
  outC->_L197.d_max = kcg_lit_int32(0);
  outC->_L196.nominal = kcg_lit_int32(0);
  outC->_L196.d_min = kcg_lit_int32(0);
  outC->_L196.d_max = kcg_lit_int32(0);
  outC->_L195 = kcg_true;
  outC->_L192 = kcg_true;
  outC->_L193.o_nominal = kcg_lit_int32(0);
  outC->_L193.o_min = kcg_lit_int32(0);
  outC->_L193.o_max = kcg_lit_int32(0);
  outC->_L194.valid = kcg_true;
  outC->_L194.BG_Header.valid = kcg_true;
  outC->_L194.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L194.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L194.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L194.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L194.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L194.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L194.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L194.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L194.BG_Header.bgPosition.valid = kcg_true;
  outC->_L194.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L194.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L194.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L194.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L194.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L194.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L194.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L194.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L194.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L194.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L194.linkedBGs[idx1].valid = kcg_true;
    outC->_L194.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L194.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L194.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L194.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L194.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L194.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L194.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L194.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L194.linkedBGs[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L194.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L191.valid = kcg_true;
  outC->_L191.nid_c = kcg_lit_int32(0);
  outC->_L191.nid_bg = kcg_lit_int32(0);
  outC->_L191.q_link = Q_LINK_Unlinked;
  outC->_L191.location.nominal = kcg_lit_int32(0);
  outC->_L191.location.d_min = kcg_lit_int32(0);
  outC->_L191.location.d_max = kcg_lit_int32(0);
  outC->_L191.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.valid = kcg_true;
  outC->_L191.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L191.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L191.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L191.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L191.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L191.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L191.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L191.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.valid = kcg_true;
  outC->_L191.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L191.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L191.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L191.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L191.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L191.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L191.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L191.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L191.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L191.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L191.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L191.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L191.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L191.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L191.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L191.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L191.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L191.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L191.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L191.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L191.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L191.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L191.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L191.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L191.missed = kcg_true;
  outC->_L190.o_nominal = kcg_lit_int32(0);
  outC->_L190.o_min = kcg_lit_int32(0);
  outC->_L190.o_max = kcg_lit_int32(0);
  outC->_L189 = kcg_true;
  outC->_L188.valid = kcg_true;
  outC->_L188.BG_Header.valid = kcg_true;
  outC->_L188.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L188.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L188.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L188.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L188.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L188.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L188.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L188.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L188.BG_Header.bgPosition.valid = kcg_true;
  outC->_L188.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L188.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L188.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L188.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L188.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L188.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L188.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L188.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L188.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L188.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L188.linkedBGs[idx3].valid = kcg_true;
    outC->_L188.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L188.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L188.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L188.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L188.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L188.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L188.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L188.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L188.linkedBGs[idx3].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L188.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L187.valid = kcg_true;
  outC->_L187.nid_c = kcg_lit_int32(0);
  outC->_L187.nid_bg = kcg_lit_int32(0);
  outC->_L187.q_link = Q_LINK_Unlinked;
  outC->_L187.location.nominal = kcg_lit_int32(0);
  outC->_L187.location.d_min = kcg_lit_int32(0);
  outC->_L187.location.d_max = kcg_lit_int32(0);
  outC->_L187.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.valid = kcg_true;
  outC->_L187.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L187.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L187.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L187.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L187.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L187.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L187.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L187.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.valid = kcg_true;
  outC->_L187.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L187.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L187.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L187.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L187.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L187.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L187.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L187.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L187.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L187.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L187.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L187.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L187.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L187.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L187.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L187.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L187.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L187.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L187.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L187.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L187.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L187.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L187.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L187.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L187.missed = kcg_true;
  outC->_L186.valid = kcg_true;
  outC->_L186.nid_c = kcg_lit_int32(0);
  outC->_L186.nid_bg = kcg_lit_int32(0);
  outC->_L186.q_link = Q_LINK_Unlinked;
  outC->_L186.location.nominal = kcg_lit_int32(0);
  outC->_L186.location.d_min = kcg_lit_int32(0);
  outC->_L186.location.d_max = kcg_lit_int32(0);
  outC->_L186.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.valid = kcg_true;
  outC->_L186.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L186.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L186.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L186.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L186.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L186.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L186.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L186.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.valid = kcg_true;
  outC->_L186.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L186.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L186.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L186.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L186.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L186.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L186.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L186.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L186.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L186.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L186.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L186.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L186.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L186.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L186.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->_L186.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L186.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L186.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->_L186.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L186.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->_L186.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L186.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L186.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L186.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L186.missed = kcg_true;
  outC->_L185.nominal = kcg_lit_int32(0);
  outC->_L185.d_min = kcg_lit_int32(0);
  outC->_L185.d_max = kcg_lit_int32(0);
  outC->_L184.nid_engine = kcg_lit_int32(0);
  outC->_L184.nid_operational = kcg_lit_int32(0);
  outC->_L184.l_train = kcg_lit_int32(0);
  outC->_L184.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L184.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L184.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L184.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L184.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L184.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L184.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L184.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L184.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L184.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L184.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L184.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L183.nominal = kcg_lit_int32(0);
  outC->_L183.d_min = kcg_lit_int32(0);
  outC->_L183.d_max = kcg_lit_int32(0);
  outC->_L182 = kcg_true;
  outC->_L181.nominal = kcg_lit_int32(0);
  outC->_L181.d_min = kcg_lit_int32(0);
  outC->_L181.d_max = kcg_lit_int32(0);
  outC->_L180.nominal = kcg_lit_int32(0);
  outC->_L180.d_min = kcg_lit_int32(0);
  outC->_L180.d_max = kcg_lit_int32(0);
  outC->_L179.nominal = kcg_lit_int32(0);
  outC->_L179.d_min = kcg_lit_int32(0);
  outC->_L179.d_max = kcg_lit_int32(0);
  outC->_L178.valid = kcg_true;
  outC->_L178.nid_c = kcg_lit_int32(0);
  outC->_L178.nid_bg = kcg_lit_int32(0);
  outC->_L178.q_link = Q_LINK_Unlinked;
  outC->_L178.location.nominal = kcg_lit_int32(0);
  outC->_L178.location.d_min = kcg_lit_int32(0);
  outC->_L178.location.d_max = kcg_lit_int32(0);
  outC->_L178.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.valid = kcg_true;
  outC->_L178.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L178.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L178.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L178.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L178.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L178.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L178.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L178.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.valid = kcg_true;
  outC->_L178.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L178.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L178.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L178.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L178.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L178.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L178.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L178.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L178.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L178.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L178.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L178.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L178.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L178.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L178.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L178.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L178.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L178.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L178.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
    outC->_L178.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L178.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L178.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L178.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L178.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L178.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L178.missed = kcg_true;
  outC->_L177.nominal = kcg_lit_int32(0);
  outC->_L177.d_min = kcg_lit_int32(0);
  outC->_L177.d_max = kcg_lit_int32(0);
  outC->_L174 = kcg_true;
  outC->_L175 = Q_LINK_Unlinked;
  outC->_L176 = Q_LINK_Unlinked;
  outC->_L172.valid = kcg_true;
  outC->_L172.nid_c = kcg_lit_int32(0);
  outC->_L172.nid_bg = kcg_lit_int32(0);
  outC->_L172.q_link = Q_LINK_Unlinked;
  outC->_L172.location.nominal = kcg_lit_int32(0);
  outC->_L172.location.d_min = kcg_lit_int32(0);
  outC->_L172.location.d_max = kcg_lit_int32(0);
  outC->_L172.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.valid = kcg_true;
  outC->_L172.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L172.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L172.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L172.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L172.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L172.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L172.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L172.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.valid = kcg_true;
  outC->_L172.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L172.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L172.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L172.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L172.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L172.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L172.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L172.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L172.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L172.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L172.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L172.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L172.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L172.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L172.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L172.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L172.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L172.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L172.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L172.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L172.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L172.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L172.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L172.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L172.missed = kcg_true;
  outC->_L171.valid = kcg_true;
  outC->_L171.nid_c = kcg_lit_int32(0);
  outC->_L171.nid_bg = kcg_lit_int32(0);
  outC->_L171.q_link = Q_LINK_Unlinked;
  outC->_L171.location.nominal = kcg_lit_int32(0);
  outC->_L171.location.d_min = kcg_lit_int32(0);
  outC->_L171.location.d_max = kcg_lit_int32(0);
  outC->_L171.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.valid = kcg_true;
  outC->_L171.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L171.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L171.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L171.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L171.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L171.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L171.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L171.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.valid = kcg_true;
  outC->_L171.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L171.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L171.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L171.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L171.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L171.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L171.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L171.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L171.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L171.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L171.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L171.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L171.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L171.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L171.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L171.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L171.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L171.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L171.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L171.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L171.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L171.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L171.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L171.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L171.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L171.missed = kcg_true;
  outC->_L168 = kcg_true;
  outC->_L167 = kcg_true;
  outC->_L166 = kcg_true;
  outC->_L165 = kcg_true;
  outC->_L164.valid = kcg_true;
  outC->_L164.nid_c = kcg_lit_int32(0);
  outC->_L164.nid_bg = kcg_lit_int32(0);
  outC->_L164.q_link = Q_LINK_Unlinked;
  outC->_L164.location.nominal = kcg_lit_int32(0);
  outC->_L164.location.d_min = kcg_lit_int32(0);
  outC->_L164.location.d_max = kcg_lit_int32(0);
  outC->_L164.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.valid = kcg_true;
  outC->_L164.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L164.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L164.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L164.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L164.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L164.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L164.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L164.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.valid = kcg_true;
  outC->_L164.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L164.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L164.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L164.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L164.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L164.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L164.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L164.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L164.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L164.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L164.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L164.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L164.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L164.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L164.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L164.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->_L164.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L164.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L164.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->_L164.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L164.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->_L164.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L164.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L164.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L164.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->_L164.missed = kcg_true;
  outC->_L163.valid = kcg_true;
  outC->_L163.nid_c = kcg_lit_int32(0);
  outC->_L163.nid_bg = kcg_lit_int32(0);
  outC->_L163.q_link = Q_LINK_Unlinked;
  outC->_L163.location.nominal = kcg_lit_int32(0);
  outC->_L163.location.d_min = kcg_lit_int32(0);
  outC->_L163.location.d_max = kcg_lit_int32(0);
  outC->_L163.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.valid = kcg_true;
  outC->_L163.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L163.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L163.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L163.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L163.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L163.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L163.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L163.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.valid = kcg_true;
  outC->_L163.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L163.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L163.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L163.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L163.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L163.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L163.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L163.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L163.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L163.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L163.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L163.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L163.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L163.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L163.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
    outC->_L163.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L163.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L163.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
    outC->_L163.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L163.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
    outC->_L163.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L163.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L163.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L163.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
  }
  outC->_L163.missed = kcg_true;
  outC->_L162.valid = kcg_true;
  outC->_L162.nid_c = kcg_lit_int32(0);
  outC->_L162.nid_bg = kcg_lit_int32(0);
  outC->_L162.q_link = Q_LINK_Unlinked;
  outC->_L162.location.nominal = kcg_lit_int32(0);
  outC->_L162.location.d_min = kcg_lit_int32(0);
  outC->_L162.location.d_max = kcg_lit_int32(0);
  outC->_L162.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.valid = kcg_true;
  outC->_L162.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L162.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L162.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L162.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L162.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L162.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L162.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L162.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.valid = kcg_true;
  outC->_L162.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L162.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L162.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L162.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L162.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L162.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L162.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L162.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L162.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L162.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L162.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L162.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L162.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L162.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L162.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int32(0);
    outC->_L162.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L162.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L162.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int32(0);
    outC->_L162.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L162.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int32(0);
    outC->_L162.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L162.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L162.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L162.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int32(0);
  }
  outC->_L162.missed = kcg_true;
  outC->BG_out.valid = kcg_true;
  outC->BG_out.nid_c = kcg_lit_int32(0);
  outC->BG_out.nid_bg = kcg_lit_int32(0);
  outC->BG_out.q_link = Q_LINK_Unlinked;
  outC->BG_out.location.nominal = kcg_lit_int32(0);
  outC->BG_out.location.d_min = kcg_lit_int32(0);
  outC->BG_out.location.d_max = kcg_lit_int32(0);
  outC->BG_out.seqNoOnTrack = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.valid = kcg_true;
  outC->BG_out.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->BG_out.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->BG_out.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->BG_out.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->BG_out.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->BG_out.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->BG_out.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->BG_out.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->BG_out.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->BG_out.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->BG_out.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->BG_out.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->BG_out.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->BG_out.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->BG_out.infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int32(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->BG_out.infoFromPassing.linkedBGs[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->BG_out.infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int32(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BG_out.infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int32(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int32(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BG_out.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG_out.infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int32(0);
  }
  outC->BG_out.missed = kcg_true;
  /* _L181=(BasicLocationFunctions_Pkg::add_2_Distances#4)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_4);
  /* _L180=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_3);
  /* _L183=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies#1)/ */
  calculateLocalBGInaccuracies_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_calculateLocalBGInaccuracies_1);
  /* _L200=(BasicLocationFunctions_Pkg::add_2_Distances#6)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_6);
  /* _L199=(BasicLocationFunctions_Pkg::add_2_Distances#5)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_5);
  /* _L196=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */
  sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void recalculate_BG_location_ahead_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* _L181=(BasicLocationFunctions_Pkg::add_2_Distances#4)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_4);
  /* _L180=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_3);
  /* _L183=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies#1)/ */
  calculateLocalBGInaccuracies_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_calculateLocalBGInaccuracies_1);
  /* _L200=(BasicLocationFunctions_Pkg::add_2_Distances#6)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_6);
  /* _L199=(BasicLocationFunctions_Pkg::add_2_Distances#5)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_5);
  /* _L196=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

