/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI2/ */
void v_SBI2_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* bec/ */
  bec_t_TargetLimits_Pkg *bec,
  /* D_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* t_driver/ */
  T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_SBI2_TargetLimits_Pkg *outC)
{
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  static kcg_bool _1_op_call;
  static V_internal_real_Type_SDM_Types_Pkg _2_op_call;
  static kcg_bool _3_op_call;
  static L_internal_real_Type_SDM_Types_Pkg _4_op_call;
  static kcg_bool _5_op_call;
  static kcg_bool noname;
  static kcg_bool _6_noname;

  kcg_copy_bec_t_TargetLimits_Pkg(&outC->_L15, bec);
  outC->_L28 = outC->_L15.d;
  outC->_L32 = t_driver;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L7, T);
  outC->_L29 = outC->_L7.bs2;
  outC->_L30 = outC->_L29 + outC->_L32;
  outC->_L6 = V_est;
  outC->_L8 = outC->_L6 * outC->_L30;
  outC->_L4 = D_maxsafefront;
  outC->_L5 = outC->_L4 + outC->_L8 + outC->_L28;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L20, EBDcurve);
  outC->_L21 = V_target;
  /* _L18=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_CalcBrakingCurves_types(
    &outC->_L20,
    outC->_L21,
    &outC->Context_getLocationOnCurve_1);
  outC->_L18 = outC->Context_getLocationOnCurve_1.valid;
  outC->_L19 = outC->Context_getLocationOnCurve_1.location;
  outC->_L11 = outC->_L19 > outC->_L5;
  outC->_L36 = D_maxsafefront;
  outC->_L41 = guiCurveEnabled;
  outC->every = outC->_L41;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L56, GUIcurve);
  outC->_L57 = V_target;
  if (outC->every) {
    /* _L54=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */
    getLocationOnCurve_CalcBrakingCurves_types(
      &outC->_L56,
      outC->_L57,
      &outC->Context_getLocationOnCurve_3);
    _5_op_call = outC->Context_getLocationOnCurve_3.valid;
    _4_op_call = outC->Context_getLocationOnCurve_3.location;
    outC->_L55 = _4_op_call;
  }
  else {
    outC->_L55 = kcg_lit_float64(0.0);
  }
  outC->_L35 = outC->_L55 > outC->_L36;
  if (outC->every) {
    outC->_L54 = _5_op_call;
  }
  else {
    outC->_L54 = kcg_false;
  }
  outC->_L44 = outC->_L54 & outC->_L35;
  outC->_L33 = outC->_L44 | outC->_L11;
  outC->every2 = outC->_L33;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L17, EBDcurve);
  if (outC->every2) {
    /* _L1=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
    getSpeedOnCurve_CalcBrakingCurves_types(
      &outC->_L17,
      outC->_L5,
      &outC->Context_getSpeedOnCurve_1);
    _1_op_call = outC->Context_getSpeedOnCurve_1.valid;
    op_call = outC->Context_getSpeedOnCurve_1.speed;
  }
  outC->_L45 = outC->_L54 & outC->_L33;
  outC->every1 = outC->_L45;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L42, GUIcurve);
  outC->_L43 = D_maxsafefront;
  if (outC->every1) {
    /* _L39=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */
    getSpeedOnCurve_CalcBrakingCurves_types(
      &outC->_L42,
      outC->_L43,
      &outC->Context_getSpeedOnCurve_2);
    _3_op_call = outC->Context_getSpeedOnCurve_2.valid;
    _2_op_call = outC->Context_getSpeedOnCurve_2.speed;
  }
  outC->_L51 = !outC->_L33;
  if (outC->every1) {
    outC->_L39 = _3_op_call;
    outC->_L40 = _2_op_call;
  }
  else {
    outC->_L39 = kcg_false;
    outC->_L40 = kcg_lit_float64(0.0);
  }
  if (outC->every2) {
    outC->_L1 = _1_op_call;
  }
  else {
    outC->_L1 = kcg_false;
  }
  outC->_L14 = V_est;
  outC->_L27 = outC->_L15.v;
  outC->_L13 = outC->_L27 - outC->_L14;
  if (outC->every2) {
    outC->_L2 = op_call;
  }
  else {
    outC->_L2 = kcg_lit_float64(0.0);
  }
  outC->_L16 = outC->_L2 - outC->_L13;
  /* _L47=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_TargetLimits_Pkg(
    outC->_L39,
    outC->_L40,
    outC->_L1,
    outC->_L16,
    &outC->Context_selectLEValid_1);
  outC->_L47 = outC->Context_selectLEValid_1.isUpper;
  outC->_L48 = outC->Context_selectLEValid_1.valid;
  outC->_L49 = outC->Context_selectLEValid_1.o;
  _6_noname = outC->_L47;
  outC->_L50 = outC->_L51 | outC->_L48;
  outC->valid = outC->_L50;
  outC->_L3 = V_target;
  /* _L24= */
  if (outC->_L33) {
    outC->_L24 = outC->_L49;
  }
  else {
    outC->_L24 = outC->_L3;
  }
  noname = outC->_L18;
  outC->V_SBI2 = outC->_L24;
}

#ifndef KCG_USER_DEFINED_INIT
void v_SBI2_init_TargetLimits_Pkg(outC_v_SBI2_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;

  outC->_L57 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L56.distances[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L56.speeds[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L56.accelerations[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L56.valid[idx3] = kcg_true;
  }
  outC->_L55 = kcg_lit_float64(0.0);
  outC->_L54 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L49 = kcg_lit_float64(0.0);
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L42.distances[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L42.speeds[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L42.accelerations[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L42.valid[idx7] = kcg_true;
  }
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_true;
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L20.distances[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L20.speeds[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L20.accelerations[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L20.valid[idx11] = kcg_true;
  }
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_float64(0.0);
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L17.distances[idx12] = kcg_lit_float64(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L17.speeds[idx13] = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L17.accelerations[idx14] = kcg_lit_float64(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L17.valid[idx15] = kcg_true;
  }
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15.v = kcg_lit_float64(0.0);
  outC->_L15.d = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_true;
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7.Traction = kcg_lit_float64(0.0);
  outC->_L7.berem = kcg_lit_float64(0.0);
  outC->_L7.bs = kcg_lit_float64(0.0);
  outC->_L7.bs1 = kcg_lit_float64(0.0);
  outC->_L7.bs2 = kcg_lit_float64(0.0);
  outC->_L7.inhComp = kcg_true;
  outC->_L7.indication = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->every2 = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->V_SBI2 = kcg_lit_float64(0.0);
  outC->valid = kcg_true;
  /* _L47=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_init_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L39=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */
  getSpeedOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_2);
  /* _L1=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
  getSpeedOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_1);
  /* _L54=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_3);
  /* _L18=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void v_SBI2_reset_TargetLimits_Pkg(outC_v_SBI2_TargetLimits_Pkg *outC)
{
  /* _L47=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_reset_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L39=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */
  getSpeedOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_2);
  /* _L1=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
  getSpeedOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_1);
  /* _L54=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_3);
  /* _L18=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_SBI2_TargetLimits_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

