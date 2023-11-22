/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ToUnfitted_Conditions_H_
#define _ToUnfitted_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition21/ */ Condition21;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Current_Level/ */ mem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L451/ */ _L451;
  kcg_bool /* _L450/ */ _L450;
  M_LEVEL /* _L441/ */ _L441;
  M_LEVEL /* _L439/ */ _L439;
  kcg_bool /* _L454/ */ _L454;
  M_LEVEL /* _L455/ */ _L455;
  M_LEVEL /* _L456/ */ _L456;
} outC_ToUnfitted_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToUnfitted/ */
extern void ToUnfitted_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  outC_ToUnfitted_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToUnfitted_reset_Conditions(outC_ToUnfitted_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToUnfitted_init_Conditions(outC_ToUnfitted_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToUnfitted_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToUnfitted_Conditions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

