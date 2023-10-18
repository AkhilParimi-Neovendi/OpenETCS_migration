/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _ToSystemFailure_Conditions_H_
#define _ToSystemFailure_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition13/ */ Condition13;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
} outC_ToSystemFailure_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToSystemFailure/ */
extern void ToSystemFailure_Conditions(
  /* Safety_Failure_Occured/ */
  kcg_bool Safety_Failure_Occured,
  outC_ToSystemFailure_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToSystemFailure_reset_Conditions(
  outC_ToSystemFailure_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToSystemFailure_init_Conditions(
  outC_ToSystemFailure_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToSystemFailure_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToSystemFailure_Conditions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

