/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* initiateTermination/ */ initiateTermination;
  kcg_bool /* sendAPositionReport/ */ sendAPositionReport;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_TrainExitedFromRBCArea_SM /* TrainExitedFromRBCArea_SM: */ TrainExitedFromRBCArea_SM_state_nxt;
  kcg_bool /* TrainExitedFromRBCArea_SM: */ TrainExitedFromRBCArea_SM_reset_act;
  kcg_bool /* TrainExitedFromRBCArea_SM: */ TrainExitedFromRBCArea_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pck_Utils /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L25=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */ Context_waitAndRepeatTimer_1;
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg /* _L77=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */ Context_validate_q_sleepsession_v2_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession: */ WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM;
  kcg_bool /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:<2> */ tr_2_clock_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  SSM_ST_TrainExitedFromRBCArea_SM /* TrainExitedFromRBCArea_SM: */ TrainExitedFromRBCArea_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L30/ */ _L30_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  T_internal_Type_Obu_BasicTypes_Pkg /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L29/ */ _L29_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  kcg_bool /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L28/ */ _L28_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  time_Type_MoRC_Pck /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L27/ */ _L27_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  kcg_bool /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L25/ */ _L25_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  kcg_bool /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L26/ */ _L26_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  kcg_bool /* sSendAPositionReport/ */ sSendAPositionReport;
  kcg_bool /* sTerminateTheCommunicationSession/ */ sTerminateTheCommunicationSession;
  SSM_ST_TrainExitedFromRBCArea_SM /* TrainExitedFromRBCArea_SM: */ TrainExitedFromRBCArea_SM_state_sel;
  SSM_TR_TrainExitedFromRBCArea_SM /* TrainExitedFromRBCArea_SM: */ TrainExitedFromRBCArea_SM_fired_strong;
  SSM_TR_TrainExitedFromRBCArea_SM /* TrainExitedFromRBCArea_SM: */ TrainExitedFromRBCArea_SM_fired;
  kcg_bool /* orderToTerminateTheSessionIsReceived/ */ orderToTerminateTheSessionIsReceived;
  kcg_bool /* noReplyReceivedAfterLastRepetition/ */ noReplyReceivedAfterLastRepetition;
  kcg_bool /* definedNumberOfRepetitionsHasBeenReached/ */ definedNumberOfRepetitionsHasBeenReached;
  kcg_bool /* trainExitedFromAnRBCArea_l/ */ trainExitedFromAnRBCArea_l;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L56/ */ _L56;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L81/ */ _L81;
  Q_RBC /* _L80/ */ _L80;
  Q_RBC /* _L79/ */ _L79;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L77/ */ _L77;
  Q_RBC /* _L76/ */ _L76;
  NID_RADIO /* _L75/ */ _L75;
  M_MODE /* _L74/ */ _L74;
  kcg_bool /* _L73/ */ _L73;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L72/ */ _L72;
  NID_RBC /* _L71/ */ _L71;
  NID_C /* _L70/ */ _L70;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  NID_C /* _L84/ */ _L84;
  NID_RADIO /* _L85/ */ _L85;
  NID_RBC /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L92/ */ _L92;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
} outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ */
extern void initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* p42_SessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* mode/ */
  M_MODE mode,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* currentTime/ */
  time_Type_MoRC_Pck currentTime,
  /* reset/ */
  kcg_bool reset,
  /* maxWaitingTimeUntilTerminationOrderReceived/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived,
  /* noOfRetriesUntilTerminationOrderIsReceived/ */
  kcg_int64 noOfRetriesUntilTerminationOrderIsReceived,
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* TrainExitedFromRBCArea_SM: */ Context_TrainExitedFromRBCArea_SM_reset_nxt;
  kcg_bool /* TrainExitedFromRBCArea_SM: */ Context_TrainExitedFromRBCArea_SM_reset_act;
  SSM_ST_TrainExitedFromRBCArea_SM /* TrainExitedFromRBCArea_SM: */ Context_TrainExitedFromRBCArea_SM_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_waitAndRepeatTimer_MoRC_Pck_Utils Context_waitAndRepeatTimer_1;
} SV_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg;

extern void kcg_save_SV_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  SV_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *SV,
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
extern void kcg_load_SV_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC,
  SV_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *SV);



#endif /* _initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

