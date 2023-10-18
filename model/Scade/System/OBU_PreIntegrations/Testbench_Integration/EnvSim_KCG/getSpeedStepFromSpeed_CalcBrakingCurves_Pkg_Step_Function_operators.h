/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators_H_
#define _getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* SpeedStepOut/ */ SpeedStepOut;
  kcg_int64 /* SpeedStepIndexOut/ */ SpeedStepIndexOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_14 /* @1/_L86/ */ _L86_SearchIdxFloor_1;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* @1/_L74/ */ _L74_SearchIdxFloor_1;
  array_int64_14 /* @1/_L84/ */ _L84_SearchIdxFloor_1;
  MyArray_SDM_Commands_Pkg /* @1/_L77/ */ _L77_SearchIdxFloor_1;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* @1/_L40/ */ _L40_SearchIdxFloor_1;
  array_int64_14 /* @1/_L8/ */ _L8_SearchIdxFloor_1;
  V_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_int64 /* _L1/ */ _L1;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L8/ */ _L8;
} outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed/ */
extern void getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* SpeedIn/ */
  V_internal_real_Type_SDM_Types_Pkg SpeedIn,
  /* ASafeSpeeds/ */
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *ASafeSpeeds,
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getSpeedStepFromSpeed_reset_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getSpeedStepFromSpeed_init_CalcBrakingCurves_Pkg_Step_Function_operators(
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed/
  @1: (CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor#1)
*/

#endif /* _getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

