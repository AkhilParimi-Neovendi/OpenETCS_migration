/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimingChecker_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::TimingChecker/ */
void TimingChecker_CheckEuroradioMessage(
  /* tNvContact/ */
  T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* rtmMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* messageTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  /* tNvContactError/ */
  kcg_bool tNvContactError_partial;
  /* sequenceError/ */
  kcg_bool sequenceError_partial;
  /* otherTimingError/ */
  kcg_bool otherTimingError_partial;
  /* lastKnownTTrain/ */
  T_TRAIN lastKnownTTrain_partial;
  /* ignoreTimestamp/ */
  kcg_bool ignoreTimestamp_partial;
  /* tNvContactError/ */
  kcg_bool _1_tNvContactError_partial;
  /* sequenceError/ */
  kcg_bool _2_sequenceError_partial;
  /* otherTimingError/ */
  kcg_bool _3_otherTimingError_partial;
  /* lastKnownTTrain/ */
  T_TRAIN _4_lastKnownTTrain_partial;
  /* ignoreTimestamp/ */
  kcg_bool _5_ignoreTimestamp_partial;
  /* tNvContactError/ */
  kcg_bool _6_tNvContactError_partial;
  /* sequenceError/ */
  kcg_bool _7_sequenceError_partial;
  /* otherTimingError/ */
  kcg_bool _8_otherTimingError_partial;
  /* lastKnownTTrain/ */
  T_TRAIN _9_lastKnownTTrain_partial;
  /* ignoreTimestamp/ */
  kcg_bool _10_ignoreTimestamp_partial;
  /* tNvContactError/ */
  kcg_bool _11_tNvContactError_partial;
  /* sequenceError/ */
  kcg_bool _12_sequenceError_partial;
  /* otherTimingError/ */
  kcg_bool _13_otherTimingError_partial;
  /* lastKnownTTrain/ */
  T_TRAIN _14_lastKnownTTrain_partial;
  /* ignoreTimestamp/ */
  kcg_bool _15_ignoreTimestamp_partial;
  /* ignoreTimestamp/ */
  kcg_bool _16_ignoreTimestamp_partial;
  /* lastKnownTTrain/ */
  T_TRAIN _17_lastKnownTTrain_partial;
  /* otherTimingError/ */
  kcg_bool _18_otherTimingError_partial;
  /* sequenceError/ */
  kcg_bool _19_sequenceError_partial;
  /* tNvContactError/ */
  kcg_bool _20_tNvContactError_partial;
  /* tNvContactError/ */
  kcg_bool _21_tNvContactError_partial;
  /* sequenceError/ */
  kcg_bool _22_sequenceError_partial;
  /* otherTimingError/ */
  kcg_bool _23_otherTimingError_partial;
  /* lastKnownTTrain/ */
  T_TRAIN _24_lastKnownTTrain_partial;
  /* ignoreTimestamp/ */
  kcg_bool _25_ignoreTimestamp_partial;
  /* tNvContactError/ */
  kcg_bool _26_tNvContactError_partial;
  /* sequenceError/ */
  kcg_bool _27_sequenceError_partial;
  /* otherTimingError/ */
  kcg_bool _28_otherTimingError_partial;
  /* lastKnownTTrain/ */
  T_TRAIN _29_lastKnownTTrain_partial;
  /* ignoreTimestamp/ */
  kcg_bool _30_ignoreTimestamp_partial;
  /* ignoreTimestamp/ */
  kcg_bool _31_ignoreTimestamp_partial;
  /* lastKnownTTrain/ */
  T_TRAIN _32_lastKnownTTrain_partial;
  /* otherTimingError/ */
  kcg_bool _33_otherTimingError_partial;
  /* sequenceError/ */
  kcg_bool _34_sequenceError_partial;
  /* tNvContactError/ */
  kcg_bool _35_tNvContactError_partial;
  /* ignoreTimestamp/ */
  kcg_bool last_ignoreTimestamp;
  /* lastKnownTTrain/ */
  T_TRAIN last_lastKnownTTrain;

  last_ignoreTimestamp = outC->ignoreTimestamp;
  last_lastKnownTTrain = outC->lastKnownTTrain;
  outC->_L34 = cTTrainUnknown1_CheckEuroradioMessage;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L30, rtmMessage);
  outC->_L31 = outC->_L30.Radio_Common_Header.t_train;
  outC->_L32 = outC->_L31 != outC->_L34;
  outC->TimestampKnown = outC->_L32;
  outC->IfBlock1_clock = outC->TimestampKnown & (last_lastKnownTTrain !=
      cTTrainUnknown1_CheckEuroradioMessage);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L41_then_IfBlock1 = kcg_lit_int32(256000);
    outC->_L40_then_IfBlock1 = tNvContact;
    outC->_L39_then_IfBlock1 = outC->_L40_then_IfBlock1 > outC->_L41_then_IfBlock1;
    outC->_L38_then_IfBlock1 = kcg_true;
    outC->_L13_then_IfBlock1 = lastRelevantEventTimestamp;
    outC->_L11_then_IfBlock1 = tNvContact;
    outC->_L6_then_IfBlock1 = outC->_L11_then_IfBlock1 + outC->_L13_then_IfBlock1;
    outC->_L14_then_IfBlock1 = messageTimestamp;
    outC->_L36_then_IfBlock1 = kcg_lit_int32(256000);
    outC->_L35_then_IfBlock1 = outC->_L11_then_IfBlock1 == outC->_L36_then_IfBlock1;
    /* IfBlock1:then:_L34= */
    if (outC->_L35_then_IfBlock1) {
      outC->_L34_then_IfBlock1 = outC->_L14_then_IfBlock1;
    }
    else {
      outC->_L34_then_IfBlock1 = outC->_L6_then_IfBlock1;
    }
    outC->_L4_then_IfBlock1 = outC->_L14_then_IfBlock1;
    outC->_L9_then_IfBlock1 = outC->_L4_then_IfBlock1 <= outC->_L34_then_IfBlock1;
    outC->_L31_then_IfBlock1 = !outC->_L9_then_IfBlock1;
    /* IfBlock1:then:_L37= */
    if (outC->_L39_then_IfBlock1) {
      outC->_L37_then_IfBlock1 = outC->_L38_then_IfBlock1;
    }
    else {
      outC->_L37_then_IfBlock1 = outC->_L31_then_IfBlock1;
    }
    outC->_L33_then_IfBlock1 = kcg_false;
    otherTimingError_partial = outC->_L33_then_IfBlock1;
    outC->_L22_then_IfBlock1 = last_lastKnownTTrain;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L10_then_IfBlock1,
      rtmMessage);
    outC->_L5_then_IfBlock1 = outC->_L10_then_IfBlock1.Radio_Common_Header.t_train;
    outC->_L7_then_IfBlock1 = outC->_L5_then_IfBlock1 > outC->_L22_then_IfBlock1;
    outC->_L25_then_IfBlock1 = kcg_true;
    outC->_L26_then_IfBlock1 = last_ignoreTimestamp;
    /* IfBlock1:then:_L24= */
    if (outC->_L26_then_IfBlock1) {
      outC->_L24_then_IfBlock1 = outC->_L25_then_IfBlock1;
    }
    else {
      outC->_L24_then_IfBlock1 = outC->_L7_then_IfBlock1;
    }
    outC->_L32_then_IfBlock1 = !outC->_L24_then_IfBlock1;
    sequenceError_partial = outC->_L32_then_IfBlock1;
    tNvContactError_partial = outC->_L37_then_IfBlock1;
    outC->_L30_then_IfBlock1 = last_ignoreTimestamp;
    outC->_L29_then_IfBlock1 = kcg_false;
    outC->_L28_then_IfBlock1 = last_ignoreTimestamp;
    /* IfBlock1:then:_L27= */
    if (outC->_L28_then_IfBlock1) {
      outC->_L27_then_IfBlock1 = outC->_L29_then_IfBlock1;
    }
    else {
      outC->_L27_then_IfBlock1 = outC->_L30_then_IfBlock1;
    }
    ignoreTimestamp_partial = outC->_L27_then_IfBlock1;
    outC->_L23_then_IfBlock1 = last_lastKnownTTrain;
    outC->_L12_then_IfBlock1 = outC->_L9_then_IfBlock1 & outC->_L24_then_IfBlock1;
    /* IfBlock1:then:_L17= */
    if (outC->_L12_then_IfBlock1) {
      outC->_L17_then_IfBlock1 = outC->_L5_then_IfBlock1;
    }
    else {
      outC->_L17_then_IfBlock1 = outC->_L23_then_IfBlock1;
    }
    lastKnownTTrain_partial = outC->_L17_then_IfBlock1;
    outC->tNvContactError = tNvContactError_partial;
    outC->sequenceError = sequenceError_partial;
    outC->otherTimingError = otherTimingError_partial;
    outC->lastKnownTTrain = lastKnownTTrain_partial;
    outC->ignoreTimestamp = ignoreTimestamp_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->TimestampKnown & (last_lastKnownTTrain ==
        cTTrainUnknown1_CheckEuroradioMessage);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L8_then_else_IfBlock1,
        radioStatus);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &outC->_L9_then_else_IfBlock1,
        &outC->_L8_then_else_IfBlock1.connection);
      outC->_L10_then_else_IfBlock1 = outC->_L9_then_else_IfBlock1.status;
      outC->_L6_then_else_IfBlock1 = mcs_connected_RCM_Types_Pkg;
      outC->_L7_then_else_IfBlock1 = outC->_L10_then_else_IfBlock1 ==
        outC->_L6_then_else_IfBlock1;
      outC->connectingStatusConnecting_then_else_IfBlock1 =
        outC->_L7_then_else_IfBlock1;
      outC->IfBlock2_clock_then_else_IfBlock1 =
        outC->connectingStatusConnecting_then_else_IfBlock1;
      /* IfBlock1:else:then:IfBlock2: */
      if (outC->IfBlock2_clock_then_else_IfBlock1) {
        outC->_L5_then_IfBlock2_then_else_IfBlock1 = kcg_false;
        _23_otherTimingError_partial = outC->_L5_then_IfBlock2_then_else_IfBlock1;
        _22_sequenceError_partial = outC->_L5_then_IfBlock2_then_else_IfBlock1;
        _21_tNvContactError_partial = outC->_L5_then_IfBlock2_then_else_IfBlock1;
        outC->_L3_then_IfBlock2_then_else_IfBlock1 = kcg_lit_int32(0);
        _24_lastKnownTTrain_partial = outC->_L3_then_IfBlock2_then_else_IfBlock1;
        outC->_L2_then_IfBlock2_then_else_IfBlock1 = kcg_true;
        _25_ignoreTimestamp_partial = outC->_L2_then_IfBlock2_then_else_IfBlock1;
        _35_tNvContactError_partial = _21_tNvContactError_partial;
        _34_sequenceError_partial = _22_sequenceError_partial;
        _33_otherTimingError_partial = _23_otherTimingError_partial;
        _32_lastKnownTTrain_partial = _24_lastKnownTTrain_partial;
        _31_ignoreTimestamp_partial = _25_ignoreTimestamp_partial;
      }
      else {
        _29_lastKnownTTrain_partial = last_lastKnownTTrain;
        outC->_L3_else_IfBlock2_then_else_IfBlock1 = kcg_false;
        _28_otherTimingError_partial = outC->_L3_else_IfBlock2_then_else_IfBlock1;
        outC->_L1_else_IfBlock2_then_else_IfBlock1 = kcg_true;
        _27_sequenceError_partial = outC->_L1_else_IfBlock2_then_else_IfBlock1;
        _26_tNvContactError_partial = outC->_L3_else_IfBlock2_then_else_IfBlock1;
        outC->_L2_else_IfBlock2_then_else_IfBlock1 = kcg_false;
        _30_ignoreTimestamp_partial = outC->_L2_else_IfBlock2_then_else_IfBlock1;
        _35_tNvContactError_partial = _26_tNvContactError_partial;
        _34_sequenceError_partial = _27_sequenceError_partial;
        _33_otherTimingError_partial = _28_otherTimingError_partial;
        _32_lastKnownTTrain_partial = _29_lastKnownTTrain_partial;
        _31_ignoreTimestamp_partial = _30_ignoreTimestamp_partial;
      }
      _1_tNvContactError_partial = _35_tNvContactError_partial;
      _2_sequenceError_partial = _34_sequenceError_partial;
      _3_otherTimingError_partial = _33_otherTimingError_partial;
      _4_lastKnownTTrain_partial = _32_lastKnownTTrain_partial;
      _5_ignoreTimestamp_partial = _31_ignoreTimestamp_partial;
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L1_else_else_IfBlock1,
        radioStatus);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &outC->_L6_else_else_IfBlock1,
        &outC->_L1_else_else_IfBlock1.connection);
      outC->_L7_else_else_IfBlock1 = outC->_L6_else_else_IfBlock1.status;
      outC->_L5_else_else_IfBlock1 = mcs_connected_RCM_Types_Pkg;
      outC->_L3_else_else_IfBlock1 = outC->_L7_else_else_IfBlock1 ==
        outC->_L5_else_else_IfBlock1;
      outC->connectingStatusConnecting_else_else_IfBlock1 =
        outC->_L3_else_else_IfBlock1;
      outC->IfBlock2_clock_else_else_IfBlock1 =
        outC->connectingStatusConnecting_else_else_IfBlock1;
      /* IfBlock1:else:else:IfBlock2: */
      if (outC->IfBlock2_clock_else_else_IfBlock1) {
        outC->_L5_then_IfBlock2_else_else_IfBlock1 = kcg_false;
        _8_otherTimingError_partial = outC->_L5_then_IfBlock2_else_else_IfBlock1;
        _7_sequenceError_partial = outC->_L5_then_IfBlock2_else_else_IfBlock1;
        _6_tNvContactError_partial = outC->_L5_then_IfBlock2_else_else_IfBlock1;
        outC->_L3_then_IfBlock2_else_else_IfBlock1 = kcg_lit_int32(0);
        _9_lastKnownTTrain_partial = outC->_L3_then_IfBlock2_else_else_IfBlock1;
        outC->_L2_then_IfBlock2_else_else_IfBlock1 = kcg_true;
        _10_ignoreTimestamp_partial = outC->_L2_then_IfBlock2_else_else_IfBlock1;
        _20_tNvContactError_partial = _6_tNvContactError_partial;
        _19_sequenceError_partial = _7_sequenceError_partial;
        _18_otherTimingError_partial = _8_otherTimingError_partial;
        _17_lastKnownTTrain_partial = _9_lastKnownTTrain_partial;
        _16_ignoreTimestamp_partial = _10_ignoreTimestamp_partial;
      }
      else {
        _14_lastKnownTTrain_partial = last_lastKnownTTrain;
        outC->_L3_else_IfBlock2_else_else_IfBlock1 = kcg_false;
        _13_otherTimingError_partial = outC->_L3_else_IfBlock2_else_else_IfBlock1;
        outC->_L1_else_IfBlock2_else_else_IfBlock1 = kcg_true;
        _12_sequenceError_partial = outC->_L1_else_IfBlock2_else_else_IfBlock1;
        _11_tNvContactError_partial = outC->_L3_else_IfBlock2_else_else_IfBlock1;
        outC->_L2_else_IfBlock2_else_else_IfBlock1 = kcg_false;
        _15_ignoreTimestamp_partial = outC->_L2_else_IfBlock2_else_else_IfBlock1;
        _20_tNvContactError_partial = _11_tNvContactError_partial;
        _19_sequenceError_partial = _12_sequenceError_partial;
        _18_otherTimingError_partial = _13_otherTimingError_partial;
        _17_lastKnownTTrain_partial = _14_lastKnownTTrain_partial;
        _16_ignoreTimestamp_partial = _15_ignoreTimestamp_partial;
      }
      _1_tNvContactError_partial = _20_tNvContactError_partial;
      _2_sequenceError_partial = _19_sequenceError_partial;
      _3_otherTimingError_partial = _18_otherTimingError_partial;
      _4_lastKnownTTrain_partial = _17_lastKnownTTrain_partial;
      _5_ignoreTimestamp_partial = _16_ignoreTimestamp_partial;
    }
    outC->tNvContactError = _1_tNvContactError_partial;
    outC->sequenceError = _2_sequenceError_partial;
    outC->otherTimingError = _3_otherTimingError_partial;
    outC->lastKnownTTrain = _4_lastKnownTTrain_partial;
    outC->ignoreTimestamp = _5_ignoreTimestamp_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void TimingChecker_init_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L34 = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30.valid = kcg_true;
  outC->_L30.source = msrc_undefined_Common_Types_Pkg;
  outC->_L30.radioMetadata.t_train_reference = kcg_true;
  outC->_L30.radioMetadata.nid_em = kcg_true;
  outC->_L30.radioMetadata.q_scale = kcg_true;
  outC->_L30.radioMetadata.d_sr = kcg_true;
  outC->_L30.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L30.radioMetadata.d_ref = kcg_true;
  outC->_L30.radioMetadata.q_dir = kcg_true;
  outC->_L30.radioMetadata.d_emergencystop = kcg_true;
  outC->_L30.radioMetadata.m_version = kcg_true;
  outC->_L30.BG_Common_Header.valid = kcg_true;
  outC->_L30.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L30.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L30.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L30.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L30.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L30.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L30.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L30.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L30.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L30.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L30.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L30.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L30.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L30.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L30.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L30.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L30.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L30.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L30.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L30.sendingRBC.valid = kcg_true;
  outC->_L30.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L30.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L30.sendingRBC.device_id = kcg_lit_int32(0);
  outC->TimestampKnown = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L9_then_else_IfBlock1.valid = kcg_true;
  outC->_L9_then_else_IfBlock1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L9_then_else_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L9_then_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L9_then_else_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L9_then_else_IfBlock1.connectionLost = kcg_true;
  outC->_L9_then_else_IfBlock1.isInRadioHole = kcg_true;
  outC->_L10_then_else_IfBlock1 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L6_then_else_IfBlock1 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L7_then_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_IfBlock1.registration.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L8_then_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L8_then_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.connection.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L8_then_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L8_then_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L8_then_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L8_then_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L8_then_else_IfBlock1.session.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L8_then_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->connectingStatusConnecting_then_else_IfBlock1 = kcg_true;
  outC->IfBlock2_clock_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L2_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L3_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock2_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L7_else_else_IfBlock1 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L6_else_else_IfBlock1.valid = kcg_true;
  outC->_L6_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L6_else_else_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L6_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L6_else_else_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L6_else_else_IfBlock1.connectionLost = kcg_true;
  outC->_L6_else_else_IfBlock1.isInRadioHole = kcg_true;
  outC->_L5_else_else_IfBlock1 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L3_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1.registration.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1_else_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1_else_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L1_else_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1_else_else_IfBlock1.connection.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1_else_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1_else_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1_else_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L1_else_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L1_else_else_IfBlock1.session.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_else_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L1_else_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1_else_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->connectingStatusConnecting_else_else_IfBlock1 = kcg_true;
  outC->IfBlock2_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_IfBlock2_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_IfBlock2_else_else_IfBlock1 = kcg_true;
  outC->_L3_else_IfBlock2_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock2_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock2_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L13_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1 = kcg_true;
  outC->_L11_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.valid = kcg_true;
  outC->_L10_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L10_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L10_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L10_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L10_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L10_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L10_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L10_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L10_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L10_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L10_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L10_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L10_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L10_then_IfBlock1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L10_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L10_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L17_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L23_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1 = kcg_true;
  outC->_L25_then_IfBlock1 = kcg_true;
  outC->_L26_then_IfBlock1 = kcg_true;
  outC->_L27_then_IfBlock1 = kcg_true;
  outC->_L28_then_IfBlock1 = kcg_true;
  outC->_L29_then_IfBlock1 = kcg_true;
  outC->_L30_then_IfBlock1 = kcg_true;
  outC->_L31_then_IfBlock1 = kcg_true;
  outC->_L32_then_IfBlock1 = kcg_true;
  outC->_L33_then_IfBlock1 = kcg_true;
  outC->_L34_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L35_then_IfBlock1 = kcg_true;
  outC->_L36_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1 = kcg_true;
  outC->_L38_then_IfBlock1 = kcg_true;
  outC->_L39_then_IfBlock1 = kcg_true;
  outC->_L40_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L41_then_IfBlock1 = kcg_lit_int32(0);
  outC->otherTimingError = kcg_true;
  outC->sequenceError = kcg_true;
  outC->tNvContactError = kcg_true;
  outC->lastKnownTTrain = cTTrainUnknown1_CheckEuroradioMessage;
  outC->ignoreTimestamp = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TimingChecker_reset_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  outC->lastKnownTTrain = cTTrainUnknown1_CheckEuroradioMessage;
  outC->ignoreTimestamp = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TimingChecker_CheckEuroradioMessage.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

