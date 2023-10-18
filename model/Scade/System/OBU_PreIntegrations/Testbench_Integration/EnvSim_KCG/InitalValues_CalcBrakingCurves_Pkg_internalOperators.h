/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _InitalValues_CalcBrakingCurves_Pkg_internalOperators_H_
#define _InitalValues_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h"
#include "CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.h"
#include "isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BCAccumulator_type_CalcBrakingCurves_Pkg /* BCAcc/ */ BCAcc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators /* _L141=(CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc)/ */ Context_InitAccWithTargetArc;
  outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators /* _L103=(CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA)/ */ Context_CalculateEBDFootForMRSPorLOA;
  outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators /* _L97=(CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget)/ */ Context_isMRSPorLOATarget;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* EBDFootMRSPorLOA/ */ EBDFootMRSPorLOA;
  kcg_bool /* targetIsMRSPorLOA/ */ targetIsMRSPorLOA;
  ASafe_T_CalcBrakingCurves_types /* _L2/ */ _L2;
  Target_real_T_TargetManagement_types /* _L1/ */ _L1;
  Target_real_T_TargetManagement_types /* _L27/ */ _L27;
  ASafe_T_CalcBrakingCurves_types /* _L39/ */ _L39;
  Target_real_T_TargetManagement_types /* _L40/ */ _L40;
  kcg_bool /* _L97/ */ _L97;
  L_internal_real_Type_SDM_Types_Pkg /* _L103/ */ _L103;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L141/ */ _L141;
  kcg_bool /* _L146/ */ _L146;
  L_internal_real_Type_SDM_Types_Pkg /* _L147/ */ _L147;
  L_internal_real_Type_SDM_Types_Pkg /* _L148/ */ _L148;
  Target_real_T_TargetManagement_types /* _L149/ */ _L149;
  L_internal_real_Type_SDM_Types_Pkg /* _L150/ */ _L150;
  kcg_float64 /* _L151/ */ _L151;
} outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::InitalValues/ */
extern void InitalValues_CalcBrakingCurves_Pkg_internalOperators(
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InitalValues_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InitalValues_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InitalValues_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InitalValues_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

