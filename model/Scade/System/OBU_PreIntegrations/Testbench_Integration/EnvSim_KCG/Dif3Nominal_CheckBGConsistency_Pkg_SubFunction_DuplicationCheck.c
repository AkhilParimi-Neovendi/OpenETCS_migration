/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal/ */
void Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* m_dup_1/ */
  M_DUP m_dup_1,
  /* m_dup_2/ */
  M_DUP m_dup_2,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L36 = crcCheck_2;
  outC->_L35 = crcCheck_1;
  outC->_L9 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L5 = m_dup_2;
  outC->_L6 = outC->_L5 == outC->_L9;
  outC->_L7 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L3 = m_dup_1;
  outC->_L4 = outC->_L3 == outC->_L7;
  outC->_L10 = outC->_L4 & outC->_L6 & outC->_L35 & outC->_L36;
  outC->valid = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void Dif3Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
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
void Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

