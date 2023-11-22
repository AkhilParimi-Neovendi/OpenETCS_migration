/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckEuroRadioMessage_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckEuroRadioMessage/ */
void CheckEuroRadioMessage_CheckEuroradioMessage(
  /* rtmMessage/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* tNvContact/ */
  T_NVCONTACT tNvContact,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* activateCheck/ */
  kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* checkedMessage/ */
  ReceivedMessage_T_Common_Types_Pkg checkedMessage_partial;
  /* radioSequenceError/ */
  kcg_bool radioSequenceError_partial;
  /* tNvContactError/ */
  kcg_bool tNvContactError_partial;
  /* otherTimingError/ */
  kcg_bool otherTimingError_partial;
  /* radioMessageConsistencyError/ */
  kcg_bool radioMessageConsistencyError_partial;
  /* checkedMessage/ */
  ReceivedMessage_T_Common_Types_Pkg _1_checkedMessage_partial;
  /* radioSequenceError/ */
  kcg_bool _2_radioSequenceError_partial;
  /* tNvContactError/ */
  kcg_bool _3_tNvContactError_partial;
  /* otherTimingError/ */
  kcg_bool _4_otherTimingError_partial;
  /* radioMessageConsistencyError/ */
  kcg_bool _5_radioMessageConsistencyError_partial;

  outC->IfBlock1_clock = activateCheck;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L104_then_IfBlock1 = kcg_lit_int32(1000);
    outC->_L75_then_IfBlock1 = tNvContact;
    outC->_L103_then_IfBlock1 = outC->_L75_then_IfBlock1 *
      outC->_L104_then_IfBlock1;
    outC->_L82_then_IfBlock1 = lastRelevantEventTimestamp;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L77_then_IfBlock1,
      rtmMessage);
    /* IfBlock1:then:_L76=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#6)/ */
    ConvertTrackSideMessageTo_CheckEuroradioMessage(
      &outC->_L77_then_IfBlock1,
      &outC->Context_ConvertTrackSideMessageToRadioMessage_6);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L76_then_IfBlock1,
      &outC->Context_ConvertTrackSideMessageToRadioMessage_6.ReceivedMessage);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L67_then_IfBlock1,
      radioStatus);
    outC->_L84_then_IfBlock1 = outC->_L77_then_IfBlock1.systemTime;
    /* IfBlock1:then:_L85=(CheckEuroradioMessage::TimingChecker#6)/ */
    TimingChecker_CheckEuroradioMessage(
      outC->_L103_then_IfBlock1,
      outC->_L82_then_IfBlock1,
      &outC->_L76_then_IfBlock1,
      &outC->_L67_then_IfBlock1,
      outC->_L84_then_IfBlock1,
      &outC->Context_TimingChecker_6);
    outC->_L85_then_IfBlock1 = outC->Context_TimingChecker_6.tNvContactError;
    outC->_L86_then_IfBlock1 = outC->Context_TimingChecker_6.sequenceError;
    outC->_L95_then_IfBlock1 = outC->Context_TimingChecker_6.otherTimingError;
    outC->_L102_then_IfBlock1 = outC->_L85_then_IfBlock1 |
      outC->_L86_then_IfBlock1 | outC->_L95_then_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L99_then_IfBlock1,
      rtmMessage);
    outC->_L101_then_IfBlock1 = outC->_L99_then_IfBlock1.valid;
    outC->_L100_then_IfBlock1 = outC->_L101_then_IfBlock1 &
      outC->_L95_then_IfBlock1;
    otherTimingError_partial = outC->_L100_then_IfBlock1;
    outC->_L94_then_IfBlock1 = !outC->_L102_then_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L79_then_IfBlock1,
      rtmMessage);
    outC->_L66_then_IfBlock1 = outC->_L79_then_IfBlock1.valid;
    outC->_L81_then_IfBlock1 = outC->_L66_then_IfBlock1 & outC->_L85_then_IfBlock1;
    tNvContactError_partial = outC->_L81_then_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L91_then_IfBlock1,
      rtmMessage);
    outC->_L89_then_IfBlock1 = outC->_L91_then_IfBlock1.valid;
    outC->_L90_then_IfBlock1 = outC->_L89_then_IfBlock1 & outC->_L86_then_IfBlock1;
    radioSequenceError_partial = outC->_L90_then_IfBlock1;
    /* IfBlock1:then:_L73=(CheckEuroradioMessage::CheckMandatoryVariablesAndMA#6)/ */
    CheckMandatoryVariablesAndMA_CheckEuroradioMessage(
      &outC->_L76_then_IfBlock1,
      &outC->Context_CheckMandatoryVariablesAndMA_6);
    outC->_L73_then_IfBlock1 = outC->Context_CheckMandatoryVariablesAndMA_6.valid;
    /* IfBlock1:then:_L64=(CheckEuroradioMessage::CheckAllowedPacketsRadio#6)/ */
    CheckAllowedPacketsRadio_CheckEuroradioMessage(
      &outC->_L76_then_IfBlock1,
      &outC->Context_CheckAllowedPacketsRadio_6);
    outC->_L64_then_IfBlock1 = outC->Context_CheckAllowedPacketsRadio_6.valid;
    outC->_L78_then_IfBlock1 = outC->_L64_then_IfBlock1 &
      outC->_L73_then_IfBlock1 & outC->_L94_then_IfBlock1;
    /* IfBlock1:then:_L83=(CheckEuroradioMessage::BuildOutput#6)/ */
    BuildOutput_CheckEuroradioMessage(
      &outC->_L76_then_IfBlock1,
      outC->_L78_then_IfBlock1,
      &outC->Context_BuildOutput_6);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L83_then_IfBlock1,
      &outC->Context_BuildOutput_6.ReceivedMessage);
    outC->_L70_then_IfBlock1 = !outC->_L73_then_IfBlock1;
    outC->_L72_then_IfBlock1 = !outC->_L64_then_IfBlock1;
    outC->_L65_then_IfBlock1 = outC->_L72_then_IfBlock1 | outC->_L70_then_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L68_then_IfBlock1,
      rtmMessage);
    outC->_L74_then_IfBlock1 = outC->_L68_then_IfBlock1.valid;
    outC->_L80_then_IfBlock1 = outC->_L74_then_IfBlock1 & outC->_L65_then_IfBlock1;
    radioMessageConsistencyError_partial = outC->_L80_then_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &checkedMessage_partial,
      &outC->_L83_then_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->checkedMessage,
      &checkedMessage_partial);
    outC->radioSequenceError = radioSequenceError_partial;
    outC->tNvContactError = tNvContactError_partial;
    outC->otherTimingError = otherTimingError_partial;
    outC->radioMessageConsistencyError = radioMessageConsistencyError_partial;
  }
  else {
    outC->_L3_else_IfBlock1 = kcg_false;
    _4_otherTimingError_partial = outC->_L3_else_IfBlock1;
    _3_tNvContactError_partial = outC->_L3_else_IfBlock1;
    _2_radioSequenceError_partial = outC->_L3_else_IfBlock1;
    _5_radioMessageConsistencyError_partial = outC->_L3_else_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L1_else_IfBlock1,
      rtmMessage);
    /* IfBlock1:else:_L2=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#7)/ */
    ConvertTrackSideMessageTo_CheckEuroradioMessage(
      &outC->_L1_else_IfBlock1,
      &outC->_1_Context_ConvertTrackSideMessageToRadioMessage_7);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L2_else_IfBlock1,
      &outC->_1_Context_ConvertTrackSideMessageToRadioMessage_7.ReceivedMessage);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_1_checkedMessage_partial,
      &outC->_L2_else_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->checkedMessage,
      &_1_checkedMessage_partial);
    outC->radioSequenceError = _2_radioSequenceError_partial;
    outC->tNvContactError = _3_tNvContactError_partial;
    outC->otherTimingError = _4_otherTimingError_partial;
    outC->radioMessageConsistencyError = _5_radioMessageConsistencyError_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CheckEuroRadioMessage_init_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
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
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;

  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1_else_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].valid = kcg_true;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].checkResult = kcg_true;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].q_dir =
        Q_DIR_Reverse;
      outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].valid =
        kcg_true;
      outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L1_else_IfBlock1.telegramHeaders.Telegrams[idx2].packets.PacketData[idx1] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1_else_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_else_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_else_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L1_else_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L1_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx3].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx3].q_dir =
      Q_DIR_Reverse;
    outC->_L1_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L1_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx3].startAddress =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx3].endAddress =
      kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L1_else_IfBlock1.radio_Msg.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L1_else_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L1_else_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.valid = kcg_true;
  outC->_L2_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx5].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx5].startAddress =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx5].endAddress =
      kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L2_else_IfBlock1.packets.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->_L2_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1 = kcg_true;
  outC->_L84_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.valid = kcg_true;
  outC->_L83_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L83_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L83_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L83_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L83_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L83_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L83_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L83_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L83_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L83_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L83_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L83_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L83_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L83_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L83_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L83_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L83_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L83_then_IfBlock1.packets.PacketHeaders[idx7].nid_packet =
      kcg_lit_int32(0);
    outC->_L83_then_IfBlock1.packets.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L83_then_IfBlock1.packets.PacketHeaders[idx7].valid = kcg_true;
    outC->_L83_then_IfBlock1.packets.PacketHeaders[idx7].startAddress =
      kcg_lit_int32(0);
    outC->_L83_then_IfBlock1.packets.PacketHeaders[idx7].endAddress =
      kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L83_then_IfBlock1.packets.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L83_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L83_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L83_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L82_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L81_then_IfBlock1 = kcg_true;
  outC->_L80_then_IfBlock1 = kcg_true;
  outC->_L79_then_IfBlock1.valid = kcg_true;
  outC->_L79_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L79_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx11 = 0; idx11 < 8; idx11++) {
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].valid = kcg_true;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].checkResult =
      kcg_true;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx9 = 0; idx9 < 30; idx9++) {
      outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].nid_packet =
        kcg_lit_int32(0);
      outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].q_dir =
        Q_DIR_Reverse;
      outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].valid =
        kcg_true;
      outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].startAddress =
        kcg_lit_int32(0);
      outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].endAddress =
        kcg_lit_int32(0);
    }
    for (idx10 = 0; idx10 < 500; idx10++) {
      outC->_L79_then_IfBlock1.telegramHeaders.Telegrams[idx11].packets.PacketData[idx10] =
        kcg_lit_int32(0);
    }
  }
  outC->_L79_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L79_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L79_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L79_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->_L79_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L79_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx12].valid =
      kcg_true;
    outC->_L79_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L79_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L79_then_IfBlock1.radio_Msg.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L79_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L79_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L78_then_IfBlock1 = kcg_true;
  outC->_L77_then_IfBlock1.valid = kcg_true;
  outC->_L77_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L77_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx16 = 0; idx16 < 8; idx16++) {
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].valid = kcg_true;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].checkResult =
      kcg_true;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx14 = 0; idx14 < 30; idx14++) {
      outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].nid_packet =
        kcg_lit_int32(0);
      outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].q_dir =
        Q_DIR_Reverse;
      outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].valid =
        kcg_true;
      outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].startAddress =
        kcg_lit_int32(0);
      outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].endAddress =
        kcg_lit_int32(0);
    }
    for (idx15 = 0; idx15 < 500; idx15++) {
      outC->_L77_then_IfBlock1.telegramHeaders.Telegrams[idx16].packets.PacketData[idx15] =
        kcg_lit_int32(0);
    }
  }
  outC->_L77_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L77_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L77_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L77_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx17].nid_packet =
      kcg_lit_int32(0);
    outC->_L77_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx17].q_dir =
      Q_DIR_Reverse;
    outC->_L77_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx17].valid =
      kcg_true;
    outC->_L77_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx17].startAddress =
      kcg_lit_int32(0);
    outC->_L77_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx17].endAddress =
      kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L77_then_IfBlock1.radio_Msg.packets.PacketData[idx18] = kcg_lit_int32(0);
  }
  outC->_L77_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L77_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L77_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.valid = kcg_true;
  outC->_L76_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L76_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L76_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L76_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L76_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L76_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L76_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L76_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L76_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L76_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L76_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L76_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L76_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L76_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L76_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L76_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L76_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L76_then_IfBlock1.packets.PacketHeaders[idx19].nid_packet =
      kcg_lit_int32(0);
    outC->_L76_then_IfBlock1.packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L76_then_IfBlock1.packets.PacketHeaders[idx19].valid = kcg_true;
    outC->_L76_then_IfBlock1.packets.PacketHeaders[idx19].startAddress =
      kcg_lit_int32(0);
    outC->_L76_then_IfBlock1.packets.PacketHeaders[idx19].endAddress =
      kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L76_then_IfBlock1.packets.PacketData[idx20] = kcg_lit_int32(0);
  }
  outC->_L76_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L76_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L76_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L75_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L74_then_IfBlock1 = kcg_true;
  outC->_L73_then_IfBlock1 = kcg_true;
  outC->_L72_then_IfBlock1 = kcg_true;
  outC->_L70_then_IfBlock1 = kcg_true;
  outC->_L68_then_IfBlock1.valid = kcg_true;
  outC->_L68_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L68_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx23 = 0; idx23 < 8; idx23++) {
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].valid = kcg_true;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].checkResult =
      kcg_true;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx21 = 0; idx21 < 30; idx21++) {
      outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].packets.PacketHeaders[idx21].nid_packet =
        kcg_lit_int32(0);
      outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].packets.PacketHeaders[idx21].q_dir =
        Q_DIR_Reverse;
      outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].packets.PacketHeaders[idx21].valid =
        kcg_true;
      outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].packets.PacketHeaders[idx21].startAddress =
        kcg_lit_int32(0);
      outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].packets.PacketHeaders[idx21].endAddress =
        kcg_lit_int32(0);
    }
    for (idx22 = 0; idx22 < 500; idx22++) {
      outC->_L68_then_IfBlock1.telegramHeaders.Telegrams[idx23].packets.PacketData[idx22] =
        kcg_lit_int32(0);
    }
  }
  outC->_L68_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L68_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L68_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L68_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L68_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int32(0);
    outC->_L68_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx24].q_dir =
      Q_DIR_Reverse;
    outC->_L68_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx24].valid =
      kcg_true;
    outC->_L68_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int32(0);
    outC->_L68_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L68_then_IfBlock1.radio_Msg.packets.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L68_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L68_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L68_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L67_then_IfBlock1.registration.valid = kcg_true;
  outC->_L67_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L67_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L67_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L67_then_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L67_then_IfBlock1.connection.valid = kcg_true;
  outC->_L67_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L67_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L67_then_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L67_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L67_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L67_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L67_then_IfBlock1.session.valid = kcg_true;
  outC->_L67_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L67_then_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L67_then_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L67_then_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L66_then_IfBlock1 = kcg_true;
  outC->_L65_then_IfBlock1 = kcg_true;
  outC->_L64_then_IfBlock1 = kcg_true;
  outC->_L85_then_IfBlock1 = kcg_true;
  outC->_L86_then_IfBlock1 = kcg_true;
  outC->_L91_then_IfBlock1.valid = kcg_true;
  outC->_L91_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L91_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx28 = 0; idx28 < 8; idx28++) {
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].valid = kcg_true;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].checkResult =
      kcg_true;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx26 = 0; idx26 < 30; idx26++) {
      outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].packets.PacketHeaders[idx26].nid_packet =
        kcg_lit_int32(0);
      outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].packets.PacketHeaders[idx26].q_dir =
        Q_DIR_Reverse;
      outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].packets.PacketHeaders[idx26].valid =
        kcg_true;
      outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].packets.PacketHeaders[idx26].startAddress =
        kcg_lit_int32(0);
      outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].packets.PacketHeaders[idx26].endAddress =
        kcg_lit_int32(0);
    }
    for (idx27 = 0; idx27 < 500; idx27++) {
      outC->_L91_then_IfBlock1.telegramHeaders.Telegrams[idx28].packets.PacketData[idx27] =
        kcg_lit_int32(0);
    }
  }
  outC->_L91_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L91_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L91_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L91_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L91_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx29].nid_packet =
      kcg_lit_int32(0);
    outC->_L91_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx29].q_dir =
      Q_DIR_Reverse;
    outC->_L91_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx29].valid =
      kcg_true;
    outC->_L91_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx29].startAddress =
      kcg_lit_int32(0);
    outC->_L91_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx29].endAddress =
      kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L91_then_IfBlock1.radio_Msg.packets.PacketData[idx30] = kcg_lit_int32(0);
  }
  outC->_L91_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L91_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L91_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L90_then_IfBlock1 = kcg_true;
  outC->_L89_then_IfBlock1 = kcg_true;
  outC->_L94_then_IfBlock1 = kcg_true;
  outC->_L95_then_IfBlock1 = kcg_true;
  outC->_L101_then_IfBlock1 = kcg_true;
  outC->_L100_then_IfBlock1 = kcg_true;
  outC->_L99_then_IfBlock1.valid = kcg_true;
  outC->_L99_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L99_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx33 = 0; idx33 < 8; idx33++) {
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].valid = kcg_true;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].checkResult =
      kcg_true;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx31 = 0; idx31 < 30; idx31++) {
      outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].nid_packet =
        kcg_lit_int32(0);
      outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].q_dir =
        Q_DIR_Reverse;
      outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].valid =
        kcg_true;
      outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].startAddress =
        kcg_lit_int32(0);
      outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].packets.PacketHeaders[idx31].endAddress =
        kcg_lit_int32(0);
    }
    for (idx32 = 0; idx32 < 500; idx32++) {
      outC->_L99_then_IfBlock1.telegramHeaders.Telegrams[idx33].packets.PacketData[idx32] =
        kcg_lit_int32(0);
    }
  }
  outC->_L99_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L99_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L99_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L99_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L99_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->_L99_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx34].q_dir =
      Q_DIR_Reverse;
    outC->_L99_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx34].valid =
      kcg_true;
    outC->_L99_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->_L99_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L99_then_IfBlock1.radio_Msg.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->_L99_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L99_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L99_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L102_then_IfBlock1 = kcg_true;
  outC->_L103_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L104_then_IfBlock1 = kcg_lit_int32(0);
  outC->radioMessageConsistencyError = kcg_true;
  outC->otherTimingError = kcg_true;
  outC->tNvContactError = kcg_true;
  outC->radioSequenceError = kcg_true;
  outC->checkedMessage.valid = kcg_true;
  outC->checkedMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->checkedMessage.radioMetadata.t_train_reference = kcg_true;
  outC->checkedMessage.radioMetadata.nid_em = kcg_true;
  outC->checkedMessage.radioMetadata.q_scale = kcg_true;
  outC->checkedMessage.radioMetadata.d_sr = kcg_true;
  outC->checkedMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->checkedMessage.radioMetadata.d_ref = kcg_true;
  outC->checkedMessage.radioMetadata.q_dir = kcg_true;
  outC->checkedMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->checkedMessage.radioMetadata.m_version = kcg_true;
  outC->checkedMessage.BG_Common_Header.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->checkedMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->checkedMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->checkedMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->checkedMessage.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->checkedMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->checkedMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->checkedMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->checkedMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->checkedMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->checkedMessage.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->checkedMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->checkedMessage.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->checkedMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->checkedMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->checkedMessage.packets.PacketHeaders[idx36].nid_packet = kcg_lit_int32(0);
    outC->checkedMessage.packets.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->checkedMessage.packets.PacketHeaders[idx36].valid = kcg_true;
    outC->checkedMessage.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->checkedMessage.packets.PacketHeaders[idx36].endAddress = kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->checkedMessage.packets.PacketData[idx37] = kcg_lit_int32(0);
  }
  outC->checkedMessage.sendingRBC.valid = kcg_true;
  outC->checkedMessage.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->checkedMessage.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->checkedMessage.sendingRBC.device_id = kcg_lit_int32(0);
  /* IfBlock1:then:_L83=(CheckEuroradioMessage::BuildOutput#6)/ */
  BuildOutput_init_CheckEuroradioMessage(&outC->Context_BuildOutput_6);
  /* IfBlock1:then:_L64=(CheckEuroradioMessage::CheckAllowedPacketsRadio#6)/ */
  CheckAllowedPacketsRadio_init_CheckEuroradioMessage(
    &outC->Context_CheckAllowedPacketsRadio_6);
  /* IfBlock1:then:_L73=(CheckEuroradioMessage::CheckMandatoryVariablesAndMA#6)/ */
  CheckMandatoryVariablesAndMA_init_CheckEuroradioMessage(
    &outC->Context_CheckMandatoryVariablesAndMA_6);
  /* IfBlock1:then:_L85=(CheckEuroradioMessage::TimingChecker#6)/ */
  TimingChecker_init_CheckEuroradioMessage(&outC->Context_TimingChecker_6);
  /* IfBlock1:then:_L76=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#6)/ */
  ConvertTrackSideMessageTo_init_CheckEuroradioMessage(
    &outC->Context_ConvertTrackSideMessageToRadioMessage_6);
  /* IfBlock1:else:_L2=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#7)/ */
  ConvertTrackSideMessageTo_init_CheckEuroradioMessage(
    &outC->_1_Context_ConvertTrackSideMessageToRadioMessage_7);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckEuroRadioMessage_reset_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* IfBlock1:then:_L83=(CheckEuroradioMessage::BuildOutput#6)/ */
  BuildOutput_reset_CheckEuroradioMessage(&outC->Context_BuildOutput_6);
  /* IfBlock1:then:_L64=(CheckEuroradioMessage::CheckAllowedPacketsRadio#6)/ */
  CheckAllowedPacketsRadio_reset_CheckEuroradioMessage(
    &outC->Context_CheckAllowedPacketsRadio_6);
  /* IfBlock1:then:_L73=(CheckEuroradioMessage::CheckMandatoryVariablesAndMA#6)/ */
  CheckMandatoryVariablesAndMA_reset_CheckEuroradioMessage(
    &outC->Context_CheckMandatoryVariablesAndMA_6);
  /* IfBlock1:then:_L85=(CheckEuroradioMessage::TimingChecker#6)/ */
  TimingChecker_reset_CheckEuroradioMessage(&outC->Context_TimingChecker_6);
  /* IfBlock1:then:_L76=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#6)/ */
  ConvertTrackSideMessageTo_reset_CheckEuroradioMessage(
    &outC->Context_ConvertTrackSideMessageToRadioMessage_6);
  /* IfBlock1:else:_L2=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#7)/ */
  ConvertTrackSideMessageTo_reset_CheckEuroradioMessage(
    &outC->_1_Context_ConvertTrackSideMessageToRadioMessage_7);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckEuroRadioMessage_CheckEuroradioMessage.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

