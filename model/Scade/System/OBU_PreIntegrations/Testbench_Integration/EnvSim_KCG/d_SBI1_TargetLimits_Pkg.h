/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _d_SBI1_TargetLimits_Pkg_H_
#define _d_SBI1_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  L_internal_real_Type_SDM_Types_Pkg /* D_SBD1/ */ D_SBD1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L4=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */ Context_getLocationOnCurve_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  T_trac_t_TargetLimits_Pkg /* _L3/ */ _L3;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  L_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  T_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
} outC_d_SBI1_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_SBI1/ */
extern void d_SBI1_TargetLimits_Pkg(
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* V/ */
  V_internal_real_Type_SDM_Types_Pkg V,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_SBI1_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_SBI1_reset_TargetLimits_Pkg(outC_d_SBI1_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_SBI1_init_TargetLimits_Pkg(outC_d_SBI1_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _d_SBI1_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_SBI1_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

