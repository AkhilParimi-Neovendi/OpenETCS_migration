/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _checkNTCPriority_xdebugSupport_Pkg_H_
#define _checkNTCPriority_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isNTC/ */ isNTC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L1/ */ _L1;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  M_LEVELTR /* _L5/ */ _L5;
  M_LEVELTR /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* _L8/ */ _L8;
} outC_checkNTCPriority_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::checkNTCPriority/ */
extern void checkNTCPriority_xdebugSupport_Pkg(
  /* p41/ */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_checkNTCPriority_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkNTCPriority_reset_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkNTCPriority_init_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _checkNTCPriority_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkNTCPriority_xdebugSupport_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

