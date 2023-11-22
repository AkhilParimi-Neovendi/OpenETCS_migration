/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators_H_
#define _InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "TransformV_odoToV_real_SDM_Types_Pkg.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"
#include "getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BCAccumulator_type_CalcBrakingCurves_Pkg /* BCACCForEBDFoot/ */ BCACCForEBDFoot;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators /* _L9=(CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance#3)/ */ Context_getDistanceStepFromDistance_3;
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types /* _L23=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */ Context_makeEmptyParabolaCurve_2;
  outC_getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators /* _L11=(CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed#3)/ */ Context_getSpeedStepFromSpeed_3;
  outC_TransformV_odoToV_real_SDM_Types_Pkg /* _L25=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */ Context_TransformV_odoToV_real_1;
  outC_dV_ebi_for_V_SDM_Types_Pkg /* _L16=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */ Context_dV_ebi_for_V_2;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L24=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */ Context_TransformV_realToV_odo_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ASafe_T_CalcBrakingCurves_types /* _L3/ */ _L3;
  Target_real_T_TargetManagement_types /* _L1/ */ _L1;
  L_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  V_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  L_internal_real_Type_SDM_Types_Pkg /* _L13/ */ _L13;
  V_internal_real_Type_SDM_Types_Pkg /* _L14/ */ _L14;
  kcg_float32 /* _L15/ */ _L15;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L17/ */ _L17;
  ASafeDistanceDefinition_T_CalcBrakingCurves_types /* _L18/ */ _L18;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L19/ */ _L19;
  Target_real_T_TargetManagement_types /* _L20/ */ _L20;
  ASafe_T_CalcBrakingCurves_types /* _L21/ */ _L21;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L23/ */ _L23;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  V_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
} outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc/ */
extern void InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InitilizeAccForEBDFootCalc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InitilizeAccForEBDFootCalc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

