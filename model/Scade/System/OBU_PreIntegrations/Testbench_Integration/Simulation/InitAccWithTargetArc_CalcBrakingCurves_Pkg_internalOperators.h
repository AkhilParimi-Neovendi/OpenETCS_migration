/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators_H_
#define _InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"
#include "getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BCAccumulator_type_CalcBrakingCurves_Pkg /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators /* _L64=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */ Context_setArc_1;
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types /* _L63=(CalcBrakingCurves_types::makeEmptyParabolaCurve#4)/ */ Context_makeEmptyParabolaCurve_4;
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators /* _L20=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */ Context_getAFromAsafeByIndex_2;
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators /* _L8=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#1)/ */ Context_getSpeedStepFromSpeed_1;
  outC_getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators /* _L10=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#1)/ */ Context_getDistanceStepFromDistance_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Target_real_T_TargetManagement_types /* _L2/ */ _L2;
  ASafe_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L4/ */ _L4;
  ASafeDistanceDefinition_T_CalcBrakingCurves_types /* _L5/ */ _L5;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L6/ */ _L6;
  ASafe_Data_T_CalcBrakingCurves_types /* _L7/ */ _L7;
  V_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  L_internal_real_Type_SDM_Types_Pkg /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  V_internal_real_Type_SDM_Types_Pkg /* _L17/ */ _L17;
  V_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  A_internal_real_Type_SDM_Types_Pkg /* _L20/ */ _L20;
  V_internal_real_Type_SDM_Types_Pkg /* _L30/ */ _L30;
  Target_real_T_TargetManagement_types /* _L32/ */ _L32;
  Target_real_T_TargetManagement_types /* _L33/ */ _L33;
  L_internal_real_Type_SDM_Types_Pkg /* _L34/ */ _L34;
  L_internal_real_Type_SDM_Types_Pkg /* _L35/ */ _L35;
  L_internal_real_Type_SDM_Types_Pkg /* _L36/ */ _L36;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L63/ */ _L63;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L64/ */ _L64;
  ParabolaArc_T_CalcBrakingCurves_types /* _L68/ */ _L68;
} outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc/ */
extern void InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
  /* EBDfoot/ */
  L_internal_real_Type_SDM_Types_Pkg EBDfoot,
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InitAccWithTargetArc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InitAccWithTargetArc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

