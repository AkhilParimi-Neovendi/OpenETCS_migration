/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int/ */
void N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
  /* n_pig/ */
  N_PIG n_pig,
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L3 = kcg_lit_int64(1);
  outC->_L4 = kcg_lit_int64(2);
  outC->_L5 = kcg_lit_int64(3);
  outC->_L6 = kcg_lit_int64(4);
  outC->_L7 = kcg_lit_int64(5);
  outC->_L8 = kcg_lit_int64(6);
  outC->_L9 = kcg_lit_int64(7);
  outC->_L10 = kcg_lit_int64(8);
  outC->_L2 = n_pig;
  /* _L1= */
  switch (outC->_L2) {
    case N_PIG_I_am_the_1st :
      outC->_L1 = outC->_L3;
      break;
    case N_PIG_I_am_the_2nd :
      outC->_L1 = outC->_L4;
      break;
    case N_PIG_I_am_the_3rd :
      outC->_L1 = outC->_L5;
      break;
    case N_PIG_I_am_the_4th :
      outC->_L1 = outC->_L6;
      break;
    case N_PIG_I_am_the_5th :
      outC->_L1 = outC->_L7;
      break;
    case N_PIG_I_am_the_6th :
      outC->_L1 = outC->_L8;
      break;
    case N_PIG_I_am_the_7th :
      outC->_L1 = outC->_L9;
      break;
    case N_PIG_I_am_the_8th :
      outC->_L1 = outC->_L10;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->n_pig2int = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void N_PIG2int_init_CheckBGConsistency_Pkg_SubFunction(
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = N_PIG_I_am_the_1st;
  outC->_L1 = kcg_lit_int64(0);
  outC->n_pig2int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** N_PIG2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

