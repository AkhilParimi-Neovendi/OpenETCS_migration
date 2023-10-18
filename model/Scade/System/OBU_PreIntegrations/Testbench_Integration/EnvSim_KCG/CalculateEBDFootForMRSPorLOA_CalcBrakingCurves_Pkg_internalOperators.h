/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators_H_
#define _CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"
#include "BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* EBDfoot/ */ EBDfoot;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L10=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */ Context_getLocationOnCurve_1;
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators /* _L12=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances#1)/ */ Context_SortByDistances_1;
  outC_BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators /* _L4=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward#1)/ */ Context_BCFoldOperatorForward_1[113];
  outC_InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators /* _L14=(CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc)/ */ Context_InitilizeAccForEBDFootCalc;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ASafe_T_CalcBrakingCurves_types /* _L3/ */ _L3;
  Target_real_T_TargetManagement_types /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_int64 /* _L4/ */ _L4;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L5/ */ _L5;
  V_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  _10_array /* _L7/ */ _L7;
  array_float64_113 /* _L8/ */ _L8;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  L_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L12/ */ _L12;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L14/ */ _L14;
  Target_real_T_TargetManagement_types /* _L16/ */ _L16;
  ASafe_T_CalcBrakingCurves_types /* _L17/ */ _L17;
} outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA/ */
extern void CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
  /* IsMRSPorLOATarget/ */
  kcg_bool IsMRSPorLOATarget,
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalculateEBDFootForMRSPorLOA_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateEBDFootForMRSPorLOA_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

