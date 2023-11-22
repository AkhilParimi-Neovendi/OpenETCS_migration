/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainpositionAtt_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes/ */
void calculateTrainpositionAtt_CalculateTrainPosition_Pkg(
  /* trainPositionInfo/ */
  trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg *outC)
{
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L218,
    trainPositionInfo);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L225,
    &outC->_L218.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L237,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L242,
    &outC->_L237.d_baliseAntenna_2_frontend);
  /* _L243=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L225,
    &outC->_L242,
    &outC->Context_add_2_Distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L243,
    &outC->Context_add_2_Distances_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L365,
    &outC->_L237.d_frontend_2_rearend);
  /* _L366=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L243,
    &outC->_L365,
    &outC->Context_sub_2_distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L366,
    &outC->Context_sub_2_distances_1.distance);
  outC->_L369 = outC->_L366.d_max;
  outC->_L367 = outC->_L366.nominal;
  outC->_L371 = outC->_L367 + outC->_L369;
  outC->_L368 = outC->_L366.d_min;
  outC->_L370 = outC->_L367 + outC->_L368;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L305, currentOdometry);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L320,
    &outC->_L218.lastPassedLinkedBG);
  /* _L347=(CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG#1)/ */
  trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->_L305,
    &outC->_L320,
    &outC->Context_trainMoveDir_vs_refBG_1);
  outC->_L347 = outC->Context_trainMoveDir_vs_refBG_1.direction;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L346,
    &outC->_L218.prevPassedLinkedBG);
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L343,
    trainPositionInfo);
  outC->_L344 = outC->_L343.linkingIsUsedOnboard;
  outC->_L249 = outC->_L243.d_max;
  outC->_L247 = outC->_L243.nominal;
  outC->_L316 = outC->_L247 + outC->_L249;
  outC->_L248 = outC->_L243.d_min;
  outC->_L315 = outC->_L247 + outC->_L248;
  outC->_L274 = outC->_L320.infoFromPassing.BG_Header.trainOrientationToBG;
  outC->_L311 = Q_DIRLRBG_Unknown;
  outC->_L261 = outC->_L320.valid;
  outC->_L266 = !outC->_L261;
  /* _L312= */
  if (outC->_L266) {
    outC->_L312 = outC->_L311;
  }
  else {
    outC->_L312 = outC->_L274;
  }
  outC->_L223 =
    outC->_L320.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
  outC->_L310 = outC->_L266 | outC->_L223;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L307,
    trainProperties);
  /* _L306=(CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG#1)/ */
  frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->_L320,
    &outC->_L218,
    &outC->_L307,
    &outC->Context_frontendToLRBG_1);
  outC->_L306 = outC->Context_frontendToLRBG_1.nominalOrReverseToLRBG;
  outC->_L301 = outC->_L218.timestamp;
  outC->_L268 = cNID_LRBG_unknown_BG_Types_Pkg;
  outC->_L262 = outC->_L320.nid_c;
  outC->_L263 = outC->_L320.nid_bg;
  /* _L260=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG)/ */
  nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L261,
    outC->_L262,
    outC->_L263,
    &outC->Context_nidC_nidBG_2_NIDLRBG);
  outC->_L260 = outC->Context_nidC_nidBG_2_NIDLRBG.nidLRBG;
  outC->_L269 = outC->_L260 == outC->_L268;
  outC->_L267 = outC->_L266 | outC->_L269;
  outC->_L219 = outC->_L218.valid;
  outC->_L205.valid = outC->_L219;
  outC->_L205.timestamp = outC->_L301;
  outC->_L205.trainPositionIsUnknown = outC->_L267;
  outC->_L205.noCoordinateSystemHasBeenAssigned = outC->_L310;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L205.trainPosition,
    &outC->_L225);
  outC->_L205.estimatedFrontEndPosition = outC->_L247;
  outC->_L205.minSafeFrontEndPosition = outC->_L315;
  outC->_L205.maxSafeFrontEndPostion = outC->_L316;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L205.LRBG,
    &outC->_L320);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L205.prvLRBG,
    &outC->_L346);
  outC->_L205.nominalOrReverseToLRBG = outC->_L306;
  outC->_L205.trainOrientationToLRBG = outC->_L312;
  outC->_L205.trainRunningDirectionToLRBG = outC->_L347;
  outC->_L205.linkingIsUsedOnboard = outC->_L344;
  outC->_L205.estimatedRearEndPosition = outC->_L367;
  outC->_L205.minSafeRearEndPosition = outC->_L370;
  outC->_L205.maxSafeRearEndPosition = outC->_L371;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->_L205);
}

#ifndef KCG_USER_DEFINED_INIT
void calculateTrainpositionAtt_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg *outC)
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

  outC->_L371 = kcg_lit_int32(0);
  outC->_L370 = kcg_lit_int32(0);
  outC->_L369 = kcg_lit_int32(0);
  outC->_L368 = kcg_lit_int32(0);
  outC->_L367 = kcg_lit_int32(0);
  outC->_L366.nominal = kcg_lit_int32(0);
  outC->_L366.d_min = kcg_lit_int32(0);
  outC->_L366.d_max = kcg_lit_int32(0);
  outC->_L365.nominal = kcg_lit_int32(0);
  outC->_L365.d_min = kcg_lit_int32(0);
  outC->_L365.d_max = kcg_lit_int32(0);
  outC->_L347 = Q_DIRTRAIN_Reverse;
  outC->_L346.valid = kcg_true;
  outC->_L346.nid_c = kcg_lit_int32(0);
  outC->_L346.nid_bg = kcg_lit_int32(0);
  outC->_L346.q_link = Q_LINK_Unlinked;
  outC->_L346.location.nominal = kcg_lit_int32(0);
  outC->_L346.location.d_min = kcg_lit_int32(0);
  outC->_L346.location.d_max = kcg_lit_int32(0);
  outC->_L346.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.valid = kcg_true;
  outC->_L346.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L346.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L346.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L346.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L346.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L346.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L346.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L346.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.valid = kcg_true;
  outC->_L346.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L346.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L346.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L346.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L346.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L346.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L346.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L346.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L346.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L346.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L346.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L346.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L346.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L346.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L346.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L346.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L346.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L346.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L346.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L346.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L346.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L346.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L346.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L346.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L346.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L346.missed = kcg_true;
  outC->_L344 = kcg_true;
  outC->_L343.valid = kcg_true;
  outC->_L343.timestamp = kcg_lit_int32(0);
  outC->_L343.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L343.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L343.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L343.trainPositionDerivedFromLastLinkedBG.nominal = kcg_lit_int32(0);
  outC->_L343.trainPositionDerivedFromLastLinkedBG.d_min = kcg_lit_int32(0);
  outC->_L343.trainPositionDerivedFromLastLinkedBG.d_max = kcg_lit_int32(0);
  outC->_L343.trainPositionDerivedFromLastUnlinkedBG.nominal = kcg_lit_int32(0);
  outC->_L343.trainPositionDerivedFromLastUnlinkedBG.d_min = kcg_lit_int32(0);
  outC->_L343.trainPositionDerivedFromLastUnlinkedBG.d_max = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.valid = kcg_true;
  outC->_L343.prevPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L343.prevPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L343.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L343.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L343.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].q_dir =
      Q_DIR_Reverse;
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].d_link =
      kcg_lit_int32(0);
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].nid_c =
      kcg_lit_int32(0);
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].nid_bg =
      kcg_lit_int32(0);
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L343.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx1].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L343.prevPassedLinkedBG.missed = kcg_true;
  outC->_L343.lastPassedLinkedBG.valid = kcg_true;
  outC->_L343.lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L343.lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L343.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L343.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L343.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_dir =
      Q_DIR_Reverse;
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int32(0);
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int32(0);
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int32(0);
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L343.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L343.lastPassedLinkedBG.missed = kcg_true;
  outC->_L343.lastPassedUnlinkedBG.valid = kcg_true;
  outC->_L343.lastPassedUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L343.lastPassedUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L343.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L343.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].valid =
      kcg_true;
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].q_dir =
      Q_DIR_Reverse;
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].d_link =
      kcg_lit_int32(0);
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].nid_c =
      kcg_lit_int32(0);
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].nid_bg =
      kcg_lit_int32(0);
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L343.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx3].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L343.lastPassedUnlinkedBG.missed = kcg_true;
  outC->_L343.speed = kcg_lit_int32(0);
  outC->_L343.linkingIsUsedOnboard = kcg_true;
  outC->_L320.valid = kcg_true;
  outC->_L320.nid_c = kcg_lit_int32(0);
  outC->_L320.nid_bg = kcg_lit_int32(0);
  outC->_L320.q_link = Q_LINK_Unlinked;
  outC->_L320.location.nominal = kcg_lit_int32(0);
  outC->_L320.location.d_min = kcg_lit_int32(0);
  outC->_L320.location.d_max = kcg_lit_int32(0);
  outC->_L320.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.valid = kcg_true;
  outC->_L320.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L320.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L320.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L320.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L320.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L320.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L320.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L320.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.valid = kcg_true;
  outC->_L320.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L320.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L320.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L320.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L320.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L320.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L320.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L320.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L320.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L320.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L320.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L320.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L320.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L320.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L320.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L320.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L320.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L320.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L320.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L320.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L320.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L320.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L320.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L320.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L320.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L320.missed = kcg_true;
  outC->_L316 = kcg_lit_int32(0);
  outC->_L315 = kcg_lit_int32(0);
  outC->_L312 = Q_DIRLRBG_Reverse;
  outC->_L311 = Q_DIRLRBG_Reverse;
  outC->_L310 = kcg_true;
  outC->_L307.nid_engine = kcg_lit_int32(0);
  outC->_L307.nid_operational = kcg_lit_int32(0);
  outC->_L307.l_train = kcg_lit_int32(0);
  outC->_L307.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L307.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L307.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L307.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L307.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L307.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L307.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L307.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L307.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L307.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L307.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L307.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L306 = Q_DLRBG_Reverse;
  outC->_L305.valid = kcg_true;
  outC->_L305.timestamp = kcg_lit_int32(0);
  outC->_L305.odo.o_nominal = kcg_lit_int32(0);
  outC->_L305.odo.o_min = kcg_lit_int32(0);
  outC->_L305.odo.o_max = kcg_lit_int32(0);
  outC->_L305.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L305.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L305.speed.v_lower = kcg_lit_int32(0);
  outC->_L305.speed.v_upper = kcg_lit_int32(0);
  outC->_L305.acceleration = kcg_lit_int32(0);
  outC->_L305.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L305.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L301 = kcg_lit_int32(0);
  outC->_L274 = Q_DIRLRBG_Reverse;
  outC->_L269 = kcg_true;
  outC->_L268 = kcg_lit_int32(0);
  outC->_L267 = kcg_true;
  outC->_L266 = kcg_true;
  outC->_L263 = kcg_lit_int32(0);
  outC->_L262 = kcg_lit_int32(0);
  outC->_L261 = kcg_true;
  outC->_L260 = kcg_lit_int32(0);
  outC->_L247 = kcg_lit_int32(0);
  outC->_L248 = kcg_lit_int32(0);
  outC->_L249 = kcg_lit_int32(0);
  outC->_L243.nominal = kcg_lit_int32(0);
  outC->_L243.d_min = kcg_lit_int32(0);
  outC->_L243.d_max = kcg_lit_int32(0);
  outC->_L242.nominal = kcg_lit_int32(0);
  outC->_L242.d_min = kcg_lit_int32(0);
  outC->_L242.d_max = kcg_lit_int32(0);
  outC->_L237.nid_engine = kcg_lit_int32(0);
  outC->_L237.nid_operational = kcg_lit_int32(0);
  outC->_L237.l_train = kcg_lit_int32(0);
  outC->_L237.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L237.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L237.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L237.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L237.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L237.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L237.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L237.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L237.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L237.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L237.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L237.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L225.nominal = kcg_lit_int32(0);
  outC->_L225.d_min = kcg_lit_int32(0);
  outC->_L225.d_max = kcg_lit_int32(0);
  outC->_L223 = kcg_true;
  outC->_L219 = kcg_true;
  outC->_L218.valid = kcg_true;
  outC->_L218.timestamp = kcg_lit_int32(0);
  outC->_L218.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L218.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L218.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L218.trainPositionDerivedFromLastLinkedBG.nominal = kcg_lit_int32(0);
  outC->_L218.trainPositionDerivedFromLastLinkedBG.d_min = kcg_lit_int32(0);
  outC->_L218.trainPositionDerivedFromLastLinkedBG.d_max = kcg_lit_int32(0);
  outC->_L218.trainPositionDerivedFromLastUnlinkedBG.nominal = kcg_lit_int32(0);
  outC->_L218.trainPositionDerivedFromLastUnlinkedBG.d_min = kcg_lit_int32(0);
  outC->_L218.trainPositionDerivedFromLastUnlinkedBG.d_max = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.valid = kcg_true;
  outC->_L218.prevPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L218.prevPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L218.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L218.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L218.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].q_dir =
      Q_DIR_Reverse;
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].d_link =
      kcg_lit_int32(0);
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].nid_c =
      kcg_lit_int32(0);
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].nid_bg =
      kcg_lit_int32(0);
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L218.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx5].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L218.prevPassedLinkedBG.missed = kcg_true;
  outC->_L218.lastPassedLinkedBG.valid = kcg_true;
  outC->_L218.lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L218.lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L218.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L218.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L218.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].q_dir =
      Q_DIR_Reverse;
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].d_link =
      kcg_lit_int32(0);
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].nid_c =
      kcg_lit_int32(0);
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].nid_bg =
      kcg_lit_int32(0);
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L218.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx6].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L218.lastPassedLinkedBG.missed = kcg_true;
  outC->_L218.lastPassedUnlinkedBG.valid = kcg_true;
  outC->_L218.lastPassedUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L218.lastPassedUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L218.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L218.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].valid =
      kcg_true;
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_dir =
      Q_DIR_Reverse;
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int32(0);
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int32(0);
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int32(0);
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L218.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L218.lastPassedUnlinkedBG.missed = kcg_true;
  outC->_L218.speed = kcg_lit_int32(0);
  outC->_L218.linkingIsUsedOnboard = kcg_true;
  outC->_L205.valid = kcg_true;
  outC->_L205.timestamp = kcg_lit_int32(0);
  outC->_L205.trainPositionIsUnknown = kcg_true;
  outC->_L205.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L205.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L205.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L205.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L205.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L205.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L205.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L205.LRBG.valid = kcg_true;
  outC->_L205.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L205.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L205.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L205.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L205.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L205.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L205.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L205.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L205.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L205.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L205.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L205.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L205.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L205.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L205.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L205.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L205.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L205.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L205.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L205.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L205.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L205.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L205.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L205.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L205.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L205.LRBG.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L205.LRBG.missed = kcg_true;
  outC->_L205.prvLRBG.valid = kcg_true;
  outC->_L205.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L205.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L205.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L205.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L205.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L205.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L205.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L205.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L205.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L205.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L205.prvLRBG.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->_L205.prvLRBG.missed = kcg_true;
  outC->_L205.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L205.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L205.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L205.linkingIsUsedOnboard = kcg_true;
  outC->_L205.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L205.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L205.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->trainPosition.valid = kcg_true;
  outC->trainPosition.timestamp = kcg_lit_int32(0);
  outC->trainPosition.trainPositionIsUnknown = kcg_true;
  outC->trainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->trainPosition.trainPosition.nominal = kcg_lit_int32(0);
  outC->trainPosition.trainPosition.d_min = kcg_lit_int32(0);
  outC->trainPosition.trainPosition.d_max = kcg_lit_int32(0);
  outC->trainPosition.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->trainPosition.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->trainPosition.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->trainPosition.LRBG.valid = kcg_true;
  outC->trainPosition.LRBG.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.location.nominal = kcg_lit_int32(0);
  outC->trainPosition.LRBG.location.d_min = kcg_lit_int32(0);
  outC->trainPosition.LRBG.location.d_max = kcg_lit_int32(0);
  outC->trainPosition.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].d_link =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].nid_c =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].nid_bg =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx10].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPosition.LRBG.missed = kcg_true;
  outC->trainPosition.prvLRBG.valid = kcg_true;
  outC->trainPosition.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(
      0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].d_link =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].nid_c =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].nid_bg =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx11].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPosition.prvLRBG.missed = kcg_true;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.linkingIsUsedOnboard = kcg_true;
  outC->trainPosition.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->trainPosition.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->trainPosition.maxSafeRearEndPosition = kcg_lit_int32(0);
  /* _L260=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG)/ */
  nidC_nidBG_2_NIDLRBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG);
  /* _L306=(CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG#1)/ */
  frontendToLRBG_init_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_frontendToLRBG_1);
  /* _L347=(CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG#1)/ */
  trainMoveDir_vs_refBG_init_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_trainMoveDir_vs_refBG_1);
  /* _L366=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L243=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateTrainpositionAtt_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg *outC)
{
  /* _L260=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG)/ */
  nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG);
  /* _L306=(CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG#1)/ */
  frontendToLRBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_frontendToLRBG_1);
  /* _L347=(CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG#1)/ */
  trainMoveDir_vs_refBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_trainMoveDir_vs_refBG_1);
  /* _L366=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L243=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateTrainpositionAtt_CalculateTrainPosition_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

