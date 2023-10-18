/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MRSP_TA_MRSP_new.h"

/* TA_MRSP_new::Build_MRSP/ */
void Build_MRSP_TA_MRSP_new(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrainDataIn/ */
  FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* ModeAndLevel_in/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* train_position/ */
  trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_MRSP_TA_MRSP_new *outC)
{
  static MRSP_Profile_t_TrackAtlasTypes tmp;
  static MRSP_Profile_t_TrackAtlasTypes op_call;
  static FromTIU_t_TrackAtlasTypes noname;

  outC->_L24 = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L16, MessageIn);
  /* _L3=(TA_SpeedProfiles::SP_ASP#1)/ */
  SP_ASP_TA_SpeedProfiles(outC->_L24, &outC->_L16, &outC->Context_SP_ASP_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L3, &outC->Context_SP_ASP_1.ASP);
  /* _L4=(TA_SpeedProfiles::SP_LX_SR#1)/ */
  SP_LX_SR_TA_SpeedProfiles(outC->_L24, &outC->_L16, &outC->Context_SP_LX_SR_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L4, &outC->Context_SP_LX_SR_1.LX_SR);
  outC->_L34 = kcg_lit_int64(0);
  /* _L5=(TA_SpeedProfiles::SP_MaxTrainSpeed#1)/ */
  SP_MaxTrainSpeed_TA_SpeedProfiles(
    outC->_L24,
    outC->_L34,
    &outC->Context_SP_MaxTrainSpeed_1);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L5,
    &outC->Context_SP_MaxTrainSpeed_1.MaxTrainSpeed);
  outC->_L27 = kcg_false;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L25, ModeAndLevel_in);
  /* _L7=(TA_SpeedProfiles::SP_ModeRelated#1)/ */
  SP_ModeRelated_TA_SpeedProfiles(
    outC->_L24,
    outC->_L27,
    &outC->_L16,
    &outC->_L25,
    &outC->Context_SP_ModeRelated_1);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L7,
    &outC->Context_SP_ModeRelated_1.ModeRelated);
  /* _L8=(TA_SpeedProfiles::SP_OverrideRelated#1)/ */
  SP_OverrideRelated_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->Context_SP_OverrideRelated_1);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L8,
    &outC->Context_SP_OverrideRelated_1.OverrideRelated);
  /* _L9=(TA_SpeedProfiles::SP_PBD_SR#1)/ */
  SP_PBD_SR_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->Context_SP_PBD_SR_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L9, &outC->Context_SP_PBD_SR_1.PBD_SR);
  /* _L11=(TA_SpeedProfiles::SP_SignalingRelated#1)/ */
  SP_SignalingRelated_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->Context_SP_SignalingRelated_1);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L11,
    &outC->Context_SP_SignalingRelated_1.SignalingRelated);
  kcg_copy_SSP_cat_t_TA_MRSP_new(
    &outC->_L29,
    (SSP_cat_t_TA_MRSP_new *) &XSSPold_TA_MRSP_new);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L23, train_position);
  outC->_L22 = train_length;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L35, balisegroups);
  /* _L26=(TA_SSP_new::Build_StaticSpeedProfile#1)/ */
  Build_StaticSpeedProfile_TA_SSP_new(
    outC->_L24,
    &outC->_L16,
    &outC->_L23,
    outC->_L22,
    &outC->_L35,
    &outC->Context_Build_StaticSpeedProfile_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L26,
    &outC->Context_Build_StaticSpeedProfile_1.SSP);
  outC->_L21 = outC->Context_Build_StaticSpeedProfile_1.updated;
  outC->_L20 = outC->Context_Build_StaticSpeedProfile_1.available;
  /* _L13=(TA_SpeedProfiles::SP_STM_MaxSpeed#1)/ */
  SP_STM_MaxSpeed_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->Context_SP_STM_MaxSpeed_1);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L13,
    &outC->Context_SP_STM_MaxSpeed_1.STM_MaxSpeed);
  /* _L14=(TA_SpeedProfiles::SP_STM_SystemSpeed#1)/ */
  SP_STM_SystemSpeed_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->Context_SP_STM_SystemSpeed_1);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L14,
    &outC->Context_SP_STM_SystemSpeed_1.STM_SystemSpeed);
  /* _L15=(TA_SpeedProfiles::SP_TSR#1)/ */
  SP_TSR_TA_SpeedProfiles(outC->_L24, &outC->_L16, &outC->Context_SP_TSR_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L15, &outC->Context_SP_TSR_1.TSR);
  /* _L19=(TA_SpeedProfiles::Build_SSP_Matrix#1)/ */
  Build_SSP_Matrix_TA_SpeedProfiles(
    &outC->_L3,
    &outC->_L4,
    &outC->_L5,
    &outC->_L7,
    &outC->_L8,
    &outC->_L9,
    &outC->_L11,
    &outC->_L29,
    outC->_L21,
    &outC->_L13,
    &outC->_L14,
    &outC->_L15,
    &outC->Context_Build_SSP_Matrix_1);
  outC->_L19 = outC->Context_Build_SSP_Matrix_1.SSP_matrix_updated;
  kcg_copy_SSP_matrix_t_TA_MRSP(
    &outC->_L2,
    &outC->Context_Build_SSP_Matrix_1.SSP_matrix_out);
  outC->every = outC->_L19;
  if (outC->every) {
    /* _L1=(TA_MRSP_new::Calculate_MRSP1#1)/ */
    Calculate_MRSP1_TA_MRSP_new(&outC->_L2, &outC->Context_Calculate_MRSP1_1);
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &op_call,
      &outC->Context_Calculate_MRSP1_1.MRSP);
  }
  outC->_L17 = TrainDataIn;
  noname = outC->_L17;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L26);
  outC->SSP_available = outC->_L20;
  outC->newMRSP = outC->_L19;
  if (outC->every) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L1, &op_call);
  }
  else {
    /* _L1= */
    if (outC->init) {
      kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
        &tmp,
        (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP_new);
    }
    else {
      kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&tmp, &outC->_L1);
    }
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L1, &tmp);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L1);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Build_MRSP_init_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC)
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
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;

  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L35[idx1].valid = kcg_true;
    outC->_L35[idx1].nid_c = kcg_lit_int64(0);
    outC->_L35[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L35[idx1].q_link = Q_LINK_Unlinked;
    outC->_L35[idx1].location.nominal = kcg_lit_int64(0);
    outC->_L35[idx1].location.d_min = kcg_lit_int64(0);
    outC->_L35[idx1].location.d_max = kcg_lit_int64(0);
    outC->_L35[idx1].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.valid = kcg_true;
    outC->_L35[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L35[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L35[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L35[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L35[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L35[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L35[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.valid = kcg_true;
    outC->_L35[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L35[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L35[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L35[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L35[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L35[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L35[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L35[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L35[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L35[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L35[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L35[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
    }
    outC->_L35[idx1].missed = kcg_true;
  }
  outC->_L22 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L29[idx2].target = kcg_lit_int64(0);
    outC->_L29[idx2].speed = kcg_lit_int64(0);
  }
  outC->_L27 = kcg_true;
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L26[idx3].valid = kcg_true;
    outC->_L26[idx3].d_static_abs = kcg_lit_int64(0);
    outC->_L26[idx3].d_static_LRBG = kcg_lit_int64(0);
    outC->_L26[idx3].q_train_length_corr = kcg_true;
    outC->_L26[idx3].v_static = kcg_lit_int64(0);
  }
  outC->_L25.compatibleModeAndLevel = kcg_true;
  outC->_L25.level = M_LEVEL_Level_0;
  outC->_L25.newLevel = kcg_true;
  outC->_L25.Mode = M_MODE_Full_Supervision;
  outC->_L25.newMode = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23.valid = kcg_true;
  outC->_L23.timestamp = kcg_lit_int64(0);
  outC->_L23.trainPositionIsUnknown = kcg_true;
  outC->_L23.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L23.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L23.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L23.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L23.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L23.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L23.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L23.LRBG.valid = kcg_true;
  outC->_L23.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L23.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L23.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L23.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L23.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L23.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L23.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L23.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L23.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
  }
  outC->_L23.LRBG.missed = kcg_true;
  outC->_L23.prvLRBG.valid = kcg_true;
  outC->_L23.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L23.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L23.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L23.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L23.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L23.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L23.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
  }
  outC->_L23.prvLRBG.missed = kcg_true;
  outC->_L23.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L23.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L23.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L23.linkingIsUsedOnboard = kcg_true;
  outC->_L23.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L23.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L23.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.source = msrc_undefined_Common_Types_Pkg;
  outC->_L16.radioMetadata.t_train_reference = kcg_true;
  outC->_L16.radioMetadata.nid_em = kcg_true;
  outC->_L16.radioMetadata.q_scale = kcg_true;
  outC->_L16.radioMetadata.d_sr = kcg_true;
  outC->_L16.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L16.radioMetadata.d_ref = kcg_true;
  outC->_L16.radioMetadata.q_dir = kcg_true;
  outC->_L16.radioMetadata.d_emergencystop = kcg_true;
  outC->_L16.radioMetadata.m_version = kcg_true;
  outC->_L16.BG_Common_Header.valid = kcg_true;
  outC->_L16.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L16.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L16.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L16.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L16.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L16.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L16.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L16.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L16.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L16.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L16.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L16.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L16.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L16.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L16.sendingRBC.valid = kcg_true;
  outC->_L16.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L16.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L16.sendingRBC.device_id = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L15[idx8].target = kcg_lit_int64(0);
    outC->_L15[idx8].speed = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->_L14[idx9].target = kcg_lit_int64(0);
    outC->_L14[idx9].speed = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 50; idx10++) {
    outC->_L13[idx10].target = kcg_lit_int64(0);
    outC->_L13[idx10].speed = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 50; idx11++) {
    outC->_L11[idx11].target = kcg_lit_int64(0);
    outC->_L11[idx11].speed = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 50; idx12++) {
    outC->_L9[idx12].target = kcg_lit_int64(0);
    outC->_L9[idx12].speed = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 50; idx13++) {
    outC->_L8[idx13].target = kcg_lit_int64(0);
    outC->_L8[idx13].speed = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 50; idx14++) {
    outC->_L7[idx14].target = kcg_lit_int64(0);
    outC->_L7[idx14].speed = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 50; idx15++) {
    outC->_L5[idx15].target = kcg_lit_int64(0);
    outC->_L5[idx15].speed = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 50; idx16++) {
    outC->_L4[idx16].target = kcg_lit_int64(0);
    outC->_L4[idx16].speed = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 50; idx17++) {
    outC->_L3[idx17].target = kcg_lit_int64(0);
    outC->_L3[idx17].speed = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 11; idx19++) {
    for (idx18 = 0; idx18 < 50; idx18++) {
      outC->_L2[idx19][idx18].target = kcg_lit_int64(0);
      outC->_L2[idx19][idx18].speed = kcg_lit_int64(0);
    }
  }
  outC->every = kcg_true;
  for (idx20 = 0; idx20 < 110; idx20++) {
    outC->_L1[idx20].valid = kcg_true;
    outC->_L1[idx20].Loc_Abs = kcg_lit_int64(0);
    outC->_L1[idx20].Loc_LRBG = kcg_lit_int64(0);
    outC->_L1[idx20].MRS = kcg_lit_int64(0);
  }
  outC->init = kcg_true;
  for (idx21 = 0; idx21 < 50; idx21++) {
    outC->SSP[idx21].valid = kcg_true;
    outC->SSP[idx21].d_static_abs = kcg_lit_int64(0);
    outC->SSP[idx21].d_static_LRBG = kcg_lit_int64(0);
    outC->SSP[idx21].q_train_length_corr = kcg_true;
    outC->SSP[idx21].v_static = kcg_lit_int64(0);
  }
  outC->SSP_available = kcg_true;
  for (idx22 = 0; idx22 < 110; idx22++) {
    outC->MRSP[idx22].valid = kcg_true;
    outC->MRSP[idx22].Loc_Abs = kcg_lit_int64(0);
    outC->MRSP[idx22].Loc_LRBG = kcg_lit_int64(0);
    outC->MRSP[idx22].MRS = kcg_lit_int64(0);
  }
  outC->newMRSP = kcg_true;
  /* _L1=(TA_MRSP_new::Calculate_MRSP1#1)/ */
  Calculate_MRSP1_init_TA_MRSP_new(&outC->Context_Calculate_MRSP1_1);
  /* _L19=(TA_SpeedProfiles::Build_SSP_Matrix#1)/ */
  Build_SSP_Matrix_init_TA_SpeedProfiles(&outC->Context_Build_SSP_Matrix_1);
  /* _L15=(TA_SpeedProfiles::SP_TSR#1)/ */
  SP_TSR_init_TA_SpeedProfiles(&outC->Context_SP_TSR_1);
  /* _L14=(TA_SpeedProfiles::SP_STM_SystemSpeed#1)/ */
  SP_STM_SystemSpeed_init_TA_SpeedProfiles(&outC->Context_SP_STM_SystemSpeed_1);
  /* _L13=(TA_SpeedProfiles::SP_STM_MaxSpeed#1)/ */
  SP_STM_MaxSpeed_init_TA_SpeedProfiles(&outC->Context_SP_STM_MaxSpeed_1);
  /* _L26=(TA_SSP_new::Build_StaticSpeedProfile#1)/ */
  Build_StaticSpeedProfile_init_TA_SSP_new(
    &outC->Context_Build_StaticSpeedProfile_1);
  /* _L11=(TA_SpeedProfiles::SP_SignalingRelated#1)/ */
  SP_SignalingRelated_init_TA_SpeedProfiles(
    &outC->Context_SP_SignalingRelated_1);
  /* _L9=(TA_SpeedProfiles::SP_PBD_SR#1)/ */
  SP_PBD_SR_init_TA_SpeedProfiles(&outC->Context_SP_PBD_SR_1);
  /* _L8=(TA_SpeedProfiles::SP_OverrideRelated#1)/ */
  SP_OverrideRelated_init_TA_SpeedProfiles(&outC->Context_SP_OverrideRelated_1);
  /* _L7=(TA_SpeedProfiles::SP_ModeRelated#1)/ */
  SP_ModeRelated_init_TA_SpeedProfiles(&outC->Context_SP_ModeRelated_1);
  /* _L5=(TA_SpeedProfiles::SP_MaxTrainSpeed#1)/ */
  SP_MaxTrainSpeed_init_TA_SpeedProfiles(&outC->Context_SP_MaxTrainSpeed_1);
  /* _L4=(TA_SpeedProfiles::SP_LX_SR#1)/ */
  SP_LX_SR_init_TA_SpeedProfiles(&outC->Context_SP_LX_SR_1);
  /* _L3=(TA_SpeedProfiles::SP_ASP#1)/ */
  SP_ASP_init_TA_SpeedProfiles(&outC->Context_SP_ASP_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MRSP_reset_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC)
{
  outC->init = kcg_true;
  /* _L1=(TA_MRSP_new::Calculate_MRSP1#1)/ */
  Calculate_MRSP1_reset_TA_MRSP_new(&outC->Context_Calculate_MRSP1_1);
  /* _L19=(TA_SpeedProfiles::Build_SSP_Matrix#1)/ */
  Build_SSP_Matrix_reset_TA_SpeedProfiles(&outC->Context_Build_SSP_Matrix_1);
  /* _L15=(TA_SpeedProfiles::SP_TSR#1)/ */
  SP_TSR_reset_TA_SpeedProfiles(&outC->Context_SP_TSR_1);
  /* _L14=(TA_SpeedProfiles::SP_STM_SystemSpeed#1)/ */
  SP_STM_SystemSpeed_reset_TA_SpeedProfiles(
    &outC->Context_SP_STM_SystemSpeed_1);
  /* _L13=(TA_SpeedProfiles::SP_STM_MaxSpeed#1)/ */
  SP_STM_MaxSpeed_reset_TA_SpeedProfiles(&outC->Context_SP_STM_MaxSpeed_1);
  /* _L26=(TA_SSP_new::Build_StaticSpeedProfile#1)/ */
  Build_StaticSpeedProfile_reset_TA_SSP_new(
    &outC->Context_Build_StaticSpeedProfile_1);
  /* _L11=(TA_SpeedProfiles::SP_SignalingRelated#1)/ */
  SP_SignalingRelated_reset_TA_SpeedProfiles(
    &outC->Context_SP_SignalingRelated_1);
  /* _L9=(TA_SpeedProfiles::SP_PBD_SR#1)/ */
  SP_PBD_SR_reset_TA_SpeedProfiles(&outC->Context_SP_PBD_SR_1);
  /* _L8=(TA_SpeedProfiles::SP_OverrideRelated#1)/ */
  SP_OverrideRelated_reset_TA_SpeedProfiles(
    &outC->Context_SP_OverrideRelated_1);
  /* _L7=(TA_SpeedProfiles::SP_ModeRelated#1)/ */
  SP_ModeRelated_reset_TA_SpeedProfiles(&outC->Context_SP_ModeRelated_1);
  /* _L5=(TA_SpeedProfiles::SP_MaxTrainSpeed#1)/ */
  SP_MaxTrainSpeed_reset_TA_SpeedProfiles(&outC->Context_SP_MaxTrainSpeed_1);
  /* _L4=(TA_SpeedProfiles::SP_LX_SR#1)/ */
  SP_LX_SR_reset_TA_SpeedProfiles(&outC->Context_SP_LX_SR_1);
  /* _L3=(TA_SpeedProfiles::SP_ASP#1)/ */
  SP_ASP_reset_TA_SpeedProfiles(&outC->Context_SP_ASP_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_MRSP_TA_MRSP_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

