/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Headers_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Headers/ */
void Check2Headers_CheckBGConsistency_Pkg_SubFunction(
  /* header_1/ */
  TelegramHeader_T_BG_Types_Pkg *header_1,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* header_2/ */
  TelegramHeader_T_BG_Types_Pkg *header_2,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static M_MCOUNT noname;
  static M_MCOUNT _1_noname;

  outC->_L41 = crcCheck_2;
  outC->_L40 = crcCheck_1;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L1, header_1);
  outC->_L10 = outC->_L1.n_pig;
  outC->n_pig_1 = outC->_L10;
  outC->_L37 = outC->n_pig_1;
  outC->_L8 = outC->_L1.m_dup;
  outC->m_dup_1 = outC->_L8;
  outC->_L35 = outC->m_dup_1;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, header_2);
  outC->_L17 = outC->_L3.n_pig;
  outC->n_pig_2 = outC->_L17;
  outC->_L38 = outC->n_pig_2;
  outC->_L19 = outC->_L3.m_dup;
  outC->m_dup_2 = outC->_L19;
  outC->_L36 = outC->m_dup_2;
  /* _L39=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs#1)/ */
  Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L37,
    outC->_L35,
    outC->_L38,
    outC->_L36,
    outC->_L40,
    outC->_L41,
    &outC->Context_Check2N_PIGs_1);
  outC->_L39 = outC->Context_Check2N_PIGs_1.valid;
  /* _L33=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#2)/ */
  CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L3,
    &outC->Context_CheckTelegramHeader_2);
  outC->_L33 = outC->Context_CheckTelegramHeader_2.isConsistent;
  outC->_L23 = outC->_L3.q_link;
  outC->_L4 = outC->_L1.q_link;
  outC->_L27 = outC->_L4 == outC->_L23;
  outC->_L22 = outC->_L3.nid_bg;
  outC->_L5 = outC->_L1.nid_bg;
  outC->_L28 = outC->_L5 == outC->_L22;
  outC->_L21 = outC->_L3.nid_c;
  outC->_L6 = outC->_L1.nid_c;
  outC->_L29 = outC->_L6 == outC->_L21;
  outC->_L18 = outC->_L3.n_total;
  outC->_L9 = outC->_L1.n_total;
  outC->_L30 = outC->_L9 == outC->_L18;
  outC->_L16 = outC->_L3.q_media;
  outC->_L11 = outC->_L1.q_media;
  outC->_L26 = outC->_L11 == outC->_L16;
  outC->_L15 = outC->_L3.m_version;
  outC->_L12 = outC->_L1.m_version;
  outC->_L25 = outC->_L12 == outC->_L15;
  outC->_L14 = outC->_L3.q_updown;
  outC->_L13 = outC->_L1.q_updown;
  outC->_L24 = outC->_L13 == outC->_L14;
  /* _L32=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */
  CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L1,
    &outC->Context_CheckTelegramHeader_1);
  outC->_L32 = outC->Context_CheckTelegramHeader_1.isConsistent;
  outC->_L31 = outC->_L32 & outC->_L24 & outC->_L25 & outC->_L26 & outC->_L30 &
    outC->_L29 & outC->_L28 & outC->_L27 & outC->_L33 & outC->_L39;
  outC->isConsistent = outC->_L31;
  outC->_L7 = outC->_L1.m_mcount;
  _1_noname = outC->_L7;
  outC->_L20 = outC->_L3.m_mcount;
  noname = outC->_L20;
}

#ifndef KCG_USER_DEFINED_INIT
void Check2Headers_init_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = N_PIG_I_am_the_1st;
  outC->_L37 = N_PIG_I_am_the_1st;
  outC->_L36 = M_DUP_No_duplicates;
  outC->_L35 = M_DUP_No_duplicates;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = Q_LINK_Unlinked;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = M_DUP_No_duplicates;
  outC->_L18 = N_TOTAL_1_balise_in_the_group;
  outC->_L17 = N_PIG_I_am_the_1st;
  outC->_L16 = Q_MEDIA_Balise;
  outC->_L15 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14 = Q_UPDOWN_Down_link_telegram;
  outC->_L4 = Q_LINK_Unlinked;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = M_DUP_No_duplicates;
  outC->_L9 = N_TOTAL_1_balise_in_the_group;
  outC->_L10 = N_PIG_I_am_the_1st;
  outC->_L11 = Q_MEDIA_Balise;
  outC->_L12 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13 = Q_UPDOWN_Down_link_telegram;
  outC->_L3.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.q_media = Q_MEDIA_Balise;
  outC->_L3.n_pig = N_PIG_I_am_the_1st;
  outC->_L3.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.m_dup = M_DUP_No_duplicates;
  outC->_L3.m_mcount = kcg_lit_int64(0);
  outC->_L3.nid_c = kcg_lit_int64(0);
  outC->_L3.nid_bg = kcg_lit_int64(0);
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.q_media = Q_MEDIA_Balise;
  outC->_L1.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.m_dup = M_DUP_No_duplicates;
  outC->_L1.m_mcount = kcg_lit_int64(0);
  outC->_L1.nid_c = kcg_lit_int64(0);
  outC->_L1.nid_bg = kcg_lit_int64(0);
  outC->_L1.q_link = Q_LINK_Unlinked;
  outC->m_dup_2 = M_DUP_No_duplicates;
  outC->n_pig_2 = N_PIG_I_am_the_1st;
  outC->n_pig_1 = N_PIG_I_am_the_1st;
  outC->m_dup_1 = M_DUP_No_duplicates;
  outC->isConsistent = kcg_true;
  /* _L32=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */
  CheckTelegramHeader_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckTelegramHeader_1);
  /* _L33=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#2)/ */
  CheckTelegramHeader_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckTelegramHeader_2);
  /* _L39=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs#1)/ */
  Check2N_PIGs_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Check2N_PIGs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check2Headers_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* _L32=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */
  CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckTelegramHeader_1);
  /* _L33=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#2)/ */
  CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckTelegramHeader_2);
  /* _L39=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs#1)/ */
  Check2N_PIGs_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Check2N_PIGs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Check2Headers_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

