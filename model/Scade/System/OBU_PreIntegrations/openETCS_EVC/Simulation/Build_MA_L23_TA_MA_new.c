/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_L23_TA_MA_new.h"

/* TA_MA_new::Build_MA_L23/ */
void Build_MA_L23_TA_MA_new(
  /* reset/ */
  kcg_bool reset,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  /* train_position/ */
  trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* reject_new_MA/ */
  kcg_bool reject_new_MA,
  /* updatedEOA_from_EM/ */
  kcg_bool updatedEOA_from_EM,
  /* newEOA_from_EM/ */
  L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_MA_L23_TA_MA_new *outC)
{
  MovementAuthority_t_TrackAtlasTypes tmp;
  MovementAuthority_t_TrackAtlasTypes tmp1;
  MovementAuthority_t_TrackAtlasTypes tmp2;
  kcg_bool tmp3;
  MovementAuthority_t_TrackAtlasTypes op_call;
  kcg_bool _4_op_call;
  MovementAuthority_t_TrackAtlasTypes _5_op_call;
  MovementAuthority_t_TrackAtlasTypes _6_op_call;
  L_internal_Type_Obu_BasicTypes_Pkg noname;
  kcg_bool _7_noname;
  kcg_bool _8_noname;
  MovementAuthority_t_TrackAtlasTypes _9_noname;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L73, &outC->_L1.packets);
  /* _L59=(TM::Read_P015#1)/ */
  Read_P015_TM(&outC->_L73, &outC->Context_Read_P015_1);
  outC->_L59 = outC->Context_Read_P015_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L60, &outC->Context_Read_P015_1.P015_OBU_out);
  outC->every1 = outC->_L59;
  outC->_L202 = reset;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L257, MessageIn);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L258, balisegroups);
  /* _L256=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */
  Get_Position_of_LRBG_TA_Lib_internal(
    &outC->_L257,
    &outC->_L258,
    &outC->Context_Get_Position_of_LRBG_1);
  outC->_L256 = outC->Context_Get_Position_of_LRBG_1.Position;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L244, NV_in);
  if (outC->every1) {
    /* _L237=(TA_MA_new::MA_L23_Preprocessing#1)/ */
    MA_L23_Preprocessing_TA_MA_new(
      &outC->_L60,
      outC->_L202,
      outC->_L256,
      &outC->_L244,
      &outC->Context_MA_L23_Preprocessing_1);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &op_call,
      &outC->Context_MA_L23_Preprocessing_1.MA);
  }
  /* _L238= */
  if (outC->init) {
    outC->_L238 = kcg_lit_int32(0);
  }
  else {
    outC->_L238 = outC->_L111;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L255, train_position);
  outC->_L111 = outC->_L255.LRBG.nid_bg;
  outC->_L239 = outC->_L238 != outC->_L111;
  outC->_L240 = outC->_L59 | outC->_L239;
  outC->every = outC->_L240;
  if (outC->every1) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L237, &op_call);
  }
  else {
    /* _L237= */
    if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &tmp,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(&tmp, &outC->_L237);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L237, &tmp);
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L42, train_position);
  outC->_L193 = outC->_L42.LRBG.location.nominal;
  if (outC->every) {
    /* _L242=(TA_MA_new::MA_L23_Postprocessing#1)/ */
    MA_L23_Postprocessing_TA_MA_new(
      &outC->_L237,
      outC->_L193,
      &outC->Context_MA_L23_Postprocessing_1);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &_6_op_call,
      &outC->Context_MA_L23_Postprocessing_1.MA_at_LRBG);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &_5_op_call,
      &outC->Context_MA_L23_Postprocessing_1.MA_absolute);
    _4_op_call = outC->Context_MA_L23_Postprocessing_1.MA_available;
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L246, &_5_op_call);
  }
  else {
    /* _L242= */
    if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &tmp1,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(&tmp1, &outC->_L246);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L246, &tmp1);
  }
  /* _L254=(TA_MA_new::Get_EOA#1)/ */
  Get_EOA_TA_MA_new(&outC->_L246, &outC->Context_Get_EOA_1);
  outC->_L254 = outC->Context_Get_EOA_1.currentEOA;
  if (outC->every) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L242, &_6_op_call);
  }
  else {
    /* _L242= */
    if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &tmp2,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(&tmp2, &outC->_L242);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L242, &tmp2);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_9_noname, &outC->_L242);
  outC->currentEOA = outC->_L254;
  outC->_L250 = updatedEOA_from_EM;
  outC->_L249 = reject_new_MA;
  _8_noname = outC->_L249;
  _7_noname = outC->_L250;
  outC->_L248 = newEOA_from_EM;
  noname = outC->_L248;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA_absolute, &outC->_L246);
  if (outC->every) {
    outC->_L247 = _4_op_call;
  }
  else {
    /* _L242= */
    if (outC->init) {
      tmp3 = kcg_false;
    }
    else {
      tmp3 = outC->_L247;
    }
    outC->_L247 = tmp3;
  }
  outC->available = outC->_L247;
  outC->updated = outC->_L59;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_L23_init_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC)
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
  kcg_size idx17;

  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L258[idx1].valid = kcg_true;
    outC->_L258[idx1].nid_c = kcg_lit_int32(0);
    outC->_L258[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L258[idx1].q_link = Q_LINK_Unlinked;
    outC->_L258[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L258[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L258[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L258[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.valid = kcg_true;
    outC->_L258[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L258[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L258[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L258[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L258[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L258[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L258[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.valid = kcg_true;
    outC->_L258[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L258[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L258[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L258[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L258[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L258[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L258[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L258[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L258[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L258[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L258[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L258[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L258[idx1].missed = kcg_true;
  }
  outC->_L257.valid = kcg_true;
  outC->_L257.source = msrc_undefined_Common_Types_Pkg;
  outC->_L257.radioMetadata.t_train_reference = kcg_true;
  outC->_L257.radioMetadata.nid_em = kcg_true;
  outC->_L257.radioMetadata.q_scale = kcg_true;
  outC->_L257.radioMetadata.d_sr = kcg_true;
  outC->_L257.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L257.radioMetadata.d_ref = kcg_true;
  outC->_L257.radioMetadata.q_dir = kcg_true;
  outC->_L257.radioMetadata.d_emergencystop = kcg_true;
  outC->_L257.radioMetadata.m_version = kcg_true;
  outC->_L257.BG_Common_Header.valid = kcg_true;
  outC->_L257.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L257.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L257.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L257.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L257.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L257.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L257.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L257.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L257.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L257.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L257.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L257.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L257.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L257.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L257.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L257.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L257.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L257.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L257.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L257.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L257.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L257.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L257.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L257.sendingRBC.valid = kcg_true;
  outC->_L257.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L257.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L257.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L256 = kcg_lit_int32(0);
  outC->_L255.valid = kcg_true;
  outC->_L255.timestamp = kcg_lit_int32(0);
  outC->_L255.trainPositionIsUnknown = kcg_true;
  outC->_L255.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L255.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L255.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L255.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L255.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L255.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L255.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L255.LRBG.valid = kcg_true;
  outC->_L255.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L255.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L255.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L255.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L255.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L255.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L255.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L255.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L255.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L255.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L255.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L255.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L255.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L255.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L255.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L255.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L255.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L255.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L255.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L255.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L255.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L255.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L255.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L255.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L255.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L255.LRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L255.LRBG.missed = kcg_true;
  outC->_L255.prvLRBG.valid = kcg_true;
  outC->_L255.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L255.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L255.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L255.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L255.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L255.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L255.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L255.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L255.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L255.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L255.prvLRBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L255.prvLRBG.missed = kcg_true;
  outC->_L255.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L255.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L255.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L255.linkingIsUsedOnboard = kcg_true;
  outC->_L255.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L255.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L255.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L254 = kcg_lit_int32(0);
  outC->_L202 = kcg_true;
  outC->_L248 = kcg_lit_int32(0);
  outC->_L249 = kcg_true;
  outC->_L250 = kcg_true;
  outC->_L244.valid = kcg_true;
  outC->_L244.q_dir = Q_DIR_Reverse;
  outC->_L244.q_scale = Q_SCALE_10_cm_scale;
  outC->_L244.d_validnv = kcg_lit_int32(0);
  outC->_L244.n_iter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L244.SECTIONS[idx6].valid = kcg_true;
    outC->_L244.SECTIONS[idx6].nid_c = kcg_lit_int32(0);
  }
  outC->_L244.v_nvshunt = kcg_lit_int32(0);
  outC->_L244.v_nvstff = kcg_lit_int32(0);
  outC->_L244.v_nvonsight = kcg_lit_int32(0);
  outC->_L244.v_nvunfit = kcg_lit_int32(0);
  outC->_L244.v_nvrel = kcg_lit_int32(0);
  outC->_L244.d_nvroll = kcg_lit_int32(0);
  outC->_L244.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L244.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L244.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L244.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L244.d_nvovtrp = kcg_lit_int32(0);
  outC->_L244.t_nvovtrp = kcg_lit_int32(0);
  outC->_L244.d_nvpotrp = kcg_lit_int32(0);
  outC->_L244.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L244.t_nvcontact = kcg_lit_int32(0);
  outC->_L244.m_nvderun = M_NVDERUN_No;
  outC->_L244.d_nvstff = kcg_lit_int32(0);
  outC->_L244.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L240 = kcg_true;
  outC->_L239 = kcg_true;
  outC->_L238 = kcg_lit_int32(0);
  outC->_L193 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L73.PacketHeaders[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L73.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L73.PacketHeaders[idx7].valid = kcg_true;
    outC->_L73.PacketHeaders[idx7].startAddress = kcg_lit_int32(0);
    outC->_L73.PacketHeaders[idx7].endAddress = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L73.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L59 = kcg_true;
  outC->_L60.valid = kcg_true;
  outC->_L60.q_dir = Q_DIR_Reverse;
  outC->_L60.q_scale = Q_SCALE_10_cm_scale;
  outC->_L60.v_loa = kcg_lit_int32(0);
  outC->_L60.t_loa = kcg_lit_int32(0);
  outC->_L60.n_iter = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L60.sections[idx9].valid = kcg_true;
    outC->_L60.sections[idx9].l_section = kcg_lit_int32(0);
    outC->_L60.sections[idx9].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L60.sections[idx9].t_sectiontimer = kcg_lit_int32(0);
    outC->_L60.sections[idx9].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L60.l_endsection = kcg_lit_int32(0);
  outC->_L60.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L60.t_sectiontimer = kcg_lit_int32(0);
  outC->_L60.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L60.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L60.t_endtimer = kcg_lit_int32(0);
  outC->_L60.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L60.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L60.d_dp = kcg_lit_int32(0);
  outC->_L60.v_releasedp = kcg_lit_int32(0);
  outC->_L60.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L60.d_startol = kcg_lit_int32(0);
  outC->_L60.t_ol = kcg_lit_int32(0);
  outC->_L60.d_ol = kcg_lit_int32(0);
  outC->_L60.v_releaseol = kcg_lit_int32(0);
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
  outC->_L247 = kcg_true;
  outC->_L246.valid = kcg_true;
  outC->_L246.Level = MA_L1_TrackAtlasTypes;
  outC->_L246.q_dir = Q_DIR_Reverse;
  outC->_L246.v_main = kcg_lit_int32(0);
  outC->_L246.v_loa = kcg_lit_int32(0);
  outC->_L246.t_loa_unlimited = kcg_true;
  outC->_L246.t_loa = kcg_lit_int32(0);
  outC->_L246.n_iter = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 10; idx14++) {
    outC->_L246.sections[idx14].valid = kcg_true;
    outC->_L246.sections[idx14].q_endsection = kcg_true;
    outC->_L246.sections[idx14].l_section = kcg_lit_int32(0);
    outC->_L246.sections[idx14].q_sectiontimer = kcg_true;
    outC->_L246.sections[idx14].t_sectiontimer = kcg_lit_int32(0);
    outC->_L246.sections[idx14].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L246.q_dangerpoint = kcg_true;
  outC->_L246.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L246.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L246.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L246.q_overlap = kcg_true;
  outC->_L246.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L246.overlap.v_release = kcg_lit_int32(0);
  outC->_L246.overlap.calc_v_release_onboard = kcg_true;
  outC->_L246.q_endtimer = kcg_true;
  outC->_L246.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L246.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L242.valid = kcg_true;
  outC->_L242.Level = MA_L1_TrackAtlasTypes;
  outC->_L242.q_dir = Q_DIR_Reverse;
  outC->_L242.v_main = kcg_lit_int32(0);
  outC->_L242.v_loa = kcg_lit_int32(0);
  outC->_L242.t_loa_unlimited = kcg_true;
  outC->_L242.t_loa = kcg_lit_int32(0);
  outC->_L242.n_iter = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->_L242.sections[idx15].valid = kcg_true;
    outC->_L242.sections[idx15].q_endsection = kcg_true;
    outC->_L242.sections[idx15].l_section = kcg_lit_int32(0);
    outC->_L242.sections[idx15].q_sectiontimer = kcg_true;
    outC->_L242.sections[idx15].t_sectiontimer = kcg_lit_int32(0);
    outC->_L242.sections[idx15].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L242.q_dangerpoint = kcg_true;
  outC->_L242.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L242.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L242.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L242.q_overlap = kcg_true;
  outC->_L242.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L242.overlap.v_release = kcg_lit_int32(0);
  outC->_L242.overlap.calc_v_release_onboard = kcg_true;
  outC->_L242.q_endtimer = kcg_true;
  outC->_L242.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L242.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L237.valid = kcg_true;
  outC->_L237.Level = MA_L1_TrackAtlasTypes;
  outC->_L237.q_dir = Q_DIR_Reverse;
  outC->_L237.v_main = kcg_lit_int32(0);
  outC->_L237.v_loa = kcg_lit_int32(0);
  outC->_L237.t_loa_unlimited = kcg_true;
  outC->_L237.t_loa = kcg_lit_int32(0);
  outC->_L237.n_iter = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 10; idx16++) {
    outC->_L237.sections[idx16].valid = kcg_true;
    outC->_L237.sections[idx16].q_endsection = kcg_true;
    outC->_L237.sections[idx16].l_section = kcg_lit_int32(0);
    outC->_L237.sections[idx16].q_sectiontimer = kcg_true;
    outC->_L237.sections[idx16].t_sectiontimer = kcg_lit_int32(0);
    outC->_L237.sections[idx16].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L237.q_dangerpoint = kcg_true;
  outC->_L237.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L237.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L237.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L237.q_overlap = kcg_true;
  outC->_L237.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L237.overlap.v_release = kcg_lit_int32(0);
  outC->_L237.overlap.calc_v_release_onboard = kcg_true;
  outC->_L237.q_endtimer = kcg_true;
  outC->_L237.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L237.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L111 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->currentEOA = kcg_lit_int32(0);
  outC->MA_absolute.valid = kcg_true;
  outC->MA_absolute.Level = MA_L1_TrackAtlasTypes;
  outC->MA_absolute.q_dir = Q_DIR_Reverse;
  outC->MA_absolute.v_main = kcg_lit_int32(0);
  outC->MA_absolute.v_loa = kcg_lit_int32(0);
  outC->MA_absolute.t_loa_unlimited = kcg_true;
  outC->MA_absolute.t_loa = kcg_lit_int32(0);
  outC->MA_absolute.n_iter = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 10; idx17++) {
    outC->MA_absolute.sections[idx17].valid = kcg_true;
    outC->MA_absolute.sections[idx17].q_endsection = kcg_true;
    outC->MA_absolute.sections[idx17].l_section = kcg_lit_int32(0);
    outC->MA_absolute.sections[idx17].q_sectiontimer = kcg_true;
    outC->MA_absolute.sections[idx17].t_sectiontimer = kcg_lit_int32(0);
    outC->MA_absolute.sections[idx17].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->MA_absolute.q_dangerpoint = kcg_true;
  outC->MA_absolute.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_absolute.dangerpoint.v_release = kcg_lit_int32(0);
  outC->MA_absolute.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_overlap = kcg_true;
  outC->MA_absolute.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_absolute.overlap.v_release = kcg_lit_int32(0);
  outC->MA_absolute.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_endtimer = kcg_true;
  outC->MA_absolute.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->MA_absolute.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->available = kcg_true;
  outC->updated = kcg_true;
  /* _L254=(TA_MA_new::Get_EOA#1)/ */
  Get_EOA_init_TA_MA_new(&outC->Context_Get_EOA_1);
  /* _L242=(TA_MA_new::MA_L23_Postprocessing#1)/ */
  MA_L23_Postprocessing_init_TA_MA_new(&outC->Context_MA_L23_Postprocessing_1);
  /* _L237=(TA_MA_new::MA_L23_Preprocessing#1)/ */
  MA_L23_Preprocessing_init_TA_MA_new(&outC->Context_MA_L23_Preprocessing_1);
  /* _L256=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */
  Get_Position_of_LRBG_init_TA_Lib_internal(
    &outC->Context_Get_Position_of_LRBG_1);
  /* _L59=(TM::Read_P015#1)/ */ Read_P015_init_TM(&outC->Context_Read_P015_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_L23_reset_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC)
{
  outC->init = kcg_true;
  /* _L254=(TA_MA_new::Get_EOA#1)/ */
  Get_EOA_reset_TA_MA_new(&outC->Context_Get_EOA_1);
  /* _L242=(TA_MA_new::MA_L23_Postprocessing#1)/ */
  MA_L23_Postprocessing_reset_TA_MA_new(&outC->Context_MA_L23_Postprocessing_1);
  /* _L237=(TA_MA_new::MA_L23_Preprocessing#1)/ */
  MA_L23_Preprocessing_reset_TA_MA_new(&outC->Context_MA_L23_Preprocessing_1);
  /* _L256=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */
  Get_Position_of_LRBG_reset_TA_Lib_internal(
    &outC->Context_Get_Position_of_LRBG_1);
  /* _L59=(TM::Read_P015#1)/ */ Read_P015_reset_TM(&outC->Context_Read_P015_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_MA_L23_TA_MA_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

