/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo/ */
void calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* recalculateBGs/ */
  kcg_bool recalculateBGs,
  /* passedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* reset/ */
  kcg_bool reset,
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  static positionedBG_T_TrainPosition_Types_Pck tmp1;
  static positionedBG_T_TrainPosition_Types_Pck tmp2;
  static positionedBG_T_TrainPosition_Types_Pck tmp3;
  static positionedBG_T_TrainPosition_Types_Pck op_call;
  static positionedBG_T_TrainPosition_Types_Pck _4_op_call;
  static positionedBG_T_TrainPosition_Types_Pck _5_op_call;
  static positionedBG_T_TrainPosition_Types_Pck _6_op_call;
  static positionedBG_T_TrainPosition_Types_Pck noname;

  outC->_L66 = recalculateBGs;
  outC->every1 = outC->_L66;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L63, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L65, BGs);
  outC->_L64 = kcg_true;
  outC->_L67 = reset;
  if (outC->every1) {
    /* _L61=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#1)/ */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L63,
      &outC->_L65,
      outC->_L64,
      outC->_L67,
      outC->_L66,
      &outC->Context_lastAndPrevBG_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_4_op_call,
      &outC->Context_lastAndPrevBG_1.prvBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &op_call,
      &outC->Context_lastAndPrevBG_1.lastBG);
  }
  outC->_L76 = recalculateBGs;
  outC->every = outC->_L76;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L72, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L69, BGs);
  outC->_L73 = kcg_false;
  outC->_L74 = reset;
  if (outC->every) {
    /* _L70=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#2)/ */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L72,
      &outC->_L69,
      outC->_L73,
      outC->_L74,
      outC->_L76,
      &outC->Context_lastAndPrevBG_2);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_6_op_call,
      &outC->Context_lastAndPrevBG_2.prvBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_5_op_call,
      &outC->Context_lastAndPrevBG_2.lastBG);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1, currentOdometry);
  outC->_L77 = outC->_L1.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L75,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (outC->every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &_6_op_call);
  }
  else {
    /* _L70= */
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &outC->_L75);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &outC->_L70);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &tmp);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&noname, &outC->_L70);
  if (outC->every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L71, &_5_op_call);
  }
  else {
    /* _L70= */
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &outC->_L75);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &outC->_L71);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L71, &tmp1);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L68,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (outC->every1) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L61, &_4_op_call);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, &op_call);
  }
  else {
    /* _L61= */
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp2, &outC->_L68);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp2, &outC->_L61);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L61, &tmp2);
    /* _L61= */
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp3, &outC->_L68);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp3, &outC->_L62);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, &tmp3);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L59, BGs);
  outC->_L58 = recalculateBGs;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L57, currentOdometry);
  /* _L56=(CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed#1)/ */
  linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_L57,
    &outC->_L59,
    outC->_L58,
    &outC->Context_linkingIsUsed_1);
  outC->_L56 = outC->Context_linkingIsUsed_1.linkingIsUsed;
  outC->_L14 = outC->_L1.timestamp;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L13, &outC->_L1.odo);
  /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L13,
    &outC->_L62,
    &outC->Context_positionDerivedFromPassedBG_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L7,
    &outC->Context_positionDerivedFromPassedBG_1.position);
  /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#2)/ */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L13,
    &outC->_L71,
    &outC->Context_positionDerivedFromPassedBG_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L8,
    &outC->Context_positionDerivedFromPassedBG_2.position);
  /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L7,
    &outC->_L8,
    &outC->Context_overlapOf_2_Locations_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L10,
    &outC->Context_overlapOf_2_Locations_1.loc);
  outC->_L11 = outC->Context_overlapOf_2_Locations_1.overlap;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L28, currentOdometry);
  outC->_L15 = outC->_L28.speed.v_safeNominal;
  outC->_L9.valid = outC->_L77;
  outC->_L9.timestamp = outC->_L14;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9.trainPosition,
    &outC->_L10);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9.trainPositionDerivedFromLastLinkedBG,
    &outC->_L7);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9.trainPositionDerivedFromLastUnlinkedBG,
    &outC->_L8);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9.prevPassedLinkedBG,
    &outC->_L61);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9.lastPassedLinkedBG,
    &outC->_L62);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9.lastPassedUnlinkedBG,
    &outC->_L71);
  outC->_L9.speed = outC->_L15;
  outC->_L9.linkingIsUsedOnboard = outC->_L56;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo,
    &outC->_L9);
  outC->_L12 = !outC->_L11;
  outC->positionCalculationNotConsistent = outC->_L12;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
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

  outC->_L77 = kcg_true;
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L69[idx1].valid = kcg_true;
    outC->_L69[idx1].nid_c = kcg_lit_int32(0);
    outC->_L69[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L69[idx1].q_link = Q_LINK_Unlinked;
    outC->_L69[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L69[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L69[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L69[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.valid = kcg_true;
    outC->_L69[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L69[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L69[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L69[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L69[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L69[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L69[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.valid = kcg_true;
    outC->_L69[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L69[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L69[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L69[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L69[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L69[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L69[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L69[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L69[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L69[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L69[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L69[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L69[idx1].missed = kcg_true;
  }
  outC->_L72.valid = kcg_true;
  outC->_L72.nid_c = kcg_lit_int32(0);
  outC->_L72.nid_bg = kcg_lit_int32(0);
  outC->_L72.q_link = Q_LINK_Unlinked;
  outC->_L72.location.nominal = kcg_lit_int32(0);
  outC->_L72.location.d_min = kcg_lit_int32(0);
  outC->_L72.location.d_max = kcg_lit_int32(0);
  outC->_L72.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.valid = kcg_true;
  outC->_L72.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L72.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L72.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L72.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L72.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L72.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L72.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L72.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.valid = kcg_true;
  outC->_L72.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L72.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L72.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L72.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L72.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L72.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L72.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L72.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L72.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L72.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L72.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L72.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L72.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L72.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L72.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L72.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L72.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L72.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L72.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L72.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L72.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L72.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L72.missed = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L74 = kcg_true;
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
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L75.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L75.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L75.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L75.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L75.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L75.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L75.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L75.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L75.missed = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L63.valid = kcg_true;
  outC->_L63.nid_c = kcg_lit_int32(0);
  outC->_L63.nid_bg = kcg_lit_int32(0);
  outC->_L63.q_link = Q_LINK_Unlinked;
  outC->_L63.location.nominal = kcg_lit_int32(0);
  outC->_L63.location.d_min = kcg_lit_int32(0);
  outC->_L63.location.d_max = kcg_lit_int32(0);
  outC->_L63.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.valid = kcg_true;
  outC->_L63.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L63.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L63.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L63.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L63.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L63.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L63.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L63.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.valid = kcg_true;
  outC->_L63.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L63.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L63.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L63.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L63.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L63.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L63.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L63.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L63.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L63.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L63.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L63.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L63.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L63.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L63.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L63.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L63.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L63.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L63.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L63.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L63.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L63.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L63.missed = kcg_true;
  outC->_L64 = kcg_true;
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L65[idx6].valid = kcg_true;
    outC->_L65[idx6].nid_c = kcg_lit_int32(0);
    outC->_L65[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L65[idx6].q_link = Q_LINK_Unlinked;
    outC->_L65[idx6].location.nominal = kcg_lit_int32(0);
    outC->_L65[idx6].location.d_min = kcg_lit_int32(0);
    outC->_L65[idx6].location.d_max = kcg_lit_int32(0);
    outC->_L65[idx6].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.valid = kcg_true;
    outC->_L65[idx6].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L65[idx6].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L65[idx6].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L65[idx6].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L65[idx6].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L65[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L65[idx6].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.valid = kcg_true;
    outC->_L65[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L65[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L65[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L65[idx6].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L65[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L65[idx6].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L65[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L65[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L65[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L65[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L65[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L65[idx6].infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
    }
    outC->_L65[idx6].missed = kcg_true;
  }
  outC->_L66 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L68.valid = kcg_true;
  outC->_L68.nid_c = kcg_lit_int32(0);
  outC->_L68.nid_bg = kcg_lit_int32(0);
  outC->_L68.q_link = Q_LINK_Unlinked;
  outC->_L68.location.nominal = kcg_lit_int32(0);
  outC->_L68.location.d_min = kcg_lit_int32(0);
  outC->_L68.location.d_max = kcg_lit_int32(0);
  outC->_L68.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.valid = kcg_true;
  outC->_L68.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L68.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L68.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L68.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L68.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L68.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L68.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L68.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.valid = kcg_true;
  outC->_L68.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L68.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L68.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L68.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L68.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L68.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L68.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L68.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L68.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L68.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L68.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L68.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L68.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L68.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L68.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L68.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L68.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L68.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L68.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L68.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L68.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L68.missed = kcg_true;
  for (idx9 = 0; idx9 < 41; idx9++) {
    outC->_L59[idx9].valid = kcg_true;
    outC->_L59[idx9].nid_c = kcg_lit_int32(0);
    outC->_L59[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L59[idx9].q_link = Q_LINK_Unlinked;
    outC->_L59[idx9].location.nominal = kcg_lit_int32(0);
    outC->_L59[idx9].location.d_min = kcg_lit_int32(0);
    outC->_L59[idx9].location.d_max = kcg_lit_int32(0);
    outC->_L59[idx9].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.valid = kcg_true;
    outC->_L59[idx9].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L59[idx9].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L59[idx9].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L59[idx9].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L59[idx9].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L59[idx9].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L59[idx9].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.valid = kcg_true;
    outC->_L59[idx9].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L59[idx9].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L59[idx9].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L59[idx9].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L59[idx9].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L59[idx9].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L59[idx9].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L59[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L59[idx9].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L59[idx9].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L59[idx9].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx8 = 0; idx8 < 33; idx8++) {
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].valid = kcg_true;
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L59[idx9].infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
    }
    outC->_L59[idx9].missed = kcg_true;
  }
  outC->_L58 = kcg_true;
  outC->_L57.valid = kcg_true;
  outC->_L57.timestamp = kcg_lit_int32(0);
  outC->_L57.odo.o_nominal = kcg_lit_int32(0);
  outC->_L57.odo.o_min = kcg_lit_int32(0);
  outC->_L57.odo.o_max = kcg_lit_int32(0);
  outC->_L57.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L57.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L57.speed.v_lower = kcg_lit_int32(0);
  outC->_L57.speed.v_upper = kcg_lit_int32(0);
  outC->_L57.acceleration = kcg_lit_int32(0);
  outC->_L57.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L57.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.timestamp = kcg_lit_int32(0);
  outC->_L28.odo.o_nominal = kcg_lit_int32(0);
  outC->_L28.odo.o_min = kcg_lit_int32(0);
  outC->_L28.odo.o_max = kcg_lit_int32(0);
  outC->_L28.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L28.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L28.speed.v_lower = kcg_lit_int32(0);
  outC->_L28.speed.v_upper = kcg_lit_int32(0);
  outC->_L28.acceleration = kcg_lit_int32(0);
  outC->_L28.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L28.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13.o_nominal = kcg_lit_int32(0);
  outC->_L13.o_min = kcg_lit_int32(0);
  outC->_L13.o_max = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10.nominal = kcg_lit_int32(0);
  outC->_L10.d_min = kcg_lit_int32(0);
  outC->_L10.d_max = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.timestamp = kcg_lit_int32(0);
  outC->_L9.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L9.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L9.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L9.trainPositionDerivedFromLastLinkedBG.nominal = kcg_lit_int32(0);
  outC->_L9.trainPositionDerivedFromLastLinkedBG.d_min = kcg_lit_int32(0);
  outC->_L9.trainPositionDerivedFromLastLinkedBG.d_max = kcg_lit_int32(0);
  outC->_L9.trainPositionDerivedFromLastUnlinkedBG.nominal = kcg_lit_int32(0);
  outC->_L9.trainPositionDerivedFromLastUnlinkedBG.d_min = kcg_lit_int32(0);
  outC->_L9.trainPositionDerivedFromLastUnlinkedBG.d_max = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.valid = kcg_true;
  outC->_L9.prevPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L9.prevPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L9.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].q_dir =
      Q_DIR_Reverse;
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].d_link =
      kcg_lit_int32(0);
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].nid_c =
      kcg_lit_int32(0);
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].nid_bg =
      kcg_lit_int32(0);
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx10].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L9.prevPassedLinkedBG.missed = kcg_true;
  outC->_L9.lastPassedLinkedBG.valid = kcg_true;
  outC->_L9.lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L9.lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L9.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].q_dir =
      Q_DIR_Reverse;
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].d_link =
      kcg_lit_int32(0);
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].nid_c =
      kcg_lit_int32(0);
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].nid_bg =
      kcg_lit_int32(0);
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx11].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L9.lastPassedLinkedBG.missed = kcg_true;
  outC->_L9.lastPassedUnlinkedBG.valid = kcg_true;
  outC->_L9.lastPassedUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L9.lastPassedUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].valid =
      kcg_true;
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].d_link =
      kcg_lit_int32(0);
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].nid_c =
      kcg_lit_int32(0);
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].nid_bg =
      kcg_lit_int32(0);
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L9.lastPassedUnlinkedBG.missed = kcg_true;
  outC->_L9.speed = kcg_lit_int32(0);
  outC->_L9.linkingIsUsedOnboard = kcg_true;
  outC->_L8.nominal = kcg_lit_int32(0);
  outC->_L8.d_min = kcg_lit_int32(0);
  outC->_L8.d_max = kcg_lit_int32(0);
  outC->_L7.nominal = kcg_lit_int32(0);
  outC->_L7.d_min = kcg_lit_int32(0);
  outC->_L7.d_max = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = kcg_lit_int32(0);
  outC->_L1.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.odo.o_min = kcg_lit_int32(0);
  outC->_L1.odo.o_max = kcg_lit_int32(0);
  outC->_L1.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.acceleration = kcg_lit_int32(0);
  outC->_L1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.nid_c = kcg_lit_int32(0);
  outC->_L71.nid_bg = kcg_lit_int32(0);
  outC->_L71.q_link = Q_LINK_Unlinked;
  outC->_L71.location.nominal = kcg_lit_int32(0);
  outC->_L71.location.d_min = kcg_lit_int32(0);
  outC->_L71.location.d_max = kcg_lit_int32(0);
  outC->_L71.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.valid = kcg_true;
  outC->_L71.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L71.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L71.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L71.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L71.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L71.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L71.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L71.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L71.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L71.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L71.infoFromPassing.linkedBGs[idx13].nid_LRBG = kcg_lit_int32(0);
    outC->_L71.infoFromPassing.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
    outC->_L71.infoFromPassing.linkedBGs[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L71.infoFromPassing.linkedBGs[idx13].d_link = kcg_lit_int32(0);
    outC->_L71.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L71.infoFromPassing.linkedBGs[idx13].nid_c = kcg_lit_int32(0);
    outC->_L71.infoFromPassing.linkedBGs[idx13].nid_bg = kcg_lit_int32(0);
    outC->_L71.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L71.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.infoFromPassing.linkedBGs[idx13].q_locacc = kcg_lit_int32(0);
  }
  outC->_L71.missed = kcg_true;
  outC->_L70.valid = kcg_true;
  outC->_L70.nid_c = kcg_lit_int32(0);
  outC->_L70.nid_bg = kcg_lit_int32(0);
  outC->_L70.q_link = Q_LINK_Unlinked;
  outC->_L70.location.nominal = kcg_lit_int32(0);
  outC->_L70.location.d_min = kcg_lit_int32(0);
  outC->_L70.location.d_max = kcg_lit_int32(0);
  outC->_L70.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.valid = kcg_true;
  outC->_L70.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L70.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L70.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L70.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L70.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L70.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L70.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L70.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L70.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L70.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L70.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L70.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L70.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L70.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L70.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L70.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L70.infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int32(0);
    outC->_L70.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->_L70.infoFromPassing.linkedBGs[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L70.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int32(0);
    outC->_L70.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L70.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int32(0);
    outC->_L70.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int32(0);
    outC->_L70.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L70.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L70.infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int32(0);
  }
  outC->_L70.missed = kcg_true;
  outC->_L61.valid = kcg_true;
  outC->_L61.nid_c = kcg_lit_int32(0);
  outC->_L61.nid_bg = kcg_lit_int32(0);
  outC->_L61.q_link = Q_LINK_Unlinked;
  outC->_L61.location.nominal = kcg_lit_int32(0);
  outC->_L61.location.d_min = kcg_lit_int32(0);
  outC->_L61.location.d_max = kcg_lit_int32(0);
  outC->_L61.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.valid = kcg_true;
  outC->_L61.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L61.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L61.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L61.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L61.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L61.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L61.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L61.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L61.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L61.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L61.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L61.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L61.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L61.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L61.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L61.infoFromPassing.linkedBGs[idx15].valid = kcg_true;
    outC->_L61.infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int32(0);
    outC->_L61.infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
    outC->_L61.infoFromPassing.linkedBGs[idx15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L61.infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int32(0);
    outC->_L61.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L61.infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int32(0);
    outC->_L61.infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int32(0);
    outC->_L61.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L61.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L61.infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int32(0);
  }
  outC->_L61.missed = kcg_true;
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
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L62.infoFromPassing.linkedBGs[idx16].valid = kcg_true;
    outC->_L62.infoFromPassing.linkedBGs[idx16].nid_LRBG = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
    outC->_L62.infoFromPassing.linkedBGs[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int32(0);
    outC->_L62.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.infoFromPassing.linkedBGs[idx16].q_locacc = kcg_lit_int32(0);
  }
  outC->_L62.missed = kcg_true;
  outC->init = kcg_true;
  outC->positionCalculationNotConsistent = kcg_true;
  outC->trainPositionInfo.valid = kcg_true;
  outC->trainPositionInfo.timestamp = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPosition.nominal = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPosition.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPosition.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].valid =
      kcg_true;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].d_link =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].nid_c =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].nid_bg =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx17].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPositionInfo.prevPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].d_link =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].nid_c =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].nid_bg =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx18].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPositionInfo.lastPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.nominal = kcg_lit_int32(
      0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].d_link =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].nid_c =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].nid_bg =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx19].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPositionInfo.lastPassedUnlinkedBG.missed = kcg_true;
  outC->trainPositionInfo.speed = kcg_lit_int32(0);
  outC->trainPositionInfo.linkingIsUsedOnboard = kcg_true;
  /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#2)/ */
  positionDerivedFromPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionDerivedFromPassedBG_2);
  /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */
  positionDerivedFromPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionDerivedFromPassedBG_1);
  /* _L56=(CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed#1)/ */
  linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_linkingIsUsed_1);
  /* _L70=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#2)/ */
  lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_lastAndPrevBG_2);
  /* _L61=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#1)/ */
  lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_lastAndPrevBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#2)/ */
  positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionDerivedFromPassedBG_2);
  /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */
  positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionDerivedFromPassedBG_1);
  /* _L56=(CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed#1)/ */
  linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_linkingIsUsed_1);
  /* _L70=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#2)/ */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_lastAndPrevBG_2);
  /* _L61=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#1)/ */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_lastAndPrevBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

