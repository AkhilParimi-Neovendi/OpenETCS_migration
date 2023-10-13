/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs/ */
void op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_bool acc;
  static kcg_size idx1;

  outC->_L16 = kcg_lit_int64(1);
  outC->_L6 = kcg_false;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, posBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, &outC->_L2.LRBG);
  outC->_L13 = outC->_L7.nid_bg;
  /* _L8/ */
  for (idx = 0; idx < 41; idx++) {
    outC->_L8[idx] = outC->_L13;
  }
  outC->_L5 = kcg_true;
  outC->_L4 = outC->_L6;
  /* _L3= */
  if (outC->_L5) {
    /* _L3= */
    for (idx1 = 0; idx1 < 41; idx1++) {
      acc = outC->_L4;
      /* _L3=(ProvidePositionReport_Pkg::op_findBG#1)/ */
      op_findBG_ProvidePositionReport_Pkg(
        acc,
        &outC->_L1[idx1],
        outC->_L8[idx1],
        &outC->Context_op_findBG_1[idx1]);
      outC->_L4 = outC->Context_op_findBG_1[idx1].fd;
      outC->_L3 = /* _L3= */(kcg_int64) (idx1 + 1);
      /* _L3= */
      if (!outC->Context_op_findBG_1[idx1].cond) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int64(0);
  }
  outC->_L15 = outC->_L3 - outC->_L16;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L14,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cPassedBG_ProvidePositionReport_Pkg);
  if ((kcg_lit_int64(0) <= outC->_L15) & (outC->_L15 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L9,
      &outC->_L1[outC->_L15]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L9, &outC->_L14);
  }
  outC->found = outC->_L4;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lrbg, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void op_GetLRBGfromBGs_init_ProvidePositionReport_Pkg(
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg *outC)
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

  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.nid_c = kcg_lit_int64(0);
  outC->_L14.nid_bg = kcg_lit_int64(0);
  outC->_L14.q_link = Q_LINK_Unlinked;
  outC->_L14.location.nominal = kcg_lit_int64(0);
  outC->_L14.location.d_min = kcg_lit_int64(0);
  outC->_L14.location.d_max = kcg_lit_int64(0);
  outC->_L14.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.valid = kcg_true;
  outC->_L14.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L14.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L14.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L14.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L14.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L14.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L14.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L14.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L14.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L14.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L14.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L14.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L14.missed = kcg_true;
  outC->_L13 = kcg_lit_int64(0);
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
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L9.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L9.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L9.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L9.missed = kcg_true;
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L8[idx3] = kcg_lit_int64(0);
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
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L7.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L7.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L7.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L7.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.missed = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L1[idx6].valid = kcg_true;
    outC->_L1[idx6].nid_c = kcg_lit_int64(0);
    outC->_L1[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L1[idx6].q_link = Q_LINK_Unlinked;
    outC->_L1[idx6].location.nominal = kcg_lit_int64(0);
    outC->_L1[idx6].location.d_min = kcg_lit_int64(0);
    outC->_L1[idx6].location.d_max = kcg_lit_int64(0);
    outC->_L1[idx6].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.valid = kcg_true;
    outC->_L1[idx6].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1[idx6].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1[idx6].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1[idx6].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1[idx6].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1[idx6].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.valid = kcg_true;
    outC->_L1[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1[idx6].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1[idx6].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L1[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1[idx6].infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
    }
    outC->_L1[idx6].missed = kcg_true;
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int64(0);
  outC->_L2.trainPositionIsUnknown = kcg_true;
  outC->_L2.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L2.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L2.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L2.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L2.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L2.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L2.LRBG.valid = kcg_true;
  outC->_L2.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L2.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L2.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L2.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L2.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L2.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.LRBG.missed = kcg_true;
  outC->_L2.prvLRBG.valid = kcg_true;
  outC->_L2.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L2.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L2.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L2.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L2.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L2.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.prvLRBG.missed = kcg_true;
  outC->_L2.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L2.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L2.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L2.linkingIsUsedOnboard = kcg_true;
  outC->_L2.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L2.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L2.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->lrbg.valid = kcg_true;
  outC->lrbg.nid_c = kcg_lit_int64(0);
  outC->lrbg.nid_bg = kcg_lit_int64(0);
  outC->lrbg.q_link = Q_LINK_Unlinked;
  outC->lrbg.location.nominal = kcg_lit_int64(0);
  outC->lrbg.location.d_min = kcg_lit_int64(0);
  outC->lrbg.location.d_max = kcg_lit_int64(0);
  outC->lrbg.seqNoOnTrack = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.valid = kcg_true;
  outC->lrbg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lrbg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lrbg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->lrbg.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->lrbg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->lrbg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->lrbg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lrbg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.valid = kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lrbg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lrbg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lrbg.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->lrbg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lrbg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->lrbg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->lrbg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->lrbg.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->lrbg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->lrbg.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->lrbg.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int64(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->lrbg.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->lrbg.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int64(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->lrbg.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int64(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int64(0);
    outC->lrbg.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->lrbg.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lrbg.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int64(0);
  }
  outC->lrbg.missed = kcg_true;
  outC->found = kcg_true;
  for (idx = 0; idx < 41; idx++) {
    /* _L3=(ProvidePositionReport_Pkg::op_findBG#1)/ */
    op_findBG_init_ProvidePositionReport_Pkg(&outC->Context_op_findBG_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_GetLRBGfromBGs_reset_ProvidePositionReport_Pkg(
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L3=(ProvidePositionReport_Pkg::op_findBG#1)/ */
    op_findBG_reset_ProvidePositionReport_Pkg(&outC->Context_op_findBG_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_GetLRBGfromBGs_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

