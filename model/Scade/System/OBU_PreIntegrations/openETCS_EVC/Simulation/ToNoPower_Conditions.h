/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ToNoPower_Conditions_H_
#define _ToNoPower_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition29/ */ Condition29;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
} outC_ToNoPower_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToNoPower/ */
extern void ToNoPower_Conditions(
  /* OnBoard_Powered/ */
  kcg_bool OnBoard_Powered,
  outC_ToNoPower_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToNoPower_reset_Conditions(outC_ToNoPower_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToNoPower_init_Conditions(outC_ToNoPower_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToNoPower_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToNoPower_Conditions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

