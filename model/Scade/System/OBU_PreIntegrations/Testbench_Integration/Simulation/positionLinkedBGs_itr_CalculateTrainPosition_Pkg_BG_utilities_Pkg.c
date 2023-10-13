/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr/ */
void positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* sumOfPrevLinkingDistances/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* passedPositionedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* linkedBG/ */
  LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static infoFromLinking_T_TrainPosition_Types_Pck noname;
  static passedBG_T_BG_Types_Pkg _1_noname;
  static kcg_bool _2_noname;

  outC->_L150 = kcg_false;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, passedPositionedBG);
  outC->_L140 = outC->_L2.missed;
  _2_noname = outC->_L140;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L129, linkedBG);
  outC->_L130 = outC->_L129.nid_bg;
  outC->_L128 = outC->_L129.nid_c;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L3, linkedBG);
  outC->_L127 = outC->_L3.valid;
  outC->_L126 = outC->_L3.q_locacc;
  outC->_L125 = outC->_L3.d_link;
  outC->_L124 = outC->_L3.q_scale;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L1,
    sumOfPrevLinkingDistances);
  /* _L117=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#2)/ */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L124,
    outC->_L125,
    outC->_L126,
    &outC->Context_scaledDLINK_2_dlink_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L117,
    &outC->Context_scaledDLINK_2_dlink_2.distance);
  /* _L119=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L1,
    &outC->_L117,
    &outC->Context_add_2_Distances_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L119,
    &outC->Context_add_2_Distances_2.distance);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L121,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L122,
    &outC->_L121.centerDetectionAcc_DefaultValue);
  /* _L123=(BasicLocationFunctions_Pkg::add_2_Distances#4)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L119,
    &outC->_L122,
    &outC->Context_add_2_Distances_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L123,
    &outC->Context_add_2_Distances_4.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L15, &outC->_L2.location);
  /* _L120=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L15,
    &outC->_L123,
    &outC->Context_add_2_Distances_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L120,
    &outC->Context_add_2_Distances_3.distance);
  outC->_L114 = kcg_lit_int64(0);
  /* _L86=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L124,
    outC->_L125,
    outC->_L114,
    &outC->Context_scaledDLINK_2_dlink_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L86,
    &outC->Context_scaledDLINK_2_dlink_1.distance);
  /* _L87=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L1,
    &outC->_L86,
    &outC->Context_add_2_Distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L87,
    &outC->Context_add_2_Distances_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->sumOfLinkingDistances,
    &outC->_L87);
  outC->_L11 = outC->_L2.valid;
  outC->_L85 = outC->_L11 & outC->_L127;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L90, &outC->_L3);
  if (kcg_true) {
    outC->_L90.valid = outC->_L85;
  }
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L89,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L113, &outC->_L2.infoFromPassing);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_1_noname, &outC->_L113);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L17,
    &outC->_L2.infoFromLinking);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(&noname, &outC->_L17);
  outC->_L13 = outC->_L2.nid_bg;
  outC->_L12 = outC->_L2.nid_c;
  outC->_L84.valid = outC->_L85;
  outC->_L84.nid_bg_fromLinkingBG = outC->_L13;
  outC->_L84.nid_c_fromLinkingBG = outC->_L12;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L84.expectedLocation,
    &outC->_L120);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L84.d_link, &outC->_L86);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L84.linkingInfo, &outC->_L90);
  outC->_L14 = outC->_L2.q_link;
  outC->_L16 = outC->_L2.seqNoOnTrack;
  outC->_L32.valid = outC->_L85;
  outC->_L32.nid_c = outC->_L128;
  outC->_L32.nid_bg = outC->_L130;
  outC->_L32.q_link = outC->_L14;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L32.location, &outC->_L120);
  outC->_L32.seqNoOnTrack = outC->_L16;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L32.infoFromLinking,
    &outC->_L84);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L32.infoFromPassing, &outC->_L89);
  outC->_L32.missed = outC->_L150;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->linkedPositionedBG,
    &outC->_L32);
}

#ifndef KCG_USER_DEFINED_INIT
void positionLinkedBGs_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L150 = kcg_true;
  outC->_L140 = kcg_true;
  outC->_L130 = kcg_lit_int64(0);
  outC->_L129.valid = kcg_true;
  outC->_L129.nid_LRBG = kcg_lit_int64(0);
  outC->_L129.q_dir = Q_DIR_Reverse;
  outC->_L129.q_scale = Q_SCALE_10_cm_scale;
  outC->_L129.d_link = kcg_lit_int64(0);
  outC->_L129.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L129.nid_c = kcg_lit_int64(0);
  outC->_L129.nid_bg = kcg_lit_int64(0);
  outC->_L129.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L129.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L129.q_locacc = kcg_lit_int64(0);
  outC->_L128 = kcg_lit_int64(0);
  outC->_L127 = kcg_true;
  outC->_L126 = kcg_lit_int64(0);
  outC->_L125 = kcg_lit_int64(0);
  outC->_L124 = Q_SCALE_10_cm_scale;
  outC->_L123.nominal = kcg_lit_int64(0);
  outC->_L123.d_min = kcg_lit_int64(0);
  outC->_L123.d_max = kcg_lit_int64(0);
  outC->_L122.nominal = kcg_lit_int64(0);
  outC->_L122.d_min = kcg_lit_int64(0);
  outC->_L122.d_max = kcg_lit_int64(0);
  outC->_L121.nid_engine = kcg_lit_int64(0);
  outC->_L121.nid_operational = kcg_lit_int64(0);
  outC->_L121.l_train = kcg_lit_int64(0);
  outC->_L121.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L121.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L121.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L121.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L121.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L121.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L121.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L121.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L121.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L121.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L121.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L121.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L120.nominal = kcg_lit_int64(0);
  outC->_L120.d_min = kcg_lit_int64(0);
  outC->_L120.d_max = kcg_lit_int64(0);
  outC->_L119.nominal = kcg_lit_int64(0);
  outC->_L119.d_min = kcg_lit_int64(0);
  outC->_L119.d_max = kcg_lit_int64(0);
  outC->_L117.nominal = kcg_lit_int64(0);
  outC->_L117.d_min = kcg_lit_int64(0);
  outC->_L117.d_max = kcg_lit_int64(0);
  outC->_L114 = kcg_lit_int64(0);
  outC->_L113.valid = kcg_true;
  outC->_L113.BG_Header.valid = kcg_true;
  outC->_L113.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L113.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L113.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L113.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L113.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L113.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L113.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L113.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L113.BG_Header.bgPosition.valid = kcg_true;
  outC->_L113.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L113.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L113.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L113.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L113.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L113.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L113.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L113.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L113.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L113.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L113.linkedBGs[idx].valid = kcg_true;
    outC->_L113.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L113.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L113.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L113.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L113.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L113.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L113.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L113.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L113.linkedBGs[idx].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L113.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L90.valid = kcg_true;
  outC->_L90.nid_LRBG = kcg_lit_int64(0);
  outC->_L90.q_dir = Q_DIR_Reverse;
  outC->_L90.q_scale = Q_SCALE_10_cm_scale;
  outC->_L90.d_link = kcg_lit_int64(0);
  outC->_L90.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L90.nid_c = kcg_lit_int64(0);
  outC->_L90.nid_bg = kcg_lit_int64(0);
  outC->_L90.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L90.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L90.q_locacc = kcg_lit_int64(0);
  outC->_L89.valid = kcg_true;
  outC->_L89.BG_Header.valid = kcg_true;
  outC->_L89.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L89.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L89.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L89.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L89.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L89.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L89.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L89.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L89.BG_Header.bgPosition.valid = kcg_true;
  outC->_L89.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L89.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L89.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L89.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L89.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L89.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L89.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L89.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L89.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L89.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L89.linkedBGs[idx1].valid = kcg_true;
    outC->_L89.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L89.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L89.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L89.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L89.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L89.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L89.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L89.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L89.linkedBGs[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L89.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L87.nominal = kcg_lit_int64(0);
  outC->_L87.d_min = kcg_lit_int64(0);
  outC->_L87.d_max = kcg_lit_int64(0);
  outC->_L86.nominal = kcg_lit_int64(0);
  outC->_L86.d_min = kcg_lit_int64(0);
  outC->_L86.d_max = kcg_lit_int64(0);
  outC->_L85 = kcg_true;
  outC->_L84.valid = kcg_true;
  outC->_L84.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L84.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L84.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L84.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L84.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L84.d_link.nominal = kcg_lit_int64(0);
  outC->_L84.d_link.d_min = kcg_lit_int64(0);
  outC->_L84.d_link.d_max = kcg_lit_int64(0);
  outC->_L84.linkingInfo.valid = kcg_true;
  outC->_L84.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L84.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L84.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L84.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L84.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L84.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L84.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L84.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L84.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L84.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L32.valid = kcg_true;
  outC->_L32.nid_c = kcg_lit_int64(0);
  outC->_L32.nid_bg = kcg_lit_int64(0);
  outC->_L32.q_link = Q_LINK_Unlinked;
  outC->_L32.location.nominal = kcg_lit_int64(0);
  outC->_L32.location.d_min = kcg_lit_int64(0);
  outC->_L32.location.d_max = kcg_lit_int64(0);
  outC->_L32.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.valid = kcg_true;
  outC->_L32.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L32.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L32.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L32.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L32.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L32.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L32.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.valid = kcg_true;
  outC->_L32.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L32.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L32.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L32.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L32.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L32.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L32.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L32.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L32.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L32.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L32.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L32.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L32.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L32.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L32.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L32.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L32.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L32.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L32.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L32.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L32.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L32.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L32.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L32.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L32.missed = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = Q_LINK_Unlinked;
  outC->_L15.nominal = kcg_lit_int64(0);
  outC->_L15.d_min = kcg_lit_int64(0);
  outC->_L15.d_max = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L17.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L17.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L17.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L17.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L17.d_link.nominal = kcg_lit_int64(0);
  outC->_L17.d_link.d_min = kcg_lit_int64(0);
  outC->_L17.d_link.d_max = kcg_lit_int64(0);
  outC->_L17.linkingInfo.valid = kcg_true;
  outC->_L17.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L17.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L17.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L17.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L17.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L17.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L17.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L17.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L17.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_LRBG = kcg_lit_int64(0);
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.d_link = kcg_lit_int64(0);
  outC->_L3.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.nid_c = kcg_lit_int64(0);
  outC->_L3.nid_bg = kcg_lit_int64(0);
  outC->_L3.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L3.q_locacc = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_c = kcg_lit_int64(0);
  outC->_L2.nid_bg = kcg_lit_int64(0);
  outC->_L2.q_link = Q_LINK_Unlinked;
  outC->_L2.location.nominal = kcg_lit_int64(0);
  outC->_L2.location.d_min = kcg_lit_int64(0);
  outC->_L2.location.d_max = kcg_lit_int64(0);
  outC->_L2.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.valid = kcg_true;
  outC->_L2.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L2.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L2.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L2.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.missed = kcg_true;
  outC->_L1.nominal = kcg_lit_int64(0);
  outC->_L1.d_min = kcg_lit_int64(0);
  outC->_L1.d_max = kcg_lit_int64(0);
  outC->linkedPositionedBG.valid = kcg_true;
  outC->linkedPositionedBG.nid_c = kcg_lit_int64(0);
  outC->linkedPositionedBG.nid_bg = kcg_lit_int64(0);
  outC->linkedPositionedBG.q_link = Q_LINK_Unlinked;
  outC->linkedPositionedBG.location.nominal = kcg_lit_int64(0);
  outC->linkedPositionedBG.location.d_min = kcg_lit_int64(0);
  outC->linkedPositionedBG.location.d_max = kcg_lit_int64(0);
  outC->linkedPositionedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.valid = kcg_true;
  outC->linkedPositionedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->linkedPositionedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->linkedPositionedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->linkedPositionedBG.infoFromPassing.valid = kcg_true;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->linkedPositionedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->linkedPositionedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].nid_LRBG =
      kcg_lit_int64(0);
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].d_link =
      kcg_lit_int64(0);
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].nid_c =
      kcg_lit_int64(0);
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].nid_bg =
      kcg_lit_int64(0);
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->linkedPositionedBG.infoFromPassing.linkedBGs[idx4].q_locacc =
      kcg_lit_int64(0);
  }
  outC->linkedPositionedBG.missed = kcg_true;
  outC->sumOfLinkingDistances.nominal = kcg_lit_int64(0);
  outC->sumOfLinkingDistances.d_min = kcg_lit_int64(0);
  outC->sumOfLinkingDistances.d_max = kcg_lit_int64(0);
  /* _L87=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
  /* _L86=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */
  scaledDLINK_2_dlink_init_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_1);
  /* _L120=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_3);
  /* _L123=(BasicLocationFunctions_Pkg::add_2_Distances#4)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_4);
  /* _L119=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_2);
  /* _L117=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#2)/ */
  scaledDLINK_2_dlink_init_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void positionLinkedBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* _L87=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
  /* _L86=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_1);
  /* _L120=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_3);
  /* _L123=(BasicLocationFunctions_Pkg::add_2_Distances#4)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_4);
  /* _L119=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_2);
  /* _L117=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#2)/ */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

