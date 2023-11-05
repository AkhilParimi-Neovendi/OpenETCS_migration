/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator/ */
void getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* accumulator/ */
  positionedBG_T_TrainPosition_Types_Pck *accumulator,
  /* nid_c/ */
  NID_C nid_c,
  /* nid_lrbg/ */
  NID_LRBG nid_lrbg,
  /* positionedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *positionedBG,
  outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L3, positionedBG);
  outC->_L14 = outC->_L3.nid_c;
  outC->_L11 = nid_c;
  outC->_L12 = outC->_L11 == outC->_L14;
  outC->_L10 = outC->_L3.valid;
  outC->_L5 = outC->_L3.nid_bg;
  outC->_L2 = nid_lrbg;
  outC->_L4 = outC->_L2 == outC->_L5;
  outC->_L9 = outC->_L12 & outC->_L4 & outC->_L10;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8, positionedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, accumulator);
  /* _L7= */
  if (outC->_L9) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, &outC->_L8);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, &outC->_L1);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->LRBG, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void getLRBGForRadioMessageIterator_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L14 = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_c = kcg_lit_int32(0);
  outC->_L8.nid_bg = kcg_lit_int32(0);
  outC->_L8.q_link = Q_LINK_Unlinked;
  outC->_L8.location.nominal = kcg_lit_int32(0);
  outC->_L8.location.d_min = kcg_lit_int32(0);
  outC->_L8.location.d_max = kcg_lit_int32(0);
  outC->_L8.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.valid = kcg_true;
  outC->_L8.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L8.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L8.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L8.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L8.missed = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_c = kcg_lit_int32(0);
  outC->_L7.nid_bg = kcg_lit_int32(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L7.location.nominal = kcg_lit_int32(0);
  outC->_L7.location.d_min = kcg_lit_int32(0);
  outC->_L7.location.d_max = kcg_lit_int32(0);
  outC->_L7.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.valid = kcg_true;
  outC->_L7.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L7.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L7.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L7.missed = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_c = kcg_lit_int32(0);
  outC->_L3.nid_bg = kcg_lit_int32(0);
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L3.location.nominal = kcg_lit_int32(0);
  outC->_L3.location.d_min = kcg_lit_int32(0);
  outC->_L3.location.d_max = kcg_lit_int32(0);
  outC->_L3.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.valid = kcg_true;
  outC->_L3.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L3.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L3.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L3.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.missed = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
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
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L1.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.missed = kcg_true;
  outC->LRBG.valid = kcg_true;
  outC->LRBG.nid_c = kcg_lit_int32(0);
  outC->LRBG.nid_bg = kcg_lit_int32(0);
  outC->LRBG.q_link = Q_LINK_Unlinked;
  outC->LRBG.location.nominal = kcg_lit_int32(0);
  outC->LRBG.location.d_min = kcg_lit_int32(0);
  outC->LRBG.location.d_max = kcg_lit_int32(0);
  outC->LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.valid = kcg_true;
  outC->LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.valid = kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->LRBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->LRBG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->LRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->LRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->LRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->LRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->LRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->LRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->LRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->LRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->LRBG.missed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getLRBGForRadioMessageIterator_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

