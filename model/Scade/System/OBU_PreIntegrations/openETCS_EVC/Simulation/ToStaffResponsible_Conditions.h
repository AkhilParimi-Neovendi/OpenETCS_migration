/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ToStaffResponsible_Conditions_H_
#define _ToStaffResponsible_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition44/ */ Condition44;
  kcg_bool /* Condition45/ */ Condition45;
  kcg_bool /* Condition37/ */ Condition37;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Current_Level/ */ mem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Level_prev_L0_LNTC/ */ Level_prev_L0_LNTC;
  kcg_bool /* Level_L2_L3/ */ Level_L2_L3;
  kcg_bool /* Level_L1/ */ Level_L1;
  kcg_bool /* _L374/ */ _L374;
  kcg_bool /* _L429/ */ _L429;
  kcg_bool /* _L436/ */ _L436;
  kcg_bool /* _L437/ */ _L437;
  kcg_bool /* _L451/ */ _L451;
  kcg_bool /* _L456/ */ _L456;
  kcg_bool /* _L457/ */ _L457;
  kcg_bool /* _L458/ */ _L458;
  kcg_bool /* _L459/ */ _L459;
  kcg_bool /* _L465/ */ _L465;
  kcg_bool /* _L461/ */ _L461;
  kcg_bool /* _L460/ */ _L460;
  kcg_bool /* _L466/ */ _L466;
  kcg_bool /* _L467/ */ _L467;
  kcg_bool /* _L468/ */ _L468;
  kcg_bool /* _L469/ */ _L469;
} outC_ToStaffResponsible_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToStaffResponsible/ */
extern void ToStaffResponsible_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Driver_Req_Override/ */
  kcg_bool Driver_Req_Override,
  /* Train_Speed_Under_Override_Limit/ */
  kcg_bool Train_Speed_Under_Override_Limit,
  /* Override_Function_Active/ */
  kcg_bool Override_Function_Active,
  /* Emergency_Stop_Message_Received/ */
  kcg_bool Emergency_Stop_Message_Received,
  outC_ToStaffResponsible_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToStaffResponsible_reset_Conditions(
  outC_ToStaffResponsible_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToStaffResponsible_init_Conditions(
  outC_ToStaffResponsible_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToStaffResponsible_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToStaffResponsible_Conditions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

