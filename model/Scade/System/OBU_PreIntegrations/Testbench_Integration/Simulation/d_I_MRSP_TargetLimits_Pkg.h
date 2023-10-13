/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _d_I_MRSP_TargetLimits_Pkg_H_
#define _d_I_MRSP_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  L_internal_real_Type_SDM_Types_Pkg /* D_I/ */ D_I;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L27=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */ Context_getLocationOnCurve_3;
  outC_d_EBI_non_est_TargetLimits_Pkg /* _L32=(TargetLimits_Pkg::d_EBI_non_est#1)/ */ Context_d_EBI_non_est_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Mi_Output/ */ Mi_Output_Min_1_float64;
  kcg_float64 /* @1/I2/ */ I2_Min_1_float64;
  kcg_float64 /* @1/I1/ */ I1_Min_1_float64;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_float64;
  kcg_float64 /* @1/_L24/ */ _L24_Min_1_float64;
  kcg_float64 /* @1/_L22/ */ _L22_Min_1_float64;
  kcg_float64 /* @1/_L21/ */ _L21_Min_1_float64;
  kcg_bool /* _L8/ */ _L8;
  T_trac_t_TargetLimits_Pkg /* _L10/ */ _L10;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L13/ */ _L13;
  L_internal_real_Type_SDM_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L20/ */ _L20;
  T_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  L_internal_real_Type_SDM_Types_Pkg /* _L22/ */ _L22;
  L_internal_real_Type_SDM_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L29/ */ _L29;
  V_internal_real_Type_SDM_Types_Pkg /* _L30/ */ _L30;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L31/ */ _L31;
  L_internal_real_Type_SDM_Types_Pkg /* _L32/ */ _L32;
  kcg_float64 /* _L33/ */ _L33;
  kcg_float64 /* _L34/ */ _L34;
  V_internal_real_Type_SDM_Types_Pkg /* _L37/ */ _L37;
  T_internal_real_Type_SDM_Types_Pkg /* _L44/ */ _L44;
} outC_d_I_MRSP_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_I_MRSP/ */
extern void d_I_MRSP_TargetLimits_Pkg(
  /* V_MRSP/ */
  V_internal_real_Type_SDM_Types_Pkg V_MRSP,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_d_I_MRSP_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_I_MRSP_reset_TargetLimits_Pkg(
  outC_d_I_MRSP_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_I_MRSP_init_TargetLimits_Pkg(
  outC_d_I_MRSP_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TargetLimits_Pkg::d_I_MRSP/
  @1: (math::Min#1)
*/

#endif /* _d_I_MRSP_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_I_MRSP_TargetLimits_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

