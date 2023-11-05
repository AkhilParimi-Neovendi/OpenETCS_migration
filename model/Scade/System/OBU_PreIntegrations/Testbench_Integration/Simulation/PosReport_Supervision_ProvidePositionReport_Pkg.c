/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosReport_Supervision_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::PosReport_Supervision/ */
void PosReport_Supervision_ProvidePositionReport_Pkg(
  /* present/ */
  kcg_bool present,
  /* posRepParam/ */
  P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* rbcComm/ */
  RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* trackInfo/ */
  LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool op_call;

  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L1,
    posRepParam);
  outC->_L81 = outC->_L1.valid;
  outC->every = outC->_L81;
  outC->_L43 = present;
  outC->_L44 = systemTime;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L35, trainPos);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L36, posBGs);
  if (outC->every) {
    /* _L52=(ProvidePositionReport_Pkg::Supervise_PosRepParam)/ */
    Supervise_PosRepParam_ProvidePositionReport_Pkg(
      &outC->_L1,
      outC->_L43,
      outC->_L44,
      &outC->_L35,
      &outC->_L36,
      &outC->Context_Supervise_PosRepParam);
    op_call = outC->Context_Supervise_PosRepParam.trigger;
  }
  outC->_L82 = kcg_false;
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L80,
    trackInfo);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&outC->_L79, rbcComm);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&outC->_L78, train2trackStatus);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L77, odometry);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L76,
    modeLevelStatus);
  /* _L69=(ProvidePositionReport_Pkg::Supervise_Events#1)/ */
  Supervise_Events_ProvidePositionReport_Pkg(
    &outC->_L36,
    &outC->_L35,
    &outC->_L76,
    &outC->_L77,
    &outC->_L78,
    &outC->_L79,
    &outC->_L80,
    &outC->Context_Supervise_Events_1);
  outC->_L69 = outC->Context_Supervise_Events_1.result;
  if (outC->every) {
    outC->_L52 = op_call;
  }
  else {
    outC->_L52 = outC->_L82;
  }
  outC->_L70 = outC->_L52 | outC->_L69;
  outC->trigger = outC->_L70;
}

#ifndef KCG_USER_DEFINED_INIT
void PosReport_Supervision_init_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80.minSafeRearEndPassed = kcg_true;
  outC->_L80.maxSafeFrontEndPassed = kcg_true;
  outC->_L79.newSessionEstablished = kcg_true;
  outC->_L78.nid_ntc = kcg_lit_int32(0);
  outC->_L78.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L77.valid = kcg_true;
  outC->_L77.timestamp = kcg_lit_int32(0);
  outC->_L77.odo.o_nominal = kcg_lit_int32(0);
  outC->_L77.odo.o_min = kcg_lit_int32(0);
  outC->_L77.odo.o_max = kcg_lit_int32(0);
  outC->_L77.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L77.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L77.speed.v_lower = kcg_lit_int32(0);
  outC->_L77.speed.v_upper = kcg_lit_int32(0);
  outC->_L77.acceleration = kcg_lit_int32(0);
  outC->_L77.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L77.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L76.currMode = M_MODE_Full_Supervision;
  outC->_L76.currLevel = M_LEVEL_Level_0;
  outC->_L76.levelTransitionBorderPassed = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43 = kcg_true;
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L36[idx1].valid = kcg_true;
    outC->_L36[idx1].nid_c = kcg_lit_int32(0);
    outC->_L36[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L36[idx1].q_link = Q_LINK_Unlinked;
    outC->_L36[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L36[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L36[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L36[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.valid = kcg_true;
    outC->_L36[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L36[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L36[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L36[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.valid = kcg_true;
    outC->_L36[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L36[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L36[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L36[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L36[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L36[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L36[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L36[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L36[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L36[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L36[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L36[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L36[idx1].missed = kcg_true;
  }
  outC->_L35.valid = kcg_true;
  outC->_L35.timestamp = kcg_lit_int32(0);
  outC->_L35.trainPositionIsUnknown = kcg_true;
  outC->_L35.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L35.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L35.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L35.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L35.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L35.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L35.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L35.LRBG.valid = kcg_true;
  outC->_L35.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L35.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L35.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L35.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L35.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L35.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L35.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L35.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L35.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L35.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L35.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L35.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L35.LRBG.missed = kcg_true;
  outC->_L35.prvLRBG.valid = kcg_true;
  outC->_L35.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L35.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L35.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L35.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L35.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L35.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L35.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L35.prvLRBG.missed = kcg_true;
  outC->_L35.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L35.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L35.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L35.linkingIsUsedOnboard = kcg_true;
  outC->_L35.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L35.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L35.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.t_cycloc = kcg_lit_int32(0);
  outC->_L1.d_cycloc = kcg_lit_int32(0);
  outC->_L1.m_loc = M_LOC_Now;
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 2; idx4++) {
    outC->_L1.iterPacket58List[idx4].d_loc = kcg_lit_int32(0);
    outC->_L1.iterPacket58List[idx4].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->every = kcg_true;
  outC->trigger = kcg_true;
  /* _L69=(ProvidePositionReport_Pkg::Supervise_Events#1)/ */
  Supervise_Events_init_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_Events_1);
  /* _L52=(ProvidePositionReport_Pkg::Supervise_PosRepParam)/ */
  Supervise_PosRepParam_init_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_PosRepParam);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PosReport_Supervision_reset_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  /* _L69=(ProvidePositionReport_Pkg::Supervise_Events#1)/ */
  Supervise_Events_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_Events_1);
  /* _L52=(ProvidePositionReport_Pkg::Supervise_PosRepParam)/ */
  Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_PosRepParam);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_PosReport_Supervision_ProvidePositionReport_Pkg(
  SV_PosReport_Supervision_ProvidePositionReport_Pkg *SV,
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  kcg_save_SV_Supervise_PosRepParam_ProvidePositionReport_Pkg(
    &SV->Context_Supervise_PosRepParam,
    &outC->Context_Supervise_PosRepParam);
  kcg_save_SV_Supervise_Events_ProvidePositionReport_Pkg(
    &SV->Context_Supervise_Events_1,
    &outC->Context_Supervise_Events_1);
}

void kcg_load_SV_PosReport_Supervision_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC,
  SV_PosReport_Supervision_ProvidePositionReport_Pkg *SV)
{
  kcg_load_SV_Supervise_PosRepParam_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_PosRepParam,
    &SV->Context_Supervise_PosRepParam);
  kcg_load_SV_Supervise_Events_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_Events_1,
    &SV->Context_Supervise_Events_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosReport_Supervision_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

