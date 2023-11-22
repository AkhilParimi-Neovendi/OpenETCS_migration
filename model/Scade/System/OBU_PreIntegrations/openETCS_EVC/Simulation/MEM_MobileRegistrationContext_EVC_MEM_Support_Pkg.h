/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg_H_
#define _MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "getMobileRegStatus_EVC_MEM_Support_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileRegistrationContext_T_RCM_Types_Pkg /* MobileRegistrationContext/ */ MobileRegistrationContext;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getMobileRegStatus_EVC_MEM_Support_Pkg /* _L17=(EVC_MEM_Support_Pkg::getMobileRegStatus#1)/ */ Context_getMobileRegStatus_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileRegistrationContext_T_RCM_Types_Pkg /* RegistrationContext/ */ RegistrationContext;
  mobileHWStatus_Type_MoRC_Pck /* _L1/ */ _L1;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  mobileHealthStatus_T_RCM_Types_Pkg /* _L14/ */ _L14;
  mobileHealthStatus_T_RCM_Types_Pkg /* _L15/ */ _L15;
  mobileHealthStatus_T_RCM_Types_Pkg /* _L16/ */ _L16;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L17/ */ _L17;
  mobileHWConnectionStatus_Type_MoRC_Pck /* _L18/ */ _L18;
  NID_MN /* _L19/ */ _L19;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L20/ */ _L20;
} outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext/ */
extern void MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg(
  /* MobileFromAPI/ */
  mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* mobileDeviceNo/ */
  kcg_int32 mobileDeviceNo,
  /* Registered_MN/ */
  NID_MN Registered_MN,
  outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_MobileRegistrationContext_reset_EVC_MEM_Support_Pkg(
  outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_MobileRegistrationContext_init_EVC_MEM_Support_Pkg(
  outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

