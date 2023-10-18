/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet0/ */
void Build_Packet0_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC)
{
  static kcg_int64 noname;
  /* modeLevelStatus/ */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;

  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &last_modeLevelStatus,
    &outC->mem_modeLevelStatus);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    modeLevelStatus);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L10, odometry);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L4, &outC->_L10.speed);
  outC->_L2 = outC->_L4.v_upper;
  /* _L41=(RadioSupport_Pkg::vOdometry2Extern#1)/ */
  vOdometry2Extern_RadioSupport_Pkg(
    outC->_L2,
    &outC->Context_vOdometry2Extern_1);
  outC->_L41 = outC->Context_vOdometry2Extern_1.v_SRS;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L27, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L16, &outC->_L27.LRBG);
  outC->_L39 = outC->_L16.nid_c;
  outC->_L25 = outC->_L16.nid_bg;
  /* _L40=(ProvidePositionReport_Pkg::convert2LRBG#1)/ */
  convert2LRBG_ProvidePositionReport_Pkg(
    outC->_L39,
    outC->_L25,
    &outC->Context_convert2LRBG_1);
  outC->_L40 = outC->Context_convert2LRBG_1.nid_lrbg;
  outC->_L19 = cQ_SCALE_ProvidePositionReport_Pkg;
  /* _L6=(ProvidePositionReport_Pkg::op_DOUBTOVER#1)/ */
  op_DOUBTOVER_ProvidePositionReport_Pkg(
    &outC->_L27,
    &outC->Context_op_DOUBTOVER_1);
  outC->_L6 = outC->Context_op_DOUBTOVER_1.l_doubtover;
  /* _L38=(ProvidePositionReport_Pkg::scaleInternalType#3)/ */
  scaleInternalType_ProvidePositionReport_Pkg(
    outC->_L19,
    outC->_L6,
    &outC->Context_scaleInternalType_3);
  outC->_L38 = outC->Context_scaleInternalType_3.scaledValue;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L7, trainProps);
  /* _L14=(ProvidePositionReport_Pkg::CalculateSafeTrainLength#1)/ */
  CalculateSafeTrainLength_ProvidePositionReport_Pkg(
    &outC->_L7,
    &outC->_L27,
    &outC->Context_CalculateSafeTrainLength_1);
  outC->_L14 = outC->Context_CalculateSafeTrainLength_1.safeTrainLength;
  outC->_L15 = outC->Context_CalculateSafeTrainLength_1.minSafeRearEnd;
  /* _L37=(ProvidePositionReport_Pkg::scaleInternalType#2)/ */
  scaleInternalType_ProvidePositionReport_Pkg(
    outC->_L19,
    outC->_L14,
    &outC->Context_scaleInternalType_2);
  outC->_L37 = outC->Context_scaleInternalType_2.scaledValue;
  /* _L23=(ProvidePositionReport_Pkg::op_DOUBTUNDER#1)/ */
  op_DOUBTUNDER_ProvidePositionReport_Pkg(
    &outC->_L27,
    &outC->Context_op_DOUBTUNDER_1);
  outC->_L23 = outC->Context_op_DOUBTUNDER_1.l_doubtunder;
  /* _L36=(ProvidePositionReport_Pkg::scaleInternalType#1)/ */
  scaleInternalType_ProvidePositionReport_Pkg(
    outC->_L19,
    outC->_L23,
    &outC->Context_scaleInternalType_1);
  outC->_L36 = outC->Context_scaleInternalType_1.scaledValue;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, posBGs);
  /* _L22=(ProvidePositionReport_Pkg::op_LRBG#1)/ */
  op_LRBG_ProvidePositionReport_Pkg(
    &outC->_L18,
    &outC->_L27,
    &outC->Context_op_LRBG_1);
  outC->_L22 = outC->Context_op_LRBG_1.d_lrbg;
  /* _L35=(ProvidePositionReport_Pkg::scaleInternalType)/ */
  scaleInternalType_ProvidePositionReport_Pkg(
    outC->_L19,
    outC->_L22,
    &outC->Context_scaleInternalType);
  outC->_L35 = outC->Context_scaleInternalType.scaledValue;
  outC->_L26 = outC->_L27.trainOrientationToLRBG;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&outC->_L8, train2trackStatus);
  outC->_L24 = outC->_L8.nid_ntc;
  noname = outC->_L15;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L12 = outC->_L27.nominalOrReverseToLRBG;
  outC->_L13 = outC->_L8.q_length;
  outC->_L1 = outC->_L27.trainRunningDirectionToLRBG;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L21,
    modeLevelStatus);
  outC->_L20 = outC->_L21.currMode;
  outC->_L9 = outC->_L21.currLevel;
  outC->_L11.NID_PACKET = outC->_L3;
  outC->_L11.L_PACKET = outC->_L3;
  outC->_L11.qscale = outC->_L19;
  outC->_L11.NID_LRBG = outC->_L40;
  outC->_L11.D_LRBG = outC->_L35;
  outC->_L11.dirlrbg = outC->_L26;
  outC->_L11.dlrbg = outC->_L12;
  outC->_L11.L_DOUBTOVER = outC->_L38;
  outC->_L11.L_DOUBTUNDER = outC->_L36;
  outC->_L11.length = outC->_L13;
  outC->_L11.L_TRAININT = outC->_L37;
  outC->_L11.V_TRAIN = outC->_L41;
  outC->_L11.dirtrain = outC->_L1;
  outC->_L11.mode = outC->_L20;
  outC->_L11.level = outC->_L9;
  outC->_L11.NID_NTC = outC->_L24;
  kcg_copy_Position_Report_TrainToTrack(&outC->packet0, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_Packet0_init_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L41 = kcg_lit_int64(0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L1 = Q_DIRTRAIN_Reverse;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4.v_safeNominal = kcg_lit_int64(0);
  outC->_L4.v_rawNominal = kcg_lit_int64(0);
  outC->_L4.v_lower = kcg_lit_int64(0);
  outC->_L4.v_upper = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7.nid_engine = kcg_lit_int64(0);
  outC->_L7.nid_operational = kcg_lit_int64(0);
  outC->_L7.l_train = kcg_lit_int64(0);
  outC->_L7.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L7.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L7.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L7.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L7.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L7.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L7.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L7.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L7.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L7.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L7.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L7.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L8.nid_ntc = kcg_lit_int64(0);
  outC->_L8.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L9 = M_LEVEL_Level_0;
  outC->_L10.valid = kcg_true;
  outC->_L10.timestamp = kcg_lit_int64(0);
  outC->_L10.odo.o_nominal = kcg_lit_int64(0);
  outC->_L10.odo.o_min = kcg_lit_int64(0);
  outC->_L10.odo.o_max = kcg_lit_int64(0);
  outC->_L10.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L10.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L10.speed.v_lower = kcg_lit_int64(0);
  outC->_L10.speed.v_upper = kcg_lit_int64(0);
  outC->_L10.acceleration = kcg_lit_int64(0);
  outC->_L10.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.NID_PACKET = kcg_lit_int64(0);
  outC->_L11.L_PACKET = kcg_lit_int64(0);
  outC->_L11.qscale = Q_SCALE_10_cm_scale;
  outC->_L11.NID_LRBG = kcg_lit_int64(0);
  outC->_L11.D_LRBG = kcg_lit_int64(0);
  outC->_L11.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L11.dlrbg = Q_DLRBG_Reverse;
  outC->_L11.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L11.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L11.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L11.L_TRAININT = kcg_lit_int64(0);
  outC->_L11.V_TRAIN = kcg_lit_int64(0);
  outC->_L11.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L11.mode = M_MODE_Full_Supervision;
  outC->_L11.level = M_LEVEL_Level_0;
  outC->_L11.NID_NTC = kcg_lit_int64(0);
  outC->_L12 = Q_DLRBG_Reverse;
  outC->_L13 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L16.valid = kcg_true;
  outC->_L16.nid_c = kcg_lit_int64(0);
  outC->_L16.nid_bg = kcg_lit_int64(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L16.location.nominal = kcg_lit_int64(0);
  outC->_L16.location.d_min = kcg_lit_int64(0);
  outC->_L16.location.d_max = kcg_lit_int64(0);
  outC->_L16.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.valid = kcg_true;
  outC->_L16.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L16.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L16.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L16.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L16.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L16.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L16.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L16.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L16.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L16.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L16.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L16.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L16.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L16.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L16.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L16.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L16.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L16.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L16.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L16.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L16.missed = kcg_true;
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L18[idx2].valid = kcg_true;
    outC->_L18[idx2].nid_c = kcg_lit_int64(0);
    outC->_L18[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L18[idx2].q_link = Q_LINK_Unlinked;
    outC->_L18[idx2].location.nominal = kcg_lit_int64(0);
    outC->_L18[idx2].location.d_min = kcg_lit_int64(0);
    outC->_L18[idx2].location.d_max = kcg_lit_int64(0);
    outC->_L18[idx2].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.valid = kcg_true;
    outC->_L18[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L18[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.valid = kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L18[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L18[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L18[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
    }
    outC->_L18[idx2].missed = kcg_true;
  }
  outC->_L19 = Q_SCALE_10_cm_scale;
  outC->_L20 = M_MODE_Full_Supervision;
  outC->_L21.currMode = M_MODE_Full_Supervision;
  outC->_L21.currLevel = M_LEVEL_Level_0;
  outC->_L21.levelTransitionBorderPassed = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L26 = Q_DIRLRBG_Reverse;
  outC->_L27.valid = kcg_true;
  outC->_L27.timestamp = kcg_lit_int64(0);
  outC->_L27.trainPositionIsUnknown = kcg_true;
  outC->_L27.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L27.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L27.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L27.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L27.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L27.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L27.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L27.LRBG.valid = kcg_true;
  outC->_L27.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L27.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L27.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L27.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L27.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L27.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L27.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L27.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L27.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L27.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L27.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L27.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L27.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L27.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L27.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L27.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L27.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L27.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L27.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L27.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L27.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L27.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L27.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L27.LRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L27.LRBG.missed = kcg_true;
  outC->_L27.prvLRBG.valid = kcg_true;
  outC->_L27.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L27.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L27.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L27.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L27.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L27.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L27.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L27.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L27.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L27.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L27.prvLRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
  }
  outC->_L27.prvLRBG.missed = kcg_true;
  outC->_L27.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L27.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L27.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L27.linkingIsUsedOnboard = kcg_true;
  outC->_L27.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L27.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L27.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->packet0.NID_PACKET = kcg_lit_int64(0);
  outC->packet0.L_PACKET = kcg_lit_int64(0);
  outC->packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.NID_LRBG = kcg_lit_int64(0);
  outC->packet0.D_LRBG = kcg_lit_int64(0);
  outC->packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.L_TRAININT = kcg_lit_int64(0);
  outC->packet0.V_TRAIN = kcg_lit_int64(0);
  outC->packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.level = M_LEVEL_Level_0;
  outC->packet0.NID_NTC = kcg_lit_int64(0);
  /* _L35=(ProvidePositionReport_Pkg::scaleInternalType)/ */
  scaleInternalType_init_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType);
  /* _L22=(ProvidePositionReport_Pkg::op_LRBG#1)/ */
  op_LRBG_init_ProvidePositionReport_Pkg(&outC->Context_op_LRBG_1);
  /* _L36=(ProvidePositionReport_Pkg::scaleInternalType#1)/ */
  scaleInternalType_init_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType_1);
  /* _L23=(ProvidePositionReport_Pkg::op_DOUBTUNDER#1)/ */
  op_DOUBTUNDER_init_ProvidePositionReport_Pkg(&outC->Context_op_DOUBTUNDER_1);
  /* _L37=(ProvidePositionReport_Pkg::scaleInternalType#2)/ */
  scaleInternalType_init_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType_2);
  /* _L14=(ProvidePositionReport_Pkg::CalculateSafeTrainLength#1)/ */
  CalculateSafeTrainLength_init_ProvidePositionReport_Pkg(
    &outC->Context_CalculateSafeTrainLength_1);
  /* _L38=(ProvidePositionReport_Pkg::scaleInternalType#3)/ */
  scaleInternalType_init_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType_3);
  /* _L6=(ProvidePositionReport_Pkg::op_DOUBTOVER#1)/ */
  op_DOUBTOVER_init_ProvidePositionReport_Pkg(&outC->Context_op_DOUBTOVER_1);
  /* _L40=(ProvidePositionReport_Pkg::convert2LRBG#1)/ */
  convert2LRBG_init_ProvidePositionReport_Pkg(&outC->Context_convert2LRBG_1);
  /* _L41=(RadioSupport_Pkg::vOdometry2Extern#1)/ */
  vOdometry2Extern_init_RadioSupport_Pkg(&outC->Context_vOdometry2Extern_1);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
      &cModeAndLevelStatus_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packet0_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC)
{
  /* _L35=(ProvidePositionReport_Pkg::scaleInternalType)/ */
  scaleInternalType_reset_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType);
  /* _L22=(ProvidePositionReport_Pkg::op_LRBG#1)/ */
  op_LRBG_reset_ProvidePositionReport_Pkg(&outC->Context_op_LRBG_1);
  /* _L36=(ProvidePositionReport_Pkg::scaleInternalType#1)/ */
  scaleInternalType_reset_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType_1);
  /* _L23=(ProvidePositionReport_Pkg::op_DOUBTUNDER#1)/ */
  op_DOUBTUNDER_reset_ProvidePositionReport_Pkg(&outC->Context_op_DOUBTUNDER_1);
  /* _L37=(ProvidePositionReport_Pkg::scaleInternalType#2)/ */
  scaleInternalType_reset_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType_2);
  /* _L14=(ProvidePositionReport_Pkg::CalculateSafeTrainLength#1)/ */
  CalculateSafeTrainLength_reset_ProvidePositionReport_Pkg(
    &outC->Context_CalculateSafeTrainLength_1);
  /* _L38=(ProvidePositionReport_Pkg::scaleInternalType#3)/ */
  scaleInternalType_reset_ProvidePositionReport_Pkg(
    &outC->Context_scaleInternalType_3);
  /* _L6=(ProvidePositionReport_Pkg::op_DOUBTOVER#1)/ */
  op_DOUBTOVER_reset_ProvidePositionReport_Pkg(&outC->Context_op_DOUBTOVER_1);
  /* _L40=(ProvidePositionReport_Pkg::convert2LRBG#1)/ */
  convert2LRBG_reset_ProvidePositionReport_Pkg(&outC->Context_convert2LRBG_1);
  /* _L41=(RadioSupport_Pkg::vOdometry2Extern#1)/ */
  vOdometry2Extern_reset_RadioSupport_Pkg(&outC->Context_vOdometry2Extern_1);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
      &cModeAndLevelStatus_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packet0_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

