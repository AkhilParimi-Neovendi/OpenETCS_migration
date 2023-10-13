/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _f_41_TargetLimits_Pkg_H_
#define _f_41_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* v_out/ */ v_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_limitPositive_SDM_Types_Pkg /* _L13=(SDM_Types_Pkg::limitPositive#1)/ */ Context_limitPositive_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L13/ */ _L13;
} outC_f_41_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::f_41/ */
extern void f_41_TargetLimits_Pkg(
  /* v_in/ */
  V_internal_real_Type_SDM_Types_Pkg v_in,
  outC_f_41_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void f_41_reset_TargetLimits_Pkg(outC_f_41_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void f_41_init_TargetLimits_Pkg(outC_f_41_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _f_41_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** f_41_TargetLimits_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

