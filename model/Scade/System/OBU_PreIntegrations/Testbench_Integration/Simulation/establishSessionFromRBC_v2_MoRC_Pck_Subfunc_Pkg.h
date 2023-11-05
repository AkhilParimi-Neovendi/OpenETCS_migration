/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* send_m159_sessionEstablishedReport/ */ send_m159_sessionEstablishedReport;
  kcg_bool /* established/ */ established;
  sessionStatus_T_RCM_Session_Types_Pkg /* sessionStatus/ */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L8/ */ _L8_Memory_2_struct;
  _128_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:idle:<1> */ tr_1_clock_idle_SM1;
  _128_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _128_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/Out/ */ Out_Memory_2_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/InitVal/ */ InitVal_Memory_2_struct;
  kcg_bool /* @1/MemCond/ */ MemCond_Memory_2_struct;
  kcg_bool /* @1/Reset/ */ Reset_Memory_2_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/M_Input/ */ M_Input_Memory_2_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L9/ */ _L9_Memory_2_struct;
  kcg_bool /* @1/_L1/ */ _L1_Memory_2_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L2/ */ _L2_Memory_2_struct;
  kcg_bool /* @1/_L3/ */ _L3_Memory_2_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L5/ */ _L5_Memory_2_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L6/ */ _L6_Memory_2_struct;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L7/ */ _L7_Memory_2_struct;
  sessionPhase_T_RCM_Session_Types_Pkg /* SM1:idle:_L1/ */ _L1_idle_SM1;
  sessionPhase_T_RCM_Session_Types_Pkg /* SM1:sessionEstablished:_L1/ */ _L1_sessionEstablished_SM1;
  kcg_bool /* sEstablished/ */ sEstablished;
  kcg_bool /* sSendSessionEstablishedReport/ */ sSendSessionEstablishedReport;
  _129_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _129_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* initiatedByRBC/ */ initiatedByRBC;
  sessionCmd_T_RCM_Session_Types_Pkg /* sessionEstablishCmd_mem/ */ sessionEstablishCmd_mem;
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
  sessionStatus_T_RCM_Session_Types_Pkg /* _L71/ */ _L71;
  kcg_bool /* _L73/ */ _L73;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L74/ */ _L74;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L75/ */ _L75;
  NID_C /* _L76/ */ _L76;
  NID_RBC /* _L77/ */ _L77;
  NID_RADIO /* _L78/ */ _L78;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L93/ */ _L93;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L91/ */ _L91;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
} outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ */
extern void establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd_in/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* reset/ */
  kcg_bool reset,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SM1: */ Context_SM1_reset_nxt;
  kcg_bool /* SM1: */ Context_SM1_reset_act;
  _128_SSM_ST_SM1 /* SM1: */ Context_SM1_state_nxt;
  sessionCmd_T_RCM_Session_Types_Pkg /* @1/_L8/ */ Context__L8_Memory_2;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg;

extern void kcg_save_SV_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  SV_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *SV,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);
extern void kcg_load_SV_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC,
  SV_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *SV);

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/
  @1: (linear::Memory#2)
*/

#endif /* _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

