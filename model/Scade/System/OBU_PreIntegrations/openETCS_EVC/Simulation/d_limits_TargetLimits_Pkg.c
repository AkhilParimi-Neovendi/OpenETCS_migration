/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_limits_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_limits/ */
void d_limits_TargetLimits_Pkg(
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* SBI2valid/ */
  kcg_bool SBI2valid,
  /* D_SBI2_V_est/ */
  L_internal_real_Type_SDM_Types_Pkg D_SBI2_V_est,
  /* D_estfront/ */
  L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* D_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  outC_d_limits_TargetLimits_Pkg *outC)
{
  L_internal_real_Type_SDM_Types_Pkg op_call;
  kcg_bool _1_op_call;
  kcg_bool noname;
  kcg_bool _2_noname;

  outC->_L27 = guiCurveEnabled;
  outC->every = outC->_L27;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L26, GUIcurve);
  outC->_L30 = V_est;
  if (outC->every) {
    /* _L28=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
    getLocationOnCurve_CalcBrakingCurves_types(
      &outC->_L26,
      outC->_L30,
      &outC->Context_getLocationOnCurve_1);
    _1_op_call = outC->Context_getLocationOnCurve_1.valid;
    op_call = outC->Context_getLocationOnCurve_1.location;
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L25, T);
  outC->_L39 = outC->_L25.indication;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L44, SBDcurve);
  outC->_L43 = V_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L42, T);
  /* _L40=(TargetLimits_Pkg::d_SBI1#1)/ */
  d_SBI1_TargetLimits_Pkg(
    &outC->_L44,
    outC->_L43,
    &outC->_L42,
    &outC->Context_d_SBI1_1);
  outC->_L40 = outC->Context_d_SBI1_1.valid;
  outC->_L41 = outC->Context_d_SBI1_1.D_SBD1;
  outC->_L33 = kcg_true;
  outC->_L16 = T_driver_SDM_Types_Pkg;
  outC->_L15 = V_est;
  outC->_L14 = outC->_L15 * outC->_L16;
  outC->_L10 = D_SBI2_V_est;
  outC->_L2 = D_estfront;
  outC->_L6 = outC->_L41 - outC->_L2;
  outC->_L36 = SBI2valid;
  outC->_L4 = D_maxsafefront;
  outC->_L3 = D_SBI2_V_est;
  outC->_L7 = outC->_L3 - outC->_L4;
  /* _L11=(TargetLimits_Pkg::isLEValid#2)/ */
  isLEValid_TargetLimits_Pkg(
    outC->_L40,
    outC->_L6,
    outC->_L36,
    outC->_L7,
    &outC->Context_isLEValid_2);
  outC->_L11 = outC->Context_isLEValid_2.result;
  /* _L8= */
  if (outC->_L11) {
    outC->_L8 = outC->_L41;
  }
  else {
    outC->_L8 = outC->_L10;
  }
  outC->_L18 = outC->_L8 - outC->_L14;
  if (outC->every) {
    outC->_L28 = _1_op_call;
    outC->_L29 = op_call;
  }
  else {
    outC->_L28 = kcg_false;
    outC->_L29 = kcg_lit_float32(0.0);
  }
  /* _L31=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_TargetLimits_Pkg(
    outC->_L33,
    outC->_L18,
    outC->_L28,
    outC->_L29,
    &outC->Context_selectLEValid_1);
  outC->_L31 = outC->Context_selectLEValid_1.isUpper;
  outC->_L37 = outC->Context_selectLEValid_1.valid;
  outC->_L38 = outC->Context_selectLEValid_1.o;
  _2_noname = outC->_L37;
  noname = outC->_L31;
  outC->_L34 = V_est;
  outC->FLOIisSBI1 = outC->_L11;
  outC->_L20 = outC->_L34 * outC->_L39;
  outC->_L19 = outC->_L38 - outC->_L20;
  outC->D_I = outC->_L19;
  outC->D_P = outC->_L38;
  outC->_L13 = T_warning_SDM_Types_Pkg;
  outC->_L12 = outC->_L13 * outC->_L15;
  outC->_L17 = outC->_L8 - outC->_L12;
  outC->D_W = outC->_L17;
  outC->D_FLOI = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void d_limits_init_TargetLimits_Pkg(outC_d_limits_TargetLimits_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L25.Traction = kcg_lit_float32(0.0);
  outC->_L25.berem = kcg_lit_float32(0.0);
  outC->_L25.bs = kcg_lit_float32(0.0);
  outC->_L25.bs1 = kcg_lit_float32(0.0);
  outC->_L25.bs2 = kcg_lit_float32(0.0);
  outC->_L25.inhComp = kcg_true;
  outC->_L25.indication = kcg_lit_float32(0.0);
  outC->_L39 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L44.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L44.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L44.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L44.valid[idx3] = kcg_true;
  }
  outC->_L43 = kcg_lit_float32(0.0);
  outC->_L42.Traction = kcg_lit_float32(0.0);
  outC->_L42.berem = kcg_lit_float32(0.0);
  outC->_L42.bs = kcg_lit_float32(0.0);
  outC->_L42.bs1 = kcg_lit_float32(0.0);
  outC->_L42.bs2 = kcg_lit_float32(0.0);
  outC->_L42.inhComp = kcg_true;
  outC->_L42.indication = kcg_lit_float32(0.0);
  outC->_L41 = kcg_lit_float32(0.0);
  outC->_L40 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L38 = kcg_lit_float32(0.0);
  outC->_L36 = kcg_true;
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L33 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L26.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L26.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L26.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L26.valid[idx7] = kcg_true;
  }
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L17 = kcg_lit_float32(0.0);
  outC->_L16 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->every = kcg_true;
  outC->FLOIisSBI1 = kcg_true;
  outC->D_FLOI = kcg_lit_float32(0.0);
  outC->D_W = kcg_lit_float32(0.0);
  outC->D_P = kcg_lit_float32(0.0);
  outC->D_I = kcg_lit_float32(0.0);
  /* _L31=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_init_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L11=(TargetLimits_Pkg::isLEValid#2)/ */
  isLEValid_init_TargetLimits_Pkg(&outC->Context_isLEValid_2);
  /* _L40=(TargetLimits_Pkg::d_SBI1#1)/ */
  d_SBI1_init_TargetLimits_Pkg(&outC->Context_d_SBI1_1);
  /* _L28=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_limits_reset_TargetLimits_Pkg(outC_d_limits_TargetLimits_Pkg *outC)
{
  /* _L31=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_reset_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L11=(TargetLimits_Pkg::isLEValid#2)/ */
  isLEValid_reset_TargetLimits_Pkg(&outC->Context_isLEValid_2);
  /* _L40=(TargetLimits_Pkg::d_SBI1#1)/ */
  d_SBI1_reset_TargetLimits_Pkg(&outC->Context_d_SBI1_1);
  /* _L28=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_limits_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

