/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams/ */
void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* telegram1/ */
  Telegram_T_BG_Types_Pkg *telegram1,
  /* telegram2/ */
  Telegram_T_BG_Types_Pkg *telegram2,
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L85, telegram2);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegram_out, &outC->_L85);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, telegram2);
  outC->_L9 = outC->_L4.valid;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, telegram1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L2, &outC->_L1.telegramheader);
  outC->_L5 = outC->_L1.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L7, &outC->_L4.telegramheader);
  outC->_L6 = outC->_L4.checkResult;
  /* _L3=(CheckBGConsistency_Pkg::SubFunction::Check2Headers#1)/ */
  Check2Headers_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L2,
    outC->_L5,
    &outC->_L7,
    outC->_L6,
    &outC->Context_Check2Headers_1);
  outC->_L3 = outC->Context_Check2Headers_1.isConsistent;
  outC->_L8 = outC->_L1.valid;
  outC->_L10 = outC->_L8 & outC->_L3 & outC->_L9;
  outC->isConsistent = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void Check2Telegrams_init_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L85.valid = kcg_true;
  outC->_L85.checkResult = kcg_true;
  outC->_L85.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L85.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L85.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L85.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L85.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L85.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L85.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L85.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L85.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L85.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L85.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L85.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L85.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L85.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L85.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L85.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.q_media = Q_MEDIA_Balise;
  outC->_L7.n_pig = N_PIG_I_am_the_1st;
  outC->_L7.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.m_dup = M_DUP_No_duplicates;
  outC->_L7.m_mcount = kcg_lit_int64(0);
  outC->_L7.nid_c = kcg_lit_int64(0);
  outC->_L7.nid_bg = kcg_lit_int64(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.checkResult = kcg_true;
  outC->_L4.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L4.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L4.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L4.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L4.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L4.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L4.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L4.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L4.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_true;
  outC->_L2.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.q_media = Q_MEDIA_Balise;
  outC->_L2.n_pig = N_PIG_I_am_the_1st;
  outC->_L2.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.m_dup = M_DUP_No_duplicates;
  outC->_L2.m_mcount = kcg_lit_int64(0);
  outC->_L2.nid_c = kcg_lit_int64(0);
  outC->_L2.nid_bg = kcg_lit_int64(0);
  outC->_L2.q_link = Q_LINK_Unlinked;
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
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L1.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->telegram_out.valid = kcg_true;
  outC->telegram_out.checkResult = kcg_true;
  outC->telegram_out.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->telegram_out.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->telegram_out.telegramheader.q_media = Q_MEDIA_Balise;
  outC->telegram_out.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->telegram_out.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->telegram_out.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->telegram_out.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->telegram_out.telegramheader.nid_c = kcg_lit_int64(0);
  outC->telegram_out.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->telegram_out.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->telegram_out.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->telegram_out.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->telegram_out.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->telegram_out.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->telegram_out.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->telegram_out.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->isConsistent = kcg_true;
  /* _L3=(CheckBGConsistency_Pkg::SubFunction::Check2Headers#1)/ */
  Check2Headers_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_Check2Headers_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* _L3=(CheckBGConsistency_Pkg::SubFunction::Check2Headers#1)/ */
  Check2Headers_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_Check2Headers_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

