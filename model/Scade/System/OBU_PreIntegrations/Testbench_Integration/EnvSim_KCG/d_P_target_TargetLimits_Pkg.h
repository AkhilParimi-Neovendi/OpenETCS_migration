/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _d_P_target_TargetLimits_Pkg_H_
#define _d_P_target_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  L_internal_real_Type_SDM_Types_Pkg /* D_P_target/ */ D_P_target;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_d_EBI_non_est_TargetLimits_Pkg /* _L13=(TargetLimits_Pkg::d_EBI_non_est#1)/ */ Context_d_EBI_non_est_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L6/ */ _L6;
  V_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  T_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  kcg_float32 /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  L_internal_real_Type_SDM_Types_Pkg /* _L13/ */ _L13;
  T_trac_t_TargetLimits_Pkg /* _L14/ */ _L14;
} outC_d_P_target_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_P_target/ */
extern void d_P_target_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_P_target_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_P_target_reset_TargetLimits_Pkg(
  outC_d_P_target_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_P_target_init_TargetLimits_Pkg(
  outC_d_P_target_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _d_P_target_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_P_target_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

