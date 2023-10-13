/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree/ */
void setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inTelegramArray/ */
  Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegramArray);
  outC->_L14 = outC->_L2.valid;
  outC->_L15 = !outC->_L14;
  outC->cont = outC->_L14;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  /* _L4= */
  if (outC->_L15) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L1);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L2);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outTelegrams, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void setFirstFree_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L4.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L4.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.checkResult = kcg_true;
  outC->_L2.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L2.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L2.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L2.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L2.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L2.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L2.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L2.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
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
  outC->outTelegrams.valid = kcg_true;
  outC->outTelegrams.checkResult = kcg_true;
  outC->outTelegrams.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outTelegrams.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outTelegrams.telegramheader.q_media = Q_MEDIA_Balise;
  outC->outTelegrams.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->outTelegrams.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outTelegrams.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->outTelegrams.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->outTelegrams.telegramheader.nid_c = kcg_lit_int64(0);
  outC->outTelegrams.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->outTelegrams.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->outTelegrams.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->outTelegrams.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->outTelegrams.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->outTelegrams.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->outTelegrams.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->outTelegrams.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

