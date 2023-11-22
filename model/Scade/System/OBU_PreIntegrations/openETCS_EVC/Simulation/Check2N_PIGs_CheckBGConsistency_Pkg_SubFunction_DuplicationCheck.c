/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs/ */
void Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* n_pig_1/ */
  N_PIG n_pig_1,
  /* m_dup_1/ */
  M_DUP m_dup_1,
  /* n_pig_2/ */
  N_PIG n_pig_2,
  /* m_dup_2/ */
  M_DUP m_dup_2,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L45 = crcCheck_1;
  outC->_L44 = crcCheck_2;
  outC->_L43 = crcCheck_1;
  outC->_L42 = crcCheck_2;
  outC->_L41 = crcCheck_1;
  outC->_L40 = crcCheck_2;
  outC->_L39 = crcCheck_2;
  outC->_L38 = crcCheck_1;
  outC->_L37 = crcCheck_2;
  outC->_L36 = crcCheck_1;
  outC->_L35 = crcCheck_2;
  outC->_L34 = crcCheck_1;
  outC->_L33 = m_dup_1;
  outC->_L32 = m_dup_2;
  outC->_L31 = m_dup_1;
  outC->_L30 = m_dup_2;
  outC->_L29 = m_dup_2;
  outC->_L28 = m_dup_1;
  /* _L27=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#2)/ */
  Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L32,
    outC->_L33,
    outC->_L44,
    outC->_L45,
    &outC->Context_Dif3Nominal_2);
  outC->_L27 = outC->Context_Dif3Nominal_2.valid;
  /* _L26=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#2)/ */
  Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L30,
    outC->_L31,
    outC->_L42,
    outC->_L43,
    &outC->Context_Dif2Nominal_2);
  outC->_L26 = outC->Context_Dif2Nominal_2.valid;
  /* _L25=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#2)/ */
  Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L29,
    outC->_L28,
    outC->_L40,
    outC->_L41,
    &outC->Context_Dif1Nominal_2);
  outC->_L25 = outC->Context_Dif1Nominal_2.valid;
  outC->_L24 = m_dup_2;
  outC->_L23 = m_dup_1;
  /* _L22=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#1)/ */
  Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L23,
    outC->_L24,
    outC->_L38,
    outC->_L39,
    &outC->Context_Dif3Nominal_1);
  outC->_L22 = outC->Context_Dif3Nominal_1.valid;
  outC->_L21 = m_dup_2;
  outC->_L20 = m_dup_1;
  outC->_L19 = m_dup_2;
  outC->_L18 = m_dup_1;
  /* _L17=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#1)/ */
  Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L20,
    outC->_L21,
    outC->_L36,
    outC->_L37,
    &outC->Context_Dif2Nominal_1);
  outC->_L17 = outC->Context_Dif2Nominal_1.valid;
  outC->_L16 = kcg_false;
  /* _L15=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#1)/ */
  Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L18,
    outC->_L19,
    outC->_L34,
    outC->_L35,
    &outC->Context_Dif1Nominal_1);
  outC->_L15 = outC->Context_Dif1Nominal_1.valid;
  outC->_L1 = n_pig_1;
  /* _L3=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L1,
    &outC->Context_N_PIG2int_1);
  outC->_L3 = outC->Context_N_PIG2int_1.n_pig2int;
  outC->_L2 = n_pig_2;
  /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#2)/ */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L2,
    &outC->Context_N_PIG2int_2);
  outC->_L4 = outC->Context_N_PIG2int_2.n_pig2int;
  outC->_L5 = outC->_L4 - outC->_L3;
  /* _L7= */
  switch (outC->_L5) {
    case kcg_lit_int32(1) :
      outC->_L7 = outC->_L15;
      break;
    case kcg_lit_int32(2) :
      outC->_L7 = outC->_L17;
      break;
    case kcg_lit_int32(3) :
      outC->_L7 = outC->_L22;
      break;
    case kcg_lit_int32(-1) :
      outC->_L7 = outC->_L25;
      break;
    case kcg_lit_int32(-2) :
      outC->_L7 = outC->_L26;
      break;
    case kcg_lit_int32(-3) :
      outC->_L7 = outC->_L27;
      break;
    default :
      outC->_L7 = outC->_L16;
      break;
  }
  outC->valid = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void Check2N_PIGs_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L32 = M_DUP_No_duplicates;
  outC->_L33 = M_DUP_No_duplicates;
  outC->_L30 = M_DUP_No_duplicates;
  outC->_L31 = M_DUP_No_duplicates;
  outC->_L28 = M_DUP_No_duplicates;
  outC->_L29 = M_DUP_No_duplicates;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L23 = M_DUP_No_duplicates;
  outC->_L24 = M_DUP_No_duplicates;
  outC->_L22 = kcg_true;
  outC->_L20 = M_DUP_No_duplicates;
  outC->_L21 = M_DUP_No_duplicates;
  outC->_L19 = M_DUP_No_duplicates;
  outC->_L18 = M_DUP_No_duplicates;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = N_PIG_I_am_the_1st;
  outC->_L1 = N_PIG_I_am_the_1st;
  outC->valid = kcg_true;
  /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#2)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_N_PIG2int_2);
  /* _L3=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_N_PIG2int_1);
  /* _L15=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#1)/ */
  Dif1Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif1Nominal_1);
  /* _L17=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#1)/ */
  Dif2Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif2Nominal_1);
  /* _L22=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#1)/ */
  Dif3Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif3Nominal_1);
  /* _L25=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#2)/ */
  Dif1Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif1Nominal_2);
  /* _L26=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#2)/ */
  Dif2Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif2Nominal_2);
  /* _L27=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#2)/ */
  Dif3Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif3Nominal_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check2N_PIGs_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#2)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_2);
  /* _L3=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_N_PIG2int_1);
  /* _L15=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#1)/ */
  Dif1Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif1Nominal_1);
  /* _L17=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#1)/ */
  Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif2Nominal_1);
  /* _L22=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#1)/ */
  Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif3Nominal_1);
  /* _L25=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#2)/ */
  Dif1Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif1Nominal_2);
  /* _L26=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#2)/ */
  Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif2Nominal_2);
  /* _L27=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#2)/ */
  Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_Dif3Nominal_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

