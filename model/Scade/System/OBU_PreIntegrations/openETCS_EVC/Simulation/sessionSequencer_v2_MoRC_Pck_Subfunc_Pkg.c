/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ */
void sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd,
  /* p42_SessionManagement_in/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement_in,
  /* m39_AckOfTerminationOfACommunicationSession/ */
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *_1_m39_AckOfTerminationOfACommunicationSession,
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
  kcg_int32 noOfRetriesOfSendingTerminationMessage,
  /* maxWaitingTimeForAckMessageReceived/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  kcg_bool tmp;
  /* p42_SessionManagement_out/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_SessionManagement_out_partial;
  /* send_m155_initiationOfACommunicationSession/ */
  kcg_bool send_m155_initiationOfACommunicationSession_partial;
  /* send_m156_TerminationOfCommunicationSession/ */
  kcg_bool send_m156_TerminationOfCommunicationSession_partial;
  /* send_m159_sessionEstablishedReport/ */
  kcg_bool send_m159_sessionEstablishedReport_partial;
  /* send_m154_noCompatibleVersionSupported/ */
  kcg_bool send_m154_noCompatibleVersionSupported_partial;
  /* requestSafeRadioConnectionSetup/ */
  kcg_bool requestSafeRadioConnectionSetup_partial;
  /* infomDriverNoCompatibleVersionSupported/ */
  kcg_bool infomDriverNoCompatibleVersionSupported_partial;
  /* requestReleaseOfSafeRadioConnection/ */
  kcg_bool requestReleaseOfSafeRadioConnection_partial;
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg sessionStatus_partial;
  /* sessionStatus_l/ */
  sessionStatus_T_RCM_Session_Types_Pkg sessionStatus_l_partial;
  /* initializeSession/ */
  kcg_bool initializeSession_partial;
  /* terminateSession/ */
  kcg_bool terminateSession_partial;
  /* established/ */
  kcg_bool established_partial;
  /* terminated/ */
  kcg_bool terminated_partial;
  /* Session_SM: */
  SSM_ST_Session_SM Session_SM_state_nxt_partial;
  /* Session_SM: */
  kcg_bool Session_SM_reset_nxt_partial;
  /* Session_SM: */
  SSM_TR_Session_SM Session_SM_fired_partial;
  /* Session_SM:sessionTerminated:<1> */
  kcg_bool tr_1_guard_sessionTerminated_Session_SM;
  /* p42_SessionManagement_out/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg _2_p42_SessionManagement_out_partial;
  /* send_m155_initiationOfACommunicationSession/ */
  kcg_bool _3_send_m155_initiationOfACommunicationSession_partial;
  /* send_m156_TerminationOfCommunicationSession/ */
  kcg_bool _4_send_m156_TerminationOfCommunicationSession_partial;
  /* send_m159_sessionEstablishedReport/ */
  kcg_bool _5_send_m159_sessionEstablishedReport_partial;
  /* send_m154_noCompatibleVersionSupported/ */
  kcg_bool _6_send_m154_noCompatibleVersionSupported_partial;
  /* requestSafeRadioConnectionSetup/ */
  kcg_bool _7_requestSafeRadioConnectionSetup_partial;
  /* infomDriverNoCompatibleVersionSupported/ */
  kcg_bool _8_infomDriverNoCompatibleVersionSupported_partial;
  /* requestReleaseOfSafeRadioConnection/ */
  kcg_bool _9_requestReleaseOfSafeRadioConnection_partial;
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg _10_sessionStatus_partial;
  /* sessionStatus_l/ */
  sessionStatus_T_RCM_Session_Types_Pkg _11_sessionStatus_l_partial;
  /* initializeSession/ */
  kcg_bool _12_initializeSession_partial;
  /* terminateSession/ */
  kcg_bool _13_terminateSession_partial;
  /* established/ */
  kcg_bool _14_established_partial;
  /* terminated/ */
  kcg_bool _15_terminated_partial;
  /* Session_SM: */
  SSM_ST_Session_SM _16_Session_SM_state_nxt_partial;
  /* Session_SM: */
  kcg_bool _17_Session_SM_reset_nxt_partial;
  /* Session_SM: */
  SSM_TR_Session_SM _18_Session_SM_fired_partial;
  /* Session_SM:establishingSession:<2> */
  kcg_bool tr_2_guard_establishingSession_Session_SM;
  /* Session_SM:establishingSession:<1> */
  kcg_bool tr_1_guard_establishingSession_Session_SM;
  /* p42_SessionManagement_out/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg _19_p42_SessionManagement_out_partial;
  /* send_m155_initiationOfACommunicationSession/ */
  kcg_bool _20_send_m155_initiationOfACommunicationSession_partial;
  /* send_m156_TerminationOfCommunicationSession/ */
  kcg_bool _21_send_m156_TerminationOfCommunicationSession_partial;
  /* send_m159_sessionEstablishedReport/ */
  kcg_bool _22_send_m159_sessionEstablishedReport_partial;
  /* send_m154_noCompatibleVersionSupported/ */
  kcg_bool _23_send_m154_noCompatibleVersionSupported_partial;
  /* requestSafeRadioConnectionSetup/ */
  kcg_bool _24_requestSafeRadioConnectionSetup_partial;
  /* infomDriverNoCompatibleVersionSupported/ */
  kcg_bool _25_infomDriverNoCompatibleVersionSupported_partial;
  /* requestReleaseOfSafeRadioConnection/ */
  kcg_bool _26_requestReleaseOfSafeRadioConnection_partial;
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg _27_sessionStatus_partial;
  /* sessionStatus_l/ */
  sessionStatus_T_RCM_Session_Types_Pkg _28_sessionStatus_l_partial;
  /* initializeSession/ */
  kcg_bool _29_initializeSession_partial;
  /* terminateSession/ */
  kcg_bool _30_terminateSession_partial;
  /* established/ */
  kcg_bool _31_established_partial;
  /* terminated/ */
  kcg_bool _32_terminated_partial;
  /* Session_SM: */
  SSM_ST_Session_SM _33_Session_SM_state_nxt_partial;
  /* Session_SM: */
  kcg_bool _34_Session_SM_reset_nxt_partial;
  /* Session_SM: */
  SSM_TR_Session_SM _35_Session_SM_fired_partial;
  /* Session_SM:maintainingSession:<1> */
  kcg_bool tr_1_guard_maintainingSession_Session_SM;
  /* p42_SessionManagement_out/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg _36_p42_SessionManagement_out_partial;
  /* send_m155_initiationOfACommunicationSession/ */
  kcg_bool _37_send_m155_initiationOfACommunicationSession_partial;
  /* send_m156_TerminationOfCommunicationSession/ */
  kcg_bool _38_send_m156_TerminationOfCommunicationSession_partial;
  /* send_m159_sessionEstablishedReport/ */
  kcg_bool _39_send_m159_sessionEstablishedReport_partial;
  /* send_m154_noCompatibleVersionSupported/ */
  kcg_bool _40_send_m154_noCompatibleVersionSupported_partial;
  /* requestSafeRadioConnectionSetup/ */
  kcg_bool _41_requestSafeRadioConnectionSetup_partial;
  /* infomDriverNoCompatibleVersionSupported/ */
  kcg_bool _42_infomDriverNoCompatibleVersionSupported_partial;
  /* requestReleaseOfSafeRadioConnection/ */
  kcg_bool _43_requestReleaseOfSafeRadioConnection_partial;
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg _44_sessionStatus_partial;
  /* sessionStatus_l/ */
  sessionStatus_T_RCM_Session_Types_Pkg _45_sessionStatus_l_partial;
  /* initializeSession/ */
  kcg_bool _46_initializeSession_partial;
  /* terminateSession/ */
  kcg_bool _47_terminateSession_partial;
  /* established/ */
  kcg_bool _48_established_partial;
  /* terminated/ */
  kcg_bool _49_terminated_partial;
  /* Session_SM: */
  SSM_ST_Session_SM _50_Session_SM_state_nxt_partial;
  /* Session_SM: */
  kcg_bool _51_Session_SM_reset_nxt_partial;
  /* Session_SM: */
  SSM_TR_Session_SM _52_Session_SM_fired_partial;
  /* Session_SM:terminatingSession:<1> */
  kcg_bool tr_1_guard_terminatingSession_Session_SM;
  /* initializeSession/ */
  kcg_bool last_initializeSession;
  /* sessionStatus_l/ */
  sessionStatus_T_RCM_Session_Types_Pkg last_sessionStatus_l;
  /* sessionEstablishCmd/ */
  sessionCmd_T_RCM_Session_Types_Pkg last_sessionEstablishCmd;
  /* Session_SM: */
  kcg_bool Session_SM_reset_sel;
  /* Session_SM: */
  kcg_bool Session_SM_reset_prv;

  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &last_sessionEstablishCmd,
    &outC->mem_sessionEstablishCmd);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->mem_sessionEstablishCmd,
    sessionEstablishCmd);
  last_initializeSession = outC->initializeSession;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &last_sessionStatus_l,
    &outC->sessionStatus_l);
  outC->Session_SM_state_sel = outC->Session_SM_state_nxt;
  outC->Session_SM_state_act = outC->Session_SM_state_sel;
  switch (outC->Session_SM_state_act) {
    case SSM_st_establishingSession_Session_SM :
      outC->_L18_establishingSession_Session_SM = initiateTermination;
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &outC->_L9_establishingSession_Session_SM,
        &last_sessionEstablishCmd);
      kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
        &outC->_L10_establishingSession_Session_SM,
        m32_SystemVersion);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &outC->_L12_establishingSession_Session_SM,
        connectionStatus);
      outC->_L11_establishingSession_Session_SM = reset;
      break;
    case SSM_st_sessionTerminated_Session_SM :
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &outC->_L7_sessionTerminated_Session_SM,
        sessionEstablishCmd);
      outC->_L29_sessionTerminated_Session_SM =
        outC->_L7_sessionTerminated_Session_SM.valid;
      initializeSession_partial = outC->_L29_sessionTerminated_Session_SM;
      tr_1_guard_sessionTerminated_Session_SM = initializeSession_partial;
      outC->tr_1_clock_sessionTerminated_Session_SM =
        tr_1_guard_sessionTerminated_Session_SM;
      break;
    default :
      /* this branch is empty */
      break;
  }
  Session_SM_reset_sel = outC->Session_SM_reset_nxt;
  switch (outC->Session_SM_state_sel) {
    case SSM_st_establishingSession_Session_SM :
      if (Session_SM_reset_sel) {
        /* Session_SM:establishingSession:_L1=(MoRC_Pck::Subfunc_Pkg::establishSession_v2#1)/ */
        establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->Context_establishSession_v2_1);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->Session_SM_state_act) {
    case SSM_st_terminatingSession_Session_SM :
      outC->_L6_terminatingSession_Session_SM = kcg_true;
      kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
        &outC->_L8_terminatingSession_Session_SM,
        _1_m39_AckOfTerminationOfACommunicationSession);
      outC->_L7_terminatingSession_Session_SM = currentTime;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L9_terminatingSession_Session_SM,
        &last_sessionStatus_l);
      outC->_L5_terminatingSession_Session_SM = reset;
      outC->_L10_terminatingSession_Session_SM =
        noOfRetriesOfSendingTerminationMessage;
      outC->_L11_terminatingSession_Session_SM = maxWaitingTimeForAckMessageReceived;
      break;
    case SSM_st_maintainingSession_Session_SM :
      outC->_L3_maintainingSession_Session_SM = initiateTermination;
      _30_terminateSession_partial = outC->_L3_maintainingSession_Session_SM;
      tr_1_guard_maintainingSession_Session_SM = _30_terminateSession_partial;
      outC->tr_1_clock_maintainingSession_Session_SM =
        tr_1_guard_maintainingSession_Session_SM;
      break;
    case SSM_st_establishingSession_Session_SM :
      /* Session_SM:establishingSession:_L1=(MoRC_Pck::Subfunc_Pkg::establishSession_v2#1)/ */
      establishSession_v2_MoRC_Pck_Subfunc_Pkg(
        &outC->_L9_establishingSession_Session_SM,
        &outC->_L10_establishingSession_Session_SM,
        &outC->_L12_establishingSession_Session_SM,
        outC->_L11_establishingSession_Session_SM,
        &outC->Context_establishSession_v2_1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->_L1_establishingSession_Session_SM,
        &outC->Context_establishSession_v2_1.p42_establishSessionCmd);
      outC->_L2_establishingSession_Session_SM =
        outC->Context_establishSession_v2_1.send_m155_initiationOfACommunicationSession;
      outC->_L3_establishingSession_Session_SM =
        outC->Context_establishSession_v2_1.send_m159_sessionEstablishedReport;
      outC->_L4_establishingSession_Session_SM =
        outC->Context_establishSession_v2_1.send_m154_noCompatibleVersionSupported;
      outC->_L5_establishingSession_Session_SM =
        outC->Context_establishSession_v2_1.requestSafeRadioConnectionSetup;
      outC->_L6_establishingSession_Session_SM =
        outC->Context_establishSession_v2_1.terminateCommunicationSession;
      outC->_L7_establishingSession_Session_SM =
        outC->Context_establishSession_v2_1.infomDriverNoCompatibleVersionSupported;
      outC->_L16_establishingSession_Session_SM =
        outC->Context_establishSession_v2_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L8_establishingSession_Session_SM,
        &outC->Context_establishSession_v2_1.sessionStatus);
      outC->_L17_establishingSession_Session_SM =
        outC->_L6_establishingSession_Session_SM |
        outC->_L18_establishingSession_Session_SM;
      _13_terminateSession_partial = outC->_L17_establishingSession_Session_SM;
      tr_1_guard_establishingSession_Session_SM = _13_terminateSession_partial;
      outC->tr_1_clock_establishingSession_Session_SM =
        tr_1_guard_establishingSession_Session_SM;
      _14_established_partial = outC->_L16_establishingSession_Session_SM;
      tr_2_guard_establishingSession_Session_SM = _14_established_partial;
      if (outC->tr_1_clock_establishingSession_Session_SM) {
      }
      else {
        outC->tr_2_clock_establishingSession_Session_SM =
          tr_2_guard_establishingSession_Session_SM;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->Session_SM_state_sel) {
    case SSM_st_terminatingSession_Session_SM :
      if (Session_SM_reset_sel) {
        /* Session_SM:terminatingSession:_L2=(MoRC_Pck::Subfunc_Pkg::terminateSession_v2#1)/ */
        terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->Context_terminateSession_v2_1);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* Session_SM: */
  switch (outC->Session_SM_state_act) {
    case SSM_st_terminatingSession_Session_SM :
      /* Session_SM:terminatingSession:_L2=(MoRC_Pck::Subfunc_Pkg::terminateSession_v2#1)/ */
      terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
        outC->_L6_terminatingSession_Session_SM,
        &outC->_L8_terminatingSession_Session_SM,
        outC->_L7_terminatingSession_Session_SM,
        &outC->_L9_terminatingSession_Session_SM,
        outC->_L5_terminatingSession_Session_SM,
        outC->_L10_terminatingSession_Session_SM,
        outC->_L11_terminatingSession_Session_SM,
        &outC->Context_terminateSession_v2_1);
      outC->_L2_terminatingSession_Session_SM =
        outC->Context_terminateSession_v2_1.send_m156_TerminationOfCommunicationSession;
      outC->_L3_terminatingSession_Session_SM =
        outC->Context_terminateSession_v2_1.requestReleaseOfSafeRadioConnection;
      outC->_L4_terminatingSession_Session_SM =
        outC->Context_terminateSession_v2_1.terminated;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L1_terminatingSession_Session_SM,
        &outC->Context_terminateSession_v2_1.sessionStatus);
      outC->_L12_terminatingSession_Session_SM =
        outC->Context_terminateSession_v2_1.notReady;
      _49_terminated_partial = outC->_L4_terminatingSession_Session_SM;
      tr_1_guard_terminatingSession_Session_SM = _49_terminated_partial;
      outC->tr_1_clock_terminatingSession_Session_SM =
        tr_1_guard_terminatingSession_Session_SM;
      /* Session_SM:terminatingSession:<1> */
      if (outC->tr_1_clock_terminatingSession_Session_SM) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      outC->sNotReady = outC->_L12_terminatingSession_Session_SM | tmp;
      break;
    case SSM_st_maintainingSession_Session_SM :
      /* Session_SM:maintainingSession:<1> */
      if (outC->tr_1_clock_maintainingSession_Session_SM) {
        outC->sNotReady = kcg_true;
      }
      else {
        outC->sNotReady = kcg_false;
      }
      break;
    case SSM_st_establishingSession_Session_SM :
      /* Session_SM:establishingSession:<1> */
      if (outC->tr_1_clock_establishingSession_Session_SM) {
        outC->sNotReady = kcg_true;
      }
      else /* Session_SM:establishingSession:<2> */
      if (outC->tr_2_clock_establishingSession_Session_SM) {
        outC->sNotReady = kcg_true;
      }
      else {
        outC->sNotReady = kcg_false;
      }
      break;
    case SSM_st_sessionTerminated_Session_SM :
      /* Session_SM:sessionTerminated:<1> */
      if (outC->tr_1_clock_sessionTerminated_Session_SM) {
        outC->sNotReady = kcg_true;
      }
      else {
        outC->sNotReady = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L1 = outC->sNotReady;
  outC->notReady = outC->_L1;
  switch (outC->Session_SM_state_act) {
    case SSM_st_terminatingSession_Session_SM :
      _48_established_partial = kcg_false;
      _47_terminateSession_partial = kcg_false;
      _46_initializeSession_partial = last_initializeSession;
      _42_infomDriverNoCompatibleVersionSupported_partial = kcg_false;
      _41_requestSafeRadioConnectionSetup_partial = kcg_false;
      _40_send_m154_noCompatibleVersionSupported_partial = kcg_false;
      _39_send_m159_sessionEstablishedReport_partial = kcg_false;
      _37_send_m155_initiationOfACommunicationSession_partial = kcg_false;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_36_p42_SessionManagement_out_partial,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (tr_1_guard_terminatingSession_Session_SM) {
        _52_Session_SM_fired_partial =
          SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM;
      }
      else {
        _52_Session_SM_fired_partial = SSM_TR_no_trans_Session_SM;
      }
      _51_Session_SM_reset_nxt_partial = tr_1_guard_terminatingSession_Session_SM;
      if (tr_1_guard_terminatingSession_Session_SM) {
        _50_Session_SM_state_nxt_partial = SSM_st_sessionTerminated_Session_SM;
      }
      else {
        _50_Session_SM_state_nxt_partial = SSM_st_terminatingSession_Session_SM;
      }
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_44_sessionStatus_partial,
        &outC->_L1_terminatingSession_Session_SM);
      _43_requestReleaseOfSafeRadioConnection_partial =
        outC->_L3_terminatingSession_Session_SM;
      _38_send_m156_TerminationOfCommunicationSession_partial =
        outC->_L2_terminatingSession_Session_SM;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_45_sessionStatus_l_partial,
        &outC->_L1_terminatingSession_Session_SM);
      break;
    case SSM_st_maintainingSession_Session_SM :
      _32_terminated_partial = kcg_false;
      _31_established_partial = kcg_false;
      _29_initializeSession_partial = last_initializeSession;
      _26_requestReleaseOfSafeRadioConnection_partial = kcg_false;
      _25_infomDriverNoCompatibleVersionSupported_partial = kcg_false;
      _24_requestSafeRadioConnectionSetup_partial = kcg_false;
      _23_send_m154_noCompatibleVersionSupported_partial = kcg_false;
      _22_send_m159_sessionEstablishedReport_partial = kcg_false;
      _21_send_m156_TerminationOfCommunicationSession_partial = kcg_false;
      _20_send_m155_initiationOfACommunicationSession_partial = kcg_false;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_19_p42_SessionManagement_out_partial,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (tr_1_guard_maintainingSession_Session_SM) {
        _35_Session_SM_fired_partial =
          SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM;
      }
      else {
        _35_Session_SM_fired_partial = SSM_TR_no_trans_Session_SM;
      }
      _34_Session_SM_reset_nxt_partial = tr_1_guard_maintainingSession_Session_SM;
      if (tr_1_guard_maintainingSession_Session_SM) {
        _33_Session_SM_state_nxt_partial = SSM_st_terminatingSession_Session_SM;
      }
      else {
        _33_Session_SM_state_nxt_partial = SSM_st_maintainingSession_Session_SM;
      }
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L2_maintainingSession_Session_SM,
        &last_sessionStatus_l);
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->Session_SM_state_sel) {
    case SSM_st_maintainingSession_Session_SM :
      if (Session_SM_reset_sel) {
        /* Session_SM:maintainingSession:_L1=(MoRC_Pck::Subfunc_Pkg::maintainingSession_v2#1)/ */
        maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->Context_maintainingSession_v2_1);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* Session_SM: */
  switch (outC->Session_SM_state_act) {
    case SSM_st_terminatingSession_Session_SM :
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &_36_p42_SessionManagement_out_partial);
      outC->send_m155_initiationOfACommunicationSession =
        _37_send_m155_initiationOfACommunicationSession_partial;
      outC->send_m156_TerminationOfCommunicationSession =
        _38_send_m156_TerminationOfCommunicationSession_partial;
      outC->send_m159_sessionEstablishedReport =
        _39_send_m159_sessionEstablishedReport_partial;
      outC->send_m154_noCompatibleVersionSupported =
        _40_send_m154_noCompatibleVersionSupported_partial;
      outC->requestSafeRadioConnectionSetup =
        _41_requestSafeRadioConnectionSetup_partial;
      outC->infomDriverNoCompatibleVersionSupported =
        _42_infomDriverNoCompatibleVersionSupported_partial;
      outC->requestReleaseOfSafeRadioConnection =
        _43_requestReleaseOfSafeRadioConnection_partial;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_44_sessionStatus_partial);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &_45_sessionStatus_l_partial);
      outC->initializeSession = _46_initializeSession_partial;
      outC->terminateSession = _47_terminateSession_partial;
      outC->established = _48_established_partial;
      outC->terminated = _49_terminated_partial;
      outC->Session_SM_state_nxt = _50_Session_SM_state_nxt_partial;
      outC->Session_SM_reset_nxt = _51_Session_SM_reset_nxt_partial;
      outC->Session_SM_fired = _52_Session_SM_fired_partial;
      break;
    case SSM_st_maintainingSession_Session_SM :
      /* Session_SM:maintainingSession:_L1=(MoRC_Pck::Subfunc_Pkg::maintainingSession_v2#1)/ */
      maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
        &outC->_L2_maintainingSession_Session_SM,
        &outC->Context_maintainingSession_v2_1);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L1_maintainingSession_Session_SM,
        &outC->Context_maintainingSession_v2_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_27_sessionStatus_partial,
        &outC->_L1_maintainingSession_Session_SM);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_28_sessionStatus_l_partial,
        &outC->_L1_maintainingSession_Session_SM);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &_19_p42_SessionManagement_out_partial);
      outC->send_m155_initiationOfACommunicationSession =
        _20_send_m155_initiationOfACommunicationSession_partial;
      outC->send_m156_TerminationOfCommunicationSession =
        _21_send_m156_TerminationOfCommunicationSession_partial;
      outC->send_m159_sessionEstablishedReport =
        _22_send_m159_sessionEstablishedReport_partial;
      outC->send_m154_noCompatibleVersionSupported =
        _23_send_m154_noCompatibleVersionSupported_partial;
      outC->requestSafeRadioConnectionSetup =
        _24_requestSafeRadioConnectionSetup_partial;
      outC->infomDriverNoCompatibleVersionSupported =
        _25_infomDriverNoCompatibleVersionSupported_partial;
      outC->requestReleaseOfSafeRadioConnection =
        _26_requestReleaseOfSafeRadioConnection_partial;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_27_sessionStatus_partial);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &_28_sessionStatus_l_partial);
      outC->initializeSession = _29_initializeSession_partial;
      outC->terminateSession = _30_terminateSession_partial;
      outC->established = _31_established_partial;
      outC->terminated = _32_terminated_partial;
      outC->Session_SM_state_nxt = _33_Session_SM_state_nxt_partial;
      outC->Session_SM_reset_nxt = _34_Session_SM_reset_nxt_partial;
      outC->Session_SM_fired = _35_Session_SM_fired_partial;
      break;
    case SSM_st_establishingSession_Session_SM :
      _15_terminated_partial = kcg_false;
      _12_initializeSession_partial = last_initializeSession;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_11_sessionStatus_l_partial,
        &last_sessionStatus_l);
      _9_requestReleaseOfSafeRadioConnection_partial = kcg_false;
      _4_send_m156_TerminationOfCommunicationSession_partial = kcg_false;
      if (tr_1_guard_establishingSession_Session_SM) {
        _18_Session_SM_fired_partial =
          SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM;
      }
      else if (tr_2_guard_establishingSession_Session_SM) {
        _18_Session_SM_fired_partial =
          SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM;
      }
      else {
        _18_Session_SM_fired_partial = SSM_TR_no_trans_Session_SM;
      }
      if (tr_1_guard_establishingSession_Session_SM) {
        _17_Session_SM_reset_nxt_partial = kcg_true;
      }
      else {
        _17_Session_SM_reset_nxt_partial = tr_2_guard_establishingSession_Session_SM;
      }
      if (tr_1_guard_establishingSession_Session_SM) {
        _16_Session_SM_state_nxt_partial = SSM_st_terminatingSession_Session_SM;
      }
      else if (tr_2_guard_establishingSession_Session_SM) {
        _16_Session_SM_state_nxt_partial = SSM_st_maintainingSession_Session_SM;
      }
      else {
        _16_Session_SM_state_nxt_partial = SSM_st_establishingSession_Session_SM;
      }
      _8_infomDriverNoCompatibleVersionSupported_partial =
        outC->_L7_establishingSession_Session_SM;
      _7_requestSafeRadioConnectionSetup_partial =
        outC->_L5_establishingSession_Session_SM;
      _6_send_m154_noCompatibleVersionSupported_partial =
        outC->_L4_establishingSession_Session_SM;
      _5_send_m159_sessionEstablishedReport_partial =
        outC->_L3_establishingSession_Session_SM;
      _3_send_m155_initiationOfACommunicationSession_partial =
        outC->_L2_establishingSession_Session_SM;
      outC->_L15_establishingSession_Session_SM =
        outC->_L1_establishingSession_Session_SM.valid;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->_L13_establishingSession_Session_SM,
        p42_SessionManagement_in);
      /* Session_SM:establishingSession:_L14= */
      if (outC->_L15_establishingSession_Session_SM) {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &outC->_L14_establishingSession_Session_SM,
          &outC->_L1_establishingSession_Session_SM);
      }
      else {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &outC->_L14_establishingSession_Session_SM,
          &outC->_L13_establishingSession_Session_SM);
      }
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_2_p42_SessionManagement_out_partial,
        &outC->_L14_establishingSession_Session_SM);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_10_sessionStatus_partial,
        &outC->_L8_establishingSession_Session_SM);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &_2_p42_SessionManagement_out_partial);
      outC->send_m155_initiationOfACommunicationSession =
        _3_send_m155_initiationOfACommunicationSession_partial;
      outC->send_m156_TerminationOfCommunicationSession =
        _4_send_m156_TerminationOfCommunicationSession_partial;
      outC->send_m159_sessionEstablishedReport =
        _5_send_m159_sessionEstablishedReport_partial;
      outC->send_m154_noCompatibleVersionSupported =
        _6_send_m154_noCompatibleVersionSupported_partial;
      outC->requestSafeRadioConnectionSetup =
        _7_requestSafeRadioConnectionSetup_partial;
      outC->infomDriverNoCompatibleVersionSupported =
        _8_infomDriverNoCompatibleVersionSupported_partial;
      outC->requestReleaseOfSafeRadioConnection =
        _9_requestReleaseOfSafeRadioConnection_partial;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_10_sessionStatus_partial);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &_11_sessionStatus_l_partial);
      outC->initializeSession = _12_initializeSession_partial;
      outC->terminateSession = _13_terminateSession_partial;
      outC->established = _14_established_partial;
      outC->terminated = _15_terminated_partial;
      outC->Session_SM_state_nxt = _16_Session_SM_state_nxt_partial;
      outC->Session_SM_reset_nxt = _17_Session_SM_reset_nxt_partial;
      outC->Session_SM_fired = _18_Session_SM_fired_partial;
      break;
    case SSM_st_sessionTerminated_Session_SM :
      terminated_partial = kcg_false;
      established_partial = kcg_false;
      terminateSession_partial = kcg_false;
      requestReleaseOfSafeRadioConnection_partial = kcg_false;
      infomDriverNoCompatibleVersionSupported_partial = kcg_false;
      requestSafeRadioConnectionSetup_partial = kcg_false;
      send_m154_noCompatibleVersionSupported_partial = kcg_false;
      send_m159_sessionEstablishedReport_partial = kcg_false;
      send_m156_TerminationOfCommunicationSession_partial = kcg_false;
      send_m155_initiationOfACommunicationSession_partial = kcg_false;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &p42_SessionManagement_out_partial,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (tr_1_guard_sessionTerminated_Session_SM) {
        Session_SM_fired_partial =
          SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM;
      }
      else {
        Session_SM_fired_partial = SSM_TR_no_trans_Session_SM;
      }
      Session_SM_reset_nxt_partial = tr_1_guard_sessionTerminated_Session_SM;
      if (tr_1_guard_sessionTerminated_Session_SM) {
        Session_SM_state_nxt_partial = SSM_st_establishingSession_Session_SM;
      }
      else {
        Session_SM_state_nxt_partial = SSM_st_sessionTerminated_Session_SM;
      }
      outC->_L6_sessionTerminated_Session_SM = sp_terminated_RCM_Session_Types_Pkg;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L3_sessionTerminated_Session_SM,
        &last_sessionStatus_l);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L5_sessionTerminated_Session_SM,
        &outC->_L3_sessionTerminated_Session_SM);
      if (kcg_true) {
        outC->_L5_sessionTerminated_Session_SM.phase =
          outC->_L6_sessionTerminated_Session_SM;
      }
      outC->_L34_sessionTerminated_Session_SM = sp_terminated_RCM_Session_Types_Pkg;
      outC->_L30_sessionTerminated_Session_SM =
        outC->_L7_sessionTerminated_Session_SM.nid_c;
      outC->_L31_sessionTerminated_Session_SM =
        outC->_L7_sessionTerminated_Session_SM.nid_rbc;
      outC->_L32_sessionTerminated_Session_SM =
        outC->_L7_sessionTerminated_Session_SM.nid_radio;
      outC->_L8_sessionTerminated_Session_SM.valid =
        outC->_L29_sessionTerminated_Session_SM;
      outC->_L8_sessionTerminated_Session_SM.phase =
        outC->_L34_sessionTerminated_Session_SM;
      outC->_L8_sessionTerminated_Session_SM.nid_c =
        outC->_L30_sessionTerminated_Session_SM;
      outC->_L8_sessionTerminated_Session_SM.nid_rbc =
        outC->_L31_sessionTerminated_Session_SM;
      outC->_L8_sessionTerminated_Session_SM.nid_radio =
        outC->_L32_sessionTerminated_Session_SM;
      /* Session_SM:sessionTerminated:_L35= */
      if (outC->_L29_sessionTerminated_Session_SM) {
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L35_sessionTerminated_Session_SM,
          &outC->_L8_sessionTerminated_Session_SM);
      }
      else {
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L35_sessionTerminated_Session_SM,
          &outC->_L5_sessionTerminated_Session_SM);
      }
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &sessionStatus_partial,
        &outC->_L35_sessionTerminated_Session_SM);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &sessionStatus_l_partial,
        &outC->_L35_sessionTerminated_Session_SM);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &p42_SessionManagement_out_partial);
      outC->send_m155_initiationOfACommunicationSession =
        send_m155_initiationOfACommunicationSession_partial;
      outC->send_m156_TerminationOfCommunicationSession =
        send_m156_TerminationOfCommunicationSession_partial;
      outC->send_m159_sessionEstablishedReport =
        send_m159_sessionEstablishedReport_partial;
      outC->send_m154_noCompatibleVersionSupported =
        send_m154_noCompatibleVersionSupported_partial;
      outC->requestSafeRadioConnectionSetup = requestSafeRadioConnectionSetup_partial;
      outC->infomDriverNoCompatibleVersionSupported =
        infomDriverNoCompatibleVersionSupported_partial;
      outC->requestReleaseOfSafeRadioConnection =
        requestReleaseOfSafeRadioConnection_partial;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &sessionStatus_partial);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &sessionStatus_l_partial);
      outC->initializeSession = initializeSession_partial;
      outC->terminateSession = terminateSession_partial;
      outC->established = established_partial;
      outC->terminated = terminated_partial;
      outC->Session_SM_state_nxt = Session_SM_state_nxt_partial;
      outC->Session_SM_reset_nxt = Session_SM_reset_nxt_partial;
      outC->Session_SM_fired = Session_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->Session_SM_fired_strong = SSM_TR_no_trans_Session_SM;
  Session_SM_reset_prv = outC->Session_SM_reset_act;
  outC->Session_SM_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L1 = kcg_true;
  outC->terminated = kcg_true;
  outC->established = kcg_true;
  outC->terminateSession = kcg_true;
  outC->Session_SM_fired = SSM_TR_no_trans_Session_SM;
  outC->Session_SM_fired_strong = SSM_TR_no_trans_Session_SM;
  outC->Session_SM_state_act = SSM_st_sessionTerminated_Session_SM;
  outC->Session_SM_state_sel = SSM_st_sessionTerminated_Session_SM;
  outC->sNotReady = kcg_true;
  outC->tr_1_clock_terminatingSession_Session_SM = kcg_true;
  outC->_L4_terminatingSession_Session_SM = kcg_true;
  outC->_L3_terminatingSession_Session_SM = kcg_true;
  outC->_L2_terminatingSession_Session_SM = kcg_true;
  outC->_L1_terminatingSession_Session_SM.valid = kcg_true;
  outC->_L1_terminatingSession_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_terminatingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L1_terminatingSession_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L1_terminatingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L5_terminatingSession_Session_SM = kcg_true;
  outC->_L6_terminatingSession_Session_SM = kcg_true;
  outC->_L7_terminatingSession_Session_SM = kcg_lit_int32(0);
  outC->_L8_terminatingSession_Session_SM.valid = kcg_true;
  outC->_L8_terminatingSession_Session_SM.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L8_terminatingSession_Session_SM.origin.valid = kcg_true;
  outC->_L8_terminatingSession_Session_SM.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_terminatingSession_Session_SM.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_terminatingSession_Session_SM.origin.device_id = kcg_lit_int32(0);
  outC->_L8_terminatingSession_Session_SM.lrbg = kcg_lit_int32(0);
  outC->_L9_terminatingSession_Session_SM.valid = kcg_true;
  outC->_L9_terminatingSession_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L9_terminatingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L9_terminatingSession_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L9_terminatingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L10_terminatingSession_Session_SM = kcg_lit_int32(0);
  outC->_L11_terminatingSession_Session_SM = kcg_lit_int32(0);
  outC->_L12_terminatingSession_Session_SM = kcg_true;
  outC->tr_1_clock_maintainingSession_Session_SM = kcg_true;
  outC->_L1_maintainingSession_Session_SM.valid = kcg_true;
  outC->_L1_maintainingSession_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_maintainingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L1_maintainingSession_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L1_maintainingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L2_maintainingSession_Session_SM.valid = kcg_true;
  outC->_L2_maintainingSession_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_maintainingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L2_maintainingSession_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L2_maintainingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L3_maintainingSession_Session_SM = kcg_true;
  outC->tr_2_clock_establishingSession_Session_SM = kcg_true;
  outC->tr_1_clock_establishingSession_Session_SM = kcg_true;
  outC->_L8_establishingSession_Session_SM.valid = kcg_true;
  outC->_L8_establishingSession_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L8_establishingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L8_establishingSession_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L8_establishingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L7_establishingSession_Session_SM = kcg_true;
  outC->_L6_establishingSession_Session_SM = kcg_true;
  outC->_L5_establishingSession_Session_SM = kcg_true;
  outC->_L4_establishingSession_Session_SM = kcg_true;
  outC->_L3_establishingSession_Session_SM = kcg_true;
  outC->_L2_establishingSession_Session_SM = kcg_true;
  outC->_L1_establishingSession_Session_SM.valid = kcg_true;
  outC->_L1_establishingSession_Session_SM.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L1_establishingSession_Session_SM.q_dir = Q_DIR_Reverse;
  outC->_L1_establishingSession_Session_SM.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L1_establishingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L1_establishingSession_Session_SM.nid_RBC = kcg_lit_int32(0);
  outC->_L1_establishingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L1_establishingSession_Session_SM.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1_establishingSession_Session_SM.origin.valid = kcg_true;
  outC->_L1_establishingSession_Session_SM.origin.nid_c = kcg_lit_int32(0);
  outC->_L1_establishingSession_Session_SM.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1_establishingSession_Session_SM.origin.device_id = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.valid = kcg_true;
  outC->_L9_establishingSession_Session_SM.initiatedByOBU = kcg_true;
  outC->_L9_establishingSession_Session_SM.initiatedByRBC = kcg_true;
  outC->_L9_establishingSession_Session_SM.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L9_establishingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L9_establishingSession_Session_SM.origin.valid = kcg_true;
  outC->_L9_establishingSession_Session_SM.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.origin.device_id = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.m38.valid = kcg_true;
  outC->_L9_establishingSession_Session_SM.m38.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L9_establishingSession_Session_SM.m38.origin.valid = kcg_true;
  outC->_L9_establishingSession_Session_SM.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.m38.origin.device_id = kcg_lit_int32(
      0);
  outC->_L9_establishingSession_Session_SM.p42.valid = kcg_true;
  outC->_L9_establishingSession_Session_SM.p42.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L9_establishingSession_Session_SM.p42.q_dir = Q_DIR_Reverse;
  outC->_L9_establishingSession_Session_SM.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L9_establishingSession_Session_SM.p42.nid_c = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.p42.nid_radio = kcg_lit_int64(0);
  outC->_L9_establishingSession_Session_SM.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L9_establishingSession_Session_SM.p42.origin.valid = kcg_true;
  outC->_L9_establishingSession_Session_SM.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_establishingSession_Session_SM.p42.origin.device_id = kcg_lit_int32(
      0);
  outC->_L10_establishingSession_Session_SM.valid = kcg_true;
  outC->_L10_establishingSession_Session_SM.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L10_establishingSession_Session_SM.versionSupported = kcg_true;
  outC->_L10_establishingSession_Session_SM.origin.valid = kcg_true;
  outC->_L10_establishingSession_Session_SM.origin.nid_c = kcg_lit_int32(0);
  outC->_L10_establishingSession_Session_SM.origin.rbc_id = kcg_lit_int32(0);
  outC->_L10_establishingSession_Session_SM.origin.device_id = kcg_lit_int32(0);
  outC->_L10_establishingSession_Session_SM.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_establishingSession_Session_SM = kcg_true;
  outC->_L12_establishingSession_Session_SM.valid = kcg_true;
  outC->_L12_establishingSession_Session_SM.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L12_establishingSession_Session_SM.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L12_establishingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L12_establishingSession_Session_SM.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L12_establishingSession_Session_SM.connectionLost = kcg_true;
  outC->_L12_establishingSession_Session_SM.isInRadioHole = kcg_true;
  outC->_L13_establishingSession_Session_SM.valid = kcg_true;
  outC->_L13_establishingSession_Session_SM.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L13_establishingSession_Session_SM.q_dir = Q_DIR_Reverse;
  outC->_L13_establishingSession_Session_SM.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L13_establishingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L13_establishingSession_Session_SM.nid_RBC = kcg_lit_int32(0);
  outC->_L13_establishingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L13_establishingSession_Session_SM.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L13_establishingSession_Session_SM.origin.valid = kcg_true;
  outC->_L13_establishingSession_Session_SM.origin.nid_c = kcg_lit_int32(0);
  outC->_L13_establishingSession_Session_SM.origin.rbc_id = kcg_lit_int32(0);
  outC->_L13_establishingSession_Session_SM.origin.device_id = kcg_lit_int32(0);
  outC->_L14_establishingSession_Session_SM.valid = kcg_true;
  outC->_L14_establishingSession_Session_SM.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L14_establishingSession_Session_SM.q_dir = Q_DIR_Reverse;
  outC->_L14_establishingSession_Session_SM.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L14_establishingSession_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L14_establishingSession_Session_SM.nid_RBC = kcg_lit_int32(0);
  outC->_L14_establishingSession_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L14_establishingSession_Session_SM.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L14_establishingSession_Session_SM.origin.valid = kcg_true;
  outC->_L14_establishingSession_Session_SM.origin.nid_c = kcg_lit_int32(0);
  outC->_L14_establishingSession_Session_SM.origin.rbc_id = kcg_lit_int32(0);
  outC->_L14_establishingSession_Session_SM.origin.device_id = kcg_lit_int32(0);
  outC->_L15_establishingSession_Session_SM = kcg_true;
  outC->_L16_establishingSession_Session_SM = kcg_true;
  outC->_L17_establishingSession_Session_SM = kcg_true;
  outC->_L18_establishingSession_Session_SM = kcg_true;
  outC->tr_1_clock_sessionTerminated_Session_SM = kcg_true;
  outC->_L3_sessionTerminated_Session_SM.valid = kcg_true;
  outC->_L3_sessionTerminated_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L3_sessionTerminated_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L3_sessionTerminated_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L3_sessionTerminated_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L5_sessionTerminated_Session_SM.valid = kcg_true;
  outC->_L5_sessionTerminated_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L5_sessionTerminated_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L5_sessionTerminated_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L5_sessionTerminated_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L6_sessionTerminated_Session_SM = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_sessionTerminated_Session_SM.valid = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.initiatedByOBU = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.initiatedByRBC = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L7_sessionTerminated_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L7_sessionTerminated_Session_SM.origin.valid = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.origin.device_id = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.m38.valid = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.m38.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L7_sessionTerminated_Session_SM.m38.origin.valid = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.p42.valid = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.p42.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->_L7_sessionTerminated_Session_SM.p42.q_dir = Q_DIR_Reverse;
  outC->_L7_sessionTerminated_Session_SM.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L7_sessionTerminated_Session_SM.p42.nid_c = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.p42.nid_radio = kcg_lit_int64(0);
  outC->_L7_sessionTerminated_Session_SM.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L7_sessionTerminated_Session_SM.p42.origin.valid = kcg_true;
  outC->_L7_sessionTerminated_Session_SM.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_sessionTerminated_Session_SM.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L8_sessionTerminated_Session_SM.valid = kcg_true;
  outC->_L8_sessionTerminated_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L8_sessionTerminated_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L8_sessionTerminated_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L8_sessionTerminated_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->_L29_sessionTerminated_Session_SM = kcg_true;
  outC->_L30_sessionTerminated_Session_SM = kcg_lit_int32(0);
  outC->_L31_sessionTerminated_Session_SM = kcg_lit_int32(0);
  outC->_L32_sessionTerminated_Session_SM = kcg_lit_int64(0);
  outC->_L34_sessionTerminated_Session_SM = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L35_sessionTerminated_Session_SM.valid = kcg_true;
  outC->_L35_sessionTerminated_Session_SM.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L35_sessionTerminated_Session_SM.nid_c = kcg_lit_int32(0);
  outC->_L35_sessionTerminated_Session_SM.nid_rbc = kcg_lit_int32(0);
  outC->_L35_sessionTerminated_Session_SM.nid_radio = kcg_lit_int64(0);
  outC->initializeSession = kcg_true;
  outC->notReady = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = kcg_lit_int32(0);
  outC->sessionStatus.nid_rbc = kcg_lit_int32(0);
  outC->sessionStatus.nid_radio = kcg_lit_int64(0);
  outC->requestReleaseOfSafeRadioConnection = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->send_m154_noCompatibleVersionSupported = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->send_m156_TerminationOfCommunicationSession = kcg_true;
  outC->send_m155_initiationOfACommunicationSession = kcg_true;
  outC->p42_SessionManagement_out.valid = kcg_true;
  outC->p42_SessionManagement_out.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_SessionManagement_out.q_dir = Q_DIR_Reverse;
  outC->p42_SessionManagement_out.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_SessionManagement_out.nid_c = kcg_lit_int32(0);
  outC->p42_SessionManagement_out.nid_RBC = kcg_lit_int32(0);
  outC->p42_SessionManagement_out.nid_radio = kcg_lit_int64(0);
  outC->p42_SessionManagement_out.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_SessionManagement_out.origin.valid = kcg_true;
  outC->p42_SessionManagement_out.origin.nid_c = kcg_lit_int32(0);
  outC->p42_SessionManagement_out.origin.rbc_id = kcg_lit_int32(0);
  outC->p42_SessionManagement_out.origin.device_id = kcg_lit_int32(0);
  /* Session_SM:maintainingSession:_L1=(MoRC_Pck::Subfunc_Pkg::maintainingSession_v2#1)/ */
  maintainingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_maintainingSession_v2_1);
  /* Session_SM:terminatingSession:_L2=(MoRC_Pck::Subfunc_Pkg::terminateSession_v2#1)/ */
  terminateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_terminateSession_v2_1);
  /* Session_SM:establishingSession:_L1=(MoRC_Pck::Subfunc_Pkg::establishSession_v2#1)/ */
  establishSession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSession_v2_1);
  outC->Session_SM_reset_act = kcg_false;
  outC->Session_SM_reset_nxt = kcg_false;
  outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cInitialSessionStatus_RCM_Session_Types_Pkg);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->mem_sessionEstablishCmd,
    (sessionCmd_T_RCM_Session_Types_Pkg *) &cNoSessionCmd_RCM_Session_Types_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* Session_SM:maintainingSession:_L1=(MoRC_Pck::Subfunc_Pkg::maintainingSession_v2#1)/ */
  maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_maintainingSession_v2_1);
  /* Session_SM:terminatingSession:_L2=(MoRC_Pck::Subfunc_Pkg::terminateSession_v2#1)/ */
  terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_terminateSession_v2_1);
  /* Session_SM:establishingSession:_L1=(MoRC_Pck::Subfunc_Pkg::establishSession_v2#1)/ */
  establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSession_v2_1);
  outC->Session_SM_reset_act = kcg_false;
  outC->Session_SM_reset_nxt = kcg_false;
  outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cInitialSessionStatus_RCM_Session_Types_Pkg);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->mem_sessionEstablishCmd,
    (sessionCmd_T_RCM_Session_Types_Pkg *) &cNoSessionCmd_RCM_Session_Types_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

