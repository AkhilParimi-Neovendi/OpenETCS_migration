/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg_H_
#define _determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  connection_ids_T_Handover_Pkg /* supervisingRBC/ */ supervisingRBC;
  kcg_bool /* supervising_isMobile_1/ */ supervising_isMobile_1;
  kcg_bool /* supervising_isMobile_2/ */ supervising_isMobile_2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L21/ */ _L21_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L20/ */ _L20_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L19/ */ _L19_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L18/ */ _L18_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L17/ */ _L17_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L16/ */ _L16_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L15/ */ _L15_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L14/ */ _L14_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L7/ */ _L7_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* supervisingStatusFromMobile/ */ supervisingStatusFromMobile;
  connection_ids_T_Handover_Pkg /* _L13/ */ _L13;
  morcStatus_T_RCM_Session_Types_Pkg /* _L37/ */ _L37;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L44/ */ _L44;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L45/ */ _L45;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  NID_C /* _L54/ */ _L54;
  NID_RBC /* _L55/ */ _L55;
  NID_RADIO /* _L56/ */ _L56;
  NID_MN /* _L57/ */ _L57;
  kcg_int64 /* _L58/ */ _L58;
} outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC/ */
extern void determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void determineSupervisingRBC_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void determineSupervisingRBC_init_Handover_Pkg_handoverUtils_Pkg(
  outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

