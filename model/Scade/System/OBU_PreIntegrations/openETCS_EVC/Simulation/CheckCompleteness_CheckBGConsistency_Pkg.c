/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckCompleteness/ */
void CheckCompleteness_CheckBGConsistency_Pkg(
  /* bgMessage/ */
  BG_Message_T_BG_Types_Pkg *bgMessage,
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC)
{
  /* isComplete/ */
  kcg_bool isComplete_partial;
  /* isSingleBG/ */
  kcg_bool isSingleBG_partial;
  /* lastTelegram/ */
  Telegram_T_BG_Types_Pkg lastTelegram_partial;
  /* isComplete/ */
  kcg_bool _1_isComplete_partial;
  /* isSingleBG/ */
  kcg_bool _2_isSingleBG_partial;
  /* lastTelegram/ */
  Telegram_T_BG_Types_Pkg _3_lastTelegram_partial;
  /* lastTelegram/ */
  Telegram_T_BG_Types_Pkg _4_lastTelegram_partial;
  /* isSingleBG/ */
  kcg_bool _5_isSingleBG_partial;
  /* isComplete/ */
  kcg_bool _6_isComplete_partial;
  /* lastTelegram/ */
  Telegram_T_BG_Types_Pkg _7_lastTelegram_partial;
  /* isSingleBG/ */
  kcg_bool _8_isSingleBG_partial;
  /* isComplete/ */
  kcg_bool _9_isComplete_partial;

  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L1, bgMessage);
  outC->_L4 = outC->_L1.Telegrams[0].telegramheader.n_total;
  /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L4,
    &outC->Context_N_TOTAL2int_1);
  outC->_L5 = outC->Context_N_TOTAL2int_1.n_total2int;
  outC->nTotal = outC->_L5;
  outC->_L3 = outC->_L1.numberBalises;
  outC->numberOfBalises = outC->_L3;
  outC->IfBlock1_clock = outC->numberOfBalises == kcg_lit_int32(1);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    isComplete_partial = kcg_false;
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L2_then_IfBlock1, bgMessage);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L2_then_IfBlock1.Telegrams[0]);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &lastTelegram_partial,
      &outC->_L3_then_IfBlock1);
    /* IfBlock1:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CheckSingleBG#1)/ */
    CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L3_then_IfBlock1,
      &outC->Context_CheckSingleBG_1);
    outC->_L1_then_IfBlock1 = outC->Context_CheckSingleBG_1.isSingleBG;
    isSingleBG_partial = outC->_L1_then_IfBlock1;
    outC->isComplete = isComplete_partial;
    outC->isSingleBG = isSingleBG_partial;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &lastTelegram_partial);
  }
  else {
    outC->else_clock_IfBlock1 = (!(outC->numberOfBalises > outC->nTotal)) &
      (outC->numberOfBalises > kcg_lit_int32(0));
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      _8_isSingleBG_partial = kcg_false;
      outC->_L8_then_else_IfBlock1 = outC->numberOfBalises;
      kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L4_then_else_IfBlock1, bgMessage);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L3_then_else_IfBlock1,
        &outC->_L4_then_else_IfBlock1.Telegrams);
      /* IfBlock1:else:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck#1)/ */
      CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
        &outC->_L3_then_else_IfBlock1,
        &outC->Context_CompletenessFirstCheck_1);
      outC->_L1_then_else_IfBlock1 =
        outC->Context_CompletenessFirstCheck_1.isComplete;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        &outC->Context_CompletenessFirstCheck_1.lastTelegram);
      outC->_L5_then_else_IfBlock1 = outC->Context_CompletenessFirstCheck_1.inDex;
      outC->_L7_then_else_IfBlock1 = outC->_L5_then_else_IfBlock1 ==
        outC->_L8_then_else_IfBlock1;
      outC->_L9_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1 &
        outC->_L7_then_else_IfBlock1;
      _9_isComplete_partial = outC->_L9_then_else_IfBlock1;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_7_lastTelegram_partial,
        &outC->_L2_then_else_IfBlock1);
      _1_isComplete_partial = _9_isComplete_partial;
      _2_isSingleBG_partial = _8_isSingleBG_partial;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_3_lastTelegram_partial,
        &_7_lastTelegram_partial);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L6_else_else_IfBlock1,
        (Telegram_T_BG_Types_Pkg *) &cTelegram_CheckBGConsistency_Pkg);
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_4_lastTelegram_partial,
        &outC->_L6_else_else_IfBlock1);
      outC->_L5_else_else_IfBlock1 = kcg_false;
      _5_isSingleBG_partial = outC->_L5_else_else_IfBlock1;
      _6_isComplete_partial = outC->_L5_else_else_IfBlock1;
      _1_isComplete_partial = _6_isComplete_partial;
      _2_isSingleBG_partial = _5_isSingleBG_partial;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_3_lastTelegram_partial,
        &_4_lastTelegram_partial);
    }
    outC->isComplete = _1_isComplete_partial;
    outC->isSingleBG = _2_isSingleBG_partial;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &_3_lastTelegram_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CheckCompleteness_init_CheckBGConsistency_Pkg(
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC)
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

  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = N_TOTAL_1_balise_in_the_group;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L1.Telegrams[idx2].valid = kcg_true;
    outC->_L1.Telegrams[idx2].checkResult = kcg_true;
    outC->_L1.Telegrams[idx2].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L1.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1.Telegrams[idx2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L1.Telegrams[idx2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L1.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1.Telegrams[idx2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L1.Telegrams[idx2].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L1.Telegrams[idx2].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L1.Telegrams[idx2].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L1.Telegrams[idx2].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L1.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L1.Telegrams[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L1.Telegrams[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L1.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L1.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L1.Telegrams[idx2].packets.PacketData[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L1.numberBalises = kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->nTotal = kcg_lit_int32(0);
  outC->numberOfBalises = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L9_then_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_then_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.checkResult = kcg_true;
  outC->_L2_then_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L2_then_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L2_then_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L2_then_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx3].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx3].startAddress =
      kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx3].endAddress =
      kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L2_then_else_IfBlock1.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L1_then_else_IfBlock1 = kcg_true;
  for (idx7 = 0; idx7 < 8; idx7++) {
    outC->_L3_then_else_IfBlock1[idx7].valid = kcg_true;
    outC->_L3_then_else_IfBlock1[idx7].checkResult = kcg_true;
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx7].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx5 = 0; idx5 < 30; idx5++) {
      outC->_L3_then_else_IfBlock1[idx7].packets.PacketHeaders[idx5].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_then_else_IfBlock1[idx7].packets.PacketHeaders[idx5].q_dir =
        Q_DIR_Reverse;
      outC->_L3_then_else_IfBlock1[idx7].packets.PacketHeaders[idx5].valid = kcg_true;
      outC->_L3_then_else_IfBlock1[idx7].packets.PacketHeaders[idx5].startAddress =
        kcg_lit_int32(0);
      outC->_L3_then_else_IfBlock1[idx7].packets.PacketHeaders[idx5].endAddress =
        kcg_lit_int32(0);
    }
    for (idx6 = 0; idx6 < 500; idx6++) {
      outC->_L3_then_else_IfBlock1[idx7].packets.PacketData[idx6] = kcg_lit_int32(0);
    }
  }
  outC->_L4_then_else_IfBlock1.present = kcg_true;
  for (idx10 = 0; idx10 < 8; idx10++) {
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].valid = kcg_true;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].checkResult = kcg_true;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1.Telegrams[idx10].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx8 = 0; idx8 < 30; idx8++) {
      outC->_L4_then_else_IfBlock1.Telegrams[idx10].packets.PacketHeaders[idx8].nid_packet =
        kcg_lit_int32(0);
      outC->_L4_then_else_IfBlock1.Telegrams[idx10].packets.PacketHeaders[idx8].q_dir =
        Q_DIR_Reverse;
      outC->_L4_then_else_IfBlock1.Telegrams[idx10].packets.PacketHeaders[idx8].valid =
        kcg_true;
      outC->_L4_then_else_IfBlock1.Telegrams[idx10].packets.PacketHeaders[idx8].startAddress =
        kcg_lit_int32(0);
      outC->_L4_then_else_IfBlock1.Telegrams[idx10].packets.PacketHeaders[idx8].endAddress =
        kcg_lit_int32(0);
    }
    for (idx9 = 0; idx9 < 500; idx9++) {
      outC->_L4_then_else_IfBlock1.Telegrams[idx10].packets.PacketData[idx9] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_then_else_IfBlock1.numberBalises = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_else_else_IfBlock1.valid = kcg_true;
  outC->_L6_else_else_IfBlock1.checkResult = kcg_true;
  outC->_L6_else_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L6_else_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_else_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L6_else_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L6_else_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L6_else_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L6_else_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L6_else_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L6_else_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L6_else_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L6_else_else_IfBlock1.packets.PacketHeaders[idx11].nid_packet =
      kcg_lit_int32(0);
    outC->_L6_else_else_IfBlock1.packets.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->_L6_else_else_IfBlock1.packets.PacketHeaders[idx11].valid = kcg_true;
    outC->_L6_else_else_IfBlock1.packets.PacketHeaders[idx11].startAddress =
      kcg_lit_int32(0);
    outC->_L6_else_else_IfBlock1.packets.PacketHeaders[idx11].endAddress =
      kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L6_else_else_IfBlock1.packets.PacketData[idx12] = kcg_lit_int32(0);
  }
  outC->_L5_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.present = kcg_true;
  for (idx15 = 0; idx15 < 8; idx15++) {
    outC->_L2_then_IfBlock1.Telegrams[idx15].valid = kcg_true;
    outC->_L2_then_IfBlock1.Telegrams[idx15].checkResult = kcg_true;
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.Telegrams[idx15].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx13 = 0; idx13 < 30; idx13++) {
      outC->_L2_then_IfBlock1.Telegrams[idx15].packets.PacketHeaders[idx13].nid_packet =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1.Telegrams[idx15].packets.PacketHeaders[idx13].q_dir =
        Q_DIR_Reverse;
      outC->_L2_then_IfBlock1.Telegrams[idx15].packets.PacketHeaders[idx13].valid =
        kcg_true;
      outC->_L2_then_IfBlock1.Telegrams[idx15].packets.PacketHeaders[idx13].startAddress =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1.Telegrams[idx15].packets.PacketHeaders[idx13].endAddress =
        kcg_lit_int32(0);
    }
    for (idx14 = 0; idx14 < 500; idx14++) {
      outC->_L2_then_IfBlock1.Telegrams[idx15].packets.PacketData[idx14] =
        kcg_lit_int32(0);
    }
  }
  outC->_L2_then_IfBlock1.numberBalises = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.checkResult = kcg_true;
  outC->_L3_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L3_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L3_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L3_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L3_then_IfBlock1.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->lastTelegram.valid = kcg_true;
  outC->lastTelegram.checkResult = kcg_true;
  outC->lastTelegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lastTelegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lastTelegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->lastTelegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->lastTelegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->lastTelegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->lastTelegram.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->lastTelegram.telegramheader.nid_c = kcg_lit_int32(0);
  outC->lastTelegram.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->lastTelegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->lastTelegram.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->lastTelegram.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->lastTelegram.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->lastTelegram.packets.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->lastTelegram.packets.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->lastTelegram.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->isSingleBG = kcg_true;
  outC->isComplete = kcg_true;
  /* IfBlock1:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CheckSingleBG#1)/ */
  CheckSingleBG_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckSingleBG_1);
  /* IfBlock1:else:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck#1)/ */
  CompletenessFirstCheck_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CompletenessFirstCheck_1);
  /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckCompleteness_reset_CheckBGConsistency_Pkg(
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC)
{
  /* IfBlock1:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CheckSingleBG#1)/ */
  CheckSingleBG_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckSingleBG_1);
  /* IfBlock1:else:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck#1)/ */
  CompletenessFirstCheck_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CompletenessFirstCheck_1);
  /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckCompleteness_CheckBGConsistency_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

