/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _getLRBGFromMsg_xdebugSupport_Pkg_H_
#define _getLRBGFromMsg_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_LRBG /* LRBG/ */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgSource_T_Common_Types_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  ReceivedMessage_T_Common_Types_Pkg /* _L6/ */ _L6;
  MsgSource_T_Common_Types_Pkg /* _L5/ */ _L5;
  NID_LRBG /* _L4/ */ _L4;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L3/ */ _L3;
  NID_LRBG /* _L17/ */ _L17;
  kcg_bool /* _L20/ */ _L20;
  MsgSource_T_Common_Types_Pkg /* _L19/ */ _L19;
  MsgSource_T_Common_Types_Pkg /* _L18/ */ _L18;
  BG_Header_T_BG_Types_Pkg /* _L22/ */ _L22;
  NID_BG /* _L21/ */ _L21;
  NID_C /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
} outC_getLRBGFromMsg_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::getLRBGFromMsg/ */
extern void getLRBGFromMsg_xdebugSupport_Pkg(
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getLRBGFromMsg_reset_xdebugSupport_Pkg(
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getLRBGFromMsg_init_xdebugSupport_Pkg(
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getLRBGFromMsg_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLRBGFromMsg_xdebugSupport_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

