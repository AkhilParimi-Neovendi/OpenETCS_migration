/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo/ */
void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* reset/ */
  kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L22 = kcg_true;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L1, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs);
  outC->_L9 = outC->_L1.valid;
  /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L2,
    outC->_L9,
    &outC->Context_indexOfPassedBG_by_id_1);
  outC->_L4 = outC->Context_indexOfPassedBG_by_id_1.indexOfBG;
  outC->_L5 = outC->Context_indexOfPassedBG_by_id_1.BG_found;
  outC->_L6 = outC->Context_indexOfPassedBG_by_id_1.indexValid;
  outC->_L14 = !outC->_L5;
  _1_noname = outC->_L14;
  outC->_L13 = outC->_L22 & outC->_L9;
  outC->incrPassedBGSeqNo = outC->_L13;
  outC->_L15 = outC->incrPassedBGSeqNo;
  if ((kcg_lit_int64(0) <= outC->_L4) & (outC->_L4 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8,
      &outC->_L2[outC->_L4]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L11 = outC->_L8.infoFromPassing.valid;
  outC->_L10 = outC->_L8.valid;
  outC->_L12 = outC->_L10 & outC->_L11 & outC->_L5;
  outC->keepPassedBGSeqNo = outC->_L12;
  outC->_L16 = outC->keepPassedBGSeqNo;
  outC->_L17 = !outC->_L16;
  outC->_L18 = outC->_L17 & outC->_L15;
  outC->_L3 = reset;
  /* _L19=(CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp#1)/ */
  countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    outC->_L18,
    outC->_L3,
    &outC->Context_countUp_1);
  outC->_L19 = outC->Context_countUp_1.counter;
  outC->_L20 = outC->_L8.seqNoOnTrack;
  /* _L21= */
  if (outC->_L16) {
    outC->_L21 = outC->_L20;
  }
  else {
    outC->_L21 = outC->_L19;
  }
  outC->seqNo = outC->_L21;
  noname = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void genPassedBG_SeqNo_init_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_c = kcg_lit_int64(0);
  outC->_L8.nid_bg = kcg_lit_int64(0);
  outC->_L8.q_link = Q_LINK_Unlinked;
  outC->_L8.location.nominal = kcg_lit_int64(0);
  outC->_L8.location.d_min = kcg_lit_int64(0);
  outC->_L8.location.d_max = kcg_lit_int64(0);
  outC->_L8.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.valid = kcg_true;
  outC->_L8.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L8.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L8.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L8.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L8.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L8.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L8.missed = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L3 = kcg_true;
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L2[idx2].valid = kcg_true;
    outC->_L2[idx2].nid_c = kcg_lit_int64(0);
    outC->_L2[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L2[idx2].q_link = Q_LINK_Unlinked;
    outC->_L2[idx2].location.nominal = kcg_lit_int64(0);
    outC->_L2[idx2].location.d_min = kcg_lit_int64(0);
    outC->_L2[idx2].location.d_max = kcg_lit_int64(0);
    outC->_L2[idx2].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.valid = kcg_true;
    outC->_L2[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L2[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L2[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.valid = kcg_true;
    outC->_L2[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L2[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L2[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L2[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
    }
    outC->_L2[idx2].missed = kcg_true;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.BG_Header.valid = kcg_true;
  outC->_L1.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.BG_Header.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(
      0);
  outC->_L1.BG_Header.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(
      0);
  outC->_L1.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L1.linkedBGs[idx3].valid = kcg_true;
    outC->_L1.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L1.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L1.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L1.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L1.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.linkedBGs[idx3].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L1.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->incrPassedBGSeqNo = kcg_true;
  outC->keepPassedBGSeqNo = kcg_true;
  outC->seqNo = kcg_lit_int64(0);
  /* _L19=(CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp#1)/ */
  countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    &outC->Context_countUp_1);
  /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */
  indexOfPassedBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfPassedBG_by_id_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* _L19=(CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp#1)/ */
  countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    &outC->Context_countUp_1);
  /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */
  indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfPassedBG_by_id_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

