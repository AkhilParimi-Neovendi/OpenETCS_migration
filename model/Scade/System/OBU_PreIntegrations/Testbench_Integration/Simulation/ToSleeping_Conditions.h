/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ToSleeping_Conditions_H_
#define _ToSleeping_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition14/ */ Condition14;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L11/ */ _L11;
} outC_ToSleeping_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToSleeping/ */
extern void ToSleeping_Conditions(
  /* All_Desks_Closed/ */
  kcg_bool All_Desks_Closed,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Train_Req_SL/ */
  kcg_bool Train_Req_SL,
  outC_ToSleeping_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToSleeping_reset_Conditions(outC_ToSleeping_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToSleeping_init_Conditions(outC_ToSleeping_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToSleeping_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToSleeping_Conditions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

