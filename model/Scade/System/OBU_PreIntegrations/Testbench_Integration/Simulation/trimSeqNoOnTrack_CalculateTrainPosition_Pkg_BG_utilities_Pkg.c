/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack/ */
void trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_int64 acc;
  static kcg_size idx;
  static kcg_int64 noname;

  outC->_L5 = kcg_lit_int64(0);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, BGs_in);
  outC->_L2 = outC->_L5;
  /* _L2= */
  for (idx = 0; idx < 41; idx++) {
    acc = outC->_L2;
    /* _L2=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr#1)/ */
    trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      acc,
      &outC->_L1[idx],
      &outC->Context_trimSeqNoOnTrack_itr_1[idx]);
    outC->_L2 = outC->Context_trimSeqNoOnTrack_itr_1[idx].seqNo;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L3[idx],
      &outC->Context_trimSeqNoOnTrack_itr_1[idx].BG_out);
  }
  noname = outC->_L2;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void trimSeqNoOnTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L5 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L3[idx2].valid = kcg_true;
    outC->_L3[idx2].nid_c = kcg_lit_int64(0);
    outC->_L3[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L3[idx2].q_link = Q_LINK_Unlinked;
    outC->_L3[idx2].location.nominal = kcg_lit_int64(0);
    outC->_L3[idx2].location.d_min = kcg_lit_int64(0);
    outC->_L3[idx2].location.d_max = kcg_lit_int64(0);
    outC->_L3[idx2].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.valid = kcg_true;
    outC->_L3[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L3[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L3[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L3[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.valid = kcg_true;
    outC->_L3[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L3[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L3[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L3[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L3[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L3[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L3[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L3[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L3[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L3[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
    }
    outC->_L3[idx2].missed = kcg_true;
  }
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L1[idx4].valid = kcg_true;
    outC->_L1[idx4].nid_c = kcg_lit_int64(0);
    outC->_L1[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L1[idx4].q_link = Q_LINK_Unlinked;
    outC->_L1[idx4].location.nominal = kcg_lit_int64(0);
    outC->_L1[idx4].location.d_min = kcg_lit_int64(0);
    outC->_L1[idx4].location.d_max = kcg_lit_int64(0);
    outC->_L1[idx4].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.valid = kcg_true;
    outC->_L1[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.valid = kcg_true;
    outC->_L1[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L1[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
    }
    outC->_L1[idx4].missed = kcg_true;
  }
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->BGs_out[idx6].valid = kcg_true;
    outC->BGs_out[idx6].nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx6].nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx6].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx6].location.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx6].location.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx6].location.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx6].seqNoOnTrack = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx6].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx6].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->BGs_out[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx6].infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
    }
    outC->BGs_out[idx6].missed = kcg_true;
  }
  for (idx = 0; idx < 41; idx++) {
    /* _L2=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr#1)/ */
    trimSeqNoOnTrack_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_trimSeqNoOnTrack_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trimSeqNoOnTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L2=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr#1)/ */
    trimSeqNoOnTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_trimSeqNoOnTrack_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

