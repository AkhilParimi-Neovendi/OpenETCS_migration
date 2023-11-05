/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _v_SBI2_TargetLimits_Pkg_H_
#define _v_SBI2_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"
#include "selectLEValid_TargetLimits_Pkg.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  V_internal_real_Type_SDM_Types_Pkg /* V_SBI2/ */ V_SBI2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_selectLEValid_TargetLimits_Pkg /* _L47=(TargetLimits_Pkg::selectLEValid#1)/ */ Context_selectLEValid_1;
  outC_getSpeedOnCurve_CalcBrakingCurves_types /* _L39=(CalcBrakingCurves_types::getSpeedOnCurve#2)/ */ Context_getSpeedOnCurve_2;
  outC_getSpeedOnCurve_CalcBrakingCurves_types /* _L1=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */ Context_getSpeedOnCurve_1;
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L54=(CalcBrakingCurves_types::getLocationOnCurve#3)/ */ Context_getLocationOnCurve_3;
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L18=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */ Context_getLocationOnCurve_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  kcg_bool every2;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  L_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  kcg_float32 /* _L5/ */ _L5;
  V_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  T_trac_t_TargetLimits_Pkg /* _L7/ */ _L7;
  kcg_float32 /* _L8/ */ _L8;
  kcg_bool /* _L11/ */ _L11;
  kcg_float32 /* _L13/ */ _L13;
  V_internal_real_Type_SDM_Types_Pkg /* _L14/ */ _L14;
  bec_t_TargetLimits_Pkg /* _L15/ */ _L15;
  kcg_float32 /* _L16/ */ _L16;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L17/ */ _L17;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L18/ */ _L18;
  L_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L20/ */ _L20;
  V_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  kcg_float32 /* _L24/ */ _L24;
  L_internal_real_Type_SDM_Types_Pkg /* _L28/ */ _L28;
  V_internal_real_Type_SDM_Types_Pkg /* _L27/ */ _L27;
  T_internal_real_Type_SDM_Types_Pkg /* _L29/ */ _L29;
  kcg_float32 /* _L30/ */ _L30;
  T_internal_real_Type_SDM_Types_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L35/ */ _L35;
  L_internal_real_Type_SDM_Types_Pkg /* _L36/ */ _L36;
  kcg_bool /* _L39/ */ _L39;
  V_internal_real_Type_SDM_Types_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L42/ */ _L42;
  L_internal_real_Type_SDM_Types_Pkg /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_float32 /* _L49/ */ _L49;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L54/ */ _L54;
  L_internal_real_Type_SDM_Types_Pkg /* _L55/ */ _L55;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L56/ */ _L56;
  V_internal_real_Type_SDM_Types_Pkg /* _L57/ */ _L57;
} outC_v_SBI2_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::v_SBI2/ */
extern void v_SBI2_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* bec/ */
  bec_t_TargetLimits_Pkg *bec,
  /* D_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* t_driver/ */
  T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_SBI2_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void v_SBI2_reset_TargetLimits_Pkg(outC_v_SBI2_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void v_SBI2_init_TargetLimits_Pkg(outC_v_SBI2_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _v_SBI2_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_SBI2_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

