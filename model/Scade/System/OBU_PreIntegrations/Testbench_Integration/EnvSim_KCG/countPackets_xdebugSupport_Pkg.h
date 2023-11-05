/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _countPackets_xdebugSupport_Pkg_H_
#define _countPackets_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countBasics_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* count/ */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countBasics_xdebugSupport_Pkg /* _L5=(xdebugSupport_Pkg::countBasics#1)/ */ Context_countBasics_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* _L1/ */ _L1;
  Metadata_T_Common_Types_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
} outC_countPackets_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::countPackets/ */
extern void countPackets_xdebugSupport_Pkg(
  /* msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *msg,
  outC_countPackets_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countPackets_reset_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countPackets_init_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _countPackets_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countPackets_xdebugSupport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

