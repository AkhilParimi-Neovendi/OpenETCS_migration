/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI1/ */
void d_SBI1_TargetLimits_Pkg(
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* V/ */
  V_internal_real_Type_SDM_Types_Pkg V,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_SBI1_TargetLimits_Pkg *outC)
{
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L3, T);
  outC->_L8 = outC->_L3.bs1;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L1, SBDcurve);
  outC->_L2 = V;
  /* _L4=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_CalcBrakingCurves_types(
    &outC->_L1,
    outC->_L2,
    &outC->Context_getLocationOnCurve_1);
  outC->_L4 = outC->Context_getLocationOnCurve_1.valid;
  outC->_L5 = outC->Context_getLocationOnCurve_1.location;
  outC->_L6 = outC->_L2 * outC->_L8;
  outC->_L7 = outC->_L5 - outC->_L6;
  outC->D_SBD1 = outC->_L7;
  outC->valid = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void d_SBI1_init_TargetLimits_Pkg(outC_d_SBI1_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L3.Traction = kcg_lit_float64(0.0);
  outC->_L3.berem = kcg_lit_float64(0.0);
  outC->_L3.bs = kcg_lit_float64(0.0);
  outC->_L3.bs1 = kcg_lit_float64(0.0);
  outC->_L3.bs2 = kcg_lit_float64(0.0);
  outC->_L3.inhComp = kcg_true;
  outC->_L3.indication = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L1.distances[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L1.speeds[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L1.accelerations[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L1.valid[idx3] = kcg_true;
  }
  outC->D_SBD1 = kcg_lit_float64(0.0);
  outC->valid = kcg_true;
  /* _L4=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_SBI1_reset_TargetLimits_Pkg(outC_d_SBI1_TargetLimits_Pkg *outC)
{
  /* _L4=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_SBI1_TargetLimits_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

