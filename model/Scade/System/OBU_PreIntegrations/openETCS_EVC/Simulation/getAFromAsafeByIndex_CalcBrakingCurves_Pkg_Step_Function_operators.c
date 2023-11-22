/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex/ */
void getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* DistanceIndex/ */
  kcg_int32 DistanceIndex,
  /* SpeedIndex/ */
  kcg_int32 SpeedIndex,
  /* Asafe/ */
  ASafe_Data_T_CalcBrakingCurves_types *Asafe,
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
  outC->_L9 = cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types;
  outC->I2_Min_1_int32 = outC->_L9;
  outC->_L22_Min_1_int32 = outC->I2_Min_1_int32;
  outC->_L5 = SpeedIndex;
  outC->I1_Min_1_int32 = outC->_L5;
  outC->_L21_Min_1_int32 = outC->I1_Min_1_int32;
  outC->_L25_Min_1_int32 = outC->_L21_Min_1_int32 <= outC->_L22_Min_1_int32;
  /* @1/_L24= */
  if (outC->_L25_Min_1_int32) {
    outC->_L24_Min_1_int32 = outC->_L21_Min_1_int32;
  }
  else {
    outC->_L24_Min_1_int32 = outC->_L22_Min_1_int32;
  }
  outC->Mi_Output_Min_1_int32 = outC->_L24_Min_1_int32;
  outC->_L13 = cMAX_DISTANCE_STEPS_CalcBrakingCurves_types;
  outC->I2_Min_2_int32 = outC->_L13;
  outC->_L22_Min_2_int32 = outC->I2_Min_2_int32;
  outC->_L6 = DistanceIndex;
  outC->I1_Min_2_int32 = outC->_L6;
  outC->_L21_Min_2_int32 = outC->I1_Min_2_int32;
  outC->_L25_Min_2_int32 = outC->_L21_Min_2_int32 <= outC->_L22_Min_2_int32;
  /* @2/_L24= */
  if (outC->_L25_Min_2_int32) {
    outC->_L24_Min_2_int32 = outC->_L21_Min_2_int32;
  }
  else {
    outC->_L24_Min_2_int32 = outC->_L22_Min_2_int32;
  }
  outC->Mi_Output_Min_2_int32 = outC->_L24_Min_2_int32;
  outC->_L18 = kcg_lit_float32(0.0);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L17, Asafe);
  outC->_L14 = outC->Mi_Output_Min_1_int32;
  outC->_L15 = outC->Mi_Output_Min_2_int32;
  if ((kcg_lit_int32(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int32(14)) &
    ((kcg_lit_int32(0) <= outC->_L15) & (outC->_L15 < kcg_lit_int32(100)))) {
    outC->_L16 = outC->_L17[outC->_L14][outC->_L15];
  }
  else {
    outC->_L16 = outC->_L18;
  }
  outC->outA = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void getAFromAsafeByIndex_init_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L18 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 14; idx1++) {
    for (idx = 0; idx < 100; idx++) {
      outC->_L17[idx1][idx] = kcg_lit_float32(0.0);
    }
  }
  outC->_L16 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L21_Min_2_int32 = kcg_lit_int32(0);
  outC->_L22_Min_2_int32 = kcg_lit_int32(0);
  outC->_L24_Min_2_int32 = kcg_lit_int32(0);
  outC->_L25_Min_2_int32 = kcg_true;
  outC->I1_Min_2_int32 = kcg_lit_int32(0);
  outC->I2_Min_2_int32 = kcg_lit_int32(0);
  outC->Mi_Output_Min_2_int32 = kcg_lit_int32(0);
  outC->_L21_Min_1_int32 = kcg_lit_int32(0);
  outC->_L22_Min_1_int32 = kcg_lit_int32(0);
  outC->_L24_Min_1_int32 = kcg_lit_int32(0);
  outC->_L25_Min_1_int32 = kcg_true;
  outC->I1_Min_1_int32 = kcg_lit_int32(0);
  outC->I2_Min_1_int32 = kcg_lit_int32(0);
  outC->Mi_Output_Min_1_int32 = kcg_lit_int32(0);
  outC->outA = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getAFromAsafeByIndex_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex/
  @1: (math::Min#1)
  @2: (math::Min#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

