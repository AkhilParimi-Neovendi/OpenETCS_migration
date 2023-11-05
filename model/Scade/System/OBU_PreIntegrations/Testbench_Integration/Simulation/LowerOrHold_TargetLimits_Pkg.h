/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _LowerOrHold_TargetLimits_Pkg_H_
#define _LowerOrHold_TargetLimits_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* vo/ */ vo;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* vi/ */ mem_vi;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L32/ */ _L32;
  kcg_int32 /* _L31/ */ _L31;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L33/ */ _L33;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
} outC_LowerOrHold_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::LowerOrHold/ */
extern void LowerOrHold_TargetLimits_Pkg(
  /* vi/ */
  V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* enable/ */
  kcg_bool enable,
  outC_LowerOrHold_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LowerOrHold_reset_TargetLimits_Pkg(
  outC_LowerOrHold_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LowerOrHold_init_TargetLimits_Pkg(
  outC_LowerOrHold_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* vo/ */ Context_vo;
  /* ----------------------- local memories  ------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* vi/ */ Context_mem_vi;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_LowerOrHold_TargetLimits_Pkg;

extern void kcg_save_SV_LowerOrHold_TargetLimits_Pkg(
  SV_LowerOrHold_TargetLimits_Pkg *SV,
  outC_LowerOrHold_TargetLimits_Pkg *outC);
extern void kcg_load_SV_LowerOrHold_TargetLimits_Pkg(
  outC_LowerOrHold_TargetLimits_Pkg *outC,
  SV_LowerOrHold_TargetLimits_Pkg *SV);



#endif /* _LowerOrHold_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LowerOrHold_TargetLimits_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

