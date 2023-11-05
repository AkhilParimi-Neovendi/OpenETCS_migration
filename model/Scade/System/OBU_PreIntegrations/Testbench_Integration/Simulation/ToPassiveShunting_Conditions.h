/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ToPassiveShunting_Conditions_H_
#define _ToPassiveShunting_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition26/ */ Condition26;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
} outC_ToPassiveShunting_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToPassiveShunting/ */
extern void ToPassiveShunting_Conditions(
  /* Train_Permitted_PS/ */
  kcg_bool Train_Permitted_PS,
  /* Continue_Shunting_Function_Active/ */
  kcg_bool Continue_Shunting_Function_Active,
  /* Desks_Closed/ */
  kcg_bool Desks_Closed,
  outC_ToPassiveShunting_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToPassiveShunting_reset_Conditions(
  outC_ToPassiveShunting_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToPassiveShunting_init_Conditions(
  outC_ToPassiveShunting_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToPassiveShunting_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToPassiveShunting_Conditions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

