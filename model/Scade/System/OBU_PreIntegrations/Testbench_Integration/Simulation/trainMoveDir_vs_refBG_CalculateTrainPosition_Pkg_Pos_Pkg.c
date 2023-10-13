/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG/ */
void trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* refBG/ */
  positionedBG_T_TrainPosition_Types_Pck *refBG,
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  outC->_L45 = Q_DIRTRAIN_Unknown;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, refBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L9, &outC->_L7.infoFromPassing);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L10, &outC->_L9.BG_Header);
  outC->_L13 = outC->_L10.trainRunningDirectionToBG;
  outC->refRunningDirectionToBG = outC->_L13;
  outC->_L23 = outC->refRunningDirectionToBG;
  /* _L24=(CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN#1)/ */
  invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
    outC->_L23,
    &outC->Context_invert_Q_DIRTRAIN_1);
  outC->_L24 = outC->Context_invert_Q_DIRTRAIN_1.out;
  outC->_L14 = outC->_L10.bgPosition.motionDirection;
  outC->refMotionDir = outC->_L14;
  outC->_L19 = outC->refMotionDir;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L15, currentOdometry);
  outC->_L16 = outC->_L15.motionDirection;
  outC->currMotionDir = outC->_L16;
  outC->_L18 = outC->currMotionDir;
  outC->_L20 = outC->_L18 == outC->_L19;
  /* _L22= */
  if (outC->_L20) {
    outC->_L22 = outC->_L23;
  }
  else {
    outC->_L22 = outC->_L24;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L29, refBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L31, &outC->_L29.infoFromPassing);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L33, &outC->_L31.BG_Header);
  outC->_L37 = outC->_L33.bgPosition.valid;
  outC->_L40 = !outC->_L37;
  outC->_L39 = outC->_L33.valid;
  outC->_L35 = !outC->_L39;
  outC->_L32 = outC->_L31.valid;
  outC->_L34 = !outC->_L32;
  outC->_L28 = outC->_L29.valid;
  outC->_L30 = !outC->_L28;
  outC->_L17 = outC->_L15.valid;
  outC->_L25 = !outC->_L17;
  outC->_L26 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27 = outC->_L16 == outC->_L26;
  outC->_L36 = outC->_L27 | outC->_L25 | outC->_L30 | outC->_L34 | outC->_L35 |
    outC->_L40;
  /* _L44= */
  if (outC->_L36) {
    outC->_L44 = outC->_L45;
  }
  else {
    outC->_L44 = outC->_L22;
  }
  outC->direction = outC->_L44;
}

#ifndef KCG_USER_DEFINED_INIT
void trainMoveDir_vs_refBG_init_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L45 = Q_DIRTRAIN_Reverse;
  outC->_L44 = Q_DIRTRAIN_Reverse;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33.valid = kcg_true;
  outC->_L33.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L33.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L33.q_media = Q_MEDIA_Balise;
  outC->_L33.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L33.m_mcount = kcg_lit_int64(0);
  outC->_L33.nid_c = kcg_lit_int64(0);
  outC->_L33.nid_bg = kcg_lit_int64(0);
  outC->_L33.q_link = Q_LINK_Unlinked;
  outC->_L33.bgPosition.valid = kcg_true;
  outC->_L33.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L33.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L33.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L33.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L33.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L33.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L33.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L33.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L33.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L33.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L33.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L33.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L33.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L33.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L33.q_nvlocacc = kcg_lit_int64(0);
  outC->_L33.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L33.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L33.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L32 = kcg_true;
  outC->_L31.valid = kcg_true;
  outC->_L31.BG_Header.valid = kcg_true;
  outC->_L31.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L31.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L31.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L31.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L31.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L31.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L31.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L31.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L31.BG_Header.bgPosition.valid = kcg_true;
  outC->_L31.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L31.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L31.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L31.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L31.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L31.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L31.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L31.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L31.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L31.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L31.linkedBGs[idx].valid = kcg_true;
    outC->_L31.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L31.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L31.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L31.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L31.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L31.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L31.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L31.linkedBGs[idx].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L31.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L30 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29.valid = kcg_true;
  outC->_L29.nid_c = kcg_lit_int64(0);
  outC->_L29.nid_bg = kcg_lit_int64(0);
  outC->_L29.q_link = Q_LINK_Unlinked;
  outC->_L29.location.nominal = kcg_lit_int64(0);
  outC->_L29.location.d_min = kcg_lit_int64(0);
  outC->_L29.location.d_max = kcg_lit_int64(0);
  outC->_L29.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.valid = kcg_true;
  outC->_L29.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L29.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L29.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L29.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L29.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L29.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L29.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.valid = kcg_true;
  outC->_L29.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L29.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L29.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L29.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L29.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L29.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L29.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L29.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L29.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L29.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L29.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L29.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L29.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L29.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L29.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L29.missed = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25 = kcg_true;
  outC->_L24 = Q_DIRTRAIN_Reverse;
  outC->_L23 = Q_DIRTRAIN_Reverse;
  outC->_L22 = Q_DIRTRAIN_Reverse;
  outC->_L20 = kcg_true;
  outC->_L19 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17 = kcg_true;
  outC->_L16 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.valid = kcg_true;
  outC->_L15.timestamp = kcg_lit_int64(0);
  outC->_L15.odo.o_nominal = kcg_lit_int64(0);
  outC->_L15.odo.o_min = kcg_lit_int64(0);
  outC->_L15.odo.o_max = kcg_lit_int64(0);
  outC->_L15.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L15.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L15.speed.v_lower = kcg_lit_int64(0);
  outC->_L15.speed.v_upper = kcg_lit_int64(0);
  outC->_L15.acceleration = kcg_lit_int64(0);
  outC->_L15.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13 = Q_DIRTRAIN_Reverse;
  outC->_L10.valid = kcg_true;
  outC->_L10.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.q_media = Q_MEDIA_Balise;
  outC->_L10.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10.m_mcount = kcg_lit_int64(0);
  outC->_L10.nid_c = kcg_lit_int64(0);
  outC->_L10.nid_bg = kcg_lit_int64(0);
  outC->_L10.q_link = Q_LINK_Unlinked;
  outC->_L10.bgPosition.valid = kcg_true;
  outC->_L10.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L10.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L10.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L10.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L10.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L10.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L10.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L10.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L10.q_nvlocacc = kcg_lit_int64(0);
  outC->_L10.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L10.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L10.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L9.valid = kcg_true;
  outC->_L9.BG_Header.valid = kcg_true;
  outC->_L9.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L9.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L9.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L9.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L9.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9.BG_Header.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(
      0);
  outC->_L9.BG_Header.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(
      0);
  outC->_L9.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L9.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L9.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L9.linkedBGs[idx2].valid = kcg_true;
    outC->_L9.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L9.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L9.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L9.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L9.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L9.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L9.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.linkedBGs[idx2].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L9.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
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
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L7.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L7.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L7.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.missed = kcg_true;
  outC->refRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->currMotionDir = unknownDirection_Obu_BasicTypes_Pkg;
  outC->refMotionDir = unknownDirection_Obu_BasicTypes_Pkg;
  outC->direction = Q_DIRTRAIN_Reverse;
  /* _L24=(CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN#1)/ */
  invert_Q_DIRTRAIN_init_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_invert_Q_DIRTRAIN_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainMoveDir_vs_refBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* _L24=(CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN#1)/ */
  invert_Q_DIRTRAIN_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_invert_Q_DIRTRAIN_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

