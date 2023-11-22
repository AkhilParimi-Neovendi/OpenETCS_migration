/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _establishSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _establishSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* p42_establishSessionCmd/ */ p42_establishSessionCmd;
  kcg_bool /* send_m155_initiationOfACommunicationSession/ */ send_m155_initiationOfACommunicationSession;
  kcg_bool /* send_m159_sessionEstablishedReport/ */ send_m159_sessionEstablishedReport;
  kcg_bool /* send_m154_noCompatibleVersionSupported/ */ send_m154_noCompatibleVersionSupported;
  kcg_bool /* requestSafeRadioConnectionSetup/ */ requestSafeRadioConnectionSetup;
  kcg_bool /* terminateCommunicationSession/ */ terminateCommunicationSession;
  kcg_bool /* infomDriverNoCompatibleVersionSupported/ */ infomDriverNoCompatibleVersionSupported;
  kcg_bool /* established/ */ established;
  sessionStatus_T_RCM_Session_Types_Pkg /* sessionStatus/ */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _205_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg /* SM1:establishingByOBU:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2#1)/ */ Context_establishSessionFromOBU_v2_1;
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg /* SM1:establishingByRBC:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2#1)/ */ Context_establishSessionFromRBC_v2_1;
  /* ------------------ clocks of observable data -------------------- */
  _205_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:idle:_L12/ */ _L12_idle_SM1;
  sessionStatus_T_RCM_Session_Types_Pkg /* SM1:idle:_L11/ */ _L11_idle_SM1;
  sessionStatus_T_RCM_Session_Types_Pkg /* SM1:idle:_L9/ */ _L9_idle_SM1;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* SM1:idle:_L3/ */ _L3_idle_SM1;
  kcg_bool /* SM1:idle:_L4/ */ _L4_idle_SM1;
  kcg_bool /* SM1:establishingByOBU:_L14/ */ _L14_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByOBU:_L13/ */ _L13_establishingByOBU_SM1;
  mobileConnectionContext_T_RCM_Types_Pkg /* SM1:establishingByOBU:_L12/ */ _L12_establishingByOBU_SM1;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* SM1:establishingByOBU:_L11/ */ _L11_establishingByOBU_SM1;
  sessionCmd_T_RCM_Session_Types_Pkg /* SM1:establishingByOBU:_L10/ */ _L10_establishingByOBU_SM1;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* SM1:establishingByOBU:_L2/ */ _L2_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByOBU:_L3/ */ _L3_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByOBU:_L4/ */ _L4_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByOBU:_L5/ */ _L5_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByOBU:_L6/ */ _L6_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByOBU:_L7/ */ _L7_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByOBU:_L8/ */ _L8_establishingByOBU_SM1;
  sessionStatus_T_RCM_Session_Types_Pkg /* SM1:establishingByOBU:_L9/ */ _L9_establishingByOBU_SM1;
  kcg_bool /* SM1:establishingByRBC:_L9/ */ _L9_establishingByRBC_SM1;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* SM1:establishingByRBC:_L8/ */ _L8_establishingByRBC_SM1;
  kcg_bool /* SM1:establishingByRBC:_L7/ */ _L7_establishingByRBC_SM1;
  kcg_bool /* SM1:establishingByRBC:_L6/ */ _L6_establishingByRBC_SM1;
  mobileConnectionContext_T_RCM_Types_Pkg /* SM1:establishingByRBC:_L5/ */ _L5_establishingByRBC_SM1;
  sessionCmd_T_RCM_Session_Types_Pkg /* SM1:establishingByRBC:_L4/ */ _L4_establishingByRBC_SM1;
  kcg_bool /* SM1:establishingByRBC:_L2/ */ _L2_establishingByRBC_SM1;
  sessionStatus_T_RCM_Session_Types_Pkg /* SM1:establishingByRBC:_L3/ */ _L3_establishingByRBC_SM1;
  _205_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _206_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _206_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* initiatedByOBU/ */ initiatedByOBU;
  kcg_bool /* initiatedByRBC/ */ initiatedByRBC;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L111/ */ _L111;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L109/ */ _L109;
  kcg_bool /* _L107/ */ _L107;
  kcg_bool /* _L106/ */ _L106;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L105/ */ _L105;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L104/ */ _L104;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L102/ */ _L102;
  kcg_bool /* _L101/ */ _L101;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L100/ */ _L100;
} outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2/ */
extern void establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd_in/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* m32_SystemVersion/ */
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* reset/ */
  kcg_bool reset,
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void establishSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _establishSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** establishSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

