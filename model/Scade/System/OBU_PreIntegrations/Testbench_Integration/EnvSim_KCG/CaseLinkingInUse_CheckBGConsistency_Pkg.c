/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingInUse/ */
void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
{
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg passedBG_out_partial;
  /* errorLinkedBG/ */
  static kcg_bool errorLinkedBG_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg nid_errorBG_partial;
  /* nid_c/ */
  static NID_C nid_c_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _1_passedBG_out_partial;
  /* errorLinkedBG/ */
  static kcg_bool _2_errorLinkedBG_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _3_nid_errorBG_partial;
  /* nid_c/ */
  static NID_C _4_nid_c_partial;
  /* nid_c/ */
  static NID_C _5_nid_c_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _6_nid_errorBG_partial;
  /* errorLinkedBG/ */
  static kcg_bool _7_errorLinkedBG_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _8_passedBG_out_partial;
  /* nid_c/ */
  static NID_C _9_nid_c_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _10_nid_errorBG_partial;
  /* errorLinkedBG/ */
  static kcg_bool _11_errorLinkedBG_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _12_passedBG_out_partial;
  /* passedBGlocal/ */
  static ReceivedMessage_T_Common_Types_Pkg last_passedBGlocal;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &last_passedBGlocal,
    &outC->passedBGlocal);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L26, trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L27, &outC->_L26.telegramHeaders);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L28,
    &outC->_L27.Telegrams[0].telegramheader);
  outC->_L29 = outC->_L28.nid_bg;
  outC->nid_errorBG_local = outC->_L29;
  outC->_L30 = outC->_L28.nid_c;
  outC->nid_c_local = outC->_L30;
  outC->_L25 = q_nvlocacc;
  /* _L19=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */
  BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L26,
    outC->_L25,
    &outC->Context_BuildCheckedMessage_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->Context_BuildCheckedMessage_1.checkedMessage);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L24, &outC->_L19.BG_Common_Header);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, storedBGs);
  /* _L16=(CheckBGConsistency_Pkg::SubFunction::IsBG_announced#1)/ */
  IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L24,
    &outC->_L18,
    &outC->Context_IsBG_announced_1);
  outC->_L16 = outC->Context_IsBG_announced_1.isAnnounced;
  outC->_L17 = outC->Context_IsBG_announced_1.q_linkorintation;
  outC->q_linkorientation_local = outC->_L17;
  outC->isAnnounced = outC->_L16;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->passedBGlocal, &outC->_L19);
  /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#2)/ */
  CheckCompleteness_CheckBGConsistency_Pkg(
    &outC->_L27,
    &outC->Context_CheckCompleteness_2);
  outC->_L11 = outC->Context_CheckCompleteness_2.isComplete;
  outC->_L12 = outC->Context_CheckCompleteness_2.isSingleBG;
  kcg_copy_Telegram_T_BG_Types_Pkg(
    &outC->_L13,
    &outC->Context_CheckCompleteness_2.lastTelegram);
  outC->isSingle = outC->_L12;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &outC->_L13);
  outC->_L15 = outC->_L11 ^ outC->_L12;
  outC->isComplete = outC->_L15;
  outC->IfBlock1_clock = outC->isComplete & outC->isSingle & outC->isAnnounced;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    nid_c_partial = kcg_lit_int64(0);
    nid_errorBG_partial = kcg_lit_int64(16383);
    errorLinkedBG_partial = kcg_false;
    outC->_L19_then_IfBlock1 = outC->q_linkorientation_local;
    outC->_L12_then_IfBlock1 =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
    outC->_L13_then_IfBlock1 = outC->_L12_then_IfBlock1 == outC->_L19_then_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L14_then_IfBlock1,
      &outC->passedBGlocal);
    /* IfBlock1:then:_L16=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */
    WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      outC->_L13_then_IfBlock1,
      &outC->_L14_then_IfBlock1,
      &outC->Context_WriteDirection2PassedBG_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L16_then_IfBlock1,
      &outC->Context_WriteDirection2PassedBG_1.passedBG_out);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &passedBG_out_partial,
      &outC->_L16_then_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out_partial);
    outC->errorLinkedBG = errorLinkedBG_partial;
    outC->nid_errorBG = nid_errorBG_partial;
    outC->nid_c = nid_c_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->isComplete & outC->isAnnounced;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      _9_nid_c_partial = kcg_lit_int64(0);
      _10_nid_errorBG_partial = kcg_lit_int64(16383);
      _11_errorLinkedBG_partial = kcg_false;
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &outC->_L57_then_else_IfBlock1,
        trackSideForCheck);
      kcg_copy_BG_Message_T_BG_Types_Pkg(
        &outC->_L58_then_else_IfBlock1,
        &outC->_L57_then_else_IfBlock1.telegramHeaders);
      outC->_L52_then_else_IfBlock1 = outC->q_linkorientation_local;
      outC->_L45_then_else_IfBlock1 =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
      outC->_L47_then_else_IfBlock1 = outC->_L45_then_else_IfBlock1 ==
        outC->_L52_then_else_IfBlock1;
      outC->_L18_then_else_IfBlock1 =
        outC->_L58_then_else_IfBlock1.Telegrams[0].telegramheader.n_pig;
      /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L18_then_else_IfBlock1,
        &outC->Context_N_PIG2int_17);
      outC->_L14_then_else_IfBlock1 = outC->Context_N_PIG2int_17.n_pig2int;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L19_then_else_IfBlock1,
        &outC->lastTelegram);
      outC->_L16_then_else_IfBlock1 =
        outC->_L19_then_else_IfBlock1.telegramheader.n_pig;
      /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L16_then_else_IfBlock1,
        &outC->Context_N_PIG2int_16);
      outC->_L15_then_else_IfBlock1 = outC->Context_N_PIG2int_16.n_pig2int;
      outC->_L13_then_else_IfBlock1 = outC->_L15_then_else_IfBlock1 >
        outC->_L14_then_else_IfBlock1;
      outC->_L49_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1 &
        outC->_L47_then_else_IfBlock1;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L24_then_else_IfBlock1,
        &outC->passedBGlocal);
      /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#2)/ */
      WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        outC->_L49_then_else_IfBlock1,
        &outC->_L24_then_else_IfBlock1,
        &outC->Context_WriteDirection2PassedBG_2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L23_then_else_IfBlock1,
        &outC->Context_WriteDirection2PassedBG_2.passedBG_out);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_12_passedBG_out_partial,
        &outC->_L23_then_else_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_1_passedBG_out_partial,
        &_12_passedBG_out_partial);
      _2_errorLinkedBG_partial = _11_errorLinkedBG_partial;
      _3_nid_errorBG_partial = _10_nid_errorBG_partial;
      _4_nid_c_partial = _9_nid_c_partial;
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_8_passedBG_out_partial,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      outC->_L2_else_else_IfBlock1 = outC->nid_c_local;
      _5_nid_c_partial = outC->_L2_else_else_IfBlock1;
      outC->_L3_else_else_IfBlock1 = outC->nid_errorBG_local;
      _6_nid_errorBG_partial = outC->_L3_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = kcg_true;
      _7_errorLinkedBG_partial = outC->_L1_else_else_IfBlock1;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_1_passedBG_out_partial,
        &_8_passedBG_out_partial);
      _2_errorLinkedBG_partial = _7_errorLinkedBG_partial;
      _3_nid_errorBG_partial = _6_nid_errorBG_partial;
      _4_nid_c_partial = _5_nid_c_partial;
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_1_passedBG_out_partial);
    outC->errorLinkedBG = _2_errorLinkedBG_partial;
    outC->nid_errorBG = _3_nid_errorBG_partial;
    outC->nid_c = _4_nid_c_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CaseLinkingInUse_init_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
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

  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.q_media = Q_MEDIA_Balise;
  outC->_L28.n_pig = N_PIG_I_am_the_1st;
  outC->_L28.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.m_dup = M_DUP_No_duplicates;
  outC->_L28.m_mcount = kcg_lit_int64(0);
  outC->_L28.nid_c = kcg_lit_int64(0);
  outC->_L28.nid_bg = kcg_lit_int64(0);
  outC->_L28.q_link = Q_LINK_Unlinked;
  outC->_L27.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L27.Telegrams[idx2].valid = kcg_true;
    outC->_L27.Telegrams[idx2].checkResult = kcg_true;
    outC->_L27.Telegrams[idx2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L27.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L27.Telegrams[idx2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L27.Telegrams[idx2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L27.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L27.Telegrams[idx2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L27.Telegrams[idx2].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L27.Telegrams[idx2].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L27.Telegrams[idx2].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L27.Telegrams[idx2].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L27.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int64(0);
      outC->_L27.Telegrams[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L27.Telegrams[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L27.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int64(0);
      outC->_L27.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int64(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L27.Telegrams[idx2].packets.PacketData[idx1] = kcg_lit_int64(0);
    }
  }
  outC->_L27.numberBalises = kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L27.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L27.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L26.valid = kcg_true;
  outC->_L26.systemTime = kcg_lit_int64(0);
  outC->_L26.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L26.telegramHeaders.present = kcg_true;
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L26.telegramHeaders.Telegrams[idx5].valid = kcg_true;
    outC->_L26.telegramHeaders.Telegrams[idx5].checkResult = kcg_true;
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L26.telegramHeaders.Telegrams[idx5].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L26.telegramHeaders.Telegrams[idx5].packets.PacketHeaders[idx3].nid_packet =
        kcg_lit_int64(0);
      outC->_L26.telegramHeaders.Telegrams[idx5].packets.PacketHeaders[idx3].q_dir =
        Q_DIR_Reverse;
      outC->_L26.telegramHeaders.Telegrams[idx5].packets.PacketHeaders[idx3].valid =
        kcg_true;
      outC->_L26.telegramHeaders.Telegrams[idx5].packets.PacketHeaders[idx3].startAddress =
        kcg_lit_int64(0);
      outC->_L26.telegramHeaders.Telegrams[idx5].packets.PacketHeaders[idx3].endAddress =
        kcg_lit_int64(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L26.telegramHeaders.Telegrams[idx5].packets.PacketData[idx4] =
        kcg_lit_int64(0);
    }
  }
  outC->_L26.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L26.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L26.radio_Msg.present = kcg_true;
  outC->_L26.radio_Msg.consistencyError = kcg_true;
  outC->_L26.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L26.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.t_train_reference = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L26.radio_Msg.header.d_emergencystop = kcg_lit_int64(0);
  outC->_L26.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L26.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L26.radio_Msg.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L26.radio_Msg.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L26.radio_Msg.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L26.radio_Msg.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int64(0);
    outC->_L26.radio_Msg.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L26.radio_Msg.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L26.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L26.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L26.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L26.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.q_media = Q_MEDIA_Balise;
  outC->_L24.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.m_mcount = kcg_lit_int64(0);
  outC->_L24.nid_c = kcg_lit_int64(0);
  outC->_L24.nid_bg = kcg_lit_int64(0);
  outC->_L24.q_link = Q_LINK_Unlinked;
  outC->_L24.bgPosition.valid = kcg_true;
  outC->_L24.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L24.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L24.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L24.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L24.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L24.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L24.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L24.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L24.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L24.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L24.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L24.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L24.q_nvlocacc = kcg_lit_int64(0);
  outC->_L24.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L24.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L24.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L19.valid = kcg_true;
  outC->_L19.source = msrc_undefined_Common_Types_Pkg;
  outC->_L19.radioMetadata.t_train_reference = kcg_true;
  outC->_L19.radioMetadata.nid_em = kcg_true;
  outC->_L19.radioMetadata.q_scale = kcg_true;
  outC->_L19.radioMetadata.d_sr = kcg_true;
  outC->_L19.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L19.radioMetadata.d_ref = kcg_true;
  outC->_L19.radioMetadata.q_dir = kcg_true;
  outC->_L19.radioMetadata.d_emergencystop = kcg_true;
  outC->_L19.radioMetadata.m_version = kcg_true;
  outC->_L19.BG_Common_Header.valid = kcg_true;
  outC->_L19.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L19.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L19.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L19.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L19.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L19.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L19.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L19.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L19.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L19.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L19.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L19.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L19.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L19.sendingRBC.valid = kcg_true;
  outC->_L19.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L19.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L19.sendingRBC.device_id = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 41; idx11++) {
    outC->_L18[idx11].valid = kcg_true;
    outC->_L18[idx11].nid_c = kcg_lit_int64(0);
    outC->_L18[idx11].nid_bg = kcg_lit_int64(0);
    outC->_L18[idx11].q_link = Q_LINK_Unlinked;
    outC->_L18[idx11].location.nominal = kcg_lit_int64(0);
    outC->_L18[idx11].location.d_min = kcg_lit_int64(0);
    outC->_L18[idx11].location.d_max = kcg_lit_int64(0);
    outC->_L18[idx11].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.valid = kcg_true;
    outC->_L18[idx11].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L18[idx11].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[idx11].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18[idx11].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18[idx11].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.valid = kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18[idx11].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18[idx11].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L18[idx11].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18[idx11].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L18[idx11].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L18[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L18[idx11].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L18[idx11].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L18[idx11].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx10 = 0; idx10 < 33; idx10++) {
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].valid = kcg_true;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int64(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int64(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int64(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int64(0);
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L18[idx11].infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int64(0);
    }
    outC->_L18[idx11].missed = kcg_true;
  }
  outC->_L16 = kcg_true;
  outC->_L17 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
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
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L13.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L13.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->nid_c_local = kcg_lit_int64(0);
  outC->nid_errorBG_local = kcg_lit_int64(0);
  outC->q_linkorientation_local =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->isAnnounced = kcg_true;
  outC->isSingle = kcg_true;
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
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->lastTelegram.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->lastTelegram.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->lastTelegram.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->lastTelegram.packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->lastTelegram.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->lastTelegram.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->isComplete = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L57_then_else_IfBlock1.valid = kcg_true;
  outC->_L57_then_else_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L57_then_else_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx18 = 0; idx18 < 8; idx18++) {
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].valid = kcg_true;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].checkResult =
      kcg_true;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx16 = 0; idx16 < 30; idx16++) {
      outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].nid_packet =
        kcg_lit_int64(0);
      outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].q_dir =
        Q_DIR_Reverse;
      outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].valid =
        kcg_true;
      outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].startAddress =
        kcg_lit_int64(0);
      outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].endAddress =
        kcg_lit_int64(0);
    }
    for (idx17 = 0; idx17 < 500; idx17++) {
      outC->_L57_then_else_IfBlock1.telegramHeaders.Telegrams[idx18].packets.PacketData[idx17] =
        kcg_lit_int64(0);
    }
  }
  outC->_L57_then_else_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L57_then_else_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L57_then_else_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L57_then_else_IfBlock1.radio_Msg.header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L57_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx19].nid_packet =
      kcg_lit_int64(0);
    outC->_L57_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx19].q_dir =
      Q_DIR_Reverse;
    outC->_L57_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx19].valid =
      kcg_true;
    outC->_L57_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx19].startAddress =
      kcg_lit_int64(0);
    outC->_L57_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx19].endAddress =
      kcg_lit_int64(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L57_then_else_IfBlock1.radio_Msg.packets.PacketData[idx20] =
      kcg_lit_int64(0);
  }
  outC->_L57_then_else_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L57_then_else_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L57_then_else_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.present = kcg_true;
  for (idx23 = 0; idx23 < 8; idx23++) {
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].valid = kcg_true;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].checkResult = kcg_true;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L58_then_else_IfBlock1.Telegrams[idx23].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx21 = 0; idx21 < 30; idx21++) {
      outC->_L58_then_else_IfBlock1.Telegrams[idx23].packets.PacketHeaders[idx21].nid_packet =
        kcg_lit_int64(0);
      outC->_L58_then_else_IfBlock1.Telegrams[idx23].packets.PacketHeaders[idx21].q_dir =
        Q_DIR_Reverse;
      outC->_L58_then_else_IfBlock1.Telegrams[idx23].packets.PacketHeaders[idx21].valid =
        kcg_true;
      outC->_L58_then_else_IfBlock1.Telegrams[idx23].packets.PacketHeaders[idx21].startAddress =
        kcg_lit_int64(0);
      outC->_L58_then_else_IfBlock1.Telegrams[idx23].packets.PacketHeaders[idx21].endAddress =
        kcg_lit_int64(0);
    }
    for (idx22 = 0; idx22 < 500; idx22++) {
      outC->_L58_then_else_IfBlock1.Telegrams[idx23].packets.PacketData[idx22] =
        kcg_lit_int64(0);
    }
  }
  outC->_L58_then_else_IfBlock1.numberBalises = kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L58_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L52_then_else_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L13_then_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L16_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L18_then_else_IfBlock1 = N_PIG_I_am_the_1st;
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
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int64(0);
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx24].q_dir =
      Q_DIR_Reverse;
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int64(0);
    outC->_L19_then_else_IfBlock1.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L19_then_else_IfBlock1.packets.PacketData[idx25] = kcg_lit_int64(0);
  }
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
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx26].nid_packet =
      kcg_lit_int64(0);
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx26].q_dir =
      Q_DIR_Reverse;
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx26].startAddress =
      kcg_lit_int64(0);
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx26].endAddress =
      kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L23_then_else_IfBlock1.packets.PacketData[idx27] = kcg_lit_int64(0);
  }
  outC->_L23_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.valid = kcg_true;
  outC->_L24_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L24_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L24_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L24_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(
      0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(
      0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L24_then_else_IfBlock1.packets.PacketHeaders[idx28].nid_packet =
      kcg_lit_int64(0);
    outC->_L24_then_else_IfBlock1.packets.PacketHeaders[idx28].q_dir =
      Q_DIR_Reverse;
    outC->_L24_then_else_IfBlock1.packets.PacketHeaders[idx28].valid = kcg_true;
    outC->_L24_then_else_IfBlock1.packets.PacketHeaders[idx28].startAddress =
      kcg_lit_int64(0);
    outC->_L24_then_else_IfBlock1.packets.PacketHeaders[idx28].endAddress =
      kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L24_then_else_IfBlock1.packets.PacketData[idx29] = kcg_lit_int64(0);
  }
  outC->_L24_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L24_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L24_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L45_then_else_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L47_then_else_IfBlock1 = kcg_true;
  outC->_L49_then_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L14_then_IfBlock1.valid = kcg_true;
  outC->_L14_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L14_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L14_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L14_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L14_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L14_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L14_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L14_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L14_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int64(0);
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx30].valid = kcg_true;
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int64(0);
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int64(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L14_then_IfBlock1.packets.PacketData[idx31] = kcg_lit_int64(0);
  }
  outC->_L14_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L14_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
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
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx32].nid_packet =
      kcg_lit_int64(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx32].valid = kcg_true;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx32].startAddress =
      kcg_lit_int64(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx32].endAddress =
      kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L16_then_IfBlock1.packets.PacketData[idx33] = kcg_lit_int64(0);
  }
  outC->_L16_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L16_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L19_then_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->nid_c = kcg_lit_int64(0);
  outC->nid_errorBG = kcg_lit_int64(0);
  outC->errorLinkedBG = kcg_true;
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
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->passedBG_out.packets.PacketHeaders[idx34].nid_packet = kcg_lit_int64(0);
    outC->passedBG_out.packets.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->passedBG_out.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->passedBG_out.packets.PacketHeaders[idx34].startAddress = kcg_lit_int64(0);
    outC->passedBG_out.packets.PacketHeaders[idx34].endAddress = kcg_lit_int64(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->passedBG_out.packets.PacketData[idx35] = kcg_lit_int64(0);
  }
  outC->passedBG_out.sendingRBC.valid = kcg_true;
  outC->passedBG_out.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->passedBG_out.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->passedBG_out.sendingRBC.device_id = kcg_lit_int64(0);
  /* IfBlock1:then:_L16=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */
  WriteDirection2PassedBG_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_WriteDirection2PassedBG_1);
  /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#2)/ */
  WriteDirection2PassedBG_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_WriteDirection2PassedBG_2);
  /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_16);
  /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_17);
  /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#2)/ */
  CheckCompleteness_init_CheckBGConsistency_Pkg(
    &outC->Context_CheckCompleteness_2);
  /* _L16=(CheckBGConsistency_Pkg::SubFunction::IsBG_announced#1)/ */
  IsBG_announced_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_IsBG_announced_1);
  /* _L19=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */
  BuildCheckedMessage_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_BuildCheckedMessage_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->passedBGlocal,
    (ReceivedMessage_T_Common_Types_Pkg *)
      &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CaseLinkingInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
{
  /* IfBlock1:then:_L16=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */
  WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_WriteDirection2PassedBG_1);
  /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#2)/ */
  WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_WriteDirection2PassedBG_2);
  /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_16);
  /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_17);
  /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#2)/ */
  CheckCompleteness_reset_CheckBGConsistency_Pkg(
    &outC->Context_CheckCompleteness_2);
  /* _L16=(CheckBGConsistency_Pkg::SubFunction::IsBG_announced#1)/ */
  IsBG_announced_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_IsBG_announced_1);
  /* _L19=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */
  BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_BuildCheckedMessage_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->passedBGlocal,
    (ReceivedMessage_T_Common_Types_Pkg *)
      &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CaseLinkingInUse_CheckBGConsistency_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

