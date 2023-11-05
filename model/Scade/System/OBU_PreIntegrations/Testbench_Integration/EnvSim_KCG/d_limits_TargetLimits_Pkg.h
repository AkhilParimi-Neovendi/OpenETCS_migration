/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _d_limits_TargetLimits_Pkg_H_
#define _d_limits_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "d_SBI1_TargetLimits_Pkg.h"
#include "selectLEValid_TargetLimits_Pkg.h"
#include "isLEValid_TargetLimits_Pkg.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* D_I/ */ D_I;
  L_internal_real_Type_SDM_Types_Pkg /* D_P/ */ D_P;
  L_internal_real_Type_SDM_Types_Pkg /* D_W/ */ D_W;
  L_internal_real_Type_SDM_Types_Pkg /* D_FLOI/ */ D_FLOI;
  kcg_bool /* FLOIisSBI1/ */ FLOIisSBI1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_selectLEValid_TargetLimits_Pkg /* _L31=(TargetLimits_Pkg::selectLEValid#1)/ */ Context_selectLEValid_1;
  outC_isLEValid_TargetLimits_Pkg /* _L11=(TargetLimits_Pkg::isLEValid#2)/ */ Context_isLEValid_2;
  outC_d_SBI1_TargetLimits_Pkg /* _L40=(TargetLimits_Pkg::d_SBI1#1)/ */ Context_d_SBI1_1;
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L28=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */ Context_getLocationOnCurve_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  L_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  L_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  L_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
  L_internal_real_Type_SDM_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  T_internal_real_Type_SDM_Types_Pkg /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
  V_internal_real_Type_SDM_Types_Pkg /* _L15/ */ _L15;
  T_internal_real_Type_SDM_Types_Pkg /* _L16/ */ _L16;
  kcg_float32 /* _L17/ */ _L17;
  kcg_float32 /* _L18/ */ _L18;
  kcg_float32 /* _L19/ */ _L19;
  kcg_float32 /* _L20/ */ _L20;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  L_internal_real_Type_SDM_Types_Pkg /* _L29/ */ _L29;
  V_internal_real_Type_SDM_Types_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L33/ */ _L33;
  V_internal_real_Type_SDM_Types_Pkg /* _L34/ */ _L34;
  kcg_bool /* _L36/ */ _L36;
  kcg_float32 /* _L38/ */ _L38;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L40/ */ _L40;
  L_internal_real_Type_SDM_Types_Pkg /* _L41/ */ _L41;
  T_trac_t_TargetLimits_Pkg /* _L42/ */ _L42;
  V_internal_real_Type_SDM_Types_Pkg /* _L43/ */ _L43;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L44/ */ _L44;
  T_internal_real_Type_SDM_Types_Pkg /* _L39/ */ _L39;
  T_trac_t_TargetLimits_Pkg /* _L25/ */ _L25;
} outC_d_limits_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_limits/ */
extern void d_limits_TargetLimits_Pkg(
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* SBI2valid/ */
  kcg_bool SBI2valid,
  /* D_SBI2_V_est/ */
  L_internal_real_Type_SDM_Types_Pkg D_SBI2_V_est,
  /* D_estfront/ */
  L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* D_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  outC_d_limits_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_limits_reset_TargetLimits_Pkg(
  outC_d_limits_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_limits_init_TargetLimits_Pkg(
  outC_d_limits_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _d_limits_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_limits_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

