/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_RSM_start_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_RSM_start/ */
void d_RSM_start_TargetLimits_Pkg(
  /* V_release/ */
  V_internal_real_Type_SDM_Types_Pkg V_release,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* d_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* d_est/ */
  L_internal_real_Type_SDM_Types_Pkg d_est,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_RSM_start_TargetLimits_Pkg *outC)
{
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L26, T);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L13, SBDcurve);
  outC->_L14 = V_release;
  /* _L11=(TargetLimits_Pkg::d_SBI1#1)/ */
  d_SBI1_TargetLimits_Pkg(
    &outC->_L13,
    outC->_L14,
    &outC->_L26,
    &outC->Context_d_SBI1_1);
  outC->_L11 = outC->Context_d_SBI1_1.valid;
  outC->_L12 = outC->Context_d_SBI1_1.D_SBD1;
  outC->valid_SBI1 = outC->_L11;
  outC->_L7 = V_release;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L10, EBDcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L8, T);
  /* _L22=(TargetLimits_Pkg::d_EBI_non_est#2)/ */
  d_EBI_non_est_TargetLimits_Pkg(
    outC->_L7,
    &outC->_L10,
    &outC->_L8,
    &outC->Context_d_EBI_non_est_2);
  outC->_L22 = outC->Context_d_EBI_non_est_2.D_SBI2;
  outC->_L5 = outC->Context_d_EBI_non_est_2.valid;
  outC->valid_SBI2 = outC->_L5;
  outC->_L19 = d_est;
  outC->_L18 = d_maxsafefront;
  outC->_L20 = outC->_L18 - outC->_L19;
  outC->_L16 = outC->_L22 - outC->_L12;
  /* _L24=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_TargetLimits_Pkg(
    outC->_L5,
    outC->_L20,
    outC->_L11,
    outC->_L16,
    &outC->Context_isLEValid_1);
  outC->_L24 = outC->Context_isLEValid_1.result;
  /* _L21= */
  if (outC->_L24) {
    outC->_L21 = outC->_L12;
  }
  else {
    outC->_L21 = outC->_L22;
  }
  outC->D_FLOI = outC->_L21;
  outC->D_SBI2 = outC->_L22;
  outC->D_SBI1 = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void d_RSM_start_init_TargetLimits_Pkg(outC_d_RSM_start_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L26.Traction = kcg_lit_float32(0.0);
  outC->_L26.berem = kcg_lit_float32(0.0);
  outC->_L26.bs = kcg_lit_float32(0.0);
  outC->_L26.bs1 = kcg_lit_float32(0.0);
  outC->_L26.bs2 = kcg_lit_float32(0.0);
  outC->_L26.inhComp = kcg_true;
  outC->_L26.indication = kcg_lit_float32(0.0);
  outC->_L24 = kcg_true;
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L16 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L13.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L13.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L13.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L13.valid[idx3] = kcg_true;
  }
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_true;
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L8.Traction = kcg_lit_float32(0.0);
  outC->_L8.berem = kcg_lit_float32(0.0);
  outC->_L8.bs = kcg_lit_float32(0.0);
  outC->_L8.bs1 = kcg_lit_float32(0.0);
  outC->_L8.bs2 = kcg_lit_float32(0.0);
  outC->_L8.inhComp = kcg_true;
  outC->_L8.indication = kcg_lit_float32(0.0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L10.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L10.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L10.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L10.valid[idx7] = kcg_true;
  }
  outC->valid_SBI1 = kcg_true;
  outC->valid_SBI2 = kcg_true;
  outC->D_SBI1 = kcg_lit_float32(0.0);
  outC->D_SBI2 = kcg_lit_float32(0.0);
  outC->D_FLOI = kcg_lit_float32(0.0);
  /* _L24=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_init_TargetLimits_Pkg(&outC->Context_isLEValid_1);
  /* _L22=(TargetLimits_Pkg::d_EBI_non_est#2)/ */
  d_EBI_non_est_init_TargetLimits_Pkg(&outC->Context_d_EBI_non_est_2);
  /* _L11=(TargetLimits_Pkg::d_SBI1#1)/ */
  d_SBI1_init_TargetLimits_Pkg(&outC->Context_d_SBI1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_RSM_start_reset_TargetLimits_Pkg(outC_d_RSM_start_TargetLimits_Pkg *outC)
{
  /* _L24=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_reset_TargetLimits_Pkg(&outC->Context_isLEValid_1);
  /* _L22=(TargetLimits_Pkg::d_EBI_non_est#2)/ */
  d_EBI_non_est_reset_TargetLimits_Pkg(&outC->Context_d_EBI_non_est_2);
  /* _L11=(TargetLimits_Pkg::d_SBI1#1)/ */
  d_SBI1_reset_TargetLimits_Pkg(&outC->Context_d_SBI1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_RSM_start_TargetLimits_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

