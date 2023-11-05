/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ */
void compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* inTelegram1/ */
  Telegram_T_BG_Types_Pkg *inTelegram1,
  /* inTelegram2/ */
  Telegram_T_BG_Types_Pkg *inTelegram2,
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* isEqual/ */
  static kcg_bool isEqual_partial;
  /* isEqual/ */
  static kcg_bool _1_isEqual_partial;

  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegram2);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L4, &outC->_L2.telegramheader);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, inTelegram1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, &outC->_L1.telegramheader);
  outC->_L5 = kcg_comp_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, &outC->_L4);
  outC->HeaderIsEqual = outC->_L5;
  outC->IfBlock1_clock = outC->HeaderIsEqual;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L5_then_IfBlock1, inTelegram1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4_then_IfBlock1, inTelegram2);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L4_then_IfBlock1.packets);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->_L5_then_IfBlock1.packets);
    outC->_L1_then_IfBlock1 = kcg_comp_CompressedPackets_T_Common_Types_Pkg(
        &outC->_L2_then_IfBlock1,
        &outC->_L3_then_IfBlock1);
    isEqual_partial = outC->_L1_then_IfBlock1;
    outC->isEqual = isEqual_partial;
  }
  else {
    outC->_L1_else_IfBlock1 = kcg_false;
    _1_isEqual_partial = outC->_L1_else_IfBlock1;
    outC->isEqual = _1_isEqual_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void compareTelegrams_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
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

  outC->_L5 = kcg_true;
  outC->_L4.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.q_media = Q_MEDIA_Balise;
  outC->_L4.n_pig = N_PIG_I_am_the_1st;
  outC->_L4.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.m_dup = M_DUP_No_duplicates;
  outC->_L4.m_mcount = kcg_lit_int32(0);
  outC->_L4.nid_c = kcg_lit_int32(0);
  outC->_L4.nid_bg = kcg_lit_int32(0);
  outC->_L4.q_link = Q_LINK_Unlinked;
  outC->_L3.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.q_media = Q_MEDIA_Balise;
  outC->_L3.n_pig = N_PIG_I_am_the_1st;
  outC->_L3.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.m_dup = M_DUP_No_duplicates;
  outC->_L3.m_mcount = kcg_lit_int32(0);
  outC->_L3.nid_c = kcg_lit_int32(0);
  outC->_L3.nid_bg = kcg_lit_int32(0);
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L2.valid = kcg_true;
  outC->_L2.checkResult = kcg_true;
  outC->_L2.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L2.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L2.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L2.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L2.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L2.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L2.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L2.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L2.packets.PacketData[idx1] = kcg_lit_int32(0);
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
  outC->_L1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->HeaderIsEqual = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.checkResult = kcg_true;
  outC->_L5_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L5_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L5_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L5_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L5_then_IfBlock1.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L4_then_IfBlock1.valid = kcg_true;
  outC->_L4_then_IfBlock1.checkResult = kcg_true;
  outC->_L4_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L4_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L4_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L4_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L4_then_IfBlock1.packets.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_then_IfBlock1.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L4_then_IfBlock1.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L4_then_IfBlock1.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->_L4_then_IfBlock1.packets.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L4_then_IfBlock1.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L3_then_IfBlock1.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L3_then_IfBlock1.PacketHeaders[idx8].valid = kcg_true;
    outC->_L3_then_IfBlock1.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L3_then_IfBlock1.PacketData[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].valid = kcg_true;
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L2_then_IfBlock1.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->isEqual = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

