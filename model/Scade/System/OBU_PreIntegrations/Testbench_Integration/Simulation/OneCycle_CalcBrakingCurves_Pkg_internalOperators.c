/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OneCycle_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::OneCycle/ */
void OneCycle_CalcBrakingCurves_Pkg_internalOperators(
  /* currentDistance/ */
  L_internal_real_Type_SDM_Types_Pkg currentDistance,
  /* currentSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg currentSpeed,
  /* currentDistanceIndex/ */
  kcg_int32 currentDistanceIndex,
  /* currentSpeedIndex/ */
  kcg_int32 currentSpeedIndex,
  /* backwardCalculation/ */
  kcg_bool backwardCalculation,
  /* inAsafe/ */
  ASafe_T_CalcBrakingCurves_types *inAsafe,
  outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L22 = currentDistanceIndex;
  outC->_L21 = currentSpeedIndex;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L9, inAsafe);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L12, &outC->_L9.data);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->AsafeData, &outC->_L12);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L24, &outC->AsafeData);
  /* _L17=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#1)/ */
  getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
    outC->_L22,
    outC->_L21,
    &outC->_L24,
    &outC->Context_getAFromAsafeByIndex_1);
  outC->_L17 = outC->Context_getAFromAsafeByIndex_1.outA;
  outC->currAcceleration = outC->_L17;
  outC->_L106 = outC->currAcceleration;
  outC->_L89 = backwardCalculation;
  outC->_L35 = currentSpeedIndex;
  outC->_L100 = cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types;
  /* _L88=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#1)/ */
  nextIndex_CalcBrakingCurves_Pkg_internalOperators(
    outC->_L89,
    outC->_L35,
    outC->_L100,
    &outC->Context_nextIndex_1);
  outC->_L88 = outC->Context_nextIndex_1.nextIndex;
  outC->_L65 = currentSpeedIndex;
  outC->_L38 = kcg_lit_float32(0.0);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L11,
    &outC->_L9.speed_definition);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->AsafeSpeeds,
    &outC->_L11);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L39,
    &outC->AsafeSpeeds);
  if ((kcg_lit_int32(0) <= outC->_L88) & (outC->_L88 < kcg_lit_int32(14))) {
    outC->_L34 = outC->_L39[outC->_L88];
  }
  else {
    outC->_L34 = outC->_L38;
  }
  outC->_L26 = currentDistance;
  outC->_L32 = kcg_lit_float32(0.0);
  outC->_L84 = backwardCalculation;
  outC->_L102 = !outC->_L84;
  outC->_L27 = currentDistanceIndex;
  outC->_L103 = cMAX_DISTANCE_STEPS_CalcBrakingCurves_types;
  /* _L87=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#3)/ */
  nextIndex_CalcBrakingCurves_Pkg_internalOperators(
    outC->_L102,
    outC->_L27,
    outC->_L103,
    &outC->Context_nextIndex_3);
  outC->_L87 = outC->Context_nextIndex_3.nextIndex;
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L13,
    &outC->_L9.distance_definition);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->AsafeDistances,
    &outC->_L13);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L25,
    &outC->AsafeDistances);
  if ((kcg_lit_int32(0) <= outC->_L87) & (outC->_L87 < kcg_lit_int32(100))) {
    outC->_L30 = outC->_L25[outC->_L87];
  }
  else {
    outC->_L30 = outC->_L32;
  }
  outC->_L31 = currentSpeed;
  /* _L1=(CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed#1)/ */
  FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
    outC->_L106,
    outC->_L26,
    outC->_L30,
    outC->_L31,
    &outC->Context_FormularNewSpeed_1);
  outC->_L1 = outC->Context_FormularNewSpeed_1.outSpeedAtD1;
  outC->_L98 = outC->Context_FormularNewSpeed_1.valid;
  outC->_L40 = outC->_L1 <= outC->_L34;
  outC->_L99 = outC->_L98 & outC->_L40;
  outC->newSpeedValid = outC->_L99;
  outC->_L63 = outC->newSpeedValid;
  /* _L64= */
  if (outC->_L63) {
    outC->_L64 = outC->_L65;
  }
  else {
    outC->_L64 = outC->_L88;
  }
  outC->newSpeedIndexInt = outC->_L64;
  outC->_L105 = outC->newSpeedIndexInt;
  outC->_L82 = currentDistanceIndex;
  outC->_L66 = outC->newSpeedValid;
  /* _L67= */
  if (outC->_L66) {
    outC->_L67 = outC->_L87;
  }
  else {
    outC->_L67 = outC->_L82;
  }
  outC->newDistanceIndexInt = outC->_L67;
  outC->_L104 = outC->newDistanceIndexInt;
  outC->_L79 = outC->newDistanceIndexInt;
  outC->_L80 = outC->newSpeedIndexInt;
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L76, &outC->AsafeData);
  /* _L75=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */
  getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
    outC->_L79,
    outC->_L80,
    &outC->_L76,
    &outC->Context_getAFromAsafeByIndex_2);
  outC->_L75 = outC->Context_getAFromAsafeByIndex_2.outA;
  outC->newAcceleration = outC->_L75;
  outC->_L81 = outC->newAcceleration;
  outC->newDistanceIndex = outC->_L104;
  outC->newSpeedIndex = outC->_L105;
  outC->_L61 = outC->currAcceleration;
  outC->_L60 = currentSpeed;
  outC->_L59 = currentDistance;
  /* _L58=(CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition#1)/ */
  FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
    outC->_L59,
    outC->_L34,
    outC->_L60,
    outC->_L61,
    &outC->Context_FormularNewPosition_1);
  outC->_L58 = outC->Context_FormularNewPosition_1.outD1;
  outC->_L54 = outC->newSpeedValid;
  /* _L55= */
  if (outC->_L54) {
    outC->_L55 = outC->_L30;
  }
  else {
    outC->_L55 = outC->_L58;
  }
  outC->_L53 = outC->newSpeedValid;
  /* _L52= */
  if (outC->_L53) {
    outC->_L52 = outC->_L1;
  }
  else {
    outC->_L52 = outC->_L34;
  }
  outC->_L56.distance = outC->_L55;
  outC->_L56.speed = outC->_L52;
  outC->_L56.acceleration = outC->_L81;
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(&outC->newArc, &outC->_L56);
  outC->newDistance = outC->_L55;
  outC->newSpeed = outC->_L52;
}

#ifndef KCG_USER_DEFINED_INIT
void OneCycle_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators *outC)
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

  outC->_L106 = kcg_lit_float32(0.0);
  outC->_L105 = kcg_lit_int32(0);
  outC->_L104 = kcg_lit_int32(0);
  outC->_L103 = kcg_lit_int32(0);
  outC->_L102 = kcg_true;
  outC->_L100 = kcg_lit_int32(0);
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L88 = kcg_lit_int32(0);
  outC->_L87 = kcg_lit_int32(0);
  outC->_L84 = kcg_true;
  outC->_L82 = kcg_lit_int32(0);
  outC->_L81 = kcg_lit_float32(0.0);
  outC->_L80 = kcg_lit_int32(0);
  outC->_L79 = kcg_lit_int32(0);
  outC->_L75 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 14; idx1++) {
    for (idx = 0; idx < 100; idx++) {
      outC->_L76[idx1][idx] = kcg_lit_float32(0.0);
    }
  }
  outC->_L38 = kcg_lit_float32(0.0);
  outC->_L66 = kcg_true;
  outC->_L67 = kcg_lit_int32(0);
  outC->_L65 = kcg_lit_int32(0);
  outC->_L63 = kcg_true;
  outC->_L64 = kcg_lit_int32(0);
  outC->_L61 = kcg_lit_float32(0.0);
  outC->_L60 = kcg_lit_float32(0.0);
  outC->_L59 = kcg_lit_float32(0.0);
  outC->_L58 = kcg_lit_float32(0.0);
  outC->_L56.distance = kcg_lit_float32(0.0);
  outC->_L56.speed = kcg_lit_float32(0.0);
  outC->_L56.acceleration = kcg_lit_float32(0.0);
  outC->_L54 = kcg_true;
  outC->_L55 = kcg_lit_float32(0.0);
  outC->_L52 = kcg_lit_float32(0.0);
  outC->_L53 = kcg_true;
  outC->_L40 = kcg_true;
  for (idx2 = 0; idx2 < 14; idx2++) {
    outC->_L39[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L35 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L32 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_lit_float32(0.0);
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_float32(0.0);
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L25[idx3] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 14; idx5++) {
    for (idx4 = 0; idx4 < 100; idx4++) {
      outC->_L24[idx5][idx4] = kcg_lit_float32(0.0);
    }
  }
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_float32(0.0);
  for (idx6 = 0; idx6 < 14; idx6++) {
    outC->_L11[idx6] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 14; idx8++) {
    for (idx7 = 0; idx7 < 100; idx7++) {
      outC->_L12[idx8][idx7] = kcg_lit_float32(0.0);
    }
  }
  for (idx9 = 0; idx9 < 100; idx9++) {
    outC->_L13[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 100; idx10++) {
    outC->_L9.distance_definition[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 14; idx11++) {
    outC->_L9.speed_definition[idx11] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 14; idx13++) {
    for (idx12 = 0; idx12 < 100; idx12++) {
      outC->_L9.data[idx13][idx12] = kcg_lit_float32(0.0);
    }
  }
  outC->_L1 = kcg_lit_float32(0.0);
  outC->newSpeedIndexInt = kcg_lit_int32(0);
  outC->newDistanceIndexInt = kcg_lit_int32(0);
  outC->newAcceleration = kcg_lit_float32(0.0);
  outC->newSpeedValid = kcg_true;
  for (idx15 = 0; idx15 < 14; idx15++) {
    for (idx14 = 0; idx14 < 100; idx14++) {
      outC->AsafeData[idx15][idx14] = kcg_lit_float32(0.0);
    }
  }
  for (idx16 = 0; idx16 < 14; idx16++) {
    outC->AsafeSpeeds[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 100; idx17++) {
    outC->AsafeDistances[idx17] = kcg_lit_float32(0.0);
  }
  outC->currAcceleration = kcg_lit_float32(0.0);
  outC->newArc.distance = kcg_lit_float32(0.0);
  outC->newArc.speed = kcg_lit_float32(0.0);
  outC->newArc.acceleration = kcg_lit_float32(0.0);
  outC->newSpeedIndex = kcg_lit_int32(0);
  outC->newDistanceIndex = kcg_lit_int32(0);
  outC->newSpeed = kcg_lit_float32(0.0);
  outC->newDistance = kcg_lit_float32(0.0);
  /* _L58=(CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition#1)/ */
  FormularNewPosition_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_FormularNewPosition_1);
  /* _L75=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */
  getAFromAsafeByIndex_init_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getAFromAsafeByIndex_2);
  /* _L1=(CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed#1)/ */
  FormularNewSpeed_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_FormularNewSpeed_1);
  /* _L87=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#3)/ */
  nextIndex_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_nextIndex_3);
  /* _L88=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#1)/ */
  nextIndex_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_nextIndex_1);
  /* _L17=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#1)/ */
  getAFromAsafeByIndex_init_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getAFromAsafeByIndex_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void OneCycle_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L58=(CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition#1)/ */
  FormularNewPosition_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_FormularNewPosition_1);
  /* _L75=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */
  getAFromAsafeByIndex_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getAFromAsafeByIndex_2);
  /* _L1=(CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed#1)/ */
  FormularNewSpeed_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_FormularNewSpeed_1);
  /* _L87=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#3)/ */
  nextIndex_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_nextIndex_3);
  /* _L88=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#1)/ */
  nextIndex_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_nextIndex_1);
  /* _L17=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#1)/ */
  getAFromAsafeByIndex_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
    &outC->Context_getAFromAsafeByIndex_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** OneCycle_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

