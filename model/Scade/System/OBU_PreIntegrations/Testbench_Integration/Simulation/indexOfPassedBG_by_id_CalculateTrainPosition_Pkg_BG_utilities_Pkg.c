/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id/ */
void indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  passedBG_T_BG_Types_Pkg *BG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L91 = kcg_false;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L6, BG);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L88, &outC->_L6.BG_Header);
  outC->_L89 = outC->_L88.valid;
  outC->_L87 = outC->_L6.valid;
  outC->_L90 = outC->_L87 & outC->_L89;
  outC->_L86 = kcg_lit_int32(0);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L25,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  outC->_L23 = outC->_L88.q_link;
  outC->_L22 = outC->_L88.nid_bg;
  outC->_L21 = outC->_L88.nid_c;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  outC->_L19.valid = outC->_L90;
  outC->_L19.nid_c = outC->_L21;
  outC->_L19.nid_bg = outC->_L22;
  outC->_L19.q_link = outC->_L23;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L19.location, &outC->_L20);
  outC->_L19.seqNoOnTrack = outC->_L86;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L19.infoFromLinking,
    &outC->_L25);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L19.infoFromPassing, &outC->_L6);
  outC->_L19.missed = outC->_L91;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, BGs);
  outC->_L4 = enable;
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L19,
    &outC->_L5,
    outC->_L4,
    &outC->Context_indexOfBG_by_id_1);
  outC->_L1 = outC->Context_indexOfBG_by_id_1.indexOfBG;
  outC->_L2 = outC->Context_indexOfBG_by_id_1.BG_found;
  outC->_L3 = outC->Context_indexOfBG_by_id_1.indexValid;
  outC->indexValid = outC->_L3;
  outC->BG_found = outC->_L2;
  outC->indexOfBG = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void indexOfPassedBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L91 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L88.valid = kcg_true;
  outC->_L88.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L88.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L88.q_media = Q_MEDIA_Balise;
  outC->_L88.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L88.m_mcount = kcg_lit_int32(0);
  outC->_L88.nid_c = kcg_lit_int32(0);
  outC->_L88.nid_bg = kcg_lit_int32(0);
  outC->_L88.q_link = Q_LINK_Unlinked;
  outC->_L88.bgPosition.valid = kcg_true;
  outC->_L88.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L88.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L88.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L88.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L88.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L88.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L88.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L88.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L88.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L88.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L88.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L88.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L88.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L88.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L88.q_nvlocacc = kcg_lit_int32(0);
  outC->_L88.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L88.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L88.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_lit_int32(0);
  outC->_L25.valid = kcg_true;
  outC->_L25.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L25.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L25.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L25.d_link.nominal = kcg_lit_int32(0);
  outC->_L25.d_link.d_min = kcg_lit_int32(0);
  outC->_L25.d_link.d_max = kcg_lit_int32(0);
  outC->_L25.linkingInfo.valid = kcg_true;
  outC->_L25.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L25.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L25.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L25.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L25.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L25.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L25.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L25.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L25.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L23 = Q_LINK_Unlinked;
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20.nominal = kcg_lit_int32(0);
  outC->_L20.d_min = kcg_lit_int32(0);
  outC->_L20.d_max = kcg_lit_int32(0);
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
  for (idx = 0; idx < 33; idx++) {
    outC->_L19.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L19.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L19.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.missed = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.BG_Header.valid = kcg_true;
  outC->_L6.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L6.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L6.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L6.BG_Header.bgPosition.valid = kcg_true;
  outC->_L6.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L6.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6.BG_Header.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(
      0);
  outC->_L6.BG_Header.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(
      0);
  outC->_L6.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L6.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L6.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L6.linkedBGs[idx1].valid = kcg_true;
    outC->_L6.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L6.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L6.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L6.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L6.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L6.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L6.linkedBGs[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L6.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L5[idx3].valid = kcg_true;
    outC->_L5[idx3].nid_c = kcg_lit_int32(0);
    outC->_L5[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L5[idx3].q_link = Q_LINK_Unlinked;
    outC->_L5[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L5[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L5[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L5[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.valid = kcg_true;
    outC->_L5[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L5[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L5[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.valid = kcg_true;
    outC->_L5[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L5[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L5[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L5[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L5[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L5[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
    }
    outC->_L5[idx3].missed = kcg_true;
  }
  outC->_L4 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->indexValid = kcg_true;
  outC->BG_found = kcg_true;
  outC->indexOfBG = kcg_lit_int32(0);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

