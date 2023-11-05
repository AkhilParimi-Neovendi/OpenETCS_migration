/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced/ */
void IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* recivedBG_header/ */
  BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* isAnnounced/ */
  static kcg_bool isAnnounced_partial;
  /* q_linkorintation/ */
  static Q_LINKORIENTATION q_linkorintation_partial;
  /* isAnnounced/ */
  static kcg_bool _1_isAnnounced_partial;
  /* q_linkorintation/ */
  static Q_LINKORIENTATION _2_q_linkorintation_partial;

  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L15, storedBGs);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L16, recivedBG_header);
  /* _L17=(CheckBGConsistency_Pkg::SubFunction::isStored_iter#1)/ */
  isStored_iter_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L15,
    &outC->_L16,
    &outC->Context_isStored_iter_1);
  outC->_L17 = outC->Context_isStored_iter_1.index;
  outC->_L18 = outC->Context_isStored_iter_1.isStored;
  outC->isStored = outC->_L18;
  outC->IfBlock1_clock = outC->isStored;
  outC->indexLocal = outC->_L17;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = outC->indexLocal;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L1_then_IfBlock1,
      storedBGs);
    if ((kcg_lit_int32(0) <= outC->_L3_then_IfBlock1) &
      (outC->_L3_then_IfBlock1 < kcg_lit_int32(41))) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L2_then_IfBlock1,
        &outC->_L1_then_IfBlock1[outC->_L3_then_IfBlock1]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L2_then_IfBlock1,
        (positionedBG_T_TrainPosition_Types_Pck *) &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    outC->_L5_then_IfBlock1 =
      outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
    q_linkorintation_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = outC->_L2_then_IfBlock1.infoFromLinking.valid;
    isAnnounced_partial = outC->_L4_then_IfBlock1;
    outC->isAnnounced = isAnnounced_partial;
    outC->q_linkorintation = q_linkorintation_partial;
  }
  else {
    outC->_L12_else_IfBlock1 = outC->indexLocal;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L15_else_IfBlock1,
      storedBGs);
    if ((kcg_lit_int32(0) <= outC->_L12_else_IfBlock1) &
      (outC->_L12_else_IfBlock1 < kcg_lit_int32(41))) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L13_else_IfBlock1,
        &outC->_L15_else_IfBlock1[outC->_L12_else_IfBlock1]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L13_else_IfBlock1,
        (positionedBG_T_TrainPosition_Types_Pck *) &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    outC->_L14_else_IfBlock1 =
      outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
    _2_q_linkorintation_partial = outC->_L14_else_IfBlock1;
    outC->_L1_else_IfBlock1 = kcg_false;
    _1_isAnnounced_partial = outC->_L1_else_IfBlock1;
    outC->isAnnounced = _1_isAnnounced_partial;
    outC->q_linkorintation = _2_q_linkorintation_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void IsBG_announced_init_CheckBGConsistency_Pkg_SubFunction(
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.q_media = Q_MEDIA_Balise;
  outC->_L16.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.m_mcount = kcg_lit_int32(0);
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.nid_bg = kcg_lit_int32(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L16.bgPosition.valid = kcg_true;
  outC->_L16.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L16.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L16.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L16.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L16.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L16.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L16.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L16.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L16.q_nvlocacc = kcg_lit_int32(0);
  outC->_L16.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L16.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L15[idx1].valid = kcg_true;
    outC->_L15[idx1].nid_c = kcg_lit_int32(0);
    outC->_L15[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L15[idx1].q_link = Q_LINK_Unlinked;
    outC->_L15[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L15[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L15[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L15[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.valid = kcg_true;
    outC->_L15[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L15[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L15[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L15[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.valid = kcg_true;
    outC->_L15[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L15[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L15[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L15[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L15[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L15[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L15[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L15[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L15[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L15[idx1].missed = kcg_true;
  }
  outC->indexLocal = kcg_lit_int32(0);
  outC->isStored = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L15_else_IfBlock1[idx3].valid = kcg_true;
    outC->_L15_else_IfBlock1[idx3].nid_c = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].q_link = Q_LINK_Unlinked;
    outC->_L15_else_IfBlock1[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.valid = kcg_true;
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15_else_IfBlock1[idx3].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.valid = kcg_true;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L15_else_IfBlock1[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_dir =
        Q_DIR_Reverse;
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].d_link =
        kcg_lit_int32(0);
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].nid_c =
        kcg_lit_int32(0);
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].nid_bg =
        kcg_lit_int32(0);
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L15_else_IfBlock1[idx3].infoFromPassing.linkedBGs[idx2].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L15_else_IfBlock1[idx3].missed = kcg_true;
  }
  outC->_L14_else_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L13_else_IfBlock1.valid = kcg_true;
  outC->_L13_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.nid_bg = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L13_else_IfBlock1.location.nominal = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.location.d_min = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.location.d_max = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L13_else_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L13_else_IfBlock1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L13_else_IfBlock1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->_L13_else_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L13_else_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].d_link =
      kcg_lit_int32(0);
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].nid_c =
      kcg_lit_int32(0);
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].nid_bg =
      kcg_lit_int32(0);
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L13_else_IfBlock1.infoFromPassing.linkedBGs[idx4].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L13_else_IfBlock1.missed = kcg_true;
  outC->_L12_else_IfBlock1 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L1_then_IfBlock1[idx6].valid = kcg_true;
    outC->_L1_then_IfBlock1[idx6].nid_c = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].q_link = Q_LINK_Unlinked;
    outC->_L1_then_IfBlock1[idx6].location.nominal = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].location.d_min = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].location.d_max = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.valid = kcg_true;
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1_then_IfBlock1[idx6].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.valid = kcg_true;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1_then_IfBlock1[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_dir =
        Q_DIR_Reverse;
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].d_link =
        kcg_lit_int32(0);
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].nid_c =
        kcg_lit_int32(0);
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].nid_bg =
        kcg_lit_int32(0);
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1_then_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L1_then_IfBlock1[idx6].missed = kcg_true;
  }
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.nid_bg = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L2_then_IfBlock1.location.nominal = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.location.d_min = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.location.d_max = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L2_then_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2_then_IfBlock1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2_then_IfBlock1.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L2_then_IfBlock1.missed = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->q_linkorintation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->isAnnounced = kcg_true;
  /* _L17=(CheckBGConsistency_Pkg::SubFunction::isStored_iter#1)/ */
  isStored_iter_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_isStored_iter_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void IsBG_announced_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* _L17=(CheckBGConsistency_Pkg::SubFunction::isStored_iter#1)/ */
  isStored_iter_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_isStored_iter_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsBG_announced_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

