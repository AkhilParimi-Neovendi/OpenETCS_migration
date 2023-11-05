/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _selectLEValid_TargetLimits_Pkg_H_
#define _selectLEValid_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isUpper/ */ isUpper;
  kcg_bool /* valid/ */ valid;
  kcg_float32 /* o/ */ o;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isLEValid_TargetLimits_Pkg /* _L16=(TargetLimits_Pkg::isLEValid#1)/ */ Context_isLEValid_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L4/ */ _L4;
  kcg_bool /* _L9/ */ _L9;
  kcg_float32 /* _L15/ */ _L15;
  kcg_float32 /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L16/ */ _L16;
} outC_selectLEValid_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::selectLEValid/ */
extern void selectLEValid_TargetLimits_Pkg(
  /* valid1/ */
  kcg_bool valid1,
  /* i1/ */
  kcg_float32 i1,
  /* valid2/ */
  kcg_bool valid2,
  /* i2/ */
  kcg_float32 i2,
  outC_selectLEValid_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void selectLEValid_reset_TargetLimits_Pkg(
  outC_selectLEValid_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void selectLEValid_init_TargetLimits_Pkg(
  outC_selectLEValid_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _selectLEValid_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** selectLEValid_TargetLimits_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

