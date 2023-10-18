/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram/ */
void replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inTelegramArray/ */
  Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  static kcg_bool op_call;

  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  outC->_L6 = outC->_L1.telegramheader.n_pig;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegramArray);
  outC->_L7 = outC->_L2.telegramheader.n_pig;
  outC->_L8 = outC->_L7 == outC->_L6;
  outC->_L3 = outC->_L2.valid;
  outC->_L9 = outC->_L3 & outC->_L8;
  outC->doReplace = outC->_L9;
  outC->_L19 = outC->doReplace;
  outC->every = outC->_L19;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L17, newTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, inTelegramArray);
  if (outC->every) {
    /* _L16=(Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams#1)/ */
    compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L17,
      &outC->_L18,
      &outC->Context_compareTelegrams_1);
    op_call = outC->Context_compareTelegrams_1.isEqual;
  }
  outC->_L20 = kcg_false;
  if (outC->every) {
    outC->_L16 = op_call;
  }
  else {
    outC->_L16 = outC->_L20;
  }
  outC->outIsDuplicate = outC->_L16;
  outC->_L13 = outC->doReplace;
  outC->_L14 = !outC->_L13;
  outC->_L12 = outC->_L2.valid;
  outC->_L15 = outC->_L12 & outC->_L14;
  outC->_L10 = outC->doReplace;
  outC->_L11 = !outC->_L10;
  outC->cont = outC->_L15;
  /* _L4= */
  if (outC->_L11) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L2);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L1);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outTelegrams, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void replaceTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
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

  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.checkResult = kcg_true;
  outC->_L18.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L18.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L18.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L18.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L18.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L18.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L18.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L18.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L18.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L17.valid = kcg_true;
  outC->_L17.checkResult = kcg_true;
  outC->_L17.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L17.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L17.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L17.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L17.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L17.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L17.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L17.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L17.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L17.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L17.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = N_PIG_I_am_the_1st;
  outC->_L6 = N_PIG_I_am_the_1st;
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
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L4.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L4.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_true;
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
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L2.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L2.packets.PacketData[idx7] = kcg_lit_int64(0);
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
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L1.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L1.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->doReplace = kcg_true;
  outC->every = kcg_true;
  outC->outIsDuplicate = kcg_true;
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
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->outTelegrams.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->outTelegrams.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->outTelegrams.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->outTelegrams.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->outTelegrams.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->outTelegrams.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->cont = kcg_true;
  /* _L16=(Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams#1)/ */
  compareTelegrams_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_compareTelegrams_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* _L16=(Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams#1)/ */
  compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_compareTelegrams_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

