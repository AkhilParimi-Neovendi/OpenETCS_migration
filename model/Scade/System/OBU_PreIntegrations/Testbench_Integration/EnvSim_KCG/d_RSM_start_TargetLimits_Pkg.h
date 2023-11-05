/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _d_RSM_start_TargetLimits_Pkg_H_
#define _d_RSM_start_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"
#include "d_SBI1_TargetLimits_Pkg.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* D_FLOI/ */ D_FLOI;
  L_internal_real_Type_SDM_Types_Pkg /* D_SBI2/ */ D_SBI2;
  L_internal_real_Type_SDM_Types_Pkg /* D_SBI1/ */ D_SBI1;
  kcg_bool /* valid_SBI2/ */ valid_SBI2;
  kcg_bool /* valid_SBI1/ */ valid_SBI1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isLEValid_TargetLimits_Pkg /* _L24=(TargetLimits_Pkg::isLEValid#1)/ */ Context_isLEValid_1;
  outC_d_EBI_non_est_TargetLimits_Pkg /* _L22=(TargetLimits_Pkg::d_EBI_non_est#2)/ */ Context_d_EBI_non_est_2;
  outC_d_SBI1_TargetLimits_Pkg /* _L11=(TargetLimits_Pkg::d_SBI1#1)/ */ Context_d_SBI1_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L10/ */ _L10;
  T_trac_t_TargetLimits_Pkg /* _L8/ */ _L8;
  V_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L5/ */ _L5;
  L_internal_real_Type_SDM_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L13/ */ _L13;
  V_internal_real_Type_SDM_Types_Pkg /* _L14/ */ _L14;
  kcg_float32 /* _L16/ */ _L16;
  L_internal_real_Type_SDM_Types_Pkg /* _L18/ */ _L18;
  L_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  kcg_float32 /* _L20/ */ _L20;
  L_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  L_internal_real_Type_SDM_Types_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L24/ */ _L24;
  T_trac_t_TargetLimits_Pkg /* _L26/ */ _L26;
} outC_d_RSM_start_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_RSM_start/ */
extern void d_RSM_start_TargetLimits_Pkg(
  /* V_release/ */
  V_internal_real_Type_SDM_Types_Pkg V_release,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* d_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* d_est/ */
  L_internal_real_Type_SDM_Types_Pkg d_est,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_RSM_start_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_RSM_start_reset_TargetLimits_Pkg(
  outC_d_RSM_start_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_RSM_start_init_TargetLimits_Pkg(
  outC_d_RSM_start_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _d_RSM_start_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_RSM_start_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

