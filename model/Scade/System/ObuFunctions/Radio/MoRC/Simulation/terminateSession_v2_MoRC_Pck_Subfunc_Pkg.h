/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */
#ifndef _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* send_m156_TerminationOfCommunicationSession/ */ send_m156_TerminationOfCommunicationSession;
  kcg_bool /* requestReleaseOfSafeRadioConnection/ */ requestReleaseOfSafeRadioConnection;
  kcg_bool /* terminated/ */ terminated;
  sessionStatus_T_RCM_Session_Types_Pkg /* sessionStatus/ */ sessionStatus;
  kcg_bool /* notReady/ */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L4/ */ _L4_MemoryBasic_1_struct;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pck_Utils /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L5=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */ Context_waitAndRepeatTimer_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:waitForAckTerminationOfCommunicationSessionReceived: */ waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1;
  kcg_bool /* SM1:waitForAckTerminationOfCommunicationSessionReceived:<2> */ tr_2_clock_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  kcg_bool /* SM1:idle:<1> */ tr_1_clock_idle_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/Memorized/ */ Memorized_MemoryBasic_1_struct;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/Init/ */ Init_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L7/ */ _L7_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L6/ */ _L6_MemoryBasic_1_struct;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L2/ */ _L2_MemoryBasic_1_struct;
  T_internal_Type_Obu_BasicTypes_Pkg /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L1/ */ _L1_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  time_Type_MoRC_Pck /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L2/ */ _L2_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  kcg_int32 /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L3/ */ _L3_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  kcg_bool /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L4/ */ _L4_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  kcg_bool /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L6/ */ _L6_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  kcg_bool /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L5/ */ _L5_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  kcg_bool /* SM1:terminated:_L2/ */ _L2_terminated_SM1;
  kcg_bool /* sNotReady/ */ sNotReady;
  kcg_bool /* sRequestReleaseOfSafeRadioConnection/ */ sRequestReleaseOfSafeRadioConnection;
  kcg_bool /* sSendTerminationOfCommunicationMessage/ */ sSendTerminationOfCommunicationMessage;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* ackTerminationOfACommunicationSessionReceived/ */ ackTerminationOfACommunicationSessionReceived;
  kcg_bool /* definedNumberOfRepetitionsHasBeenReached/ */ definedNumberOfRepetitionsHasBeenReached;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L96/ */ _L96;
  NID_C /* _L95/ */ _L95;
  kcg_bool /* _L94/ */ _L94;
  NID_RBC /* _L93/ */ _L93;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L92/ */ _L92;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L91/ */ _L91;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L90/ */ _L90;
  NID_RADIO /* _L89/ */ _L89;
  kcg_bool /* _L88/ */ _L88;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L101/ */ _L101;
} outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ */
extern void terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* initiateTermination/ */
  kcg_bool initiateTermination,
  /* m39_AckOfTerminationOfACommunicationSession/ */
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* currentTime/ */
  time_Type_MoRC_Pck _1_currentTime,
  /* prevSessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  /* reset/ */
  kcg_bool reset2,
  /* noOfRetriesOfSendingTerminationMessage/ */
  kcg_int32 noOfRetriesOfSendingTerminationMessage,
  /* maxWaitingTimeForAckMessageReceived/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void terminateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::terminateSession_v2/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

