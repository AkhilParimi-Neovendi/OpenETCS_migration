/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead/ */
void recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* referenceBG/ */
  positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  static kcg_size idx;
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg acc;
  static kcg_size idx1;
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg noname;

  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L9, trainProperties);
  /* _L10/ */
  for (idx = 0; idx < 41; idx++) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L10[idx],
      &outC->_L9);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, referenceBG);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L7,
    (refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L8,
    &outC->_L7);
  if (kcg_true) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8.refBG, &outC->_L1);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_in);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L3,
    &outC->_L8);
  /* _L3= */
  for (idx1 = 0; idx1 < 41; idx1++) {
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc,
      &outC->_L3);
    /* _L3=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr#1)/ */
    recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc,
      &outC->_L2[idx1],
      &outC->_L10[idx1],
      &outC->Context_recalculate_BG_locations_ahead_itr_1[idx1]);
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L3,
      &outC->Context_recalculate_BG_locations_ahead_itr_1[idx1].refBGs_out);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L4[idx1],
      &outC->Context_recalculate_BG_locations_ahead_itr_1[idx1].BG_out);
  }
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &noname,
    &outC->_L3);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void recalculate_BG_locations_ahead_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
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
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;

  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L10[idx1].nid_engine = kcg_lit_int32(0);
    outC->_L10[idx1].nid_operational = kcg_lit_int32(0);
    outC->_L10[idx1].l_train = kcg_lit_int32(0);
    outC->_L10[idx1].d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
    outC->_L10[idx1].d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
    outC->_L10[idx1].d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
    outC->_L10[idx1].d_frontend_2_rearend.nominal = kcg_lit_int32(0);
    outC->_L10[idx1].d_frontend_2_rearend.d_min = kcg_lit_int32(0);
    outC->_L10[idx1].d_frontend_2_rearend.d_max = kcg_lit_int32(0);
    outC->_L10[idx1].locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
    outC->_L10[idx1].locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
    outC->_L10[idx1].locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
    outC->_L10[idx1].centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
    outC->_L10[idx1].centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
    outC->_L10[idx1].centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  }
  outC->_L9.nid_engine = kcg_lit_int32(0);
  outC->_L9.nid_operational = kcg_lit_int32(0);
  outC->_L9.l_train = kcg_lit_int32(0);
  outC->_L9.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L9.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L9.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L9.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L9.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L9.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L9.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L9.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L9.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L9.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L9.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L9.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L8.refBG.valid = kcg_true;
  outC->_L8.refBG.nid_c = kcg_lit_int32(0);
  outC->_L8.refBG.nid_bg = kcg_lit_int32(0);
  outC->_L8.refBG.q_link = Q_LINK_Unlinked;
  outC->_L8.refBG.location.nominal = kcg_lit_int32(0);
  outC->_L8.refBG.location.d_min = kcg_lit_int32(0);
  outC->_L8.refBG.location.d_max = kcg_lit_int32(0);
  outC->_L8.refBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.valid = kcg_true;
  outC->_L8.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.valid = kcg_true;
  outC->_L8.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8.refBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L8.refBG.missed = kcg_true;
  outC->_L8.prevLinkedBG.valid = kcg_true;
  outC->_L8.prevLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L8.prevLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L8.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(
      0);
  outC->_L8.prevLinkedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(
      0);
  outC->_L8.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].d_link =
      kcg_lit_int32(0);
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].nid_bg =
      kcg_lit_int32(0);
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8.prevLinkedBG.infoFromPassing.linkedBGs[idx3].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L8.prevLinkedBG.missed = kcg_true;
  outC->_L8.prevUnlinkedBG.valid = kcg_true;
  outC->_L8.prevUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L8.prevUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L8.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].d_link =
      kcg_lit_int32(0);
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].nid_c =
      kcg_lit_int32(0);
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].nid_bg =
      kcg_lit_int32(0);
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8.prevUnlinkedBG.infoFromPassing.linkedBGs[idx4].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L8.prevUnlinkedBG.missed = kcg_true;
  outC->_L8.recalculate = kcg_true;
  outC->_L8.sumOfBestDistances.nominal = kcg_lit_int32(0);
  outC->_L8.sumOfBestDistances.d_min = kcg_lit_int32(0);
  outC->_L8.sumOfBestDistances.d_max = kcg_lit_int32(0);
  outC->_L7.refBG.valid = kcg_true;
  outC->_L7.refBG.nid_c = kcg_lit_int32(0);
  outC->_L7.refBG.nid_bg = kcg_lit_int32(0);
  outC->_L7.refBG.q_link = Q_LINK_Unlinked;
  outC->_L7.refBG.location.nominal = kcg_lit_int32(0);
  outC->_L7.refBG.location.d_min = kcg_lit_int32(0);
  outC->_L7.refBG.location.d_max = kcg_lit_int32(0);
  outC->_L7.refBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.valid = kcg_true;
  outC->_L7.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.valid = kcg_true;
  outC->_L7.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.refBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L7.refBG.missed = kcg_true;
  outC->_L7.prevLinkedBG.valid = kcg_true;
  outC->_L7.prevLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L7.prevLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L7.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(
      0);
  outC->_L7.prevLinkedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(
      0);
  outC->_L7.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].d_link =
      kcg_lit_int32(0);
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].nid_bg =
      kcg_lit_int32(0);
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.prevLinkedBG.infoFromPassing.linkedBGs[idx6].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L7.prevLinkedBG.missed = kcg_true;
  outC->_L7.prevUnlinkedBG.valid = kcg_true;
  outC->_L7.prevUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L7.prevUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L7.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int32(0);
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int32(0);
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int32(0);
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.prevUnlinkedBG.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L7.prevUnlinkedBG.missed = kcg_true;
  outC->_L7.recalculate = kcg_true;
  outC->_L7.sumOfBestDistances.nominal = kcg_lit_int32(0);
  outC->_L7.sumOfBestDistances.d_min = kcg_lit_int32(0);
  outC->_L7.sumOfBestDistances.d_max = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 41; idx9++) {
    outC->_L4[idx9].valid = kcg_true;
    outC->_L4[idx9].nid_c = kcg_lit_int32(0);
    outC->_L4[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L4[idx9].q_link = Q_LINK_Unlinked;
    outC->_L4[idx9].location.nominal = kcg_lit_int32(0);
    outC->_L4[idx9].location.d_min = kcg_lit_int32(0);
    outC->_L4[idx9].location.d_max = kcg_lit_int32(0);
    outC->_L4[idx9].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.valid = kcg_true;
    outC->_L4[idx9].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L4[idx9].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L4[idx9].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx9].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx9].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx9].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4[idx9].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.valid = kcg_true;
    outC->_L4[idx9].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L4[idx9].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4[idx9].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4[idx9].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L4[idx9].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4[idx9].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4[idx9].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L4[idx9].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L4[idx9].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L4[idx9].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx8 = 0; idx8 < 33; idx8++) {
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].valid = kcg_true;
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L4[idx9].infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
    }
    outC->_L4[idx9].missed = kcg_true;
  }
  outC->_L3.refBG.valid = kcg_true;
  outC->_L3.refBG.nid_c = kcg_lit_int32(0);
  outC->_L3.refBG.nid_bg = kcg_lit_int32(0);
  outC->_L3.refBG.q_link = Q_LINK_Unlinked;
  outC->_L3.refBG.location.nominal = kcg_lit_int32(0);
  outC->_L3.refBG.location.d_min = kcg_lit_int32(0);
  outC->_L3.refBG.location.d_max = kcg_lit_int32(0);
  outC->_L3.refBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.valid = kcg_true;
  outC->_L3.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.valid = kcg_true;
  outC->_L3.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L3.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.refBG.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.refBG.missed = kcg_true;
  outC->_L3.prevLinkedBG.valid = kcg_true;
  outC->_L3.prevLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L3.prevLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L3.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(
      0);
  outC->_L3.prevLinkedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(
      0);
  outC->_L3.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].d_link =
      kcg_lit_int32(0);
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].nid_c =
      kcg_lit_int32(0);
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].nid_bg =
      kcg_lit_int32(0);
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.prevLinkedBG.infoFromPassing.linkedBGs[idx11].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L3.prevLinkedBG.missed = kcg_true;
  outC->_L3.prevUnlinkedBG.valid = kcg_true;
  outC->_L3.prevUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L3.prevUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L3.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].d_link =
      kcg_lit_int32(0);
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].nid_c =
      kcg_lit_int32(0);
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].nid_bg =
      kcg_lit_int32(0);
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.prevUnlinkedBG.infoFromPassing.linkedBGs[idx12].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L3.prevUnlinkedBG.missed = kcg_true;
  outC->_L3.recalculate = kcg_true;
  outC->_L3.sumOfBestDistances.nominal = kcg_lit_int32(0);
  outC->_L3.sumOfBestDistances.d_min = kcg_lit_int32(0);
  outC->_L3.sumOfBestDistances.d_max = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 41; idx14++) {
    outC->_L2[idx14].valid = kcg_true;
    outC->_L2[idx14].nid_c = kcg_lit_int32(0);
    outC->_L2[idx14].nid_bg = kcg_lit_int32(0);
    outC->_L2[idx14].q_link = Q_LINK_Unlinked;
    outC->_L2[idx14].location.nominal = kcg_lit_int32(0);
    outC->_L2[idx14].location.d_min = kcg_lit_int32(0);
    outC->_L2[idx14].location.d_max = kcg_lit_int32(0);
    outC->_L2[idx14].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.valid = kcg_true;
    outC->_L2[idx14].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L2[idx14].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L2[idx14].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx14].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx14].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx14].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2[idx14].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.valid = kcg_true;
    outC->_L2[idx14].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L2[idx14].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx14].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx14].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx14].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx14].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx14].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx14].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L2[idx14].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2[idx14].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2[idx14].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx13 = 0; idx13 < 33; idx13++) {
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].valid = kcg_true;
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].nid_LRBG = kcg_lit_int32(0);
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].q_scale = Q_SCALE_10_cm_scale;
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].d_link = kcg_lit_int32(0);
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].nid_c = kcg_lit_int32(0);
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].nid_bg = kcg_lit_int32(0);
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L2[idx14].infoFromPassing.linkedBGs[idx13].q_locacc = kcg_lit_int32(0);
    }
    outC->_L2[idx14].missed = kcg_true;
  }
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
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L1.infoFromPassing.linkedBGs[idx15].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.missed = kcg_true;
  for (idx17 = 0; idx17 < 41; idx17++) {
    outC->BGs_out[idx17].valid = kcg_true;
    outC->BGs_out[idx17].nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx17].nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx17].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx17].location.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx17].location.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx17].location.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx17].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx17].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx17].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_out[idx17].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx17].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx16 = 0; idx16 < 33; idx16++) {
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].valid = kcg_true;
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int32(0);
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int32(0);
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int32(0);
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx17].infoFromPassing.linkedBGs[idx16].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_out[idx17].missed = kcg_true;
  }
  for (idx = 0; idx < 41; idx++) {
    /* _L3=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr#1)/ */
    recalculate_BG_locations_ahead_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_recalculate_BG_locations_ahead_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void recalculate_BG_locations_ahead_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L3=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr#1)/ */
    recalculate_BG_locations_ahead_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_recalculate_BG_locations_ahead_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

