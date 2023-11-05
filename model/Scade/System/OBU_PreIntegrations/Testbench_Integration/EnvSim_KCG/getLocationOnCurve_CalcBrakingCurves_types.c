/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurve/ */
void getLocationOnCurve_CalcBrakingCurves_types(
  /* curve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* speed/ */
  V_internal_real_Type_SDM_Types_Pkg speed,
  outC_getLocationOnCurve_CalcBrakingCurves_types *outC)
{
  static kcg_size idx;
  static kcg_int32 acc;
  static kcg_size idx1;
  static kcg_bool op_call;
  static L_internal_real_Type_SDM_Types_Pkg _2_op_call;
  static kcg_int32 noname;

  outC->_L17 = kcg_lit_int32(-1);
  outC->_L2 = speed;
  /* _L15/ */
  for (idx = 0; idx < 114; idx++) {
    outC->_L15[idx] = outC->_L2;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L1, curve);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L25,
    &outC->_L1.speeds);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L27,
    &outC->_L1.valid);
  outC->_L45 = kcg_true;
  outC->_L43 = outC->_L17;
  /* _L44= */
  if (outC->_L45) {
    /* _L44= */
    for (idx1 = 0; idx1 < 114; idx1++) {
      acc = outC->_L43;
      outC->_L112_searchIdxFloorBackward_1[idx1] = kcg_lit_float32(0.0);
      outC->_L74_searchIdxFloorBackward_1[idx1] = outC->_L25[idx1];
      outC->_L90_searchIdxFloorBackward_1[idx1] = outC->_L27[idx1];
      /* @1/_L111= */
      if (outC->_L90_searchIdxFloorBackward_1[idx1]) {
        outC->_L111_searchIdxFloorBackward_1[idx1] =
          outC->_L74_searchIdxFloorBackward_1[idx1];
      }
      else {
        outC->_L111_searchIdxFloorBackward_1[idx1] =
          outC->_L112_searchIdxFloorBackward_1[idx1];
      }
      outC->_L40_searchIdxFloorBackward_1[idx1] = outC->_L15[idx1];
      outC->_L115_searchIdxFloorBackward_1[idx1] =
        outC->_L40_searchIdxFloorBackward_1[idx1] >=
        outC->_L111_searchIdxFloorBackward_1[idx1];
      outC->_L114_searchIdxFloorBackward_1[idx1] =
        !outC->_L115_searchIdxFloorBackward_1[idx1];
      outC->_L86_searchIdxFloorBackward_1[idx1] = /* _L44= */(kcg_int32) idx1;
      outC->_L8_searchIdxFloorBackward_1[idx1] = acc;
      /* @1/_L84= */
      if (outC->_L115_searchIdxFloorBackward_1[idx1]) {
        outC->_L84_searchIdxFloorBackward_1[idx1] =
          outC->_L86_searchIdxFloorBackward_1[idx1];
      }
      else {
        outC->_L84_searchIdxFloorBackward_1[idx1] =
          outC->_L8_searchIdxFloorBackward_1[idx1];
      }
      outC->_L43 = outC->_L84_searchIdxFloorBackward_1[idx1];
      outC->_L44 = /* _L44= */(kcg_int32) (idx1 + 1);
      /* _L44= */
      if (!outC->_L114_searchIdxFloorBackward_1[idx1]) {
        break;
      }
    }
  }
  else {
    outC->_L44 = kcg_lit_int32(0);
  }
  outC->idx = outC->_L43;
  outC->_L39 = outC->idx;
  if ((kcg_lit_int32(0) <= outC->_L39) & (outC->_L39 < kcg_lit_int32(114))) {
    outC->_L30 = outC->_L27[outC->_L39];
  }
  else {
    outC->_L30 = kcg_false;
  }
  outC->every = outC->_L30;
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L24,
    &outC->_L1.distances);
  if ((kcg_lit_int32(0) <= outC->_L39) & (outC->_L39 < kcg_lit_int32(114))) {
    outC->_L31 = outC->_L24[outC->_L39];
  }
  else {
    outC->_L31 = kcg_lit_float32(0.0);
  }
  if ((kcg_lit_int32(0) <= outC->_L39) & (outC->_L39 < kcg_lit_int32(114))) {
    outC->_L28 = outC->_L25[outC->_L39];
  }
  else {
    outC->_L28 = kcg_lit_float32(0.0);
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L26,
    &outC->_L1.accelerations);
  if ((kcg_lit_int32(0) <= outC->_L39) & (outC->_L39 < kcg_lit_int32(114))) {
    outC->_L34 = outC->_L26[outC->_L39];
  }
  else {
    outC->_L34 = kcg_lit_float32(0.0);
  }
  outC->_L32.distance = outC->_L31;
  outC->_L32.speed = outC->_L28;
  outC->_L32.acceleration = outC->_L34;
  outC->_L36 = speed;
  if (outC->every) {
    /* _L35=(CalcBrakingCurves_types::getLocationOnCurveArc#1)/ */
    getLocationOnCurveArc_CalcBrakingCurves_types(
      &outC->_L32,
      outC->_L36,
      &outC->Context_getLocationOnCurveArc_1);
    _2_op_call = outC->Context_getLocationOnCurveArc_1.location;
    op_call = outC->Context_getLocationOnCurveArc_1.valid;
  }
  noname = outC->_L44;
  if (outC->every) {
    outC->_L35 = _2_op_call;
    outC->_L40 = op_call;
  }
  else {
    outC->_L35 = kcg_lit_float32(0.0);
    outC->_L40 = kcg_false;
  }
  outC->valid = outC->_L40;
  outC->location = outC->_L35;
}

#ifndef KCG_USER_DEFINED_INIT
void getLocationOnCurve_init_CalcBrakingCurves_types(
  outC_getLocationOnCurve_CalcBrakingCurves_types *outC)
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

  outC->_L45 = kcg_true;
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_lit_int32(0);
  outC->_L36 = kcg_lit_float32(0.0);
  outC->_L35 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L27[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L26[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L25[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L24[idx3] = kcg_lit_float32(0.0);
  }
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L30 = kcg_true;
  outC->_L31 = kcg_lit_float32(0.0);
  outC->_L32.distance = kcg_lit_float32(0.0);
  outC->_L32.speed = kcg_lit_float32(0.0);
  outC->_L32.acceleration = kcg_lit_float32(0.0);
  outC->_L34 = kcg_lit_float32(0.0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L15[idx4] = kcg_lit_float32(0.0);
  }
  outC->_L17 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_float32(0.0);
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L1.distances[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L1.speeds[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L1.accelerations[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L1.valid[idx8] = kcg_true;
  }
  outC->idx = kcg_lit_int32(0);
  outC->every = kcg_true;
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L8_searchIdxFloorBackward_1[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L40_searchIdxFloorBackward_1[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L84_searchIdxFloorBackward_1[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L74_searchIdxFloorBackward_1[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L86_searchIdxFloorBackward_1[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L90_searchIdxFloorBackward_1[idx14] = kcg_true;
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L111_searchIdxFloorBackward_1[idx15] = kcg_lit_float32(0.0);
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L112_searchIdxFloorBackward_1[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->_L114_searchIdxFloorBackward_1[idx17] = kcg_true;
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->_L115_searchIdxFloorBackward_1[idx18] = kcg_true;
  }
  outC->location = kcg_lit_float32(0.0);
  outC->valid = kcg_true;
  /* _L35=(CalcBrakingCurves_types::getLocationOnCurveArc#1)/ */
  getLocationOnCurveArc_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurveArc_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getLocationOnCurve_reset_CalcBrakingCurves_types(
  outC_getLocationOnCurve_CalcBrakingCurves_types *outC)
{
  /* _L35=(CalcBrakingCurves_types::getLocationOnCurveArc#1)/ */
  getLocationOnCurveArc_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurveArc_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: CalcBrakingCurves_types::getLocationOnCurve/
  @1: (CalcBrakingCurves_types::searchIdxFloorBackward#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLocationOnCurve_CalcBrakingCurves_types.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

