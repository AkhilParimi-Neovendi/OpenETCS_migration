/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingNotInUse/ */
void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC)
{
  /* applyServiceBrake/ */
  static kcg_bool applyServiceBrake_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool badBaliseMessageToDMI_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg passedBG_out_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool errorUnlinkedBG_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg nid_errorBG_partial;
  /* nid_c/ */
  static NID_C nid_c_partial;
  /* applyServiceBrake/ */
  static kcg_bool _1_applyServiceBrake_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool _2_badBaliseMessageToDMI_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _3_passedBG_out_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool _4_errorUnlinkedBG_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _5_nid_errorBG_partial;
  /* nid_c/ */
  static NID_C _6_nid_c_partial;
  /* nid_c/ */
  static NID_C _7_nid_c_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _8_nid_errorBG_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool _9_errorUnlinkedBG_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _10_passedBG_out_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool _11_badBaliseMessageToDMI_partial;
  /* applyServiceBrake/ */
  static kcg_bool _12_applyServiceBrake_partial;
  /* nid_c/ */
  static NID_C _13_nid_c_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _14_nid_errorBG_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool _15_errorUnlinkedBG_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _16_passedBG_out_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool _17_badBaliseMessageToDMI_partial;
  /* applyServiceBrake/ */
  static kcg_bool _18_applyServiceBrake_partial;

  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L20, trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L21, &outC->_L20.telegramHeaders);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L24,
    &outC->_L21.Telegrams[0].telegramheader);
  outC->_L23 = outC->_L24.nid_bg;
  outC->_L22 = outC->_L24.nid_c;
  outC->nid_c_local = outC->_L22;
  outC->nid_errorBG_local = outC->_L23;
  /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#1)/ */
  CheckCompleteness_CheckBGConsistency_Pkg(
    &outC->_L21,
    &outC->Context_CheckCompleteness_1);
  outC->_L11 = outC->Context_CheckCompleteness_1.isComplete;
  outC->_L12 = outC->Context_CheckCompleteness_1.isSingleBG;
  kcg_copy_Telegram_T_BG_Types_Pkg(
    &outC->_L13,
    &outC->Context_CheckCompleteness_1.lastTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &outC->_L13);
  outC->isSingle = outC->_L12;
  outC->_L15 = outC->_L11 ^ outC->_L12;
  outC->isComplete = outC->_L15;
  outC->IfBlock1_clock = outC->isComplete & outC->isSingle;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    nid_c_partial = kcg_lit_int64(0);
    nid_errorBG_partial = kcg_lit_int64(16383);
    errorUnlinkedBG_partial = kcg_false;
    badBaliseMessageToDMI_partial = kcg_false;
    applyServiceBrake_partial = kcg_false;
    outC->_L15_then_IfBlock1 = kcg_true;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L12_then_IfBlock1,
      trackSideForCheck);
    outC->_L13_then_IfBlock1 = q_nvlocacc;
    /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */
    BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L12_then_IfBlock1,
      outC->_L13_then_IfBlock1,
      &outC->Context_BuildCheckedMessage_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L9_then_IfBlock1,
      &outC->Context_BuildCheckedMessage_1.checkedMessage);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L16_then_IfBlock1,
      &outC->_L9_then_IfBlock1);
    if (kcg_true) {
      outC->_L16_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
        outC->_L15_then_IfBlock1;
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &passedBG_out_partial,
      &outC->_L16_then_IfBlock1);
    outC->applyServiceBrake = applyServiceBrake_partial;
    outC->badBaliseMessageToDMI = badBaliseMessageToDMI_partial;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out_partial);
    outC->errorUnlinkedBG = errorUnlinkedBG_partial;
    outC->nid_errorBG = nid_errorBG_partial;
    outC->nid_c = nid_c_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->isComplete;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      _13_nid_c_partial = kcg_lit_int64(0);
      _14_nid_errorBG_partial = kcg_lit_int64(16383);
      _15_errorUnlinkedBG_partial = kcg_false;
      _17_badBaliseMessageToDMI_partial = kcg_false;
      _18_applyServiceBrake_partial = kcg_false;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L19_then_else_IfBlock1,
        &outC->lastTelegram);
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &outC->_L25_then_else_IfBlock1,
        trackSideForCheck);
      kcg_copy_BG_Message_T_BG_Types_Pkg(
        &outC->_L26_then_else_IfBlock1,
        &outC->_L25_then_else_IfBlock1.telegramHeaders);
      outC->_L24_then_else_IfBlock1 = q_nvlocacc;
      outC->_L18_then_else_IfBlock1 =
        outC->_L26_then_else_IfBlock1.Telegrams[0].telegramheader.n_pig;
      /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L18_then_else_IfBlock1,
        &outC->Context_N_PIG2int_17);
      outC->_L14_then_else_IfBlock1 = outC->Context_N_PIG2int_17.n_pig2int;
      outC->_L16_then_else_IfBlock1 =
        outC->_L19_then_else_IfBlock1.telegramheader.n_pig;
      /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L16_then_else_IfBlock1,
        &outC->Context_N_PIG2int_16);
      outC->_L15_then_else_IfBlock1 = outC->Context_N_PIG2int_16.n_pig2int;
      outC->_L13_then_else_IfBlock1 = outC->_L15_then_else_IfBlock1 >
        outC->_L14_then_else_IfBlock1;
      /* IfBlock1:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#2)/ */
      BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
        &outC->_L25_then_else_IfBlock1,
        outC->_L24_then_else_IfBlock1,
        &outC->Context_BuildCheckedMessage_2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L3_then_else_IfBlock1,
        &outC->Context_BuildCheckedMessage_2.checkedMessage);
      /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */
      WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        outC->_L13_then_else_IfBlock1,
        &outC->_L3_then_else_IfBlock1,
        &outC->Context_WriteDirection2PassedBG_1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L23_then_else_IfBlock1,
        &outC->Context_WriteDirection2PassedBG_1.passedBG_out);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_16_passedBG_out_partial,
        &outC->_L23_then_else_IfBlock1);
      _1_applyServiceBrake_partial = _18_applyServiceBrake_partial;
      _2_badBaliseMessageToDMI_partial = _17_badBaliseMessageToDMI_partial;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_3_passedBG_out_partial,
        &_16_passedBG_out_partial);
      _4_errorUnlinkedBG_partial = _15_errorUnlinkedBG_partial;
      _5_nid_errorBG_partial = _14_nid_errorBG_partial;
      _6_nid_c_partial = _13_nid_c_partial;
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_10_passedBG_out_partial,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      outC->_L6_else_else_IfBlock1 = outC->nid_c_local;
      _7_nid_c_partial = outC->_L6_else_else_IfBlock1;
      outC->_L7_else_else_IfBlock1 = outC->nid_errorBG_local;
      _8_nid_errorBG_partial = outC->_L7_else_else_IfBlock1;
      outC->_L5_else_else_IfBlock1 = kcg_true;
      _9_errorUnlinkedBG_partial = outC->_L5_else_else_IfBlock1;
      outC->_L4_else_else_IfBlock1 = kcg_true;
      outC->_L3_else_else_IfBlock1 = kcg_true;
      _11_badBaliseMessageToDMI_partial = outC->_L3_else_else_IfBlock1;
      _12_applyServiceBrake_partial = outC->_L4_else_else_IfBlock1;
      _1_applyServiceBrake_partial = _12_applyServiceBrake_partial;
      _2_badBaliseMessageToDMI_partial = _11_badBaliseMessageToDMI_partial;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_3_passedBG_out_partial,
        &_10_passedBG_out_partial);
      _4_errorUnlinkedBG_partial = _9_errorUnlinkedBG_partial;
      _5_nid_errorBG_partial = _8_nid_errorBG_partial;
      _6_nid_c_partial = _7_nid_c_partial;
    }
    outC->applyServiceBrake = _1_applyServiceBrake_partial;
    outC->badBaliseMessageToDMI = _2_badBaliseMessageToDMI_partial;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_3_passedBG_out_partial);
    outC->errorUnlinkedBG = _4_errorUnlinkedBG_partial;
    outC->nid_errorBG = _5_nid_errorBG_partial;
    outC->nid_c = _6_nid_c_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CaseLinkingNotInUse_init_CheckBGConsistency_Pkg(
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC)
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
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;

  outC->_L22 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.q_media = Q_MEDIA_Balise;
  outC->_L24.n_pig = N_PIG_I_am_the_1st;
  outC->_L24.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.m_dup = M_DUP_No_duplicates;
  outC->_L24.m_mcount = kcg_lit_int64(0);
  outC->_L24.nid_c = kcg_lit_int64(0);
  outC->_L24.nid_bg = kcg_lit_int64(0);
  outC->_L24.q_link = Q_LINK_Unlinked;
  outC->_L20.valid = kcg_true;
  outC->_L20.systemTime = kcg_lit_int64(0);
  outC->_L20.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L20.telegramHeaders.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L20.telegramHeaders.Telegrams[idx2].valid = kcg_true;
    outC->_L20.telegramHeaders.Telegrams[idx2].checkResult = kcg_true;
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L20.telegramHeaders.Telegrams[idx2].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L20.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int64(0);
      outC->_L20.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].q_dir =
        Q_DIR_Reverse;
      outC->_L20.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].valid =
        kcg_true;
      outC->_L20.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int64(0);
      outC->_L20.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int64(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L20.telegramHeaders.Telegrams[idx2].packets.PacketData[idx1] =
        kcg_lit_int64(0);
    }
  }
  outC->_L20.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20.radio_Msg.present = kcg_true;
  outC->_L20.radio_Msg.consistencyError = kcg_true;
  outC->_L20.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L20.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.t_train_reference = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L20.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L20.radio_Msg.header.d_emergencystop = kcg_lit_int64(0);
  outC->_L20.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L20.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L20.radio_Msg.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
    outC->_L20.radio_Msg.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L20.radio_Msg.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L20.radio_Msg.packets.PacketHeaders[idx3].startAddress =
      kcg_lit_int64(0);
    outC->_L20.radio_Msg.packets.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L20.radio_Msg.packets.PacketData[idx4] = kcg_lit_int64(0);
  }
  outC->_L20.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L20.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L20.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L20.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L21.present = kcg_true;
  for (idx7 = 0; idx7 < 8; idx7++) {
    outC->_L21.Telegrams[idx7].valid = kcg_true;
    outC->_L21.Telegrams[idx7].checkResult = kcg_true;
    outC->_L21.Telegrams[idx7].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L21.Telegrams[idx7].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L21.Telegrams[idx7].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L21.Telegrams[idx7].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L21.Telegrams[idx7].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L21.Telegrams[idx7].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L21.Telegrams[idx7].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L21.Telegrams[idx7].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L21.Telegrams[idx7].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L21.Telegrams[idx7].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx5 = 0; idx5 < 30; idx5++) {
      outC->_L21.Telegrams[idx7].packets.PacketHeaders[idx5].nid_packet =
        kcg_lit_int64(0);
      outC->_L21.Telegrams[idx7].packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
      outC->_L21.Telegrams[idx7].packets.PacketHeaders[idx5].valid = kcg_true;
      outC->_L21.Telegrams[idx7].packets.PacketHeaders[idx5].startAddress =
        kcg_lit_int64(0);
      outC->_L21.Telegrams[idx7].packets.PacketHeaders[idx5].endAddress =
        kcg_lit_int64(0);
    }
    for (idx6 = 0; idx6 < 500; idx6++) {
      outC->_L21.Telegrams[idx7].packets.PacketData[idx6] = kcg_lit_int64(0);
    }
  }
  outC->_L21.numberBalises = kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L21.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13.valid = kcg_true;
  outC->_L13.checkResult = kcg_true;
  outC->_L13.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L13.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L13.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L13.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L13.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L13.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L13.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L13.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L13.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->nid_c_local = kcg_lit_int64(0);
  outC->nid_errorBG_local = kcg_lit_int64(0);
  outC->lastTelegram.valid = kcg_true;
  outC->lastTelegram.checkResult = kcg_true;
  outC->lastTelegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lastTelegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lastTelegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->lastTelegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->lastTelegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->lastTelegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->lastTelegram.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->lastTelegram.telegramheader.nid_c = kcg_lit_int64(0);
  outC->lastTelegram.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->lastTelegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->lastTelegram.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->lastTelegram.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->lastTelegram.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->lastTelegram.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->lastTelegram.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->lastTelegram.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->isSingle = kcg_true;
  outC->isComplete = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L19_then_else_IfBlock1.valid = kcg_true;
  outC->_L19_then_else_IfBlock1.checkResult = kcg_true;
  outC->_L19_then_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19_then_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_then_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L19_then_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L19_then_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19_then_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L19_then_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L19_then_else_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L19_then_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L19_then_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int64(0);
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int64(0);
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L19_then_else_IfBlock1.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L26_then_else_IfBlock1.present = kcg_true;
  for (idx16 = 0; idx16 < 8; idx16++) {
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].valid = kcg_true;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].checkResult = kcg_true;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L26_then_else_IfBlock1.Telegrams[idx16].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx14 = 0; idx14 < 30; idx14++) {
      outC->_L26_then_else_IfBlock1.Telegrams[idx16].packets.PacketHeaders[idx14].nid_packet =
        kcg_lit_int64(0);
      outC->_L26_then_else_IfBlock1.Telegrams[idx16].packets.PacketHeaders[idx14].q_dir =
        Q_DIR_Reverse;
      outC->_L26_then_else_IfBlock1.Telegrams[idx16].packets.PacketHeaders[idx14].valid =
        kcg_true;
      outC->_L26_then_else_IfBlock1.Telegrams[idx16].packets.PacketHeaders[idx14].startAddress =
        kcg_lit_int64(0);
      outC->_L26_then_else_IfBlock1.Telegrams[idx16].packets.PacketHeaders[idx14].endAddress =
        kcg_lit_int64(0);
    }
    for (idx15 = 0; idx15 < 500; idx15++) {
      outC->_L26_then_else_IfBlock1.Telegrams[idx16].packets.PacketData[idx15] =
        kcg_lit_int64(0);
    }
  }
  outC->_L26_then_else_IfBlock1.numberBalises = kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L26_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.valid = kcg_true;
  outC->_L25_then_else_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L25_then_else_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx19 = 0; idx19 < 8; idx19++) {
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].valid = kcg_true;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].checkResult =
      kcg_true;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx17 = 0; idx17 < 30; idx17++) {
      outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].packets.PacketHeaders[idx17].nid_packet =
        kcg_lit_int64(0);
      outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].packets.PacketHeaders[idx17].q_dir =
        Q_DIR_Reverse;
      outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].packets.PacketHeaders[idx17].valid =
        kcg_true;
      outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].packets.PacketHeaders[idx17].startAddress =
        kcg_lit_int64(0);
      outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].packets.PacketHeaders[idx17].endAddress =
        kcg_lit_int64(0);
    }
    for (idx18 = 0; idx18 < 500; idx18++) {
      outC->_L25_then_else_IfBlock1.telegramHeaders.Telegrams[idx19].packets.PacketData[idx18] =
        kcg_lit_int64(0);
    }
  }
  outC->_L25_then_else_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L25_then_else_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25_then_else_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L25_then_else_IfBlock1.radio_Msg.header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L25_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx20].nid_packet =
      kcg_lit_int64(0);
    outC->_L25_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx20].q_dir =
      Q_DIR_Reverse;
    outC->_L25_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx20].valid =
      kcg_true;
    outC->_L25_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx20].startAddress =
      kcg_lit_int64(0);
    outC->_L25_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx20].endAddress =
      kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L25_then_else_IfBlock1.radio_Msg.packets.PacketData[idx21] =
      kcg_lit_int64(0);
  }
  outC->_L25_then_else_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L25_then_else_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L25_then_else_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L23_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(
      0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(
      0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx22].nid_packet =
      kcg_lit_int64(0);
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx22].q_dir =
      Q_DIR_Reverse;
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx22].startAddress =
      kcg_lit_int64(0);
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx22].endAddress =
      kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L23_then_else_IfBlock1.packets.PacketData[idx23] = kcg_lit_int64(0);
  }
  outC->_L23_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L13_then_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L16_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L18_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L3_then_else_IfBlock1.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L3_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L3_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int64(0);
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int64(0);
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L3_then_else_IfBlock1.packets.PacketData[idx25] = kcg_lit_int64(0);
  }
  outC->_L3_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L6_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L7_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_else_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_IfBlock1 = kcg_true;
  outC->_L4_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1.valid = kcg_true;
  outC->_L9_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L9_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L9_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L9_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L9_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L9_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx26].nid_packet =
      kcg_lit_int64(0);
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx26].startAddress =
      kcg_lit_int64(0);
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx26].endAddress =
      kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L9_then_IfBlock1.packets.PacketData[idx27] = kcg_lit_int64(0);
  }
  outC->_L9_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L9_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L12_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx30 = 0; idx30 < 8; idx30++) {
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].valid = kcg_true;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].checkResult =
      kcg_true;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx28 = 0; idx28 < 30; idx28++) {
      outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].packets.PacketHeaders[idx28].nid_packet =
        kcg_lit_int64(0);
      outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].packets.PacketHeaders[idx28].q_dir =
        Q_DIR_Reverse;
      outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].packets.PacketHeaders[idx28].valid =
        kcg_true;
      outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].packets.PacketHeaders[idx28].startAddress =
        kcg_lit_int64(0);
      outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].packets.PacketHeaders[idx28].endAddress =
        kcg_lit_int64(0);
    }
    for (idx29 = 0; idx29 < 500; idx29++) {
      outC->_L12_then_IfBlock1.telegramHeaders.Telegrams[idx30].packets.PacketData[idx29] =
        kcg_lit_int64(0);
    }
  }
  outC->_L12_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L12_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L12_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx31].nid_packet =
      kcg_lit_int64(0);
    outC->_L12_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx31].q_dir =
      Q_DIR_Reverse;
    outC->_L12_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx31].valid =
      kcg_true;
    outC->_L12_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx31].startAddress =
      kcg_lit_int64(0);
    outC->_L12_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx31].endAddress =
      kcg_lit_int64(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->_L12_then_IfBlock1.radio_Msg.packets.PacketData[idx32] = kcg_lit_int64(0);
  }
  outC->_L12_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L12_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L13_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1 = kcg_true;
  outC->_L16_then_IfBlock1.valid = kcg_true;
  outC->_L16_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L16_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L16_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L16_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L16_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L16_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L16_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx33].nid_packet =
      kcg_lit_int64(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx33].q_dir = Q_DIR_Reverse;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx33].valid = kcg_true;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx33].startAddress =
      kcg_lit_int64(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx33].endAddress =
      kcg_lit_int64(0);
  }
  for (idx34 = 0; idx34 < 500; idx34++) {
    outC->_L16_then_IfBlock1.packets.PacketData[idx34] = kcg_lit_int64(0);
  }
  outC->_L16_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L16_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->nid_c = kcg_lit_int64(0);
  outC->nid_errorBG = kcg_lit_int64(0);
  outC->errorUnlinkedBG = kcg_true;
  outC->passedBG_out.valid = kcg_true;
  outC->passedBG_out.source = msrc_undefined_Common_Types_Pkg;
  outC->passedBG_out.radioMetadata.t_train_reference = kcg_true;
  outC->passedBG_out.radioMetadata.nid_em = kcg_true;
  outC->passedBG_out.radioMetadata.q_scale = kcg_true;
  outC->passedBG_out.radioMetadata.d_sr = kcg_true;
  outC->passedBG_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->passedBG_out.radioMetadata.d_ref = kcg_true;
  outC->passedBG_out.radioMetadata.q_dir = kcg_true;
  outC->passedBG_out.radioMetadata.d_emergencystop = kcg_true;
  outC->passedBG_out.radioMetadata.m_version = kcg_true;
  outC->passedBG_out.BG_Common_Header.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBG_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->passedBG_out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBG_out.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->passedBG_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedBG_out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBG_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedBG_out.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->passedBG_out.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->passedBG_out.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->passedBG_out.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx35 = 0; idx35 < 30; idx35++) {
    outC->passedBG_out.packets.PacketHeaders[idx35].nid_packet = kcg_lit_int64(0);
    outC->passedBG_out.packets.PacketHeaders[idx35].q_dir = Q_DIR_Reverse;
    outC->passedBG_out.packets.PacketHeaders[idx35].valid = kcg_true;
    outC->passedBG_out.packets.PacketHeaders[idx35].startAddress = kcg_lit_int64(0);
    outC->passedBG_out.packets.PacketHeaders[idx35].endAddress = kcg_lit_int64(0);
  }
  for (idx36 = 0; idx36 < 500; idx36++) {
    outC->passedBG_out.packets.PacketData[idx36] = kcg_lit_int64(0);
  }
  outC->passedBG_out.sendingRBC.valid = kcg_true;
  outC->passedBG_out.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->passedBG_out.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->passedBG_out.sendingRBC.device_id = kcg_lit_int64(0);
  outC->badBaliseMessageToDMI = kcg_true;
  outC->applyServiceBrake = kcg_true;
  /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */
  BuildCheckedMessage_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_BuildCheckedMessage_1);
  /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */
  WriteDirection2PassedBG_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_WriteDirection2PassedBG_1);
  /* IfBlock1:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#2)/ */
  BuildCheckedMessage_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_BuildCheckedMessage_2);
  /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_16);
  /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_17);
  /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#1)/ */
  CheckCompleteness_init_CheckBGConsistency_Pkg(
    &outC->Context_CheckCompleteness_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CaseLinkingNotInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC)
{
  /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */
  BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_BuildCheckedMessage_1);
  /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */
  WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_WriteDirection2PassedBG_1);
  /* IfBlock1:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#2)/ */
  BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_BuildCheckedMessage_2);
  /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_16);
  /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_17);
  /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#1)/ */
  CheckCompleteness_reset_CheckBGConsistency_Pkg(
    &outC->Context_CheckCompleteness_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

