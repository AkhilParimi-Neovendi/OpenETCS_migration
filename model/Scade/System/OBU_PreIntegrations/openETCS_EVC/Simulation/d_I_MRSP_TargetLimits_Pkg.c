/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_I_MRSP_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_I_MRSP/ */
void d_I_MRSP_TargetLimits_Pkg(
  /* V_MRSP/ */
  V_internal_real_Type_SDM_Types_Pkg V_MRSP,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_I_MRSP_TargetLimits_Pkg *outC)
{
  outC->_L21 = T_driver_SDM_Types_Pkg;
  outC->_L30 = V_MRSP;
  outC->_L20 = outC->_L30 * outC->_L21;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L13, EBDcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L10, T);
  /* _L32=(TargetLimits_Pkg::d_EBI_non_est#1)/ */
  d_EBI_non_est_TargetLimits_Pkg(
    outC->_L30,
    &outC->_L13,
    &outC->_L10,
    &outC->Context_d_EBI_non_est_1);
  outC->_L32 = outC->Context_d_EBI_non_est_1.D_SBI2;
  outC->_L8 = outC->Context_d_EBI_non_est_1.valid;
  outC->_L18 = outC->_L32 - outC->_L20;
  outC->I2_Min_1_float32 = outC->_L18;
  outC->_L22_Min_1_float32 = outC->I2_Min_1_float32;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L31, GUIcurve);
  /* _L27=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */
  getLocationOnCurve_CalcBrakingCurves_types(
    &outC->_L31,
    outC->_L30,
    &outC->Context_getLocationOnCurve_3);
  outC->_L27 = outC->Context_getLocationOnCurve_3.valid;
  outC->_L28 = outC->Context_getLocationOnCurve_3.location;
  outC->I1_Min_1_float32 = outC->_L28;
  outC->_L21_Min_1_float32 = outC->I1_Min_1_float32;
  outC->_L25_Min_1_float32 = outC->_L21_Min_1_float32 <= outC->_L22_Min_1_float32;
  /* @1/_L24= */
  if (outC->_L25_Min_1_float32) {
    outC->_L24_Min_1_float32 = outC->_L21_Min_1_float32;
  }
  else {
    outC->_L24_Min_1_float32 = outC->_L22_Min_1_float32;
  }
  outC->Mi_Output_Min_1_float32 = outC->_L24_Min_1_float32;
  outC->_L44 = outC->_L10.indication;
  outC->_L37 = V_MRSP;
  outC->_L34 = outC->_L37 * outC->_L44;
  outC->_L22 = outC->Mi_Output_Min_1_float32;
  outC->_L17 = guiCurveEnabled;
  outC->_L29 = outC->_L17 & outC->_L27;
  /* _L16= */
  if (outC->_L29) {
    outC->_L16 = outC->_L22;
  }
  else {
    outC->_L16 = outC->_L18;
  }
  outC->_L33 = outC->_L16 - outC->_L34;
  outC->valid = outC->_L8;
  outC->D_I = outC->_L33;
}

#ifndef KCG_USER_DEFINED_INIT
void d_I_MRSP_init_TargetLimits_Pkg(outC_d_I_MRSP_TargetLimits_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L44 = kcg_lit_float32(0.0);
  outC->_L37 = kcg_lit_float32(0.0);
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L33 = kcg_lit_float32(0.0);
  outC->_L32 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L31.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L31.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L31.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L31.valid[idx3] = kcg_true;
  }
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_lit_float32(0.0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L13.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L13.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L13.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L13.valid[idx7] = kcg_true;
  }
  outC->_L10.Traction = kcg_lit_float32(0.0);
  outC->_L10.berem = kcg_lit_float32(0.0);
  outC->_L10.bs = kcg_lit_float32(0.0);
  outC->_L10.bs1 = kcg_lit_float32(0.0);
  outC->_L10.bs2 = kcg_lit_float32(0.0);
  outC->_L10.inhComp = kcg_true;
  outC->_L10.indication = kcg_lit_float32(0.0);
  outC->_L8 = kcg_true;
  outC->_L21_Min_1_float32 = kcg_lit_float32(0.0);
  outC->_L22_Min_1_float32 = kcg_lit_float32(0.0);
  outC->_L24_Min_1_float32 = kcg_lit_float32(0.0);
  outC->_L25_Min_1_float32 = kcg_true;
  outC->I1_Min_1_float32 = kcg_lit_float32(0.0);
  outC->I2_Min_1_float32 = kcg_lit_float32(0.0);
  outC->Mi_Output_Min_1_float32 = kcg_lit_float32(0.0);
  outC->D_I = kcg_lit_float32(0.0);
  outC->valid = kcg_true;
  /* _L27=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_3);
  /* _L32=(TargetLimits_Pkg::d_EBI_non_est#1)/ */
  d_EBI_non_est_init_TargetLimits_Pkg(&outC->Context_d_EBI_non_est_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_I_MRSP_reset_TargetLimits_Pkg(outC_d_I_MRSP_TargetLimits_Pkg *outC)
{
  /* _L27=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_3);
  /* _L32=(TargetLimits_Pkg::d_EBI_non_est#1)/ */
  d_EBI_non_est_reset_TargetLimits_Pkg(&outC->Context_d_EBI_non_est_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TargetLimits_Pkg::d_I_MRSP/
  @1: (math::Min#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_I_MRSP_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

