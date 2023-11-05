/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc/ */
void InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static L_internal_real_Type_SDM_Types_Pkg noname;
  static V_internal_real_Type_SDM_Types_Pkg _1_noname;

  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L1, target);
  outC->_L14 = outC->_L1.speed;
  /* _L24=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L14,
    &outC->Context_TransformV_realToV_odo_1);
  outC->_L24 = outC->Context_TransformV_realToV_odo_1.v_odo;
  /* _L16=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */
  dV_ebi_for_V_SDM_Types_Pkg(outC->_L24, &outC->Context_dV_ebi_for_V_2);
  outC->_L16 = outC->Context_dV_ebi_for_V_2.dv_ebi;
  /* _L25=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */
  TransformV_odoToV_real_SDM_Types_Pkg(
    outC->_L16,
    &outC->Context_TransformV_odoToV_real_1);
  outC->_L25 = outC->Context_TransformV_odoToV_real_1.v_real;
  outC->_L15 = outC->_L25 + outC->_L14;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L3, aSafe);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L19,
    &outC->_L3.speed_definition);
  /* _L11=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#3)/ */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    outC->_L15,
    &outC->_L19,
    &outC->Context_getSpeedStepFromSpeed_3);
  outC->_L11 = outC->Context_getSpeedStepFromSpeed_3.SpeedStepOut;
  outC->_L12 = outC->Context_getSpeedStepFromSpeed_3.SpeedStepIndexOut;
  _1_noname = outC->_L11;
  /* _L23=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */
  makeEmptyParabolaCurve_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_2);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L23,
    &outC->Context_makeEmptyParabolaCurve_2.Curve);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L21, aSafe);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L20, target);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L18,
    &outC->_L21.distance_definition);
  outC->_L13 = outC->_L20.distance;
  /* _L9=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#3)/ */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    outC->_L13,
    &outC->_L18,
    &outC->Context_getDistanceStepFromDistance_3);
  outC->_L9 = outC->Context_getDistanceStepFromDistance_3.DistanceStepOut;
  outC->_L10 = outC->Context_getDistanceStepFromDistance_3.DistanceStepIndexOut;
  outC->_L17.distance = outC->_L13;
  outC->_L17.speed = outC->_L15;
  outC->_L17.distanceIndex = outC->_L10;
  outC->_L17.speedIndex = outC->_L12;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L17.BC, &outC->_L23);
  noname = outC->_L9;
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(
    &outC->BCACCForEBDFoot,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void InitilizeAccForEBDFootCalc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators *outC)
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

  outC->_L25 = kcg_lit_float32(0.0);
  outC->_L24 = kcg_lit_int32(0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L23.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L23.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L23.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L23.valid[idx3] = kcg_true;
  }
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L21.distance_definition[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 14; idx5++) {
    outC->_L21.speed_definition[idx5] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 14; idx7++) {
    for (idx6 = 0; idx6 < 100; idx6++) {
      outC->_L21.data[idx7][idx6] = kcg_lit_float32(0.0);
    }
  }
  outC->_L20.targetType = EoA_TargetManagement_types;
  outC->_L20.distance = kcg_lit_float32(0.0);
  outC->_L20.speed = kcg_lit_float32(0.0);
  for (idx8 = 0; idx8 < 14; idx8++) {
    outC->_L19[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 100; idx9++) {
    outC->_L18[idx9] = kcg_lit_float32(0.0);
  }
  outC->_L17.distance = kcg_lit_float32(0.0);
  outC->_L17.speed = kcg_lit_float32(0.0);
  outC->_L17.distanceIndex = kcg_lit_int32(0);
  outC->_L17.speedIndex = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L17.BC.distances[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L17.BC.speeds[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L17.BC.accelerations[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L17.BC.valid[idx13] = kcg_true;
  }
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L1.targetType = EoA_TargetManagement_types;
  outC->_L1.distance = kcg_lit_float32(0.0);
  outC->_L1.speed = kcg_lit_float32(0.0);
  for (idx14 = 0; idx14 < 100; idx14++) {
    outC->_L3.distance_definition[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 14; idx15++) {
    outC->_L3.speed_definition[idx15] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 14; idx17++) {
    for (idx16 = 0; idx16 < 100; idx16++) {
      outC->_L3.data[idx17][idx16] = kcg_lit_float32(0.0);
    }
  }
  outC->BCACCForEBDFoot.distance = kcg_lit_float32(0.0);
  outC->BCACCForEBDFoot.speed = kcg_lit_float32(0.0);
  outC->BCACCForEBDFoot.distanceIndex = kcg_lit_int32(0);
  outC->BCACCForEBDFoot.speedIndex = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->BCACCForEBDFoot.BC.distances[idx18] = kcg_lit_float32(0.0);
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->BCACCForEBDFoot.BC.speeds[idx19] = kcg_lit_float32(0.0);
  }
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->BCACCForEBDFoot.BC.accelerations[idx20] = kcg_lit_float32(0.0);
  }
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->BCACCForEBDFoot.BC.valid[idx21] = kcg_true;
  }
  /* _L9=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#3)/ */
  getDistanceStepFromDistance_init_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getDistanceStepFromDistance_3);
  /* _L23=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */
  makeEmptyParabolaCurve_init_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_2);
  /* _L11=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#3)/ */
  getSpeedStepFromSpeed_init_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getSpeedStepFromSpeed_3);
  /* _L25=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */
  TransformV_odoToV_real_init_SDM_Types_Pkg(
    &outC->Context_TransformV_odoToV_real_1);
  /* _L16=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */
  dV_ebi_for_V_init_SDM_Types_Pkg(&outC->Context_dV_ebi_for_V_2);
  /* _L24=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InitilizeAccForEBDFootCalc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L9=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#3)/ */
  getDistanceStepFromDistance_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getDistanceStepFromDistance_3);
  /* _L23=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */
  makeEmptyParabolaCurve_reset_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_2);
  /* _L11=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#3)/ */
  getSpeedStepFromSpeed_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getSpeedStepFromSpeed_3);
  /* _L25=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */
  TransformV_odoToV_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_odoToV_real_1);
  /* _L16=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */
  dV_ebi_for_V_reset_SDM_Types_Pkg(&outC->Context_dV_ebi_for_V_2);
  /* _L24=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

