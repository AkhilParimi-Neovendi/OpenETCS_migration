/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck/ */
void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* telegramarray_in/ */
  TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC)
{
  Telegram_T_BG_Types_Pkg acc;
  kcg_size idx;
  /* isComplete/ */
  kcg_bool isComplete_partial;
  /* lastTelegram/ */
  Telegram_T_BG_Types_Pkg lastTelegram_partial;
  /* inDex/ */
  kcg_int32 inDex_partial;
  Telegram_T_BG_Types_Pkg noname;
  Telegram_T_BG_Types_Pkg _1_noname;
  /* isComplete/ */
  kcg_bool _2_isComplete_partial;
  /* lastTelegram/ */
  Telegram_T_BG_Types_Pkg _3_lastTelegram_partial;
  /* inDex/ */
  kcg_int32 _4_inDex_partial;

  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L15, telegramarray_in);
  outC->_L21 = outC->_L15[0].valid;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L16,
    &outC->_L15[0].telegramheader);
  /* _L19=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#1)/ */
  CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_L16,
    &outC->Context_CheckFirstTelNotDup_1);
  outC->_L19 = outC->Context_CheckFirstTelNotDup_1.isTheFirst;
  /* _L18=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#1)/ */
  CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_L16,
    &outC->Context_CheckFirstTelDup_1);
  outC->_L18 = outC->Context_CheckFirstTelDup_1.isTheFirst;
  outC->_L20 = outC->_L18 | outC->_L19;
  outC->_L22 = outC->_L20 & outC->_L21;
  outC->firstTelegramIsValid = outC->_L22;
  outC->IfBlock1_clock = outC->firstTelegramIsValid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L43_then_IfBlock1,
      telegramarray_in);
    outC->_L42_then_IfBlock1 = kcg_lit_int32(1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L11_then_IfBlock1,
      telegramarray_in);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L12_then_IfBlock1,
      &outC->_L11_then_IfBlock1[0]);
    kcg_copy__200_array(
      &outC->_L26_then_IfBlock1,
      (_200_array *) &outC->_L11_then_IfBlock1[1]);
    outC->_L8_then_IfBlock1 = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L10_then_IfBlock1,
      &outC->_L12_then_IfBlock1);
    /* IfBlock1:then:_L9= */
    if (outC->_L8_then_IfBlock1) {
      /* IfBlock1:then:_L9= */
      for (idx = 0; idx < 7; idx++) {
        kcg_copy_Telegram_T_BG_Types_Pkg(&acc, &outC->_L10_then_IfBlock1);
        /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#5)/ */
        Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
          &acc,
          &outC->_L26_then_IfBlock1[idx],
          &outC->Context_Check2Telegrams_5[idx]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L10_then_IfBlock1,
          &outC->Context_Check2Telegrams_5[idx].telegram_out);
        outC->_L9_then_IfBlock1 = /* IfBlock1:then:_L9= */(kcg_int32) (idx + 1);
        /* IfBlock1:then:_L9= */
        if (!outC->Context_Check2Telegrams_5[idx].isConsistent) {
          break;
        }
      }
    }
    else {
      outC->_L9_then_IfBlock1 = kcg_lit_int32(0);
    }
    outC->_L32_then_IfBlock1 = outC->_L9_then_IfBlock1 - outC->_L42_then_IfBlock1;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L34_then_IfBlock1,
      telegramarray_in);
    if ((kcg_lit_int32(0) <= outC->_L32_then_IfBlock1) &
      (outC->_L32_then_IfBlock1 < kcg_lit_int32(8))) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L36_then_IfBlock1,
        &outC->_L34_then_IfBlock1[outC->_L32_then_IfBlock1]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L36_then_IfBlock1,
        (Telegram_T_BG_Types_Pkg *) &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    outC->_L33_then_IfBlock1 = kcg_lit_int32(2);
    outC->_L41_then_IfBlock1 = outC->_L9_then_IfBlock1 - outC->_L33_then_IfBlock1;
    if ((kcg_lit_int32(0) <= outC->_L41_then_IfBlock1) &
      (outC->_L41_then_IfBlock1 < kcg_lit_int32(8))) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L39_then_IfBlock1,
        &outC->_L43_then_IfBlock1[outC->_L41_then_IfBlock1]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L39_then_IfBlock1,
        (Telegram_T_BG_Types_Pkg *) &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    /* IfBlock1:then:_L37=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#6)/ */
    Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L36_then_IfBlock1,
      &outC->_L39_then_IfBlock1,
      &outC->Context_Check2Telegrams_6);
    outC->_L37_then_IfBlock1 = outC->Context_Check2Telegrams_6.isConsistent;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L38_then_IfBlock1,
      &outC->Context_Check2Telegrams_6.telegram_out);
    kcg_copy_Telegram_T_BG_Types_Pkg(&noname, &outC->_L38_then_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_1_noname, &outC->_L10_then_IfBlock1);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &outC->_L16_then_IfBlock1,
      &outC->_L36_then_IfBlock1.telegramheader);
    inDex_partial = outC->_L9_then_IfBlock1;
    /* IfBlock1:then:_L14=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#2)/ */
    CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &outC->_L16_then_IfBlock1,
      &outC->Context_CheckFirstTelNotDup_2);
    outC->_L14_then_IfBlock1 = outC->Context_CheckFirstTelNotDup_2.isTheFirst;
    /* IfBlock1:then:_L13=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#3)/ */
    CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &outC->_L16_then_IfBlock1,
      &outC->Context_CheckFirstTelDup_3);
    outC->_L13_then_IfBlock1 = outC->Context_CheckFirstTelDup_3.isTheFirst;
    outC->_L15_then_IfBlock1 = outC->_L13_then_IfBlock1 | outC->_L14_then_IfBlock1;
    outC->_L29_then_IfBlock1 = outC->_L37_then_IfBlock1 & outC->_L15_then_IfBlock1;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &lastTelegram_partial,
      &outC->_L36_then_IfBlock1);
    isComplete_partial = outC->_L29_then_IfBlock1;
    outC->isComplete = isComplete_partial;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &lastTelegram_partial);
    outC->inDex = inDex_partial;
  }
  else {
    _4_inDex_partial = kcg_lit_int32(-1);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &_3_lastTelegram_partial,
      (Telegram_T_BG_Types_Pkg *) &cInConsistentTelegram_CheckBGConsistency_Pkg);
    outC->_L1_else_IfBlock1 = kcg_false;
    _2_isComplete_partial = outC->_L1_else_IfBlock1;
    outC->isComplete = _2_isComplete_partial;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &_3_lastTelegram_partial);
    outC->inDex = _4_inDex_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CompletenessFirstCheck_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC)
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

  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L16.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.q_media = Q_MEDIA_Balise;
  outC->_L16.n_pig = N_PIG_I_am_the_1st;
  outC->_L16.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.m_dup = M_DUP_No_duplicates;
  outC->_L16.m_mcount = kcg_lit_int32(0);
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.nid_bg = kcg_lit_int32(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L15[idx3].valid = kcg_true;
    outC->_L15[idx3].checkResult = kcg_true;
    outC->_L15[idx3].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L15[idx3].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15[idx3].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L15[idx3].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L15[idx3].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L15[idx3].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L15[idx3].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L15[idx3].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L15[idx3].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L15[idx3].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx1 = 0; idx1 < 30; idx1++) {
      outC->_L15[idx3].packets.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
      outC->_L15[idx3].packets.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
      outC->_L15[idx3].packets.PacketHeaders[idx1].valid = kcg_true;
      outC->_L15[idx3].packets.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
      outC->_L15[idx3].packets.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
    }
    for (idx2 = 0; idx2 < 500; idx2++) {
      outC->_L15[idx3].packets.PacketData[idx2] = kcg_lit_int32(0);
    }
  }
  outC->firstTelegramIsValid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.checkResult = kcg_true;
  outC->_L12_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L12_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L12_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L12_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L12_then_IfBlock1.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L11_then_IfBlock1[idx8].valid = kcg_true;
    outC->_L11_then_IfBlock1[idx8].checkResult = kcg_true;
    outC->_L11_then_IfBlock1[idx8].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L11_then_IfBlock1[idx8].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L11_then_IfBlock1[idx8].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L11_then_IfBlock1[idx8].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L11_then_IfBlock1[idx8].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L11_then_IfBlock1[idx8].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L11_then_IfBlock1[idx8].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx8].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx8].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx8].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L11_then_IfBlock1[idx8].packets.PacketHeaders[idx6].nid_packet =
        kcg_lit_int32(0);
      outC->_L11_then_IfBlock1[idx8].packets.PacketHeaders[idx6].q_dir =
        Q_DIR_Reverse;
      outC->_L11_then_IfBlock1[idx8].packets.PacketHeaders[idx6].valid = kcg_true;
      outC->_L11_then_IfBlock1[idx8].packets.PacketHeaders[idx6].startAddress =
        kcg_lit_int32(0);
      outC->_L11_then_IfBlock1[idx8].packets.PacketHeaders[idx6].endAddress =
        kcg_lit_int32(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L11_then_IfBlock1[idx8].packets.PacketData[idx7] = kcg_lit_int32(0);
    }
  }
  outC->_L9_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.valid = kcg_true;
  outC->_L10_then_IfBlock1.checkResult = kcg_true;
  outC->_L10_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L10_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L10_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L10_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx9].nid_packet =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx9].startAddress =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx9].endAddress =
      kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L10_then_IfBlock1.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->_L8_then_IfBlock1 = kcg_true;
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L14_then_IfBlock1 = kcg_true;
  outC->_L15_then_IfBlock1 = kcg_true;
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L26_then_IfBlock1[idx13].valid = kcg_true;
    outC->_L26_then_IfBlock1[idx13].checkResult = kcg_true;
    outC->_L26_then_IfBlock1[idx13].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L26_then_IfBlock1[idx13].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L26_then_IfBlock1[idx13].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L26_then_IfBlock1[idx13].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L26_then_IfBlock1[idx13].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L26_then_IfBlock1[idx13].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L26_then_IfBlock1[idx13].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx13].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx13].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx13].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx11 = 0; idx11 < 30; idx11++) {
      outC->_L26_then_IfBlock1[idx13].packets.PacketHeaders[idx11].nid_packet =
        kcg_lit_int32(0);
      outC->_L26_then_IfBlock1[idx13].packets.PacketHeaders[idx11].q_dir =
        Q_DIR_Reverse;
      outC->_L26_then_IfBlock1[idx13].packets.PacketHeaders[idx11].valid = kcg_true;
      outC->_L26_then_IfBlock1[idx13].packets.PacketHeaders[idx11].startAddress =
        kcg_lit_int32(0);
      outC->_L26_then_IfBlock1[idx13].packets.PacketHeaders[idx11].endAddress =
        kcg_lit_int32(0);
    }
    for (idx12 = 0; idx12 < 500; idx12++) {
      outC->_L26_then_IfBlock1[idx13].packets.PacketData[idx12] = kcg_lit_int32(0);
    }
  }
  outC->_L29_then_IfBlock1 = kcg_true;
  outC->_L32_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 8; idx16++) {
    outC->_L34_then_IfBlock1[idx16].valid = kcg_true;
    outC->_L34_then_IfBlock1[idx16].checkResult = kcg_true;
    outC->_L34_then_IfBlock1[idx16].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L34_then_IfBlock1[idx16].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L34_then_IfBlock1[idx16].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L34_then_IfBlock1[idx16].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L34_then_IfBlock1[idx16].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L34_then_IfBlock1[idx16].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L34_then_IfBlock1[idx16].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L34_then_IfBlock1[idx16].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L34_then_IfBlock1[idx16].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L34_then_IfBlock1[idx16].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx14 = 0; idx14 < 30; idx14++) {
      outC->_L34_then_IfBlock1[idx16].packets.PacketHeaders[idx14].nid_packet =
        kcg_lit_int32(0);
      outC->_L34_then_IfBlock1[idx16].packets.PacketHeaders[idx14].q_dir =
        Q_DIR_Reverse;
      outC->_L34_then_IfBlock1[idx16].packets.PacketHeaders[idx14].valid = kcg_true;
      outC->_L34_then_IfBlock1[idx16].packets.PacketHeaders[idx14].startAddress =
        kcg_lit_int32(0);
      outC->_L34_then_IfBlock1[idx16].packets.PacketHeaders[idx14].endAddress =
        kcg_lit_int32(0);
    }
    for (idx15 = 0; idx15 < 500; idx15++) {
      outC->_L34_then_IfBlock1[idx16].packets.PacketData[idx15] = kcg_lit_int32(0);
    }
  }
  outC->_L36_then_IfBlock1.valid = kcg_true;
  outC->_L36_then_IfBlock1.checkResult = kcg_true;
  outC->_L36_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L36_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L36_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L36_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L36_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L36_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx17].nid_packet =
      kcg_lit_int32(0);
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx17].valid = kcg_true;
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx17].startAddress =
      kcg_lit_int32(0);
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx17].endAddress =
      kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L36_then_IfBlock1.packets.PacketData[idx18] = kcg_lit_int32(0);
  }
  outC->_L16_then_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16_then_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L16_then_IfBlock1.n_pig = N_PIG_I_am_the_1st;
  outC->_L16_then_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16_then_IfBlock1.m_dup = M_DUP_No_duplicates;
  outC->_L16_then_IfBlock1.m_mcount = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.nid_bg = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L38_then_IfBlock1.valid = kcg_true;
  outC->_L38_then_IfBlock1.checkResult = kcg_true;
  outC->_L38_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L38_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L38_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L38_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L38_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L38_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L38_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L38_then_IfBlock1.packets.PacketHeaders[idx19].nid_packet =
      kcg_lit_int32(0);
    outC->_L38_then_IfBlock1.packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L38_then_IfBlock1.packets.PacketHeaders[idx19].valid = kcg_true;
    outC->_L38_then_IfBlock1.packets.PacketHeaders[idx19].startAddress =
      kcg_lit_int32(0);
    outC->_L38_then_IfBlock1.packets.PacketHeaders[idx19].endAddress =
      kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L38_then_IfBlock1.packets.PacketData[idx20] = kcg_lit_int32(0);
  }
  outC->_L37_then_IfBlock1 = kcg_true;
  outC->_L39_then_IfBlock1.valid = kcg_true;
  outC->_L39_then_IfBlock1.checkResult = kcg_true;
  outC->_L39_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L39_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L39_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L39_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L39_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L39_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L39_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L39_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L39_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L39_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L39_then_IfBlock1.packets.PacketHeaders[idx21].nid_packet =
      kcg_lit_int32(0);
    outC->_L39_then_IfBlock1.packets.PacketHeaders[idx21].q_dir = Q_DIR_Reverse;
    outC->_L39_then_IfBlock1.packets.PacketHeaders[idx21].valid = kcg_true;
    outC->_L39_then_IfBlock1.packets.PacketHeaders[idx21].startAddress =
      kcg_lit_int32(0);
    outC->_L39_then_IfBlock1.packets.PacketHeaders[idx21].endAddress =
      kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 500; idx22++) {
    outC->_L39_then_IfBlock1.packets.PacketData[idx22] = kcg_lit_int32(0);
  }
  outC->_L41_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L42_then_IfBlock1 = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 8; idx25++) {
    outC->_L43_then_IfBlock1[idx25].valid = kcg_true;
    outC->_L43_then_IfBlock1[idx25].checkResult = kcg_true;
    outC->_L43_then_IfBlock1[idx25].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L43_then_IfBlock1[idx25].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L43_then_IfBlock1[idx25].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L43_then_IfBlock1[idx25].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L43_then_IfBlock1[idx25].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L43_then_IfBlock1[idx25].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L43_then_IfBlock1[idx25].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L43_then_IfBlock1[idx25].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L43_then_IfBlock1[idx25].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L43_then_IfBlock1[idx25].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx23 = 0; idx23 < 30; idx23++) {
      outC->_L43_then_IfBlock1[idx25].packets.PacketHeaders[idx23].nid_packet =
        kcg_lit_int32(0);
      outC->_L43_then_IfBlock1[idx25].packets.PacketHeaders[idx23].q_dir =
        Q_DIR_Reverse;
      outC->_L43_then_IfBlock1[idx25].packets.PacketHeaders[idx23].valid = kcg_true;
      outC->_L43_then_IfBlock1[idx25].packets.PacketHeaders[idx23].startAddress =
        kcg_lit_int32(0);
      outC->_L43_then_IfBlock1[idx25].packets.PacketHeaders[idx23].endAddress =
        kcg_lit_int32(0);
    }
    for (idx24 = 0; idx24 < 500; idx24++) {
      outC->_L43_then_IfBlock1[idx25].packets.PacketData[idx24] = kcg_lit_int32(0);
    }
  }
  outC->inDex = kcg_lit_int32(0);
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
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->lastTelegram.packets.PacketHeaders[idx26].nid_packet = kcg_lit_int32(0);
    outC->lastTelegram.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->lastTelegram.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->lastTelegram.packets.PacketHeaders[idx26].startAddress = kcg_lit_int32(0);
    outC->lastTelegram.packets.PacketHeaders[idx26].endAddress = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->lastTelegram.packets.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->isComplete = kcg_true;
  /* IfBlock1:then:_L13=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#3)/ */
  CheckFirstTelDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelDup_3);
  /* IfBlock1:then:_L14=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#2)/ */
  CheckFirstTelNotDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelNotDup_2);
  /* IfBlock1:then:_L37=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#6)/ */
  Check2Telegrams_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_Check2Telegrams_6);
  for (idx = 0; idx < 7; idx++) {
    /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#5)/ */
    Check2Telegrams_init_CheckBGConsistency_Pkg_SubFunction(
      &outC->Context_Check2Telegrams_5[idx]);
  }
  /* _L18=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#1)/ */
  CheckFirstTelDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelDup_1);
  /* _L19=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#1)/ */
  CheckFirstTelNotDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelNotDup_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CompletenessFirstCheck_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_size idx;

  /* IfBlock1:then:_L13=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#3)/ */
  CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelDup_3);
  /* IfBlock1:then:_L14=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#2)/ */
  CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelNotDup_2);
  /* IfBlock1:then:_L37=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#6)/ */
  Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_Check2Telegrams_6);
  for (idx = 0; idx < 7; idx++) {
    /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#5)/ */
    Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(
      &outC->Context_Check2Telegrams_5[idx]);
  }
  /* _L18=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#1)/ */
  CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelDup_1);
  /* _L19=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#1)/ */
  CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_CheckFirstTelNotDup_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

