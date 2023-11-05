/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward/ */
void BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
  /* Index/ */
  kcg_int32 Index,
  /* BC_acc/ */
  BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* Asafe/ */
  ASafe_T_CalcBrakingCurves_types *Asafe,
  /* d_est_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_est_front,
  outC_BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->_L36, BC_acc);
  outC->_L41 = outC->_L36.distance;
  outC->_L40 = outC->_L36.speed;
  outC->_L39 = outC->_L36.distanceIndex;
  outC->_L38 = outC->_L36.speedIndex;
  outC->_L59 = kcg_true;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L6, Asafe);
  /* _L3=(CalcBrakingCurves_Pkg::internalOperators::OneCycle#1)/ */
  OneCycle_CalcBrakingCurves_Pkg_internalOperators(
    outC->_L41,
    outC->_L40,
    outC->_L39,
    outC->_L38,
    outC->_L59,
    &outC->_L6,
    &outC->Context_OneCycle_1);
  outC->_L3 = outC->Context_OneCycle_1.newDistance;
  outC->_L2 = outC->Context_OneCycle_1.newSpeed;
  outC->_L1 = outC->Context_OneCycle_1.newDistanceIndex;
  outC->_L18 = outC->Context_OneCycle_1.newSpeedIndex;
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(
    &outC->_L4,
    &outC->Context_OneCycle_1.newArc);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L37, &outC->_L36.BC);
  outC->_L62 = kcg_lit_int32(1);
  outC->_L60 = Index;
  outC->_L61 = outC->_L60 + outC->_L62;
  /* _L63=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */
  setArc_CalcBrakingCurves_Pkg_internalOperators(
    &outC->_L4,
    &outC->_L37,
    outC->_L61,
    &outC->Context_setArc_1);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L63,
    &outC->Context_setArc_1.newBC);
  outC->_L42.distance = outC->_L3;
  outC->_L42.speed = outC->_L2;
  outC->_L42.distanceIndex = outC->_L1;
  outC->_L42.speedIndex = outC->_L18;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L42.BC, &outC->_L63);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->BC, &outC->_L42);
  outC->_L33 = d_est_front;
  outC->_L32 = outC->_L3 > outC->_L33;
  outC->exitCond = outC->_L32;
}

#ifndef KCG_USER_DEFINED_INIT
void BCFoldOperatorBackward_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators *outC)
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

  for (idx = 0; idx < 114; idx++) {
    outC->_L63.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L63.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L63.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L63.valid[idx3] = kcg_true;
  }
  outC->_L62 = kcg_lit_int32(0);
  outC->_L61 = kcg_lit_int32(0);
  outC->_L60 = kcg_lit_int32(0);
  outC->_L59 = kcg_true;
  outC->_L42.distance = kcg_lit_float32(0.0);
  outC->_L42.speed = kcg_lit_float32(0.0);
  outC->_L42.distanceIndex = kcg_lit_int32(0);
  outC->_L42.speedIndex = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L42.BC.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L42.BC.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L42.BC.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L42.BC.valid[idx7] = kcg_true;
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L37.distances[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L37.speeds[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L37.accelerations[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L37.valid[idx11] = kcg_true;
  }
  outC->_L38 = kcg_lit_int32(0);
  outC->_L39 = kcg_lit_int32(0);
  outC->_L40 = kcg_lit_float32(0.0);
  outC->_L41 = kcg_lit_float32(0.0);
  outC->_L36.distance = kcg_lit_float32(0.0);
  outC->_L36.speed = kcg_lit_float32(0.0);
  outC->_L36.distanceIndex = kcg_lit_int32(0);
  outC->_L36.speedIndex = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L36.BC.distances[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L36.BC.speeds[idx13] = kcg_lit_float32(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L36.BC.accelerations[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L36.BC.valid[idx15] = kcg_true;
  }
  outC->_L33 = kcg_lit_float32(0.0);
  outC->_L32 = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 100; idx16++) {
    outC->_L6.distance_definition[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 14; idx17++) {
    outC->_L6.speed_definition[idx17] = kcg_lit_float32(0.0);
  }
  for (idx19 = 0; idx19 < 14; idx19++) {
    for (idx18 = 0; idx18 < 100; idx18++) {
      outC->_L6.data[idx19][idx18] = kcg_lit_float32(0.0);
    }
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L4.distance = kcg_lit_float32(0.0);
  outC->_L4.speed = kcg_lit_float32(0.0);
  outC->_L4.acceleration = kcg_lit_float32(0.0);
  outC->BC.distance = kcg_lit_float32(0.0);
  outC->BC.speed = kcg_lit_float32(0.0);
  outC->BC.distanceIndex = kcg_lit_int32(0);
  outC->BC.speedIndex = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->BC.BC.distances[idx20] = kcg_lit_float32(0.0);
  }
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->BC.BC.speeds[idx21] = kcg_lit_float32(0.0);
  }
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->BC.BC.accelerations[idx22] = kcg_lit_float32(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->BC.BC.valid[idx23] = kcg_true;
  }
  outC->exitCond = kcg_true;
  /* _L63=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */
  setArc_init_CalcBrakingCurves_Pkg_internalOperators(&outC->Context_setArc_1);
  /* _L3=(CalcBrakingCurves_Pkg::internalOperators::OneCycle#1)/ */
  OneCycle_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_OneCycle_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BCFoldOperatorBackward_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L63=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */
  setArc_reset_CalcBrakingCurves_Pkg_internalOperators(&outC->Context_setArc_1);
  /* _L3=(CalcBrakingCurves_Pkg::internalOperators::OneCycle#1)/ */
  OneCycle_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_OneCycle_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

