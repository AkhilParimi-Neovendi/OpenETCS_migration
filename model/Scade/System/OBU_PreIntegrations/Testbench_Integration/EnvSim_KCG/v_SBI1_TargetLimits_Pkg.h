/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _v_SBI1_TargetLimits_Pkg_H_
#define _v_SBI1_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  V_internal_real_Type_SDM_Types_Pkg /* V_SBI1/ */ V_SBI1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_selectLEValid_TargetLimits_Pkg /* _L16=(TargetLimits_Pkg::selectLEValid#1)/ */ Context_selectLEValid_1;
  outC_getSpeedOnCurve_CalcBrakingCurves_types /* _L19=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */ Context_getSpeedOnCurve_2;
  outC_getSpeedOnCurve_CalcBrakingCurves_types /* _L4=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */ Context_getSpeedOnCurve_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  L_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  T_trac_t_TargetLimits_Pkg /* _L3/ */ _L3;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  L_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L12/ */ _L12;
  V_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  T_internal_real_Type_SDM_Types_Pkg /* _L13/ */ _L13;
  T_internal_real_Type_SDM_Types_Pkg /* _L14/ */ _L14;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L19/ */ _L19;
  V_internal_real_Type_SDM_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L22/ */ _L22;
  L_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
} outC_v_SBI1_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::v_SBI1/ */
extern void v_SBI1_TargetLimits_Pkg(
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* D_estfront/ */
  L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* D_EOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* t_driver/ */
  T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_SBI1_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void v_SBI1_reset_TargetLimits_Pkg(outC_v_SBI1_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void v_SBI1_init_TargetLimits_Pkg(outC_v_SBI1_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _v_SBI1_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_SBI1_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

