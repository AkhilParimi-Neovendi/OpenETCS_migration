/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _packetValid_xdebugSupport_Pkg_H_
#define _packetValid_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "packetValidBasics_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isValid/ */ isValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_packetValidBasics_xdebugSupport_Pkg /* _L5=(xdebugSupport_Pkg::packetValidBasics#1)/ */ Context_packetValidBasics_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
  NID_PACKET /* _L13/ */ _L13;
  array_int32_30 /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
} outC_packetValid_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::packetValid/ */
extern void packetValid_xdebugSupport_Pkg(
  /* packetHeader/ */
  Metadata_T_Common_Types_Pkg *packetHeader,
  /* which_ID/ */
  NID_PACKET which_ID,
  outC_packetValid_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void packetValid_reset_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void packetValid_init_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _packetValid_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** packetValid_xdebugSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

