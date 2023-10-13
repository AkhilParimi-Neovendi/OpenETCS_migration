/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg_H_
#define _mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p45_radioNetworkRegistrationOrder_1/ */ p45_radioNetworkRegistrationOrder_1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p42_sessionCmd_for_RBC_1/ */ p42_sessionCmd_for_RBC_1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* additionalSessionCmdsFromTrack_for_RBC_1/ */ additionalSessionCmdsFromTrack_for_RBC_1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p45_radioNetworkRegistrationOrder_2/ */ p45_radioNetworkRegistrationOrder_2;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p42_sessionCmd_for_RBC_2/ */ p42_sessionCmd_for_RBC_2;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* additionalSessionCmdsFromTrack_for_RBC_2/ */ additionalSessionCmdsFromTrack_for_RBC_2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L70/ */ _L70_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L69/ */ _L69_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L68/ */ _L68_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L67/ */ _L67_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L63/ */ _L63_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L64/ */ _L64_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L66/ */ _L66_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L62/ */ _L62_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L61/ */ _L61_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L49/ */ _L49_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L60/ */ _L60_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L59/ */ _L59_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L58/ */ _L58_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L52/ */ _L52_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L51/ */ _L51_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L50/ */ _L50_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L47/ */ _L47_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L46/ */ _L46_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L44/ */ _L44_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L43/ */ _L43_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L41/ */ _L41_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L40/ */ _L40_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L39/ */ _L39_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L18/ */ _L18_else_IfBlock1;
} outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out/ */
extern void mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* additionalSessionCmdsFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* p42_sessionCmd_for_acceptingRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_acceptingRBC_in,
  /* p42_sessionCmd_for_handingOverRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_handingOverRBC_in,
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_handingOverRBC_in,
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_acceptingRBC_in,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mobileCtrlCmdRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mobileCtrlCmdRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

