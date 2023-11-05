/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MEM_MobileConnectionContext_EVC_MEM_Support_Pkg_H_
#define _MEM_MobileConnectionContext_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "getMobileConStatus_EVC_MEM_Support_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionContext_T_RCM_Types_Pkg /* MobileConnectionContext/ */ MobileConnectionContext;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getMobileConStatus_EVC_MEM_Support_Pkg /* _L24=(EVC_MEM_Support_Pkg::getMobileConStatus#1)/ */ Context_getMobileConStatus_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileConnectionContext_T_RCM_Types_Pkg /* ConnectionContext/ */ ConnectionContext;
  mobileHWStatus_Type_MoRC_Pck /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L21/ */ _L21;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L24/ */ _L24;
  mobileHWConnectionStatus_Type_MoRC_Pck /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  NID_RADIO /* _L30/ */ _L30;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L31/ */ _L31;
} outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext/ */
extern void MEM_MobileConnectionContext_EVC_MEM_Support_Pkg(
  /* MobileFromAPI/ */
  mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* mobileDeviceNo/ */
  kcg_int32 mobileDeviceNo,
  /* Radio_ID/ */
  NID_RADIO Radio_ID,
  /* inRadioHole/ */
  kcg_bool inRadioHole,
  outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_MobileConnectionContext_reset_EVC_MEM_Support_Pkg(
  outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_MobileConnectionContext_init_EVC_MEM_Support_Pkg(
  outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MEM_MobileConnectionContext_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_MobileConnectionContext_EVC_MEM_Support_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

