/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation/ */
void improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* passedLinkedBG_2/ */
  positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_2,
  /* passedLinkedBG_1/ */
  positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_1,
  /* unlinkedBG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L28, unlinkedBG_in);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L52,
    &outC->_L28.infoFromPassing.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L24, passedLinkedBG_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L51,
    &outC->_L24.infoFromPassing.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L20, passedLinkedBG_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L48,
    &outC->_L20.infoFromPassing.BG_Header.bgPosition.odo);
  outC->_L12 = Q_LINK_Unlinked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L9, unlinkedBG_in);
  outC->_L11 = outC->_L9.q_link;
  outC->_L13 = outC->_L11 == outC->_L12;
  outC->_L10 = outC->_L9.valid;
  outC->_L47 = outC->_L10 & outC->_L13;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, passedLinkedBG_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, passedLinkedBG_2);
  outC->_L45 = !kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L1,
      &outC->_L7);
  outC->_L38 = outC->_L7.infoFromPassing.valid;
  outC->_L41 = Q_LINK_Linked;
  outC->_L39 = outC->_L7.q_link;
  outC->_L40 = outC->_L39 == outC->_L41;
  outC->_L8 = outC->_L7.valid;
  outC->_L44 = outC->_L8 & outC->_L40 & outC->_L38;
  outC->_L37 = outC->_L1.infoFromPassing.valid;
  outC->_L4 = Q_LINK_Linked;
  outC->_L3 = outC->_L1.q_link;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L2 = outC->_L1.valid;
  outC->_L43 = outC->_L2 & outC->_L5 & outC->_L37;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L32, &outC->_L28.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L21, &outC->_L20.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L23, &outC->_L24.location);
  /* _L19=(BasicLocationFunctions_Pkg::odoLoc_2_refLocations#1)/ */
  odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
    &outC->_L21,
    &outC->_L23,
    &outC->_L48,
    &outC->_L51,
    &outC->_L52,
    &outC->Context_odoLoc_2_refLocations_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L19,
    &outC->Context_odoLoc_2_refLocations_1.location);
  /* _L30=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L19,
    &outC->_L32,
    &outC->Context_overlapOf_2_Locations_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L30,
    &outC->Context_overlapOf_2_Locations_1.loc);
  outC->_L31 = outC->Context_overlapOf_2_Locations_1.overlap;
  outC->_L14 = outC->_L43 & outC->_L45 & outC->_L44 & outC->_L47 & outC->_L31;
  /* _L34= */
  if (outC->_L14) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L34, &outC->_L30);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L34, &outC->_L32);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L36, unlinkedBG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L35, &outC->_L36);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L35.location, &outC->_L34);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->unlinkedBG_out,
    &outC->_L35);
}

#ifndef KCG_USER_DEFINED_INIT
void improveUnlinkedBGLocation_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
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

  outC->_L52.o_nominal = kcg_lit_int64(0);
  outC->_L52.o_min = kcg_lit_int64(0);
  outC->_L52.o_max = kcg_lit_int64(0);
  outC->_L51.o_nominal = kcg_lit_int64(0);
  outC->_L51.o_min = kcg_lit_int64(0);
  outC->_L51.o_max = kcg_lit_int64(0);
  outC->_L48.o_nominal = kcg_lit_int64(0);
  outC->_L48.o_min = kcg_lit_int64(0);
  outC->_L48.o_max = kcg_lit_int64(0);
  outC->_L47 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L39 = Q_LINK_Unlinked;
  outC->_L40 = kcg_true;
  outC->_L41 = Q_LINK_Unlinked;
  outC->_L37 = kcg_true;
  outC->_L36.valid = kcg_true;
  outC->_L36.nid_c = kcg_lit_int64(0);
  outC->_L36.nid_bg = kcg_lit_int64(0);
  outC->_L36.q_link = Q_LINK_Unlinked;
  outC->_L36.location.nominal = kcg_lit_int64(0);
  outC->_L36.location.d_min = kcg_lit_int64(0);
  outC->_L36.location.d_max = kcg_lit_int64(0);
  outC->_L36.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.valid = kcg_true;
  outC->_L36.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L36.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L36.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L36.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L36.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L36.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L36.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.valid = kcg_true;
  outC->_L36.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L36.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L36.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L36.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L36.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L36.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L36.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L36.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L36.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L36.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L36.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L36.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L36.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L36.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L36.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L36.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L36.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L36.missed = kcg_true;
  outC->_L35.valid = kcg_true;
  outC->_L35.nid_c = kcg_lit_int64(0);
  outC->_L35.nid_bg = kcg_lit_int64(0);
  outC->_L35.q_link = Q_LINK_Unlinked;
  outC->_L35.location.nominal = kcg_lit_int64(0);
  outC->_L35.location.d_min = kcg_lit_int64(0);
  outC->_L35.location.d_max = kcg_lit_int64(0);
  outC->_L35.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.valid = kcg_true;
  outC->_L35.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L35.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L35.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L35.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L35.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L35.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L35.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.valid = kcg_true;
  outC->_L35.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L35.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L35.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L35.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L35.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L35.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L35.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L35.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L35.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L35.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L35.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L35.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L35.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L35.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L35.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L35.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L35.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L35.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L35.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L35.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L35.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L35.missed = kcg_true;
  outC->_L34.nominal = kcg_lit_int64(0);
  outC->_L34.d_min = kcg_lit_int64(0);
  outC->_L34.d_max = kcg_lit_int64(0);
  outC->_L32.nominal = kcg_lit_int64(0);
  outC->_L32.d_min = kcg_lit_int64(0);
  outC->_L32.d_max = kcg_lit_int64(0);
  outC->_L30.nominal = kcg_lit_int64(0);
  outC->_L30.d_min = kcg_lit_int64(0);
  outC->_L30.d_max = kcg_lit_int64(0);
  outC->_L31 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.nid_c = kcg_lit_int64(0);
  outC->_L28.nid_bg = kcg_lit_int64(0);
  outC->_L28.q_link = Q_LINK_Unlinked;
  outC->_L28.location.nominal = kcg_lit_int64(0);
  outC->_L28.location.d_min = kcg_lit_int64(0);
  outC->_L28.location.d_max = kcg_lit_int64(0);
  outC->_L28.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.valid = kcg_true;
  outC->_L28.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L28.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L28.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L28.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L28.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L28.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L28.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L28.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L28.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L28.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L28.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L28.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L28.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L28.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L28.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L28.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L28.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L28.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L28.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L28.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L28.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L28.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L28.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L28.missed = kcg_true;
  outC->_L24.valid = kcg_true;
  outC->_L24.nid_c = kcg_lit_int64(0);
  outC->_L24.nid_bg = kcg_lit_int64(0);
  outC->_L24.q_link = Q_LINK_Unlinked;
  outC->_L24.location.nominal = kcg_lit_int64(0);
  outC->_L24.location.d_min = kcg_lit_int64(0);
  outC->_L24.location.d_max = kcg_lit_int64(0);
  outC->_L24.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.valid = kcg_true;
  outC->_L24.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L24.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L24.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L24.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L24.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L24.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L24.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L24.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L24.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L24.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L24.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L24.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L24.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L24.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L24.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L24.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L24.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L24.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L24.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L24.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L24.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L24.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L24.missed = kcg_true;
  outC->_L23.nominal = kcg_lit_int64(0);
  outC->_L23.d_min = kcg_lit_int64(0);
  outC->_L23.d_max = kcg_lit_int64(0);
  outC->_L21.nominal = kcg_lit_int64(0);
  outC->_L21.d_min = kcg_lit_int64(0);
  outC->_L21.d_max = kcg_lit_int64(0);
  outC->_L20.valid = kcg_true;
  outC->_L20.nid_c = kcg_lit_int64(0);
  outC->_L20.nid_bg = kcg_lit_int64(0);
  outC->_L20.q_link = Q_LINK_Unlinked;
  outC->_L20.location.nominal = kcg_lit_int64(0);
  outC->_L20.location.d_min = kcg_lit_int64(0);
  outC->_L20.location.d_max = kcg_lit_int64(0);
  outC->_L20.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.valid = kcg_true;
  outC->_L20.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L20.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L20.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L20.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L20.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L20.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L20.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L20.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.valid = kcg_true;
  outC->_L20.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L20.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L20.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L20.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L20.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L20.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L20.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L20.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L20.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L20.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L20.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L20.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
    outC->_L20.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L20.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L20.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
    outC->_L20.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L20.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
    outC->_L20.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L20.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L20.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L20.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
  }
  outC->_L20.missed = kcg_true;
  outC->_L19.nominal = kcg_lit_int64(0);
  outC->_L19.d_min = kcg_lit_int64(0);
  outC->_L19.d_max = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = Q_LINK_Unlinked;
  outC->_L11 = Q_LINK_Unlinked;
  outC->_L10 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.nid_c = kcg_lit_int64(0);
  outC->_L9.nid_bg = kcg_lit_int64(0);
  outC->_L9.q_link = Q_LINK_Unlinked;
  outC->_L9.location.nominal = kcg_lit_int64(0);
  outC->_L9.location.d_min = kcg_lit_int64(0);
  outC->_L9.location.d_max = kcg_lit_int64(0);
  outC->_L9.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.valid = kcg_true;
  outC->_L9.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L9.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L9.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L9.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L9.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L9.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L9.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
  }
  outC->_L9.missed = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_c = kcg_lit_int64(0);
  outC->_L7.nid_bg = kcg_lit_int64(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L7.location.nominal = kcg_lit_int64(0);
  outC->_L7.location.d_min = kcg_lit_int64(0);
  outC->_L7.location.d_max = kcg_lit_int64(0);
  outC->_L7.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.valid = kcg_true;
  outC->_L7.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L7.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L7.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L7.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L7.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.missed = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = Q_LINK_Unlinked;
  outC->_L3 = Q_LINK_Unlinked;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_c = kcg_lit_int64(0);
  outC->_L1.nid_bg = kcg_lit_int64(0);
  outC->_L1.q_link = Q_LINK_Unlinked;
  outC->_L1.location.nominal = kcg_lit_int64(0);
  outC->_L1.location.d_min = kcg_lit_int64(0);
  outC->_L1.location.d_max = kcg_lit_int64(0);
  outC->_L1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.valid = kcg_true;
  outC->_L1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L1.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1.missed = kcg_true;
  outC->unlinkedBG_out.valid = kcg_true;
  outC->unlinkedBG_out.nid_c = kcg_lit_int64(0);
  outC->unlinkedBG_out.nid_bg = kcg_lit_int64(0);
  outC->unlinkedBG_out.q_link = Q_LINK_Unlinked;
  outC->unlinkedBG_out.location.nominal = kcg_lit_int64(0);
  outC->unlinkedBG_out.location.d_min = kcg_lit_int64(0);
  outC->unlinkedBG_out.location.d_max = kcg_lit_int64(0);
  outC->unlinkedBG_out.seqNoOnTrack = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.valid = kcg_true;
  outC->unlinkedBG_out.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(
      0);
  outC->unlinkedBG_out.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->unlinkedBG_out.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.valid = kcg_true;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.valid = kcg_true;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->unlinkedBG_out.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->unlinkedBG_out.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].nid_LRBG =
      kcg_lit_int64(0);
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].q_scale =
      Q_SCALE_10_cm_scale;
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int64(0);
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int64(0);
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int64(0);
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->unlinkedBG_out.infoFromPassing.linkedBGs[idx8].q_locacc =
      kcg_lit_int64(0);
  }
  outC->unlinkedBG_out.missed = kcg_true;
  /* _L30=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L19=(BasicLocationFunctions_Pkg::odoLoc_2_refLocations#1)/ */
  odoLoc_2_refLocations_init_BasicLocationFunctions_Pkg(
    &outC->Context_odoLoc_2_refLocations_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void improveUnlinkedBGLocation_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* _L30=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L19=(BasicLocationFunctions_Pkg::odoLoc_2_refLocations#1)/ */
  odoLoc_2_refLocations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_odoLoc_2_refLocations_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

