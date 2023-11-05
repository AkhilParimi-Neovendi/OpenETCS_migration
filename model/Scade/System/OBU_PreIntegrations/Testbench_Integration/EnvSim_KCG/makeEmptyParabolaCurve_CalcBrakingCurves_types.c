/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::makeEmptyParabolaCurve/ */
void makeEmptyParabolaCurve_CalcBrakingCurves_types(
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_false;
  /* _L16/ */
  for (idx = 0; idx < 114; idx++) {
    outC->_L16[idx] = outC->_L18;
  }
  /* _L14/ */
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L14[idx1] = outC->_L19;
  }
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L13.distances,
    &outC->_L14);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L13.speeds,
    &outC->_L14);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L13.accelerations,
    &outC->_L14);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L13.valid,
    &outC->_L16);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->Curve, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void makeEmptyParabolaCurve_init_CalcBrakingCurves_types(
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types *outC)
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

  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_true;
  for (idx = 0; idx < 114; idx++) {
    outC->_L16[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L14[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L13.distances[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L13.speeds[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L13.accelerations[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L13.valid[idx5] = kcg_true;
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->Curve.distances[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->Curve.speeds[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->Curve.accelerations[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->Curve.valid[idx9] = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void makeEmptyParabolaCurve_reset_CalcBrakingCurves_types(
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** makeEmptyParabolaCurve_CalcBrakingCurves_types.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

