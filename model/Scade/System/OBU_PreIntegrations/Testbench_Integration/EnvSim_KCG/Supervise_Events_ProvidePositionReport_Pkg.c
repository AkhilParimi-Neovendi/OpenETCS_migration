/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_Events_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervise_Events/ */
void Supervise_Events_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* rbcComm/ */
  RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* trackInfo/ */
  LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool noname;

  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L11, posBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L5, trainPos);
  /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
    &outC->_L11,
    &outC->_L5,
    &outC->Context_op_GetLRBGfromBGs_1);
  outC->_L15 = outC->Context_op_GetLRBGfromBGs_1.found;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L16,
    &outC->Context_op_GetLRBGfromBGs_1.lrbg);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L14,
    trackInfo);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L10, odometry);
  /* _L13=(ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i#1)/ */
  op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
    &outC->_L10,
    &outC->Context_op_3_6_5_1_4_a_i_1);
  outC->_L13 = outC->Context_op_3_6_5_1_4_a_i_1.trigger;
  /* _L12=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */
  op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
    &outC->_L16,
    &outC->_L5,
    &outC->Context_op_3_6_5_1_4_j_1);
  outC->_L12 = outC->Context_op_3_6_5_1_4_j_1.trigger;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&outC->_L7, train2trackStatus);
  /* _L9=(ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d#1)/ */
  op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
    &outC->_L7,
    &outC->Context_op_3_6_5_1_4_c_d_1);
  outC->_L9 = outC->Context_op_3_6_5_1_4_c_d_1.trigger;
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&outC->_L3, rbcComm);
  /* _L6=(ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k#1)/ */
  op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg(
    &outC->_L14,
    &outC->_L3,
    &outC->Context_op_3_6_5_1_4_e_h_k_1);
  outC->_L6 = outC->Context_op_3_6_5_1_4_e_h_k_1.trigger;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L2,
    modeLevelStatus);
  /* _L1=(ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g#1)/ */
  op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
    &outC->_L2,
    &outC->Context_op_3_6_5_1_4_f_g_1);
  outC->_L1 = outC->Context_op_3_6_5_1_4_f_g_1.trigger;
  /* _L4=(ProvidePositionReport_Pkg::op_3_6_5_1_4_b#1)/ */
  op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
    &outC->_L2,
    &outC->Context_op_3_6_5_1_4_b_1);
  outC->_L4 = outC->Context_op_3_6_5_1_4_b_1.trigger;
  outC->_L8 = outC->_L13 | outC->_L4 | outC->_L1 | outC->_L6 | outC->_L9 |
    outC->_L12;
  noname = outC->_L15;
  outC->result = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void Supervise_Events_init_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L1 = kcg_true;
  outC->_L2.currMode = M_MODE_Full_Supervision;
  outC->_L2.currLevel = M_LEVEL_Level_0;
  outC->_L2.levelTransitionBorderPassed = kcg_true;
  outC->_L3.newSessionEstablished = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = kcg_lit_int32(0);
  outC->_L5.trainPositionIsUnknown = kcg_true;
  outC->_L5.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L5.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L5.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L5.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L5.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L5.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L5.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L5.LRBG.valid = kcg_true;
  outC->_L5.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L5.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L5.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L5.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L5.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L5.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L5.LRBG.missed = kcg_true;
  outC->_L5.prvLRBG.valid = kcg_true;
  outC->_L5.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L5.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L5.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L5.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L5.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L5.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L5.prvLRBG.missed = kcg_true;
  outC->_L5.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L5.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L5.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L5.linkingIsUsedOnboard = kcg_true;
  outC->_L5.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L5.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L5.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L7.nid_ntc = kcg_lit_int32(0);
  outC->_L7.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.timestamp = kcg_lit_int32(0);
  outC->_L10.odo.o_nominal = kcg_lit_int32(0);
  outC->_L10.odo.o_min = kcg_lit_int32(0);
  outC->_L10.odo.o_max = kcg_lit_int32(0);
  outC->_L10.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L10.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L10.speed.v_lower = kcg_lit_int32(0);
  outC->_L10.speed.v_upper = kcg_lit_int32(0);
  outC->_L10.acceleration = kcg_lit_int32(0);
  outC->_L10.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L11[idx3].valid = kcg_true;
    outC->_L11[idx3].nid_c = kcg_lit_int32(0);
    outC->_L11[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L11[idx3].q_link = Q_LINK_Unlinked;
    outC->_L11[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L11[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L11[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L11[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.valid = kcg_true;
    outC->_L11[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L11[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L11[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.valid = kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L11[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L11[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L11[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L11[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L11[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L11[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L11[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L11[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L11[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L11[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
    }
    outC->_L11[idx3].missed = kcg_true;
  }
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14.minSafeRearEndPassed = kcg_true;
  outC->_L14.maxSafeFrontEndPassed = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.nid_bg = kcg_lit_int32(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L16.location.nominal = kcg_lit_int32(0);
  outC->_L16.location.d_min = kcg_lit_int32(0);
  outC->_L16.location.d_max = kcg_lit_int32(0);
  outC->_L16.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.valid = kcg_true;
  outC->_L16.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L16.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L16.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L16.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L16.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L16.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L16.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L16.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L16.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L16.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L16.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L16.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L16.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L16.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L16.missed = kcg_true;
  outC->_L15 = kcg_true;
  outC->result = kcg_true;
  /* _L4=(ProvidePositionReport_Pkg::op_3_6_5_1_4_b#1)/ */
  op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_b_1);
  /* _L1=(ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g#1)/ */
  op_3_6_5_1_4_f_g_init_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_f_g_1);
  /* _L6=(ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k#1)/ */
  op_3_6_5_1_4_e_h_k_init_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_e_h_k_1);
  /* _L9=(ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d#1)/ */
  op_3_6_5_1_4_c_d_init_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_c_d_1);
  /* _L12=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */
  op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_j_1);
  /* _L13=(ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i#1)/ */
  op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_a_i_1);
  /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */
  op_GetLRBGfromBGs_init_ProvidePositionReport_Pkg(
    &outC->Context_op_GetLRBGfromBGs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_Events_reset_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  /* _L4=(ProvidePositionReport_Pkg::op_3_6_5_1_4_b#1)/ */
  op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_b_1);
  /* _L1=(ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g#1)/ */
  op_3_6_5_1_4_f_g_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_f_g_1);
  /* _L6=(ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k#1)/ */
  op_3_6_5_1_4_e_h_k_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_e_h_k_1);
  /* _L9=(ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d#1)/ */
  op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_c_d_1);
  /* _L12=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */
  op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_j_1);
  /* _L13=(ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i#1)/ */
  op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_a_i_1);
  /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */
  op_GetLRBGfromBGs_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_GetLRBGfromBGs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervise_Events_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

