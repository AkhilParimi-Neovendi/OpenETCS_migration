/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets/ */
void MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* telegramACC/ */
  Telegram_T_BG_Types_Pkg *telegramACC,
  /* telegram/ */
  Telegram_T_BG_Types_Pkg *telegram,
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;
  /* telegram_out/ */
  static Telegram_T_BG_Types_Pkg telegram_out_partial;
  /* telegram_out/ */
  static Telegram_T_BG_Types_Pkg _1_telegram_out_partial;
  /* telegram_out/ */
  static Telegram_T_BG_Types_Pkg _2_telegram_out_partial;
  static kcg_int32 noname;
  /* telegram_out/ */
  static Telegram_T_BG_Types_Pkg _3_telegram_out_partial;
  /* telegram_out/ */
  static Telegram_T_BG_Types_Pkg _4_telegram_out_partial;
  /* telegram_out/ */
  static Telegram_T_BG_Types_Pkg _5_telegram_out_partial;

  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L73, telegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L71, telegramACC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L70, &outC->_L71.packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L69,
    &outC->_L70.PacketData);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->packetlist,
    &outC->_L69);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L72, &outC->_L70.PacketHeaders);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->metadata, &outC->_L72);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L68, telegramACC);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L62, &outC->_L68.telegramheader);
  outC->_L67 = outC->_L62.m_dup;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L60, telegram);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L63, &outC->_L60.telegramheader);
  outC->_L64 = outC->_L63.n_pig;
  /* _L61=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L64,
    &outC->Context_N_PIG2int_3);
  outC->_L61 = outC->Context_N_PIG2int_3.n_pig2int;
  outC->_L59 = outC->_L62.n_pig;
  /* _L58=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#4)/ */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L59,
    &outC->Context_N_PIG2int_4);
  outC->_L58 = outC->Context_N_PIG2int_4.n_pig2int;
  outC->_L66 = outC->_L58 - outC->_L61;
  outC->mDup1 = outC->_L67;
  outC->_L65 = outC->_L63.m_dup;
  outC->diff = outC->_L66;
  outC->mDup2 = outC->_L65;
  outC->_L10 = outC->_L73.valid;
  outC->go_on = outC->_L10;
  outC->_L47 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L43 = outC->mDup2;
  outC->_L44 = outC->_L43 == outC->_L47;
  outC->_L41 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L53 = outC->mDup1;
  outC->_L51 = outC->_L53 == outC->_L41;
  outC->_L49 = outC->_L51 & outC->_L44;
  outC->nominal = outC->_L49;
  outC->IfBlock1_clock = (outC->diff == kcg_lit_int32(-1)) & outC->nominal &
    outC->go_on;
  outC->_L46 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L52 = outC->mDup2;
  outC->_L48 = outC->_L52 == outC->_L46;
  outC->_L42 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L45 = outC->mDup1;
  outC->_L50 = outC->_L45 == outC->_L42;
  outC->_L54 = outC->_L50 & outC->_L48;
  outC->revers = outC->_L54;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1_then_IfBlock1, telegramACC);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L4_then_IfBlock1,
      &outC->_L1_then_IfBlock1.packets.PacketData);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2_then_IfBlock1, telegram);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L2_then_IfBlock1);
    if (kcg_true) {
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &outC->_L3_then_IfBlock1.packets.PacketData,
        &outC->_L4_then_IfBlock1);
    }
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &telegram_out_partial,
      &outC->_L3_then_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegram_out, &telegram_out_partial);
  }
  else {
    outC->else_clock_IfBlock1 = (outC->diff == kcg_lit_int32(1)) &
      outC->revers & outC->go_on;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L5_then_else_IfBlock1, telegram);
      kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4_then_else_IfBlock1, telegramACC);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        &outC->_L4_then_else_IfBlock1.packets.PacketData);
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L3_then_else_IfBlock1,
        &outC->_L5_then_else_IfBlock1);
      if (kcg_true) {
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L3_then_else_IfBlock1.packets.PacketData,
          &outC->_L2_then_else_IfBlock1);
      }
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_5_telegram_out_partial,
        &outC->_L3_then_else_IfBlock1);
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_1_telegram_out_partial,
        &_5_telegram_out_partial);
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->go_on;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L9_then_else_else_IfBlock1,
          &outC->packetlist);
        outC->_L14_then_else_else_IfBlock1 = kcg_lit_int32(1);
        kcg_copy_Metadata_T_Common_Types_Pkg(
          &outC->_L10_then_else_else_IfBlock1,
          &outC->metadata);
        /* IfBlock1:else:else:then:_L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#1)/ */
        FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &outC->_L10_then_else_else_IfBlock1,
          &outC->Context_FindIndexOfMetaDataIteration_1);
        outC->_L11_then_else_else_IfBlock1 =
          outC->Context_FindIndexOfMetaDataIteration_1.index;
        outC->_L12_then_else_else_IfBlock1 =
          outC->Context_FindIndexOfMetaDataIteration_1.endAddress;
        outC->_L13_then_else_else_IfBlock1 =
          outC->_L12_then_else_else_IfBlock1 + outC->_L14_then_else_else_IfBlock1;
        /* IfBlock1:else:else:then:_L17/ */
        for (idx = 0; idx < 500; idx++) {
          outC->_L17_then_else_else_IfBlock1[idx] = outC->_L13_then_else_else_IfBlock1;
        }
        kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L15_then_else_else_IfBlock1, telegram);
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L16_then_else_else_IfBlock1,
          &outC->_L15_then_else_else_IfBlock1.packets.PacketData);
        /* IfBlock1:else:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray#1)/ */
        Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &outC->_L9_then_else_else_IfBlock1,
          &outC->_L17_then_else_else_IfBlock1,
          &outC->_L16_then_else_else_IfBlock1,
          &outC->Context_Merg2PacketsListArray_1);
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L3_then_else_else_IfBlock1,
          &outC->Context_Merg2PacketsListArray_1.mergPackets);
        kcg_copy_Metadata_T_Common_Types_Pkg(
          &outC->_L8_then_else_else_IfBlock1,
          &outC->metadata);
        kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4_then_else_else_IfBlock1, telegram);
        /* IfBlock1:else:else:then:_L2=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration#1)/ */
        Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &outC->_L8_then_else_else_IfBlock1,
          &outC->_L4_then_else_else_IfBlock1,
          &outC->Context_Merg2MetaDataIteration_1);
        kcg_copy_Metadata_T_Common_Types_Pkg(
          &outC->_L2_then_else_else_IfBlock1,
          &outC->Context_Merg2MetaDataIteration_1.mergedMetaData);
        kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18_then_else_else_IfBlock1, telegram);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L19_then_else_else_IfBlock1,
          &outC->_L18_then_else_else_IfBlock1);
        if (kcg_true) {
          kcg_copy_Metadata_T_Common_Types_Pkg(
            &outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders,
            &outC->_L2_then_else_else_IfBlock1);
        }
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L20_then_else_else_IfBlock1,
          &outC->_L19_then_else_else_IfBlock1);
        if (kcg_true) {
          kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
            &outC->_L20_then_else_else_IfBlock1.packets.PacketData,
            &outC->_L3_then_else_else_IfBlock1);
        }
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &_2_telegram_out_partial,
          &outC->_L20_then_else_else_IfBlock1);
        noname = outC->_L11_then_else_else_IfBlock1;
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &_4_telegram_out_partial,
          &_2_telegram_out_partial);
      }
      else {
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L1_else_else_else_IfBlock1,
          telegramACC);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &_3_telegram_out_partial,
          &outC->_L1_else_else_else_IfBlock1);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &_4_telegram_out_partial,
          &_3_telegram_out_partial);
      }
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_1_telegram_out_partial,
        &_4_telegram_out_partial);
    }
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegram_out, &_1_telegram_out_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void MergAllPackets_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
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
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;

  outC->_L73.valid = kcg_true;
  outC->_L73.checkResult = kcg_true;
  outC->_L73.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L73.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L73.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L73.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L73.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L73.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L73.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L73.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L73.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L73.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L73.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L73.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L73.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L73.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L73.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L73.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L69[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L70.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L70.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L70.PacketHeaders[idx3].valid = kcg_true;
    outC->_L70.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L70.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L70.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L71.valid = kcg_true;
  outC->_L71.checkResult = kcg_true;
  outC->_L71.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L71.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L71.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L71.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L71.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L71.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L71.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L71.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L71.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L71.packets.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L71.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L71.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L71.packets.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L71.packets.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L71.packets.PacketData[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L72[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L72[idx7].q_dir = Q_DIR_Reverse;
    outC->_L72[idx7].valid = kcg_true;
    outC->_L72[idx7].startAddress = kcg_lit_int32(0);
    outC->_L72[idx7].endAddress = kcg_lit_int32(0);
  }
  outC->_L58 = kcg_lit_int32(0);
  outC->_L59 = N_PIG_I_am_the_1st;
  outC->_L60.valid = kcg_true;
  outC->_L60.checkResult = kcg_true;
  outC->_L60.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L60.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L60.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L60.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L60.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L60.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L60.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L60.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L60.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L60.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L60.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L60.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L60.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L60.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L60.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L60.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L61 = kcg_lit_int32(0);
  outC->_L62.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L62.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.q_media = Q_MEDIA_Balise;
  outC->_L62.n_pig = N_PIG_I_am_the_1st;
  outC->_L62.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L62.m_dup = M_DUP_No_duplicates;
  outC->_L62.m_mcount = kcg_lit_int32(0);
  outC->_L62.nid_c = kcg_lit_int32(0);
  outC->_L62.nid_bg = kcg_lit_int32(0);
  outC->_L62.q_link = Q_LINK_Unlinked;
  outC->_L63.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L63.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L63.q_media = Q_MEDIA_Balise;
  outC->_L63.n_pig = N_PIG_I_am_the_1st;
  outC->_L63.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L63.m_dup = M_DUP_No_duplicates;
  outC->_L63.m_mcount = kcg_lit_int32(0);
  outC->_L63.nid_c = kcg_lit_int32(0);
  outC->_L63.nid_bg = kcg_lit_int32(0);
  outC->_L63.q_link = Q_LINK_Unlinked;
  outC->_L64 = N_PIG_I_am_the_1st;
  outC->_L65 = M_DUP_No_duplicates;
  outC->_L66 = kcg_lit_int32(0);
  outC->_L67 = M_DUP_No_duplicates;
  outC->_L68.valid = kcg_true;
  outC->_L68.checkResult = kcg_true;
  outC->_L68.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L68.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L68.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L68.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L68.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L68.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L68.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L68.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L68.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L68.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L68.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L68.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L68.packets.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L68.packets.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L68.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L41 = M_DUP_No_duplicates;
  outC->_L42 = M_DUP_No_duplicates;
  outC->_L43 = M_DUP_No_duplicates;
  outC->_L44 = kcg_true;
  outC->_L45 = M_DUP_No_duplicates;
  outC->_L46 = M_DUP_No_duplicates;
  outC->_L47 = M_DUP_No_duplicates;
  outC->_L48 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L52 = M_DUP_No_duplicates;
  outC->_L53 = M_DUP_No_duplicates;
  outC->_L54 = kcg_true;
  outC->_L10 = kcg_true;
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->packetlist[idx12] = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->metadata[idx13].nid_packet = kcg_lit_int32(0);
    outC->metadata[idx13].q_dir = Q_DIR_Reverse;
    outC->metadata[idx13].valid = kcg_true;
    outC->metadata[idx13].startAddress = kcg_lit_int32(0);
    outC->metadata[idx13].endAddress = kcg_lit_int32(0);
  }
  outC->revers = kcg_true;
  outC->nominal = kcg_true;
  outC->diff = kcg_lit_int32(0);
  outC->mDup2 = M_DUP_No_duplicates;
  outC->mDup1 = M_DUP_No_duplicates;
  outC->IfBlock1_clock = kcg_true;
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L2_then_else_IfBlock1[idx14] = kcg_lit_int32(0);
  }
  outC->_L3_then_else_IfBlock1.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.checkResult = kcg_true;
  outC->_L3_then_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3_then_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L3_then_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L3_then_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L3_then_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx15].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx15].q_dir = Q_DIR_Reverse;
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx15].valid = kcg_true;
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx15].startAddress =
      kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1.packets.PacketHeaders[idx15].endAddress =
      kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L3_then_else_IfBlock1.packets.PacketData[idx16] = kcg_lit_int32(0);
  }
  outC->_L4_then_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.checkResult = kcg_true;
  outC->_L4_then_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_then_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L4_then_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L4_then_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_then_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L4_then_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx17].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx17].valid = kcg_true;
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx17].startAddress =
      kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx17].endAddress =
      kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L4_then_else_IfBlock1.packets.PacketData[idx18] = kcg_lit_int32(0);
  }
  outC->_L5_then_else_IfBlock1.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.checkResult = kcg_true;
  outC->_L5_then_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_then_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L5_then_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L5_then_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_then_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L5_then_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L5_then_else_IfBlock1.packets.PacketHeaders[idx19].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_then_else_IfBlock1.packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L5_then_else_IfBlock1.packets.PacketHeaders[idx19].valid = kcg_true;
    outC->_L5_then_else_IfBlock1.packets.PacketHeaders[idx19].startAddress =
      kcg_lit_int32(0);
    outC->_L5_then_else_IfBlock1.packets.PacketHeaders[idx19].endAddress =
      kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L5_then_else_IfBlock1.packets.PacketData[idx20] = kcg_lit_int32(0);
  }
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_else_else_IfBlock1.checkResult = kcg_true;
  outC->_L1_else_else_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_else_else_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_else_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L1_else_else_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L1_else_else_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_else_else_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L1_else_else_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L1_else_else_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L1_else_else_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L1_else_else_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L1_else_else_else_IfBlock1.packets.PacketHeaders[idx21].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1.packets.PacketHeaders[idx21].q_dir =
      Q_DIR_Reverse;
    outC->_L1_else_else_else_IfBlock1.packets.PacketHeaders[idx21].valid = kcg_true;
    outC->_L1_else_else_else_IfBlock1.packets.PacketHeaders[idx21].startAddress =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1.packets.PacketHeaders[idx21].endAddress =
      kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 500; idx22++) {
    outC->_L1_else_else_else_IfBlock1.packets.PacketData[idx22] = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L2_then_else_else_IfBlock1[idx23].nid_packet = kcg_lit_int32(0);
    outC->_L2_then_else_else_IfBlock1[idx23].q_dir = Q_DIR_Reverse;
    outC->_L2_then_else_else_IfBlock1[idx23].valid = kcg_true;
    outC->_L2_then_else_else_IfBlock1[idx23].startAddress = kcg_lit_int32(0);
    outC->_L2_then_else_else_IfBlock1[idx23].endAddress = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L3_then_else_else_IfBlock1[idx24] = kcg_lit_int32(0);
  }
  outC->_L4_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_else_IfBlock1.checkResult = kcg_true;
  outC->_L4_then_else_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_then_else_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_else_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L4_then_else_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L4_then_else_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_then_else_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L4_then_else_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx25].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx25].q_dir =
      Q_DIR_Reverse;
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx25].valid = kcg_true;
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx25].startAddress =
      kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx25].endAddress =
      kcg_lit_int32(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L4_then_else_else_IfBlock1.packets.PacketData[idx26] = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L8_then_else_else_IfBlock1[idx27].nid_packet = kcg_lit_int32(0);
    outC->_L8_then_else_else_IfBlock1[idx27].q_dir = Q_DIR_Reverse;
    outC->_L8_then_else_else_IfBlock1[idx27].valid = kcg_true;
    outC->_L8_then_else_else_IfBlock1[idx27].startAddress = kcg_lit_int32(0);
    outC->_L8_then_else_else_IfBlock1[idx27].endAddress = kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->_L9_then_else_else_IfBlock1[idx28] = kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L10_then_else_else_IfBlock1[idx29].nid_packet = kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx29].q_dir = Q_DIR_Reverse;
    outC->_L10_then_else_else_IfBlock1[idx29].valid = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx29].startAddress = kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx29].endAddress = kcg_lit_int32(0);
  }
  outC->_L12_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L13_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L14_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L15_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L15_then_else_else_IfBlock1.checkResult = kcg_true;
  outC->_L15_then_else_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15_then_else_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15_then_else_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L15_then_else_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L15_then_else_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15_then_else_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L15_then_else_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L15_then_else_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L15_then_else_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L15_then_else_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L15_then_else_else_IfBlock1.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int32(0);
    outC->_L15_then_else_else_IfBlock1.packets.PacketHeaders[idx30].q_dir =
      Q_DIR_Reverse;
    outC->_L15_then_else_else_IfBlock1.packets.PacketHeaders[idx30].valid =
      kcg_true;
    outC->_L15_then_else_else_IfBlock1.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int32(0);
    outC->_L15_then_else_else_IfBlock1.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L15_then_else_else_IfBlock1.packets.PacketData[idx31] = kcg_lit_int32(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->_L16_then_else_else_IfBlock1[idx32] = kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L17_then_else_else_IfBlock1[idx33] = kcg_lit_int32(0);
  }
  outC->_L18_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L18_then_else_else_IfBlock1.checkResult = kcg_true;
  outC->_L18_then_else_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L18_then_else_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18_then_else_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L18_then_else_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L18_then_else_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L18_then_else_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L18_then_else_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L18_then_else_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L18_then_else_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L18_then_else_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L18_then_else_else_IfBlock1.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->_L18_then_else_else_IfBlock1.packets.PacketHeaders[idx34].q_dir =
      Q_DIR_Reverse;
    outC->_L18_then_else_else_IfBlock1.packets.PacketHeaders[idx34].valid =
      kcg_true;
    outC->_L18_then_else_else_IfBlock1.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->_L18_then_else_else_IfBlock1.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L18_then_else_else_IfBlock1.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->_L19_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L19_then_else_else_IfBlock1.checkResult = kcg_true;
  outC->_L19_then_else_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19_then_else_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_then_else_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L19_then_else_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L19_then_else_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19_then_else_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L19_then_else_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L19_then_else_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L19_then_else_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L19_then_else_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx36].nid_packet =
      kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx36].q_dir =
      Q_DIR_Reverse;
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx36].valid =
      kcg_true;
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx36].endAddress =
      kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L19_then_else_else_IfBlock1.packets.PacketData[idx37] = kcg_lit_int32(0);
  }
  outC->_L20_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L20_then_else_else_IfBlock1.checkResult = kcg_true;
  outC->_L20_then_else_else_IfBlock1.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L20_then_else_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20_then_else_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L20_then_else_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L20_then_else_else_IfBlock1.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L20_then_else_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L20_then_else_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L20_then_else_else_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L20_then_else_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L20_then_else_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->_L20_then_else_else_IfBlock1.packets.PacketHeaders[idx38].nid_packet =
      kcg_lit_int32(0);
    outC->_L20_then_else_else_IfBlock1.packets.PacketHeaders[idx38].q_dir =
      Q_DIR_Reverse;
    outC->_L20_then_else_else_IfBlock1.packets.PacketHeaders[idx38].valid =
      kcg_true;
    outC->_L20_then_else_else_IfBlock1.packets.PacketHeaders[idx38].startAddress =
      kcg_lit_int32(0);
    outC->_L20_then_else_else_IfBlock1.packets.PacketHeaders[idx38].endAddress =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->_L20_then_else_else_IfBlock1.packets.PacketData[idx39] = kcg_lit_int32(0);
  }
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
  outC->_L1_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx40].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx40].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx40].valid = kcg_true;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx40].startAddress =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx40].endAddress =
      kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->_L1_then_IfBlock1.packets.PacketData[idx41] = kcg_lit_int32(0);
  }
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.checkResult = kcg_true;
  outC->_L2_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L2_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L2_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L2_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx42].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx42].q_dir = Q_DIR_Reverse;
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx42].valid = kcg_true;
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx42].startAddress =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx42].endAddress =
      kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->_L2_then_IfBlock1.packets.PacketData[idx43] = kcg_lit_int32(0);
  }
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
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx44].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx44].q_dir = Q_DIR_Reverse;
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx44].valid = kcg_true;
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx44].startAddress =
      kcg_lit_int32(0);
    outC->_L3_then_IfBlock1.packets.PacketHeaders[idx44].endAddress =
      kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L3_then_IfBlock1.packets.PacketData[idx45] = kcg_lit_int32(0);
  }
  for (idx46 = 0; idx46 < 500; idx46++) {
    outC->_L4_then_IfBlock1[idx46] = kcg_lit_int32(0);
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
  outC->telegram_out.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->telegram_out.telegramheader.nid_c = kcg_lit_int32(0);
  outC->telegram_out.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->telegram_out.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx47 = 0; idx47 < 30; idx47++) {
    outC->telegram_out.packets.PacketHeaders[idx47].nid_packet = kcg_lit_int32(0);
    outC->telegram_out.packets.PacketHeaders[idx47].q_dir = Q_DIR_Reverse;
    outC->telegram_out.packets.PacketHeaders[idx47].valid = kcg_true;
    outC->telegram_out.packets.PacketHeaders[idx47].startAddress = kcg_lit_int32(0);
    outC->telegram_out.packets.PacketHeaders[idx47].endAddress = kcg_lit_int32(0);
  }
  for (idx48 = 0; idx48 < 500; idx48++) {
    outC->telegram_out.packets.PacketData[idx48] = kcg_lit_int32(0);
  }
  outC->go_on = kcg_true;
  /* IfBlock1:else:else:then:_L2=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration#1)/ */
  Merg2MetaDataIteration_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_Merg2MetaDataIteration_1);
  /* IfBlock1:else:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray#1)/ */
  Merg2PacketsListArray_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_Merg2PacketsListArray_1);
  /* IfBlock1:else:else:then:_L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#1)/ */
  FindIndexOfMetaDataIteration_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_FindIndexOfMetaDataIteration_1);
  /* _L58=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#4)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_N_PIG2int_4);
  /* _L61=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_N_PIG2int_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MergAllPackets_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  /* IfBlock1:else:else:then:_L2=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration#1)/ */
  Merg2MetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_Merg2MetaDataIteration_1);
  /* IfBlock1:else:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray#1)/ */
  Merg2PacketsListArray_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_Merg2PacketsListArray_1);
  /* IfBlock1:else:else:then:_L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#1)/ */
  FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_FindIndexOfMetaDataIteration_1);
  /* _L58=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#4)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_4);
  /* _L61=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

