/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _v_ReleaseOnboardIterator_TargetLimits_Pkg_H_
#define _v_ReleaseOnboardIterator_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "f_41_TargetLimits_Pkg.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* run_condition/ */ run_condition;
  V_internal_real_Type_SDM_Types_Pkg /* V_release_next/ */ V_release_next;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLocationOnCurve_CalcBrakingCurves_types /* _L31=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */ Context_getLocationOnCurve_1;
  outC_getSpeedOnCurve_CalcBrakingCurves_types /* _L20=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */ Context_getSpeedOnCurve_1;
  outC_f_41_TargetLimits_Pkg /* _L9=(TargetLimits_Pkg::f_41#1)/ */ Context_f_41_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* @1/A_Output/ */ A_Output_Abs_1_float32;
  kcg_float32 /* @1/A_Input/ */ A_Input_Abs_1_float32;
  kcg_float32 /* @1/_L8/ */ _L8_Abs_1_float32;
  kcg_float32 /* @1/_L5/ */ _L5_Abs_1_float32;
  kcg_float32 /* @1/_L3/ */ _L3_Abs_1_float32;
  kcg_float32 /* @1/_L2/ */ _L2_Abs_1_float32;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float32;
  kcg_float32 /* @2/Ma_Output/ */ Ma_Output_Max_1_float32;
  kcg_float32 /* @2/I2/ */ I2_Max_1_float32;
  kcg_float32 /* @2/I1/ */ I1_Max_1_float32;
  kcg_float32 /* @2/_L4/ */ _L4_Max_1_float32;
  kcg_bool /* @2/_L3/ */ _L3_Max_1_float32;
  kcg_float32 /* @2/_L2/ */ _L2_Max_1_float32;
  kcg_float32 /* @2/_L1/ */ _L1_Max_1_float32;
  V_internal_real_Type_SDM_Types_Pkg /* v_delta0rsob/ */ v_delta0rsob;
  L_internal_real_Type_SDM_Types_Pkg /* d_bec/ */ d_bec;
  kcg_bool /* end_condition/ */ end_condition;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  kcg_bool /* _L10/ */ _L10;
  V_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  T_trac_t_TargetLimits_Pkg /* _L8/ */ _L8;
  V_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L3/ */ _L3;
  V_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
  V_internal_real_Type_SDM_Types_Pkg /* _L12/ */ _L12;
  kcg_float32 /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
  V_internal_real_Type_SDM_Types_Pkg /* _L15/ */ _L15;
  V_internal_real_Type_SDM_Types_Pkg /* _L18/ */ _L18;
  V_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  L_internal_real_Type_SDM_Types_Pkg /* _L22/ */ _L22;
  L_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
  kcg_float32 /* _L24/ */ _L24;
  kcg_float32 /* _L25/ */ _L25;
  V_internal_real_Type_SDM_Types_Pkg /* _L26/ */ _L26;
  V_internal_real_Type_SDM_Types_Pkg /* _L28/ */ _L28;
  V_internal_real_Type_SDM_Types_Pkg /* _L29/ */ _L29;
  L_internal_real_Type_SDM_Types_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L31/ */ _L31;
  V_internal_real_Type_SDM_Types_Pkg /* _L33/ */ _L33;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L38/ */ _L38;
  kcg_float32 /* _L39/ */ _L39;
  kcg_float32 /* _L40/ */ _L40;
  V_internal_real_Type_SDM_Types_Pkg /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_float32 /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_float32 /* _L48/ */ _L48;
  kcg_float32 /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  T_internal_real_Type_SDM_Types_Pkg /* _L52/ */ _L52;
  T_internal_real_Type_SDM_Types_Pkg /* _L53/ */ _L53;
  T_trac_t_TargetLimits_Pkg /* _L55/ */ _L55;
  kcg_bool /* _L54/ */ _L54;
} outC_v_ReleaseOnboardIterator_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::v_ReleaseOnboardIterator/ */
extern void v_ReleaseOnboardIterator_TargetLimits_Pkg(
  /* V_release/ */
  V_internal_real_Type_SDM_Types_Pkg V_release,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_ura/ */
  V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* D_tripEOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_tripEOA,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_ReleaseOnboardIterator_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void v_ReleaseOnboardIterator_reset_TargetLimits_Pkg(
  outC_v_ReleaseOnboardIterator_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void v_ReleaseOnboardIterator_init_TargetLimits_Pkg(
  outC_v_ReleaseOnboardIterator_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TargetLimits_Pkg::v_ReleaseOnboardIterator/
  @1: (math::Abs#1)
  @2: (math::Max#1)
*/

#endif /* _v_ReleaseOnboardIterator_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_ReleaseOnboardIterator_TargetLimits_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

