/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::passing_a_BG/ */
void passing_a_BG_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* previouslyPassedLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* passedBGSeqNo/ */
  kcg_int32 passedBGSeqNo,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC)
{
  static kcg_size idx;
  static kcg_bool noname;

  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L1, passedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L19,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L24, BGs_in);
  outC->_L15 = outC->_L1.valid;
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L24,
    outC->_L15,
    &outC->Context_indexOfPassedBG_by_id_1);
  outC->_L9 = outC->Context_indexOfPassedBG_by_id_1.indexOfBG;
  outC->_L10 = outC->Context_indexOfPassedBG_by_id_1.BG_found;
  outC->_L11 = outC->Context_indexOfPassedBG_by_id_1.indexValid;
  if ((kcg_lit_int32(0) <= outC->_L9) & (outC->_L9 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L13,
      &outC->_L24[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L13,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* _L12= */
  if (outC->_L10) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12, &outC->_L13);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12, &outC->_L19);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L25,
    previouslyPassedLinkedBG);
  outC->_L26 = passedBGSeqNo;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L31,
    trainProperties);
  /* _L5=(CalculateTrainPosition_Pkg::passedBG_2_positionedBG#1)/ */
  passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
    &outC->_L1,
    &outC->_L12,
    &outC->_L25,
    outC->_L26,
    &outC->_L31,
    &outC->Context_passedBG_2_positionedBG_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L5,
    &outC->Context_passedBG_2_positionedBG_1.passedPositionedBG);
  outC->_L6 = outC->Context_passedBG_2_positionedBG_1.foundNotWhereAnnounced;
  outC->_L32 =
    outC->Context_passedBG_2_positionedBG_1.BGpassedInUnexpectedDirection;
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L7,
    &outC->Context_passedBG_2_positionedBG_1.linkedBGs);
  outC->BGpassedInUnexpectedDirection = outC->_L32;
  /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack#2)/ */
  mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L5,
    &outC->_L24,
    &outC->Context_mergeBG_onTrack_2);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L16,
    &outC->Context_mergeBG_onTrack_2.BGs_out);
  outC->_L17 = outC->Context_mergeBG_onTrack_2.overrun;
  /* _L20/ */
  for (idx = 0; idx < 8; idx++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L20[idx], &outC->_L19);
  }
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L18[0],
    &outC->_L7);
  kcg_copy__23_array(&outC->_L18[33], &outC->_L20);
  /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L16,
    &outC->_L18,
    &outC->Context_mergeBGs_onTrack_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L21,
    &outC->Context_mergeBGs_onTrack_1.BGs_out);
  outC->_L22 = outC->Context_mergeBGs_onTrack_1.overrun;
  /* _L30=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L21,
    &outC->Context_trimSeqNoOnTrack_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L30,
    &outC->Context_trimSeqNoOnTrack_1.BGs_out);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG,
    &outC->_L5);
  outC->foundNotWhereAnnounced = outC->_L6;
  outC->_L23 = outC->_L22 | outC->_L17;
  outC->overrun = outC->_L23;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L30);
  noname = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void passing_a_BG_init_CalculateTrainPosition_Pkg(
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC)
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

  outC->_L32 = kcg_true;
  outC->_L31.nid_engine = kcg_lit_int32(0);
  outC->_L31.nid_operational = kcg_lit_int32(0);
  outC->_L31.l_train = kcg_lit_int32(0);
  outC->_L31.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L31.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L31.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L31.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L31.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L31.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L31.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L31.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L31.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L31.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L31.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L31.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L30[idx1].valid = kcg_true;
    outC->_L30[idx1].nid_c = kcg_lit_int32(0);
    outC->_L30[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L30[idx1].q_link = Q_LINK_Unlinked;
    outC->_L30[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L30[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L30[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L30[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.valid = kcg_true;
    outC->_L30[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L30[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L30[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L30[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L30[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L30[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L30[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.valid = kcg_true;
    outC->_L30[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L30[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L30[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L30[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L30[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L30[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L30[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L30[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L30[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L30[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L30[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L30[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L30[idx1].missed = kcg_true;
  }
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25.valid = kcg_true;
  outC->_L25.nid_c = kcg_lit_int32(0);
  outC->_L25.nid_bg = kcg_lit_int32(0);
  outC->_L25.q_link = Q_LINK_Unlinked;
  outC->_L25.location.nominal = kcg_lit_int32(0);
  outC->_L25.location.d_min = kcg_lit_int32(0);
  outC->_L25.location.d_max = kcg_lit_int32(0);
  outC->_L25.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.valid = kcg_true;
  outC->_L25.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L25.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L25.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L25.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L25.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L25.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L25.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.valid = kcg_true;
  outC->_L25.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L25.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L25.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L25.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L25.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L25.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L25.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L25.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L25.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L25.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L25.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L25.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L25.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L25.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L25.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L25.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L25.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L25.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L25.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L25.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L25.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L25.missed = kcg_true;
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L24[idx4].valid = kcg_true;
    outC->_L24[idx4].nid_c = kcg_lit_int32(0);
    outC->_L24[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L24[idx4].q_link = Q_LINK_Unlinked;
    outC->_L24[idx4].location.nominal = kcg_lit_int32(0);
    outC->_L24[idx4].location.d_min = kcg_lit_int32(0);
    outC->_L24[idx4].location.d_max = kcg_lit_int32(0);
    outC->_L24[idx4].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.valid = kcg_true;
    outC->_L24[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L24[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L24[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L24[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L24[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L24[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L24[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.valid = kcg_true;
    outC->_L24[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L24[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L24[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L24[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L24[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L24[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L24[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L24[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L24[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L24[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L24[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L24[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
    }
    outC->_L24[idx4].missed = kcg_true;
  }
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L21[idx6].valid = kcg_true;
    outC->_L21[idx6].nid_c = kcg_lit_int32(0);
    outC->_L21[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L21[idx6].q_link = Q_LINK_Unlinked;
    outC->_L21[idx6].location.nominal = kcg_lit_int32(0);
    outC->_L21[idx6].location.d_min = kcg_lit_int32(0);
    outC->_L21[idx6].location.d_max = kcg_lit_int32(0);
    outC->_L21[idx6].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.valid = kcg_true;
    outC->_L21[idx6].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L21[idx6].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L21[idx6].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L21[idx6].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21[idx6].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21[idx6].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.valid = kcg_true;
    outC->_L21[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L21[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L21[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L21[idx6].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L21[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L21[idx6].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L21[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L21[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L21[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L21[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L21[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L21[idx6].infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
    }
    outC->_L21[idx6].missed = kcg_true;
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L20[idx8].valid = kcg_true;
    outC->_L20[idx8].nid_c = kcg_lit_int32(0);
    outC->_L20[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L20[idx8].q_link = Q_LINK_Unlinked;
    outC->_L20[idx8].location.nominal = kcg_lit_int32(0);
    outC->_L20[idx8].location.d_min = kcg_lit_int32(0);
    outC->_L20[idx8].location.d_max = kcg_lit_int32(0);
    outC->_L20[idx8].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.valid = kcg_true;
    outC->_L20[idx8].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L20[idx8].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L20[idx8].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx8].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L20[idx8].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L20[idx8].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L20[idx8].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.valid = kcg_true;
    outC->_L20[idx8].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L20[idx8].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L20[idx8].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20[idx8].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L20[idx8].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L20[idx8].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L20[idx8].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L20[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L20[idx8].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L20[idx8].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L20[idx8].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx7 = 0; idx7 < 33; idx7++) {
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].valid = kcg_true;
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L20[idx8].infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
    }
    outC->_L20[idx8].missed = kcg_true;
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
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L19.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L19.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L19.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.missed = kcg_true;
  for (idx11 = 0; idx11 < 41; idx11++) {
    outC->_L18[idx11].valid = kcg_true;
    outC->_L18[idx11].nid_c = kcg_lit_int32(0);
    outC->_L18[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L18[idx11].q_link = Q_LINK_Unlinked;
    outC->_L18[idx11].location.nominal = kcg_lit_int32(0);
    outC->_L18[idx11].location.d_min = kcg_lit_int32(0);
    outC->_L18[idx11].location.d_max = kcg_lit_int32(0);
    outC->_L18[idx11].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.valid = kcg_true;
    outC->_L18[idx11].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L18[idx11].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[idx11].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18[idx11].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.valid = kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18[idx11].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18[idx11].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L18[idx11].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18[idx11].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L18[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L18[idx11].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx10 = 0; idx10 < 33; idx10++) {
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].valid = kcg_true;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
    }
    outC->_L18[idx11].missed = kcg_true;
  }
  outC->_L17 = kcg_true;
  for (idx13 = 0; idx13 < 41; idx13++) {
    outC->_L16[idx13].valid = kcg_true;
    outC->_L16[idx13].nid_c = kcg_lit_int32(0);
    outC->_L16[idx13].nid_bg = kcg_lit_int32(0);
    outC->_L16[idx13].q_link = Q_LINK_Unlinked;
    outC->_L16[idx13].location.nominal = kcg_lit_int32(0);
    outC->_L16[idx13].location.d_min = kcg_lit_int32(0);
    outC->_L16[idx13].location.d_max = kcg_lit_int32(0);
    outC->_L16[idx13].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.valid = kcg_true;
    outC->_L16[idx13].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L16[idx13].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L16[idx13].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L16[idx13].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L16[idx13].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.valid = kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L16[idx13].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L16[idx13].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L16[idx13].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L16[idx13].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L16[idx13].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L16[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L16[idx13].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L16[idx13].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L16[idx13].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].valid = kcg_true;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int32(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int32(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int32(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int32(0);
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L16[idx13].infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int32(0);
    }
    outC->_L16[idx13].missed = kcg_true;
  }
  outC->_L15 = kcg_true;
  outC->_L13.valid = kcg_true;
  outC->_L13.nid_c = kcg_lit_int32(0);
  outC->_L13.nid_bg = kcg_lit_int32(0);
  outC->_L13.q_link = Q_LINK_Unlinked;
  outC->_L13.location.nominal = kcg_lit_int32(0);
  outC->_L13.location.d_min = kcg_lit_int32(0);
  outC->_L13.location.d_max = kcg_lit_int32(0);
  outC->_L13.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.valid = kcg_true;
  outC->_L13.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L13.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L13.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L13.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L13.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L13.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L13.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.valid = kcg_true;
  outC->_L13.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L13.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L13.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L13.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L13.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L13.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L13.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L13.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L13.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L13.infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int32(0);
    outC->_L13.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->_L13.infoFromPassing.linkedBGs[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L13.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int32(0);
    outC->_L13.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L13.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int32(0);
    outC->_L13.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int32(0);
    outC->_L13.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L13.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L13.infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int32(0);
  }
  outC->_L13.missed = kcg_true;
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
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L12.infoFromPassing.linkedBGs[idx15].valid = kcg_true;
    outC->_L12.infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
    outC->_L12.infoFromPassing.linkedBGs[idx15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12.infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int32(0);
    outC->_L12.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12.infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int32(0);
  }
  outC->_L12.missed = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L7[idx17].valid = kcg_true;
    outC->_L7[idx17].nid_c = kcg_lit_int32(0);
    outC->_L7[idx17].nid_bg = kcg_lit_int32(0);
    outC->_L7[idx17].q_link = Q_LINK_Unlinked;
    outC->_L7[idx17].location.nominal = kcg_lit_int32(0);
    outC->_L7[idx17].location.d_min = kcg_lit_int32(0);
    outC->_L7[idx17].location.d_max = kcg_lit_int32(0);
    outC->_L7[idx17].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.valid = kcg_true;
    outC->_L7[idx17].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L7[idx17].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L7[idx17].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L7[idx17].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7[idx17].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7[idx17].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7[idx17].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.valid = kcg_true;
    outC->_L7[idx17].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L7[idx17].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L7[idx17].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L7[idx17].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L7[idx17].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L7[idx17].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L7[idx17].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L7[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L7[idx17].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L7[idx17].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L7[idx17].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx16 = 0; idx16 < 33; idx16++) {
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].valid = kcg_true;
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].nid_LRBG = kcg_lit_int32(0);
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].q_scale = Q_SCALE_10_cm_scale;
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int32(0);
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int32(0);
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int32(0);
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L7[idx17].infoFromPassing.linkedBGs[idx16].q_locacc = kcg_lit_int32(0);
    }
    outC->_L7[idx17].missed = kcg_true;
  }
  outC->_L6 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.nid_c = kcg_lit_int32(0);
  outC->_L5.nid_bg = kcg_lit_int32(0);
  outC->_L5.q_link = Q_LINK_Unlinked;
  outC->_L5.location.nominal = kcg_lit_int32(0);
  outC->_L5.location.d_min = kcg_lit_int32(0);
  outC->_L5.location.d_max = kcg_lit_int32(0);
  outC->_L5.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.valid = kcg_true;
  outC->_L5.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L5.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L5.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L5.infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
    outC->_L5.infoFromPassing.linkedBGs[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int32(0);
  }
  outC->_L5.missed = kcg_true;
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
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L1.linkedBGs[idx19].valid = kcg_true;
    outC->_L1.linkedBGs[idx19].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
    outC->_L1.linkedBGs[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.linkedBGs[idx19].d_link = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.linkedBGs[idx19].nid_c = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx19].nid_bg = kcg_lit_int32(0);
    outC->_L1.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.linkedBGs[idx19].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L1.linkedBGs[idx19].q_locacc = kcg_lit_int32(0);
  }
  outC->BGpassedInUnexpectedDirection = kcg_true;
  outC->foundNotWhereAnnounced = kcg_true;
  outC->overrun = kcg_true;
  for (idx21 = 0; idx21 < 41; idx21++) {
    outC->BGs_out[idx21].valid = kcg_true;
    outC->BGs_out[idx21].nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx21].nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx21].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx21].location.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx21].location.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx21].location.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx21].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx21].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx21].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_out[idx21].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx21].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx20 = 0; idx20 < 33; idx20++) {
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].valid = kcg_true;
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].d_link = kcg_lit_int32(0);
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].nid_c = kcg_lit_int32(0);
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].nid_bg = kcg_lit_int32(0);
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx21].infoFromPassing.linkedBGs[idx20].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_out[idx21].missed = kcg_true;
  }
  outC->passedPositionedBG.valid = kcg_true;
  outC->passedPositionedBG.nid_c = kcg_lit_int32(0);
  outC->passedPositionedBG.nid_bg = kcg_lit_int32(0);
  outC->passedPositionedBG.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.location.nominal = kcg_lit_int32(0);
  outC->passedPositionedBG.location.d_min = kcg_lit_int32(0);
  outC->passedPositionedBG.location.d_max = kcg_lit_int32(0);
  outC->passedPositionedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->passedPositionedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
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
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].valid = kcg_true;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].nid_LRBG =
      kcg_lit_int32(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].d_link =
      kcg_lit_int32(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].nid_c =
      kcg_lit_int32(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].nid_bg =
      kcg_lit_int32(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx22].q_locacc =
      kcg_lit_int32(0);
  }
  outC->passedPositionedBG.missed = kcg_true;
  /* _L30=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */
  trimSeqNoOnTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_trimSeqNoOnTrack_1);
  /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */
  mergeBGs_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_mergeBGs_onTrack_1);
  /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack#2)/ */
  mergeBG_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_mergeBG_onTrack_2);
  /* _L5=(CalculateTrainPosition_Pkg::passedBG_2_positionedBG#1)/ */
  passedBG_2_positionedBG_init_CalculateTrainPosition_Pkg(
    &outC->Context_passedBG_2_positionedBG_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */
  indexOfPassedBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfPassedBG_by_id_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void passing_a_BG_reset_CalculateTrainPosition_Pkg(
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC)
{
  /* _L30=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */
  trimSeqNoOnTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_trimSeqNoOnTrack_1);
  /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */
  mergeBGs_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_mergeBGs_onTrack_1);
  /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack#2)/ */
  mergeBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_mergeBG_onTrack_2);
  /* _L5=(CalculateTrainPosition_Pkg::passedBG_2_positionedBG#1)/ */
  passedBG_2_positionedBG_reset_CalculateTrainPosition_Pkg(
    &outC->Context_passedBG_2_positionedBG_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */
  indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfPassedBG_by_id_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** passing_a_BG_CalculateTrainPosition_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

