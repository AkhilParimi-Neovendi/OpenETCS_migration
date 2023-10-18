/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _getMobileRegStatus_EVC_MEM_Support_Pkg_H_
#define _getMobileRegStatus_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileRegistrationStatus_T_RCM_Types_Pkg /* MobileRegistrationStatus/ */ MobileRegistrationStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileHWConnectionStatus_Type_MoRC_Pck /* _L1/ */ _L1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L2/ */ _L2;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L3/ */ _L3;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L5/ */ _L5;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L7/ */ _L7;
} outC_getMobileRegStatus_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::getMobileRegStatus/ */
extern void getMobileRegStatus_EVC_MEM_Support_Pkg(
  /* HW_ConnectionStatus/ */
  mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus,
  outC_getMobileRegStatus_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getMobileRegStatus_reset_EVC_MEM_Support_Pkg(
  outC_getMobileRegStatus_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getMobileRegStatus_init_EVC_MEM_Support_Pkg(
  outC_getMobileRegStatus_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getMobileRegStatus_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getMobileRegStatus_EVC_MEM_Support_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

