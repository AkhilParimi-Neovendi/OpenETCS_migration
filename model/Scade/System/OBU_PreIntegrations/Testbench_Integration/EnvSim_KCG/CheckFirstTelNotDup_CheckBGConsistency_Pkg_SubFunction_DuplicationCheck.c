/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup/ */
void CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* telegramHeader_in/ */
  TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L9 = kcg_lit_int64(1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L1, telegramHeader_in);
  outC->_L3 = outC->_L1.n_pig;
  /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L3,
    &outC->Context_N_PIG2int_1);
  outC->_L4 = outC->Context_N_PIG2int_1.n_pig2int;
  outC->_L8 = outC->_L4 == outC->_L9;
  outC->_L2 = outC->_L1.n_total;
  /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L2,
    &outC->Context_N_TOTAL2int_1);
  outC->_L5 = outC->Context_N_TOTAL2int_1.n_total2int;
  outC->_L6 = outC->_L5 == outC->_L4;
  outC->_L7 = outC->_L6 | outC->_L8;
  outC->isTheFirst = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckFirstTelNotDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = N_PIG_I_am_the_1st;
  outC->_L2 = N_TOTAL_1_balise_in_the_group;
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
  outC->isTheFirst = kcg_true;
  /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_1);
  /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_N_PIG2int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_TOTAL2int_1);
  /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

