/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators_H_
#define _isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isVnonZero/ */ isVnonZero;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Target_real_T_TargetManagement_types /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L8/ */ _L8;
  kcg_float32 /* _L9/ */ _L9;
} outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget/ */
extern void isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(
  /* Target/ */
  Target_real_T_TargetManagement_types *Target,
  outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void isMRSPorLOATarget_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void isMRSPorLOATarget_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

