/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ */
void requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* mode/ */
  M_MODE mode,
  /* eventsPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsPhases,
  /* p42_sessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_sessionManagement,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* registrationStatus/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* connect/ */
  kcg_bool connect,
  /* disconnect/ */
  kcg_bool disconnect,
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* reset/ */
  kcg_bool reset,
  /* maxTimeToMaintainCommSession/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxTimeToMaintainCommSession,
  /* noOfRetriesToEstablishASafeRadioConnection/ */
  kcg_int64 noOfRetriesToEstablishASafeRadioConnection,
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg connectionCmd_partial;
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg _1_connectionCmd_partial;
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg _2_connectionCmd_partial;
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg _3_connectionCmd_partial;
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg _4_connectionCmd_partial;
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg _5_connectionCmd_partial;
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg _6_connectionCmd_partial;
  /* connectionCmd/ */
  static mobileConnectionCmd_T_RCM_Types_Pkg _7_connectionCmd_partial;
  /* repeat_SM: */
  static SSM_ST_repeat_SM repeat_SM_state_nxt_partial;
  /* repeat_SM: */
  static kcg_bool repeat_SM_reset_nxt_partial;
  /* repeat_SM: */
  static SSM_TR_repeat_SM repeat_SM_fired_partial;
  /* repeat_SM: */
  static SSM_ST_repeat_SM _8_repeat_SM_state_nxt_partial;
  /* repeat_SM: */
  static kcg_bool _9_repeat_SM_reset_nxt_partial;
  /* repeat_SM: */
  static SSM_TR_repeat_SM _10_repeat_SM_fired_partial;
  /* repeat_SM: */
  static SSM_ST_repeat_SM _11_repeat_SM_state_nxt_partial;
  /* repeat_SM: */
  static kcg_bool _12_repeat_SM_reset_nxt_partial;
  /* repeat_SM: */
  static SSM_TR_repeat_SM _13_repeat_SM_fired_partial;
  /* repeat_SM: */
  static SSM_ST_repeat_SM repeat_SM_state_act_partial;
  /* repeat_SM: */
  static kcg_bool repeat_SM_reset_act_partial;
  /* repeat_SM: */
  static SSM_TR_repeat_SM repeat_SM_fired_strong_partial;
  /* repeat_SM:rep_inactive:<2> */
  static kcg_bool tr_2_guard_rep_inactive_repeat_SM;
  /* repeat_SM:rep_inactive:<1> */
  static kcg_bool tr_1_guard_rep_inactive_repeat_SM;
  /* repeat_SM: */
  static SSM_ST_repeat_SM _14_repeat_SM_state_act_partial;
  /* repeat_SM: */
  static kcg_bool _15_repeat_SM_reset_act_partial;
  /* repeat_SM: */
  static SSM_TR_repeat_SM _16_repeat_SM_fired_strong_partial;
  /* repeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<2> */
  static kcg_bool tr_2_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
  /* repeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<1> */
  static kcg_bool tr_1_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
  /* repeat_SM: */
  static SSM_ST_repeat_SM _17_repeat_SM_state_act_partial;
  /* repeat_SM: */
  static kcg_bool _18_repeat_SM_reset_act_partial;
  /* repeat_SM: */
  static SSM_TR_repeat_SM _19_repeat_SM_fired_strong_partial;
  /* repeat_SM:rep_repeatUntilStopConditionMet:<2> */
  static kcg_bool tr_2_guard_rep_repeatUntilStopConditionMet_repeat_SM;
  /* repeat_SM:rep_repeatUntilStopConditionMet:<1> */
  static kcg_bool tr_1_guard_rep_repeatUntilStopConditionMet_repeat_SM;
  static kcg_int64 noname;
  static kcg_bool _20_noname;
  /* repeat_SM: */
  static kcg_bool repeat_SM_reset_sel;
  /* repeat_SM: */
  static kcg_bool repeat_SM_reset_prv;

  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L405,
    (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
      &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->InitVal_Memory_1_struct,
    &outC->_L405);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L9_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  outC->_L404 = reset;
  outC->Reset_Memory_1_struct = outC->_L404;
  outC->_L1_Memory_1_struct = outC->Reset_Memory_1_struct;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L2_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L345,
    p42_sessionManagement);
  outC->_L347 = outC->_L345.valid;
  outC->MemCond_Memory_1_struct = outC->_L347;
  outC->_L3_Memory_1_struct = outC->MemCond_Memory_1_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L9_Memory_1_struct);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L8_Memory_1_struct);
  }
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->M_Input_Memory_1_struct,
    &outC->_L345);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L6_Memory_1_struct,
    &outC->M_Input_Memory_1_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_1_struct) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L6_Memory_1_struct);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L5_Memory_1_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_1_struct) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L2_Memory_1_struct);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L7_Memory_1_struct);
  }
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->Out_Memory_1_struct,
    &outC->_L8_Memory_1_struct);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L403,
    &outC->Out_Memory_1_struct);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_sessionManagement_mem,
    &outC->_L403);
  outC->_L400 = sp_establishing_RCM_Session_Types_Pkg;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L323, sessionStatus);
  outC->_L322 = outC->_L323.phase;
  outC->_L401 = outC->_L322 == outC->_L400;
  outC->_L320 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L372 = outC->_L322 == outC->_L320;
  outC->_L402 = outC->_L372 | outC->_L401;
  outC->IfBlock1_clock = disconnect;
  outC->repeat_SM_state_sel = outC->repeat_SM_state_nxt;
  outC->_L207 = mrs_registered_RCM_Types_Pkg;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L203,
    registrationStatus);
  outC->_L205 = outC->_L203.status;
  outC->_L206 = outC->_L205 == outC->_L207;
  outC->_L204 = outC->_L203.valid;
  outC->_L208 = outC->_L204 & outC->_L206;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&outC->_L198, eventsPhases);
  outC->_L199 = outC->_L198.isPartOfAnOngoingStartOfMissionProcedure;
  outC->_L197 = connect;
  outC->_L200 = outC->_L197 & outC->_L199 & outC->_L208;
  outC->repeatUntilSuccessfulOrADefinedNumberOfTimes = outC->_L200;
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_inactive_repeat_SM :
      tr_1_guard_rep_inactive_repeat_SM =
        outC->repeatUntilSuccessfulOrADefinedNumberOfTimes;
      outC->tr_1_clock_rep_inactive_repeat_SM = tr_1_guard_rep_inactive_repeat_SM;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L202 = !outC->_L199;
  outC->_L201 = outC->_L197 & outC->_L202 & outC->_L208;
  outC->repeatUntilStopConditionMet = outC->_L201;
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_inactive_repeat_SM :
      tr_2_guard_rep_inactive_repeat_SM = outC->repeatUntilStopConditionMet;
      if (outC->tr_1_clock_rep_inactive_repeat_SM) {
      }
      else {
        outC->tr_2_clock_rep_inactive_repeat_SM = tr_2_guard_rep_inactive_repeat_SM;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L213 = mcs_connected_RCM_Types_Pkg;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L209,
    connectionStatus);
  outC->_L211 = outC->_L209.status;
  outC->_L212 = outC->_L211 == outC->_L213;
  outC->_L210 = outC->_L209.valid;
  outC->_L214 = outC->_L210 & outC->_L212;
  outC->successfullyConnected = outC->_L214;
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      tr_1_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM =
        outC->successfullyConnected | reset;
      outC->tr_1_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM =
        tr_1_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L354 = outC->_L209.settingUpConnectionHasFailed;
  outC->_L355 = outC->_L354 & outC->_L210;
  /* _L361=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L355, &outC->Context_RisingEdge_1);
  outC->_L361 = outC->Context_RisingEdge_1.RE_Output;
  outC->triggerRepeat = outC->_L361;
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      tr_2_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM =
        outC->triggerRepeat;
      if (outC->tr_1_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM) {
      }
      else {
        outC->tr_2_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM =
          tr_2_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L389,
    connectionStatus);
  outC->_L391 = outC->_L389.connectionLost;
  outC->_L397 = outC->_L389.valid;
  outC->_L394 = outC->_L397 & outC->_L391;
  outC->connectionLost = outC->_L394;
  outC->_L384 = outC->connectionLost;
  /* _L380=(digital::RisingEdge#2)/ */
  RisingEdge_digital(outC->_L384, &outC->Context_RisingEdge_2);
  outC->_L380 = outC->Context_RisingEdge_2.RE_Output;
  outC->_L390 = !outC->_L391;
  outC->_L392 = outC->_L397 & outC->_L390;
  outC->connectedAgain = outC->_L392;
  outC->_L388 = outC->connectedAgain;
  outC->_L387 = currentTime;
  outC->_L385 = kcg_false;
  outC->_L393 = maxTimeToMaintainCommSession;
  /* _L395=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L380,
    outC->_L388,
    outC->_L387,
    outC->_L385,
    outC->_L393,
    &outC->Context_countDownTimer_1);
  outC->_L395 = outC->Context_countDownTimer_1.expired;
  outC->_L396 = outC->Context_countDownTimer_1.started;
  outC->considerSessionAsTerminated = outC->_L395;
  outC->_L399 = outC->considerSessionAsTerminated;
  outC->_L342 = outC->_L322 != outC->_L320;
  outC->_L344 = outC->_L323.valid;
  outC->_L329 = outC->_L345.nid_RBC;
  outC->_L346 = outC->_L323.nid_rbc;
  outC->_L330 = outC->_L346 == outC->_L329;
  outC->_L331 = outC->_L323.nid_c;
  outC->_L326 = outC->_L345.nid_c;
  outC->_L333 = outC->_L326 == outC->_L331;
  outC->_L335 = outC->_L333 & outC->_L330;
  outC->_L339 = !outC->_L335;
  outC->_L336 = outC->_L339 & outC->_L344 & outC->_L342;
  outC->_L368 = msrc_OBU_Common_Types_Pkg;
  outC->_L338 = outC->_L345.msgSrc;
  outC->_L369 = outC->_L338 == outC->_L368;
  outC->_L332 = msrc_RadioInfillUnit_Common_Types_Pkg;
  outC->_L328 = outC->_L338 == outC->_L332;
  outC->_L327 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L319 = outC->_L338 == outC->_L327;
  outC->_L324 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L341 = outC->_L338 == outC->_L324;
  outC->_L318 = outC->_L341 | outC->_L319 | outC->_L328 | outC->_L369;
  outC->_L316 = mode;
  /* _L334=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */
  validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L345,
    outC->_L316,
    &outC->Context_validate_q_sleepsession_v2_2);
  outC->_L334 = outC->Context_validate_q_sleepsession_v2_2.execute;
  outC->_L337 = Q_RBC_Establish_communication_session;
  outC->_L340 = outC->_L345.q_rbc;
  outC->_L321 = outC->_L340 == outC->_L337;
  outC->_L325 = outC->_L347 & outC->_L321 & outC->_L334 & outC->_L318 &
    outC->_L336;
  outC->orderToEstablishSessionWithDifferentRBCReceivedFromTrack = outC->_L325;
  outC->_L350 = outC->orderToEstablishSessionWithDifferentRBCReceivedFromTrack;
  outC->_L348 = Q_RBC_Terminate_communication_session;
  outC->_L343 = outC->_L340 == outC->_L348;
  outC->_L317 = outC->_L347 & outC->_L343 & outC->_L334 & outC->_L318;
  outC->orderToTerminateSessionReceivedFromTrack = outC->_L317;
  outC->_L349 = outC->orderToTerminateSessionReceivedFromTrack;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&outC->_L216, eventsPhases);
  outC->_L353 = outC->_L216.trainFrontPassesStartOfAnnouncedRadioHole;
  outC->_L352 = outC->_L216.trainFrontPassesA_RBC_RBC_border;
  outC->_L351 = outC->_L216.trainFrontPassesALevelTransitionBorder;
  outC->_L217 = outC->_L216.endOfMissionIsExecuted;
  outC->_L215 = outC->_L214 | outC->_L217 | outC->_L351 | outC->_L352 |
    outC->_L353 | outC->_L349 | outC->_L350 | outC->_L399;
  outC->repeatStopCondition = outC->_L215;
  /* repeat_SM: */
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      tr_1_guard_rep_repeatUntilStopConditionMet_repeat_SM =
        outC->repeatStopCondition | reset;
      outC->tr_1_clock_rep_repeatUntilStopConditionMet_repeat_SM =
        tr_1_guard_rep_repeatUntilStopConditionMet_repeat_SM;
      tr_2_guard_rep_repeatUntilStopConditionMet_repeat_SM = outC->triggerRepeat;
      /* repeat_SM:rep_repeatUntilStopConditionMet:<1> */
      if (outC->tr_1_clock_rep_repeatUntilStopConditionMet_repeat_SM) {
        outC->sRepeat = kcg_false;
      }
      else {
        outC->tr_2_clock_rep_repeatUntilStopConditionMet_repeat_SM =
          tr_2_guard_rep_repeatUntilStopConditionMet_repeat_SM;
        /* repeat_SM:rep_repeatUntilStopConditionMet:<2> */
        if (outC->tr_2_clock_rep_repeatUntilStopConditionMet_repeat_SM) {
          outC->sRepeat = kcg_true;
        }
        else {
          outC->sRepeat = kcg_false;
        }
      }
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      /* repeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<1> */
      if (outC->tr_1_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM) {
        outC->sRepeat = kcg_false;
      }
      else /* repeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<2> */
      if (outC->tr_2_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM) {
        outC->sRepeat = kcg_true;
      }
      else {
        outC->sRepeat = kcg_false;
      }
      break;
    case SSM_st_rep_inactive_repeat_SM :
      /* repeat_SM:rep_inactive:<1> */
      if (outC->tr_1_clock_rep_inactive_repeat_SM) {
        outC->sRepeat = kcg_true;
      }
      else /* repeat_SM:rep_inactive:<2> */
      if (outC->tr_2_clock_rep_inactive_repeat_SM) {
        outC->sRepeat = kcg_true;
      }
      else {
        outC->sRepeat = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->sRepeat;
    if (outC->else_clock_IfBlock1) {
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->_L12_then_else_IfBlock1,
        &outC->p42_sessionManagement_mem);
      outC->_L11_then_else_IfBlock1 = kcg_true;
    }
    else {
      outC->else_clock_else_IfBlock1 =
        (*eventsPhases).trainFrontPassesStartOfAnnouncedRadioHole;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L22_then_else_else_IfBlock1 = kcg_true;
        kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
          &outC->_L15_then_else_else_IfBlock1,
          connectionStatus);
        outC->_L21_then_else_else_IfBlock1 =
          outC->_L15_then_else_else_IfBlock1.nid_radio;
        outC->_L16_then_else_else_IfBlock1 =
          outC->_L15_then_else_else_IfBlock1.mobileDeviceNo;
        outC->_L14_then_else_else_IfBlock1 = mca_expectRadioHole_RCM_Types_Pkg;
        outC->_L19_then_else_else_IfBlock1.valid = outC->_L22_then_else_else_IfBlock1;
        outC->_L19_then_else_else_IfBlock1.mobileDeviceNo =
          outC->_L16_then_else_else_IfBlock1;
        outC->_L19_then_else_else_IfBlock1.action = outC->_L14_then_else_else_IfBlock1;
        outC->_L19_then_else_else_IfBlock1.nid_radio =
          outC->_L21_then_else_else_IfBlock1;
        kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
          &_2_connectionCmd_partial,
          &outC->_L19_then_else_else_IfBlock1);
        kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
          &_6_connectionCmd_partial,
          &_2_connectionCmd_partial);
      }
      else {
        outC->else_clock_else_else_IfBlock1 =
          (*eventsPhases).trainFrontReachesEndOfAnnouncedRadioHole;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L11_then_else_else_else_IfBlock1 = kcg_true;
          kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
            &outC->_L10_then_else_else_else_IfBlock1,
            connectionStatus);
          outC->_L6_then_else_else_else_IfBlock1 =
            outC->_L10_then_else_else_else_IfBlock1.mobileDeviceNo;
          outC->_L5_then_else_else_else_IfBlock1 = mca_unexpectRadioHole_RCM_Types_Pkg;
          outC->_L7_then_else_else_else_IfBlock1 =
            outC->_L10_then_else_else_else_IfBlock1.nid_radio;
          outC->_L8_then_else_else_else_IfBlock1.valid =
            outC->_L11_then_else_else_else_IfBlock1;
          outC->_L8_then_else_else_else_IfBlock1.mobileDeviceNo =
            outC->_L6_then_else_else_else_IfBlock1;
          outC->_L8_then_else_else_else_IfBlock1.action =
            outC->_L5_then_else_else_else_IfBlock1;
          outC->_L8_then_else_else_else_IfBlock1.nid_radio =
            outC->_L7_then_else_else_else_IfBlock1;
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_5_connectionCmd_partial,
            &outC->_L8_then_else_else_else_IfBlock1);
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_3_connectionCmd_partial,
            &_5_connectionCmd_partial);
        }
        else {
          outC->_L24_else_else_else_else_IfBlock1 = kcg_false;
          kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
            &outC->_L16_else_else_else_else_IfBlock1,
            connectionStatus);
          outC->_L21_else_else_else_else_IfBlock1 =
            outC->_L16_else_else_else_else_IfBlock1.mobileDeviceNo;
          outC->_L15_else_else_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
          outC->_L22_else_else_else_else_IfBlock1 =
            outC->_L16_else_else_else_else_IfBlock1.nid_radio;
          outC->_L23_else_else_else_else_IfBlock1.valid =
            outC->_L24_else_else_else_else_IfBlock1;
          outC->_L23_else_else_else_else_IfBlock1.mobileDeviceNo =
            outC->_L21_else_else_else_else_IfBlock1;
          outC->_L23_else_else_else_else_IfBlock1.action =
            outC->_L15_else_else_else_else_IfBlock1;
          outC->_L23_else_else_else_else_IfBlock1.nid_radio =
            outC->_L22_else_else_else_else_IfBlock1;
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_4_connectionCmd_partial,
            &outC->_L23_else_else_else_else_IfBlock1);
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_3_connectionCmd_partial,
            &_4_connectionCmd_partial);
        }
        kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
          &_6_connectionCmd_partial,
          &_3_connectionCmd_partial);
      }
    }
  }
  outC->_L373 = outC->_L402 & outC->_L344;
  outC->_L371 = outC->_L373 | outC->_L336;
  outC->_L370 = outC->_L347 & outC->_L321 & outC->_L334 & outC->_L318 &
    outC->_L371;
  outC->orderToEstablishSessionReceivedFromOBU = outC->_L370;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L14_then_IfBlock1 = kcg_true;
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &outC->_L5_then_IfBlock1,
      connectionStatus);
    outC->_L4_then_IfBlock1 = outC->_L5_then_IfBlock1.mobileDeviceNo;
    outC->_L11_then_IfBlock1 = mca_disconnect_RCM_Types_Pkg;
    outC->_L7_then_IfBlock1 = outC->_L5_then_IfBlock1.nid_radio;
    outC->_L12_then_IfBlock1.valid = outC->_L14_then_IfBlock1;
    outC->_L12_then_IfBlock1.mobileDeviceNo = outC->_L4_then_IfBlock1;
    outC->_L12_then_IfBlock1.action = outC->_L11_then_IfBlock1;
    outC->_L12_then_IfBlock1.nid_radio = outC->_L7_then_IfBlock1;
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &connectionCmd_partial,
      &outC->_L12_then_IfBlock1);
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &outC->connectionCmd,
      &connectionCmd_partial);
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L10_then_else_IfBlock1 = outC->orderToEstablishSessionReceivedFromOBU;
      outC->_L9_then_else_IfBlock1 = outC->_L12_then_else_IfBlock1.nid_radio;
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &outC->_L5_then_else_IfBlock1,
        connectionStatus);
      outC->_L2_then_else_IfBlock1 = outC->_L5_then_else_IfBlock1.nid_radio;
      /* IfBlock1:else:then:_L4= */
      if (outC->_L10_then_else_IfBlock1) {
        outC->_L4_then_else_IfBlock1 = outC->_L9_then_else_IfBlock1;
      }
      else {
        outC->_L4_then_else_IfBlock1 = outC->_L2_then_else_IfBlock1;
      }
      outC->_L3_then_else_IfBlock1 = outC->_L5_then_else_IfBlock1.mobileDeviceNo;
      outC->_L1_then_else_IfBlock1 = mca_connect_RCM_Types_Pkg;
      outC->_L8_then_else_IfBlock1.valid = outC->_L11_then_else_IfBlock1;
      outC->_L8_then_else_IfBlock1.mobileDeviceNo = outC->_L3_then_else_IfBlock1;
      outC->_L8_then_else_IfBlock1.action = outC->_L1_then_else_IfBlock1;
      outC->_L8_then_else_IfBlock1.nid_radio = outC->_L4_then_else_IfBlock1;
      kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
        &_7_connectionCmd_partial,
        &outC->_L8_then_else_IfBlock1);
      kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
        &_1_connectionCmd_partial,
        &_7_connectionCmd_partial);
    }
    else {
      kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
        &_1_connectionCmd_partial,
        &_6_connectionCmd_partial);
    }
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &outC->connectionCmd,
      &_1_connectionCmd_partial);
  }
  _20_noname = outC->_L396;
  outC->_L381 = noOfRetriesToEstablishASafeRadioConnection;
  noname = outC->_L381;
  /* repeat_SM: */
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      if (tr_1_guard_rep_repeatUntilStopConditionMet_repeat_SM) {
        _17_repeat_SM_state_act_partial = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        _17_repeat_SM_state_act_partial =
          SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      outC->repeat_SM_state_act = _17_repeat_SM_state_act_partial;
      if (tr_1_guard_rep_repeatUntilStopConditionMet_repeat_SM) {
        _19_repeat_SM_fired_strong_partial =
          SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      else if (tr_2_guard_rep_repeatUntilStopConditionMet_repeat_SM) {
        _19_repeat_SM_fired_strong_partial =
          SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      else {
        _19_repeat_SM_fired_strong_partial = SSM_TR_no_trans_repeat_SM;
      }
      outC->repeat_SM_fired_strong = _19_repeat_SM_fired_strong_partial;
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      if (tr_1_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM) {
        _14_repeat_SM_state_act_partial = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        _14_repeat_SM_state_act_partial =
          SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      outC->repeat_SM_state_act = _14_repeat_SM_state_act_partial;
      if (tr_1_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM) {
        _16_repeat_SM_fired_strong_partial =
          SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      else if (tr_2_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM) {
        _16_repeat_SM_fired_strong_partial =
          SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      else {
        _16_repeat_SM_fired_strong_partial = SSM_TR_no_trans_repeat_SM;
      }
      outC->repeat_SM_fired_strong = _16_repeat_SM_fired_strong_partial;
      break;
    case SSM_st_rep_inactive_repeat_SM :
      if (tr_1_guard_rep_inactive_repeat_SM) {
        repeat_SM_state_act_partial =
          SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      else if (tr_2_guard_rep_inactive_repeat_SM) {
        repeat_SM_state_act_partial = SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      else {
        repeat_SM_state_act_partial = SSM_st_rep_inactive_repeat_SM;
      }
      outC->repeat_SM_state_act = repeat_SM_state_act_partial;
      if (tr_1_guard_rep_inactive_repeat_SM) {
        repeat_SM_fired_strong_partial =
          SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM;
      }
      else if (tr_2_guard_rep_inactive_repeat_SM) {
        repeat_SM_fired_strong_partial =
          SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM;
      }
      else {
        repeat_SM_fired_strong_partial = SSM_TR_no_trans_repeat_SM;
      }
      outC->repeat_SM_fired_strong = repeat_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* repeat_SM: */
  switch (outC->repeat_SM_state_act) {
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      _13_repeat_SM_fired_partial = outC->repeat_SM_fired_strong;
      _12_repeat_SM_reset_nxt_partial = kcg_false;
      _11_repeat_SM_state_nxt_partial =
        SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      outC->repeat_SM_state_nxt = _11_repeat_SM_state_nxt_partial;
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      _10_repeat_SM_fired_partial = outC->repeat_SM_fired_strong;
      _9_repeat_SM_reset_nxt_partial = kcg_false;
      _8_repeat_SM_state_nxt_partial =
        SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      outC->repeat_SM_state_nxt = _8_repeat_SM_state_nxt_partial;
      break;
    case SSM_st_rep_inactive_repeat_SM :
      repeat_SM_fired_partial = outC->repeat_SM_fired_strong;
      repeat_SM_reset_nxt_partial = kcg_false;
      repeat_SM_state_nxt_partial = SSM_st_rep_inactive_repeat_SM;
      outC->repeat_SM_state_nxt = repeat_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  repeat_SM_reset_sel = outC->repeat_SM_reset_nxt;
  /* repeat_SM: */
  switch (outC->repeat_SM_state_act) {
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      outC->repeat_SM_reset_nxt = _12_repeat_SM_reset_nxt_partial;
      outC->repeat_SM_fired = _13_repeat_SM_fired_partial;
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      outC->repeat_SM_reset_nxt = _9_repeat_SM_reset_nxt_partial;
      outC->repeat_SM_fired = _10_repeat_SM_fired_partial;
      break;
    case SSM_st_rep_inactive_repeat_SM :
      outC->repeat_SM_reset_nxt = repeat_SM_reset_nxt_partial;
      outC->repeat_SM_fired = repeat_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      if (tr_1_guard_rep_repeatUntilStopConditionMet_repeat_SM) {
        _18_repeat_SM_reset_act_partial = kcg_true;
      }
      else {
        _18_repeat_SM_reset_act_partial =
          tr_2_guard_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      if (tr_1_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM) {
        _15_repeat_SM_reset_act_partial = kcg_true;
      }
      else {
        _15_repeat_SM_reset_act_partial =
          tr_2_guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      break;
    case SSM_st_rep_inactive_repeat_SM :
      if (tr_1_guard_rep_inactive_repeat_SM) {
        repeat_SM_reset_act_partial = kcg_true;
      }
      else {
        repeat_SM_reset_act_partial = tr_2_guard_rep_inactive_repeat_SM;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  repeat_SM_reset_prv = outC->repeat_SM_reset_act;
  /* repeat_SM: */
  switch (outC->repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      outC->repeat_SM_reset_act = _18_repeat_SM_reset_act_partial;
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      outC->repeat_SM_reset_act = _15_repeat_SM_reset_act_partial;
      break;
    case SSM_st_rep_inactive_repeat_SM :
      outC->repeat_SM_reset_act = repeat_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void requestRadioConnectionSetupFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L405.valid = kcg_true;
  outC->_L405.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L405.q_dir = Q_DIR_Reverse;
  outC->_L405.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L405.nid_c = kcg_lit_int64(0);
  outC->_L405.nid_RBC = kcg_lit_int64(0);
  outC->_L405.nid_radio = kcg_lit_int64(0);
  outC->_L405.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L405.origin.valid = kcg_true;
  outC->_L405.origin.nid_c = kcg_lit_int64(0);
  outC->_L405.origin.rbc_id = kcg_lit_int64(0);
  outC->_L405.origin.device_id = kcg_lit_int64(0);
  outC->_L404 = kcg_true;
  outC->_L403.valid = kcg_true;
  outC->_L403.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L403.q_dir = Q_DIR_Reverse;
  outC->_L403.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L403.nid_c = kcg_lit_int64(0);
  outC->_L403.nid_RBC = kcg_lit_int64(0);
  outC->_L403.nid_radio = kcg_lit_int64(0);
  outC->_L403.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L403.origin.valid = kcg_true;
  outC->_L403.origin.nid_c = kcg_lit_int64(0);
  outC->_L403.origin.rbc_id = kcg_lit_int64(0);
  outC->_L403.origin.device_id = kcg_lit_int64(0);
  outC->_L402 = kcg_true;
  outC->_L401 = kcg_true;
  outC->_L400 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L399 = kcg_true;
  outC->_L380 = kcg_true;
  outC->_L381 = kcg_lit_int64(0);
  outC->_L384 = kcg_true;
  outC->_L385 = kcg_true;
  outC->_L387 = kcg_lit_int64(0);
  outC->_L388 = kcg_true;
  outC->_L389.valid = kcg_true;
  outC->_L389.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L389.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L389.nid_radio = kcg_lit_int64(0);
  outC->_L389.settingUpConnectionHasFailed = kcg_true;
  outC->_L389.connectionLost = kcg_true;
  outC->_L389.isInRadioHole = kcg_true;
  outC->_L390 = kcg_true;
  outC->_L391 = kcg_true;
  outC->_L392 = kcg_true;
  outC->_L393 = kcg_lit_int64(0);
  outC->_L394 = kcg_true;
  outC->_L396 = kcg_true;
  outC->_L395 = kcg_true;
  outC->_L397 = kcg_true;
  outC->_L373 = kcg_true;
  outC->_L372 = kcg_true;
  outC->_L371 = kcg_true;
  outC->_L370 = kcg_true;
  outC->_L369 = kcg_true;
  outC->_L368 = msrc_undefined_Common_Types_Pkg;
  outC->_L361 = kcg_true;
  outC->_L355 = kcg_true;
  outC->_L354 = kcg_true;
  outC->_L353 = kcg_true;
  outC->_L352 = kcg_true;
  outC->_L351 = kcg_true;
  outC->_L350 = kcg_true;
  outC->_L349 = kcg_true;
  outC->_L316 = M_MODE_Full_Supervision;
  outC->_L317 = kcg_true;
  outC->_L318 = kcg_true;
  outC->_L319 = kcg_true;
  outC->_L320 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L321 = kcg_true;
  outC->_L322 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L323.valid = kcg_true;
  outC->_L323.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L323.nid_c = kcg_lit_int64(0);
  outC->_L323.nid_rbc = kcg_lit_int64(0);
  outC->_L323.nid_radio = kcg_lit_int64(0);
  outC->_L324 = msrc_undefined_Common_Types_Pkg;
  outC->_L325 = kcg_true;
  outC->_L326 = kcg_lit_int64(0);
  outC->_L327 = msrc_undefined_Common_Types_Pkg;
  outC->_L328 = kcg_true;
  outC->_L329 = kcg_lit_int64(0);
  outC->_L330 = kcg_true;
  outC->_L331 = kcg_lit_int64(0);
  outC->_L332 = msrc_undefined_Common_Types_Pkg;
  outC->_L333 = kcg_true;
  outC->_L334 = kcg_true;
  outC->_L335 = kcg_true;
  outC->_L336 = kcg_true;
  outC->_L337 = Q_RBC_Terminate_communication_session;
  outC->_L338 = msrc_undefined_Common_Types_Pkg;
  outC->_L339 = kcg_true;
  outC->_L340 = Q_RBC_Terminate_communication_session;
  outC->_L341 = kcg_true;
  outC->_L342 = kcg_true;
  outC->_L343 = kcg_true;
  outC->_L344 = kcg_true;
  outC->_L345.valid = kcg_true;
  outC->_L345.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L345.q_dir = Q_DIR_Reverse;
  outC->_L345.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L345.nid_c = kcg_lit_int64(0);
  outC->_L345.nid_RBC = kcg_lit_int64(0);
  outC->_L345.nid_radio = kcg_lit_int64(0);
  outC->_L345.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L345.origin.valid = kcg_true;
  outC->_L345.origin.nid_c = kcg_lit_int64(0);
  outC->_L345.origin.rbc_id = kcg_lit_int64(0);
  outC->_L345.origin.device_id = kcg_lit_int64(0);
  outC->_L346 = kcg_lit_int64(0);
  outC->_L347 = kcg_true;
  outC->_L348 = Q_RBC_Terminate_communication_session;
  outC->_L217 = kcg_true;
  outC->_L216.atPowerUp = kcg_true;
  outC->_L216.atPowerDown = kcg_true;
  outC->_L216.atStartOfMission = kcg_true;
  outC->_L216.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L216.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L216.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L216.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L216.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L216.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L216.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L216.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L216.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L216.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L216.endOfMissionIsExecuted = kcg_true;
  outC->_L216.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L216.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L216.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L216.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L216.trainExitedFromAnRBCArea = kcg_true;
  outC->_L216.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L216.level_1_isLeft = kcg_true;
  outC->_L215 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L213 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L212 = kcg_true;
  outC->_L211 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L210 = kcg_true;
  outC->_L209.valid = kcg_true;
  outC->_L209.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L209.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L209.nid_radio = kcg_lit_int64(0);
  outC->_L209.settingUpConnectionHasFailed = kcg_true;
  outC->_L209.connectionLost = kcg_true;
  outC->_L209.isInRadioHole = kcg_true;
  outC->_L208 = kcg_true;
  outC->_L207 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L206 = kcg_true;
  outC->_L205 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L204 = kcg_true;
  outC->_L203.valid = kcg_true;
  outC->_L203.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L203.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L203.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L203.nid_mn = kcg_lit_int64(0);
  outC->_L202 = kcg_true;
  outC->_L201 = kcg_true;
  outC->_L200 = kcg_true;
  outC->_L199 = kcg_true;
  outC->_L198.atPowerUp = kcg_true;
  outC->_L198.atPowerDown = kcg_true;
  outC->_L198.atStartOfMission = kcg_true;
  outC->_L198.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L198.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L198.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L198.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L198.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L198.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L198.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L198.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L198.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L198.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L198.endOfMissionIsExecuted = kcg_true;
  outC->_L198.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L198.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L198.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L198.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L198.trainExitedFromAnRBCArea = kcg_true;
  outC->_L198.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L198.level_1_isLeft = kcg_true;
  outC->_L197 = kcg_true;
  outC->p42_sessionManagement_mem.valid = kcg_true;
  outC->p42_sessionManagement_mem.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionManagement_mem.q_dir = Q_DIR_Reverse;
  outC->p42_sessionManagement_mem.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_sessionManagement_mem.nid_c = kcg_lit_int64(0);
  outC->p42_sessionManagement_mem.nid_RBC = kcg_lit_int64(0);
  outC->p42_sessionManagement_mem.nid_radio = kcg_lit_int64(0);
  outC->p42_sessionManagement_mem.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_sessionManagement_mem.origin.valid = kcg_true;
  outC->p42_sessionManagement_mem.origin.nid_c = kcg_lit_int64(0);
  outC->p42_sessionManagement_mem.origin.rbc_id = kcg_lit_int64(0);
  outC->p42_sessionManagement_mem.origin.device_id = kcg_lit_int64(0);
  outC->connectionLost = kcg_true;
  outC->connectedAgain = kcg_true;
  outC->considerSessionAsTerminated = kcg_true;
  outC->orderToEstablishSessionReceivedFromOBU = kcg_true;
  outC->successfullyConnected = kcg_true;
  outC->triggerRepeat = kcg_true;
  outC->orderToEstablishSessionWithDifferentRBCReceivedFromTrack = kcg_true;
  outC->orderToTerminateSessionReceivedFromTrack = kcg_true;
  outC->repeatStopCondition = kcg_true;
  outC->repeatUntilStopConditionMet = kcg_true;
  outC->repeatUntilSuccessfulOrADefinedNumberOfTimes = kcg_true;
  outC->repeat_SM_fired = SSM_TR_no_trans_repeat_SM;
  outC->repeat_SM_fired_strong = SSM_TR_no_trans_repeat_SM;
  outC->repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
  outC->repeat_SM_state_sel = SSM_st_rep_inactive_repeat_SM;
  outC->IfBlock1_clock = kcg_true;
  outC->sRepeat = kcg_true;
  outC->tr_2_clock_rep_repeatUntilStopConditionMet_repeat_SM = kcg_true;
  outC->tr_1_clock_rep_repeatUntilStopConditionMet_repeat_SM = kcg_true;
  outC->tr_2_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM =
    kcg_true;
  outC->tr_1_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM =
    kcg_true;
  outC->tr_2_clock_rep_inactive_repeat_SM = kcg_true;
  outC->tr_1_clock_rep_inactive_repeat_SM = kcg_true;
  outC->_L12_then_else_IfBlock1.valid = kcg_true;
  outC->_L12_then_else_IfBlock1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L12_then_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L12_then_else_IfBlock1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L12_then_else_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L12_then_else_IfBlock1.nid_RBC = kcg_lit_int64(0);
  outC->_L12_then_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L12_then_else_IfBlock1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L12_then_else_IfBlock1.origin.valid = kcg_true;
  outC->_L12_then_else_IfBlock1.origin.nid_c = kcg_lit_int64(0);
  outC->_L12_then_else_IfBlock1.origin.rbc_id = kcg_lit_int64(0);
  outC->_L12_then_else_IfBlock1.origin.device_id = kcg_lit_int64(0);
  outC->_L11_then_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_IfBlock1 = kcg_true;
  outC->_L9_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_then_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->_L2_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L5_then_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L5_then_else_IfBlock1.connectionLost = kcg_true;
  outC->_L5_then_else_IfBlock1.isInRadioHole = kcg_true;
  outC->_L8_then_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L8_then_else_IfBlock1.action = mca_nop_RCM_Types_Pkg;
  outC->_L8_then_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->_L6_then_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L7_then_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L8_then_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L8_then_else_else_else_IfBlock1.action = mca_nop_RCM_Types_Pkg;
  outC->_L8_then_else_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L10_then_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L10_then_else_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L10_then_else_else_else_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L10_then_else_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L10_then_else_else_else_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L10_then_else_else_else_IfBlock1.connectionLost = kcg_true;
  outC->_L10_then_else_else_else_IfBlock1.isInRadioHole = kcg_true;
  outC->_L24_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L15_else_else_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->_L16_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L16_else_else_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L16_else_else_else_else_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L16_else_else_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L16_else_else_else_else_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L16_else_else_else_else_IfBlock1.connectionLost = kcg_true;
  outC->_L16_else_else_else_else_IfBlock1.isInRadioHole = kcg_true;
  outC->_L21_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L22_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L23_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L23_else_else_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L23_else_else_else_else_IfBlock1.action = mca_nop_RCM_Types_Pkg;
  outC->_L23_else_else_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L21_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L19_then_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.action = mca_nop_RCM_Types_Pkg;
  outC->_L19_then_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L16_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L15_then_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L15_then_else_else_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L15_then_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L15_then_else_else_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L15_then_else_else_IfBlock1.connectionLost = kcg_true;
  outC->_L15_then_else_else_IfBlock1.isInRadioHole = kcg_true;
  outC->_L14_then_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->_L22_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.action = mca_nop_RCM_Types_Pkg;
  outC->_L12_then_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->_L7_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L5_then_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L5_then_IfBlock1.connectionLost = kcg_true;
  outC->_L5_then_IfBlock1.isInRadioHole = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1 = kcg_true;
  outC->_L7_Memory_1_struct.valid = kcg_true;
  outC->_L7_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L7_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L7_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L7_Memory_1_struct.origin.valid = kcg_true;
  outC->_L7_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.valid = kcg_true;
  outC->_L6_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L6_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L6_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L6_Memory_1_struct.origin.valid = kcg_true;
  outC->_L6_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.valid = kcg_true;
  outC->_L5_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L5_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L5_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L5_Memory_1_struct.origin.valid = kcg_true;
  outC->_L5_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->_L3_Memory_1_struct = kcg_true;
  outC->_L2_Memory_1_struct.valid = kcg_true;
  outC->_L2_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L2_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L2_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L2_Memory_1_struct.origin.valid = kcg_true;
  outC->_L2_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->_L1_Memory_1_struct = kcg_true;
  outC->_L9_Memory_1_struct.valid = kcg_true;
  outC->_L9_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L9_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L9_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L9_Memory_1_struct.origin.valid = kcg_true;
  outC->_L9_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.valid = kcg_true;
  outC->M_Input_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->M_Input_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->M_Input_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->M_Input_Memory_1_struct.origin.valid = kcg_true;
  outC->M_Input_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->Reset_Memory_1_struct = kcg_true;
  outC->MemCond_Memory_1_struct = kcg_true;
  outC->InitVal_Memory_1_struct.valid = kcg_true;
  outC->InitVal_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->InitVal_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->InitVal_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->InitVal_Memory_1_struct.origin.valid = kcg_true;
  outC->InitVal_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.valid = kcg_true;
  outC->Out_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->Out_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->Out_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->Out_Memory_1_struct.origin.valid = kcg_true;
  outC->Out_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.valid = kcg_true;
  outC->_L8_Memory_1_struct.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_Memory_1_struct.nid_c = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.nid_RBC = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_Memory_1_struct.origin.valid = kcg_true;
  outC->_L8_Memory_1_struct.origin.nid_c = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.origin.rbc_id = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.origin.device_id = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->connectionCmd.valid = kcg_true;
  outC->connectionCmd.mobileDeviceNo = kcg_lit_int64(0);
  outC->connectionCmd.action = mca_nop_RCM_Types_Pkg;
  outC->connectionCmd.nid_radio = kcg_lit_int64(0);
  /* _L334=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */
  validate_q_sleepsession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_validate_q_sleepsession_v2_2);
  /* _L395=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
  /* _L380=(digital::RisingEdge#2)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_2);
  /* _L361=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  outC->repeat_SM_reset_act = kcg_false;
  outC->repeat_SM_reset_nxt = kcg_false;
  outC->repeat_SM_state_nxt = SSM_st_rep_inactive_repeat_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L334=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */
  validate_q_sleepsession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_validate_q_sleepsession_v2_2);
  /* _L395=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
  /* _L380=(digital::RisingEdge#2)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_2);
  /* _L361=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  outC->repeat_SM_reset_act = kcg_false;
  outC->repeat_SM_reset_nxt = kcg_false;
  outC->repeat_SM_state_nxt = SSM_st_rep_inactive_repeat_SM;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  SV_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *SV,
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  kcg_save_SV_RisingEdge_digital(
    &SV->Context_RisingEdge_1,
    &outC->Context_RisingEdge_1);
  kcg_save_SV_RisingEdge_digital(
    &SV->Context_RisingEdge_2,
    &outC->Context_RisingEdge_2);
  kcg_save_SV_countDownTimer_MoRC_Pck_Utils(
    &SV->Context_countDownTimer_1,
    &outC->Context_countDownTimer_1);
  SV->Context_repeat_SM_reset_nxt = outC->repeat_SM_reset_nxt;
  SV->Context_repeat_SM_reset_act = outC->repeat_SM_reset_act;
  SV->Context_repeat_SM_state_nxt = outC->repeat_SM_state_nxt;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &SV->Context__L8_Memory_1,
    &outC->_L8_Memory_1_struct);
  SV->Context_init = outC->init;
}

void kcg_load_SV_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC,
  SV_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *SV)
{
  kcg_load_SV_RisingEdge_digital(
    &outC->Context_RisingEdge_1,
    &SV->Context_RisingEdge_1);
  kcg_load_SV_RisingEdge_digital(
    &outC->Context_RisingEdge_2,
    &SV->Context_RisingEdge_2);
  kcg_load_SV_countDownTimer_MoRC_Pck_Utils(
    &outC->Context_countDownTimer_1,
    &SV->Context_countDownTimer_1);
  outC->repeat_SM_reset_nxt = SV->Context_repeat_SM_reset_nxt;
  outC->repeat_SM_reset_act = SV->Context_repeat_SM_reset_act;
  outC->repeat_SM_state_nxt = SV->Context_repeat_SM_state_nxt;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L8_Memory_1_struct,
    &SV->Context__L8_Memory_1);
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/
  @1: (linear::Memory#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

