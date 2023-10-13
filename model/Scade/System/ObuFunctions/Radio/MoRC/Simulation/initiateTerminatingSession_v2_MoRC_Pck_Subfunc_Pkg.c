/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ */
void initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* p42_SessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *_1_eventsAndPhases,
  /* mode/ */
  M_MODE mode2,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* currentTime/ */
  time_Type_MoRC_Pck _3_currentTime,
  /* reset/ */
  kcg_bool reset4,
  /* maxWaitingTimeUntilTerminationOrderReceived/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived,
  /* noOfRetriesUntilTerminationOrderIsReceived/ */
  kcg_int32 noOfRetriesUntilTerminationOrderIsReceived,
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* definedNumberOfRepetitionsHasBeenReached/ */
  static kcg_bool definedNumberOfRepetitionsHasBeenReached_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_TR_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_fired_partial;
  /* definedNumberOfRepetitionsHasBeenReached/ */
  static kcg_bool _5_definedNumberOfRepetitionsHasBeenReached_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_ST_TrainExitedFromRBCArea_SM _6_TrainExitedFromRBCArea_SM_state_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool _7_TrainExitedFromRBCArea_SM_reset_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_TR_TrainExitedFromRBCArea_SM _8_TrainExitedFromRBCArea_SM_fired_partial;
  /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:<2> */
  static kcg_bool tr_2_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_TR_TrainExitedFromRBCArea_SM _9_TrainExitedFromRBCArea_SM_fired_partial;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool _10_TrainExitedFromRBCArea_SM_reset_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_ST_TrainExitedFromRBCArea_SM _11_TrainExitedFromRBCArea_SM_state_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_TR_TrainExitedFromRBCArea_SM _12_TrainExitedFromRBCArea_SM_fired_partial;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool _13_TrainExitedFromRBCArea_SM_reset_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_ST_TrainExitedFromRBCArea_SM _14_TrainExitedFromRBCArea_SM_state_nxt_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_act_partial;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_act_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_TR_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_fired_strong_partial;
  /* TrainExitedFromRBCArea_SM:Idle:<2> */
  static kcg_bool tr_2_guard_Idle_TrainExitedFromRBCArea_SM;
  /* TrainExitedFromRBCArea_SM:Idle:<1> */
  static kcg_bool tr_1_guard_Idle_TrainExitedFromRBCArea_SM;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_ST_TrainExitedFromRBCArea_SM _15_TrainExitedFromRBCArea_SM_state_act_partial;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool _16_TrainExitedFromRBCArea_SM_reset_act_partial;
  /* TrainExitedFromRBCArea_SM: */
  static SSM_TR_TrainExitedFromRBCArea_SM _17_TrainExitedFromRBCArea_SM_fired_strong_partial;
  /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:<1> */
  static kcg_bool tr_1_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
  static kcg_bool noname;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_sel;
  /* TrainExitedFromRBCArea_SM: */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_prv;

  outC->_L100 = kcg_true;
  noname = outC->_L100;
  outC->_L92 = sp_terminated_RCM_Session_Types_Pkg;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L82, sessionStatus);
  outC->_L90 = outC->_L82.phase;
  outC->_L91 = outC->_L90 != outC->_L92;
  outC->_L83 = outC->_L82.valid;
  outC->_L85 = outC->_L82.nid_radio;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L72,
    p42_SessionManagement);
  outC->_L75 = outC->_L72.nid_radio;
  outC->_L89 = outC->_L75 == outC->_L85;
  outC->_L86 = outC->_L82.nid_rbc;
  outC->_L71 = outC->_L72.nid_RBC;
  outC->_L88 = outC->_L71 == outC->_L86;
  outC->_L84 = outC->_L82.nid_c;
  outC->_L70 = outC->_L72.nid_c;
  outC->_L87 = outC->_L70 == outC->_L84;
  outC->_L93 = outC->_L87 & outC->_L88 & outC->_L89 & outC->_L83 & outC->_L91;
  outC->_L94 = !outC->_L93;
  outC->_L79 = Q_RBC_Establish_communication_session;
  outC->_L80 = outC->_L72.q_rbc;
  outC->_L81 = outC->_L80 == outC->_L79;
  outC->_L95 = outC->_L81 & outC->_L94;
  outC->_L76 = Q_RBC_Terminate_communication_session;
  outC->_L78 = outC->_L80 == outC->_L76;
  outC->_L97 = outC->_L78 | outC->_L95;
  outC->_L74 = mode2;
  /* _L77=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */
  validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L72,
    outC->_L74,
    &outC->Context_validate_q_sleepsession_v2_2);
  outC->_L77 = outC->Context_validate_q_sleepsession_v2_2.execute;
  outC->_L73 = outC->_L72.valid;
  outC->_L96 = outC->_L73 & outC->_L77;
  outC->_L98 = outC->_L96 & outC->_L97;
  outC->orderToTerminateTheSessionIsReceived = outC->_L98;
  outC->_L99 = outC->orderToTerminateTheSessionIsReceived;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L56,
    _1_eventsAndPhases);
  outC->_L57 = outC->_L56.trainExitedFromAnRBCArea;
  outC->trainExitedFromAnRBCArea_l = outC->_L57;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L49,
    _1_eventsAndPhases);
  outC->_L55 = outC->_L49.level_1_isLeft;
  outC->_L54 = outC->_L49.endOfMissionIsExecuted;
  outC->_L53 = outC->_L49.isInCommunicationSessionWithAnRIU;
  outC->_L52 = outC->_L49.driverClosesTheDeskduringStartOfMission;
  outC->_L51 = outC->_L49.trainIsRejectedByRBC_duringStartOfMission;
  outC->_L50 = outC->_L49.errorConditionRequiringTerminationDetected;
  outC->_L41 = outC->_L53 & outC->_L54;
  outC->_L40 = outC->_L55 & outC->_L53;
  outC->_L42 = outC->_L40 | outC->_L41;
  outC->TrainExitedFromRBCArea_SM_state_sel =
    outC->TrainExitedFromRBCArea_SM_state_nxt;
  /* TrainExitedFromRBCArea_SM: */
  switch (outC->TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      tr_1_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
        outC->orderToTerminateTheSessionIsReceived | reset4;
      if (tr_1_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM) {
        _15_TrainExitedFromRBCArea_SM_state_act_partial =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        _15_TrainExitedFromRBCArea_SM_state_act_partial =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      outC->TrainExitedFromRBCArea_SM_state_act =
        _15_TrainExitedFromRBCArea_SM_state_act_partial;
      if (tr_1_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM) {
        _17_TrainExitedFromRBCArea_SM_fired_strong_partial =
          SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else {
        _17_TrainExitedFromRBCArea_SM_fired_strong_partial =
          SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      }
      outC->TrainExitedFromRBCArea_SM_fired_strong =
        _17_TrainExitedFromRBCArea_SM_fired_strong_partial;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      tr_2_guard_Idle_TrainExitedFromRBCArea_SM = outC->trainExitedFromAnRBCArea_l;
      tr_1_guard_Idle_TrainExitedFromRBCArea_SM = reset4;
      if (tr_1_guard_Idle_TrainExitedFromRBCArea_SM) {
        TrainExitedFromRBCArea_SM_state_act_partial =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else if (tr_2_guard_Idle_TrainExitedFromRBCArea_SM) {
        TrainExitedFromRBCArea_SM_state_act_partial =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act_partial =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      outC->TrainExitedFromRBCArea_SM_state_act =
        TrainExitedFromRBCArea_SM_state_act_partial;
      if (tr_1_guard_Idle_TrainExitedFromRBCArea_SM) {
        TrainExitedFromRBCArea_SM_fired_strong_partial =
          SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM;
      }
      else if (tr_2_guard_Idle_TrainExitedFromRBCArea_SM) {
        TrainExitedFromRBCArea_SM_fired_strong_partial =
          SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_fired_strong_partial =
          SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      }
      outC->TrainExitedFromRBCArea_SM_fired_strong =
        TrainExitedFromRBCArea_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      outC->WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM =
        outC->TrainExitedFromRBCArea_SM_fired_strong !=
        SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      outC->_L27_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
        _3_currentTime;
      outC->_L28_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
        kcg_false;
      outC->_L29_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
        maxWaitingTimeUntilTerminationOrderReceived;
      outC->_L30_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
        noOfRetriesUntilTerminationOrderIsReceived;
      break;
    default :
      /* this branch is empty */
      break;
  }
  TrainExitedFromRBCArea_SM_reset_prv = outC->TrainExitedFromRBCArea_SM_reset_act;
  /* TrainExitedFromRBCArea_SM: */
  switch (outC->TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      _16_TrainExitedFromRBCArea_SM_reset_act_partial =
        tr_1_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      outC->TrainExitedFromRBCArea_SM_reset_act =
        _16_TrainExitedFromRBCArea_SM_reset_act_partial;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      if (tr_1_guard_Idle_TrainExitedFromRBCArea_SM) {
        TrainExitedFromRBCArea_SM_reset_act_partial = kcg_true;
      }
      else {
        TrainExitedFromRBCArea_SM_reset_act_partial =
          tr_2_guard_Idle_TrainExitedFromRBCArea_SM;
      }
      outC->TrainExitedFromRBCArea_SM_reset_act =
        TrainExitedFromRBCArea_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* TrainExitedFromRBCArea_SM: */
  switch (outC->TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      if (outC->TrainExitedFromRBCArea_SM_reset_act) {
        /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L25=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
        waitAndRepeatTimer_reset_MoRC_Pck_Utils(
          &outC->Context_waitAndRepeatTimer_1);
      }
      /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L25=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        outC->_L27_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM,
        outC->_L28_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM,
        outC->_L28_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM,
        outC->_L29_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM,
        outC->_L30_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM,
        &outC->Context_waitAndRepeatTimer_1);
      outC->_L25_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
        outC->Context_waitAndRepeatTimer_1.triggerAction;
      outC->_L26_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
        outC->Context_waitAndRepeatTimer_1.elapsed;
      _5_definedNumberOfRepetitionsHasBeenReached_partial =
        outC->_L26_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      outC->definedNumberOfRepetitionsHasBeenReached =
        _5_definedNumberOfRepetitionsHasBeenReached_partial;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      definedNumberOfRepetitionsHasBeenReached_partial = kcg_false;
      outC->definedNumberOfRepetitionsHasBeenReached =
        definedNumberOfRepetitionsHasBeenReached_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L35 = outC->definedNumberOfRepetitionsHasBeenReached;
  outC->noReplyReceivedAfterLastRepetition = outC->_L35;
  /* TrainExitedFromRBCArea_SM: */
  switch (outC->TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession: */
      if (outC->WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        outC->sTerminateTheCommunicationSession = kcg_false;
      }
      else {
        tr_2_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
          outC->noReplyReceivedAfterLastRepetition;
        outC->tr_2_clock_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
          tr_2_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:<2> */
        if (outC->tr_2_clock_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM) {
          outC->sTerminateTheCommunicationSession = kcg_true;
        }
        else {
          outC->sTerminateTheCommunicationSession = kcg_false;
        }
      }
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      outC->sTerminateTheCommunicationSession = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L36 = outC->sTerminateTheCommunicationSession;
  /* TrainExitedFromRBCArea_SM: */
  switch (outC->TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      outC->sSendAPositionReport =
        outC->_L25_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      outC->sSendAPositionReport = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L34 = outC->sSendAPositionReport;
  outC->sendAPositionReport = outC->_L34;
  /* TrainExitedFromRBCArea_SM: */
  switch (outC->TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession: */
      if (outC->WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        _12_TrainExitedFromRBCArea_SM_fired_partial =
          outC->TrainExitedFromRBCArea_SM_fired_strong;
        _13_TrainExitedFromRBCArea_SM_reset_nxt_partial = kcg_false;
        _14_TrainExitedFromRBCArea_SM_state_nxt_partial =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        _6_TrainExitedFromRBCArea_SM_state_nxt_partial =
          _14_TrainExitedFromRBCArea_SM_state_nxt_partial;
        _7_TrainExitedFromRBCArea_SM_reset_nxt_partial =
          _13_TrainExitedFromRBCArea_SM_reset_nxt_partial;
        _8_TrainExitedFromRBCArea_SM_fired_partial =
          _12_TrainExitedFromRBCArea_SM_fired_partial;
      }
      else {
        if (tr_2_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM) {
          _9_TrainExitedFromRBCArea_SM_fired_partial =
            SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        }
        else {
          _9_TrainExitedFromRBCArea_SM_fired_partial =
            SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
        }
        _10_TrainExitedFromRBCArea_SM_reset_nxt_partial =
          tr_2_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        if (tr_2_guard_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM) {
          _11_TrainExitedFromRBCArea_SM_state_nxt_partial =
            SSM_st_Idle_TrainExitedFromRBCArea_SM;
        }
        else {
          _11_TrainExitedFromRBCArea_SM_state_nxt_partial =
            SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        }
        _6_TrainExitedFromRBCArea_SM_state_nxt_partial =
          _11_TrainExitedFromRBCArea_SM_state_nxt_partial;
        _7_TrainExitedFromRBCArea_SM_reset_nxt_partial =
          _10_TrainExitedFromRBCArea_SM_reset_nxt_partial;
        _8_TrainExitedFromRBCArea_SM_fired_partial =
          _9_TrainExitedFromRBCArea_SM_fired_partial;
      }
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        _6_TrainExitedFromRBCArea_SM_state_nxt_partial;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      TrainExitedFromRBCArea_SM_fired_partial =
        outC->TrainExitedFromRBCArea_SM_fired_strong;
      TrainExitedFromRBCArea_SM_reset_nxt_partial = kcg_false;
      TrainExitedFromRBCArea_SM_state_nxt_partial =
        SSM_st_Idle_TrainExitedFromRBCArea_SM;
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        TrainExitedFromRBCArea_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  TrainExitedFromRBCArea_SM_reset_sel = outC->TrainExitedFromRBCArea_SM_reset_nxt;
  /* TrainExitedFromRBCArea_SM: */
  switch (outC->TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      outC->TrainExitedFromRBCArea_SM_reset_nxt =
        _7_TrainExitedFromRBCArea_SM_reset_nxt_partial;
      outC->TrainExitedFromRBCArea_SM_fired =
        _8_TrainExitedFromRBCArea_SM_fired_partial;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      outC->TrainExitedFromRBCArea_SM_reset_nxt =
        TrainExitedFromRBCArea_SM_reset_nxt_partial;
      outC->TrainExitedFromRBCArea_SM_fired = TrainExitedFromRBCArea_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L16 = outC->_L99 | outC->_L36 | outC->_L50 | outC->_L51 | outC->_L52 |
    outC->_L42;
  outC->initiateTermination = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L92 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L91 = kcg_true;
  outC->_L90 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L89 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_lit_int32(0);
  outC->_L85 = kcg_lit_int64(0);
  outC->_L84 = kcg_lit_int32(0);
  outC->_L83 = kcg_true;
  outC->_L82.valid = kcg_true;
  outC->_L82.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L82.nid_c = kcg_lit_int32(0);
  outC->_L82.nid_rbc = kcg_lit_int32(0);
  outC->_L82.nid_radio = kcg_lit_int64(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_int32(0);
  outC->_L72.valid = kcg_true;
  outC->_L72.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L72.q_dir = Q_DIR_Reverse;
  outC->_L72.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L72.nid_c = kcg_lit_int32(0);
  outC->_L72.nid_RBC = kcg_lit_int32(0);
  outC->_L72.nid_radio = kcg_lit_int64(0);
  outC->_L72.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L72.origin.valid = kcg_true;
  outC->_L72.origin.nid_c = kcg_lit_int32(0);
  outC->_L72.origin.rbc_id = kcg_lit_int32(0);
  outC->_L72.origin.device_id = kcg_lit_int32(0);
  outC->_L73 = kcg_true;
  outC->_L74 = M_MODE_Full_Supervision;
  outC->_L75 = kcg_lit_int64(0);
  outC->_L76 = Q_RBC_Terminate_communication_session;
  outC->_L77 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L79 = Q_RBC_Terminate_communication_session;
  outC->_L80 = Q_RBC_Terminate_communication_session;
  outC->_L81 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L56.atPowerUp = kcg_true;
  outC->_L56.atPowerDown = kcg_true;
  outC->_L56.atStartOfMission = kcg_true;
  outC->_L56.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L56.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L56.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L56.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L56.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L56.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L56.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L56.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L56.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L56.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L56.endOfMissionIsExecuted = kcg_true;
  outC->_L56.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L56.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L56.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L56.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L56.trainExitedFromAnRBCArea = kcg_true;
  outC->_L56.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L56.level_1_isLeft = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49.atPowerUp = kcg_true;
  outC->_L49.atPowerDown = kcg_true;
  outC->_L49.atStartOfMission = kcg_true;
  outC->_L49.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L49.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L49.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L49.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L49.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L49.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L49.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L49.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L49.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L49.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L49.endOfMissionIsExecuted = kcg_true;
  outC->_L49.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L49.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L49.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L49.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L49.trainExitedFromAnRBCArea = kcg_true;
  outC->_L49.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L49.level_1_isLeft = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L16 = kcg_true;
  outC->trainExitedFromAnRBCArea_l = kcg_true;
  outC->definedNumberOfRepetitionsHasBeenReached = kcg_true;
  outC->noReplyReceivedAfterLastRepetition = kcg_true;
  outC->orderToTerminateTheSessionIsReceived = kcg_true;
  outC->TrainExitedFromRBCArea_SM_fired =
    SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
  outC->TrainExitedFromRBCArea_SM_fired_strong =
    SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
  outC->TrainExitedFromRBCArea_SM_state_act =
    SSM_st_Idle_TrainExitedFromRBCArea_SM;
  outC->TrainExitedFromRBCArea_SM_state_sel =
    SSM_st_Idle_TrainExitedFromRBCArea_SM;
  outC->sTerminateTheCommunicationSession = kcg_true;
  outC->sSendAPositionReport = kcg_true;
  outC->tr_2_clock_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
    kcg_true;
  outC->WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM =
    kcg_true;
  outC->_L26_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
    kcg_true;
  outC->_L25_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
    kcg_true;
  outC->_L27_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
    kcg_lit_int32(0);
  outC->_L28_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
    kcg_true;
  outC->_L29_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
    kcg_lit_int32(0);
  outC->_L30_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM =
    kcg_lit_int32(0);
  outC->sendAPositionReport = kcg_true;
  outC->initiateTermination = kcg_true;
  /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L25=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
  waitAndRepeatTimer_init_MoRC_Pck_Utils(&outC->Context_waitAndRepeatTimer_1);
  /* _L77=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */
  validate_q_sleepsession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_validate_q_sleepsession_v2_2);
  outC->TrainExitedFromRBCArea_SM_reset_nxt = kcg_false;
  outC->TrainExitedFromRBCArea_SM_reset_act = kcg_false;
  outC->TrainExitedFromRBCArea_SM_state_nxt =
    SSM_st_Idle_TrainExitedFromRBCArea_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* TrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:_L25=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
  waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_waitAndRepeatTimer_1);
  /* _L77=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */
  validate_q_sleepsession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_validate_q_sleepsession_v2_2);
  outC->TrainExitedFromRBCArea_SM_reset_nxt = kcg_false;
  outC->TrainExitedFromRBCArea_SM_reset_act = kcg_false;
  outC->TrainExitedFromRBCArea_SM_state_nxt =
    SSM_st_Idle_TrainExitedFromRBCArea_SM;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

