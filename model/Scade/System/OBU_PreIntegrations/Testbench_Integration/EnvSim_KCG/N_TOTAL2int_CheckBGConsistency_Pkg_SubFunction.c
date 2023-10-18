/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int/ */
void N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
  /* n_total/ */
  N_TOTAL n_total,
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L9 = kcg_lit_int64(1);
  outC->_L7 = kcg_lit_int64(2);
  outC->_L2 = kcg_lit_int64(3);
  outC->_L1 = kcg_lit_int64(4);
  outC->_L10 = kcg_lit_int64(5);
  outC->_L4 = kcg_lit_int64(6);
  outC->_L6 = kcg_lit_int64(7);
  outC->_L8 = kcg_lit_int64(8);
  outC->_L11 = n_total;
  /* _L3= */
  switch (outC->_L11) {
    case N_TOTAL_1_balise_in_the_group :
      outC->_L3 = outC->_L9;
      break;
    case N_TOTAL_2_balises_in_the_group :
      outC->_L3 = outC->_L7;
      break;
    case N_TOTAL_3_balises_in_the_group :
      outC->_L3 = outC->_L2;
      break;
    case N_TOTAL_4_balises_in_the_group :
      outC->_L3 = outC->_L1;
      break;
    case N_TOTAL_5_balises_in_the_group :
      outC->_L3 = outC->_L10;
      break;
    case N_TOTAL_6_balises_in_the_group :
      outC->_L3 = outC->_L4;
      break;
    case N_TOTAL_7_balises_in_the_group :
      outC->_L3 = outC->_L6;
      break;
    case N_TOTAL_8_balises_in_the_group :
      outC->_L3 = outC->_L8;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->n_total2int = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void N_TOTAL2int_init_CheckBGConsistency_Pkg_SubFunction(
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L11 = N_TOTAL_1_balise_in_the_group;
  outC->_L1 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->n_total2int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

