/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators_H_
#define _getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_internal_real_Type_SDM_Types_Pkg /* outA/ */ outA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/Mi_Output/ */ Mi_Output_Min_1_int64;
  kcg_int64 /* @1/I2/ */ I2_Min_1_int64;
  kcg_int64 /* @1/I1/ */ I1_Min_1_int64;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_int64;
  kcg_int64 /* @1/_L24/ */ _L24_Min_1_int64;
  kcg_int64 /* @1/_L22/ */ _L22_Min_1_int64;
  kcg_int64 /* @1/_L21/ */ _L21_Min_1_int64;
  kcg_int64 /* @2/Mi_Output/ */ Mi_Output_Min_2_int64;
  kcg_int64 /* @2/I2/ */ I2_Min_2_int64;
  kcg_int64 /* @2/I1/ */ I1_Min_2_int64;
  kcg_bool /* @2/_L25/ */ _L25_Min_2_int64;
  kcg_int64 /* @2/_L24/ */ _L24_Min_2_int64;
  kcg_int64 /* @2/_L22/ */ _L22_Min_2_int64;
  kcg_int64 /* @2/_L21/ */ _L21_Min_2_int64;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
  ASafe_Data_T_CalcBrakingCurves_types /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
} outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex/ */
extern void getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* DistanceIndex/ */
  kcg_int64 DistanceIndex,
  /* SpeedIndex/ */
  kcg_int64 SpeedIndex,
  /* Asafe/ */
  ASafe_Data_T_CalcBrakingCurves_types *Asafe,
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getAFromAsafeByIndex_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getAFromAsafeByIndex_init_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex/
  @1: (math::Min#1)
  @2: (math::Min#2)
*/

#endif /* _getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

