/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "establishSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* p42_SessionManagement_out/ */ p42_SessionManagement_out;
  kcg_bool /* send_m155_initiationOfACommunicationSession/ */ send_m155_initiationOfACommunicationSession;
  kcg_bool /* send_m156_TerminationOfCommunicationSession/ */ send_m156_TerminationOfCommunicationSession;
  kcg_bool /* send_m159_sessionEstablishedReport/ */ send_m159_sessionEstablishedReport;
  kcg_bool /* send_m154_noCompatibleVersionSupported/ */ send_m154_noCompatibleVersionSupported;
  kcg_bool /* requestSafeRadioConnectionSetup/ */ requestSafeRadioConnectionSetup;
  kcg_bool /* infomDriverNoCompatibleVersionSupported/ */ infomDriverNoCompatibleVersionSupported;
  kcg_bool /* requestReleaseOfSafeRadioConnection/ */ requestReleaseOfSafeRadioConnection;
  sessionStatus_T_RCM_Session_Types_Pkg /* sessionStatus/ */ sessionStatus;
  kcg_bool /* notReady/ */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  sessionCmd_T_RCM_Session_Types_Pkg /* sessionEstablishCmd/ */ mem_sessionEstablishCmd;
  SSM_ST_Session_SM /* Session_SM: */ Session_SM_state_nxt;
  kcg_bool /* Session_SM: */ Session_SM_reset_act;
  kcg_bool /* Session_SM: */ Session_SM_reset_nxt;
  sessionStatus_T_RCM_Session_Types_Pkg /* sessionStatus_l/ */ sessionStatus_l;
  kcg_bool /* initializeSession/ */ initializeSession;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg /* Session_SM:maintainingSession:_L1=(MoRC_Pck::Subfunc_Pkg::maintainingSession_v2#1)/ */ Context_maintainingSession_v2_1;
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg /* Session_SM:terminatingSession:_L2=(MoRC_Pck::Subfunc_Pkg::terminateSession_v2#1)/ */ Context_terminateSession_v2_1;
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg /* Session_SM:establishingSession:_L1=(MoRC_Pck::Subfunc_Pkg::establishSession_v2#1)/ */ Context_establishSession_v2_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Session_SM:sessionTerminated:<1> */ tr_1_clock_sessionTerminated_Session_SM;
  kcg_bool /* Session_SM:establishingSession:<1> */ tr_1_clock_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:<2> */ tr_2_clock_establishingSession_Session_SM;
  kcg_bool /* Session_SM:maintainingSession:<1> */ tr_1_clock_maintainingSession_Session_SM;
  kcg_bool /* Session_SM:terminatingSession:<1> */ tr_1_clock_terminatingSession_Session_SM;
  SSM_ST_Session_SM /* Session_SM: */ Session_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:sessionTerminated:_L35/ */ _L35_sessionTerminated_Session_SM;
  sessionPhase_T_RCM_Session_Types_Pkg /* Session_SM:sessionTerminated:_L34/ */ _L34_sessionTerminated_Session_SM;
  NID_RADIO /* Session_SM:sessionTerminated:_L32/ */ _L32_sessionTerminated_Session_SM;
  NID_RBC /* Session_SM:sessionTerminated:_L31/ */ _L31_sessionTerminated_Session_SM;
  NID_C /* Session_SM:sessionTerminated:_L30/ */ _L30_sessionTerminated_Session_SM;
  kcg_bool /* Session_SM:sessionTerminated:_L29/ */ _L29_sessionTerminated_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:sessionTerminated:_L8/ */ _L8_sessionTerminated_Session_SM;
  sessionCmd_T_RCM_Session_Types_Pkg /* Session_SM:sessionTerminated:_L7/ */ _L7_sessionTerminated_Session_SM;
  sessionPhase_T_RCM_Session_Types_Pkg /* Session_SM:sessionTerminated:_L6/ */ _L6_sessionTerminated_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:sessionTerminated:_L5/ */ _L5_sessionTerminated_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:sessionTerminated:_L3/ */ _L3_sessionTerminated_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L18/ */ _L18_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L17/ */ _L17_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L16/ */ _L16_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L15/ */ _L15_establishingSession_Session_SM;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* Session_SM:establishingSession:_L14/ */ _L14_establishingSession_Session_SM;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* Session_SM:establishingSession:_L13/ */ _L13_establishingSession_Session_SM;
  mobileConnectionContext_T_RCM_Types_Pkg /* Session_SM:establishingSession:_L12/ */ _L12_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L11/ */ _L11_establishingSession_Session_SM;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* Session_SM:establishingSession:_L10/ */ _L10_establishingSession_Session_SM;
  sessionCmd_T_RCM_Session_Types_Pkg /* Session_SM:establishingSession:_L9/ */ _L9_establishingSession_Session_SM;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* Session_SM:establishingSession:_L1/ */ _L1_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L2/ */ _L2_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L3/ */ _L3_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L4/ */ _L4_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L5/ */ _L5_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L6/ */ _L6_establishingSession_Session_SM;
  kcg_bool /* Session_SM:establishingSession:_L7/ */ _L7_establishingSession_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:establishingSession:_L8/ */ _L8_establishingSession_Session_SM;
  kcg_bool /* Session_SM:maintainingSession:_L3/ */ _L3_maintainingSession_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:maintainingSession:_L2/ */ _L2_maintainingSession_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:maintainingSession:_L1/ */ _L1_maintainingSession_Session_SM;
  kcg_bool /* Session_SM:terminatingSession:_L12/ */ _L12_terminatingSession_Session_SM;
  T_internal_Type_Obu_BasicTypes_Pkg /* Session_SM:terminatingSession:_L11/ */ _L11_terminatingSession_Session_SM;
  kcg_int64 /* Session_SM:terminatingSession:_L10/ */ _L10_terminatingSession_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:terminatingSession:_L9/ */ _L9_terminatingSession_Session_SM;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* Session_SM:terminatingSession:_L8/ */ _L8_terminatingSession_Session_SM;
  T_internal_Type_Obu_BasicTypes_Pkg /* Session_SM:terminatingSession:_L7/ */ _L7_terminatingSession_Session_SM;
  kcg_bool /* Session_SM:terminatingSession:_L6/ */ _L6_terminatingSession_Session_SM;
  kcg_bool /* Session_SM:terminatingSession:_L5/ */ _L5_terminatingSession_Session_SM;
  sessionStatus_T_RCM_Session_Types_Pkg /* Session_SM:terminatingSession:_L1/ */ _L1_terminatingSession_Session_SM;
  kcg_bool /* Session_SM:terminatingSession:_L2/ */ _L2_terminatingSession_Session_SM;
  kcg_bool /* Session_SM:terminatingSession:_L3/ */ _L3_terminatingSession_Session_SM;
  kcg_bool /* Session_SM:terminatingSession:_L4/ */ _L4_terminatingSession_Session_SM;
  kcg_bool /* sNotReady/ */ sNotReady;
  SSM_ST_Session_SM /* Session_SM: */ Session_SM_state_sel;
  SSM_TR_Session_SM /* Session_SM: */ Session_SM_fired_strong;
  SSM_TR_Session_SM /* Session_SM: */ Session_SM_fired;
  kcg_bool /* terminateSession/ */ terminateSession;
  kcg_bool /* established/ */ established;
  kcg_bool /* terminated/ */ terminated;
  kcg_bool /* _L1/ */ _L1;
} outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ */
extern void sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd,
  /* p42_SessionManagement_in/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement_in,
  /* m39_AckOfTerminationOfACommunicationSession/ */
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* m32_SystemVersion/ */
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* initiateTermination/ */
  kcg_bool initiateTermination,
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* reset/ */
  kcg_bool reset,
  /* noOfRetriesOfSendingTerminationMessage/ */
  kcg_int64 noOfRetriesOfSendingTerminationMessage,
  /* maxWaitingTimeForAckMessageReceived/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

