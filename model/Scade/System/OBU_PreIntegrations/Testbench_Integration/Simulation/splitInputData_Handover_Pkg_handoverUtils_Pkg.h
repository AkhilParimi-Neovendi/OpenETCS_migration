/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _splitInputData_Handover_Pkg_handoverUtils_Pkg_H_
#define _splitInputData_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromHandingOverMobile/ */ dataFromHandingOverMobile;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromAcceptingMobile/ */ dataFromAcceptingMobile;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromBalise/ */ dataFromBalise;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromTrack_out/ */ dataFromTrack_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L47/ */ _L47_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L46/ */ _L46_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L45/ */ _L45_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L44/ */ _L44_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L43/ */ _L43_then_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:then:_L42/ */ _L42_then_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:then:_L41/ */ _L41_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L40/ */ _L40_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:then:_L37/ */ _L37_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L27/ */ _L27_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L26/ */ _L26_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L157/ */ _L157_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L156/ */ _L156_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L155/ */ _L155_else_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L154/ */ _L154_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L153/ */ _L153_else_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L149/ */ _L149_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L148/ */ _L148_else_IfBlock1;
  NID_RBC /* IfBlock1:else:_L147/ */ _L147_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L144/ */ _L144_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L142/ */ _L142_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L141/ */ _L141_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L140/ */ _L140_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L89/ */ _L89_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L127/ */ _L127_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L125/ */ _L125_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L120/ */ _L120_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L119/ */ _L119_else_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:else:_L118/ */ _L118_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L117/ */ _L117_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L105/ */ _L105_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L107/ */ _L107_else_IfBlock1;
  NID_C /* IfBlock1:else:_L108/ */ _L108_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L109/ */ _L109_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L110/ */ _L110_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L111/ */ _L111_else_IfBlock1;
  NID_RBC /* IfBlock1:else:_L112/ */ _L112_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L113/ */ _L113_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L115/ */ _L115_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L116/ */ _L116_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L67/ */ _L67_else_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:else:_L80/ */ _L80_else_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:else:_L81/ */ _L81_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L82/ */ _L82_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L83/ */ _L83_else_IfBlock1;
  RBC_Id_T_Common_Types_Pkg /* IfBlock1:else:_L84/ */ _L84_else_IfBlock1;
  NID_C /* IfBlock1:else:_L86/ */ _L86_else_IfBlock1;
  NID_C /* IfBlock1:else:_L90/ */ _L90_else_IfBlock1;
  NID_RBC /* IfBlock1:else:_L91/ */ _L91_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L96/ */ _L96_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L97/ */ _L97_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L98/ */ _L98_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L99/ */ _L99_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L100/ */ _L100_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L102/ */ _L102_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L101/ */ _L101_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L88/ */ _L88_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L66/ */ _L66_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L61/ */ _L61_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L62/ */ _L62_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L63/ */ _L63_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L64/ */ _L64_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:_L65/ */ _L65_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatusFromHandingOverMobile/ */ morcStatusFromHandingOverMobile;
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatusFromAcceptingMobile/ */ morcStatusFromAcceptingMobile;
} outC_splitInputData_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::splitInputData/ */
extern void splitInputData_Handover_Pkg_handoverUtils_Pkg(
  /* dataFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_splitInputData_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void splitInputData_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_splitInputData_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void splitInputData_init_Handover_Pkg_handoverUtils_Pkg(
  outC_splitInputData_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _splitInputData_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** splitInputData_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

