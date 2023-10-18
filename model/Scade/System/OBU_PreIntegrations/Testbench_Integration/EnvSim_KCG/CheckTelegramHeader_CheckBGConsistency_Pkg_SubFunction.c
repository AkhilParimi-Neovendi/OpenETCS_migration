/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader/ */
void CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
  /* telegramHeader_in/ */
  TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static Q_UPDOWN noname;
  static M_VERSION _1_noname;
  static Q_MEDIA _2_noname;
  static M_DUP _3_noname;
  static NID_C _4_noname;
  static NID_BG _5_noname;
  static Q_LINK _6_noname;

  outC->_L50 = cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg;
  outC->_L49 = cTheTelegramFitsWithAll_CheckBGConsistency_Pkg;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L13, telegramHeader_in);
  outC->_L39 = outC->_L13.n_total;
  /* _L48=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L39,
    &outC->Context_N_TOTAL2int_1);
  outC->_L48 = outC->Context_N_TOTAL2int_1.n_total2int;
  outC->_L40 = outC->_L13.n_pig;
  /* _L47=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L40,
    &outC->Context_N_PIG2int_1);
  outC->_L47 = outC->Context_N_PIG2int_1.n_pig2int;
  outC->_L34 = outC->_L13.q_link;
  _6_noname = outC->_L34;
  outC->_L35 = outC->_L13.nid_bg;
  _5_noname = outC->_L35;
  outC->_L36 = outC->_L13.nid_c;
  _4_noname = outC->_L36;
  outC->_L38 = outC->_L13.m_dup;
  _3_noname = outC->_L38;
  outC->_L44 = kcg_lit_int64(0);
  outC->_L46 = outC->_L48 > outC->_L44;
  outC->_L45 = outC->_L47 <= outC->_L48;
  outC->_L41 = outC->_L13.q_media;
  _2_noname = outC->_L41;
  outC->_L42 = outC->_L13.m_version;
  _1_noname = outC->_L42;
  outC->_L43 = outC->_L13.q_updown;
  noname = outC->_L43;
  outC->_L37 = outC->_L13.m_mcount;
  outC->_L33 = outC->_L49 >= outC->_L37;
  outC->_L30 = outC->_L37 != outC->_L50;
  outC->_L29 = outC->_L45 & outC->_L46 & outC->_L33 & outC->_L30;
  outC->isConsistent = outC->_L29;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckTelegramHeader_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L50 = kcg_lit_int64(0);
  outC->_L49 = kcg_lit_int64(0);
  outC->_L48 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_lit_int64(0);
  outC->_L34 = Q_LINK_Unlinked;
  outC->_L35 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L38 = M_DUP_No_duplicates;
  outC->_L39 = N_TOTAL_1_balise_in_the_group;
  outC->_L40 = N_PIG_I_am_the_1st;
  outC->_L41 = Q_MEDIA_Balise;
  outC->_L42 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L43 = Q_UPDOWN_Down_link_telegram;
  outC->_L33 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L13.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.q_media = Q_MEDIA_Balise;
  outC->_L13.n_pig = N_PIG_I_am_the_1st;
  outC->_L13.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.m_dup = M_DUP_No_duplicates;
  outC->_L13.m_mcount = kcg_lit_int64(0);
  outC->_L13.nid_c = kcg_lit_int64(0);
  outC->_L13.nid_bg = kcg_lit_int64(0);
  outC->_L13.q_link = Q_LINK_Unlinked;
  outC->isConsistent = kcg_true;
  /* _L47=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_N_PIG2int_1);
  /* _L48=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* _L47=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_1);
  /* _L48=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

