/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _getP41Level_xdebugSupport_Pkg_H_
#define _getP41Level_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* p41_level/ */ p41_level;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L1/ */ _L1;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  M_LEVELTR /* _L5/ */ _L5;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* _L8/ */ _L8;
  M_LEVEL /* _L9/ */ _L9;
  M_LEVEL /* _L10/ */ _L10;
  M_LEVEL /* _L11/ */ _L11;
  M_LEVEL /* _L12/ */ _L12;
  M_LEVEL /* _L13/ */ _L13;
  M_LEVEL /* _L14/ */ _L14;
} outC_getP41Level_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::getP41Level/ */
extern void getP41Level_xdebugSupport_Pkg(
  /* p41/ */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_getP41Level_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getP41Level_reset_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getP41Level_init_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getP41Level_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getP41Level_xdebugSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

