/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup/ */
void CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* telegramHeader_in/ */
  TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L29 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L22, telegramHeader_in);
  outC->_L33 = outC->_L22.m_dup;
  outC->_L34 = outC->_L33 == outC->_L29;
  outC->_L15 = kcg_lit_int32(2);
  outC->_L21 = outC->_L22.n_pig;
  /* _L20=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L21,
    &outC->Context_N_PIG2int_3);
  outC->_L20 = outC->Context_N_PIG2int_3.n_pig2int;
  outC->_L16 = outC->_L20 == outC->_L15;
  outC->_L35 = outC->_L16 & outC->_L34;
  outC->_L24 = kcg_lit_int32(1);
  outC->_L23 = outC->_L22.n_total;
  /* _L18=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#3)/ */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L23,
    &outC->Context_N_TOTAL2int_3);
  outC->_L18 = outC->Context_N_TOTAL2int_3.n_total2int;
  outC->_L25 = outC->_L18 - outC->_L24;
  outC->_L19 = outC->_L25 == outC->_L20;
  outC->_L26 = outC->_L22.m_dup;
  outC->_L28 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L31 = outC->_L28 == outC->_L26;
  outC->_L32 = outC->_L31 & outC->_L19;
  outC->_L17 = outC->_L32 | outC->_L35;
  outC->isTheFirst = outC->_L17;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckFirstTelDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = M_DUP_No_duplicates;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L29 = M_DUP_No_duplicates;
  outC->_L28 = M_DUP_No_duplicates;
  outC->_L26 = M_DUP_No_duplicates;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = N_PIG_I_am_the_1st;
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
  outC->_L23 = N_TOTAL_1_balise_in_the_group;
  outC->isTheFirst = kcg_true;
  /* _L18=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#3)/ */
  N_TOTAL2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_3);
  /* _L20=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_N_PIG2int_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  /* _L18=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#3)/ */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_3);
  /* _L20=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

