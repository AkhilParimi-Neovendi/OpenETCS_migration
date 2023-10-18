/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc/ */
void InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
  /* EBDfoot/ */
  L_internal_real_Type_SDM_Types_Pkg EBDfoot,
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static L_internal_real_Type_SDM_Types_Pkg noname;
  static V_internal_real_Type_SDM_Types_Pkg _1_noname;

  outC->_L35 = EBDfoot;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L33, target);
  outC->_L30 = outC->_L33.speed;
  outC->_L34 = EBDfoot;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L1, aSafe);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L5,
    &outC->_L1.distance_definition);
  /* _L10=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#1)/ */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    outC->_L34,
    &outC->_L5,
    &outC->Context_getDistanceStepFromDistance_1);
  outC->_L10 = outC->Context_getDistanceStepFromDistance_1.DistanceStepOut;
  outC->_L11 = outC->Context_getDistanceStepFromDistance_1.DistanceStepIndexOut;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L2, target);
  outC->_L17 = outC->_L2.speed;
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L6,
    &outC->_L1.speed_definition);
  /* _L8=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#1)/ */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    outC->_L17,
    &outC->_L6,
    &outC->Context_getSpeedStepFromSpeed_1);
  outC->_L8 = outC->Context_getSpeedStepFromSpeed_1.SpeedStepOut;
  outC->_L9 = outC->Context_getSpeedStepFromSpeed_1.SpeedStepIndexOut;
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L7, &outC->_L1.data);
  /* _L20=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */
  getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
    outC->_L11,
    outC->_L9,
    &outC->_L7,
    &outC->Context_getAFromAsafeByIndex_2);
  outC->_L20 = outC->Context_getAFromAsafeByIndex_2.outA;
  outC->_L68.distance = outC->_L35;
  outC->_L68.speed = outC->_L30;
  outC->_L68.acceleration = outC->_L20;
  /* _L63=(CalcBrakingCurves_types::makeEmptyParabolaCurve#4)/ */
  makeEmptyParabolaCurve_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_4);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L63,
    &outC->Context_makeEmptyParabolaCurve_4.Curve);
  /* _L64=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */
  setArc_CalcBrakingCurves_Pkg_internalOperators(
    &outC->_L68,
    &outC->_L63,
    kcg_lit_int64(0),
    &outC->Context_setArc_1);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L64,
    &outC->Context_setArc_1.newBC);
  outC->_L36 = EBDfoot;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L32, target);
  outC->_L19 = outC->_L32.speed;
  outC->_L4.distance = outC->_L36;
  outC->_L4.speed = outC->_L19;
  outC->_L4.distanceIndex = outC->_L11;
  outC->_L4.speedIndex = outC->_L9;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L4.BC, &outC->_L64);
  _1_noname = outC->_L8;
  noname = outC->_L10;
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->Output1, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void InitAccWithTargetArc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators *outC)
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

  outC->_L68.distance = kcg_lit_float64(0.0);
  outC->_L68.speed = kcg_lit_float64(0.0);
  outC->_L68.acceleration = kcg_lit_float64(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L64.distances[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L64.speeds[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L64.accelerations[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L64.valid[idx3] = kcg_true;
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L63.distances[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L63.speeds[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L63.accelerations[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L63.valid[idx7] = kcg_true;
  }
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33.targetType = EoA_TargetManagement_types;
  outC->_L33.distance = kcg_lit_float64(0.0);
  outC->_L33.speed = kcg_lit_float64(0.0);
  outC->_L32.targetType = EoA_TargetManagement_types;
  outC->_L32.distance = kcg_lit_float64(0.0);
  outC->_L32.speed = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_float64(0.0);
  for (idx9 = 0; idx9 < 14; idx9++) {
    for (idx8 = 0; idx8 < 100; idx8++) {
      outC->_L7[idx9][idx8] = kcg_lit_float64(0.0);
    }
  }
  for (idx10 = 0; idx10 < 14; idx10++) {
    outC->_L6[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 100; idx11++) {
    outC->_L5[idx11] = kcg_lit_float64(0.0);
  }
  outC->_L4.distance = kcg_lit_float64(0.0);
  outC->_L4.speed = kcg_lit_float64(0.0);
  outC->_L4.distanceIndex = kcg_lit_int64(0);
  outC->_L4.speedIndex = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L4.BC.distances[idx12] = kcg_lit_float64(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L4.BC.speeds[idx13] = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L4.BC.accelerations[idx14] = kcg_lit_float64(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L4.BC.valid[idx15] = kcg_true;
  }
  for (idx16 = 0; idx16 < 100; idx16++) {
    outC->_L1.distance_definition[idx16] = kcg_lit_float64(0.0);
  }
  for (idx17 = 0; idx17 < 14; idx17++) {
    outC->_L1.speed_definition[idx17] = kcg_lit_float64(0.0);
  }
  for (idx19 = 0; idx19 < 14; idx19++) {
    for (idx18 = 0; idx18 < 100; idx18++) {
      outC->_L1.data[idx19][idx18] = kcg_lit_float64(0.0);
    }
  }
  outC->_L2.targetType = EoA_TargetManagement_types;
  outC->_L2.distance = kcg_lit_float64(0.0);
  outC->_L2.speed = kcg_lit_float64(0.0);
  outC->Output1.distance = kcg_lit_float64(0.0);
  outC->Output1.speed = kcg_lit_float64(0.0);
  outC->Output1.distanceIndex = kcg_lit_int64(0);
  outC->Output1.speedIndex = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->Output1.BC.distances[idx20] = kcg_lit_float64(0.0);
  }
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->Output1.BC.speeds[idx21] = kcg_lit_float64(0.0);
  }
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->Output1.BC.accelerations[idx22] = kcg_lit_float64(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->Output1.BC.valid[idx23] = kcg_true;
  }
  /* _L64=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */
  setArc_init_CalcBrakingCurves_Pkg_internalOperators(&outC->Context_setArc_1);
  /* _L63=(CalcBrakingCurves_types::makeEmptyParabolaCurve#4)/ */
  makeEmptyParabolaCurve_init_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_4);
  /* _L20=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */
  getAFromAsafeByIndex_init_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getAFromAsafeByIndex_2);
  /* _L8=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#1)/ */
  getSpeedStepFromSpeed_init_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getSpeedStepFromSpeed_1);
  /* _L10=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#1)/ */
  getDistanceStepFromDistance_init_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getDistanceStepFromDistance_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InitAccWithTargetArc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L64=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */
  setArc_reset_CalcBrakingCurves_Pkg_internalOperators(&outC->Context_setArc_1);
  /* _L63=(CalcBrakingCurves_types::makeEmptyParabolaCurve#4)/ */
  makeEmptyParabolaCurve_reset_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_4);
  /* _L20=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */
  getAFromAsafeByIndex_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getAFromAsafeByIndex_2);
  /* _L8=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#1)/ */
  getSpeedStepFromSpeed_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getSpeedStepFromSpeed_1);
  /* _L10=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#1)/ */
  getDistanceStepFromDistance_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getDistanceStepFromDistance_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

