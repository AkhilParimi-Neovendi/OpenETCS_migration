/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurve/ */
void getSpeedOnCurve_CalcBrakingCurves_types(
  /* curve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  outC_getSpeedOnCurve_CalcBrakingCurves_types *outC)
{
  static kcg_size idx;
  static kcg_int64 acc;
  static kcg_size idx1;
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  static kcg_int64 noname;

  outC->_L5 = kcg_lit_int64(-1);
  outC->_L18 = position;
  /* _L16/ */
  for (idx = 0; idx < 114; idx++) {
    outC->_L16[idx] = outC->_L18;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L13, curve);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L7,
    &outC->_L13.distances);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L10,
    &outC->_L13.valid);
  outC->_L22 = kcg_true;
  outC->_L20 = outC->_L5;
  /* _L21= */
  if (outC->_L22) {
    /* _L21= */
    for (idx1 = 0; idx1 < 114; idx1++) {
      acc = outC->_L20;
      outC->_L90_searchIdxFloor_1[idx1] = kcg_lit_float64(0.0);
      outC->_L74_searchIdxFloor_1[idx1] = outC->_L7[idx1];
      outC->_L88_searchIdxFloor_1[idx1] = outC->_L10[idx1];
      /* @1/_L89= */
      if (outC->_L88_searchIdxFloor_1[idx1]) {
        outC->_L89_searchIdxFloor_1[idx1] = outC->_L74_searchIdxFloor_1[idx1];
      }
      else {
        outC->_L89_searchIdxFloor_1[idx1] = outC->_L90_searchIdxFloor_1[idx1];
      }
      outC->_L40_searchIdxFloor_1[idx1] = outC->_L16[idx1];
      outC->_L77_searchIdxFloor_1[idx1] = outC->_L40_searchIdxFloor_1[idx1] <=
        outC->_L89_searchIdxFloor_1[idx1];
      outC->_L93_searchIdxFloor_1[idx1] = !outC->_L77_searchIdxFloor_1[idx1];
      outC->_L92_searchIdxFloor_1[idx1] = !outC->_L77_searchIdxFloor_1[idx1];
      outC->_L86_searchIdxFloor_1[idx1] = /* _L21= */(kcg_int64) idx1;
      outC->_L8_searchIdxFloor_1[idx1] = acc;
      /* @1/_L84= */
      if (outC->_L93_searchIdxFloor_1[idx1]) {
        outC->_L84_searchIdxFloor_1[idx1] = outC->_L8_searchIdxFloor_1[idx1];
      }
      else {
        outC->_L84_searchIdxFloor_1[idx1] = outC->_L86_searchIdxFloor_1[idx1];
      }
      outC->_L20 = outC->_L84_searchIdxFloor_1[idx1];
      outC->_L21 = /* _L21= */(kcg_int64) (idx1 + 1);
      /* _L21= */
      if (!outC->_L92_searchIdxFloor_1[idx1]) {
        break;
      }
    }
  }
  else {
    outC->_L21 = kcg_lit_int64(0);
  }
  outC->idx = outC->_L20;
  outC->_L14 = outC->idx;
  if ((kcg_lit_int64(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int64(114))) {
    outC->_L12 = outC->_L10[outC->_L14];
  }
  else {
    outC->_L12 = kcg_false;
  }
  outC->_L25 = kcg_lit_float64(0.0);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L9,
    &outC->_L13.accelerations);
  if ((kcg_lit_int64(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int64(114))) {
    outC->_L6 = outC->_L9[outC->_L14];
  }
  else {
    outC->_L6 = kcg_lit_float64(0.0);
  }
  outC->_L24 = outC->_L6 >= outC->_L25;
  outC->_L23 = outC->_L24 & outC->_L12;
  outC->every = outC->_L23;
  if ((kcg_lit_int64(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int64(114))) {
    outC->_L11 = outC->_L7[outC->_L14];
  }
  else {
    outC->_L11 = kcg_lit_float64(0.0);
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L8,
    &outC->_L13.speeds);
  if ((kcg_lit_int64(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int64(114))) {
    outC->_L2 = outC->_L8[outC->_L14];
  }
  else {
    outC->_L2 = kcg_lit_float64(0.0);
  }
  outC->_L17.distance = outC->_L11;
  outC->_L17.speed = outC->_L2;
  outC->_L17.acceleration = outC->_L6;
  outC->_L19 = position;
  if (outC->every) {
    /* _L15=(CalcBrakingCurves_types::getSpeedOnCurveArc#1)/ */
    getSpeedOnCurveArc_CalcBrakingCurves_types(
      &outC->_L17,
      outC->_L19,
      &outC->Context_getSpeedOnCurveArc_1);
    op_call = outC->Context_getSpeedOnCurveArc_1.speed;
  }
  noname = outC->_L21;
  if (outC->every) {
    outC->_L15 = op_call;
  }
  else {
    outC->_L15 = kcg_lit_float64(0.0);
  }
  outC->speed = outC->_L15;
  outC->valid = outC->_L23;
}

#ifndef KCG_USER_DEFINED_INIT
void getSpeedOnCurve_init_CalcBrakingCurves_types(
  outC_getSpeedOnCurve_CalcBrakingCurves_types *outC)
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
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;

  outC->_L24 = kcg_true;
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L10[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L9[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L8[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L7[idx3] = kcg_lit_float64(0.0);
  }
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_true;
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L13.distances[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L13.speeds[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L13.accelerations[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L13.valid[idx7] = kcg_true;
  }
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_float64(0.0);
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L16[idx8] = kcg_lit_float64(0.0);
  }
  outC->_L17.distance = kcg_lit_float64(0.0);
  outC->_L17.speed = kcg_lit_float64(0.0);
  outC->_L17.acceleration = kcg_lit_float64(0.0);
  outC->idx = kcg_lit_int64(0);
  outC->every = kcg_true;
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L8_searchIdxFloor_1[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L40_searchIdxFloor_1[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L77_searchIdxFloor_1[idx11] = kcg_true;
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L84_searchIdxFloor_1[idx12] = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L74_searchIdxFloor_1[idx13] = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L86_searchIdxFloor_1[idx14] = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L88_searchIdxFloor_1[idx15] = kcg_true;
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L89_searchIdxFloor_1[idx16] = kcg_lit_float64(0.0);
  }
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->_L90_searchIdxFloor_1[idx17] = kcg_lit_float64(0.0);
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->_L92_searchIdxFloor_1[idx18] = kcg_true;
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->_L93_searchIdxFloor_1[idx19] = kcg_true;
  }
  outC->speed = kcg_lit_float64(0.0);
  outC->valid = kcg_true;
  /* _L15=(CalcBrakingCurves_types::getSpeedOnCurveArc#1)/ */
  getSpeedOnCurveArc_init_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurveArc_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getSpeedOnCurve_reset_CalcBrakingCurves_types(
  outC_getSpeedOnCurve_CalcBrakingCurves_types *outC)
{
  /* _L15=(CalcBrakingCurves_types::getSpeedOnCurveArc#1)/ */
  getSpeedOnCurveArc_reset_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurveArc_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: CalcBrakingCurves_types::getSpeedOnCurve/
  @1: (CalcBrakingCurves_types::searchIdxFloor#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getSpeedOnCurve_CalcBrakingCurves_types.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

