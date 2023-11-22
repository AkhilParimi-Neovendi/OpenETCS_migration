/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _d_SBI2_TargetLimits_Pkg_H_
#define _d_SBI2_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  L_internal_real_Type_SDM_Types_Pkg /* D_SBI2/ */ D_SBI2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L82=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */ Context_getLocationOnCurve_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L71/ */ _L71;
  L_internal_real_Type_SDM_Types_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L82/ */ _L82;
  bec_t_TargetLimits_Pkg /* _L83/ */ _L83;
  kcg_float32 /* _L85/ */ _L85;
  kcg_float32 /* _L88/ */ _L88;
  T_trac_t_TargetLimits_Pkg /* _L87/ */ _L87;
  kcg_float32 /* _L86/ */ _L86;
  V_internal_real_Type_SDM_Types_Pkg /* _L89/ */ _L89;
  L_internal_real_Type_SDM_Types_Pkg /* _L93/ */ _L93;
  V_internal_real_Type_SDM_Types_Pkg /* _L92/ */ _L92;
  T_internal_real_Type_SDM_Types_Pkg /* _L94/ */ _L94;
} outC_d_SBI2_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_SBI2/ */
extern void d_SBI2_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* bec/ */
  bec_t_TargetLimits_Pkg *bec,
  /* v_est/ */
  V_internal_real_Type_SDM_Types_Pkg v_est,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_SBI2_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_SBI2_reset_TargetLimits_Pkg(outC_d_SBI2_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_SBI2_init_TargetLimits_Pkg(outC_d_SBI2_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _d_SBI2_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_SBI2_TargetLimits_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

