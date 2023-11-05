/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3/ */
void op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
  /* posRep/ */
  Position_Report_TrainToTrack *posRep,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L9, &outC->_L2.LRBG);
  outC->_L45 = outC->_L9.nid_bg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L5, &outC->_L2.prvLRBG);
  outC->_L44 = outC->_L5.nid_bg;
  outC->_L43 = kcg_lit_int32(16777215);
  outC->_L42 = Q_DIRTRAIN_Nominal;
  outC->_L24 = Q_DIRTRAIN_Reverse;
  outC->_L4 = prvDirTrain;
  outC->_L19 = outC->_L4 == outC->_L24;
  kcg_copy_Position_Report_TrainToTrack(&outC->_L3, posRep);
  outC->_L13 = outC->_L3.dirtrain;
  outC->_L20 = outC->_L13 == outC->_L42;
  outC->_L21 = outC->_L20 & outC->_L19;
  outC->_L16 = Q_DIRTRAIN_Nominal;
  outC->_L17 = outC->_L16 == outC->_L4;
  outC->_L15 = Q_DIRTRAIN_Reverse;
  outC->_L14 = outC->_L15 == outC->_L13;
  outC->_L18 = outC->_L14 & outC->_L17;
  outC->_L22 = outC->_L18 | outC->_L21;
  outC->_L8 = outC->_L44 != outC->_L45;
  outC->_L12 = outC->_L8 & outC->_L22;
  /* _L23= */
  if (outC->_L12) {
    outC->_L23 = outC->_L43;
  }
  else {
    outC->_L23 = outC->_L44;
  }
  outC->_L7 = kcg_lit_int32(16777215);
  outC->_L6 = outC->_L44 != outC->_L7;
  outC->_L11 = !outC->_L6;
  outC->_L10 = outC->_L6 & outC->_L8;
  outC->cond_3_4_2_3_3_2 = outC->_L10;
  outC->cond_3_4_2_3_3_3 = outC->_L11;
  outC->cond_3_4_2_3_3_4 = outC->_L12;
  outC->nidPrvLrbg = outC->_L23;
}

#ifndef KCG_USER_DEFINED_INIT
void op_cond_3_4_2_3_3_init_ProvidePositionReport_Pkg(
  outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L42 = Q_DIRTRAIN_Reverse;
  outC->_L24 = Q_DIRTRAIN_Reverse;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = Q_DIRTRAIN_Reverse;
  outC->_L15 = Q_DIRTRAIN_Reverse;
  outC->_L14 = kcg_true;
  outC->_L13 = Q_DIRTRAIN_Reverse;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.nid_c = kcg_lit_int32(0);
  outC->_L9.nid_bg = kcg_lit_int32(0);
  outC->_L9.q_link = Q_LINK_Unlinked;
  outC->_L9.location.nominal = kcg_lit_int32(0);
  outC->_L9.location.d_min = kcg_lit_int32(0);
  outC->_L9.location.d_max = kcg_lit_int32(0);
  outC->_L9.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.valid = kcg_true;
  outC->_L9.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L9.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L9.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L9.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L9.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L9.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L9.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L9.missed = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
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
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L5.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L5.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L5.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L5.missed = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int32(0);
  outC->_L2.trainPositionIsUnknown = kcg_true;
  outC->_L2.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L2.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L2.LRBG.valid = kcg_true;
  outC->_L2.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.LRBG.missed = kcg_true;
  outC->_L2.prvLRBG.valid = kcg_true;
  outC->_L2.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.prvLRBG.missed = kcg_true;
  outC->_L2.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L2.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L2.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L2.linkingIsUsedOnboard = kcg_true;
  outC->_L2.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L3.NID_PACKET = kcg_lit_int32(0);
  outC->_L3.L_PACKET = kcg_lit_int32(0);
  outC->_L3.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.NID_LRBG = kcg_lit_int32(0);
  outC->_L3.D_LRBG = kcg_lit_int32(0);
  outC->_L3.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L3.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L3.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.L_TRAININT = kcg_lit_int32(0);
  outC->_L3.V_TRAIN = kcg_lit_int32(0);
  outC->_L3.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.mode = M_MODE_Full_Supervision;
  outC->_L3.level = M_LEVEL_Level_0;
  outC->_L3.NID_NTC = kcg_lit_int32(0);
  outC->_L4 = Q_DIRTRAIN_Reverse;
  outC->cond_3_4_2_3_3_4 = kcg_true;
  outC->cond_3_4_2_3_3_3 = kcg_true;
  outC->cond_3_4_2_3_3_2 = kcg_true;
  outC->nidPrvLrbg = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_cond_3_4_2_3_3_reset_ProvidePositionReport_Pkg(
  outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

