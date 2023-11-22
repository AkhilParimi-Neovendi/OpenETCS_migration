/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_P_target_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_P_target/ */
void d_P_target_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_P_target_TargetLimits_Pkg *outC)
{
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L14, T);
  outC->_L9 = T_driver_SDM_Types_Pkg;
  outC->_L5 = V_target;
  outC->_L11 = outC->_L5 * outC->_L9;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L6, EBDcurve);
  /* _L13=(TargetLimits_Pkg::d_EBI_non_est#1)/ */
  d_EBI_non_est_TargetLimits_Pkg(
    outC->_L5,
    &outC->_L6,
    &outC->_L14,
    &outC->Context_d_EBI_non_est_1);
  outC->_L13 = outC->Context_d_EBI_non_est_1.D_SBI2;
  outC->_L4 = outC->Context_d_EBI_non_est_1.valid;
  outC->_L12 = outC->_L13 - outC->_L11;
  outC->D_P_target = outC->_L12;
  outC->valid = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void d_P_target_init_TargetLimits_Pkg(outC_d_P_target_TargetLimits_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L14.Traction = kcg_lit_float32(0.0);
  outC->_L14.berem = kcg_lit_float32(0.0);
  outC->_L14.bs = kcg_lit_float32(0.0);
  outC->_L14.bs1 = kcg_lit_float32(0.0);
  outC->_L14.bs2 = kcg_lit_float32(0.0);
  outC->_L14.inhComp = kcg_true;
  outC->_L14.indication = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L6.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L6.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L6.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L6.valid[idx3] = kcg_true;
  }
  outC->D_P_target = kcg_lit_float32(0.0);
  outC->valid = kcg_true;
  /* _L13=(TargetLimits_Pkg::d_EBI_non_est#1)/ */
  d_EBI_non_est_init_TargetLimits_Pkg(&outC->Context_d_EBI_non_est_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_P_target_reset_TargetLimits_Pkg(outC_d_P_target_TargetLimits_Pkg *outC)
{
  /* _L13=(TargetLimits_Pkg::d_EBI_non_est#1)/ */
  d_EBI_non_est_reset_TargetLimits_Pkg(&outC->Context_d_EBI_non_est_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_P_target_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

