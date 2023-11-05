/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed/ */
void getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* SpeedIn/ */
  V_internal_real_Type_SDM_Types_Pkg SpeedIn,
  /* ASafeSpeeds/ */
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *ASafeSpeeds,
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
  static kcg_size idx;
  static kcg_int32 acc;
  static kcg_size idx1;

  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L8,
    ASafeSpeeds);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L5 = SpeedIn;
  /* _L3/ */
  for (idx = 0; idx < 14; idx++) {
    outC->_L3[idx] = outC->_L5;
  }
  outC->_L1 = outC->_L2;
  /* _L1= */
  for (idx1 = 0; idx1 < 14; idx1++) {
    acc = outC->_L1;
    outC->_L74_SearchIdxFloor_1[idx1] = outC->_L8[idx1];
    outC->_L40_SearchIdxFloor_1[idx1] = outC->_L3[idx1];
    outC->_L77_SearchIdxFloor_1[idx1] = outC->_L40_SearchIdxFloor_1[idx1] <
      outC->_L74_SearchIdxFloor_1[idx1];
    outC->_L86_SearchIdxFloor_1[idx1] = /* _L1= */(kcg_int32) idx1;
    outC->_L8_SearchIdxFloor_1[idx1] = acc;
    /* @1/_L84= */
    if (outC->_L77_SearchIdxFloor_1[idx1]) {
      outC->_L84_SearchIdxFloor_1[idx1] = outC->_L8_SearchIdxFloor_1[idx1];
    }
    else {
      outC->_L84_SearchIdxFloor_1[idx1] = outC->_L86_SearchIdxFloor_1[idx1];
    }
    outC->_L1 = outC->_L84_SearchIdxFloor_1[idx1];
  }
  outC->SpeedStepIndexOut = outC->_L1;
  outC->_L7 = kcg_lit_float32(0.0);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(14))) {
    outC->_L6 = outC->_L8[outC->_L1];
  }
  else {
    outC->_L6 = outC->_L7;
  }
  outC->SpeedStepOut = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void getSpeedStepFromSpeed_init_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx = 0; idx < 14; idx++) {
    outC->_L8[idx] = kcg_lit_float32(0.0);
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 14; idx1++) {
    outC->_L3[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L5 = kcg_lit_float32(0.0);
  for (idx2 = 0; idx2 < 14; idx2++) {
    outC->_L8_SearchIdxFloor_1[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 14; idx3++) {
    outC->_L40_SearchIdxFloor_1[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 14; idx4++) {
    outC->_L77_SearchIdxFloor_1[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 14; idx5++) {
    outC->_L84_SearchIdxFloor_1[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 14; idx6++) {
    outC->_L74_SearchIdxFloor_1[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 14; idx7++) {
    outC->_L86_SearchIdxFloor_1[idx7] = kcg_lit_int32(0);
  }
  outC->SpeedStepIndexOut = kcg_lit_int32(0);
  outC->SpeedStepOut = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getSpeedStepFromSpeed_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed/
  @1: (CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

