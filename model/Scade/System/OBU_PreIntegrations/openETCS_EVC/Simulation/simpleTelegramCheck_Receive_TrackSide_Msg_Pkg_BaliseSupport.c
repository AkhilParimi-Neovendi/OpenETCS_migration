/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck/ */
void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* accu/ */
  kcg_bool accu,
  /* telegram/ */
  Telegram_T_BG_Types_Pkg *telegram,
  /* which_pig/ */
  N_PIG which_pig,
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int32 noname;
  kcg_bool _1_noname;

  outC->_L16 = accu;
  _1_noname = outC->_L16;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, telegram);
  outC->_L15 = outC->_L1.telegramheader.n_pig;
  outC->_L3 = which_pig;
  outC->_L5 = outC->_L15 == outC->_L3;
  outC->_L2 = outC->_L1.valid;
  outC->_L12 = outC->_L2 & outC->_L5;
  outC->_L14 = !outC->_L12;
  outC->_L13 = outC->_L2 & outC->_L14;
  outC->_L8 = iteratorIndex;
  noname = outC->_L8;
  outC->cont = outC->_L13;
  outC->telegramAlreadyInGroup = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void simpleTelegramCheck_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L16 = kcg_true;
  outC->_L15 = N_PIG_I_am_the_1st;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L3 = N_PIG_I_am_the_1st;
  outC->_L2 = kcg_true;
  outC->_L5 = kcg_true;
  outC->telegramAlreadyInGroup = kcg_true;
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

