/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_StaticSpeedProfile_TA_SSP_new.h"

/* TA_SSP_new::Build_StaticSpeedProfile/ */
void Build_StaticSpeedProfile_TA_SSP_new(
  /* reset/ */
  kcg_bool reset,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* train_position/ */
  trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC)
{
  StaticSpeedProfile_t_TrackAtlasTypes tmp;
  kcg_bool tmp1;
  StaticSpeedProfile_t_TrackAtlasTypes tmp2;
  StaticSpeedProfile_t_TrackAtlasTypes op_call;
  StaticSpeedProfile_t_TrackAtlasTypes _3_op_call;
  kcg_bool _4_op_call;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L73, &outC->_L1.packets);
  /* _L59=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_TM_baseline2(&outC->_L73, &outC->Context_Read_P027V1_1);
  outC->_L59 = outC->Context_Read_P027V1_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &outC->_L60,
    &outC->Context_Read_P027V1_1.P027V1_out);
  outC->every1 = outC->_L59;
  outC->_L202 = reset;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L107, MessageIn);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L246, balisegroups);
  /* _L247=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */
  Get_Position_of_LRBG_TA_Lib_internal(
    &outC->_L107,
    &outC->_L246,
    &outC->Context_Get_Position_of_LRBG_1);
  outC->_L247 = outC->Context_Get_Position_of_LRBG_1.Position;
  if (outC->every1) {
    /* _L237=(TA_SSP_new::SSP_Preprocessing#1)/ */
    SSP_Preprocessing_TA_SSP_new(
      &outC->_L60,
      outC->_L202,
      outC->_L247,
      &outC->Context_SSP_Preprocessing_1);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &op_call,
      &outC->Context_SSP_Preprocessing_1.SSP);
  }
  /* _L238= */
  if (outC->init) {
    outC->_L238 = kcg_lit_int32(0);
  }
  else {
    outC->_L238 = outC->_L248;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L249, train_position);
  outC->_L248 = outC->_L249.LRBG.nid_bg;
  outC->_L239 = outC->_L238 != outC->_L248;
  outC->_L240 = outC->_L59 | outC->_L239;
  outC->every = outC->_L240;
  if (outC->every1) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L237, &op_call);
  }
  else {
    /* _L237= */
    if (outC->init) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
        &tmp,
        (StaticSpeedProfile_t_TrackAtlasTypes *)
          &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
    }
    else {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->_L237);
    }
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L237, &tmp);
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L42, train_position);
  outC->_L193 = outC->_L42.LRBG.location.nominal;
  outC->_L194 = outC->_L42.prvLRBG.location.nominal;
  outC->_L209 = outC->_L42.prvLRBG.valid;
  outC->_L243 = train_length;
  if (outC->every) {
    /* _L241=(TA_SSP_new::SSP_Postprocessing#1)/ */
    SSP_Postprocessing_TA_SSP_new(
      &outC->_L237,
      outC->_L193,
      outC->_L194,
      outC->_L209,
      outC->_L243,
      &outC->Context_SSP_Postprocessing_1);
    _4_op_call = outC->Context_SSP_Postprocessing_1.available;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &_3_op_call,
      &outC->Context_SSP_Postprocessing_1.SSP);
    outC->_L241 = _4_op_call;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L242, &_3_op_call);
  }
  else {
    /* _L241= */
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L241;
    }
    outC->_L241 = tmp1;
    /* _L241= */
    if (outC->init) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
        &tmp2,
        (StaticSpeedProfile_t_TrackAtlasTypes *)
          &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
    }
    else {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp2, &outC->_L242);
    }
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L242, &tmp2);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L242);
  outC->available = outC->_L241;
  outC->updated = outC->_L59;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Build_StaticSpeedProfile_init_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;

  outC->_L249.valid = kcg_true;
  outC->_L249.timestamp = kcg_lit_int32(0);
  outC->_L249.trainPositionIsUnknown = kcg_true;
  outC->_L249.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L249.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L249.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L249.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L249.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L249.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L249.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L249.LRBG.valid = kcg_true;
  outC->_L249.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L249.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L249.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L249.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L249.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L249.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L249.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L249.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L249.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L249.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L249.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L249.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L249.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L249.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L249.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L249.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L249.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L249.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L249.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L249.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L249.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L249.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L249.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L249.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L249.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L249.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L249.LRBG.missed = kcg_true;
  outC->_L249.prvLRBG.valid = kcg_true;
  outC->_L249.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L249.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L249.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L249.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L249.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L249.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L249.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L249.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L249.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L249.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L249.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L249.prvLRBG.missed = kcg_true;
  outC->_L249.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L249.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L249.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L249.linkingIsUsedOnboard = kcg_true;
  outC->_L249.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L249.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L249.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L247 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L246[idx3].valid = kcg_true;
    outC->_L246[idx3].nid_c = kcg_lit_int32(0);
    outC->_L246[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L246[idx3].q_link = Q_LINK_Unlinked;
    outC->_L246[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L246[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L246[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L246[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.valid = kcg_true;
    outC->_L246[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L246[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L246[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L246[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L246[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L246[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L246[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.valid = kcg_true;
    outC->_L246[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L246[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L246[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L246[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L246[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L246[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L246[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L246[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L246[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L246[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L246[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L246[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
    }
    outC->_L246[idx3].missed = kcg_true;
  }
  outC->_L243 = kcg_lit_int32(0);
  outC->_L240 = kcg_true;
  outC->_L239 = kcg_true;
  outC->_L238 = kcg_lit_int32(0);
  outC->_L209 = kcg_true;
  outC->_L202 = kcg_true;
  outC->_L194 = kcg_lit_int32(0);
  outC->_L193 = kcg_lit_int32(0);
  outC->_L107.valid = kcg_true;
  outC->_L107.source = msrc_undefined_Common_Types_Pkg;
  outC->_L107.radioMetadata.t_train_reference = kcg_true;
  outC->_L107.radioMetadata.nid_em = kcg_true;
  outC->_L107.radioMetadata.q_scale = kcg_true;
  outC->_L107.radioMetadata.d_sr = kcg_true;
  outC->_L107.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L107.radioMetadata.d_ref = kcg_true;
  outC->_L107.radioMetadata.q_dir = kcg_true;
  outC->_L107.radioMetadata.d_emergencystop = kcg_true;
  outC->_L107.radioMetadata.m_version = kcg_true;
  outC->_L107.BG_Common_Header.valid = kcg_true;
  outC->_L107.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L107.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L107.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L107.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L107.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L107.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L107.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L107.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L107.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L107.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L107.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L107.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L107.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L107.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L107.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L107.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L107.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L107.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L107.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L107.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L107.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L107.sendingRBC.valid = kcg_true;
  outC->_L107.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L107.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L107.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L73.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L73.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L73.PacketHeaders[idx6].valid = kcg_true;
    outC->_L73.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L73.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L73.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L59 = kcg_true;
  outC->_L60.valid = kcg_true;
  outC->_L60.q_dir = Q_DIR_Reverse;
  outC->_L60.q_scale = Q_SCALE_10_cm_scale;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L60.sections[idx9].valid = kcg_true;
    outC->_L60.sections[idx9].d_static = kcg_lit_int32(0);
    outC->_L60.sections[idx9].v_static = kcg_lit_int32(0);
    outC->_L60.sections[idx9].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L60.sections[idx9].n_iter = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 32; idx8++) {
      outC->_L60.sections[idx9].SECTIONS_q_diff[idx8].valid = kcg_true;
      outC->_L60.sections[idx9].SECTIONS_q_diff[idx8].nc_diff = kcg_lit_int32(0);
      outC->_L60.sections[idx9].SECTIONS_q_diff[idx8].v_diff = kcg_lit_int32(0);
    }
  }
  outC->_L42.valid = kcg_true;
  outC->_L42.timestamp = kcg_lit_int32(0);
  outC->_L42.trainPositionIsUnknown = kcg_true;
  outC->_L42.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L42.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L42.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L42.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L42.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L42.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L42.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L42.LRBG.valid = kcg_true;
  outC->_L42.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L42.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L42.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L42.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L42.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L42.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L42.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L42.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L42.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L42.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L42.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L42.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L42.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L42.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L42.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L42.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L42.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L42.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L42.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L42.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L42.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L42.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L42.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L42.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L42.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L42.LRBG.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
  }
  outC->_L42.LRBG.missed = kcg_true;
  outC->_L42.prvLRBG.valid = kcg_true;
  outC->_L42.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L42.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L42.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L42.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L42.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L42.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L42.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L42.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L42.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L42.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int32(0);
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int32(0);
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int32(0);
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L42.prvLRBG.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int32(0);
  }
  outC->_L42.prvLRBG.missed = kcg_true;
  outC->_L42.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L42.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L42.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L42.linkingIsUsedOnboard = kcg_true;
  outC->_L42.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L42.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L42.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L1.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L1.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L248 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 50; idx14++) {
    outC->_L242[idx14].valid = kcg_true;
    outC->_L242[idx14].d_static_abs = kcg_lit_int32(0);
    outC->_L242[idx14].d_static_LRBG = kcg_lit_int32(0);
    outC->_L242[idx14].q_train_length_corr = kcg_true;
    outC->_L242[idx14].v_static = kcg_lit_int32(0);
  }
  outC->_L241 = kcg_true;
  for (idx15 = 0; idx15 < 50; idx15++) {
    outC->_L237[idx15].valid = kcg_true;
    outC->_L237[idx15].d_static_abs = kcg_lit_int32(0);
    outC->_L237[idx15].d_static_LRBG = kcg_lit_int32(0);
    outC->_L237[idx15].q_train_length_corr = kcg_true;
    outC->_L237[idx15].v_static = kcg_lit_int32(0);
  }
  outC->init = kcg_true;
  outC->available = kcg_true;
  outC->updated = kcg_true;
  for (idx16 = 0; idx16 < 50; idx16++) {
    outC->SSP[idx16].valid = kcg_true;
    outC->SSP[idx16].d_static_abs = kcg_lit_int32(0);
    outC->SSP[idx16].d_static_LRBG = kcg_lit_int32(0);
    outC->SSP[idx16].q_train_length_corr = kcg_true;
    outC->SSP[idx16].v_static = kcg_lit_int32(0);
  }
  /* _L241=(TA_SSP_new::SSP_Postprocessing#1)/ */
  SSP_Postprocessing_init_TA_SSP_new(&outC->Context_SSP_Postprocessing_1);
  /* _L237=(TA_SSP_new::SSP_Preprocessing#1)/ */
  SSP_Preprocessing_init_TA_SSP_new(&outC->Context_SSP_Preprocessing_1);
  /* _L247=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */
  Get_Position_of_LRBG_init_TA_Lib_internal(
    &outC->Context_Get_Position_of_LRBG_1);
  /* _L59=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_init_TM_baseline2(&outC->Context_Read_P027V1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_StaticSpeedProfile_reset_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC)
{
  outC->init = kcg_true;
  /* _L241=(TA_SSP_new::SSP_Postprocessing#1)/ */
  SSP_Postprocessing_reset_TA_SSP_new(&outC->Context_SSP_Postprocessing_1);
  /* _L237=(TA_SSP_new::SSP_Preprocessing#1)/ */
  SSP_Preprocessing_reset_TA_SSP_new(&outC->Context_SSP_Preprocessing_1);
  /* _L247=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */
  Get_Position_of_LRBG_reset_TA_Lib_internal(
    &outC->Context_Get_Position_of_LRBG_1);
  /* _L59=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_reset_TM_baseline2(&outC->Context_Read_P027V1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_StaticSpeedProfile_TA_SSP_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

