/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

/* TM_conversions::CASTLIB_BaliseHeaders/ */
void CASTLIB_BaliseHeaders_TM_conversions(
  /* In/ */
  BaliseTelegramHeader_int_T_TM *In,
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L1, In);
  outC->_L11 = outC->_L1.q_link;
  /* _L32=(TM_conversions::CAST_Int_to_Q_LINK#1)/ */
  CAST_Int_to_Q_LINK_TM_conversions(
    outC->_L11,
    &outC->Context_CAST_Int_to_Q_LINK_1);
  outC->_L32 = outC->Context_CAST_Int_to_Q_LINK_1.q_link;
  outC->_L10 = outC->_L1.nid_bg;
  /* _L31=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_TM_conversions(
    outC->_L10,
    &outC->Context_CAST_Int_to_NID_BG_1);
  outC->_L31 = outC->Context_CAST_Int_to_NID_BG_1.nid_bg;
  outC->_L9 = outC->_L1.nid_c;
  /* _L30=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_TM_conversions(
    outC->_L9,
    &outC->Context_CAST_Int_to_NID_C_1);
  outC->_L30 = outC->Context_CAST_Int_to_NID_C_1.nid_c;
  outC->_L8 = outC->_L1.m_mcount;
  /* _L29=(TM_conversions::CAST_Int_to_M_MCOUNT#1)/ */
  CAST_Int_to_M_MCOUNT_TM_conversions(
    outC->_L8,
    &outC->Context_CAST_Int_to_M_MCOUNT_1);
  outC->_L29 = outC->Context_CAST_Int_to_M_MCOUNT_1.m_mcount;
  outC->_L7 = outC->_L1.m_dup;
  /* _L28=(TM_conversions::CAST_Int_to_M_DUP#1)/ */
  CAST_Int_to_M_DUP_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_Int_to_M_DUP_1);
  outC->_L28 = outC->Context_CAST_Int_to_M_DUP_1.m_dup;
  outC->_L6 = outC->_L1.n_total;
  /* _L27=(TM_conversions::CAST_Int_to_N_TOTAL#1)/ */
  CAST_Int_to_N_TOTAL_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_Int_to_N_TOTAL_1);
  outC->_L27 = outC->Context_CAST_Int_to_N_TOTAL_1.n_pig;
  outC->_L5 = outC->_L1.n_pig;
  /* _L26=(TM_conversions::CAST_Int_to_N_PIG#1)/ */
  CAST_Int_to_N_PIG_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_Int_to_N_PIG_1);
  outC->_L26 = outC->Context_CAST_Int_to_N_PIG_1.n_pig;
  outC->_L4 = outC->_L1.q_media;
  /* _L25=(TM_conversions::CAST_Int_to_Q_MEDIA#1)/ */
  CAST_Int_to_Q_MEDIA_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_Int_to_Q_MEDIA_1);
  outC->_L25 = outC->Context_CAST_Int_to_Q_MEDIA_1.q_media;
  outC->_L3 = outC->_L1.m_version;
  /* _L24=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_M_VERSION_1);
  outC->_L24 = outC->Context_CAST_Int_to_M_VERSION_1.m_version;
  outC->_L2 = outC->_L1.q_updown;
  /* _L23=(TM_conversions::CAST_Int_to_Q_UPDOWN#1)/ */
  CAST_Int_to_Q_UPDOWN_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_Int_to_Q_UPDOWN_1);
  outC->_L23 = outC->Context_CAST_Int_to_Q_UPDOWN_1.q_updown;
  outC->_L22.q_updown = outC->_L23;
  outC->_L22.m_version = outC->_L24;
  outC->_L22.q_media = outC->_L25;
  outC->_L22.n_pig = outC->_L26;
  outC->_L22.n_total = outC->_L27;
  outC->_L22.m_dup = outC->_L28;
  outC->_L22.m_mcount = outC->_L29;
  outC->_L22.nid_c = outC->_L30;
  outC->_L22.nid_bg = outC->_L31;
  outC->_L22.q_link = outC->_L32;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->Out, &outC->_L22);
}

#ifndef KCG_USER_DEFINED_INIT
void CASTLIB_BaliseHeaders_init_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  outC->_L32 = Q_LINK_Unlinked;
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = M_DUP_No_duplicates;
  outC->_L27 = N_TOTAL_1_balise_in_the_group;
  outC->_L26 = N_PIG_I_am_the_1st;
  outC->_L25 = Q_MEDIA_Balise;
  outC->_L24 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23 = Q_UPDOWN_Down_link_telegram;
  outC->_L22.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.q_media = Q_MEDIA_Balise;
  outC->_L22.n_pig = N_PIG_I_am_the_1st;
  outC->_L22.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.m_dup = M_DUP_No_duplicates;
  outC->_L22.m_mcount = kcg_lit_int32(0);
  outC->_L22.nid_c = kcg_lit_int32(0);
  outC->_L22.nid_bg = kcg_lit_int32(0);
  outC->_L22.q_link = Q_LINK_Unlinked;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L1.q_updown = kcg_lit_int32(0);
  outC->_L1.m_version = kcg_lit_int32(0);
  outC->_L1.q_media = kcg_lit_int32(0);
  outC->_L1.n_pig = kcg_lit_int32(0);
  outC->_L1.n_total = kcg_lit_int32(0);
  outC->_L1.m_dup = kcg_lit_int32(0);
  outC->_L1.m_mcount = kcg_lit_int32(0);
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_bg = kcg_lit_int32(0);
  outC->_L1.q_link = kcg_lit_int32(0);
  outC->Out.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out.q_media = Q_MEDIA_Balise;
  outC->Out.n_pig = N_PIG_I_am_the_1st;
  outC->Out.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Out.m_dup = M_DUP_No_duplicates;
  outC->Out.m_mcount = kcg_lit_int32(0);
  outC->Out.nid_c = kcg_lit_int32(0);
  outC->Out.nid_bg = kcg_lit_int32(0);
  outC->Out.q_link = Q_LINK_Unlinked;
  /* _L23=(TM_conversions::CAST_Int_to_Q_UPDOWN#1)/ */
  CAST_Int_to_Q_UPDOWN_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_UPDOWN_1);
  /* _L24=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L25=(TM_conversions::CAST_Int_to_Q_MEDIA#1)/ */
  CAST_Int_to_Q_MEDIA_init_TM_conversions(&outC->Context_CAST_Int_to_Q_MEDIA_1);
  /* _L26=(TM_conversions::CAST_Int_to_N_PIG#1)/ */
  CAST_Int_to_N_PIG_init_TM_conversions(&outC->Context_CAST_Int_to_N_PIG_1);
  /* _L27=(TM_conversions::CAST_Int_to_N_TOTAL#1)/ */
  CAST_Int_to_N_TOTAL_init_TM_conversions(&outC->Context_CAST_Int_to_N_TOTAL_1);
  /* _L28=(TM_conversions::CAST_Int_to_M_DUP#1)/ */
  CAST_Int_to_M_DUP_init_TM_conversions(&outC->Context_CAST_Int_to_M_DUP_1);
  /* _L29=(TM_conversions::CAST_Int_to_M_MCOUNT#1)/ */
  CAST_Int_to_M_MCOUNT_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_MCOUNT_1);
  /* _L30=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_init_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L31=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_init_TM_conversions(&outC->Context_CAST_Int_to_NID_BG_1);
  /* _L32=(TM_conversions::CAST_Int_to_Q_LINK#1)/ */
  CAST_Int_to_Q_LINK_init_TM_conversions(&outC->Context_CAST_Int_to_Q_LINK_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CASTLIB_BaliseHeaders_reset_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  /* _L23=(TM_conversions::CAST_Int_to_Q_UPDOWN#1)/ */
  CAST_Int_to_Q_UPDOWN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_UPDOWN_1);
  /* _L24=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L25=(TM_conversions::CAST_Int_to_Q_MEDIA#1)/ */
  CAST_Int_to_Q_MEDIA_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_MEDIA_1);
  /* _L26=(TM_conversions::CAST_Int_to_N_PIG#1)/ */
  CAST_Int_to_N_PIG_reset_TM_conversions(&outC->Context_CAST_Int_to_N_PIG_1);
  /* _L27=(TM_conversions::CAST_Int_to_N_TOTAL#1)/ */
  CAST_Int_to_N_TOTAL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_N_TOTAL_1);
  /* _L28=(TM_conversions::CAST_Int_to_M_DUP#1)/ */
  CAST_Int_to_M_DUP_reset_TM_conversions(&outC->Context_CAST_Int_to_M_DUP_1);
  /* _L29=(TM_conversions::CAST_Int_to_M_MCOUNT#1)/ */
  CAST_Int_to_M_MCOUNT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_MCOUNT_1);
  /* _L30=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L31=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_BG_1);
  /* _L32=(TM_conversions::CAST_Int_to_Q_LINK#1)/ */
  CAST_Int_to_Q_LINK_reset_TM_conversions(&outC->Context_CAST_Int_to_Q_LINK_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CASTLIB_BaliseHeaders_TM_conversions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

