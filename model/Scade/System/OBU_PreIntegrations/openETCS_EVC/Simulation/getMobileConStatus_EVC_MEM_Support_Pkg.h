/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _getMobileConStatus_EVC_MEM_Support_Pkg_H_
#define _getMobileConStatus_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionStatus_T_RCM_Types_Pkg /* MobileConnectionStatus/ */ MobileConnectionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileHWConnectionStatus_Type_MoRC_Pck /* _L1/ */ _L1;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L2/ */ _L2;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L3/ */ _L3;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L5/ */ _L5;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L7/ */ _L7;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L9/ */ _L9;
} outC_getMobileConStatus_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::getMobileConStatus/ */
extern void getMobileConStatus_EVC_MEM_Support_Pkg(
  /* HW_ConnectionStatus/ */
  mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus,
  outC_getMobileConStatus_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getMobileConStatus_reset_EVC_MEM_Support_Pkg(
  outC_getMobileConStatus_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getMobileConStatus_init_EVC_MEM_Support_Pkg(
  outC_getMobileConStatus_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getMobileConStatus_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getMobileConStatus_EVC_MEM_Support_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

