/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter/ */
void MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* telegramArray/ */
  TelegramArray_T_BG_Types_Pkg *telegramArray,
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static Telegram_T_BG_Types_Pkg acc;
  static kcg_size idx;
  static kcg_int32 noname;

  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L5, telegramArray);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6, &outC->_L5[0]);
  kcg_copy__103_array(&outC->_L8, (_103_array *) &outC->_L5[1]);
  outC->_L4 = kcg_true;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, &outC->_L6);
  /* _L3= */
  if (outC->_L4) {
    /* _L3= */
    for (idx = 0; idx < 7; idx++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&acc, &outC->_L1);
      /* _L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets#1)/ */
      MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &acc,
        &outC->_L8[idx],
        &outC->Context_MergAllPackets_1[idx]);
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L1,
        &outC->Context_MergAllPackets_1[idx].telegram_out);
      outC->_L3 = /* _L3= */(kcg_int32) (idx + 1);
      /* _L3= */
      if (!outC->Context_MergAllPackets_1[idx].go_on) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int32(0);
  }
  noname = outC->_L3;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegramout, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void MergAllPackets_Iter_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
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

  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L8[idx3].valid = kcg_true;
    outC->_L8[idx3].checkResult = kcg_true;
    outC->_L8[idx3].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L8[idx3].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L8[idx3].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L8[idx3].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L8[idx3].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L8[idx3].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L8[idx3].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L8[idx3].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L8[idx3].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L8[idx3].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx1 = 0; idx1 < 30; idx1++) {
      outC->_L8[idx3].packets.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
      outC->_L8[idx3].packets.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
      outC->_L8[idx3].packets.PacketHeaders[idx1].valid = kcg_true;
      outC->_L8[idx3].packets.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
      outC->_L8[idx3].packets.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
    }
    for (idx2 = 0; idx2 < 500; idx2++) {
      outC->_L8[idx3].packets.PacketData[idx2] = kcg_lit_int32(0);
    }
  }
  outC->_L6.valid = kcg_true;
  outC->_L6.checkResult = kcg_true;
  outC->_L6.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L6.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L6.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L6.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L6.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L6.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L6.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L6.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L6.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L5[idx8].valid = kcg_true;
    outC->_L5[idx8].checkResult = kcg_true;
    outC->_L5[idx8].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx8].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx8].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L5[idx8].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L5[idx8].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx8].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L5[idx8].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L5[idx8].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L5[idx8].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx8].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L5[idx8].packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
      outC->_L5[idx8].packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
      outC->_L5[idx8].packets.PacketHeaders[idx6].valid = kcg_true;
      outC->_L5[idx8].packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
      outC->_L5[idx8].packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L5[idx8].packets.PacketData[idx7] = kcg_lit_int32(0);
    }
  }
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
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
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L1.packets.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L1.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->telegramout.valid = kcg_true;
  outC->telegramout.checkResult = kcg_true;
  outC->telegramout.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->telegramout.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->telegramout.telegramheader.q_media = Q_MEDIA_Balise;
  outC->telegramout.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->telegramout.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->telegramout.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->telegramout.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->telegramout.telegramheader.nid_c = kcg_lit_int32(0);
  outC->telegramout.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->telegramout.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->telegramout.packets.PacketHeaders[idx11].nid_packet = kcg_lit_int32(0);
    outC->telegramout.packets.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->telegramout.packets.PacketHeaders[idx11].valid = kcg_true;
    outC->telegramout.packets.PacketHeaders[idx11].startAddress = kcg_lit_int32(0);
    outC->telegramout.packets.PacketHeaders[idx11].endAddress = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->telegramout.packets.PacketData[idx12] = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 7; idx++) {
    /* _L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets#1)/ */
    MergAllPackets_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_MergAllPackets_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MergAllPackets_Iter_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 7; idx++) {
    /* _L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets#1)/ */
    MergAllPackets_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_MergAllPackets_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

