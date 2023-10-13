/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG/ */
void CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
  /* telegram_in/ */
  Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* isSingleBG/ */
  static kcg_bool isSingleBG_partial;
  /* isSingleBG/ */
  static kcg_bool _1_isSingleBG_partial;
  /* isSingleBG/ */
  static kcg_bool _2_isSingleBG_partial;
  /* isSingleBG/ */
  static kcg_bool _3_isSingleBG_partial;

  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, telegram_in);
  outC->_L22 = outC->_L1.valid;
  outC->valid = outC->_L22;
  outC->_L21 = outC->_L1.telegramheader.n_total;
  outC->n_total = outC->_L21;
  outC->IfBlock1_clock = (outC->n_total == N_TOTAL_1_balise_in_the_group) &
    outC->valid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = M_DUP_No_duplicates;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1_then_IfBlock1, telegram_in);
    outC->_L4_then_IfBlock1 = outC->_L1_then_IfBlock1.telegramheader.m_dup;
    outC->_L9_then_IfBlock1 = outC->_L4_then_IfBlock1 == outC->_L8_then_IfBlock1;
    outC->_L5_then_IfBlock1 = N_PIG_I_am_the_1st;
    outC->_L3_then_IfBlock1 = outC->_L1_then_IfBlock1.telegramheader.n_pig;
    outC->_L6_then_IfBlock1 = outC->_L3_then_IfBlock1 == outC->_L5_then_IfBlock1;
    /* IfBlock1:then:_L2=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#2)/ */
    CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L1_then_IfBlock1,
      &outC->Context_CheckOneTelegram_2);
    outC->_L2_then_IfBlock1 = outC->Context_CheckOneTelegram_2.isConsistent;
    outC->_L10_then_IfBlock1 = outC->_L2_then_IfBlock1 &
      outC->_L6_then_IfBlock1 & outC->_L9_then_IfBlock1;
    isSingleBG_partial = outC->_L10_then_IfBlock1;
    outC->isSingleBG = isSingleBG_partial;
  }
  else {
    outC->else_clock_IfBlock1 = (outC->n_total ==
        N_TOTAL_2_balises_in_the_group) & outC->valid;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L30_then_else_IfBlock1 =
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
      kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L13_then_else_IfBlock1, telegram_in);
      outC->_L29_then_else_IfBlock1 =
        outC->_L13_then_else_IfBlock1.telegramheader.m_dup;
      outC->_L26_then_else_IfBlock1 = outC->_L29_then_else_IfBlock1 ==
        outC->_L30_then_else_IfBlock1;
      outC->_L28_then_else_IfBlock1 = N_PIG_I_am_the_2nd;
      outC->_L24_then_else_IfBlock1 =
        outC->_L13_then_else_IfBlock1.telegramheader.n_pig;
      outC->_L25_then_else_IfBlock1 = outC->_L24_then_else_IfBlock1 ==
        outC->_L28_then_else_IfBlock1;
      outC->_L27_then_else_IfBlock1 = outC->_L25_then_else_IfBlock1 &
        outC->_L26_then_else_IfBlock1;
      outC->_L22_then_else_IfBlock1 =
        M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
      outC->_L17_then_else_IfBlock1 =
        outC->_L13_then_else_IfBlock1.telegramheader.m_dup;
      outC->_L18_then_else_IfBlock1 = outC->_L17_then_else_IfBlock1 ==
        outC->_L22_then_else_IfBlock1;
      outC->_L14_then_else_IfBlock1 = N_PIG_I_am_the_1st;
      outC->_L19_then_else_IfBlock1 =
        outC->_L13_then_else_IfBlock1.telegramheader.n_pig;
      outC->_L16_then_else_IfBlock1 = outC->_L19_then_else_IfBlock1 ==
        outC->_L14_then_else_IfBlock1;
      outC->_L23_then_else_IfBlock1 = outC->_L16_then_else_IfBlock1 &
        outC->_L18_then_else_IfBlock1;
      outC->_L31_then_else_IfBlock1 = outC->_L23_then_else_IfBlock1 |
        outC->_L27_then_else_IfBlock1;
      /* IfBlock1:else:then:_L20=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#6)/ */
      CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
        &outC->_L13_then_else_IfBlock1,
        &outC->Context_CheckOneTelegram_6);
      outC->_L20_then_else_IfBlock1 = outC->Context_CheckOneTelegram_6.isConsistent;
      outC->_L21_then_else_IfBlock1 = outC->_L20_then_else_IfBlock1 &
        outC->_L31_then_else_IfBlock1;
      _3_isSingleBG_partial = outC->_L21_then_else_IfBlock1;
      _1_isSingleBG_partial = _3_isSingleBG_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = kcg_false;
      _2_isSingleBG_partial = outC->_L1_else_else_IfBlock1;
      _1_isSingleBG_partial = _2_isSingleBG_partial;
    }
    outC->isSingleBG = _1_isSingleBG_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CheckSingleBG_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L22 = kcg_true;
  outC->_L21 = N_TOTAL_1_balise_in_the_group;
  outC->_L1.valid = kcg_true;
  outC->_L1.checkResult = kcg_true;
  outC->_L1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->valid = kcg_true;
  outC->n_total = N_TOTAL_1_balise_in_the_group;
  outC->IfBlock1_clock = kcg_true;
  outC->_L31_then_else_IfBlock1 = kcg_true;
  outC->_L30_then_else_IfBlock1 = M_DUP_No_duplicates;
  outC->_L24_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L25_then_else_IfBlock1 = kcg_true;
  outC->_L26_then_else_IfBlock1 = kcg_true;
  outC->_L27_then_else_IfBlock1 = kcg_true;
  outC->_L28_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L29_then_else_IfBlock1 = M_DUP_No_duplicates;
  outC->_L23_then_else_IfBlock1 = kcg_true;
  outC->_L22_then_else_IfBlock1 = M_DUP_No_duplicates;
  outC->_L13_then_else_IfBlock1.valid = kcg_true;
  outC->_L13_then_else_IfBlock1.checkResult = kcg_true;
  outC->_L13_then_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L13_then_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_then_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L13_then_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L13_then_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L13_then_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L13_then_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L13_then_else_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L13_then_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L13_then_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L13_then_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int64(0);
    outC->_L13_then_else_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L13_then_else_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L13_then_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int64(0);
    outC->_L13_then_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L13_then_else_IfBlock1.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L14_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L16_then_else_IfBlock1 = kcg_true;
  outC->_L17_then_else_IfBlock1 = M_DUP_No_duplicates;
  outC->_L18_then_else_IfBlock1 = kcg_true;
  outC->_L19_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L20_then_else_IfBlock1 = kcg_true;
  outC->_L21_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.checkResult = kcg_true;
  outC->_L1_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L1_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L1_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L1_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L1_then_IfBlock1.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L4_then_IfBlock1 = M_DUP_No_duplicates;
  outC->_L5_then_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L6_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_DUP_No_duplicates;
  outC->_L9_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock1 = kcg_true;
  outC->isSingleBG = kcg_true;
  /* IfBlock1:then:_L2=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#2)/ */
  CheckOneTelegram_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckOneTelegram_2);
  /* IfBlock1:else:then:_L20=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#6)/ */
  CheckOneTelegram_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckOneTelegram_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckSingleBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* IfBlock1:then:_L2=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#2)/ */
  CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckOneTelegram_2);
  /* IfBlock1:else:then:_L20=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#6)/ */
  CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckOneTelegram_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

