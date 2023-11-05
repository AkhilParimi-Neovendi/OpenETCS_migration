/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies/ */
void calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L27, &outC->_L1.infoFromPassing);
  outC->_L29 = outC->_L27.valid;
  outC->_L28 = outC->_L27.BG_Header.q_nvlocacc;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L25,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L26,
    &outC->_L25.centerDetectionAcc_DefaultValue);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L19, &outC->_L1.infoFromPassing);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L21,
    &outC->_L19.BG_Header.BG_centerDetectionInaccuraccuracies);
  outC->_L20 = outC->_L19.valid;
  /* _L24= */
  if (outC->_L20) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L24, &outC->_L21);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L24, &outC->_L26);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L2, trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L15,
    &outC->_L2.locationAccuracy_DefaultValue);
  outC->_L14 = Q_SCALE_1_m_scale;
  outC->_L13 = kcg_lit_int32(0);
  /* _L12=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#4)/ */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L14,
    outC->_L13,
    outC->_L28,
    &outC->Context_scaledDLINK_2_dlink_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L12,
    &outC->Context_scaledDLINK_2_dlink_4.distance);
  /* _L16= */
  if (outC->_L29) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, &outC->_L12);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, &outC->_L15);
  }
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L3,
    &outC->_L1.infoFromLinking);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L6, &outC->_L3.linkingInfo);
  outC->_L5 = outC->_L6.q_scale;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = outC->_L6.q_locacc;
  /* _L9=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#3)/ */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L5,
    outC->_L8,
    outC->_L7,
    &outC->Context_scaledDLINK_2_dlink_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9,
    &outC->Context_scaledDLINK_2_dlink_3.distance);
  outC->_L4 = outC->_L3.valid;
  /* _L10= */
  if (outC->_L4) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L10, &outC->_L9);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L10, &outC->_L16);
  }
  /* _L23=(BasicLocationFunctions_Pkg::add_2_Distances#5)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L24,
    &outC->_L10,
    &outC->Context_add_2_Distances_5);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L23,
    &outC->Context_add_2_Distances_5.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->localInaccuracies,
    &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void calculateLocalBGInaccuracies_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L29 = kcg_true;
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27.valid = kcg_true;
  outC->_L27.BG_Header.valid = kcg_true;
  outC->_L27.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L27.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L27.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L27.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L27.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L27.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L27.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L27.BG_Header.bgPosition.valid = kcg_true;
  outC->_L27.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L27.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L27.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L27.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L27.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L27.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L27.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L27.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L27.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L27.linkedBGs[idx].valid = kcg_true;
    outC->_L27.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L27.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L27.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L27.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L27.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L27.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L27.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L27.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L27.linkedBGs[idx].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L27.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L26.nominal = kcg_lit_int32(0);
  outC->_L26.d_min = kcg_lit_int32(0);
  outC->_L26.d_max = kcg_lit_int32(0);
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
  outC->_L24.nominal = kcg_lit_int32(0);
  outC->_L24.d_min = kcg_lit_int32(0);
  outC->_L24.d_max = kcg_lit_int32(0);
  outC->_L23.nominal = kcg_lit_int32(0);
  outC->_L23.d_min = kcg_lit_int32(0);
  outC->_L23.d_max = kcg_lit_int32(0);
  outC->_L21.nominal = kcg_lit_int32(0);
  outC->_L21.d_min = kcg_lit_int32(0);
  outC->_L21.d_max = kcg_lit_int32(0);
  outC->_L20 = kcg_true;
  outC->_L19.valid = kcg_true;
  outC->_L19.BG_Header.valid = kcg_true;
  outC->_L19.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L19.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L19.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L19.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L19.linkedBGs[idx1].valid = kcg_true;
    outC->_L19.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L19.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L19.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L19.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L19.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.linkedBGs[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L19.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L16.nominal = kcg_lit_int32(0);
  outC->_L16.d_min = kcg_lit_int32(0);
  outC->_L16.d_max = kcg_lit_int32(0);
  outC->_L15.nominal = kcg_lit_int32(0);
  outC->_L15.d_min = kcg_lit_int32(0);
  outC->_L15.d_max = kcg_lit_int32(0);
  outC->_L14 = Q_SCALE_10_cm_scale;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12.nominal = kcg_lit_int32(0);
  outC->_L12.d_min = kcg_lit_int32(0);
  outC->_L12.d_max = kcg_lit_int32(0);
  outC->_L10.nominal = kcg_lit_int32(0);
  outC->_L10.d_min = kcg_lit_int32(0);
  outC->_L10.d_max = kcg_lit_int32(0);
  outC->_L9.nominal = kcg_lit_int32(0);
  outC->_L9.d_min = kcg_lit_int32(0);
  outC->_L9.d_max = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_LRBG = kcg_lit_int32(0);
  outC->_L6.q_dir = Q_DIR_Reverse;
  outC->_L6.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.d_link = kcg_lit_int32(0);
  outC->_L6.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6.nid_c = kcg_lit_int32(0);
  outC->_L6.nid_bg = kcg_lit_int32(0);
  outC->_L6.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L6.q_locacc = kcg_lit_int32(0);
  outC->_L5 = Q_SCALE_10_cm_scale;
  outC->_L4 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L3.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L3.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L3.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.linkingInfo.valid = kcg_true;
  outC->_L3.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L3.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_bg = kcg_lit_int32(0);
  outC->_L1.q_link = Q_LINK_Unlinked;
  outC->_L1.location.nominal = kcg_lit_int32(0);
  outC->_L1.location.d_min = kcg_lit_int32(0);
  outC->_L1.location.d_max = kcg_lit_int32(0);
  outC->_L1.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.valid = kcg_true;
  outC->_L1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L1.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.missed = kcg_true;
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L2.nid_operational = kcg_lit_int32(0);
  outC->_L2.l_train = kcg_lit_int32(0);
  outC->_L2.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L2.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L2.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L2.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L2.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L2.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L2.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L2.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L2.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L2.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L2.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L2.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->localInaccuracies.nominal = kcg_lit_int32(0);
  outC->localInaccuracies.d_min = kcg_lit_int32(0);
  outC->localInaccuracies.d_max = kcg_lit_int32(0);
  /* _L23=(BasicLocationFunctions_Pkg::add_2_Distances#5)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_5);
  /* _L9=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#3)/ */
  scaledDLINK_2_dlink_init_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_3);
  /* _L12=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#4)/ */
  scaledDLINK_2_dlink_init_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateLocalBGInaccuracies_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* _L23=(BasicLocationFunctions_Pkg::add_2_Distances#5)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_5);
  /* _L9=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#3)/ */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_3);
  /* _L12=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#4)/ */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

