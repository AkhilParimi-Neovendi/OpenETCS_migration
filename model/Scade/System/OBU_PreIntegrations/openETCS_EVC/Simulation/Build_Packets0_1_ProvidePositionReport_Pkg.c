/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packets0_1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packets0_1/ */
void Build_Packets0_1_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg tmp1;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg op_call;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg _2_op_call;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L1, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L24, &outC->_L1.LRBG);
  /* _L19=(ProvidePositionReport_Pkg::DeterminePacketValidity#2)/ */
  DeterminePacketValidity_ProvidePositionReport_Pkg(
    &outC->_L24,
    &outC->Context_DeterminePacketValidity_2);
  outC->_L19 = outC->Context_DeterminePacketValidity_2.sendPacket0;
  outC->_L23 = outC->Context_DeterminePacketValidity_2.sendPacket1;
  outC->every1 = outC->_L23;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, posBGs);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L11,
    modeLevelStatus);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L4, odometry);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&outC->_L10, train2trackStatus);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L14, trainProps);
  /* _L20=(ProvidePositionReport_Pkg::Build_Packet0#2)/ */
  Build_Packet0_ProvidePositionReport_Pkg(
    &outC->_L5,
    &outC->_L11,
    &outC->_L4,
    &outC->_L10,
    &outC->_L14,
    &outC->_L1,
    &outC->Context_Build_Packet0_2);
  kcg_copy_Position_Report_TrainToTrack(
    &outC->_L20,
    &outC->Context_Build_Packet0_2.packet0);
  outC->_L7 = prvDirTrain;
  if (outC->every1) {
    /* _L21=(ProvidePositionReport_Pkg::Build_Packet1#2)/ */
    Build_Packet1_ProvidePositionReport_Pkg(
      &outC->_L20,
      outC->_L7,
      &outC->_L1,
      &outC->Context_Build_Packet1_2);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &op_call,
      &outC->Context_Build_Packet1_2.packet1);
  }
  outC->every = outC->_L19;
  if (outC->every) {
    /* _L22=(ProvidePositionReport_Pkg::Activate_Packet0#3)/ */
    Activate_Packet0_ProvidePositionReport_Pkg(
      &outC->_L20,
      &outC->Context_Activate_Packet0_3);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_2_op_call,
      &outC->Context_Activate_Packet0_3.out_packet0);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L22, &_2_op_call);
  }
  else {
    /* _L22= */
    if (outC->init) {
      kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
        &tmp,
        (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
          &emptyPacket0_ProvidePositionReport_Pkg);
    }
    else {
      kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&tmp, &outC->_L22);
    }
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L22, &tmp);
  }
  if (outC->every1) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L21, &op_call);
  }
  else {
    /* _L21= */
    if (outC->init) {
      kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
        &tmp1,
        (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
          &emptyPacket1_ProvidePositionReport_Pkg);
    }
    else {
      kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&tmp1, &outC->_L21);
    }
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L21, &tmp1);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->packet0,
    &outC->_L22);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->_L21);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Build_Packets0_1_init_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L24.valid = kcg_true;
  outC->_L24.nid_c = kcg_lit_int32(0);
  outC->_L24.nid_bg = kcg_lit_int32(0);
  outC->_L24.q_link = Q_LINK_Unlinked;
  outC->_L24.location.nominal = kcg_lit_int32(0);
  outC->_L24.location.d_min = kcg_lit_int32(0);
  outC->_L24.location.d_max = kcg_lit_int32(0);
  outC->_L24.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.valid = kcg_true;
  outC->_L24.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L24.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L24.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L24.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L24.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L24.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L24.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L24.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L24.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L24.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L24.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L24.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L24.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L24.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L24.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L24.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L24.missed = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L20.NID_PACKET = kcg_lit_int32(0);
  outC->_L20.L_PACKET = kcg_lit_int32(0);
  outC->_L20.qscale = Q_SCALE_10_cm_scale;
  outC->_L20.NID_LRBG = kcg_lit_int32(0);
  outC->_L20.D_LRBG = kcg_lit_int32(0);
  outC->_L20.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L20.dlrbg = Q_DLRBG_Reverse;
  outC->_L20.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L20.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L20.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L20.L_TRAININT = kcg_lit_int32(0);
  outC->_L20.V_TRAIN = kcg_lit_int32(0);
  outC->_L20.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L20.mode = M_MODE_Full_Supervision;
  outC->_L20.level = M_LEVEL_Level_0;
  outC->_L20.NID_NTC = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = kcg_lit_int32(0);
  outC->_L1.trainPositionIsUnknown = kcg_true;
  outC->_L1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1.LRBG.valid = kcg_true;
  outC->_L1.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.LRBG.missed = kcg_true;
  outC->_L1.prvLRBG.valid = kcg_true;
  outC->_L1.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.prvLRBG.missed = kcg_true;
  outC->_L1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1.linkingIsUsedOnboard = kcg_true;
  outC->_L1.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.timestamp = kcg_lit_int32(0);
  outC->_L4.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.odo.o_min = kcg_lit_int32(0);
  outC->_L4.odo.o_max = kcg_lit_int32(0);
  outC->_L4.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L4.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L4.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.acceleration = kcg_lit_int32(0);
  outC->_L4.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L5[idx4].valid = kcg_true;
    outC->_L5[idx4].nid_c = kcg_lit_int32(0);
    outC->_L5[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L5[idx4].q_link = Q_LINK_Unlinked;
    outC->_L5[idx4].location.nominal = kcg_lit_int32(0);
    outC->_L5[idx4].location.d_min = kcg_lit_int32(0);
    outC->_L5[idx4].location.d_max = kcg_lit_int32(0);
    outC->_L5[idx4].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.valid = kcg_true;
    outC->_L5[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L5[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L5[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.valid = kcg_true;
    outC->_L5[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L5[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L5[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L5[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L5[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L5[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
    }
    outC->_L5[idx4].missed = kcg_true;
  }
  outC->_L7 = Q_DIRTRAIN_Reverse;
  outC->_L10.nid_ntc = kcg_lit_int32(0);
  outC->_L10.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L11.currMode = M_MODE_Full_Supervision;
  outC->_L11.currLevel = M_LEVEL_Level_0;
  outC->_L11.levelTransitionBorderPassed = kcg_true;
  outC->_L14.nid_engine = kcg_lit_int32(0);
  outC->_L14.nid_operational = kcg_lit_int32(0);
  outC->_L14.l_train = kcg_lit_int32(0);
  outC->_L14.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L14.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L14.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L14.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L14.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L14.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L14.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L14.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L14.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L14.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L14.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L14.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L22.valid = kcg_true;
  outC->_L22.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L22.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L22.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L22.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L22.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L22.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L22.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L22.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L22.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L22.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L22.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L22.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L22.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L22.packet0.mode = M_MODE_Full_Supervision;
  outC->_L22.packet0.level = M_LEVEL_Level_0;
  outC->_L22.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L21.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L21.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L21.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L21.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L21.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L21.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L21.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L21.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L21.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L21.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L21.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L21.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L21.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L21.packet1.mode = M_MODE_Full_Supervision;
  outC->_L21.packet1.level = M_LEVEL_Level_0;
  outC->_L21.packet1.NID_NTC = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->packet1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->packet1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->packet1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->packet1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->packet1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->packet1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->packet0.valid = kcg_true;
  outC->packet0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->packet0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->packet0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->packet0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->packet0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->packet0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.packet0.level = M_LEVEL_Level_0;
  outC->packet0.packet0.NID_NTC = kcg_lit_int32(0);
  /* _L22=(ProvidePositionReport_Pkg::Activate_Packet0#3)/ */
  Activate_Packet0_init_ProvidePositionReport_Pkg(
    &outC->Context_Activate_Packet0_3);
  /* _L21=(ProvidePositionReport_Pkg::Build_Packet1#2)/ */
  Build_Packet1_init_ProvidePositionReport_Pkg(&outC->Context_Build_Packet1_2);
  /* _L20=(ProvidePositionReport_Pkg::Build_Packet0#2)/ */
  Build_Packet0_init_ProvidePositionReport_Pkg(&outC->Context_Build_Packet0_2);
  /* _L19=(ProvidePositionReport_Pkg::DeterminePacketValidity#2)/ */
  DeterminePacketValidity_init_ProvidePositionReport_Pkg(
    &outC->Context_DeterminePacketValidity_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packets0_1_reset_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L22=(ProvidePositionReport_Pkg::Activate_Packet0#3)/ */
  Activate_Packet0_reset_ProvidePositionReport_Pkg(
    &outC->Context_Activate_Packet0_3);
  /* _L21=(ProvidePositionReport_Pkg::Build_Packet1#2)/ */
  Build_Packet1_reset_ProvidePositionReport_Pkg(&outC->Context_Build_Packet1_2);
  /* _L20=(ProvidePositionReport_Pkg::Build_Packet0#2)/ */
  Build_Packet0_reset_ProvidePositionReport_Pkg(&outC->Context_Build_Packet0_2);
  /* _L19=(ProvidePositionReport_Pkg::DeterminePacketValidity#2)/ */
  DeterminePacketValidity_reset_ProvidePositionReport_Pkg(
    &outC->Context_DeterminePacketValidity_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packets0_1_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

