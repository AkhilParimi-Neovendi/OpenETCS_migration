/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal/ */
void Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* m_dup_1/ */
  M_DUP m_dup_1,
  /* m_dup_2/ */
  M_DUP m_dup_2,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L27 = M_DUP_No_duplicates;
  outC->_L29 = m_dup_2;
  outC->_L28 = outC->_L29 == outC->_L27;
  outC->_L38 = crcCheck_2;
  outC->_L39 = outC->_L38 & outC->_L28;
  outC->_L37 = crcCheck_2;
  outC->_L36 = crcCheck_2;
  outC->_L35 = crcCheck_1;
  outC->_L30 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L32 = m_dup_2;
  outC->_L31 = outC->_L32 == outC->_L30;
  outC->_L33 = outC->_L39 | outC->_L31;
  outC->_L23 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L19 = m_dup_1;
  outC->_L24 = outC->_L19 == outC->_L23;
  outC->_L34 = outC->_L24 & outC->_L33;
  outC->_L26 = M_DUP_No_duplicates;
  outC->_L11 = m_dup_2;
  outC->_L15 = outC->_L11 == outC->_L26;
  outC->_L13 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L14 = m_dup_1;
  outC->_L17 = outC->_L14 == outC->_L13;
  outC->_L12 = outC->_L17 & outC->_L15 & outC->_L37;
  outC->_L9 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L5 = m_dup_2;
  outC->_L6 = outC->_L5 == outC->_L9;
  outC->_L7 = M_DUP_No_duplicates;
  outC->_L3 = m_dup_1;
  outC->_L4 = outC->_L3 == outC->_L7;
  outC->_L10 = outC->_L4 & outC->_L6 & outC->_L35 & outC->_L36;
  outC->_L25 = outC->_L10 | outC->_L12 | outC->_L34;
  outC->valid = outC->_L25;
}

#ifndef KCG_USER_DEFINED_INIT
void Dif2Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L30 = M_DUP_No_duplicates;
  outC->_L31 = kcg_true;
  outC->_L32 = M_DUP_No_duplicates;
  outC->_L27 = M_DUP_No_duplicates;
  outC->_L28 = kcg_true;
  outC->_L29 = M_DUP_No_duplicates;
  outC->_L26 = M_DUP_No_duplicates;
  outC->_L25 = kcg_true;
  outC->_L19 = M_DUP_No_duplicates;
  outC->_L23 = M_DUP_No_duplicates;
  outC->_L24 = kcg_true;
  outC->_L11 = M_DUP_No_duplicates;
  outC->_L12 = kcg_true;
  outC->_L13 = M_DUP_No_duplicates;
  outC->_L14 = M_DUP_No_duplicates;
  outC->_L15 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = M_DUP_No_duplicates;
  outC->_L3 = M_DUP_No_duplicates;
  outC->_L4 = kcg_true;
  outC->_L5 = M_DUP_No_duplicates;
  outC->_L6 = kcg_true;
  outC->_L7 = M_DUP_No_duplicates;
  outC->valid = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

