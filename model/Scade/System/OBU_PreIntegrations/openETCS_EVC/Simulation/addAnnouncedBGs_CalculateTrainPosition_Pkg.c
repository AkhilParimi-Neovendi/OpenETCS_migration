/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::addAnnouncedBGs/ */
void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC)
{
  kcg_size idx;
  kcg_bool noname;
  kcg_bool _1_noname;

  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L1, passedBG);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L4, &outC->_L1.linkedBGs);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L5, &outC->_L4[0]);
  outC->_L6 = outC->_L5.valid;
  outC->_L3 = outC->_L1.valid;
  outC->_L11 = outC->_L3 & outC->_L6;
  outC->_L7 = outC->_L5.nid_LRBG;
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L11,
    outC->_L7,
    &outC->Context_NIDLRBG_2_nidC_nidBG_1);
  outC->_L9 = outC->Context_NIDLRBG_2_nidC_nidBG_1.nidC;
  outC->_L10 = outC->Context_NIDLRBG_2_nidC_nidBG_1.nidBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L17,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L16, &outC->_L17);
  if (kcg_true) {
    outC->_L16.valid = outC->_L11;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L18, &outC->_L16);
  if (kcg_true) {
    outC->_L18.nid_c = outC->_L9;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L19, &outC->_L18);
  if (kcg_true) {
    outC->_L19.nid_bg = outC->_L10;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L20, BGs_in);
  /* _L12=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L19,
    &outC->_L20,
    outC->_L11,
    &outC->Context_indexOfBG_by_id_1);
  outC->_L12 = outC->Context_indexOfBG_by_id_1.indexOfBG;
  outC->_L13 = outC->Context_indexOfBG_by_id_1.BG_found;
  outC->_L14 = outC->Context_indexOfBG_by_id_1.indexValid;
  _1_noname = outC->_L13;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L41, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L35,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* _L26/ */
  for (idx = 0; idx < 8; idx++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L26[idx], &outC->_L35);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L22,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if ((kcg_lit_int32(0) <= outC->_L12) & (outC->_L12 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L21,
      &outC->_L20[outC->_L12]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L21, &outC->_L22);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lrbg, &outC->_L21);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L24, &outC->lrbg);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L25,
    trainProperties);
  /* _L23=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L24,
    &outC->_L4,
    &outC->_L25,
    &outC->Context_positionLinkedBGs_1);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L23,
    &outC->Context_positionLinkedBGs_1.linkedPositionedBGs);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L29[0],
    &outC->_L23);
  kcg_copy__131_array(&outC->_L29[33], &outC->_L26);
  /* _L33=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L41,
    &outC->_L29,
    &outC->Context_mergeBGs_onTrack_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L33,
    &outC->Context_mergeBGs_onTrack_1.BGs_out);
  outC->_L34 = outC->Context_mergeBGs_onTrack_1.overrun;
  /* _L36=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L33,
    &outC->Context_trimSeqNoOnTrack_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L36,
    &outC->Context_trimSeqNoOnTrack_1.BGs_out);
  outC->overrun = outC->_L34;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L36);
  noname = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void addAnnouncedBGs_init_CalculateTrainPosition_Pkg(
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC)
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
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;

  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L41[idx1].valid = kcg_true;
    outC->_L41[idx1].nid_c = kcg_lit_int32(0);
    outC->_L41[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L41[idx1].q_link = Q_LINK_Unlinked;
    outC->_L41[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L41[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L41[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L41[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.valid = kcg_true;
    outC->_L41[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L41[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L41[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L41[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L41[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L41[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L41[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.valid = kcg_true;
    outC->_L41[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L41[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L41[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L41[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L41[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L41[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L41[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L41[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L41[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L41[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L41[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L41[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L41[idx1].missed = kcg_true;
  }
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L26[idx3].valid = kcg_true;
    outC->_L26[idx3].nid_c = kcg_lit_int32(0);
    outC->_L26[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L26[idx3].q_link = Q_LINK_Unlinked;
    outC->_L26[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L26[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L26[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L26[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.valid = kcg_true;
    outC->_L26[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L26[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L26[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L26[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.valid = kcg_true;
    outC->_L26[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L26[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L26[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L26[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L26[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L26[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L26[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L26[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L26[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L26[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L26[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L26[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
    }
    outC->_L26[idx3].missed = kcg_true;
  }
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L29[idx5].valid = kcg_true;
    outC->_L29[idx5].nid_c = kcg_lit_int32(0);
    outC->_L29[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L29[idx5].q_link = Q_LINK_Unlinked;
    outC->_L29[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L29[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L29[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L29[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.valid = kcg_true;
    outC->_L29[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L29[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L29[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L29[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.valid = kcg_true;
    outC->_L29[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L29[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L29[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L29[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L29[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L29[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L29[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L29[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L29[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L29[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L29[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L29[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
    }
    outC->_L29[idx5].missed = kcg_true;
  }
  outC->_L34 = kcg_true;
  for (idx7 = 0; idx7 < 41; idx7++) {
    outC->_L33[idx7].valid = kcg_true;
    outC->_L33[idx7].nid_c = kcg_lit_int32(0);
    outC->_L33[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L33[idx7].q_link = Q_LINK_Unlinked;
    outC->_L33[idx7].location.nominal = kcg_lit_int32(0);
    outC->_L33[idx7].location.d_min = kcg_lit_int32(0);
    outC->_L33[idx7].location.d_max = kcg_lit_int32(0);
    outC->_L33[idx7].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.valid = kcg_true;
    outC->_L33[idx7].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L33[idx7].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L33[idx7].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L33[idx7].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L33[idx7].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L33[idx7].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L33[idx7].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.valid = kcg_true;
    outC->_L33[idx7].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L33[idx7].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L33[idx7].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L33[idx7].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L33[idx7].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L33[idx7].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L33[idx7].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L33[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L33[idx7].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L33[idx7].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L33[idx7].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx6 = 0; idx6 < 33; idx6++) {
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].valid = kcg_true;
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L33[idx7].infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
    }
    outC->_L33[idx7].missed = kcg_true;
  }
  outC->_L35.valid = kcg_true;
  outC->_L35.nid_c = kcg_lit_int32(0);
  outC->_L35.nid_bg = kcg_lit_int32(0);
  outC->_L35.q_link = Q_LINK_Unlinked;
  outC->_L35.location.nominal = kcg_lit_int32(0);
  outC->_L35.location.d_min = kcg_lit_int32(0);
  outC->_L35.location.d_max = kcg_lit_int32(0);
  outC->_L35.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.valid = kcg_true;
  outC->_L35.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L35.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L35.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L35.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L35.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L35.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L35.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.valid = kcg_true;
  outC->_L35.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L35.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L35.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L35.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L35.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L35.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L35.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L35.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L35.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L35.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L35.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L35.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L35.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L35.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L35.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L35.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L35.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L35.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L35.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L35.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L35.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L35.missed = kcg_true;
  for (idx10 = 0; idx10 < 41; idx10++) {
    outC->_L36[idx10].valid = kcg_true;
    outC->_L36[idx10].nid_c = kcg_lit_int32(0);
    outC->_L36[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L36[idx10].q_link = Q_LINK_Unlinked;
    outC->_L36[idx10].location.nominal = kcg_lit_int32(0);
    outC->_L36[idx10].location.d_min = kcg_lit_int32(0);
    outC->_L36[idx10].location.d_max = kcg_lit_int32(0);
    outC->_L36[idx10].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.valid = kcg_true;
    outC->_L36[idx10].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L36[idx10].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L36[idx10].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L36[idx10].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36[idx10].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36[idx10].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36[idx10].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.valid = kcg_true;
    outC->_L36[idx10].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L36[idx10].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L36[idx10].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L36[idx10].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L36[idx10].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L36[idx10].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L36[idx10].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L36[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L36[idx10].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L36[idx10].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L36[idx10].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx9 = 0; idx9 < 33; idx9++) {
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].valid = kcg_true;
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L36[idx10].infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
    }
    outC->_L36[idx10].missed = kcg_true;
  }
  outC->_L25.nid_engine = kcg_lit_int32(0);
  outC->_L25.nid_operational = kcg_lit_int32(0);
  outC->_L25.l_train = kcg_lit_int32(0);
  outC->_L25.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L25.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L25.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L25.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L25.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L25.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L25.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L25.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L25.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L25.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L25.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L25.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.nid_c = kcg_lit_int32(0);
  outC->_L24.nid_bg = kcg_lit_int32(0);
  outC->_L24.q_link = Q_LINK_Unlinked;
  outC->_L24.location.nominal = kcg_lit_int32(0);
  outC->_L24.location.d_min = kcg_lit_int32(0);
  outC->_L24.location.d_max = kcg_lit_int32(0);
  outC->_L24.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.valid = kcg_true;
  outC->_L24.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L24.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L24.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L24.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L24.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L24.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L24.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L24.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L24.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L24.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L24.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L24.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L24.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L24.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L24.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L24.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int32(0);
  }
  outC->_L24.missed = kcg_true;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L23[idx13].valid = kcg_true;
    outC->_L23[idx13].nid_c = kcg_lit_int32(0);
    outC->_L23[idx13].nid_bg = kcg_lit_int32(0);
    outC->_L23[idx13].q_link = Q_LINK_Unlinked;
    outC->_L23[idx13].location.nominal = kcg_lit_int32(0);
    outC->_L23[idx13].location.d_min = kcg_lit_int32(0);
    outC->_L23[idx13].location.d_max = kcg_lit_int32(0);
    outC->_L23[idx13].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.valid = kcg_true;
    outC->_L23[idx13].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L23[idx13].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L23[idx13].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L23[idx13].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L23[idx13].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L23[idx13].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L23[idx13].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.valid = kcg_true;
    outC->_L23[idx13].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L23[idx13].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L23[idx13].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L23[idx13].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L23[idx13].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L23[idx13].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L23[idx13].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L23[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L23[idx13].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L23[idx13].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L23[idx13].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].valid = kcg_true;
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int32(0);
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int32(0);
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int32(0);
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int32(0);
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L23[idx13].infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int32(0);
    }
    outC->_L23[idx13].missed = kcg_true;
  }
  outC->_L22.valid = kcg_true;
  outC->_L22.nid_c = kcg_lit_int32(0);
  outC->_L22.nid_bg = kcg_lit_int32(0);
  outC->_L22.q_link = Q_LINK_Unlinked;
  outC->_L22.location.nominal = kcg_lit_int32(0);
  outC->_L22.location.d_min = kcg_lit_int32(0);
  outC->_L22.location.d_max = kcg_lit_int32(0);
  outC->_L22.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.valid = kcg_true;
  outC->_L22.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L22.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L22.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L22.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L22.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L22.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.valid = kcg_true;
  outC->_L22.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L22.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L22.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L22.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L22.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L22.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L22.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L22.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L22.infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->_L22.infoFromPassing.linkedBGs[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L22.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L22.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L22.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L22.infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int32(0);
  }
  outC->_L22.missed = kcg_true;
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
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L21.infoFromPassing.linkedBGs[idx15].valid = kcg_true;
    outC->_L21.infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
    outC->_L21.infoFromPassing.linkedBGs[idx15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L21.infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int32(0);
  }
  outC->_L21.missed = kcg_true;
  for (idx17 = 0; idx17 < 41; idx17++) {
    outC->_L20[idx17].valid = kcg_true;
    outC->_L20[idx17].nid_c = kcg_lit_int32(0);
    outC->_L20[idx17].nid_bg = kcg_lit_int32(0);
    outC->_L20[idx17].q_link = Q_LINK_Unlinked;
    outC->_L20[idx17].location.nominal = kcg_lit_int32(0);
    outC->_L20[idx17].location.d_min = kcg_lit_int32(0);
    outC->_L20[idx17].location.d_max = kcg_lit_int32(0);
    outC->_L20[idx17].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.valid = kcg_true;
    outC->_L20[idx17].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L20[idx17].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L20[idx17].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx17].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L20[idx17].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L20[idx17].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L20[idx17].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.valid = kcg_true;
    outC->_L20[idx17].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L20[idx17].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L20[idx17].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20[idx17].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L20[idx17].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L20[idx17].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L20[idx17].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L20[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L20[idx17].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L20[idx17].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L20[idx17].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx16 = 0; idx16 < 33; idx16++) {
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].valid = kcg_true;
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].nid_LRBG = kcg_lit_int32(0);
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int32(0);
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int32(0);
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int32(0);
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L20[idx17].infoFromPassing.linkedBGs[idx16].q_locacc = kcg_lit_int32(0);
    }
    outC->_L20[idx17].missed = kcg_true;
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.nid_c = kcg_lit_int32(0);
  outC->_L19.nid_bg = kcg_lit_int32(0);
  outC->_L19.q_link = Q_LINK_Unlinked;
  outC->_L19.location.nominal = kcg_lit_int32(0);
  outC->_L19.location.d_min = kcg_lit_int32(0);
  outC->_L19.location.d_max = kcg_lit_int32(0);
  outC->_L19.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.valid = kcg_true;
  outC->_L19.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L19.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L19.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L19.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L19.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L19.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L19.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L19.infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
    outC->_L19.infoFromPassing.linkedBGs[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.missed = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.nid_c = kcg_lit_int32(0);
  outC->_L18.nid_bg = kcg_lit_int32(0);
  outC->_L18.q_link = Q_LINK_Unlinked;
  outC->_L18.location.nominal = kcg_lit_int32(0);
  outC->_L18.location.d_min = kcg_lit_int32(0);
  outC->_L18.location.d_max = kcg_lit_int32(0);
  outC->_L18.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.valid = kcg_true;
  outC->_L18.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L18.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L18.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L18.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L18.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L18.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.valid = kcg_true;
  outC->_L18.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L18.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L18.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L18.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L18.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L18.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L18.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L18.infoFromPassing.linkedBGs[idx19].valid = kcg_true;
    outC->_L18.infoFromPassing.linkedBGs[idx19].nid_LRBG = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
    outC->_L18.infoFromPassing.linkedBGs[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L18.infoFromPassing.linkedBGs[idx19].d_link = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18.infoFromPassing.linkedBGs[idx19].nid_c = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx19].nid_bg = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18.infoFromPassing.linkedBGs[idx19].q_locacc = kcg_lit_int32(0);
  }
  outC->_L18.missed = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.nid_c = kcg_lit_int32(0);
  outC->_L17.nid_bg = kcg_lit_int32(0);
  outC->_L17.q_link = Q_LINK_Unlinked;
  outC->_L17.location.nominal = kcg_lit_int32(0);
  outC->_L17.location.d_min = kcg_lit_int32(0);
  outC->_L17.location.d_max = kcg_lit_int32(0);
  outC->_L17.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.valid = kcg_true;
  outC->_L17.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L17.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L17.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L17.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L17.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L17.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L17.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L17.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L17.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L17.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->_L17.infoFromPassing.linkedBGs[idx20].nid_LRBG = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
    outC->_L17.infoFromPassing.linkedBGs[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L17.infoFromPassing.linkedBGs[idx20].d_link = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17.infoFromPassing.linkedBGs[idx20].nid_c = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx20].nid_bg = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17.infoFromPassing.linkedBGs[idx20].q_locacc = kcg_lit_int32(0);
  }
  outC->_L17.missed = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.nid_bg = kcg_lit_int32(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L16.location.nominal = kcg_lit_int32(0);
  outC->_L16.location.d_min = kcg_lit_int32(0);
  outC->_L16.location.d_max = kcg_lit_int32(0);
  outC->_L16.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.valid = kcg_true;
  outC->_L16.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L16.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L16.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L16.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L16.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L16.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L16.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L16.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->_L16.infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->_L16.infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L16.infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L16.infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L16.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L16.infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int32(0);
  }
  outC->_L16.missed = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.nid_LRBG = kcg_lit_int32(0);
  outC->_L5.q_dir = Q_DIR_Reverse;
  outC->_L5.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.d_link = kcg_lit_int32(0);
  outC->_L5.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.nid_c = kcg_lit_int32(0);
  outC->_L5.nid_bg = kcg_lit_int32(0);
  outC->_L5.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L5.q_locacc = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L4[idx22].valid = kcg_true;
    outC->_L4[idx22].nid_LRBG = kcg_lit_int32(0);
    outC->_L4[idx22].q_dir = Q_DIR_Reverse;
    outC->_L4[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx22].d_link = kcg_lit_int32(0);
    outC->_L4[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx22].nid_c = kcg_lit_int32(0);
    outC->_L4[idx22].nid_bg = kcg_lit_int32(0);
    outC->_L4[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx22].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L4[idx22].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.BG_Header.valid = kcg_true;
  outC->_L1.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.BG_Header.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(
      0);
  outC->_L1.BG_Header.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(
      0);
  outC->_L1.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx23 = 0; idx23 < 33; idx23++) {
    outC->_L1.linkedBGs[idx23].valid = kcg_true;
    outC->_L1.linkedBGs[idx23].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx23].q_dir = Q_DIR_Reverse;
    outC->_L1.linkedBGs[idx23].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.linkedBGs[idx23].d_link = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx23].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.linkedBGs[idx23].nid_c = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx23].nid_bg = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx23].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.linkedBGs[idx23].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L1.linkedBGs[idx23].q_locacc = kcg_lit_int32(0);
  }
  outC->lrbg.valid = kcg_true;
  outC->lrbg.nid_c = kcg_lit_int32(0);
  outC->lrbg.nid_bg = kcg_lit_int32(0);
  outC->lrbg.q_link = Q_LINK_Unlinked;
  outC->lrbg.location.nominal = kcg_lit_int32(0);
  outC->lrbg.location.d_min = kcg_lit_int32(0);
  outC->lrbg.location.d_max = kcg_lit_int32(0);
  outC->lrbg.seqNoOnTrack = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.valid = kcg_true;
  outC->lrbg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lrbg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lrbg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->lrbg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->lrbg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->lrbg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->lrbg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lrbg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.valid = kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lrbg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lrbg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lrbg.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->lrbg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->lrbg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->lrbg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->lrbg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx24 = 0; idx24 < 33; idx24++) {
    outC->lrbg.infoFromPassing.linkedBGs[idx24].valid = kcg_true;
    outC->lrbg.infoFromPassing.linkedBGs[idx24].nid_LRBG = kcg_lit_int32(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx24].q_dir = Q_DIR_Reverse;
    outC->lrbg.infoFromPassing.linkedBGs[idx24].q_scale = Q_SCALE_10_cm_scale;
    outC->lrbg.infoFromPassing.linkedBGs[idx24].d_link = kcg_lit_int32(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx24].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->lrbg.infoFromPassing.linkedBGs[idx24].nid_c = kcg_lit_int32(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx24].nid_bg = kcg_lit_int32(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx24].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->lrbg.infoFromPassing.linkedBGs[idx24].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lrbg.infoFromPassing.linkedBGs[idx24].q_locacc = kcg_lit_int32(0);
  }
  outC->lrbg.missed = kcg_true;
  outC->overrun = kcg_true;
  for (idx26 = 0; idx26 < 41; idx26++) {
    outC->BGs_out[idx26].valid = kcg_true;
    outC->BGs_out[idx26].nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx26].nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx26].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx26].location.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx26].location.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx26].location.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx26].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx26].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx26].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_out[idx26].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx26].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx25 = 0; idx25 < 33; idx25++) {
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].valid = kcg_true;
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].d_link = kcg_lit_int32(0);
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].nid_c = kcg_lit_int32(0);
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].nid_bg = kcg_lit_int32(0);
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx26].infoFromPassing.linkedBGs[idx25].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_out[idx26].missed = kcg_true;
  }
  /* _L36=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */
  trimSeqNoOnTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_trimSeqNoOnTrack_1);
  /* _L33=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */
  mergeBGs_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_mergeBGs_onTrack_1);
  /* _L23=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */
  positionLinkedBGs_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionLinkedBGs_1);
  /* _L12=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */
  NIDLRBG_2_nidC_nidBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_NIDLRBG_2_nidC_nidBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void addAnnouncedBGs_reset_CalculateTrainPosition_Pkg(
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC)
{
  /* _L36=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */
  trimSeqNoOnTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_trimSeqNoOnTrack_1);
  /* _L33=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */
  mergeBGs_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_mergeBGs_onTrack_1);
  /* _L23=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */
  positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionLinkedBGs_1);
  /* _L12=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */
  NIDLRBG_2_nidC_nidBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_NIDLRBG_2_nidC_nidBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addAnnouncedBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

