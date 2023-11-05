/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements/ */
void deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
  /* oldCurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *oldCurve,
  outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static ParabolaCurve_T_CalcBrakingCurves_types op_call;

  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L2, oldCurve);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &outC->_L24,
    &outC->_L2.valid);
  outC->_L21 = outC->_L24[0];
  outC->_L25 = !outC->_L21;
  outC->every = outC->_L25;
  if (outC->every) {
    /* _L23=(CalcBrakingCurves_Pkg::internalOperators::popLeadingArc)/ */
    popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(
      &outC->_L2,
      &outC->Context_popLeadingArc);
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &op_call,
      &outC->Context_popLeadingArc.newBC);
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L23, &op_call);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L23, &outC->_L2);
  }
  outC->condition = outC->_L25;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->newCurve, &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void deleteLeadingUndefinedElements_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators *outC)
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

  outC->_L25 = kcg_true;
  for (idx = 0; idx < 114; idx++) {
    outC->_L24[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L23.distances[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L23.speeds[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L23.accelerations[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L23.valid[idx4] = kcg_true;
  }
  outC->_L21 = kcg_true;
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L2.distances[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L2.speeds[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L2.accelerations[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L2.valid[idx8] = kcg_true;
  }
  outC->every = kcg_true;
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->newCurve.distances[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->newCurve.speeds[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->newCurve.accelerations[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->newCurve.valid[idx12] = kcg_true;
  }
  outC->condition = kcg_true;
  /* _L23=(CalcBrakingCurves_Pkg::internalOperators::popLeadingArc)/ */
  popLeadingArc_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_popLeadingArc);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void deleteLeadingUndefinedElements_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L23=(CalcBrakingCurves_Pkg::internalOperators::popLeadingArc)/ */
  popLeadingArc_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_popLeadingArc);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

