/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _radioStatusRouter_Handover_Pkg_handoverUtils_Pkg_H_
#define _radioStatusRouter_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatusFromAcceptingRBC/ */ morcStatusFromAcceptingRBC;
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatusFromHandingOverRBC/ */ morcStatusFromHandingOverRBC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L40/ */ _L40_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L39/ */ _L39_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L35/ */ _L35_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L34/ */ _L34_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L18/ */ _L18_else_IfBlock1;
} outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter/ */
extern void radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void radioStatusRouter_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void radioStatusRouter_init_Handover_Pkg_handoverUtils_Pkg(
  outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _radioStatusRouter_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

