/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance/ */
void getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* DistanceIn/ */
  L_internal_real_Type_SDM_Types_Pkg DistanceIn,
  /* ASafeDistances/ */
  ASafeDistanceDefinition_T_CalcBrakingCurves_types *ASafeDistances,
  outC_getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
  kcg_size idx;
  kcg_int32 acc;
  kcg_size idx1;

  outC->_L2 = kcg_lit_int32(0);
  outC->_L5 = DistanceIn;
  /* _L3/ */
  for (idx = 0; idx < 100; idx++) {
    outC->_L3[idx] = outC->_L5;
  }
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L4,
    ASafeDistances);
  outC->_L1 = outC->_L2;
  /* _L1= */
  for (idx1 = 0; idx1 < 100; idx1++) {
    acc = outC->_L1;
    outC->_L74_SearchIdxFloor_1[idx1] = outC->_L4[idx1];
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
  outC->DistanceStepIndexOut = outC->_L1;
  outC->_L7 = kcg_lit_float32(0.0);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(100))) {
    outC->_L8 = outC->_L4[outC->_L1];
  }
  else {
    outC->_L8 = outC->_L7;
  }
  outC->DistanceStepOut = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void getDistanceStepFromDistance_init_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L1 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  for (idx = 0; idx < 100; idx++) {
    outC->_L3[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L4[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L5 = kcg_lit_float32(0.0);
  for (idx2 = 0; idx2 < 100; idx2++) {
    outC->_L8_SearchIdxFloor_1[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L40_SearchIdxFloor_1[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L77_SearchIdxFloor_1[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 100; idx5++) {
    outC->_L84_SearchIdxFloor_1[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 100; idx6++) {
    outC->_L74_SearchIdxFloor_1[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 100; idx7++) {
    outC->_L86_SearchIdxFloor_1[idx7] = kcg_lit_int32(0);
  }
  outC->DistanceStepIndexOut = kcg_lit_int32(0);
  outC->DistanceStepOut = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getDistanceStepFromDistance_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance/
  @1: (CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

