/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::SortByDistances/ */
void SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
  /* reverseBC/ */
  ParabolaCurve_T_CalcBrakingCurves_types *reverseBC,
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static ParabolaCurve_T_CalcBrakingCurves_types acc;
  static kcg_size idx4;
  static kcg_int32 noname;

  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L1, reverseBC);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L5,
    &outC->_L1.valid);
  for (idx = 0; idx < 114; idx++) {
    outC->_L23[idx] = outC->_L5[113 - idx];
  }
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L2,
    &outC->_L1.distances);
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L7[idx1] = outC->_L2[113 - idx1];
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L3,
    &outC->_L1.speeds);
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L8[idx2] = outC->_L3[113 - idx2];
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L4,
    &outC->_L1.accelerations);
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L9[idx3] = outC->_L4[113 - idx3];
  }
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &outC->_L18.distances,
    &outC->_L7);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &outC->_L18.speeds,
    &outC->_L8);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &outC->_L18.accelerations,
    &outC->_L9);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L18.valid,
    &outC->_L23);
  outC->_L22 = kcg_true;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L19, &outC->_L18);
  /* _L21= */
  if (outC->_L22) {
    /* _L21= */
    for (idx4 = 0; idx4 < 114; idx4++) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&acc, &outC->_L19);
      /* _L21=(CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements#1)/ */
      deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
        &acc,
        &outC->Context_deleteLeadingUndefinedElements_1[idx4]);
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        &outC->_L19,
        &outC->Context_deleteLeadingUndefinedElements_1[idx4].newCurve);
      outC->_L21 = /* _L21= */(kcg_int32) (idx4 + 1);
      /* _L21= */
      if (!outC->Context_deleteLeadingUndefinedElements_1[idx4].condition) {
        break;
      }
    }
  }
  else {
    outC->_L21 = kcg_lit_int32(0);
  }
  noname = outC->_L21;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->sortedBC, &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void SortByDistances_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators *outC)
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
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;

  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L23[idx1] = kcg_true;
  }
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L19.distances[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L19.speeds[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L19.accelerations[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L19.valid[idx5] = kcg_true;
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L18.distances[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L18.speeds[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L18.accelerations[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L18.valid[idx9] = kcg_true;
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L9[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L8[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L7[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L5[idx13] = kcg_true;
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L4[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L3[idx15] = kcg_lit_float32(0.0);
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L2[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->_L1.distances[idx17] = kcg_lit_float32(0.0);
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->_L1.speeds[idx18] = kcg_lit_float32(0.0);
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->_L1.accelerations[idx19] = kcg_lit_float32(0.0);
  }
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->_L1.valid[idx20] = kcg_true;
  }
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->sortedBC.distances[idx21] = kcg_lit_float32(0.0);
  }
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->sortedBC.speeds[idx22] = kcg_lit_float32(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->sortedBC.accelerations[idx23] = kcg_lit_float32(0.0);
  }
  for (idx24 = 0; idx24 < 114; idx24++) {
    outC->sortedBC.valid[idx24] = kcg_true;
  }
  for (idx = 0; idx < 114; idx++) {
    /* _L21=(CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements#1)/ */
    deleteLeadingUndefinedElements_init_CalcBrakingCurves_Pkg_internalOperators(
      &outC->Context_deleteLeadingUndefinedElements_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SortByDistances_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 114; idx++) {
    /* _L21=(CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements#1)/ */
    deleteLeadingUndefinedElements_reset_CalcBrakingCurves_Pkg_internalOperators(
      &outC->Context_deleteLeadingUndefinedElements_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortByDistances_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

