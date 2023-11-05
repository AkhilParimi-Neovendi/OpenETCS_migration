/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ */
void safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
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
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* indicator_l/ */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator_l_partial;
  /* connectionStatus_SM: */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_nxt_partial;
  /* connectionStatus_SM: */
  static kcg_bool connectionStatus_SM_reset_nxt_partial;
  /* connectionStatus_SM: */
  static SSM_TR_connectionStatus_SM connectionStatus_SM_fired_partial;
  /* indicator_l/ */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _1_indicator_l_partial;
  /* connectionStatus_SM: */
  static SSM_ST_connectionStatus_SM _2_connectionStatus_SM_state_nxt_partial;
  /* connectionStatus_SM: */
  static kcg_bool _3_connectionStatus_SM_reset_nxt_partial;
  /* connectionStatus_SM: */
  static SSM_TR_connectionStatus_SM _4_connectionStatus_SM_fired_partial;
  /* indicator_l/ */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _5_indicator_l_partial;
  /* connectionStatus_SM: */
  static SSM_ST_connectionStatus_SM _6_connectionStatus_SM_state_nxt_partial;
  /* connectionStatus_SM: */
  static kcg_bool _7_connectionStatus_SM_reset_nxt_partial;
  /* connectionStatus_SM: */
  static SSM_TR_connectionStatus_SM _8_connectionStatus_SM_fired_partial;
  /* connectionStatus_SM: */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_act_partial;
  /* connectionStatus_SM: */
  static kcg_bool connectionStatus_SM_reset_act_partial;
  /* connectionStatus_SM: */
  static SSM_TR_connectionStatus_SM connectionStatus_SM_fired_strong_partial;
  /* connectionStatus_SM:NoConnection:<2> */
  static kcg_bool tr_2_guard_NoConnection_connectionStatus_SM;
  /* connectionStatus_SM:NoConnection:<1> */
  static kcg_bool tr_1_guard_NoConnection_connectionStatus_SM;
  /* connectionStatus_SM: */
  static SSM_ST_connectionStatus_SM _9_connectionStatus_SM_state_act_partial;
  /* connectionStatus_SM: */
  static kcg_bool _10_connectionStatus_SM_reset_act_partial;
  /* connectionStatus_SM: */
  static SSM_TR_connectionStatus_SM _11_connectionStatus_SM_fired_strong_partial;
  /* connectionStatus_SM:ConnectionLost_SetupFailed:<2> */
  static kcg_bool tr_2_guard_ConnectionLost_SetupFailed_connectionStatus_SM;
  /* connectionStatus_SM:ConnectionLost_SetupFailed:<1> */
  static kcg_bool tr_1_guard_ConnectionLost_SetupFailed_connectionStatus_SM;
  /* connectionStatus_SM: */
  static SSM_ST_connectionStatus_SM _12_connectionStatus_SM_state_act_partial;
  /* connectionStatus_SM: */
  static kcg_bool _13_connectionStatus_SM_reset_act_partial;
  /* connectionStatus_SM: */
  static SSM_TR_connectionStatus_SM _14_connectionStatus_SM_fired_strong_partial;
  /* connectionStatus_SM:ConnectionUp:<2> */
  static kcg_bool tr_2_guard_ConnectionUp_connectionStatus_SM;
  /* connectionStatus_SM:ConnectionUp:<1> */
  static kcg_bool tr_1_guard_ConnectionUp_connectionStatus_SM;
  static kcg_bool noname;
  /* connectionStatus_SM: */
  static kcg_bool connectionStatus_SM_reset_sel;
  /* connectionStatus_SM: */
  static kcg_bool connectionStatus_SM_reset_prv;

  outC->_L3 = kcg_true;
  outC->connectionStatus_SM_state_sel = outC->connectionStatus_SM_state_nxt;
  outC->_L104 = mca_connect_RCM_Types_Pkg;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&outC->_L92, connectionCmd);
  outC->_L94 = outC->_L92.action;
  outC->_L106 = outC->_L94 == outC->_L104;
  outC->_L103 = mca_unexpectRadioHole_RCM_Types_Pkg;
  outC->_L105 = outC->_L94 == outC->_L103;
  outC->_L107 = outC->_L105 | outC->_L106;
  outC->_L93 = outC->_L92.valid;
  outC->_L108 = outC->_L93 & outC->_L107;
  outC->firstRequestToSetupASafeRadioConnection = outC->_L108;
  outC->_L109 = outC->firstRequestToSetupASafeRadioConnection;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L70,
    eventsAndPhases);
  outC->_L60 = outC->_L70.trainFrontInsideInAnAnnouncedRadioHole;
  outC->trainfrontIsInsideAnAnnouncedRadioHole = outC->_L60;
  outC->_L100 = outC->trainfrontIsInsideAnAnnouncedRadioHole;
  outC->_L98 = mca_disconnect_RCM_Types_Pkg;
  outC->_L97 = outC->_L94 == outC->_L98;
  outC->_L99 = outC->_L93 & outC->_L97;
  outC->_L65 = mcs_connected_RCM_Types_Pkg;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&outC->_L62, connectionStatus);
  outC->_L73 = outC->_L62.status;
  outC->_L74 = outC->_L73 == outC->_L65;
  outC->_L72 = outC->_L62.valid;
  outC->_L61 = outC->_L72 & outC->_L74;
  outC->_L101 = outC->_L61 | outC->_L99 | outC->_L100;
  outC->requestsToSetupASafeRadioConnectionAreStopped = outC->_L101;
  outC->_L91 = outC->requestsToSetupASafeRadioConnectionAreStopped;
  outC->_L23 = currentTime;
  outC->_L24 = kcg_false;
  outC->_L27 = connectionStatusTimerInterval;
  /* _L21=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L109,
    outC->_L91,
    outC->_L23,
    outC->_L24,
    outC->_L27,
    &outC->Context_countDownTimer_1);
  outC->_L21 = outC->Context_countDownTimer_1.expired;
  outC->_L22 = outC->Context_countDownTimer_1.started;
  outC->connectionStatusTimerExpired = outC->_L21;
  outC->_L7 = outC->connectionStatusTimerExpired;
  outC->condition_ID_2 = outC->_L7;
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      tr_2_guard_ConnectionUp_connectionStatus_SM = outC->condition_ID_2;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L88 = outC->trainfrontIsInsideAnAnnouncedRadioHole;
  outC->_L76 = outC->_L62.connectionLost;
  outC->_L75 = outC->_L72 & outC->_L76;
  outC->safeRadioConnection_Lost = outC->_L75;
  outC->_L87 = outC->safeRadioConnection_Lost;
  outC->_L19 = outC->_L87 & outC->_L88;
  outC->condition_ID_7 = outC->_L19;
  outC->_L77 = outC->_L62.settingUpConnectionHasFailed;
  outC->_L67 = outC->_L72 & outC->_L77;
  outC->requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason =
    outC->_L67;
  outC->_L86 =
    outC->requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason;
  outC->_L85 = outC->safeRadioConnection_Lost;
  outC->_L16 = outC->_L85 & outC->_L86;
  outC->condition_ID_6 = outC->_L16;
  outC->_L69 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L64 = outC->_L73 == outC->_L69;
  outC->_L68 = outC->_L72 & outC->_L64;
  /* _L66=(digital::RisingEdge#3)/ */
  RisingEdge_digital(outC->_L68, &outC->Context_RisingEdge_3);
  outC->_L66 = outC->Context_RisingEdge_3.RE_Output;
  outC->safeRadioConnection_Released = outC->_L66;
  outC->_L84 = outC->safeRadioConnection_Released;
  outC->condition_ID_5 = outC->_L84;
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      tr_1_guard_ConnectionUp_connectionStatus_SM = outC->condition_ID_5 |
        outC->condition_ID_6 | outC->condition_ID_7 | reset;
      if (tr_1_guard_ConnectionUp_connectionStatus_SM) {
        _12_connectionStatus_SM_state_act_partial =
          SSM_st_NoConnection_connectionStatus_SM;
      }
      else if (tr_2_guard_ConnectionUp_connectionStatus_SM) {
        _12_connectionStatus_SM_state_act_partial =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        _12_connectionStatus_SM_state_act_partial =
          SSM_st_ConnectionUp_connectionStatus_SM;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* _L63=(digital::RisingEdge#4)/ */
  RisingEdge_digital(outC->_L61, &outC->Context_RisingEdge_4);
  outC->_L63 = outC->Context_RisingEdge_4.RE_Output;
  outC->safeRadioConnection_Setup = outC->_L63;
  outC->_L83 = outC->safeRadioConnection_Setup;
  outC->condition_ID_4 = outC->_L83;
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      tr_2_guard_ConnectionLost_SetupFailed_connectionStatus_SM =
        outC->condition_ID_4;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L82 =
    outC->requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason;
  outC->_L71 = outC->_L70.startOfMissionProcedureIsGoingOn;
  outC->startOfMissionProcedureIsGoingOn = outC->_L71;
  outC->_L81 = outC->startOfMissionProcedureIsGoingOn;
  outC->_L9 = !outC->_L81;
  outC->_L10 = outC->_L9 & outC->_L82;
  outC->condition_ID_3 = outC->_L10;
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      tr_1_guard_ConnectionLost_SetupFailed_connectionStatus_SM =
        outC->condition_ID_3 | reset;
      if (tr_1_guard_ConnectionLost_SetupFailed_connectionStatus_SM) {
        _9_connectionStatus_SM_state_act_partial =
          SSM_st_NoConnection_connectionStatus_SM;
      }
      else if (tr_2_guard_ConnectionLost_SetupFailed_connectionStatus_SM) {
        _9_connectionStatus_SM_state_act_partial =
          SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else {
        _9_connectionStatus_SM_state_act_partial =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed = outC->_L67;
  outC->_L89 = outC->finalAttemptToSetupTheSafeRadioConnectionFailed;
  outC->_L90 = outC->startOfMissionProcedureIsGoingOn;
  outC->_L6 = outC->_L90 & outC->_L89;
  outC->condition_ID_1 = outC->_L6;
  /* connectionStatus_SM: */
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      outC->connectionStatus_SM_state_act = _12_connectionStatus_SM_state_act_partial;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      outC->connectionStatus_SM_state_act = _9_connectionStatus_SM_state_act_partial;
      break;
    case SSM_st_NoConnection_connectionStatus_SM :
      tr_2_guard_NoConnection_connectionStatus_SM = outC->condition_ID_1 |
        outC->condition_ID_2;
      tr_1_guard_NoConnection_connectionStatus_SM = outC->condition_ID_4;
      if (tr_1_guard_NoConnection_connectionStatus_SM) {
        connectionStatus_SM_state_act_partial = SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else if (tr_2_guard_NoConnection_connectionStatus_SM) {
        connectionStatus_SM_state_act_partial =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act_partial = SSM_st_NoConnection_connectionStatus_SM;
      }
      outC->connectionStatus_SM_state_act = connectionStatus_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* connectionStatus_SM: */
  switch (outC->connectionStatus_SM_state_act) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      outC->_L1_ConnectionUp_connectionStatus_SM =
        srci_connectionUp_RCM_Session_Types_Pkg;
      _5_indicator_l_partial = outC->_L1_ConnectionUp_connectionStatus_SM;
      outC->indicator_l = _5_indicator_l_partial;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      outC->_L1_ConnectionLost_SetupFailed_connectionStatus_SM =
        srci_connectionLost_setupFailed_RCM_Session_Types_Pkg;
      _1_indicator_l_partial =
        outC->_L1_ConnectionLost_SetupFailed_connectionStatus_SM;
      outC->indicator_l = _1_indicator_l_partial;
      break;
    case SSM_st_NoConnection_connectionStatus_SM :
      outC->_L1_NoConnection_connectionStatus_SM =
        srci_noConnection_RCM_Session_Types_Pkg;
      indicator_l_partial = outC->_L1_NoConnection_connectionStatus_SM;
      outC->indicator_l = indicator_l_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L1 = outC->indicator_l;
  outC->_L112.valid = outC->_L3;
  outC->_L112.indicator = outC->_L1;
  noname = outC->_L22;
  /* connectionStatus_SM: */
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      if (tr_1_guard_ConnectionUp_connectionStatus_SM) {
        _14_connectionStatus_SM_fired_strong_partial =
          SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM;
      }
      else if (tr_2_guard_ConnectionUp_connectionStatus_SM) {
        _14_connectionStatus_SM_fired_strong_partial =
          SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM;
      }
      else {
        _14_connectionStatus_SM_fired_strong_partial =
          SSM_TR_no_trans_connectionStatus_SM;
      }
      outC->connectionStatus_SM_fired_strong =
        _14_connectionStatus_SM_fired_strong_partial;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      if (tr_1_guard_ConnectionLost_SetupFailed_connectionStatus_SM) {
        _11_connectionStatus_SM_fired_strong_partial =
          SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else if (tr_2_guard_ConnectionLost_SetupFailed_connectionStatus_SM) {
        _11_connectionStatus_SM_fired_strong_partial =
          SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        _11_connectionStatus_SM_fired_strong_partial =
          SSM_TR_no_trans_connectionStatus_SM;
      }
      outC->connectionStatus_SM_fired_strong =
        _11_connectionStatus_SM_fired_strong_partial;
      break;
    case SSM_st_NoConnection_connectionStatus_SM :
      if (tr_1_guard_NoConnection_connectionStatus_SM) {
        connectionStatus_SM_fired_strong_partial =
          SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM;
      }
      else if (tr_2_guard_NoConnection_connectionStatus_SM) {
        connectionStatus_SM_fired_strong_partial =
          SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_fired_strong_partial = SSM_TR_no_trans_connectionStatus_SM;
      }
      outC->connectionStatus_SM_fired_strong =
        connectionStatus_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* connectionStatus_SM: */
  switch (outC->connectionStatus_SM_state_act) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      _8_connectionStatus_SM_fired_partial = outC->connectionStatus_SM_fired_strong;
      _7_connectionStatus_SM_reset_nxt_partial = kcg_false;
      _6_connectionStatus_SM_state_nxt_partial =
        SSM_st_ConnectionUp_connectionStatus_SM;
      outC->connectionStatus_SM_state_nxt = _6_connectionStatus_SM_state_nxt_partial;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      _4_connectionStatus_SM_fired_partial = outC->connectionStatus_SM_fired_strong;
      _3_connectionStatus_SM_reset_nxt_partial = kcg_false;
      _2_connectionStatus_SM_state_nxt_partial =
        SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      outC->connectionStatus_SM_state_nxt = _2_connectionStatus_SM_state_nxt_partial;
      break;
    case SSM_st_NoConnection_connectionStatus_SM :
      connectionStatus_SM_fired_partial = outC->connectionStatus_SM_fired_strong;
      connectionStatus_SM_reset_nxt_partial = kcg_false;
      connectionStatus_SM_state_nxt_partial = SSM_st_NoConnection_connectionStatus_SM;
      outC->connectionStatus_SM_state_nxt = connectionStatus_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  connectionStatus_SM_reset_sel = outC->connectionStatus_SM_reset_nxt;
  /* connectionStatus_SM: */
  switch (outC->connectionStatus_SM_state_act) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      outC->connectionStatus_SM_reset_nxt = _7_connectionStatus_SM_reset_nxt_partial;
      outC->connectionStatus_SM_fired = _8_connectionStatus_SM_fired_partial;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      outC->connectionStatus_SM_reset_nxt = _3_connectionStatus_SM_reset_nxt_partial;
      outC->connectionStatus_SM_fired = _4_connectionStatus_SM_fired_partial;
      break;
    case SSM_st_NoConnection_connectionStatus_SM :
      outC->connectionStatus_SM_reset_nxt = connectionStatus_SM_reset_nxt_partial;
      outC->connectionStatus_SM_fired = connectionStatus_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      if (tr_1_guard_ConnectionUp_connectionStatus_SM) {
        _13_connectionStatus_SM_reset_act_partial = kcg_true;
      }
      else {
        _13_connectionStatus_SM_reset_act_partial =
          tr_2_guard_ConnectionUp_connectionStatus_SM;
      }
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      if (tr_1_guard_ConnectionLost_SetupFailed_connectionStatus_SM) {
        _10_connectionStatus_SM_reset_act_partial = kcg_true;
      }
      else {
        _10_connectionStatus_SM_reset_act_partial =
          tr_2_guard_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      break;
    case SSM_st_NoConnection_connectionStatus_SM :
      if (tr_1_guard_NoConnection_connectionStatus_SM) {
        connectionStatus_SM_reset_act_partial = kcg_true;
      }
      else {
        connectionStatus_SM_reset_act_partial =
          tr_2_guard_NoConnection_connectionStatus_SM;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  connectionStatus_SM_reset_prv = outC->connectionStatus_SM_reset_act;
  /* connectionStatus_SM: */
  switch (outC->connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      outC->connectionStatus_SM_reset_act = _13_connectionStatus_SM_reset_act_partial;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      outC->connectionStatus_SM_reset_act = _10_connectionStatus_SM_reset_act_partial;
      break;
    case SSM_st_NoConnection_connectionStatus_SM :
      outC->connectionStatus_SM_reset_act = connectionStatus_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->indication,
    &outC->_L112);
}

#ifndef KCG_USER_DEFINED_INIT
void safeRadioConnectionIndication_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L112.valid = kcg_true;
  outC->_L112.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L109 = kcg_true;
  outC->_L108 = kcg_true;
  outC->_L107 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L104 = mca_nop_RCM_Types_Pkg;
  outC->_L103 = mca_nop_RCM_Types_Pkg;
  outC->_L101 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = mca_nop_RCM_Types_Pkg;
  outC->_L97 = kcg_true;
  outC->_L94 = mca_nop_RCM_Types_Pkg;
  outC->_L93 = kcg_true;
  outC->_L92.valid = kcg_true;
  outC->_L92.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L92.action = mca_nop_RCM_Types_Pkg;
  outC->_L92.nid_radio = kcg_lit_int64(0);
  outC->_L91 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L62.valid = kcg_true;
  outC->_L62.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L62.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L62.nid_radio = kcg_lit_int64(0);
  outC->_L62.settingUpConnectionHasFailed = kcg_true;
  outC->_L62.connectionLost = kcg_true;
  outC->_L62.isInRadioHole = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L65 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L66 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L69 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L70.atPowerUp = kcg_true;
  outC->_L70.atPowerDown = kcg_true;
  outC->_L70.atStartOfMission = kcg_true;
  outC->_L70.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L70.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L70.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L70.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L70.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L70.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L70.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L70.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L70.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L70.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L70.endOfMissionIsExecuted = kcg_true;
  outC->_L70.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L70.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L70.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L70.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L70.trainExitedFromAnRBCArea = kcg_true;
  outC->_L70.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L70.level_1_isLeft = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L73 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L74 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L27 = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1 = srci_noConnection_RCM_Session_Types_Pkg;
  outC->firstRequestToSetupASafeRadioConnection = kcg_true;
  outC->requestsToSetupASafeRadioConnectionAreStopped = kcg_true;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_true;
  outC->trainfrontIsInsideAnAnnouncedRadioHole = kcg_true;
  outC->startOfMissionProcedureIsGoingOn = kcg_true;
  outC->safeRadioConnection_Lost = kcg_true;
  outC->safeRadioConnection_Released = kcg_true;
  outC->safeRadioConnection_Setup = kcg_true;
  outC->requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason =
    kcg_true;
  outC->condition_ID_7 = kcg_true;
  outC->condition_ID_6 = kcg_true;
  outC->condition_ID_5 = kcg_true;
  outC->condition_ID_4 = kcg_true;
  outC->condition_ID_3 = kcg_true;
  outC->condition_ID_2 = kcg_true;
  outC->condition_ID_1 = kcg_true;
  outC->connectionStatusTimerExpired = kcg_true;
  outC->indicator_l = srci_noConnection_RCM_Session_Types_Pkg;
  outC->connectionStatus_SM_fired = SSM_TR_no_trans_connectionStatus_SM;
  outC->connectionStatus_SM_fired_strong = SSM_TR_no_trans_connectionStatus_SM;
  outC->connectionStatus_SM_state_act = SSM_st_NoConnection_connectionStatus_SM;
  outC->connectionStatus_SM_state_sel = SSM_st_NoConnection_connectionStatus_SM;
  outC->_L1_ConnectionUp_connectionStatus_SM =
    srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L1_ConnectionLost_SetupFailed_connectionStatus_SM =
    srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L1_NoConnection_connectionStatus_SM =
    srci_noConnection_RCM_Session_Types_Pkg;
  outC->indication.valid = kcg_true;
  outC->indication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  /* _L63=(digital::RisingEdge#4)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_4);
  /* _L66=(digital::RisingEdge#3)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_3);
  /* _L21=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
  outC->connectionStatus_SM_reset_act = kcg_false;
  outC->connectionStatus_SM_reset_nxt = kcg_false;
  outC->connectionStatus_SM_state_nxt = SSM_st_NoConnection_connectionStatus_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* _L63=(digital::RisingEdge#4)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_4);
  /* _L66=(digital::RisingEdge#3)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_3);
  /* _L21=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
  outC->connectionStatus_SM_reset_act = kcg_false;
  outC->connectionStatus_SM_reset_nxt = kcg_false;
  outC->connectionStatus_SM_state_nxt = SSM_st_NoConnection_connectionStatus_SM;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
  SV_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *SV,
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  kcg_save_SV_countDownTimer_MoRC_Pck_Utils(
    &SV->Context_countDownTimer_1,
    &outC->Context_countDownTimer_1);
  kcg_save_SV_RisingEdge_digital(
    &SV->Context_RisingEdge_3,
    &outC->Context_RisingEdge_3);
  kcg_save_SV_RisingEdge_digital(
    &SV->Context_RisingEdge_4,
    &outC->Context_RisingEdge_4);
  SV->Context_connectionStatus_SM_reset_nxt = outC->connectionStatus_SM_reset_nxt;
  SV->Context_connectionStatus_SM_reset_act = outC->connectionStatus_SM_reset_act;
  SV->Context_connectionStatus_SM_state_nxt = outC->connectionStatus_SM_state_nxt;
}

void kcg_load_SV_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC,
  SV_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *SV)
{
  kcg_load_SV_countDownTimer_MoRC_Pck_Utils(
    &outC->Context_countDownTimer_1,
    &SV->Context_countDownTimer_1);
  kcg_load_SV_RisingEdge_digital(
    &outC->Context_RisingEdge_3,
    &SV->Context_RisingEdge_3);
  kcg_load_SV_RisingEdge_digital(
    &outC->Context_RisingEdge_4,
    &SV->Context_RisingEdge_4);
  outC->connectionStatus_SM_reset_nxt = SV->Context_connectionStatus_SM_reset_nxt;
  outC->connectionStatus_SM_reset_act = SV->Context_connectionStatus_SM_reset_act;
  outC->connectionStatus_SM_state_nxt = SV->Context_connectionStatus_SM_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

