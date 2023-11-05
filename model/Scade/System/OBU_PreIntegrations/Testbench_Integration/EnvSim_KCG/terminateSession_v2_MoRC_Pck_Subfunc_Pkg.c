/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ */
void terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* initiateTermination/ */
  kcg_bool initiateTermination,
  /* m39_AckOfTerminationOfACommunicationSession/ */
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* currentTime/ */
  time_Type_MoRC_Pck currentTime,
  /* prevSessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  /* reset/ */
  kcg_bool reset,
  /* noOfRetriesOfSendingTerminationMessage/ */
  kcg_int32 noOfRetriesOfSendingTerminationMessage,
  /* maxWaitingTimeForAckMessageReceived/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  static kcg_bool tmp;
  static kcg_bool tmp1;
  /* terminated/ */
  static kcg_bool terminated_partial;
  /* definedNumberOfRepetitionsHasBeenReached/ */
  static kcg_bool definedNumberOfRepetitionsHasBeenReached_partial;
  /* SM1: */
  static _108_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _109_SSM_TR_SM1 SM1_fired_partial;
  /* terminated/ */
  static kcg_bool _2_terminated_partial;
  /* definedNumberOfRepetitionsHasBeenReached/ */
  static kcg_bool _3_definedNumberOfRepetitionsHasBeenReached_partial;
  /* SM1: */
  static _108_SSM_ST_SM1 _4_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _5_SM1_reset_nxt_partial;
  /* SM1: */
  static _109_SSM_TR_SM1 _6_SM1_fired_partial;
  /* SM1:waitForAckTerminationOfCommunicationSessionReceived:<2> */
  static kcg_bool tr_2_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  /* SM1: */
  static _109_SSM_TR_SM1 _7_SM1_fired_partial;
  /* SM1: */
  static kcg_bool _8_SM1_reset_nxt_partial;
  /* SM1: */
  static _108_SSM_ST_SM1 _9_SM1_state_nxt_partial;
  /* SM1: */
  static _109_SSM_TR_SM1 _10_SM1_fired_partial;
  /* SM1: */
  static kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  static _108_SSM_ST_SM1 _12_SM1_state_nxt_partial;
  /* terminated/ */
  static kcg_bool _13_terminated_partial;
  /* definedNumberOfRepetitionsHasBeenReached/ */
  static kcg_bool _14_definedNumberOfRepetitionsHasBeenReached_partial;
  /* SM1: */
  static _108_SSM_ST_SM1 _15_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _16_SM1_reset_nxt_partial;
  /* SM1: */
  static _109_SSM_TR_SM1 _17_SM1_fired_partial;
  /* SM1: */
  static _108_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _109_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:idle:<1> */
  static kcg_bool tr_1_guard_idle_SM1;
  /* SM1: */
  static _108_SSM_ST_SM1 _18_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _19_SM1_reset_act_partial;
  /* SM1: */
  static _109_SSM_TR_SM1 _20_SM1_fired_strong_partial;
  /* SM1:waitForAckTerminationOfCommunicationSessionReceived:<1> */
  static kcg_bool tr_1_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1;
  /* SM1: */
  static _108_SSM_ST_SM1 _21_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _22_SM1_reset_act_partial;
  /* SM1: */
  static _109_SSM_TR_SM1 _23_SM1_fired_strong_partial;
  /* SM1:terminated:<1> */
  static kcg_bool tr_1_guard_terminated_SM1;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L90, prevSessionStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->Init_MemoryBasic_1_struct,
    &outC->_L90);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L7_MemoryBasic_1_struct,
    &outC->Init_MemoryBasic_1_struct);
  /* @1/_L6= */
  if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L7_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L4_MemoryBasic_1_struct);
  }
  outC->_L88 = outC->_L90.valid;
  outC->Write_MemoryBasic_1_struct = outC->_L88;
  outC->_L5_MemoryBasic_1_struct = outC->Write_MemoryBasic_1_struct;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->BM_Input_MemoryBasic_1_struct,
    &outC->_L90);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L2_MemoryBasic_1_struct,
    &outC->BM_Input_MemoryBasic_1_struct);
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_struct) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L2_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L6_MemoryBasic_1_struct);
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->Memorized_MemoryBasic_1_struct,
    &outC->_L4_MemoryBasic_1_struct);
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_terminated_SM1 :
      tr_1_guard_terminated_SM1 = reset;
      if (tr_1_guard_terminated_SM1) {
        _21_SM1_state_act_partial = _142_SSM_st_idle_SM1;
      }
      else {
        _21_SM1_state_act_partial = SSM_st_terminated_SM1;
      }
      outC->SM1_state_act = _21_SM1_state_act_partial;
      if (tr_1_guard_terminated_SM1) {
        _23_SM1_fired_strong_partial = SSM_TR_terminated_idle_1_terminated_SM1;
      }
      else {
        _23_SM1_fired_strong_partial = _143_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _23_SM1_fired_strong_partial;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      tr_1_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1 = reset;
      if (tr_1_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1) {
        _18_SM1_state_act_partial = _142_SSM_st_idle_SM1;
      }
      else {
        _18_SM1_state_act_partial =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      }
      outC->SM1_state_act = _18_SM1_state_act_partial;
      if (tr_1_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1) {
        _20_SM1_fired_strong_partial =
          SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicati;
      }
      else {
        _20_SM1_fired_strong_partial = _143_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _20_SM1_fired_strong_partial;
      break;
    case _142_SSM_st_idle_SM1 :
      tr_1_guard_idle_SM1 = initiateTermination;
      if (tr_1_guard_idle_SM1) {
        SM1_state_act_partial =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      }
      else {
        SM1_state_act_partial = _142_SSM_st_idle_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_idle_SM1) {
        SM1_fired_strong_partial =
          SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1;
      }
      else {
        SM1_fired_strong_partial = _143_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      outC->waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1 =
        outC->SM1_fired_strong != _143_SSM_TR_no_trans_SM1;
      outC->_L2_waitForAckTerminationOfCommunicationSessionReceived_SM1 = currentTime;
      outC->_L4_waitForAckTerminationOfCommunicationSessionReceived_SM1 = kcg_false;
      outC->_L1_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
        maxWaitingTimeForAckMessageReceived;
      outC->_L3_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
        noOfRetriesOfSendingTerminationMessage;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_terminated_SM1 :
      _22_SM1_reset_act_partial = tr_1_guard_terminated_SM1;
      outC->SM1_reset_act = _22_SM1_reset_act_partial;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      _19_SM1_reset_act_partial =
        tr_1_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      outC->SM1_reset_act = _19_SM1_reset_act_partial;
      break;
    case _142_SSM_st_idle_SM1 :
      SM1_reset_act_partial = tr_1_guard_idle_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      if (outC->SM1_reset_act) {
        /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L5=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
        waitAndRepeatTimer_reset_MoRC_Pck_Utils(
          &outC->Context_waitAndRepeatTimer_1);
      }
      /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L5=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        outC->_L2_waitForAckTerminationOfCommunicationSessionReceived_SM1,
        outC->_L4_waitForAckTerminationOfCommunicationSessionReceived_SM1,
        outC->_L4_waitForAckTerminationOfCommunicationSessionReceived_SM1,
        outC->_L1_waitForAckTerminationOfCommunicationSessionReceived_SM1,
        outC->_L3_waitForAckTerminationOfCommunicationSessionReceived_SM1,
        &outC->Context_waitAndRepeatTimer_1);
      outC->_L5_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
        outC->Context_waitAndRepeatTimer_1.triggerAction;
      outC->_L6_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
        outC->Context_waitAndRepeatTimer_1.elapsed;
      _3_definedNumberOfRepetitionsHasBeenReached_partial =
        outC->_L6_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L97,
    m39_AckOfTerminationOfACommunicationSession);
  outC->_L98 = outC->_L97.valid;
  outC->ackTerminationOfACommunicationSessionReceived = outC->_L98;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_terminated_SM1 :
      outC->sNotReady = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      /* SM1:waitForAckTerminationOfCommunicationSessionReceived: */
      if (outC->waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1) {
        outC->sNotReady = kcg_false;
      }
      else {
        tr_2_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
          outC->ackTerminationOfACommunicationSessionReceived |
          _3_definedNumberOfRepetitionsHasBeenReached_partial;
        outC->tr_2_clock_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
          tr_2_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1;
        /* SM1:waitForAckTerminationOfCommunicationSessionReceived:<2> */
        if (outC->tr_2_clock_waitForAckTerminationOfCommunicationSessionReceived_SM1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
      }
      break;
    case _142_SSM_st_idle_SM1 :
      outC->sNotReady = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L101 = outC->sNotReady;
  outC->notReady = outC->_L101;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_terminated_SM1 :
      outC->sRequestReleaseOfSafeRadioConnection = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      /* SM1:waitForAckTerminationOfCommunicationSessionReceived: */
      if (outC->waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1) {
        outC->sRequestReleaseOfSafeRadioConnection = kcg_false;
      }
      else /* SM1:waitForAckTerminationOfCommunicationSessionReceived:<2> */
      if (outC->tr_2_clock_waitForAckTerminationOfCommunicationSessionReceived_SM1) {
        outC->sRequestReleaseOfSafeRadioConnection = kcg_true;
      }
      else {
        outC->sRequestReleaseOfSafeRadioConnection = kcg_false;
      }
      break;
    case _142_SSM_st_idle_SM1 :
      outC->sRequestReleaseOfSafeRadioConnection = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L100 = outC->sRequestReleaseOfSafeRadioConnection;
  outC->requestReleaseOfSafeRadioConnection = outC->_L100;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_terminated_SM1 :
      tmp = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      tmp = kcg_false;
      break;
    case _142_SSM_st_idle_SM1 :
      outC->tr_1_clock_idle_SM1 = tr_1_guard_idle_SM1;
      /* SM1:idle:<1> */
      if (outC->tr_1_clock_idle_SM1) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_terminated_SM1 :
      tmp1 = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      tmp1 = outC->_L5_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      break;
    case _142_SSM_st_idle_SM1 :
      tmp1 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->sSendTerminationOfCommunicationMessage = tmp | tmp1;
  outC->_L99 = outC->sSendTerminationOfCommunicationMessage;
  outC->send_m156_TerminationOfCommunicationSession = outC->_L99;
  outC->_L96 = sp_terminating_RCM_Session_Types_Pkg;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L92,
    &outC->Memorized_MemoryBasic_1_struct);
  outC->_L95 = outC->_L92.nid_c;
  outC->_L94 = kcg_true;
  outC->_L93 = outC->_L92.nid_rbc;
  outC->_L89 = outC->_L92.nid_radio;
  outC->_L91.valid = outC->_L94;
  outC->_L91.phase = outC->_L96;
  outC->_L91.nid_c = outC->_L95;
  outC->_L91.nid_rbc = outC->_L93;
  outC->_L91.nid_radio = outC->_L89;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus,
    &outC->_L91);
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_terminated_SM1 :
      _14_definedNumberOfRepetitionsHasBeenReached_partial = kcg_false;
      _17_SM1_fired_partial = outC->SM1_fired_strong;
      _16_SM1_reset_nxt_partial = kcg_false;
      _15_SM1_state_nxt_partial = SSM_st_terminated_SM1;
      outC->_L2_terminated_SM1 = kcg_true;
      _13_terminated_partial = outC->_L2_terminated_SM1;
      outC->terminated = _13_terminated_partial;
      outC->definedNumberOfRepetitionsHasBeenReached =
        _14_definedNumberOfRepetitionsHasBeenReached_partial;
      outC->SM1_state_nxt = _15_SM1_state_nxt_partial;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      _2_terminated_partial = kcg_false;
      /* SM1:waitForAckTerminationOfCommunicationSessionReceived: */
      if (outC->waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1) {
        _10_SM1_fired_partial = outC->SM1_fired_strong;
        _11_SM1_reset_nxt_partial = kcg_false;
        _12_SM1_state_nxt_partial =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
        _4_SM1_state_nxt_partial = _12_SM1_state_nxt_partial;
        _5_SM1_reset_nxt_partial = _11_SM1_reset_nxt_partial;
        _6_SM1_fired_partial = _10_SM1_fired_partial;
      }
      else {
        if (tr_2_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1) {
          _7_SM1_fired_partial =
            SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommu;
        }
        else {
          _7_SM1_fired_partial = _143_SSM_TR_no_trans_SM1;
        }
        _8_SM1_reset_nxt_partial =
          tr_2_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1;
        if (tr_2_guard_waitForAckTerminationOfCommunicationSessionReceived_SM1) {
          _9_SM1_state_nxt_partial = SSM_st_terminated_SM1;
        }
        else {
          _9_SM1_state_nxt_partial =
            SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
        }
        _4_SM1_state_nxt_partial = _9_SM1_state_nxt_partial;
        _5_SM1_reset_nxt_partial = _8_SM1_reset_nxt_partial;
        _6_SM1_fired_partial = _7_SM1_fired_partial;
      }
      outC->terminated = _2_terminated_partial;
      outC->definedNumberOfRepetitionsHasBeenReached =
        _3_definedNumberOfRepetitionsHasBeenReached_partial;
      outC->SM1_state_nxt = _4_SM1_state_nxt_partial;
      break;
    case _142_SSM_st_idle_SM1 :
      definedNumberOfRepetitionsHasBeenReached_partial = kcg_false;
      terminated_partial = kcg_false;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _142_SSM_st_idle_SM1;
      outC->terminated = terminated_partial;
      outC->definedNumberOfRepetitionsHasBeenReached =
        definedNumberOfRepetitionsHasBeenReached_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_terminated_SM1 :
      outC->SM1_reset_nxt = _16_SM1_reset_nxt_partial;
      outC->SM1_fired = _17_SM1_fired_partial;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      outC->SM1_reset_nxt = _5_SM1_reset_nxt_partial;
      outC->SM1_fired = _6_SM1_fired_partial;
      break;
    case _142_SSM_st_idle_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void terminateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L101 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97.valid = kcg_true;
  outC->_L97.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L97.origin.valid = kcg_true;
  outC->_L97.origin.nid_c = kcg_lit_int32(0);
  outC->_L97.origin.rbc_id = kcg_lit_int32(0);
  outC->_L97.origin.device_id = kcg_lit_int32(0);
  outC->_L97.lrbg = kcg_lit_int32(0);
  outC->_L88 = kcg_true;
  outC->_L89 = kcg_lit_int32(0);
  outC->_L90.valid = kcg_true;
  outC->_L90.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L90.nid_c = kcg_lit_int32(0);
  outC->_L90.nid_rbc = kcg_lit_int32(0);
  outC->_L90.nid_radio = kcg_lit_int32(0);
  outC->_L91.valid = kcg_true;
  outC->_L91.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L91.nid_c = kcg_lit_int32(0);
  outC->_L91.nid_rbc = kcg_lit_int32(0);
  outC->_L91.nid_radio = kcg_lit_int32(0);
  outC->_L92.valid = kcg_true;
  outC->_L92.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L92.nid_c = kcg_lit_int32(0);
  outC->_L92.nid_rbc = kcg_lit_int32(0);
  outC->_L92.nid_radio = kcg_lit_int32(0);
  outC->_L93 = kcg_lit_int32(0);
  outC->_L94 = kcg_true;
  outC->_L95 = kcg_lit_int32(0);
  outC->_L96 = sp_terminated_RCM_Session_Types_Pkg;
  outC->definedNumberOfRepetitionsHasBeenReached = kcg_true;
  outC->ackTerminationOfACommunicationSessionReceived = kcg_true;
  outC->SM1_fired = _143_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _143_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _142_SSM_st_idle_SM1;
  outC->SM1_state_sel = _142_SSM_st_idle_SM1;
  outC->sSendTerminationOfCommunicationMessage = kcg_true;
  outC->sRequestReleaseOfSafeRadioConnection = kcg_true;
  outC->sNotReady = kcg_true;
  outC->tr_1_clock_idle_SM1 = kcg_true;
  outC->_L2_terminated_SM1 = kcg_true;
  outC->tr_2_clock_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
    kcg_true;
  outC->waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1 =
    kcg_true;
  outC->_L5_waitForAckTerminationOfCommunicationSessionReceived_SM1 = kcg_true;
  outC->_L6_waitForAckTerminationOfCommunicationSessionReceived_SM1 = kcg_true;
  outC->_L4_waitForAckTerminationOfCommunicationSessionReceived_SM1 = kcg_true;
  outC->_L3_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
    kcg_lit_int32(0);
  outC->_L2_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
    kcg_lit_int32(0);
  outC->_L1_waitForAckTerminationOfCommunicationSessionReceived_SM1 =
    kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L5_MemoryBasic_1_struct = kcg_true;
  outC->_L6_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L6_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.nid_radio = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.valid = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->BM_Input_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.nid_radio = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->Init_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.nid_radio = kcg_lit_int32(0);
  outC->Write_MemoryBasic_1_struct = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.valid = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->Memorized_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L4_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.nid_radio = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->notReady = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = kcg_lit_int32(0);
  outC->sessionStatus.nid_rbc = kcg_lit_int32(0);
  outC->sessionStatus.nid_radio = kcg_lit_int32(0);
  outC->terminated = kcg_true;
  outC->requestReleaseOfSafeRadioConnection = kcg_true;
  outC->send_m156_TerminationOfCommunicationSession = kcg_true;
  /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L5=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
  waitAndRepeatTimer_init_MoRC_Pck_Utils(&outC->Context_waitAndRepeatTimer_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _142_SSM_st_idle_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* SM1:waitForAckTerminationOfCommunicationSessionReceived:_L5=(MoRC_Pck::Utils::waitAndRepeatTimer#1)/ */
  waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_waitAndRepeatTimer_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _142_SSM_st_idle_SM1;
}

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::terminateSession_v2/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** terminateSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

