/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddBGToFIFO_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AddBGToFIFO/ */
void AddBGToFIFO_ProvidePositionReport_Pkg(
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* reportIsSent/ */
  kcg_bool reportIsSent,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_AddBGToFIFO_ProvidePositionReport_Pkg *outC)
{
  static ReportedBG_T_ProvidePositionReport_Pkg noname;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L56, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L57, &outC->_L56.LRBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L55, &outC->_L57.location);
  outC->_L54 = outC->_L57.nid_bg;
  outC->_L2 = reportIsSent;
  outC->_L45.valid = outC->_L2;
  outC->_L45.nidBG = outC->_L54;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L45.location, &outC->_L55);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&outC->_L4, reportedBGs);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L14, &outC->_L4[7]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&noname, &outC->_L14);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L7, &outC->_L4[0]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L8, &outC->_L4[1]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L9, &outC->_L4[2]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L10, &outC->_L4[3]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L11, &outC->_L4[4]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L12, &outC->_L4[5]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L13, &outC->_L4[6]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[0], &outC->_L45);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[1], &outC->_L7);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[2], &outC->_L8);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[3], &outC->_L9);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[4], &outC->_L10);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[5], &outC->_L11);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[6], &outC->_L12);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L5[7], &outC->_L13);
  /* _L6= */
  if (outC->_L2) {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&outC->_L6, &outC->_L5);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&outC->_L6, &outC->_L4);
  }
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->out_reportedBGs,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void AddBGToFIFO_init_ProvidePositionReport_Pkg(
  outC_AddBGToFIFO_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L57.valid = kcg_true;
  outC->_L57.nid_c = kcg_lit_int64(0);
  outC->_L57.nid_bg = kcg_lit_int64(0);
  outC->_L57.q_link = Q_LINK_Unlinked;
  outC->_L57.location.nominal = kcg_lit_int64(0);
  outC->_L57.location.d_min = kcg_lit_int64(0);
  outC->_L57.location.d_max = kcg_lit_int64(0);
  outC->_L57.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.valid = kcg_true;
  outC->_L57.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L57.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L57.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L57.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L57.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L57.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L57.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L57.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.valid = kcg_true;
  outC->_L57.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L57.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L57.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L57.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L57.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L57.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L57.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L57.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L57.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L57.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L57.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L57.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L57.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L57.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L57.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L57.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L57.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L57.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L57.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L57.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L57.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L57.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L57.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L57.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L57.missed = kcg_true;
  outC->_L56.valid = kcg_true;
  outC->_L56.timestamp = kcg_lit_int64(0);
  outC->_L56.trainPositionIsUnknown = kcg_true;
  outC->_L56.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L56.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L56.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L56.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L56.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L56.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L56.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L56.LRBG.valid = kcg_true;
  outC->_L56.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L56.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L56.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L56.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L56.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L56.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L56.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L56.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L56.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L56.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L56.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L56.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L56.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L56.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L56.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L56.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L56.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L56.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L56.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L56.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L56.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L56.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L56.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L56.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L56.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L56.LRBG.missed = kcg_true;
  outC->_L56.prvLRBG.valid = kcg_true;
  outC->_L56.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L56.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L56.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L56.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L56.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L56.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L56.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L56.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L56.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L56.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L56.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L56.prvLRBG.missed = kcg_true;
  outC->_L56.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L56.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L56.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L56.linkingIsUsedOnboard = kcg_true;
  outC->_L56.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L56.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L56.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L55.nominal = kcg_lit_int64(0);
  outC->_L55.d_min = kcg_lit_int64(0);
  outC->_L55.d_max = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L45.valid = kcg_true;
  outC->_L45.nidBG = kcg_lit_int64(0);
  outC->_L45.location.nominal = kcg_lit_int64(0);
  outC->_L45.location.d_min = kcg_lit_int64(0);
  outC->_L45.location.d_max = kcg_lit_int64(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.nidBG = kcg_lit_int64(0);
  outC->_L14.location.nominal = kcg_lit_int64(0);
  outC->_L14.location.d_min = kcg_lit_int64(0);
  outC->_L14.location.d_max = kcg_lit_int64(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.nidBG = kcg_lit_int64(0);
  outC->_L13.location.nominal = kcg_lit_int64(0);
  outC->_L13.location.d_min = kcg_lit_int64(0);
  outC->_L13.location.d_max = kcg_lit_int64(0);
  outC->_L12.valid = kcg_true;
  outC->_L12.nidBG = kcg_lit_int64(0);
  outC->_L12.location.nominal = kcg_lit_int64(0);
  outC->_L12.location.d_min = kcg_lit_int64(0);
  outC->_L12.location.d_max = kcg_lit_int64(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.nidBG = kcg_lit_int64(0);
  outC->_L11.location.nominal = kcg_lit_int64(0);
  outC->_L11.location.d_min = kcg_lit_int64(0);
  outC->_L11.location.d_max = kcg_lit_int64(0);
  outC->_L10.valid = kcg_true;
  outC->_L10.nidBG = kcg_lit_int64(0);
  outC->_L10.location.nominal = kcg_lit_int64(0);
  outC->_L10.location.d_min = kcg_lit_int64(0);
  outC->_L10.location.d_max = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.nidBG = kcg_lit_int64(0);
  outC->_L9.location.nominal = kcg_lit_int64(0);
  outC->_L9.location.d_min = kcg_lit_int64(0);
  outC->_L9.location.d_max = kcg_lit_int64(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.nidBG = kcg_lit_int64(0);
  outC->_L8.location.nominal = kcg_lit_int64(0);
  outC->_L8.location.d_min = kcg_lit_int64(0);
  outC->_L8.location.d_max = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.nidBG = kcg_lit_int64(0);
  outC->_L7.location.nominal = kcg_lit_int64(0);
  outC->_L7.location.d_min = kcg_lit_int64(0);
  outC->_L7.location.d_max = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L6[idx3].valid = kcg_true;
    outC->_L6[idx3].nidBG = kcg_lit_int64(0);
    outC->_L6[idx3].location.nominal = kcg_lit_int64(0);
    outC->_L6[idx3].location.d_min = kcg_lit_int64(0);
    outC->_L6[idx3].location.d_max = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 8; idx4++) {
    outC->_L5[idx4].valid = kcg_true;
    outC->_L5[idx4].nidBG = kcg_lit_int64(0);
    outC->_L5[idx4].location.nominal = kcg_lit_int64(0);
    outC->_L5[idx4].location.d_min = kcg_lit_int64(0);
    outC->_L5[idx4].location.d_max = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_true;
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L4[idx5].valid = kcg_true;
    outC->_L4[idx5].nidBG = kcg_lit_int64(0);
    outC->_L4[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L4[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L4[idx5].location.d_max = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 8; idx6++) {
    outC->out_reportedBGs[idx6].valid = kcg_true;
    outC->out_reportedBGs[idx6].nidBG = kcg_lit_int64(0);
    outC->out_reportedBGs[idx6].location.nominal = kcg_lit_int64(0);
    outC->out_reportedBGs[idx6].location.d_min = kcg_lit_int64(0);
    outC->out_reportedBGs[idx6].location.d_max = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AddBGToFIFO_reset_ProvidePositionReport_Pkg(
  outC_AddBGToFIFO_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AddBGToFIFO_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

