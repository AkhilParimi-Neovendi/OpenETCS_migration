/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ */
void findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* which_pig/ */
  N_PIG which_pig,
  /* HeaderArray/ */
  TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* doSearch/ */
  kcg_bool doSearch,
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  static kcg_size idx;
  static kcg_bool acc;
  static kcg_size idx1;
  /* telegramAlreadyInGroup/ */
  static kcg_bool telegramAlreadyInGroup_partial;
  static kcg_int32 noname;
  /* telegramAlreadyInGroup/ */
  static kcg_bool _2_telegramAlreadyInGroup_partial;

  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L30, HeaderArray);
  outC->_L31 = outC->_L30[0].valid;
  outC->valid = outC->_L31;
  outC->IfBlock1_clock = outC->valid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L9_then_IfBlock1 = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L2_then_IfBlock1, HeaderArray);
    outC->_L7_then_IfBlock1 = which_pig;
    /* IfBlock1:then:_L3/ */
    for (idx = 0; idx < 8; idx++) {
      outC->_L3_then_IfBlock1[idx] = outC->_L7_then_IfBlock1;
    }
    outC->_L6_then_IfBlock1 = doSearch;
    outC->_L5_then_IfBlock1 = outC->_L9_then_IfBlock1;
    /* IfBlock1:then:_L4= */
    if (outC->_L6_then_IfBlock1) {
      /* IfBlock1:then:_L4= */
      for (idx1 = 0; idx1 < 8; idx1++) {
        acc = outC->_L5_then_IfBlock1;
        /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck#7)/ */
        simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          /* IfBlock1:then:_L4= */(kcg_int32) idx1,
          acc,
          &outC->_L2_then_IfBlock1[idx1],
          outC->_L3_then_IfBlock1[idx1],
          &outC->Context_simpleTelegramCheck_7[idx1]);
        outC->_L5_then_IfBlock1 =
          outC->Context_simpleTelegramCheck_7[idx1].telegramAlreadyInGroup;
        outC->_L4_then_IfBlock1 = /* IfBlock1:then:_L4= */(kcg_int32) (idx1 + 1);
        /* IfBlock1:then:_L4= */
        if (!outC->Context_simpleTelegramCheck_7[idx1].cont) {
          break;
        }
      }
    }
    else {
      outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
    }
    noname = outC->_L4_then_IfBlock1;
    telegramAlreadyInGroup_partial = outC->_L5_then_IfBlock1;
    outC->telegramAlreadyInGroup = telegramAlreadyInGroup_partial;
  }
  else {
    outC->_L2_else_IfBlock1 = kcg_false;
    _2_telegramAlreadyInGroup_partial = outC->_L2_else_IfBlock1;
    outC->telegramAlreadyInGroup = _2_telegramAlreadyInGroup_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void findTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L31 = kcg_true;
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L30[idx3].valid = kcg_true;
    outC->_L30[idx3].checkResult = kcg_true;
    outC->_L30[idx3].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L30[idx3].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L30[idx3].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L30[idx3].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L30[idx3].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L30[idx3].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L30[idx3].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L30[idx3].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L30[idx3].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L30[idx3].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx1 = 0; idx1 < 30; idx1++) {
      outC->_L30[idx3].packets.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
      outC->_L30[idx3].packets.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
      outC->_L30[idx3].packets.PacketHeaders[idx1].valid = kcg_true;
      outC->_L30[idx3].packets.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
      outC->_L30[idx3].packets.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
    }
    for (idx2 = 0; idx2 < 500; idx2++) {
      outC->_L30[idx3].packets.PacketData[idx2] = kcg_lit_int32(0);
    }
  }
  outC->valid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_else_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L6_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1 = kcg_true;
  for (idx4 = 0; idx4 < 8; idx4++) {
    outC->_L3_then_IfBlock1[idx4] = N_PIG_I_am_the_1st;
  }
  for (idx7 = 0; idx7 < 8; idx7++) {
    outC->_L2_then_IfBlock1[idx7].valid = kcg_true;
    outC->_L2_then_IfBlock1[idx7].checkResult = kcg_true;
    outC->_L2_then_IfBlock1[idx7].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_then_IfBlock1[idx7].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_then_IfBlock1[idx7].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L2_then_IfBlock1[idx7].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L2_then_IfBlock1[idx7].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_then_IfBlock1[idx7].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L2_then_IfBlock1[idx7].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx7].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx7].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx7].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx5 = 0; idx5 < 30; idx5++) {
      outC->_L2_then_IfBlock1[idx7].packets.PacketHeaders[idx5].nid_packet =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1[idx7].packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
      outC->_L2_then_IfBlock1[idx7].packets.PacketHeaders[idx5].valid = kcg_true;
      outC->_L2_then_IfBlock1[idx7].packets.PacketHeaders[idx5].startAddress =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1[idx7].packets.PacketHeaders[idx5].endAddress =
        kcg_lit_int32(0);
    }
    for (idx6 = 0; idx6 < 500; idx6++) {
      outC->_L2_then_IfBlock1[idx7].packets.PacketData[idx6] = kcg_lit_int32(0);
    }
  }
  outC->telegramAlreadyInGroup = kcg_true;
  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck#7)/ */
    simpleTelegramCheck_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_simpleTelegramCheck_7[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck#7)/ */
    simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_simpleTelegramCheck_7[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

