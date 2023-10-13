/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG/ */
void MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg *outC)
{
  static kcg_bool noname;

  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L20,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L21,
    &outC->_L20.d_baliseAntenna_2_frontend);
  outC->_L22 = outC->_L21.nominal;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L1, trainPosition);
  outC->_L17 = outC->_L1.estimatedFrontEndPosition;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L3, &outC->_L1.LRBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L6, &outC->_L3.location);
  outC->_L7 = outC->_L6.nominal;
  outC->_L5 = outC->_L3.nid_bg;
  outC->_L10 = LRBG;
  /* _L13=(TM::Decode_NID_LRBG#1)/ */
  Decode_NID_LRBG_TM(outC->_L10, &outC->Context_Decode_NID_LRBG_1);
  outC->_L13 = outC->Context_Decode_NID_LRBG_1.NID_C_out;
  outC->_L14 = outC->Context_Decode_NID_LRBG_1.NID_BG_out;
  outC->_L12 = outC->_L14 == outC->_L5;
  outC->_L4 = outC->_L3.nid_c;
  outC->_L15 = outC->_L13 == outC->_L4;
  outC->_L16 = outC->_L15 & outC->_L12;
  /* _L8= */
  if (outC->_L16) {
    outC->_L8 = outC->_L7;
  }
  else {
    outC->_L8 = outC->_L17;
  }
  outC->_L19 = outC->_L8 + outC->_L22;
  outC->_L18 = kcg_true;
  outC->_L2 = outC->_L3.valid;
  noname = outC->_L2;
  outC->position = outC->_L19;
  outC->passed = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void MEM_locationOfReferenceLRBG_init_EVC_MEM_Support_Pkg(
  outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L22 = kcg_lit_int64(0);
  outC->_L21.nominal = kcg_lit_int64(0);
  outC->_L21.d_min = kcg_lit_int64(0);
  outC->_L21.d_max = kcg_lit_int64(0);
  outC->_L20.nid_engine = kcg_lit_int64(0);
  outC->_L20.nid_operational = kcg_lit_int64(0);
  outC->_L20.l_train = kcg_lit_int64(0);
  outC->_L20.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L20.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L20.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L20.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L20.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L20.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L20.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L20.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L20.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L20.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L20.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L20.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6.nominal = kcg_lit_int64(0);
  outC->_L6.d_min = kcg_lit_int64(0);
  outC->_L6.d_max = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_c = kcg_lit_int64(0);
  outC->_L3.nid_bg = kcg_lit_int64(0);
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L3.location.nominal = kcg_lit_int64(0);
  outC->_L3.location.d_min = kcg_lit_int64(0);
  outC->_L3.location.d_max = kcg_lit_int64(0);
  outC->_L3.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.valid = kcg_true;
  outC->_L3.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L3.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L3.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L3.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L3.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L3.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L3.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L3.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L3.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L3.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L3.missed = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = kcg_lit_int64(0);
  outC->_L1.trainPositionIsUnknown = kcg_true;
  outC->_L1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L1.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L1.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L1.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L1.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L1.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L1.LRBG.valid = kcg_true;
  outC->_L1.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L1.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L1.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L1.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L1.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1.LRBG.missed = kcg_true;
  outC->_L1.prvLRBG.valid = kcg_true;
  outC->_L1.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L1.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L1.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L1.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L1.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1.prvLRBG.missed = kcg_true;
  outC->_L1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1.linkingIsUsedOnboard = kcg_true;
  outC->_L1.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L1.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L1.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->passed = kcg_true;
  outC->position = kcg_lit_int64(0);
  /* _L13=(TM::Decode_NID_LRBG#1)/ */
  Decode_NID_LRBG_init_TM(&outC->Context_Decode_NID_LRBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_locationOfReferenceLRBG_reset_EVC_MEM_Support_Pkg(
  outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg *outC)
{
  /* _L13=(TM::Decode_NID_LRBG#1)/ */
  Decode_NID_LRBG_reset_TM(&outC->Context_Decode_NID_LRBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

