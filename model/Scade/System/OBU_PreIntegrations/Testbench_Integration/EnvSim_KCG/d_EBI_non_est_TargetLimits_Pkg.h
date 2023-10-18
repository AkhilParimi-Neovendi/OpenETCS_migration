/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _d_EBI_non_est_TargetLimits_Pkg_H_
#define _d_EBI_non_est_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "f_41_TargetLimits_Pkg.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* D_SBI2/ */ D_SBI2;
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L3=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */ Context_getLocationOnCurve_1;
  outC_f_41_TargetLimits_Pkg /* _L5=(TargetLimits_Pkg::f_41#1)/ */ Context_f_41_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  L_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L2/ */ _L2;
  V_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L10/ */ _L10;
  kcg_float64 /* _L12/ */ _L12;
  T_trac_t_TargetLimits_Pkg /* _L13/ */ _L13;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L14/ */ _L14;
  V_internal_real_Type_SDM_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L19/ */ _L19;
  T_internal_real_Type_SDM_Types_Pkg /* _L29/ */ _L29;
  T_internal_real_Type_SDM_Types_Pkg /* _L28/ */ _L28;
  T_internal_real_Type_SDM_Types_Pkg /* _L27/ */ _L27;
  T_internal_real_Type_SDM_Types_Pkg /* _L26/ */ _L26;
  T_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L30/ */ _L30;
  T_internal_real_Type_SDM_Types_Pkg /* _L31/ */ _L31;
} outC_d_EBI_non_est_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_EBI_non_est/ */
extern void d_EBI_non_est_TargetLimits_Pkg(
  /* V/ */
  V_internal_real_Type_SDM_Types_Pkg V,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_EBI_non_est_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_EBI_non_est_reset_TargetLimits_Pkg(
  outC_d_EBI_non_est_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_EBI_non_est_init_TargetLimits_Pkg(
  outC_d_EBI_non_est_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _d_EBI_non_est_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_EBI_non_est_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

