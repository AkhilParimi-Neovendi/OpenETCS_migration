/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI2/ */
void d_SBI2_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* bec/ */
  bec_t_TargetLimits_Pkg *bec,
  /* v_est/ */
  V_internal_real_Type_SDM_Types_Pkg v_est,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_SBI2_TargetLimits_Pkg *outC)
{
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L87, T);
  outC->_L94 = outC->_L87.bs2;
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->_L83, bec);
  outC->_L92 = outC->_L83.v;
  outC->_L93 = outC->_L83.d;
  outC->_L89 = v_est;
  outC->_L88 = outC->_L89 * outC->_L94;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L71, EBDcurve);
  /* _L82=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_CalcBrakingCurves_types(
    &outC->_L71,
    outC->_L92,
    &outC->Context_getLocationOnCurve_1);
  outC->_L82 = outC->Context_getLocationOnCurve_1.valid;
  outC->_L70 = outC->Context_getLocationOnCurve_1.location;
  outC->_L85 = outC->_L70 - outC->_L93;
  outC->_L86 = outC->_L85 - outC->_L88;
  outC->D_SBI2 = outC->_L86;
  outC->valid = outC->_L82;
}

#ifndef KCG_USER_DEFINED_INIT
void d_SBI2_init_TargetLimits_Pkg(outC_d_SBI2_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L94 = kcg_lit_float32(0.0);
  outC->_L92 = kcg_lit_float32(0.0);
  outC->_L93 = kcg_lit_float32(0.0);
  outC->_L89 = kcg_lit_float32(0.0);
  outC->_L86 = kcg_lit_float32(0.0);
  outC->_L87.Traction = kcg_lit_float32(0.0);
  outC->_L87.berem = kcg_lit_float32(0.0);
  outC->_L87.bs = kcg_lit_float32(0.0);
  outC->_L87.bs1 = kcg_lit_float32(0.0);
  outC->_L87.bs2 = kcg_lit_float32(0.0);
  outC->_L87.inhComp = kcg_true;
  outC->_L87.indication = kcg_lit_float32(0.0);
  outC->_L88 = kcg_lit_float32(0.0);
  outC->_L85 = kcg_lit_float32(0.0);
  outC->_L83.v = kcg_lit_float32(0.0);
  outC->_L83.d = kcg_lit_float32(0.0);
  outC->_L82 = kcg_true;
  outC->_L70 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L71.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L71.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L71.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L71.valid[idx3] = kcg_true;
  }
  outC->D_SBI2 = kcg_lit_float32(0.0);
  outC->valid = kcg_true;
  /* _L82=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_SBI2_reset_TargetLimits_Pkg(outC_d_SBI2_TargetLimits_Pkg *outC)
{
  /* _L82=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_SBI2_TargetLimits_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

