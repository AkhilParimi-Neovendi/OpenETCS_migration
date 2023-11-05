/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ */
void establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd_in/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* reset/ */
  kcg_bool reset1,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* phase/ */
  static sessionPhase_T_RCM_Session_Types_Pkg phase_partial;
  /* SM1: */
  static _4_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _5_SSM_TR_SM1 SM1_fired_partial;
  /* phase/ */
  static sessionPhase_T_RCM_Session_Types_Pkg _2_phase_partial;
  /* SM1: */
  static _4_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  static _5_SSM_TR_SM1 _5_SM1_fired_partial;
  /* SM1: */
  static _4_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _5_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:idle:<1> */
  static kcg_bool tr_1_guard_idle_SM1;
  /* SM1: */
  static _4_SSM_ST_SM1 _6_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _7_SM1_reset_act_partial;
  /* SM1: */
  static _5_SSM_TR_SM1 _8_SM1_fired_strong_partial;
  /* SM1:sessionEstablished:<1> */
  static kcg_bool tr_1_guard_sessionEstablished_SM1;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L93,
    (sessionCmd_T_RCM_Session_Types_Pkg *) &cNoSessionCmd_RCM_Session_Types_Pkg);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->InitVal_Memory_2_struct,
    &outC->_L93);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L9_Memory_2_struct,
    &outC->InitVal_Memory_2_struct);
  outC->_L94 = reset1;
  outC->Reset_Memory_2_struct = outC->_L94;
  outC->_L1_Memory_2_struct = outC->Reset_Memory_2_struct;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L2_Memory_2_struct,
    &outC->InitVal_Memory_2_struct);
  outC->_L43 = mcs_connected_RCM_Types_Pkg;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&outC->_L25, connectionStatus);
  outC->_L41 = outC->_L25.status;
  outC->_L42 = outC->_L41 == outC->_L43;
  outC->_L40 = outC->_L25.valid;
  outC->_L90 = outC->_L40 & outC->_L42;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L1, sessionEstablishCmd_in);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L88,
    &outC->_L1.m38);
  outC->_L89 = outC->_L88.valid;
  outC->_L23 = outC->_L1.initiatedByRBC;
  outC->_L22 = outC->_L1.valid;
  outC->_L24 = outC->_L22 & outC->_L23 & outC->_L89 & outC->_L90;
  outC->MemCond_Memory_2_struct = outC->_L24;
  outC->_L3_Memory_2_struct = outC->MemCond_Memory_2_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L5_Memory_2_struct,
      &outC->_L9_Memory_2_struct);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L5_Memory_2_struct,
      &outC->_L8_Memory_2_struct);
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->M_Input_Memory_2_struct,
    &outC->_L1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L6_Memory_2_struct,
    &outC->M_Input_Memory_2_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_2_struct) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L7_Memory_2_struct,
      &outC->_L6_Memory_2_struct);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L7_Memory_2_struct,
      &outC->_L5_Memory_2_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_2_struct) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L8_Memory_2_struct,
      &outC->_L2_Memory_2_struct);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->_L8_Memory_2_struct,
      &outC->_L7_Memory_2_struct);
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->Out_Memory_2_struct,
    &outC->_L8_Memory_2_struct);
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->initiatedByRBC = outC->_L24;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _8_SSM_st_sessionEstablished_SM1 :
      outC->sEstablished = kcg_false;
      break;
    case _9_SSM_st_idle_SM1 :
      tr_1_guard_idle_SM1 = outC->initiatedByRBC;
      outC->tr_1_clock_idle_SM1 = tr_1_guard_idle_SM1;
      /* SM1:idle:<1> */
      if (outC->tr_1_clock_idle_SM1) {
        outC->sEstablished = kcg_true;
      }
      else {
        outC->sEstablished = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L96 = outC->sEstablished;
  outC->established = outC->_L96;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _8_SSM_st_sessionEstablished_SM1 :
      outC->sSendSessionEstablishedReport = kcg_false;
      break;
    case _9_SSM_st_idle_SM1 :
      /* SM1:idle:<1> */
      if (outC->tr_1_clock_idle_SM1) {
        outC->sSendSessionEstablishedReport = kcg_true;
      }
      else {
        outC->sSendSessionEstablishedReport = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L95 = outC->sSendSessionEstablishedReport;
  outC->send_m159_sessionEstablishedReport = outC->_L95;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L91,
    &outC->Out_Memory_2_struct);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->sessionEstablishCmd_mem,
    &outC->_L91);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L75,
    &outC->sessionEstablishCmd_mem);
  outC->_L78 = outC->_L75.nid_radio;
  outC->_L77 = outC->_L75.nid_rbc;
  outC->_L76 = outC->_L75.nid_c;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _8_SSM_st_sessionEstablished_SM1 :
      tr_1_guard_sessionEstablished_SM1 = reset1;
      if (tr_1_guard_sessionEstablished_SM1) {
        _6_SM1_state_act_partial = _9_SSM_st_idle_SM1;
      }
      else {
        _6_SM1_state_act_partial = _8_SSM_st_sessionEstablished_SM1;
      }
      outC->SM1_state_act = _6_SM1_state_act_partial;
      break;
    case _9_SSM_st_idle_SM1 :
      if (tr_1_guard_idle_SM1) {
        SM1_state_act_partial = _8_SSM_st_sessionEstablished_SM1;
      }
      else {
        SM1_state_act_partial = _9_SSM_st_idle_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _8_SSM_st_sessionEstablished_SM1 :
      outC->_L1_sessionEstablished_SM1 = sp_establishing_RCM_Session_Types_Pkg;
      _2_phase_partial = outC->_L1_sessionEstablished_SM1;
      outC->phase = _2_phase_partial;
      break;
    case _9_SSM_st_idle_SM1 :
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
    case _8_SSM_st_sessionEstablished_SM1 :
      if (tr_1_guard_sessionEstablished_SM1) {
        _8_SM1_fired_strong_partial =
          _10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1;
      }
      else {
        _8_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _8_SM1_fired_strong_partial;
      break;
    case _9_SSM_st_idle_SM1 :
      if (tr_1_guard_idle_SM1) {
        SM1_fired_strong_partial = SSM_TR_idle_sessionEstablished_1_idle_SM1;
      }
      else {
        SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _8_SSM_st_sessionEstablished_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = _8_SSM_st_sessionEstablished_SM1;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case _9_SSM_st_idle_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _9_SSM_st_idle_SM1;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _8_SSM_st_sessionEstablished_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case _9_SSM_st_idle_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case _8_SSM_st_sessionEstablished_SM1 :
      _7_SM1_reset_act_partial = tr_1_guard_sessionEstablished_SM1;
      break;
    case _9_SSM_st_idle_SM1 :
      SM1_reset_act_partial = tr_1_guard_idle_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _8_SSM_st_sessionEstablished_SM1 :
      outC->SM1_reset_act = _7_SM1_reset_act_partial;
      break;
    case _9_SSM_st_idle_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L91.valid = kcg_true;
  outC->_L91.initiatedByOBU = kcg_true;
  outC->_L91.initiatedByRBC = kcg_true;
  outC->_L91.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L91.nid_c = kcg_lit_int32(0);
  outC->_L91.nid_rbc = kcg_lit_int32(0);
  outC->_L91.nid_radio = kcg_lit_int32(0);
  outC->_L91.origin.valid = kcg_true;
  outC->_L91.origin.nid_c = kcg_lit_int32(0);
  outC->_L91.origin.rbc_id = kcg_lit_int32(0);
  outC->_L91.origin.device_id = kcg_lit_int32(0);
  outC->_L91.m38.valid = kcg_true;
  outC->_L91.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L91.m38.origin.valid = kcg_true;
  outC->_L91.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L91.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L91.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L91.p42.valid = kcg_true;
  outC->_L91.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L91.p42.q_dir = Q_DIR_Reverse;
  outC->_L91.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L91.p42.nid_c = kcg_lit_int32(0);
  outC->_L91.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L91.p42.nid_radio = kcg_lit_int32(0);
  outC->_L91.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L91.p42.origin.valid = kcg_true;
  outC->_L91.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L91.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L91.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L93.valid = kcg_true;
  outC->_L93.initiatedByOBU = kcg_true;
  outC->_L93.initiatedByRBC = kcg_true;
  outC->_L93.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L93.nid_c = kcg_lit_int32(0);
  outC->_L93.nid_rbc = kcg_lit_int32(0);
  outC->_L93.nid_radio = kcg_lit_int32(0);
  outC->_L93.origin.valid = kcg_true;
  outC->_L93.origin.nid_c = kcg_lit_int32(0);
  outC->_L93.origin.rbc_id = kcg_lit_int32(0);
  outC->_L93.origin.device_id = kcg_lit_int32(0);
  outC->_L93.m38.valid = kcg_true;
  outC->_L93.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L93.m38.origin.valid = kcg_true;
  outC->_L93.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L93.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L93.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L93.p42.valid = kcg_true;
  outC->_L93.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L93.p42.q_dir = Q_DIR_Reverse;
  outC->_L93.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L93.p42.nid_c = kcg_lit_int32(0);
  outC->_L93.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L93.p42.nid_radio = kcg_lit_int32(0);
  outC->_L93.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L93.p42.origin.valid = kcg_true;
  outC->_L93.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L93.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L93.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L90 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L88.valid = kcg_true;
  outC->_L88.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L88.origin.valid = kcg_true;
  outC->_L88.origin.nid_c = kcg_lit_int32(0);
  outC->_L88.origin.rbc_id = kcg_lit_int32(0);
  outC->_L88.origin.device_id = kcg_lit_int32(0);
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
  outC->initiatedByRBC = kcg_true;
  outC->SM1_fired = _11_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _11_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _9_SSM_st_idle_SM1;
  outC->SM1_state_sel = _9_SSM_st_idle_SM1;
  outC->sSendSessionEstablishedReport = kcg_true;
  outC->sEstablished = kcg_true;
  outC->tr_1_clock_idle_SM1 = kcg_true;
  outC->_L1_sessionEstablished_SM1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_idle_SM1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_Memory_2_struct.valid = kcg_true;
  outC->_L7_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->_L7_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->_L7_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L7_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.origin.valid = kcg_true;
  outC->_L7_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.m38.valid = kcg_true;
  outC->_L7_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L7_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->_L7_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.p42.valid = kcg_true;
  outC->_L7_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L7_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L7_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L7_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->_L7_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.valid = kcg_true;
  outC->_L6_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->_L6_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->_L6_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L6_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.origin.valid = kcg_true;
  outC->_L6_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.m38.valid = kcg_true;
  outC->_L6_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L6_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->_L6_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.p42.valid = kcg_true;
  outC->_L6_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L6_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L6_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L6_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->_L6_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.valid = kcg_true;
  outC->_L5_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->_L5_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->_L5_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L5_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.origin.valid = kcg_true;
  outC->_L5_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.m38.valid = kcg_true;
  outC->_L5_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L5_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->_L5_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.p42.valid = kcg_true;
  outC->_L5_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L5_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L5_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L5_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->_L5_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L3_Memory_2_struct = kcg_true;
  outC->_L2_Memory_2_struct.valid = kcg_true;
  outC->_L2_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->_L2_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->_L2_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L2_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.origin.valid = kcg_true;
  outC->_L2_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.m38.valid = kcg_true;
  outC->_L2_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L2_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->_L2_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.p42.valid = kcg_true;
  outC->_L2_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L2_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L2_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L2_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->_L2_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L1_Memory_2_struct = kcg_true;
  outC->_L9_Memory_2_struct.valid = kcg_true;
  outC->_L9_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->_L9_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->_L9_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L9_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.origin.valid = kcg_true;
  outC->_L9_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.m38.valid = kcg_true;
  outC->_L9_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L9_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->_L9_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.p42.valid = kcg_true;
  outC->_L9_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L9_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L9_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L9_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->_L9_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.valid = kcg_true;
  outC->M_Input_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->M_Input_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->M_Input_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->M_Input_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.origin.valid = kcg_true;
  outC->M_Input_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.m38.valid = kcg_true;
  outC->M_Input_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->M_Input_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->M_Input_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.p42.valid = kcg_true;
  outC->M_Input_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->M_Input_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->M_Input_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->M_Input_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->M_Input_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->Reset_Memory_2_struct = kcg_true;
  outC->MemCond_Memory_2_struct = kcg_true;
  outC->InitVal_Memory_2_struct.valid = kcg_true;
  outC->InitVal_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->InitVal_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->InitVal_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->InitVal_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.origin.valid = kcg_true;
  outC->InitVal_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.m38.valid = kcg_true;
  outC->InitVal_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->InitVal_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->InitVal_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.p42.valid = kcg_true;
  outC->InitVal_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->InitVal_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->InitVal_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->InitVal_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->InitVal_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.valid = kcg_true;
  outC->Out_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->Out_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->Out_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->Out_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.origin.valid = kcg_true;
  outC->Out_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.m38.valid = kcg_true;
  outC->Out_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->Out_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->Out_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.p42.valid = kcg_true;
  outC->Out_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->Out_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->Out_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->Out_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->Out_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.valid = kcg_true;
  outC->_L8_Memory_2_struct.initiatedByOBU = kcg_true;
  outC->_L8_Memory_2_struct.initiatedByRBC = kcg_true;
  outC->_L8_Memory_2_struct.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.nid_radio = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.origin.valid = kcg_true;
  outC->_L8_Memory_2_struct.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.origin.device_id = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.m38.valid = kcg_true;
  outC->_L8_Memory_2_struct.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_Memory_2_struct.m38.origin.valid = kcg_true;
  outC->_L8_Memory_2_struct.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.p42.valid = kcg_true;
  outC->_L8_Memory_2_struct.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_Memory_2_struct.p42.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_2_struct.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_Memory_2_struct.p42.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.p42.nid_radio = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_Memory_2_struct.p42.origin.valid = kcg_true;
  outC->_L8_Memory_2_struct.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.p42.origin.device_id = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = kcg_lit_int32(0);
  outC->sessionStatus.nid_rbc = kcg_lit_int32(0);
  outC->sessionStatus.nid_radio = kcg_lit_int32(0);
  outC->established = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = _9_SSM_st_idle_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = _9_SSM_st_idle_SM1;
}

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/
  @1: (linear::Memory#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

