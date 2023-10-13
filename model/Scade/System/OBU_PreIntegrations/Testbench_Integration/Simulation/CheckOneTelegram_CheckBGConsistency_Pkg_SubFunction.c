/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram/ */
void CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* telegram_in/ */
  Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static CompressedPackets_T_Common_Types_Pkg noname;

  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L13, telegram_in);
  outC->_L45 = outC->_L13.valid;
  outC->_L52 = outC->_L13.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L51, &outC->_L13.telegramheader);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L50, &outC->_L13.packets);
  /* _L44=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */
  CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L51,
    &outC->Context_CheckTelegramHeader_1);
  outC->_L44 = outC->Context_CheckTelegramHeader_1.isConsistent;
  outC->_L29 = outC->_L45 & outC->_L52 & outC->_L44;
  outC->isConsistent = outC->_L29;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&noname, &outC->_L50);
}

#ifndef KCG_USER_DEFINED_INIT
void CheckOneTelegram_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 30; idx++) {
    outC->_L50.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L50.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L50.PacketHeaders[idx].valid = kcg_true;
    outC->_L50.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L50.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L50.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L51.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L51.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L51.q_media = Q_MEDIA_Balise;
  outC->_L51.n_pig = N_PIG_I_am_the_1st;
  outC->_L51.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L51.m_dup = M_DUP_No_duplicates;
  outC->_L51.m_mcount = kcg_lit_int64(0);
  outC->_L51.nid_c = kcg_lit_int64(0);
  outC->_L51.nid_bg = kcg_lit_int64(0);
  outC->_L51.q_link = Q_LINK_Unlinked;
  outC->_L52 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L29 = kcg_true;
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L13.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L13.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->isConsistent = kcg_true;
  /* _L44=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */
  CheckTelegramHeader_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckTelegramHeader_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* _L44=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */
  CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckTelegramHeader_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

