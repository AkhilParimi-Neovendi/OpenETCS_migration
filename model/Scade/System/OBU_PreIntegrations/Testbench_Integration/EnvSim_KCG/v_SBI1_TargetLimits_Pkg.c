/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI1/ */
void v_SBI1_TargetLimits_Pkg(
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* D_estfront/ */
  L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* D_EOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* t_driver/ */
  T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_SBI1_TargetLimits_Pkg *outC)
{
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  static kcg_bool _1_op_call;
  static V_internal_real_Type_SDM_Types_Pkg _2_op_call;
  static kcg_bool _3_op_call;
  static kcg_bool noname;

  outC->_L1 = V_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L3, T);
  outC->_L13 = outC->_L3.bs1;
  outC->_L14 = t_driver;
  outC->_L15 = outC->_L14 + outC->_L13;
  outC->_L7 = outC->_L15 * outC->_L1;
  outC->_L2 = D_estfront;
  outC->_L8 = outC->_L2 + outC->_L7;
  outC->_L9 = D_EOA;
  outC->_L12 = outC->_L9 > outC->_L8;
  outC->every1 = outC->_L12;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L6, SBDcurve);
  if (outC->every1) {
    /* _L4=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
    getSpeedOnCurve_CalcBrakingCurves_types(
      &outC->_L6,
      outC->_L8,
      &outC->Context_getSpeedOnCurve_1);
    _1_op_call = outC->Context_getSpeedOnCurve_1.valid;
    op_call = outC->Context_getSpeedOnCurve_1.speed;
  }
  outC->_L21 = guiCurveEnabled;
  outC->every = outC->_L21;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L22, GUIcurve);
  outC->_L23 = D_estfront;
  if (outC->every) {
    /* _L19=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */
    getSpeedOnCurve_CalcBrakingCurves_types(
      &outC->_L22,
      outC->_L23,
      &outC->Context_getSpeedOnCurve_2);
    _3_op_call = outC->Context_getSpeedOnCurve_2.valid;
    _2_op_call = outC->Context_getSpeedOnCurve_2.speed;
  }
  if (outC->every1) {
    outC->_L4 = _1_op_call;
    outC->_L5 = op_call;
  }
  else {
    outC->_L4 = kcg_false;
    outC->_L5 = kcg_lit_float64(0.0);
  }
  if (outC->every) {
    outC->_L19 = _3_op_call;
    outC->_L20 = _2_op_call;
  }
  else {
    outC->_L19 = kcg_false;
    outC->_L20 = kcg_lit_float64(0.0);
  }
  /* _L16=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_TargetLimits_Pkg(
    outC->_L4,
    outC->_L5,
    outC->_L19,
    outC->_L20,
    &outC->Context_selectLEValid_1);
  outC->_L16 = outC->Context_selectLEValid_1.isUpper;
  outC->_L17 = outC->Context_selectLEValid_1.valid;
  outC->_L18 = outC->Context_selectLEValid_1.o;
  noname = outC->_L16;
  outC->V_SBI1 = outC->_L18;
  outC->valid = outC->_L17;
}

#ifndef KCG_USER_DEFINED_INIT
void v_SBI1_init_TargetLimits_Pkg(outC_v_SBI1_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L23 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L22.distances[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L22.speeds[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L22.accelerations[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L22.valid[idx3] = kcg_true;
  }
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L6.distances[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L6.speeds[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L6.accelerations[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L6.valid[idx7] = kcg_true;
  }
  outC->_L3.Traction = kcg_lit_float64(0.0);
  outC->_L3.berem = kcg_lit_float64(0.0);
  outC->_L3.bs = kcg_lit_float64(0.0);
  outC->_L3.bs1 = kcg_lit_float64(0.0);
  outC->_L3.bs2 = kcg_lit_float64(0.0);
  outC->_L3.inhComp = kcg_true;
  outC->_L3.indication = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->V_SBI1 = kcg_lit_float64(0.0);
  outC->valid = kcg_true;
  /* _L16=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_init_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L19=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */
  getSpeedOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_2);
  /* _L4=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
  getSpeedOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void v_SBI1_reset_TargetLimits_Pkg(outC_v_SBI1_TargetLimits_Pkg *outC)
{
  /* _L16=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_reset_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L19=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */
  getSpeedOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_2);
  /* _L4=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
  getSpeedOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_SBI1_TargetLimits_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

