/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ToIsolate_Conditions_H_
#define _ToIsolate_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition1/ */ Condition1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
} outC_ToIsolate_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToIsolate/ */
extern void ToIsolate_Conditions(
  /* ETCS_Isolation_Status/ */
  kcg_bool ETCS_Isolation_Status,
  outC_ToIsolate_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToIsolate_reset_Conditions(outC_ToIsolate_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToIsolate_init_Conditions(outC_ToIsolate_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToIsolate_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToIsolate_Conditions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

