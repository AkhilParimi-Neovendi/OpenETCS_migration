/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _setProbesBalises_xdebugSupport_Pkg_H_
#define _setProbesBalises_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  probesBalises_T_xdebugSupport_Pkg /* baliseInformation/ */ baliseInformation;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  probesBalises_T_xdebugSupport_Pkg /* baliseInfo/ */ baliseInfo;
  NID_BG /* bgID/ */ bgID;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MSG_Errors_T_Common_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  NID_C /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  NID_BG /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  BG_Header_T_BG_Types_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  probesBalises_T_xdebugSupport_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  NID_BG /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  probesBalises_T_xdebugSupport_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  probesBalises_T_xdebugSupport_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* changedBG/ */ changedBG;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L28/ */ _L28;
  probesBalises_T_xdebugSupport_Pkg /* _L31/ */ _L31;
  MsgSource_T_Common_Types_Pkg /* _L43/ */ _L43;
  kcg_bool /* _L45/ */ _L45;
  MsgSource_T_Common_Types_Pkg /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  BG_Header_T_BG_Types_Pkg /* _L49/ */ _L49;
  NID_BG /* _L50/ */ _L50;
  NID_BG /* _L51/ */ _L51;
} outC_setProbesBalises_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbesBalises/ */
extern void setProbesBalises_xdebugSupport_Pkg(
  /* inMsg/ */
  ReceivedMessage_T_Common_Types_Pkg *inMsg,
  /* inErrors/ */
  MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setProbesBalises_reset_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setProbesBalises_init_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _setProbesBalises_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setProbesBalises_xdebugSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

