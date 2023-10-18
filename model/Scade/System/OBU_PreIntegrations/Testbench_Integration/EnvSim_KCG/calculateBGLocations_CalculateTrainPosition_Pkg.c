/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::calculateBGLocations/ */
void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* lastBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* reset/ */
  kcg_bool reset,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  static positionedBGs_T_TrainPosition_Types_Pck op_call;
  static kcg_bool noname;
  static kcg_bool _1_noname;

  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L92, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L324, lastBGs);
  /* _L137=(CalculateTrainPosition_Pkg::prevPassedLinkedBG#1)/ */
  prevPassedLinkedBG_CalculateTrainPosition_Pkg(
    &outC->_L92,
    &outC->_L324,
    &outC->Context_prevPassedLinkedBG_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L137,
    &outC->Context_prevPassedLinkedBG_1.previouslyPassedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L301, passedBG);
  outC->_L299 = reset;
  /* _L298=(CalculateTrainPosition_Pkg::genPassedBG_SeqNo#2)/ */
  genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
    &outC->_L301,
    &outC->_L324,
    outC->_L299,
    &outC->Context_genPassedBG_SeqNo_2);
  outC->_L298 = outC->Context_genPassedBG_SeqNo_2.seqNo;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L356,
    trainProperties);
  /* _L87=(CalculateTrainPosition_Pkg::passing_a_BG#1)/ */
  passing_a_BG_CalculateTrainPosition_Pkg(
    &outC->_L92,
    &outC->_L137,
    &outC->_L324,
    outC->_L298,
    &outC->_L356,
    &outC->Context_passing_a_BG_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L87,
    &outC->Context_passing_a_BG_1.passedPositionedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L88,
    &outC->Context_passing_a_BG_1.BGs_out);
  outC->_L89 = outC->Context_passing_a_BG_1.overrun;
  outC->_L90 = outC->Context_passing_a_BG_1.foundNotWhereAnnounced;
  outC->_L374 = outC->Context_passing_a_BG_1.BGpassedInUnexpectedDirection;
  outC->_L362 = !outC->_L90;
  outC->_L357 = Q_LINK_Linked;
  outC->_L359 = outC->_L87.q_link;
  outC->_L358 = outC->_L359 == outC->_L357;
  outC->_L349 = outC->_L87.valid;
  outC->_L351 = outC->_L349 & outC->_L358 & outC->_L362;
  outC->every = outC->_L351;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L355,
    trainProperties);
  if (outC->every) {
    /* _L347=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations#1)/ */
    improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L87,
      &outC->_L88,
      &outC->_L355,
      &outC->Context_improve_BG_locations_1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &op_call,
      &outC->Context_improve_BG_locations_1.BGs_out);
  }
  outC->passedBG_foundNotWhereExpected = outC->_L90;
  outC->_L157 = outC->passedBG_foundNotWhereExpected;
  outC->BGpassedInUnexpectedDirection = outC->_L374;
  outC->_L376 = outC->BGpassedInUnexpectedDirection;
  outC->_L377 = outC->_L376 | outC->_L157;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L373,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L360,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  if (outC->every) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L347, &op_call);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L347, &outC->_L360);
  }
  /* _L361= */
  if (outC->_L351) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L361, &outC->_L347);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L361, &outC->_L88);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L352,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  outC->_L354 = reset;
  /* _L353= */
  if (outC->_L354) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L353, &outC->_L352);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L353, &outC->_L361);
  }
  /* _L364=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L87,
    &outC->_L353,
    outC->_L349,
    &outC->Context_indexOfBG_by_id_1);
  outC->_L364 = outC->Context_indexOfBG_by_id_1.indexOfBG;
  outC->_L365 = outC->Context_indexOfBG_by_id_1.BG_found;
  outC->_L366 = outC->Context_indexOfBG_by_id_1.indexValid;
  if ((kcg_lit_int64(0) <= outC->_L364) & (outC->_L364 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L367,
      &outC->_L353[outC->_L364]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L367,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG_loc,
    &outC->_L367);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L369,
    &outC->passedPositionedBG_loc);
  /* _L372= */
  if (outC->_L157) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L372, &outC->_L369);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L372, &outC->_L373);
  }
  _1_noname = outC->_L366;
  noname = outC->_L365;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG,
    &outC->_L367);
  outC->_L346 = kcg_false;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &outC->_L353);
  outC->outOfMemSpace = outC->_L89;
  outC->_L156 = outC->outOfMemSpace;
  outC->_L225.outOfMemSpace = outC->_L156;
  outC->_L225.passedBG_foundNotWhereExpected = outC->_L157;
  outC->_L225.positionCalculation_inconsistent = outC->_L346;
  outC->_L225.linkedBGMissed = outC->_L346;
  outC->_L225.BGpassedInUnexpectedDirection = outC->_L376;
  outC->_L225.BG_LinkingConsistencyError = outC->_L377;
  outC->_L225.twoConsecutiveLinkedBGs_missed = outC->_L346;
  outC->_L225.doubleRepositioningError = outC->_L346;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L225.bg, &outC->_L372);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&outC->errors, &outC->_L225);
}

#ifndef KCG_USER_DEFINED_INIT
void calculateBGLocations_init_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;

  outC->_L377 = kcg_true;
  outC->_L376 = kcg_true;
  outC->_L374 = kcg_true;
  outC->_L373.valid = kcg_true;
  outC->_L373.nid_c = kcg_lit_int64(0);
  outC->_L373.nid_bg = kcg_lit_int64(0);
  outC->_L373.q_link = Q_LINK_Unlinked;
  outC->_L373.location.nominal = kcg_lit_int64(0);
  outC->_L373.location.d_min = kcg_lit_int64(0);
  outC->_L373.location.d_max = kcg_lit_int64(0);
  outC->_L373.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.valid = kcg_true;
  outC->_L373.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L373.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L373.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L373.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L373.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L373.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L373.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L373.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.valid = kcg_true;
  outC->_L373.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L373.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L373.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L373.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L373.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L373.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L373.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L373.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L373.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L373.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L373.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L373.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L373.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L373.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L373.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L373.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L373.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L373.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L373.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L373.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L373.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L373.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L373.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L373.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L373.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L373.missed = kcg_true;
  outC->_L372.valid = kcg_true;
  outC->_L372.nid_c = kcg_lit_int64(0);
  outC->_L372.nid_bg = kcg_lit_int64(0);
  outC->_L372.q_link = Q_LINK_Unlinked;
  outC->_L372.location.nominal = kcg_lit_int64(0);
  outC->_L372.location.d_min = kcg_lit_int64(0);
  outC->_L372.location.d_max = kcg_lit_int64(0);
  outC->_L372.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.valid = kcg_true;
  outC->_L372.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L372.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L372.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L372.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L372.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L372.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L372.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L372.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.valid = kcg_true;
  outC->_L372.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L372.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L372.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L372.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L372.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L372.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L372.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L372.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L372.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L372.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L372.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L372.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L372.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L372.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L372.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L372.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L372.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L372.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L372.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L372.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L372.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L372.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L372.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L372.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L372.missed = kcg_true;
  outC->_L369.valid = kcg_true;
  outC->_L369.nid_c = kcg_lit_int64(0);
  outC->_L369.nid_bg = kcg_lit_int64(0);
  outC->_L369.q_link = Q_LINK_Unlinked;
  outC->_L369.location.nominal = kcg_lit_int64(0);
  outC->_L369.location.d_min = kcg_lit_int64(0);
  outC->_L369.location.d_max = kcg_lit_int64(0);
  outC->_L369.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.valid = kcg_true;
  outC->_L369.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L369.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L369.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L369.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L369.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L369.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L369.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L369.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.valid = kcg_true;
  outC->_L369.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L369.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L369.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L369.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L369.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L369.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L369.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L369.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L369.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L369.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L369.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L369.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L369.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L369.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L369.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L369.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L369.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L369.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L369.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L369.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L369.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L369.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L369.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L369.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L369.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L369.missed = kcg_true;
  outC->_L367.valid = kcg_true;
  outC->_L367.nid_c = kcg_lit_int64(0);
  outC->_L367.nid_bg = kcg_lit_int64(0);
  outC->_L367.q_link = Q_LINK_Unlinked;
  outC->_L367.location.nominal = kcg_lit_int64(0);
  outC->_L367.location.d_min = kcg_lit_int64(0);
  outC->_L367.location.d_max = kcg_lit_int64(0);
  outC->_L367.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.valid = kcg_true;
  outC->_L367.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L367.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L367.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L367.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L367.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L367.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L367.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L367.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.valid = kcg_true;
  outC->_L367.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L367.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L367.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L367.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L367.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L367.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L367.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L367.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L367.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L367.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L367.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L367.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L367.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L367.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L367.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L367.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L367.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L367.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L367.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L367.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L367.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L367.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L367.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L367.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L367.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L367.missed = kcg_true;
  outC->_L364 = kcg_lit_int64(0);
  outC->_L365 = kcg_true;
  outC->_L366 = kcg_true;
  outC->_L362 = kcg_true;
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L361[idx5].valid = kcg_true;
    outC->_L361[idx5].nid_c = kcg_lit_int64(0);
    outC->_L361[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L361[idx5].q_link = Q_LINK_Unlinked;
    outC->_L361[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L361[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L361[idx5].location.d_max = kcg_lit_int64(0);
    outC->_L361[idx5].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.valid = kcg_true;
    outC->_L361[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L361[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L361[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L361[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L361[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L361[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L361[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.valid = kcg_true;
    outC->_L361[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L361[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L361[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L361[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L361[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L361[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L361[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L361[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L361[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L361[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L361[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L361[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
    }
    outC->_L361[idx5].missed = kcg_true;
  }
  for (idx7 = 0; idx7 < 41; idx7++) {
    outC->_L360[idx7].valid = kcg_true;
    outC->_L360[idx7].nid_c = kcg_lit_int64(0);
    outC->_L360[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L360[idx7].q_link = Q_LINK_Unlinked;
    outC->_L360[idx7].location.nominal = kcg_lit_int64(0);
    outC->_L360[idx7].location.d_min = kcg_lit_int64(0);
    outC->_L360[idx7].location.d_max = kcg_lit_int64(0);
    outC->_L360[idx7].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.valid = kcg_true;
    outC->_L360[idx7].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L360[idx7].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L360[idx7].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L360[idx7].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L360[idx7].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L360[idx7].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L360[idx7].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.valid = kcg_true;
    outC->_L360[idx7].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L360[idx7].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L360[idx7].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L360[idx7].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L360[idx7].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L360[idx7].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L360[idx7].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L360[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L360[idx7].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L360[idx7].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L360[idx7].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx6 = 0; idx6 < 33; idx6++) {
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].valid = kcg_true;
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int64(0);
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L360[idx7].infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
    }
    outC->_L360[idx7].missed = kcg_true;
  }
  outC->_L357 = Q_LINK_Unlinked;
  outC->_L358 = kcg_true;
  outC->_L359 = Q_LINK_Unlinked;
  outC->_L356.nid_engine = kcg_lit_int64(0);
  outC->_L356.nid_operational = kcg_lit_int64(0);
  outC->_L356.l_train = kcg_lit_int64(0);
  outC->_L356.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L356.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L356.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L356.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L356.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L356.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L356.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L356.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L356.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L356.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L356.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L356.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L355.nid_engine = kcg_lit_int64(0);
  outC->_L355.nid_operational = kcg_lit_int64(0);
  outC->_L355.l_train = kcg_lit_int64(0);
  outC->_L355.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L355.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L355.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L355.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L355.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L355.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L355.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L355.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L355.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L355.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L355.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L355.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L354 = kcg_true;
  outC->_L299 = kcg_true;
  for (idx9 = 0; idx9 < 41; idx9++) {
    outC->_L353[idx9].valid = kcg_true;
    outC->_L353[idx9].nid_c = kcg_lit_int64(0);
    outC->_L353[idx9].nid_bg = kcg_lit_int64(0);
    outC->_L353[idx9].q_link = Q_LINK_Unlinked;
    outC->_L353[idx9].location.nominal = kcg_lit_int64(0);
    outC->_L353[idx9].location.d_min = kcg_lit_int64(0);
    outC->_L353[idx9].location.d_max = kcg_lit_int64(0);
    outC->_L353[idx9].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.valid = kcg_true;
    outC->_L353[idx9].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L353[idx9].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L353[idx9].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L353[idx9].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L353[idx9].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L353[idx9].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L353[idx9].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.valid = kcg_true;
    outC->_L353[idx9].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L353[idx9].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L353[idx9].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L353[idx9].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L353[idx9].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L353[idx9].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L353[idx9].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L353[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L353[idx9].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L353[idx9].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L353[idx9].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx8 = 0; idx8 < 33; idx8++) {
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].valid = kcg_true;
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int64(0);
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int64(0);
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int64(0);
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int64(0);
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L353[idx9].infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int64(0);
    }
    outC->_L353[idx9].missed = kcg_true;
  }
  for (idx11 = 0; idx11 < 41; idx11++) {
    outC->_L352[idx11].valid = kcg_true;
    outC->_L352[idx11].nid_c = kcg_lit_int64(0);
    outC->_L352[idx11].nid_bg = kcg_lit_int64(0);
    outC->_L352[idx11].q_link = Q_LINK_Unlinked;
    outC->_L352[idx11].location.nominal = kcg_lit_int64(0);
    outC->_L352[idx11].location.d_min = kcg_lit_int64(0);
    outC->_L352[idx11].location.d_max = kcg_lit_int64(0);
    outC->_L352[idx11].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.valid = kcg_true;
    outC->_L352[idx11].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L352[idx11].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L352[idx11].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L352[idx11].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L352[idx11].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L352[idx11].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L352[idx11].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.valid = kcg_true;
    outC->_L352[idx11].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L352[idx11].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L352[idx11].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L352[idx11].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L352[idx11].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L352[idx11].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L352[idx11].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L352[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L352[idx11].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L352[idx11].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L352[idx11].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx10 = 0; idx10 < 33; idx10++) {
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].valid = kcg_true;
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int64(0);
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int64(0);
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int64(0);
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int64(0);
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L352[idx11].infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int64(0);
    }
    outC->_L352[idx11].missed = kcg_true;
  }
  outC->_L351 = kcg_true;
  outC->_L349 = kcg_true;
  for (idx13 = 0; idx13 < 41; idx13++) {
    outC->_L347[idx13].valid = kcg_true;
    outC->_L347[idx13].nid_c = kcg_lit_int64(0);
    outC->_L347[idx13].nid_bg = kcg_lit_int64(0);
    outC->_L347[idx13].q_link = Q_LINK_Unlinked;
    outC->_L347[idx13].location.nominal = kcg_lit_int64(0);
    outC->_L347[idx13].location.d_min = kcg_lit_int64(0);
    outC->_L347[idx13].location.d_max = kcg_lit_int64(0);
    outC->_L347[idx13].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.valid = kcg_true;
    outC->_L347[idx13].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L347[idx13].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L347[idx13].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L347[idx13].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L347[idx13].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L347[idx13].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L347[idx13].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.valid = kcg_true;
    outC->_L347[idx13].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L347[idx13].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L347[idx13].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L347[idx13].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L347[idx13].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L347[idx13].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L347[idx13].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L347[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L347[idx13].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L347[idx13].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L347[idx13].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].valid = kcg_true;
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int64(0);
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int64(0);
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int64(0);
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int64(0);
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L347[idx13].infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int64(0);
    }
    outC->_L347[idx13].missed = kcg_true;
  }
  outC->_L346 = kcg_true;
  for (idx15 = 0; idx15 < 41; idx15++) {
    outC->_L324[idx15].valid = kcg_true;
    outC->_L324[idx15].nid_c = kcg_lit_int64(0);
    outC->_L324[idx15].nid_bg = kcg_lit_int64(0);
    outC->_L324[idx15].q_link = Q_LINK_Unlinked;
    outC->_L324[idx15].location.nominal = kcg_lit_int64(0);
    outC->_L324[idx15].location.d_min = kcg_lit_int64(0);
    outC->_L324[idx15].location.d_max = kcg_lit_int64(0);
    outC->_L324[idx15].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.valid = kcg_true;
    outC->_L324[idx15].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L324[idx15].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L324[idx15].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L324[idx15].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L324[idx15].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L324[idx15].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L324[idx15].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.valid = kcg_true;
    outC->_L324[idx15].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L324[idx15].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L324[idx15].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L324[idx15].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L324[idx15].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L324[idx15].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L324[idx15].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L324[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L324[idx15].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L324[idx15].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L324[idx15].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx14 = 0; idx14 < 33; idx14++) {
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].valid = kcg_true;
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int64(0);
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int64(0);
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int64(0);
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int64(0);
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L324[idx15].infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int64(0);
    }
    outC->_L324[idx15].missed = kcg_true;
  }
  outC->_L298 = kcg_lit_int64(0);
  outC->_L301.valid = kcg_true;
  outC->_L301.BG_Header.valid = kcg_true;
  outC->_L301.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L301.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L301.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L301.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L301.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L301.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L301.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L301.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L301.BG_Header.bgPosition.valid = kcg_true;
  outC->_L301.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L301.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L301.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L301.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L301.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L301.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L301.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L301.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L301.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L301.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L301.linkedBGs[idx16].valid = kcg_true;
    outC->_L301.linkedBGs[idx16].nid_LRBG = kcg_lit_int64(0);
    outC->_L301.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
    outC->_L301.linkedBGs[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L301.linkedBGs[idx16].d_link = kcg_lit_int64(0);
    outC->_L301.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L301.linkedBGs[idx16].nid_c = kcg_lit_int64(0);
    outC->_L301.linkedBGs[idx16].nid_bg = kcg_lit_int64(0);
    outC->_L301.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L301.linkedBGs[idx16].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L301.linkedBGs[idx16].q_locacc = kcg_lit_int64(0);
  }
  outC->_L225.outOfMemSpace = kcg_true;
  outC->_L225.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L225.positionCalculation_inconsistent = kcg_true;
  outC->_L225.linkedBGMissed = kcg_true;
  outC->_L225.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L225.BG_LinkingConsistencyError = kcg_true;
  outC->_L225.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L225.doubleRepositioningError = kcg_true;
  outC->_L225.bg.valid = kcg_true;
  outC->_L225.bg.nid_c = kcg_lit_int64(0);
  outC->_L225.bg.nid_bg = kcg_lit_int64(0);
  outC->_L225.bg.q_link = Q_LINK_Unlinked;
  outC->_L225.bg.location.nominal = kcg_lit_int64(0);
  outC->_L225.bg.location.d_min = kcg_lit_int64(0);
  outC->_L225.bg.location.d_max = kcg_lit_int64(0);
  outC->_L225.bg.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.valid = kcg_true;
  outC->_L225.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L225.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L225.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L225.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L225.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L225.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L225.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L225.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.valid = kcg_true;
  outC->_L225.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L225.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L225.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L225.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L225.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L225.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L225.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L225.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L225.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L225.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L225.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int64(0);
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int64(0);
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int64(0);
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int64(0);
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L225.bg.infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int64(0);
  }
  outC->_L225.bg.missed = kcg_true;
  outC->_L157 = kcg_true;
  outC->_L156 = kcg_true;
  outC->_L137.valid = kcg_true;
  outC->_L137.nid_c = kcg_lit_int64(0);
  outC->_L137.nid_bg = kcg_lit_int64(0);
  outC->_L137.q_link = Q_LINK_Unlinked;
  outC->_L137.location.nominal = kcg_lit_int64(0);
  outC->_L137.location.d_min = kcg_lit_int64(0);
  outC->_L137.location.d_max = kcg_lit_int64(0);
  outC->_L137.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.valid = kcg_true;
  outC->_L137.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L137.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L137.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L137.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L137.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L137.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L137.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L137.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.valid = kcg_true;
  outC->_L137.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L137.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L137.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L137.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L137.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L137.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L137.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L137.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L137.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L137.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L137.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L137.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L137.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L137.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L137.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L137.infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int64(0);
    outC->_L137.infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
    outC->_L137.infoFromPassing.linkedBGs[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L137.infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int64(0);
    outC->_L137.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L137.infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int64(0);
    outC->_L137.infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int64(0);
    outC->_L137.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L137.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L137.infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int64(0);
  }
  outC->_L137.missed = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L89 = kcg_true;
  for (idx20 = 0; idx20 < 41; idx20++) {
    outC->_L88[idx20].valid = kcg_true;
    outC->_L88[idx20].nid_c = kcg_lit_int64(0);
    outC->_L88[idx20].nid_bg = kcg_lit_int64(0);
    outC->_L88[idx20].q_link = Q_LINK_Unlinked;
    outC->_L88[idx20].location.nominal = kcg_lit_int64(0);
    outC->_L88[idx20].location.d_min = kcg_lit_int64(0);
    outC->_L88[idx20].location.d_max = kcg_lit_int64(0);
    outC->_L88[idx20].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.valid = kcg_true;
    outC->_L88[idx20].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L88[idx20].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L88[idx20].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L88[idx20].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L88[idx20].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L88[idx20].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L88[idx20].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.valid = kcg_true;
    outC->_L88[idx20].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L88[idx20].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L88[idx20].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L88[idx20].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L88[idx20].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L88[idx20].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L88[idx20].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L88[idx20].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L88[idx20].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L88[idx20].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L88[idx20].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx19 = 0; idx19 < 33; idx19++) {
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].valid = kcg_true;
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].nid_LRBG = kcg_lit_int64(0);
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].d_link = kcg_lit_int64(0);
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].nid_c = kcg_lit_int64(0);
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].nid_bg = kcg_lit_int64(0);
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L88[idx20].infoFromPassing.linkedBGs[idx19].q_locacc = kcg_lit_int64(0);
    }
    outC->_L88[idx20].missed = kcg_true;
  }
  outC->_L87.valid = kcg_true;
  outC->_L87.nid_c = kcg_lit_int64(0);
  outC->_L87.nid_bg = kcg_lit_int64(0);
  outC->_L87.q_link = Q_LINK_Unlinked;
  outC->_L87.location.nominal = kcg_lit_int64(0);
  outC->_L87.location.d_min = kcg_lit_int64(0);
  outC->_L87.location.d_max = kcg_lit_int64(0);
  outC->_L87.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.valid = kcg_true;
  outC->_L87.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L87.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L87.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L87.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L87.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L87.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L87.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L87.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.valid = kcg_true;
  outC->_L87.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L87.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L87.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L87.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L87.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L87.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L87.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L87.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L87.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L87.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L87.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L87.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L87.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L87.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->_L87.infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int64(0);
    outC->_L87.infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->_L87.infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L87.infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int64(0);
    outC->_L87.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L87.infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int64(0);
    outC->_L87.infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int64(0);
    outC->_L87.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L87.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L87.infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int64(0);
  }
  outC->_L87.missed = kcg_true;
  outC->_L92.valid = kcg_true;
  outC->_L92.BG_Header.valid = kcg_true;
  outC->_L92.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L92.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L92.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L92.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L92.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L92.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L92.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L92.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L92.BG_Header.bgPosition.valid = kcg_true;
  outC->_L92.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L92.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L92.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L92.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L92.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L92.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L92.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L92.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L92.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L92.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L92.linkedBGs[idx22].valid = kcg_true;
    outC->_L92.linkedBGs[idx22].nid_LRBG = kcg_lit_int64(0);
    outC->_L92.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
    outC->_L92.linkedBGs[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L92.linkedBGs[idx22].d_link = kcg_lit_int64(0);
    outC->_L92.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L92.linkedBGs[idx22].nid_c = kcg_lit_int64(0);
    outC->_L92.linkedBGs[idx22].nid_bg = kcg_lit_int64(0);
    outC->_L92.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L92.linkedBGs[idx22].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L92.linkedBGs[idx22].q_locacc = kcg_lit_int64(0);
  }
  outC->BGpassedInUnexpectedDirection = kcg_true;
  outC->passedPositionedBG_loc.valid = kcg_true;
  outC->passedPositionedBG_loc.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG_loc.location.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.location.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.location.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.seqNoOnTrack = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx23 = 0; idx23 < 33; idx23++) {
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].valid = kcg_true;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].nid_LRBG =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].q_dir =
      Q_DIR_Reverse;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].d_link =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].nid_c =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].nid_bg =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx23].q_locacc =
      kcg_lit_int64(0);
  }
  outC->passedPositionedBG_loc.missed = kcg_true;
  outC->passedBG_foundNotWhereExpected = kcg_true;
  outC->outOfMemSpace = kcg_true;
  outC->every = kcg_true;
  outC->passedPositionedBG.valid = kcg_true;
  outC->passedPositionedBG.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.location.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG.location.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG.location.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromPassing.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedPositionedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx24 = 0; idx24 < 33; idx24++) {
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].valid = kcg_true;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].nid_LRBG =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].q_dir = Q_DIR_Reverse;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].d_link =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].nid_c =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].nid_bg =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx24].q_locacc =
      kcg_lit_int64(0);
  }
  outC->passedPositionedBG.missed = kcg_true;
  outC->errors.outOfMemSpace = kcg_true;
  outC->errors.passedBG_foundNotWhereExpected = kcg_true;
  outC->errors.positionCalculation_inconsistent = kcg_true;
  outC->errors.linkedBGMissed = kcg_true;
  outC->errors.BGpassedInUnexpectedDirection = kcg_true;
  outC->errors.BG_LinkingConsistencyError = kcg_true;
  outC->errors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->errors.doubleRepositioningError = kcg_true;
  outC->errors.bg.valid = kcg_true;
  outC->errors.bg.nid_c = kcg_lit_int64(0);
  outC->errors.bg.nid_bg = kcg_lit_int64(0);
  outC->errors.bg.q_link = Q_LINK_Unlinked;
  outC->errors.bg.location.nominal = kcg_lit_int64(0);
  outC->errors.bg.location.d_min = kcg_lit_int64(0);
  outC->errors.bg.location.d_max = kcg_lit_int64(0);
  outC->errors.bg.seqNoOnTrack = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.valid = kcg_true;
  outC->errors.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->errors.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->errors.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->errors.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->errors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->errors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->errors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->errors.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->errors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->errors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx25 = 0; idx25 < 33; idx25++) {
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].valid = kcg_true;
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].nid_LRBG = kcg_lit_int64(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].q_dir = Q_DIR_Reverse;
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].q_scale = Q_SCALE_10_cm_scale;
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].d_link = kcg_lit_int64(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].nid_c = kcg_lit_int64(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].nid_bg = kcg_lit_int64(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->errors.bg.infoFromPassing.linkedBGs[idx25].q_locacc = kcg_lit_int64(0);
  }
  outC->errors.bg.missed = kcg_true;
  for (idx27 = 0; idx27 < 41; idx27++) {
    outC->BGs[idx27].valid = kcg_true;
    outC->BGs[idx27].nid_c = kcg_lit_int64(0);
    outC->BGs[idx27].nid_bg = kcg_lit_int64(0);
    outC->BGs[idx27].q_link = Q_LINK_Unlinked;
    outC->BGs[idx27].location.nominal = kcg_lit_int64(0);
    outC->BGs[idx27].location.d_min = kcg_lit_int64(0);
    outC->BGs[idx27].location.d_max = kcg_lit_int64(0);
    outC->BGs[idx27].seqNoOnTrack = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.valid = kcg_true;
    outC->BGs[idx27].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs[idx27].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs[idx27].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs[idx27].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs[idx27].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs[idx27].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs[idx27].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.valid = kcg_true;
    outC->BGs[idx27].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs[idx27].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs[idx27].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs[idx27].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs[idx27].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs[idx27].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs[idx27].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs[idx27].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->BGs[idx27].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs[idx27].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs[idx27].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx26 = 0; idx26 < 33; idx26++) {
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].valid = kcg_true;
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].nid_LRBG = kcg_lit_int64(0);
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].q_dir = Q_DIR_Reverse;
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].q_scale = Q_SCALE_10_cm_scale;
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].d_link = kcg_lit_int64(0);
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].nid_c = kcg_lit_int64(0);
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].nid_bg = kcg_lit_int64(0);
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs[idx27].infoFromPassing.linkedBGs[idx26].q_locacc = kcg_lit_int64(0);
    }
    outC->BGs[idx27].missed = kcg_true;
  }
  /* _L364=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L347=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations#1)/ */
  improve_BG_locations_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_improve_BG_locations_1);
  /* _L87=(CalculateTrainPosition_Pkg::passing_a_BG#1)/ */
  passing_a_BG_init_CalculateTrainPosition_Pkg(&outC->Context_passing_a_BG_1);
  /* _L298=(CalculateTrainPosition_Pkg::genPassedBG_SeqNo#2)/ */
  genPassedBG_SeqNo_init_CalculateTrainPosition_Pkg(
    &outC->Context_genPassedBG_SeqNo_2);
  /* _L137=(CalculateTrainPosition_Pkg::prevPassedLinkedBG#1)/ */
  prevPassedLinkedBG_init_CalculateTrainPosition_Pkg(
    &outC->Context_prevPassedLinkedBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  /* _L364=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L347=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations#1)/ */
  improve_BG_locations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_improve_BG_locations_1);
  /* _L87=(CalculateTrainPosition_Pkg::passing_a_BG#1)/ */
  passing_a_BG_reset_CalculateTrainPosition_Pkg(&outC->Context_passing_a_BG_1);
  /* _L298=(CalculateTrainPosition_Pkg::genPassedBG_SeqNo#2)/ */
  genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
    &outC->Context_genPassedBG_SeqNo_2);
  /* _L137=(CalculateTrainPosition_Pkg::prevPassedLinkedBG#1)/ */
  prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(
    &outC->Context_prevPassedLinkedBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateBGLocations_CalculateTrainPosition_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

