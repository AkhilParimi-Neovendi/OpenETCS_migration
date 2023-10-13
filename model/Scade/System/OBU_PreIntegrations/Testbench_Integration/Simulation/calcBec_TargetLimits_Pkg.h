/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _calcBec_TargetLimits_Pkg_H_
#define _calcBec_TargetLimits_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  bec_t_TargetLimits_Pkg /* bec/ */ bec;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Ma_Output/ */ Ma_Output_Max_1_float64;
  kcg_float64 /* @1/I2/ */ I2_Max_1_float64;
  kcg_float64 /* @1/I1/ */ I1_Max_1_float64;
  kcg_float64 /* @1/_L4/ */ _L4_Max_1_float64;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Max_1_float64;
  kcg_float64 /* @1/_L1/ */ _L1_Max_1_float64;
  kcg_float64 /* @2/Ma_Output/ */ Ma_Output_Max_2_float64;
  kcg_float64 /* @2/I2/ */ I2_Max_2_float64;
  kcg_float64 /* @2/I1/ */ I1_Max_2_float64;
  kcg_float64 /* @2/_L4/ */ _L4_Max_2_float64;
  kcg_bool /* @2/_L3/ */ _L3_Max_2_float64;
  kcg_float64 /* @2/_L2/ */ _L2_Max_2_float64;
  kcg_float64 /* @2/_L1/ */ _L1_Max_2_float64;
  V_internal_real_Type_SDM_Types_Pkg /* v_bec/ */ v_bec;
  V_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
  kcg_float64 /* _L24/ */ _L24;
  V_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
  kcg_float64 /* _L28/ */ _L28;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L33/ */ _L33;
  V_internal_real_Type_SDM_Types_Pkg /* _L34/ */ _L34;
  V_internal_real_Type_SDM_Types_Pkg /* _L38/ */ _L38;
  kcg_float64 /* _L39/ */ _L39;
  kcg_float64 /* _L44/ */ _L44;
  kcg_float64 /* _L45/ */ _L45;
  V_internal_real_Type_SDM_Types_Pkg /* _L48/ */ _L48;
  kcg_float64 /* _L49/ */ _L49;
  kcg_float64 /* _L51/ */ _L51;
  T_trac_t_TargetLimits_Pkg /* _L83/ */ _L83;
  V_internal_real_Type_SDM_Types_Pkg /* _L91/ */ _L91;
  V_internal_real_Type_SDM_Types_Pkg /* _L92/ */ _L92;
  TractionDeltaTriple_TargetLimits_Pkg /* _L94/ */ _L94;
  V_internal_real_Type_SDM_Types_Pkg /* _L102/ */ _L102;
  V_internal_real_Type_SDM_Types_Pkg /* _L101/ */ _L101;
  V_internal_real_Type_SDM_Types_Pkg /* _L100/ */ _L100;
  TractionDeltaTriple_TargetLimits_Pkg /* _L110/ */ _L110;
  V_internal_real_Type_SDM_Types_Pkg /* _L107/ */ _L107;
  V_internal_real_Type_SDM_Types_Pkg /* _L108/ */ _L108;
  V_internal_real_Type_SDM_Types_Pkg /* _L109/ */ _L109;
  bec_t_TargetLimits_Pkg /* _L113/ */ _L113;
  T_internal_real_Type_SDM_Types_Pkg /* _L114/ */ _L114;
  T_internal_real_Type_SDM_Types_Pkg /* _L115/ */ _L115;
} outC_calcBec_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::calcBec/ */
extern void calcBec_TargetLimits_Pkg(
  /* V_dt/ */
  TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_calcBec_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calcBec_reset_TargetLimits_Pkg(outC_calcBec_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calcBec_init_TargetLimits_Pkg(outC_calcBec_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TargetLimits_Pkg::calcBec/
  @1: (math::Max#1)
  @2: (math::Max#2)
*/

#endif /* _calcBec_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcBec_TargetLimits_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

