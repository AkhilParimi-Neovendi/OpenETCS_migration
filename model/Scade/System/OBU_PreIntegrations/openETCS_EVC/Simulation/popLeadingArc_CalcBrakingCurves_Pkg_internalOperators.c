/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc/ */
void popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(
  /* oldBC/ */
  ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L42 = kcg_lit_float32(0.0);
  /* _L41/ */
  for (idx = 0; idx < 1; idx++) {
    outC->_L41[idx] = outC->_L42;
  }
  outC->_L39 = kcg_lit_float32(0.0);
  /* _L40/ */
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L40[idx1] = outC->_L39;
  }
  outC->_L27 = kcg_lit_float32(0.0);
  /* _L28/ */
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L28[idx2] = outC->_L27;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L1, oldBC);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L4,
    &outC->_L1.distances);
  kcg_copy_array_float32_113(&outC->_L26, (array_float32_113 *) &outC->_L4[1]);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L5,
    &outC->_L1.speeds);
  kcg_copy_array_float32_113(&outC->_L25, (array_float32_113 *) &outC->_L5[1]);
  kcg_copy_array_float32_113(&outC->_L24[0], &outC->_L26);
  outC->_L24[113] = outC->_L41[0];
  kcg_copy_array_float32_113(&outC->_L23[0], &outC->_L25);
  outC->_L23[113] = outC->_L40[0];
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L6,
    &outC->_L1.accelerations);
  kcg_copy_array_float32_113(&outC->_L19, (array_float32_113 *) &outC->_L6[1]);
  kcg_copy_array_float32_113(&outC->_L22[0], &outC->_L19);
  outC->_L22[113] = outC->_L28[0];
  outC->_L18 = kcg_false;
  /* _L17/ */
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L17[idx3] = outC->_L18;
  }
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L7,
    &outC->_L1.valid);
  kcg_copy_array_bool_113(&outC->_L15, (array_bool_113 *) &outC->_L7[1]);
  kcg_copy_array_bool_113(&outC->_L16[0], &outC->_L15);
  outC->_L16[113] = outC->_L17[0];
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
void popLeadingArc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators *outC)
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
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;

  for (idx = 0; idx < 1; idx++) {
    outC->_L41[idx] = kcg_lit_float32(0.0);
  }
  outC->_L42 = kcg_lit_float32(0.0);
  outC->_L39 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L40[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L28[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L27 = kcg_lit_float32(0.0);
  for (idx3 = 0; idx3 < 113; idx3++) {
    outC->_L26[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 113; idx4++) {
    outC->_L25[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L24[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L23[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L22[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 113; idx8++) {
    outC->_L19[idx8] = kcg_lit_float32(0.0);
  }
  outC->_L18 = kcg_true;
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L17[idx9] = kcg_true;
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L16[idx10] = kcg_true;
  }
  for (idx11 = 0; idx11 < 113; idx11++) {
    outC->_L15[idx11] = kcg_true;
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L14.distances[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L14.speeds[idx13] = kcg_lit_float32(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L14.accelerations[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L14.valid[idx15] = kcg_true;
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L7[idx16] = kcg_true;
  }
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->_L6[idx17] = kcg_lit_float32(0.0);
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->_L5[idx18] = kcg_lit_float32(0.0);
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->_L4[idx19] = kcg_lit_float32(0.0);
  }
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->_L1.distances[idx20] = kcg_lit_float32(0.0);
  }
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->_L1.speeds[idx21] = kcg_lit_float32(0.0);
  }
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->_L1.accelerations[idx22] = kcg_lit_float32(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->_L1.valid[idx23] = kcg_true;
  }
  for (idx24 = 0; idx24 < 114; idx24++) {
    outC->newBC.distances[idx24] = kcg_lit_float32(0.0);
  }
  for (idx25 = 0; idx25 < 114; idx25++) {
    outC->newBC.speeds[idx25] = kcg_lit_float32(0.0);
  }
  for (idx26 = 0; idx26 < 114; idx26++) {
    outC->newBC.accelerations[idx26] = kcg_lit_float32(0.0);
  }
  for (idx27 = 0; idx27 < 114; idx27++) {
    outC->newBC.valid[idx27] = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void popLeadingArc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

