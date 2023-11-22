/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg.h"

/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed/ */
void twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* missed/ */
  kcg_bool missed,
  /* missedLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* passedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* reset/ */
  kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* storedMissedBG/ */
  positionedBG_T_TrainPosition_Types_Pck last_storedMissedBG;

  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->InitVal_Memory_1_struct,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12, passedBG);
  outC->_L15 = outC->_L12.infoFromLinking.valid;
  outC->_L16 = Q_LINK_Linked;
  outC->_L14 = outC->_L12.q_link;
  outC->_L17 = outC->_L14 == outC->_L16;
  outC->_L13 = outC->_L12.valid;
  outC->_L21 = outC->_L13 & outC->_L17 & outC->_L15;
  outC->linkedAnnouncedBG_passed = outC->_L21;
  outC->_L27 = outC->linkedAnnouncedBG_passed;
  outC->_L6 = reset;
  outC->_L29 = outC->_L6 | outC->_L27;
  outC->Reset_Memory_1_struct = outC->_L29;
  outC->_L1_Memory_1_struct = outC->Reset_Memory_1_struct;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L2_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  outC->_L24 = missed;
  outC->MemCond_Memory_1_struct = outC->_L24;
  outC->_L3_Memory_1_struct = outC->MemCond_Memory_1_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5_Memory_1_struct,
      &outC->_L9_Memory_1_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5_Memory_1_struct,
      &outC->_L8_Memory_1_struct);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, missedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->M_Input_Memory_1_struct,
    &outC->_L2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L6_Memory_1_struct,
    &outC->M_Input_Memory_1_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_1_struct) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7_Memory_1_struct,
      &outC->_L6_Memory_1_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7_Memory_1_struct,
      &outC->_L5_Memory_1_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_1_struct) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8_Memory_1_struct,
      &outC->_L2_Memory_1_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8_Memory_1_struct,
      &outC->_L7_Memory_1_struct);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->Out_Memory_1_struct,
    &outC->_L8_Memory_1_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &last_storedMissedBG,
    &outC->storedMissedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L10, missedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9,
    &last_storedMissedBG);
  /* _L11=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */
  positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L10,
    &outC->_L9,
    &outC->Context_positionedBGs_ids_notEqual_1);
  outC->_L11 = outC->Context_positionedBGs_ids_notEqual_1.idsNotEqual;
  outC->_L25 = outC->_L24 & outC->_L11;
  outC->secondConsecutiveBG_missed = outC->_L25;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L4,
    &outC->Out_Memory_1_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedMissedBG,
    &outC->_L4);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void twoConsecutiveLinkedBGs_m_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
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

  outC->_L29 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = Q_LINK_Unlinked;
  outC->_L15 = kcg_true;
  outC->_L14 = Q_LINK_Unlinked;
  outC->_L13 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.nid_c = kcg_lit_int32(0);
  outC->_L12.nid_bg = kcg_lit_int32(0);
  outC->_L12.q_link = Q_LINK_Unlinked;
  outC->_L12.location.nominal = kcg_lit_int32(0);
  outC->_L12.location.d_min = kcg_lit_int32(0);
  outC->_L12.location.d_max = kcg_lit_int32(0);
  outC->_L12.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.valid = kcg_true;
  outC->_L12.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L12.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L12.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.valid = kcg_true;
  outC->_L12.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L12.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L12.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L12.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L12.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L12.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L12.missed = kcg_true;
  outC->_L11 = kcg_true;
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
  outC->_L9.valid = kcg_true;
  outC->_L9.nid_c = kcg_lit_int32(0);
  outC->_L9.nid_bg = kcg_lit_int32(0);
  outC->_L9.q_link = Q_LINK_Unlinked;
  outC->_L9.location.nominal = kcg_lit_int32(0);
  outC->_L9.location.d_min = kcg_lit_int32(0);
  outC->_L9.location.d_max = kcg_lit_int32(0);
  outC->_L9.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.valid = kcg_true;
  outC->_L9.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L9.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L9.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L9.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L9.missed = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.nid_c = kcg_lit_int32(0);
  outC->_L4.nid_bg = kcg_lit_int32(0);
  outC->_L4.q_link = Q_LINK_Unlinked;
  outC->_L4.location.nominal = kcg_lit_int32(0);
  outC->_L4.location.d_min = kcg_lit_int32(0);
  outC->_L4.location.d_max = kcg_lit_int32(0);
  outC->_L4.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.valid = kcg_true;
  outC->_L4.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L4.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L4.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L4.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L4.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L4.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L4.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L4.missed = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_c = kcg_lit_int32(0);
  outC->_L2.nid_bg = kcg_lit_int32(0);
  outC->_L2.q_link = Q_LINK_Unlinked;
  outC->_L2.location.nominal = kcg_lit_int32(0);
  outC->_L2.location.d_min = kcg_lit_int32(0);
  outC->_L2.location.d_max = kcg_lit_int32(0);
  outC->_L2.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.valid = kcg_true;
  outC->_L2.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L2.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L2.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.missed = kcg_true;
  outC->linkedAnnouncedBG_passed = kcg_true;
  outC->_L7_Memory_1_struct.valid = kcg_true;
  outC->_L7_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L7_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L7_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].d_link =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].nid_c =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].nid_bg =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx5].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L7_Memory_1_struct.missed = kcg_true;
  outC->_L6_Memory_1_struct.valid = kcg_true;
  outC->_L6_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L6_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L6_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].d_link =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].nid_c =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].nid_bg =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx6].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L6_Memory_1_struct.missed = kcg_true;
  outC->_L5_Memory_1_struct.valid = kcg_true;
  outC->_L5_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L5_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L5_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L5_Memory_1_struct.missed = kcg_true;
  outC->_L3_Memory_1_struct = kcg_true;
  outC->_L2_Memory_1_struct.valid = kcg_true;
  outC->_L2_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L2_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L2_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].d_link =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].nid_c =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].nid_bg =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx8].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L2_Memory_1_struct.missed = kcg_true;
  outC->_L1_Memory_1_struct = kcg_true;
  outC->_L9_Memory_1_struct.valid = kcg_true;
  outC->_L9_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L9_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L9_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].d_link =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].nid_c =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].nid_bg =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx9].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L9_Memory_1_struct.missed = kcg_true;
  outC->M_Input_Memory_1_struct.valid = kcg_true;
  outC->M_Input_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->M_Input_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].nid_LRBG =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].q_dir =
      Q_DIR_Reverse;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].q_scale =
      Q_SCALE_10_cm_scale;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].d_link =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].nid_c =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].nid_bg =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx10].q_locacc =
      kcg_lit_int32(0);
  }
  outC->M_Input_Memory_1_struct.missed = kcg_true;
  outC->Reset_Memory_1_struct = kcg_true;
  outC->MemCond_Memory_1_struct = kcg_true;
  outC->InitVal_Memory_1_struct.valid = kcg_true;
  outC->InitVal_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->InitVal_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].nid_LRBG =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].q_dir =
      Q_DIR_Reverse;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].q_scale =
      Q_SCALE_10_cm_scale;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].d_link =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].nid_c =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].nid_bg =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx11].q_locacc =
      kcg_lit_int32(0);
  }
  outC->InitVal_Memory_1_struct.missed = kcg_true;
  outC->Out_Memory_1_struct.valid = kcg_true;
  outC->Out_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->Out_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->Out_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].nid_LRBG =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].q_dir =
      Q_DIR_Reverse;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].d_link =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].nid_c =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].nid_bg =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx12].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Out_Memory_1_struct.missed = kcg_true;
  outC->_L8_Memory_1_struct.valid = kcg_true;
  outC->_L8_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L8_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L8_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].q_dir =
      Q_DIR_Reverse;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].d_link =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].nid_c =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].nid_bg =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx13].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L8_Memory_1_struct.missed = kcg_true;
  outC->init = kcg_true;
  outC->secondConsecutiveBG_missed = kcg_true;
  /* _L11=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */
  positionedBGs_ids_notEqual_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_notEqual_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedMissedBG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void twoConsecutiveLinkedBGs_m_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L11=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */
  positionedBGs_ids_notEqual_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_notEqual_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedMissedBG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed/
  @1: (linear::Memory#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

