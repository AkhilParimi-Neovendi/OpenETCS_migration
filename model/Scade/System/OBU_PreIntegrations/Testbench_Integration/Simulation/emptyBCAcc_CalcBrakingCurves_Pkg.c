/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "emptyBCAcc_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::emptyBCAcc/ */
void emptyBCAcc_CalcBrakingCurves_Pkg(
  outC_emptyBCAcc_CalcBrakingCurves_Pkg *outC)
{
  /* _L10=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */
  makeEmptyParabolaCurve_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_2);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L10,
    &outC->Context_makeEmptyParabolaCurve_2.Curve);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6.distance = outC->_L7;
  outC->_L6.speed = outC->_L7;
  outC->_L6.distanceIndex = outC->_L8;
  outC->_L6.speedIndex = outC->_L8;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L6.BC, &outC->_L10);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->Output1, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void emptyBCAcc_init_CalcBrakingCurves_Pkg(
  outC_emptyBCAcc_CalcBrakingCurves_Pkg *outC)
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

  for (idx = 0; idx < 114; idx++) {
    outC->_L10.distances[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L10.speeds[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L10.accelerations[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L10.valid[idx3] = kcg_true;
  }
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6.distance = kcg_lit_float64(0.0);
  outC->_L6.speed = kcg_lit_float64(0.0);
  outC->_L6.distanceIndex = kcg_lit_int64(0);
  outC->_L6.speedIndex = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L6.BC.distances[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L6.BC.speeds[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L6.BC.accelerations[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L6.BC.valid[idx7] = kcg_true;
  }
  outC->Output1.distance = kcg_lit_float64(0.0);
  outC->Output1.speed = kcg_lit_float64(0.0);
  outC->Output1.distanceIndex = kcg_lit_int64(0);
  outC->Output1.speedIndex = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->Output1.BC.distances[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->Output1.BC.speeds[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->Output1.BC.accelerations[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->Output1.BC.valid[idx11] = kcg_true;
  }
  /* _L10=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */
  makeEmptyParabolaCurve_init_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void emptyBCAcc_reset_CalcBrakingCurves_Pkg(
  outC_emptyBCAcc_CalcBrakingCurves_Pkg *outC)
{
  /* _L10=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */
  makeEmptyParabolaCurve_reset_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** emptyBCAcc_CalcBrakingCurves_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

