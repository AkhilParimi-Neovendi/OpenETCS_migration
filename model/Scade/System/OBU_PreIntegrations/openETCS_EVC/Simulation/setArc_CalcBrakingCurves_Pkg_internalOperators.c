/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::setArc/ */
void setArc_CalcBrakingCurves_Pkg_internalOperators(
  /* Arc/ */
  ParabolaArc_T_CalcBrakingCurves_types *Arc,
  /* oldBC/ */
  ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  /* index/ */
  kcg_int32 index,
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L36 = index;
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(&outC->_L25, Arc);
  outC->_L29 = outC->_L25.distance;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L1, oldBC);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L4,
    &outC->_L1.distances);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L24,
    &outC->_L4);
  if ((kcg_lit_int32(0) <= outC->_L36) & (outC->_L36 < kcg_lit_int32(114))) {
    outC->_L24[outC->_L36] = outC->_L29;
  }
  outC->_L30 = outC->_L25.speed;
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L5,
    &outC->_L1.speeds);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&outC->_L23, &outC->_L5);
  if ((kcg_lit_int32(0) <= outC->_L36) & (outC->_L36 < kcg_lit_int32(114))) {
    outC->_L23[outC->_L36] = outC->_L30;
  }
  outC->_L31 = outC->_L25.acceleration;
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L6,
    &outC->_L1.accelerations);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L22,
    &outC->_L6);
  if ((kcg_lit_int32(0) <= outC->_L36) & (outC->_L36 < kcg_lit_int32(114))) {
    outC->_L22[outC->_L36] = outC->_L31;
  }
  outC->_L18 = kcg_true;
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L7,
    &outC->_L1.valid);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&outC->_L16, &outC->_L7);
  if ((kcg_lit_int32(0) <= outC->_L36) & (outC->_L36 < kcg_lit_int32(114))) {
    outC->_L16[outC->_L36] = outC->_L18;
  }
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L14.distances,
    &outC->_L24);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L14.speeds,
    &outC->_L23);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L14.accelerations,
    &outC->_L22);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L14.valid,
    &outC->_L16);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->newBC, &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void setArc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;

  outC->_L36 = kcg_lit_int32(0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L24[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L23[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L22[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_lit_float32(0.0);
  outC->_L25.distance = kcg_lit_float32(0.0);
  outC->_L25.speed = kcg_lit_float32(0.0);
  outC->_L25.acceleration = kcg_lit_float32(0.0);
  outC->_L18 = kcg_true;
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L16[idx3] = kcg_true;
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L14.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L14.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L14.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L14.valid[idx7] = kcg_true;
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L7[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L6[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L5[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L4[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L1.distances[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L1.speeds[idx13] = kcg_lit_float32(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L1.accelerations[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L1.valid[idx15] = kcg_true;
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->newBC.distances[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->newBC.speeds[idx17] = kcg_lit_float32(0.0);
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->newBC.accelerations[idx18] = kcg_lit_float32(0.0);
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->newBC.valid[idx19] = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setArc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

