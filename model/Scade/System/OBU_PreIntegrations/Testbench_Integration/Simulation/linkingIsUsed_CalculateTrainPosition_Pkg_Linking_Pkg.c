/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed/ */
void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* recalculateBGs/ */
  kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  static kcg_bool tmp;
  static kcg_int32 tmp1;
  static kcg_int32 tmp2;
  static kcg_bool tmp3;
  static kcg_bool tmp4;
  static kcg_bool tmp5;
  static kcg_bool op_call;
  static kcg_bool _6_op_call;
  static kcg_int32 _7_op_call;
  static kcg_bool _8_op_call;
  static kcg_bool _9_op_call;
  static kcg_int32 _10_op_call;
  static kcg_bool noname;
  static kcg_bool _11_noname;

  outC->_L3 = recalculateBGs;
  outC->every1 = outC->_L3;
  outC->_L18 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs);
  if (outC->every1) {
    /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */
    indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L18,
      &outC->_L2,
      outC->_L3,
      &outC->Context_indexOfLastPassedBG_1);
    _7_op_call = outC->Context_indexOfLastPassedBG_1.indexOfBG;
    _6_op_call = outC->Context_indexOfLastPassedBG_1.BG_found;
    op_call = outC->Context_indexOfLastPassedBG_1.indexValid;
  }
  outC->every = outC->_L3;
  outC->_L19 = kcg_true;
  if (outC->every) {
    /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG#1)/ */
    indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L19,
      &outC->_L2,
      outC->_L3,
      &outC->Context_indexOfLastBG_1);
    _10_op_call = outC->Context_indexOfLastBG_1.indexOfBG;
    _9_op_call = outC->Context_indexOfLastBG_1.BG_found;
    _8_op_call = outC->Context_indexOfLastBG_1.indexValid;
  }
  outC->_L24 = kcg_false;
  if (outC->every) {
    outC->_L10 = _9_op_call;
  }
  else {
    /* _L9= */
    if (outC->init) {
      tmp = outC->_L24;
    }
    else {
      tmp = outC->_L10;
    }
    outC->_L10 = tmp;
  }
  outC->_L23 = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (outC->every) {
    outC->_L9 = _10_op_call;
  }
  else {
    /* _L9= */
    if (outC->init) {
      tmp1 = outC->_L23;
    }
    else {
      tmp1 = outC->_L9;
    }
    outC->_L9 = tmp1;
  }
  outC->_L21 = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (outC->every1) {
    outC->_L6 = _7_op_call;
  }
  else {
    /* _L6= */
    if (outC->init) {
      tmp2 = outC->_L21;
    }
    else {
      tmp2 = outC->_L6;
    }
    outC->_L6 = tmp2;
  }
  outC->_L27 = outC->_L6 < outC->_L9;
  outC->_L22 = kcg_false;
  if (outC->every1) {
    outC->_L7 = _6_op_call;
  }
  else {
    /* _L6= */
    if (outC->init) {
      tmp3 = outC->_L22;
    }
    else {
      tmp3 = outC->_L7;
    }
    outC->_L7 = tmp3;
  }
  outC->_L26 = outC->_L7 & outC->_L27 & outC->_L10;
  if ((kcg_lit_int32(0) <= outC->_L9) & (outC->_L9 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastLinkedBG,
      &outC->_L2[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L30,
    &outC->lastLinkedBG.location);
  outC->_L40 = outC->_L30.d_max;
  outC->_L38 = outC->_L30.nominal;
  outC->_L39 = outC->_L38 + outC->_L40;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1, currentOdometry);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L29, &outC->_L1.odo);
  if ((kcg_lit_int32(0) <= outC->_L6) & (outC->_L6 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastPassedLinkedBG,
      &outC->_L2[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastPassedLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* _L28=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L29,
    &outC->lastPassedLinkedBG,
    &outC->Context_positionDerivedFromPassedBG_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L28,
    &outC->Context_positionDerivedFromPassedBG_1.position);
  outC->_L34 = outC->_L28.d_min;
  outC->_L33 = outC->_L28.nominal;
  outC->_L37 = outC->_L33 + outC->_L34;
  outC->_L41 = outC->_L37 > outC->_L39;
  outC->_L46 = !outC->_L41;
  outC->_L47 = outC->_L46 & outC->_L26;
  if (outC->every) {
    outC->_L11 = _8_op_call;
  }
  else {
    /* _L9= */
    if (outC->init) {
      tmp4 = outC->_L24;
    }
    else {
      tmp4 = outC->_L11;
    }
    outC->_L11 = tmp4;
  }
  _11_noname = outC->_L11;
  if (outC->every1) {
    outC->_L8 = op_call;
  }
  else {
    /* _L6= */
    if (outC->init) {
      tmp5 = outC->_L22;
    }
    else {
      tmp5 = outC->_L8;
    }
    outC->_L8 = tmp5;
  }
  noname = outC->_L8;
  outC->linkingIsUsed = outC->_L47;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L38 = kcg_lit_int32(0);
  outC->_L39 = kcg_lit_int32(0);
  outC->_L40 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L30.nominal = kcg_lit_int32(0);
  outC->_L30.d_min = kcg_lit_int32(0);
  outC->_L30.d_max = kcg_lit_int32(0);
  outC->_L29.o_nominal = kcg_lit_int32(0);
  outC->_L29.o_min = kcg_lit_int32(0);
  outC->_L29.o_max = kcg_lit_int32(0);
  outC->_L28.nominal = kcg_lit_int32(0);
  outC->_L28.d_min = kcg_lit_int32(0);
  outC->_L28.d_max = kcg_lit_int32(0);
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L3 = kcg_true;
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L2[idx1].valid = kcg_true;
    outC->_L2[idx1].nid_c = kcg_lit_int32(0);
    outC->_L2[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L2[idx1].q_link = Q_LINK_Unlinked;
    outC->_L2[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L2[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L2[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L2[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.valid = kcg_true;
    outC->_L2[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L2[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L2[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.valid = kcg_true;
    outC->_L2[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L2[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L2[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L2[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L2[idx1].missed = kcg_true;
  }
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
  outC->lastPassedLinkedBG.valid = kcg_true;
  outC->lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int32(0);
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int32(0);
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int32(0);
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int32(0);
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lastPassedLinkedBG.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int32(0);
  }
  outC->lastPassedLinkedBG.missed = kcg_true;
  outC->lastLinkedBG.valid = kcg_true;
  outC->lastLinkedBG.nid_c = kcg_lit_int32(0);
  outC->lastLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->lastLinkedBG.q_link = Q_LINK_Unlinked;
  outC->lastLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->lastLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->lastLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->lastLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.valid = kcg_true;
  outC->lastLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lastLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lastLinkedBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->lastLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->lastLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->lastLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lastLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.valid = kcg_true;
  outC->lastLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lastLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->lastLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lastLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lastLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->lastLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lastLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->lastLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->lastLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->lastLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->lastLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lastLinkedBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->lastLinkedBG.missed = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->init = kcg_true;
  outC->linkingIsUsed = kcg_true;
  /* _L28=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */
  positionDerivedFromPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionDerivedFromPassedBG_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG#1)/ */
  indexOfLastBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfLastBG_1);
  /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */
  indexOfLastPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfLastPassedBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L28=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */
  positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionDerivedFromPassedBG_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG#1)/ */
  indexOfLastBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfLastBG_1);
  /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */
  indexOfLastPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfLastPassedBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *SV,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  SV->Context__L9 = outC->_L9;
  SV->Context__L10 = outC->_L10;
  SV->Context__L11 = outC->_L11;
  SV->Context__L6 = outC->_L6;
  SV->Context__L7 = outC->_L7;
  SV->Context__L8 = outC->_L8;
  SV->Context_init = outC->init;
}

void kcg_load_SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC,
  SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *SV)
{
  outC->_L9 = SV->Context__L9;
  outC->_L10 = SV->Context__L10;
  outC->_L11 = SV->Context__L11;
  outC->_L6 = SV->Context__L6;
  outC->_L7 = SV->Context__L7;
  outC->_L8 = SV->Context__L8;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

