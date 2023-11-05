/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "f_41_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::f_41/ */
void f_41_TargetLimits_Pkg(
  /* v_in/ */
  V_internal_real_Type_SDM_Types_Pkg v_in,
  outC_f_41_TargetLimits_Pkg *outC)
{
  outC->_L5 = kcg_lit_float32(30.0) / kcg_lit_float32(3.6);
  outC->_L2 = v_in;
  outC->_L9 = outC->_L2 - outC->_L5;
  /* _L13=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_SDM_Types_Pkg(outC->_L9, &outC->Context_limitPositive_1);
  outC->_L13 = outC->Context_limitPositive_1.limited;
  outC->_L1 = kcg_lit_float32(2.0) / kcg_lit_float32(3.6);
  outC->_L8 = kcg_lit_float32(10.0) / (kcg_lit_float32(500.0) - kcg_lit_float32(
        30.0)) / kcg_lit_float32(3.6);
  outC->_L10 = outC->_L13 * outC->_L8;
  outC->_L11 = outC->_L10 + outC->_L1;
  outC->v_out = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void f_41_init_TargetLimits_Pkg(outC_f_41_TargetLimits_Pkg *outC)
{
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->v_out = kcg_lit_float32(0.0);
  /* _L13=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_init_SDM_Types_Pkg(&outC->Context_limitPositive_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void f_41_reset_TargetLimits_Pkg(outC_f_41_TargetLimits_Pkg *outC)
{
  /* _L13=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_reset_SDM_Types_Pkg(&outC->Context_limitPositive_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** f_41_TargetLimits_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

