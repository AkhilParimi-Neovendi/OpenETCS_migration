/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg.h"

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
  kcg_bool init;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L8/ */ _L8_Memory_1_struct;
  _114_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg /* _L83=(MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2#1)/ */ Context_sessionCmd_2_p42_v2_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:idle:<1> */ tr_1_clock_idle_SM1;
  kcg_bool /* SM1:waitForSafeRadioConnectionSetUp:<1> */ tr_1_clock_waitForSafeRadioConnectionSetUp_SM1;
  kcg_bool /* SM1:waitForSystemVersion:<1> */ tr_1_clock_waitForSystemVersion_SM1;
  kcg_bool /* SM1:waitForSystemVersion:<3> */ tr_3_clock_waitForSystemVersion_SM1;
  kcg_bool /* SM1:waitForSystemVersion:<2> */ tr_2_clock_waitForSystemVersion_SM1;
  kcg_bool every;
  _114_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _114_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/Out/ */ Out_Memory_1_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/InitVal/ */ InitVal_Memory_1_struct;
  kcg_bool /* @1/MemCond/ */ MemCond_Memory_1_struct;
  kcg_bool /* @1/Reset/ */ Reset_Memory_1_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/M_Input/ */ M_Input_Memory_1_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L9/ */ _L9_Memory_1_struct;
  kcg_bool /* @1/_L1/ */ _L1_Memory_1_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L2/ */ _L2_Memory_1_struct;
  kcg_bool /* @1/_L3/ */ _L3_Memory_1_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L5/ */ _L5_Memory_1_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L6/ */ _L6_Memory_1_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L7/ */ _L7_Memory_1_struct;
  sessionPhase_T_RCM_Session_Types_Pkg /* SM1:idle:_L1/ */ _L1_idle_SM1;
  sessionPhase_T_RCM_Session_Types_Pkg /* SM1:waitForSafeRadioConnectionSetUp:_L1/ */ _L1_waitForSafeRadioConnectionSetUp_SM1;
  sessionPhase_T_RCM_Session_Types_Pkg /* SM1:waitForSystemVersion:_L1/ */ _L1_waitForSystemVersion_SM1;
  sessionPhase_T_RCM_Session_Types_Pkg /* SM1:sessionEstablished:_L1/ */ _L1_sessionEstablished_SM1;
  kcg_bool /* sEstablished/ */ sEstablished;
  kcg_bool /* sTerminateComSession/ */ sTerminateComSession;
  kcg_bool /* sInformTheDriverNoCompatibleVersion/ */ sInformTheDriverNoCompatibleVersion;
  kcg_bool /* sSendNoCompatibleVersionSupported/ */ sSendNoCompatibleVersionSupported;
  kcg_bool /* sSendSessionEstablishedReport/ */ sSendSessionEstablishedReport;
  kcg_bool /* sendInitiationOfCommSessionToTrack/ */ sendInitiationOfCommSessionToTrack;
  kcg_bool /* sRequestSafeRadioConnectionSetup/ */ sRequestSafeRadioConnectionSetup;
  _115_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _115_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* initiatedByOBU/ */ initiatedByOBU;
  kcg_bool /* safeRadioConnectionSetUp/ */ safeRadioConnectionSetUp;
  sessionCmd_T_RCM_Session_Types_Pkg /* sessionEstablishCmd_mem/ */ sessionEstablishCmd_mem;
  kcg_bool /* systemVersionSupported/ */ systemVersionSupported;
  kcg_bool /* systemVersionNotSupported/ */ systemVersionNotSupported;
  sessionPhase_T_RCM_Session_Types_Pkg /* phase/ */ phase;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L40/ */ _L40;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  NID_RADIO /* _L45/ */ _L45;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L48/ */ _L48;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  NID_RADIO /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L71/ */ _L71;
  kcg_bool /* _L73/ */ _L73;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L74/ */ _L74;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L75/ */ _L75;
  NID_C /* _L76/ */ _L76;
  NID_RBC /* _L77/ */ _L77;
  NID_RADIO /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L80/ */ _L80;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L84/ */ _L84;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L86/ */ _L86;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L87/ */ _L87;
  kcg_bool /* _L89/ */ _L89;
} outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ */
extern void establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd_in/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* m32_SystemVersion/ */
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* reset/ */
  kcg_bool reset,
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/
  @1: (linear::Memory#1)
*/

#endif /* _establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

