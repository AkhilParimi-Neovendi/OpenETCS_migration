/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _packetValidBasics_xdebugSupport_Pkg_H_
#define _packetValidBasics_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* continue/ */ _1_continue;
  kcg_bool /* packtIsValid/ */ packtIsValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_extract_nid_packet_from_metadata_selector_TM /* _L13=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */ Context_T_extract_nid_packet_from_metadata_selector_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  NID_PACKET /* _L6/ */ _L6;
  NID_PACKET /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  NID_PACKET /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
} outC_packetValidBasics_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::packetValidBasics/ */
extern void packetValidBasics_xdebugSupport_Pkg(
  /* accu/ */
  kcg_bool accu,
  /* element/ */
  MetadataElement_T_Common_Types_Pkg *element,
  /* which_ID/ */
  NID_PACKET which_ID,
  outC_packetValidBasics_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void packetValidBasics_reset_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void packetValidBasics_init_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _packetValidBasics_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** packetValidBasics_xdebugSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

