/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg_H_
#define _safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* indication/ */ indication;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_connectionStatus_SM /* connectionStatus_SM: */ connectionStatus_SM_state_nxt;
  kcg_bool /* connectionStatus_SM: */ connectionStatus_SM_reset_act;
  kcg_bool /* connectionStatus_SM: */ connectionStatus_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L63=(digital::RisingEdge#4)/ */ Context_RisingEdge_4;
  outC_RisingEdge_digital /* _L66=(digital::RisingEdge#3)/ */ Context_RisingEdge_3;
  outC_countDownTimer_MoRC_Pck_Utils /* _L21=(MoRC_Pck::Utils::countDownTimer#1)/ */ Context_countDownTimer_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_connectionStatus_SM /* connectionStatus_SM: */ connectionStatus_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg /* connectionStatus_SM:NoConnection:_L1/ */ _L1_NoConnection_connectionStatus_SM;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg /* connectionStatus_SM:ConnectionLost_SetupFailed:_L1/ */ _L1_ConnectionLost_SetupFailed_connectionStatus_SM;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg /* connectionStatus_SM:ConnectionUp:_L1/ */ _L1_ConnectionUp_connectionStatus_SM;
  SSM_ST_connectionStatus_SM /* connectionStatus_SM: */ connectionStatus_SM_state_sel;
  SSM_TR_connectionStatus_SM /* connectionStatus_SM: */ connectionStatus_SM_fired_strong;
  SSM_TR_connectionStatus_SM /* connectionStatus_SM: */ connectionStatus_SM_fired;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg /* indicator_l/ */ indicator_l;
  kcg_bool /* connectionStatusTimerExpired/ */ connectionStatusTimerExpired;
  kcg_bool /* condition_ID_1/ */ condition_ID_1;
  kcg_bool /* condition_ID_2/ */ condition_ID_2;
  kcg_bool /* condition_ID_3/ */ condition_ID_3;
  kcg_bool /* condition_ID_4/ */ condition_ID_4;
  kcg_bool /* condition_ID_5/ */ condition_ID_5;
  kcg_bool /* condition_ID_6/ */ condition_ID_6;
  kcg_bool /* condition_ID_7/ */ condition_ID_7;
  kcg_bool /* requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason/ */ requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason;
  kcg_bool /* safeRadioConnection_Setup/ */ safeRadioConnection_Setup;
  kcg_bool /* safeRadioConnection_Released/ */ safeRadioConnection_Released;
  kcg_bool /* safeRadioConnection_Lost/ */ safeRadioConnection_Lost;
  kcg_bool /* startOfMissionProcedureIsGoingOn/ */ startOfMissionProcedureIsGoingOn;
  kcg_bool /* trainfrontIsInsideAnAnnouncedRadioHole/ */ trainfrontIsInsideAnAnnouncedRadioHole;
  kcg_bool /* finalAttemptToSetupTheSafeRadioConnectionFailed/ */ finalAttemptToSetupTheSafeRadioConnectionFailed;
  kcg_bool /* requestsToSetupASafeRadioConnectionAreStopped/ */ _1_requestsToSetupASafeRadioConnectionAreStopped;
  kcg_bool /* firstRequestToSetupASafeRadioConnection/ */ firstRequestToSetupASafeRadioConnection;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  time_Type_MoRC_Pck /* _L27/ */ _L27;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L74/ */ _L74;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L73/ */ _L73;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L71/ */ _L71;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L70/ */ _L70;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L66/ */ _L66;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L65/ */ _L65;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L63/ */ _L63;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L92/ */ _L92;
  kcg_bool /* _L93/ */ _L93;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L94/ */ _L94;
  kcg_bool /* _L97/ */ _L97;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L101/ */ _L101;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L103/ */ _L103;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L104/ */ _L104;
  kcg_bool /* _L105/ */ _L105;
  kcg_bool /* _L106/ */ _L106;
  kcg_bool /* _L107/ */ _L107;
  kcg_bool /* _L108/ */ _L108;
  kcg_bool /* _L109/ */ _L109;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* _L112/ */ _L112;
} outC_safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ */
extern void safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg(
  /* connectionCmd/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* reset/ */
  kcg_bool reset,
  /* connectionStatusTimerInterval/ */
  time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void safeRadioConnectionIndica_reset_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void safeRadioConnectionIndica_init_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** safeRadioConnectionIndica_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

