/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_EBI_non_est/ */
void d_EBI_non_est_TargetLimits_Pkg(
  /* V/ */
  V_internal_real_Type_SDM_Types_Pkg V,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_EBI_non_est_TargetLimits_Pkg *outC)
{
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  static T_internal_real_Type_SDM_Types_Pkg noname;
  static T_internal_real_Type_SDM_Types_Pkg _1_noname;
  static T_internal_real_Type_SDM_Types_Pkg _2_noname;

  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L13, T);
  outC->_L30 = outC->_L13.inhComp;
  outC->_L19 = !outC->_L30;
  outC->every = outC->_L19;
  outC->_L1 = V;
  if (outC->every) {
    /* _L5=(TargetLimits_Pkg::f_41#1)/ */
    f_41_TargetLimits_Pkg(outC->_L1, &outC->Context_f_41_1);
    op_call = outC->Context_f_41_1.v_out;
  }
  outC->_L31 = outC->_L13.indication;
  _2_noname = outC->_L31;
  outC->_L28 = outC->_L13.bs1;
  _1_noname = outC->_L28;
  outC->_L27 = outC->_L13.bs;
  noname = outC->_L27;
  outC->_L25 = outC->_L13.Traction;
  outC->_L26 = outC->_L13.berem;
  outC->_L29 = outC->_L13.bs2;
  outC->_L16 = V;
  outC->_L15 = outC->_L16 * outC->_L29;
  outC->_L9 = outC->_L25 + outC->_L26;
  if (outC->every) {
    outC->_L5 = op_call;
  }
  else {
    outC->_L5 = kcg_lit_float64(0.0);
  }
  outC->_L6 = outC->_L5 + outC->_L1;
  outC->_L10 = outC->_L6 * outC->_L9;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L2, EBDcurve);
  /* _L3=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_CalcBrakingCurves_types(
    &outC->_L2,
    outC->_L6,
    &outC->Context_getLocationOnCurve_1);
  outC->_L3 = outC->Context_getLocationOnCurve_1.valid;
  outC->_L4 = outC->Context_getLocationOnCurve_1.location;
  outC->_L12 = outC->_L4 - outC->_L10;
  outC->_L14 = outC->_L12 - outC->_L15;
  outC->D_SBI2 = outC->_L14;
  outC->valid = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void d_EBI_non_est_init_TargetLimits_Pkg(
  outC_d_EBI_non_est_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_true;
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_true;
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L13.Traction = kcg_lit_float64(0.0);
  outC->_L13.berem = kcg_lit_float64(0.0);
  outC->_L13.bs = kcg_lit_float64(0.0);
  outC->_L13.bs1 = kcg_lit_float64(0.0);
  outC->_L13.bs2 = kcg_lit_float64(0.0);
  outC->_L13.inhComp = kcg_true;
  outC->_L13.indication = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L2.distances[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L2.speeds[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L2.accelerations[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L2.valid[idx3] = kcg_true;
  }
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_lit_float64(0.0);
  outC->every = kcg_true;
  outC->valid = kcg_true;
  outC->D_SBI2 = kcg_lit_float64(0.0);
  /* _L3=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
  /* _L5=(TargetLimits_Pkg::f_41#1)/ */
  f_41_init_TargetLimits_Pkg(&outC->Context_f_41_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_EBI_non_est_reset_TargetLimits_Pkg(
  outC_d_EBI_non_est_TargetLimits_Pkg *outC)
{
  /* _L3=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
  /* _L5=(TargetLimits_Pkg::f_41#1)/ */
  f_41_reset_TargetLimits_Pkg(&outC->Context_f_41_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_EBI_non_est_TargetLimits_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

