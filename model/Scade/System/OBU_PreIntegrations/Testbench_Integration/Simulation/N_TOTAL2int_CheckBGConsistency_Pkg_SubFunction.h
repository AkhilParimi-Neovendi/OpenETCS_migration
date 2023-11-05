/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction_H_
#define _N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* n_total2int/ */ n_total2int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L1/ */ _L1;
  N_TOTAL /* _L11/ */ _L11;
} outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int/ */
extern void N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
  /* n_total/ */
  N_TOTAL n_total,
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void N_TOTAL2int_init_CheckBGConsistency_Pkg_SubFunction(
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

