/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ */
void establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd_in/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* m32_SystemVersion/ */
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* reset/ */
  kcg_bool reset,
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg op_call;
  static kcg_bool _1_op_call;
  /* phase/ */
  static sessionPhase_T_RCM_Session_Types_Pkg phase_partial;
  /* SM1: */
  static _114_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 SM1_fired_partial;
  /* phase/ */
  static sessionPhase_T_RCM_Session_Types_Pkg _2_phase_partial;
  /* SM1: */
  static _114_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 _5_SM1_fired_partial;
  /* phase/ */
  static sessionPhase_T_RCM_Session_Types_Pkg _6_phase_partial;
  /* SM1: */
  static _114_SSM_ST_SM1 _7_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _8_SM1_reset_nxt_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 _9_SM1_fired_partial;
  /* phase/ */
  static sessionPhase_T_RCM_Session_Types_Pkg _10_phase_partial;
  /* SM1: */
  static _114_SSM_ST_SM1 _11_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _12_SM1_reset_nxt_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 _13_SM1_fired_partial;
  /* SM1: */
  static _114_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:idle:<1> */
  static kcg_bool tr_1_guard_idle_SM1;
  /* SM1: */
  static _114_SSM_ST_SM1 _14_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _15_SM1_reset_act_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 _16_SM1_fired_strong_partial;
  /* SM1:waitForSafeRadioConnectionSetUp:<2> */
  static kcg_bool tr_2_guard_waitForSafeRadioConnectionSetUp_SM1;
  /* SM1:waitForSafeRadioConnectionSetUp:<1> */
  static kcg_bool tr_1_guard_waitForSafeRadioConnectionSetUp_SM1;
  /* SM1: */
  static _114_SSM_ST_SM1 _17_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _18_SM1_reset_act_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 _19_SM1_fired_strong_partial;
  /* SM1:waitForSystemVersion:<3> */
  static kcg_bool tr_3_guard_waitForSystemVersion_SM1;
  /* SM1:waitForSystemVersion:<2> */
  static kcg_bool tr_2_guard_waitForSystemVersion_SM1;
  /* SM1:waitForSystemVersion:<1> */
  static kcg_bool tr_1_guard_waitForSystemVersion_SM1;
  /* SM1: */
  static _114_SSM_ST_SM1 _20_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _21_SM1_reset_act_partial;
  /* SM1: */
  static _115_SSM_TR_SM1 _22_SM1_fired_strong_partial;
  /* SM1:sessionEstablished:<1> */
  static kcg_bool tr_1_guard_sessionEstablished_SM1;
  static kcg_bool noname;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L48,
    (sessionCmd_T_RCM_Session_Types_Pkg *) &cNoSessionCmd_RCM_Session_Types_Pkg);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->InitVal_Memory_1_struct,
    &outC->_L48);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L9_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  outC->_L47 = reset;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_waitForSystemVersion_SM1 :
      tr_1_guard_waitForSystemVersion_SM1 = reset;
      outC->tr_1_clock_waitForSystemVersion_SM1 = tr_1_guard_waitForSystemVersion_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->_L53,
    m32_SystemVersion);
  outC->_L55 = outC->_L53.versionSupported;
  outC->_L54 = outC->_L53.valid;
  outC->_L56 = outC->_L54 & outC->_L55;
  outC->systemVersionSupported = outC->_L56;
  switch (outC->SM1_state_sel) {
    case SSM_st_waitForSystemVersion_SM1 :
      tr_2_guard_waitForSystemVersion_SM1 = outC->systemVersionSupported;
      if (outC->tr_1_clock_waitForSystemVersion_SM1) {
      }
      else {
        outC->tr_2_clock_waitForSystemVersion_SM1 = tr_2_guard_waitForSystemVersion_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L57 = !outC->_L55;
  outC->_L58 = outC->_L54 & outC->_L57;
  outC->systemVersionNotSupported = outC->_L58;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sTerminateComSession = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      tr_3_guard_waitForSystemVersion_SM1 = outC->systemVersionNotSupported;
      /* SM1:waitForSystemVersion:<1> */
      if (outC->tr_1_clock_waitForSystemVersion_SM1) {
        outC->sTerminateComSession = kcg_false;
      }
      else /* SM1:waitForSystemVersion:<2> */
      if (outC->tr_2_clock_waitForSystemVersion_SM1) {
        outC->sTerminateComSession = kcg_false;
      }
      else {
        outC->tr_3_clock_waitForSystemVersion_SM1 = tr_3_guard_waitForSystemVersion_SM1;
        /* SM1:waitForSystemVersion:<3> */
        if (outC->tr_3_clock_waitForSystemVersion_SM1) {
          outC->sTerminateComSession = kcg_true;
        }
        else {
          outC->sTerminateComSession = kcg_false;
        }
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->sTerminateComSession = kcg_false;
      break;
    case SSM_st_idle_SM1 :
      outC->sTerminateComSession = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L70 = outC->sTerminateComSession;
  outC->_L69 = outC->_L70 | outC->_L47;
  outC->Reset_Memory_1_struct = outC->_L69;
  outC->_L1_Memory_1_struct = outC->Reset_Memory_1_struct;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L2_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L1, sessionEstablishCmd_in);
  outC->_L22 = outC->_L1.valid;
  outC->MemCond_Memory_1_struct = outC->_L22;
  outC->_L3_Memory_1_struct = outC->MemCond_Memory_1_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L9_Memory_1_struct);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L8_Memory_1_struct);
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->M_Input_Memory_1_struct,
    &outC->_L1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L6_Memory_1_struct,
    &outC->M_Input_Memory_1_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_1_struct) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L6_Memory_1_struct);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L5_Memory_1_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_1_struct) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L2_Memory_1_struct);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L7_Memory_1_struct);
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->Out_Memory_1_struct,
    &outC->_L8_Memory_1_struct);
  outC->_L23 = outC->_L1.initiatedByOBU;
  outC->_L24 = outC->_L22 & outC->_L23;
  outC->initiatedByOBU = outC->_L24;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sRequestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->sRequestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->sRequestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_idle_SM1 :
      tr_1_guard_idle_SM1 = outC->initiatedByOBU;
      outC->tr_1_clock_idle_SM1 = tr_1_guard_idle_SM1;
      /* SM1:idle:<1> */
      if (outC->tr_1_clock_idle_SM1) {
        outC->sRequestSafeRadioConnectionSetup = kcg_true;
      }
      else {
        outC->sRequestSafeRadioConnectionSetup = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L79 = outC->sRequestSafeRadioConnectionSetup;
  outC->every = outC->_L79;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L46,
    &outC->Out_Memory_1_struct);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->sessionEstablishCmd_mem,
    &outC->_L46);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L80,
    &outC->sessionEstablishCmd_mem);
  if (outC->every) {
    /* _L83=(MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2#1)/ */
    sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg(
      &outC->_L80,
      &outC->Context_sessionCmd_2_p42_v2_1);
    _1_op_call = outC->Context_sessionCmd_2_p42_v2_1.valid;
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &op_call,
      &outC->Context_sessionCmd_2_p42_v2_1.p42_SessionManagement);
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sEstablished = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      /* SM1:waitForSystemVersion:<1> */
      if (outC->tr_1_clock_waitForSystemVersion_SM1) {
        outC->sEstablished = kcg_false;
      }
      else /* SM1:waitForSystemVersion:<2> */
      if (outC->tr_2_clock_waitForSystemVersion_SM1) {
        outC->sEstablished = kcg_true;
      }
      else {
        outC->sEstablished = kcg_false;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->sEstablished = kcg_false;
      break;
    case SSM_st_idle_SM1 :
      outC->sEstablished = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L89 = outC->sEstablished;
  outC->established = outC->_L89;
  outC->requestSafeRadioConnectionSetup = outC->_L79;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L87,
    (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
      &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  if (outC->every) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&outC->_L84, &op_call);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&outC->_L84, &outC->_L87);
  }
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_establishSessionCmd,
    &outC->_L84);
  outC->_L86 = kcg_false;
  if (outC->every) {
    outC->_L83 = _1_op_call;
  }
  else {
    outC->_L83 = outC->_L86;
  }
  noname = outC->_L83;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L75,
    &outC->sessionEstablishCmd_mem);
  outC->_L78 = outC->_L75.nid_radio;
  outC->_L77 = outC->_L75.nid_rbc;
  outC->_L76 = outC->_L75.nid_c;
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      tr_1_guard_sessionEstablished_SM1 = reset;
      if (tr_1_guard_sessionEstablished_SM1) {
        _20_SM1_state_act_partial = SSM_st_idle_SM1;
      }
      else {
        _20_SM1_state_act_partial = SSM_st_sessionEstablished_SM1;
      }
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      if (tr_1_guard_waitForSystemVersion_SM1) {
        _17_SM1_state_act_partial = SSM_st_idle_SM1;
      }
      else if (tr_2_guard_waitForSystemVersion_SM1) {
        _17_SM1_state_act_partial = SSM_st_sessionEstablished_SM1;
      }
      else if (tr_3_guard_waitForSystemVersion_SM1) {
        _17_SM1_state_act_partial = SSM_st_idle_SM1;
      }
      else {
        _17_SM1_state_act_partial = SSM_st_waitForSystemVersion_SM1;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      tr_2_guard_waitForSafeRadioConnectionSetUp_SM1 = reset;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L49,
    &outC->sessionEstablishCmd_mem);
  outC->_L50 = outC->_L49.valid;
  outC->_L51 = outC->_L49.nid_radio;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&outC->_L25, connectionStatus);
  outC->_L45 = outC->_L25.nid_radio;
  outC->_L52 = outC->_L45 == outC->_L51;
  outC->_L43 = mcs_connected_RCM_Types_Pkg;
  outC->_L41 = outC->_L25.status;
  outC->_L42 = outC->_L41 == outC->_L43;
  outC->_L40 = outC->_L25.valid;
  outC->_L44 = outC->_L40 & outC->_L42 & outC->_L52 & outC->_L50;
  outC->safeRadioConnectionSetUp = outC->_L44;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->SM1_state_act = _20_SM1_state_act_partial;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->SM1_state_act = _17_SM1_state_act_partial;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      tr_1_guard_waitForSafeRadioConnectionSetUp_SM1 = outC->safeRadioConnectionSetUp;
      if (tr_1_guard_waitForSafeRadioConnectionSetUp_SM1) {
        _14_SM1_state_act_partial = SSM_st_waitForSystemVersion_SM1;
      }
      else if (tr_2_guard_waitForSafeRadioConnectionSetUp_SM1) {
        _14_SM1_state_act_partial = SSM_st_idle_SM1;
      }
      else {
        _14_SM1_state_act_partial = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      }
      outC->SM1_state_act = _14_SM1_state_act_partial;
      break;
    case SSM_st_idle_SM1 :
      if (tr_1_guard_idle_SM1) {
        SM1_state_act_partial = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_idle_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_sessionEstablished_SM1 :
      outC->_L1_sessionEstablished_SM1 = sp_establishing_RCM_Session_Types_Pkg;
      _10_phase_partial = outC->_L1_sessionEstablished_SM1;
      outC->phase = _10_phase_partial;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->_L1_waitForSystemVersion_SM1 = sp_establishing_RCM_Session_Types_Pkg;
      _6_phase_partial = outC->_L1_waitForSystemVersion_SM1;
      outC->phase = _6_phase_partial;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->_L1_waitForSafeRadioConnectionSetUp_SM1 =
        sp_establishing_RCM_Session_Types_Pkg;
      _2_phase_partial = outC->_L1_waitForSafeRadioConnectionSetUp_SM1;
      outC->phase = _2_phase_partial;
      break;
    case SSM_st_idle_SM1 :
      outC->_L1_idle_SM1 = sp_terminated_RCM_Session_Types_Pkg;
      phase_partial = outC->_L1_idle_SM1;
      outC->phase = phase_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L74 = outC->phase;
  outC->_L73 = kcg_true;
  outC->_L71.valid = outC->_L73;
  outC->_L71.phase = outC->_L74;
  outC->_L71.nid_c = outC->_L76;
  outC->_L71.nid_rbc = outC->_L77;
  outC->_L71.nid_radio = outC->_L78;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus,
    &outC->_L71);
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sSendNoCompatibleVersionSupported = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      /* SM1:waitForSystemVersion:<1> */
      if (outC->tr_1_clock_waitForSystemVersion_SM1) {
        outC->sSendNoCompatibleVersionSupported = kcg_false;
      }
      else /* SM1:waitForSystemVersion:<2> */
      if (outC->tr_2_clock_waitForSystemVersion_SM1) {
        outC->sSendNoCompatibleVersionSupported = kcg_false;
      }
      else /* SM1:waitForSystemVersion:<3> */
      if (outC->tr_3_clock_waitForSystemVersion_SM1) {
        outC->sSendNoCompatibleVersionSupported = kcg_true;
      }
      else {
        outC->sSendNoCompatibleVersionSupported = kcg_false;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->sSendNoCompatibleVersionSupported = kcg_false;
      break;
    case SSM_st_idle_SM1 :
      outC->sSendNoCompatibleVersionSupported = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L68 = outC->sSendNoCompatibleVersionSupported;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sSendSessionEstablishedReport = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      /* SM1:waitForSystemVersion:<1> */
      if (outC->tr_1_clock_waitForSystemVersion_SM1) {
        outC->sSendSessionEstablishedReport = kcg_false;
      }
      else /* SM1:waitForSystemVersion:<2> */
      if (outC->tr_2_clock_waitForSystemVersion_SM1) {
        outC->sSendSessionEstablishedReport = kcg_true;
      }
      else {
        outC->sSendSessionEstablishedReport = kcg_false;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->sSendSessionEstablishedReport = kcg_false;
      break;
    case SSM_st_idle_SM1 :
      outC->sSendSessionEstablishedReport = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L67 = outC->sSendSessionEstablishedReport;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sendInitiationOfCommSessionToTrack = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->sendInitiationOfCommSessionToTrack = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->tr_1_clock_waitForSafeRadioConnectionSetUp_SM1 =
        tr_1_guard_waitForSafeRadioConnectionSetUp_SM1;
      /* SM1:waitForSafeRadioConnectionSetUp:<1> */
      if (outC->tr_1_clock_waitForSafeRadioConnectionSetUp_SM1) {
        outC->sendInitiationOfCommSessionToTrack = kcg_true;
      }
      else {
        outC->sendInitiationOfCommSessionToTrack = kcg_false;
      }
      break;
    case SSM_st_idle_SM1 :
      outC->sendInitiationOfCommSessionToTrack = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L66 = outC->sendInitiationOfCommSessionToTrack;
  outC->send_m154_noCompatibleVersionSupported = outC->_L68;
  outC->send_m159_sessionEstablishedReport = outC->_L67;
  outC->send_m155_initiationOfACommunicationSession = outC->_L66;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sInformTheDriverNoCompatibleVersion = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      /* SM1:waitForSystemVersion:<1> */
      if (outC->tr_1_clock_waitForSystemVersion_SM1) {
        outC->sInformTheDriverNoCompatibleVersion = kcg_false;
      }
      else /* SM1:waitForSystemVersion:<2> */
      if (outC->tr_2_clock_waitForSystemVersion_SM1) {
        outC->sInformTheDriverNoCompatibleVersion = kcg_false;
      }
      else /* SM1:waitForSystemVersion:<3> */
      if (outC->tr_3_clock_waitForSystemVersion_SM1) {
        outC->sInformTheDriverNoCompatibleVersion = kcg_true;
      }
      else {
        outC->sInformTheDriverNoCompatibleVersion = kcg_false;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->sInformTheDriverNoCompatibleVersion = kcg_false;
      break;
    case SSM_st_idle_SM1 :
      outC->sInformTheDriverNoCompatibleVersion = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L65 = outC->sInformTheDriverNoCompatibleVersion;
  outC->infomDriverNoCompatibleVersionSupported = outC->_L65;
  outC->_L64 = outC->sTerminateComSession;
  outC->terminateCommunicationSession = outC->_L64;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      if (tr_1_guard_sessionEstablished_SM1) {
        _22_SM1_fired_strong_partial =
          SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1;
      }
      else {
        _22_SM1_fired_strong_partial = _135_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _22_SM1_fired_strong_partial;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      if (tr_1_guard_waitForSystemVersion_SM1) {
        _19_SM1_fired_strong_partial =
          SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1;
      }
      else if (tr_2_guard_waitForSystemVersion_SM1) {
        _19_SM1_fired_strong_partial =
          SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1;
      }
      else if (tr_3_guard_waitForSystemVersion_SM1) {
        _19_SM1_fired_strong_partial =
          SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1;
      }
      else {
        _19_SM1_fired_strong_partial = _135_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _19_SM1_fired_strong_partial;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      if (tr_1_guard_waitForSafeRadioConnectionSetUp_SM1) {
        _16_SM1_fired_strong_partial =
          SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1;
      }
      else if (tr_2_guard_waitForSafeRadioConnectionSetUp_SM1) {
        _16_SM1_fired_strong_partial =
          SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1;
      }
      else {
        _16_SM1_fired_strong_partial = _135_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _16_SM1_fired_strong_partial;
      break;
    case SSM_st_idle_SM1 :
      if (tr_1_guard_idle_SM1) {
        SM1_fired_strong_partial =
          SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1;
      }
      else {
        SM1_fired_strong_partial = _135_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_sessionEstablished_SM1 :
      _13_SM1_fired_partial = outC->SM1_fired_strong;
      _12_SM1_reset_nxt_partial = kcg_false;
      _11_SM1_state_nxt_partial = SSM_st_sessionEstablished_SM1;
      outC->SM1_state_nxt = _11_SM1_state_nxt_partial;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      _9_SM1_fired_partial = outC->SM1_fired_strong;
      _8_SM1_reset_nxt_partial = kcg_false;
      _7_SM1_state_nxt_partial = SSM_st_waitForSystemVersion_SM1;
      outC->SM1_state_nxt = _7_SM1_state_nxt_partial;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_idle_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_idle_SM1;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_sessionEstablished_SM1 :
      outC->SM1_reset_nxt = _12_SM1_reset_nxt_partial;
      outC->SM1_fired = _13_SM1_fired_partial;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->SM1_reset_nxt = _8_SM1_reset_nxt_partial;
      outC->SM1_fired = _9_SM1_fired_partial;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_idle_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      _21_SM1_reset_act_partial = tr_1_guard_sessionEstablished_SM1;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      if (tr_1_guard_waitForSystemVersion_SM1) {
        _18_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_waitForSystemVersion_SM1) {
        _18_SM1_reset_act_partial = kcg_true;
      }
      else {
        _18_SM1_reset_act_partial = tr_3_guard_waitForSystemVersion_SM1;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      if (tr_1_guard_waitForSafeRadioConnectionSetUp_SM1) {
        _15_SM1_reset_act_partial = kcg_true;
      }
      else {
        _15_SM1_reset_act_partial = tr_2_guard_waitForSafeRadioConnectionSetUp_SM1;
      }
      break;
    case SSM_st_idle_SM1 :
      SM1_reset_act_partial = tr_1_guard_idle_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->SM1_reset_act = _21_SM1_reset_act_partial;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->SM1_reset_act = _18_SM1_reset_act_partial;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->SM1_reset_act = _15_SM1_reset_act_partial;
      break;
    case SSM_st_idle_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L89 = kcg_true;
  outC->_L87.valid = kcg_true;
  outC->_L87.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L87.q_dir = Q_DIR_Reverse;
  outC->_L87.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L87.nid_c = kcg_lit_int32(0);
  outC->_L87.nid_RBC = kcg_lit_int32(0);
  outC->_L87.nid_radio = kcg_lit_int32(0);
  outC->_L87.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L87.origin.valid = kcg_true;
  outC->_L87.origin.nid_c = kcg_lit_int32(0);
  outC->_L87.origin.rbc_id = kcg_lit_int32(0);
  outC->_L87.origin.device_id = kcg_lit_int32(0);
  outC->_L86 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L84.valid = kcg_true;
  outC->_L84.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L84.q_dir = Q_DIR_Reverse;
  outC->_L84.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L84.nid_c = kcg_lit_int32(0);
  outC->_L84.nid_RBC = kcg_lit_int32(0);
  outC->_L84.nid_radio = kcg_lit_int32(0);
  outC->_L84.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L84.origin.valid = kcg_true;
  outC->_L84.origin.nid_c = kcg_lit_int32(0);
  outC->_L84.origin.rbc_id = kcg_lit_int32(0);
  outC->_L84.origin.device_id = kcg_lit_int32(0);
  outC->_L80.valid = kcg_true;
  outC->_L80.initiatedByOBU = kcg_true;
  outC->_L80.initiatedByRBC = kcg_true;
  outC->_L80.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L80.nid_c = kcg_lit_int32(0);
  outC->_L80.nid_rbc = kcg_lit_int32(0);
  outC->_L80.nid_radio = kcg_lit_int32(0);
  outC->_L80.origin.valid = kcg_true;
  outC->_L80.origin.nid_c = kcg_lit_int32(0);
  outC->_L80.origin.rbc_id = kcg_lit_int32(0);
  outC->_L80.origin.device_id = kcg_lit_int32(0);
  outC->_L80.m38.valid = kcg_true;
  outC->_L80.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L80.m38.origin.valid = kcg_true;
  outC->_L80.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L80.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L80.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L80.p42.valid = kcg_true;
  outC->_L80.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L80.p42.q_dir = Q_DIR_Reverse;
  outC->_L80.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L80.p42.nid_c = kcg_lit_int32(0);
  outC->_L80.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L80.p42.nid_radio = kcg_lit_int32(0);
  outC->_L80.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L80.p42.origin.valid = kcg_true;
  outC->_L80.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L80.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L80.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_lit_int32(0);
  outC->_L77 = kcg_lit_int32(0);
  outC->_L76 = kcg_lit_int32(0);
  outC->_L75.valid = kcg_true;
  outC->_L75.initiatedByOBU = kcg_true;
  outC->_L75.initiatedByRBC = kcg_true;
  outC->_L75.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L75.nid_c = kcg_lit_int32(0);
  outC->_L75.nid_rbc = kcg_lit_int32(0);
  outC->_L75.nid_radio = kcg_lit_int32(0);
  outC->_L75.origin.valid = kcg_true;
  outC->_L75.origin.nid_c = kcg_lit_int32(0);
  outC->_L75.origin.rbc_id = kcg_lit_int32(0);
  outC->_L75.origin.device_id = kcg_lit_int32(0);
  outC->_L75.m38.valid = kcg_true;
  outC->_L75.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L75.m38.origin.valid = kcg_true;
  outC->_L75.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L75.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L75.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L75.p42.valid = kcg_true;
  outC->_L75.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L75.p42.q_dir = Q_DIR_Reverse;
  outC->_L75.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L75.p42.nid_c = kcg_lit_int32(0);
  outC->_L75.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L75.p42.nid_radio = kcg_lit_int32(0);
  outC->_L75.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L75.p42.origin.valid = kcg_true;
  outC->_L75.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L75.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L75.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L74 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L73 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L71.nid_c = kcg_lit_int32(0);
  outC->_L71.nid_rbc = kcg_lit_int32(0);
  outC->_L71.nid_radio = kcg_lit_int32(0);
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L53.valid = kcg_true;
  outC->_L53.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L53.versionSupported = kcg_true;
  outC->_L53.origin.valid = kcg_true;
  outC->_L53.origin.nid_c = kcg_lit_int32(0);
  outC->_L53.origin.rbc_id = kcg_lit_int32(0);
  outC->_L53.origin.device_id = kcg_lit_int32(0);
  outC->_L53.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_lit_int32(0);
  outC->_L50 = kcg_true;
  outC->_L49.valid = kcg_true;
  outC->_L49.initiatedByOBU = kcg_true;
  outC->_L49.initiatedByRBC = kcg_true;
  outC->_L49.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L49.nid_c = kcg_lit_int32(0);
  outC->_L49.nid_rbc = kcg_lit_int32(0);
  outC->_L49.nid_radio = kcg_lit_int32(0);
  outC->_L49.origin.valid = kcg_true;
  outC->_L49.origin.nid_c = kcg_lit_int32(0);
  outC->_L49.origin.rbc_id = kcg_lit_int32(0);
  outC->_L49.origin.device_id = kcg_lit_int32(0);
  outC->_L49.m38.valid = kcg_true;
  outC->_L49.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L49.m38.origin.valid = kcg_true;
  outC->_L49.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L49.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L49.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L49.p42.valid = kcg_true;
  outC->_L49.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L49.p42.q_dir = Q_DIR_Reverse;
  outC->_L49.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L49.p42.nid_c = kcg_lit_int32(0);
  outC->_L49.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L49.p42.nid_radio = kcg_lit_int32(0);
  outC->_L49.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L49.p42.origin.valid = kcg_true;
  outC->_L49.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L49.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L49.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L48.valid = kcg_true;
  outC->_L48.initiatedByOBU = kcg_true;
  outC->_L48.initiatedByRBC = kcg_true;
  outC->_L48.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L48.nid_c = kcg_lit_int32(0);
  outC->_L48.nid_rbc = kcg_lit_int32(0);
  outC->_L48.nid_radio = kcg_lit_int32(0);
  outC->_L48.origin.valid = kcg_true;
  outC->_L48.origin.nid_c = kcg_lit_int32(0);
  outC->_L48.origin.rbc_id = kcg_lit_int32(0);
  outC->_L48.origin.device_id = kcg_lit_int32(0);
  outC->_L48.m38.valid = kcg_true;
  outC->_L48.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L48.m38.origin.valid = kcg_true;
  outC->_L48.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L48.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L48.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L48.p42.valid = kcg_true;
  outC->_L48.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L48.p42.q_dir = Q_DIR_Reverse;
  outC->_L48.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L48.p42.nid_c = kcg_lit_int32(0);
  outC->_L48.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L48.p42.nid_radio = kcg_lit_int32(0);
  outC->_L48.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L48.p42.origin.valid = kcg_true;
  outC->_L48.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L48.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L48.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L47 = kcg_true;
  outC->_L46.valid = kcg_true;
  outC->_L46.initiatedByOBU = kcg_true;
  outC->_L46.initiatedByRBC = kcg_true;
  outC->_L46.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L46.nid_c = kcg_lit_int32(0);
  outC->_L46.nid_rbc = kcg_lit_int32(0);
  outC->_L46.nid_radio = kcg_lit_int32(0);
  outC->_L46.origin.valid = kcg_true;
  outC->_L46.origin.nid_c = kcg_lit_int32(0);
  outC->_L46.origin.rbc_id = kcg_lit_int32(0);
  outC->_L46.origin.device_id = kcg_lit_int32(0);
  outC->_L46.m38.valid = kcg_true;
  outC->_L46.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L46.m38.origin.valid = kcg_true;
  outC->_L46.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L46.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L46.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L46.p42.valid = kcg_true;
  outC->_L46.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L46.p42.q_dir = Q_DIR_Reverse;
  outC->_L46.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L46.p42.nid_c = kcg_lit_int32(0);
  outC->_L46.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L46.p42.nid_radio = kcg_lit_int32(0);
  outC->_L46.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L46.p42.origin.valid = kcg_true;
  outC->_L46.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L46.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L46.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 = kcg_true;
  outC->_L43 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L42 = kcg_true;
  outC->_L41 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L40 = kcg_true;
  outC->_L25.valid = kcg_true;
  outC->_L25.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L25.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L25.nid_radio = kcg_lit_int32(0);
  outC->_L25.settingUpConnectionHasFailed = kcg_true;
  outC->_L25.connectionLost = kcg_true;
  outC->_L25.isInRadioHole = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.initiatedByOBU = kcg_true;
  outC->_L1.initiatedByRBC = kcg_true;
  outC->_L1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_rbc = kcg_lit_int32(0);
  outC->_L1.nid_radio = kcg_lit_int32(0);
  outC->_L1.origin.valid = kcg_true;
  outC->_L1.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.origin.device_id = kcg_lit_int32(0);
  outC->_L1.m38.valid = kcg_true;
  outC->_L1.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1.m38.origin.valid = kcg_true;
  outC->_L1.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L1.p42.valid = kcg_true;
  outC->_L1.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1.p42.q_dir = Q_DIR_Reverse;
  outC->_L1.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.p42.nid_c = kcg_lit_int32(0);
  outC->_L1.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L1.p42.nid_radio = kcg_lit_int32(0);
  outC->_L1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1.p42.origin.valid = kcg_true;
  outC->_L1.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.p42.origin.device_id = kcg_lit_int32(0);
  outC->phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->systemVersionNotSupported = kcg_true;
  outC->systemVersionSupported = kcg_true;
  outC->sessionEstablishCmd_mem.valid = kcg_true;
  outC->sessionEstablishCmd_mem.initiatedByOBU = kcg_true;
  outC->sessionEstablishCmd_mem.initiatedByRBC = kcg_true;
  outC->sessionEstablishCmd_mem.q_rbc = Q_RBC_Terminate_communication_session;
  outC->sessionEstablishCmd_mem.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.nid_rbc = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.nid_radio = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.origin.valid = kcg_true;
  outC->sessionEstablishCmd_mem.origin.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.origin.rbc_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.origin.device_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.m38.valid = kcg_true;
  outC->sessionEstablishCmd_mem.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->sessionEstablishCmd_mem.m38.origin.valid = kcg_true;
  outC->sessionEstablishCmd_mem.m38.origin.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.m38.origin.device_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.p42.valid = kcg_true;
  outC->sessionEstablishCmd_mem.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->sessionEstablishCmd_mem.p42.q_dir = Q_DIR_Reverse;
  outC->sessionEstablishCmd_mem.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->sessionEstablishCmd_mem.p42.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.p42.nid_RBC = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.p42.nid_radio = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->sessionEstablishCmd_mem.p42.origin.valid = kcg_true;
  outC->sessionEstablishCmd_mem.p42.origin.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd_mem.p42.origin.device_id = kcg_lit_int32(0);
  outC->safeRadioConnectionSetUp = kcg_true;
  outC->initiatedByOBU = kcg_true;
  outC->SM1_fired = _135_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _135_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_idle_SM1;
  outC->SM1_state_sel = SSM_st_idle_SM1;
  outC->sRequestSafeRadioConnectionSetup = kcg_true;
  outC->sendInitiationOfCommSessionToTrack = kcg_true;
  outC->sSendSessionEstablishedReport = kcg_true;
  outC->sSendNoCompatibleVersionSupported = kcg_true;
  outC->sInformTheDriverNoCompatibleVersion = kcg_true;
  outC->sTerminateComSession = kcg_true;
  outC->sEstablished = kcg_true;
  outC->every = kcg_true;
  outC->tr_2_clock_waitForSystemVersion_SM1 = kcg_true;
  outC->tr_3_clock_waitForSystemVersion_SM1 = kcg_true;
  outC->tr_1_clock_waitForSystemVersion_SM1 = kcg_true;
  outC->tr_1_clock_waitForSafeRadioConnectionSetUp_SM1 = kcg_true;
  outC->tr_1_clock_idle_SM1 = kcg_true;
  outC->_L1_sessionEstablished_SM1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_waitForSystemVersion_SM1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_waitForSafeRadioConnectionSetUp_SM1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_idle_SM1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_Memory_1_struct.valid = kcg_true;
  outC->_L7_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->_L7_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->_L7_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L7_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.origin.valid = kcg_true;
  outC->_L7_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.m38.valid = kcg_true;
  outC->_L7_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L7_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->_L7_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.p42.valid = kcg_true;
  outC->_L7_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L7_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L7_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L7_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->_L7_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.valid = kcg_true;
  outC->_L6_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->_L6_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->_L6_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L6_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.origin.valid = kcg_true;
  outC->_L6_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.m38.valid = kcg_true;
  outC->_L6_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L6_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->_L6_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.p42.valid = kcg_true;
  outC->_L6_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L6_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L6_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L6_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->_L6_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.valid = kcg_true;
  outC->_L5_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->_L5_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->_L5_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L5_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.origin.valid = kcg_true;
  outC->_L5_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.m38.valid = kcg_true;
  outC->_L5_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L5_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->_L5_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.p42.valid = kcg_true;
  outC->_L5_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L5_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L5_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L5_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->_L5_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L3_Memory_1_struct = kcg_true;
  outC->_L2_Memory_1_struct.valid = kcg_true;
  outC->_L2_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->_L2_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->_L2_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L2_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.origin.valid = kcg_true;
  outC->_L2_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.m38.valid = kcg_true;
  outC->_L2_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L2_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->_L2_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.p42.valid = kcg_true;
  outC->_L2_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L2_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L2_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L2_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->_L2_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L1_Memory_1_struct = kcg_true;
  outC->_L9_Memory_1_struct.valid = kcg_true;
  outC->_L9_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->_L9_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->_L9_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L9_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.origin.valid = kcg_true;
  outC->_L9_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.m38.valid = kcg_true;
  outC->_L9_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L9_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->_L9_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.p42.valid = kcg_true;
  outC->_L9_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L9_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L9_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L9_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->_L9_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.valid = kcg_true;
  outC->M_Input_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->M_Input_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->M_Input_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->M_Input_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.origin.valid = kcg_true;
  outC->M_Input_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.m38.valid = kcg_true;
  outC->M_Input_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->M_Input_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->M_Input_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.p42.valid = kcg_true;
  outC->M_Input_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->M_Input_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->M_Input_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->M_Input_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->M_Input_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->Reset_Memory_1_struct = kcg_true;
  outC->MemCond_Memory_1_struct = kcg_true;
  outC->InitVal_Memory_1_struct.valid = kcg_true;
  outC->InitVal_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->InitVal_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->InitVal_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->InitVal_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.origin.valid = kcg_true;
  outC->InitVal_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.m38.valid = kcg_true;
  outC->InitVal_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->InitVal_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->InitVal_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.p42.valid = kcg_true;
  outC->InitVal_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->InitVal_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->InitVal_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->InitVal_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->InitVal_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.valid = kcg_true;
  outC->Out_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->Out_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->Out_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->Out_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.origin.valid = kcg_true;
  outC->Out_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.m38.valid = kcg_true;
  outC->Out_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->Out_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->Out_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.p42.valid = kcg_true;
  outC->Out_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->Out_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->Out_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->Out_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->Out_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.valid = kcg_true;
  outC->_L8_Memory_1_struct.initiatedByOBU = kcg_true;
  outC->_L8_Memory_1_struct.initiatedByRBC = kcg_true;
  outC->_L8_Memory_1_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.nid_radio = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.origin.valid = kcg_true;
  outC->_L8_Memory_1_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.m38.valid = kcg_true;
  outC->_L8_Memory_1_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_Memory_1_struct.m38.origin.valid = kcg_true;
  outC->_L8_Memory_1_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.p42.valid = kcg_true;
  outC->_L8_Memory_1_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_Memory_1_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_1_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_Memory_1_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_Memory_1_struct.p42.origin.valid = kcg_true;
  outC->_L8_Memory_1_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = kcg_lit_int32(0);
  outC->sessionStatus.nid_rbc = kcg_lit_int32(0);
  outC->sessionStatus.nid_radio = kcg_lit_int32(0);
  outC->established = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->terminateCommunicationSession = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->send_m154_noCompatibleVersionSupported = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->send_m155_initiationOfACommunicationSession = kcg_true;
  outC->p42_establishSessionCmd.valid = kcg_true;
  outC->p42_establishSessionCmd.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_establishSessionCmd.q_dir = Q_DIR_Reverse;
  outC->p42_establishSessionCmd.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_establishSessionCmd.nid_c = kcg_lit_int32(0);
  outC->p42_establishSessionCmd.nid_RBC = kcg_lit_int32(0);
  outC->p42_establishSessionCmd.nid_radio = kcg_lit_int32(0);
  outC->p42_establishSessionCmd.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_establishSessionCmd.origin.valid = kcg_true;
  outC->p42_establishSessionCmd.origin.nid_c = kcg_lit_int32(0);
  outC->p42_establishSessionCmd.origin.rbc_id = kcg_lit_int32(0);
  outC->p42_establishSessionCmd.origin.device_id = kcg_lit_int32(0);
  /* _L83=(MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2#1)/ */
  sessionCmd_2_p42_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_sessionCmd_2_p42_v2_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_idle_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L83=(MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2#1)/ */
  sessionCmd_2_p42_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_sessionCmd_2_p42_v2_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_idle_SM1;
}

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/
  @1: (linear::Memory#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

