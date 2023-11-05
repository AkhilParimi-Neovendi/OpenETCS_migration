/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::establishSession_v2/ */
void establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionEstablishCmd_in/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* m32_SystemVersion/ */
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* reset/ */
  kcg_bool reset,
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* p42_establishSessionCmd/ */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_establishSessionCmd_partial;
  /* send_m155_initiationOfACommunicationSession/ */
  static kcg_bool send_m155_initiationOfACommunicationSession_partial;
  /* send_m159_sessionEstablishedReport/ */
  static kcg_bool send_m159_sessionEstablishedReport_partial;
  /* send_m154_noCompatibleVersionSupported/ */
  static kcg_bool send_m154_noCompatibleVersionSupported_partial;
  /* requestSafeRadioConnectionSetup/ */
  static kcg_bool requestSafeRadioConnectionSetup_partial;
  /* terminateCommunicationSession/ */
  static kcg_bool terminateCommunicationSession_partial;
  /* infomDriverNoCompatibleVersionSupported/ */
  static kcg_bool infomDriverNoCompatibleVersionSupported_partial;
  /* established/ */
  static kcg_bool established_partial;
  /* sessionStatus/ */
  static sessionStatus_T_RCM_Session_Types_Pkg sessionStatus_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 SM1_fired_partial;
  /* p42_establishSessionCmd/ */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _1_p42_establishSessionCmd_partial;
  /* send_m155_initiationOfACommunicationSession/ */
  static kcg_bool _2_send_m155_initiationOfACommunicationSession_partial;
  /* send_m159_sessionEstablishedReport/ */
  static kcg_bool _3_send_m159_sessionEstablishedReport_partial;
  /* send_m154_noCompatibleVersionSupported/ */
  static kcg_bool _4_send_m154_noCompatibleVersionSupported_partial;
  /* requestSafeRadioConnectionSetup/ */
  static kcg_bool _5_requestSafeRadioConnectionSetup_partial;
  /* terminateCommunicationSession/ */
  static kcg_bool _6_terminateCommunicationSession_partial;
  /* infomDriverNoCompatibleVersionSupported/ */
  static kcg_bool _7_infomDriverNoCompatibleVersionSupported_partial;
  /* established/ */
  static kcg_bool _8_established_partial;
  /* sessionStatus/ */
  static sessionStatus_T_RCM_Session_Types_Pkg _9_sessionStatus_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _12_SM1_fired_partial;
  /* p42_establishSessionCmd/ */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _13_p42_establishSessionCmd_partial;
  /* send_m155_initiationOfACommunicationSession/ */
  static kcg_bool _14_send_m155_initiationOfACommunicationSession_partial;
  /* send_m159_sessionEstablishedReport/ */
  static kcg_bool _15_send_m159_sessionEstablishedReport_partial;
  /* send_m154_noCompatibleVersionSupported/ */
  static kcg_bool _16_send_m154_noCompatibleVersionSupported_partial;
  /* requestSafeRadioConnectionSetup/ */
  static kcg_bool _17_requestSafeRadioConnectionSetup_partial;
  /* terminateCommunicationSession/ */
  static kcg_bool _18_terminateCommunicationSession_partial;
  /* infomDriverNoCompatibleVersionSupported/ */
  static kcg_bool _19_infomDriverNoCompatibleVersionSupported_partial;
  /* established/ */
  static kcg_bool _20_established_partial;
  /* sessionStatus/ */
  static sessionStatus_T_RCM_Session_Types_Pkg _21_sessionStatus_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 _22_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _23_SM1_reset_nxt_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _24_SM1_fired_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:idle:<2> */
  static kcg_bool tr_2_guard_idle_SM1;
  /* SM1:idle:<1> */
  static kcg_bool tr_1_guard_idle_SM1;
  /* SM1: */
  static _126_SSM_ST_SM1 _25_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _26_SM1_reset_act_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _27_SM1_fired_strong_partial;
  /* SM1:establishingByOBU:<1> */
  static kcg_bool tr_1_guard_establishingByOBU_SM1;
  /* SM1: */
  static _126_SSM_ST_SM1 _28_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _29_SM1_reset_act_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _30_SM1_fired_strong_partial;
  /* SM1:establishingByRBC:<1> */
  static kcg_bool tr_1_guard_establishingByRBC_SM1;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L1, sessionEstablishCmd_in);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L100,
    &outC->_L1.m38);
  outC->_L111 = outC->_L100.valid;
  outC->_L109 = mcs_connected_RCM_Types_Pkg;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L105,
    connectionStatus);
  outC->_L104 = outC->_L105.status;
  outC->_L101 = outC->_L104 == outC->_L109;
  outC->_L106 = outC->_L105.valid;
  outC->_L107 = outC->_L106 & outC->_L101;
  outC->_L103 = outC->_L1.initiatedByRBC;
  outC->_L22 = outC->_L1.valid;
  outC->_L102 = outC->_L22 & outC->_L103 & outC->_L111 & outC->_L107;
  outC->initiatedByRBC = outC->_L102;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_establishingByRBC_SM1 :
      tr_1_guard_establishingByRBC_SM1 = reset;
      if (tr_1_guard_establishingByRBC_SM1) {
        _28_SM1_state_act_partial = _156_SSM_st_idle_SM1;
      }
      else {
        _28_SM1_state_act_partial = SSM_st_establishingByRBC_SM1;
      }
      break;
    case SSM_st_establishingByOBU_SM1 :
      tr_1_guard_establishingByOBU_SM1 = reset;
      if (tr_1_guard_establishingByOBU_SM1) {
        _25_SM1_state_act_partial = _156_SSM_st_idle_SM1;
      }
      else {
        _25_SM1_state_act_partial = SSM_st_establishingByOBU_SM1;
      }
      break;
    case _156_SSM_st_idle_SM1 :
      tr_2_guard_idle_SM1 = outC->initiatedByRBC;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L23 = outC->_L1.initiatedByOBU;
  outC->_L24 = outC->_L22 & outC->_L23;
  outC->initiatedByOBU = outC->_L24;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_establishingByRBC_SM1 :
      outC->SM1_state_act = _28_SM1_state_act_partial;
      if (tr_1_guard_establishingByRBC_SM1) {
        _30_SM1_fired_strong_partial =
          SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1;
      }
      else {
        _30_SM1_fired_strong_partial = _157_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _30_SM1_fired_strong_partial;
      break;
    case SSM_st_establishingByOBU_SM1 :
      outC->SM1_state_act = _25_SM1_state_act_partial;
      if (tr_1_guard_establishingByOBU_SM1) {
        _27_SM1_fired_strong_partial =
          SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1;
      }
      else {
        _27_SM1_fired_strong_partial = _157_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _27_SM1_fired_strong_partial;
      break;
    case _156_SSM_st_idle_SM1 :
      tr_1_guard_idle_SM1 = outC->initiatedByOBU;
      if (tr_1_guard_idle_SM1) {
        SM1_state_act_partial = SSM_st_establishingByOBU_SM1;
      }
      else if (tr_2_guard_idle_SM1) {
        SM1_state_act_partial = SSM_st_establishingByRBC_SM1;
      }
      else {
        SM1_state_act_partial = _156_SSM_st_idle_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_idle_SM1) {
        SM1_fired_strong_partial = SSM_TR_idle_establishingByOBU_1_idle_SM1;
      }
      else if (tr_2_guard_idle_SM1) {
        SM1_fired_strong_partial = SSM_TR_idle_establishingByRBC_2_idle_SM1;
      }
      else {
        SM1_fired_strong_partial = _157_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_establishingByRBC_SM1 :
      _24_SM1_fired_partial = outC->SM1_fired_strong;
      _23_SM1_reset_nxt_partial = kcg_false;
      _22_SM1_state_nxt_partial = SSM_st_establishingByRBC_SM1;
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &outC->_L4_establishingByRBC_SM1,
        sessionEstablishCmd_in);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &outC->_L5_establishingByRBC_SM1,
        connectionStatus);
      outC->_L6_establishingByRBC_SM1 = reset;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_establishingByRBC_SM1 :
      _29_SM1_reset_act_partial = tr_1_guard_establishingByRBC_SM1;
      outC->SM1_reset_act = _29_SM1_reset_act_partial;
      break;
    case SSM_st_establishingByOBU_SM1 :
      _26_SM1_reset_act_partial = tr_1_guard_establishingByOBU_SM1;
      outC->SM1_reset_act = _26_SM1_reset_act_partial;
      break;
    case _156_SSM_st_idle_SM1 :
      if (tr_1_guard_idle_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_2_guard_idle_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_establishingByRBC_SM1 :
      if (outC->SM1_reset_act) {
        /* SM1:establishingByRBC:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2#1)/ */
        establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->Context_establishSessionFromRBC_v2_1);
      }
      /* SM1:establishingByRBC:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2#1)/ */
      establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
        &outC->_L4_establishingByRBC_SM1,
        &outC->_L5_establishingByRBC_SM1,
        outC->_L6_establishingByRBC_SM1,
        &outC->Context_establishSessionFromRBC_v2_1);
      outC->_L2_establishingByRBC_SM1 =
        outC->Context_establishSessionFromRBC_v2_1.send_m159_sessionEstablishedReport;
      outC->_L9_establishingByRBC_SM1 =
        outC->Context_establishSessionFromRBC_v2_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L3_establishingByRBC_SM1,
        &outC->Context_establishSessionFromRBC_v2_1.sessionStatus);
      _20_established_partial = outC->_L9_establishingByRBC_SM1;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->_L8_establishingByRBC_SM1,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      outC->_L7_establishingByRBC_SM1 = kcg_false;
      _16_send_m154_noCompatibleVersionSupported_partial =
        outC->_L7_establishingByRBC_SM1;
      _18_terminateCommunicationSession_partial = outC->_L7_establishingByRBC_SM1;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_21_sessionStatus_partial,
        &outC->_L3_establishingByRBC_SM1);
      _14_send_m155_initiationOfACommunicationSession_partial =
        outC->_L7_establishingByRBC_SM1;
      _15_send_m159_sessionEstablishedReport_partial =
        outC->_L2_establishingByRBC_SM1;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_13_p42_establishSessionCmd_partial,
        &outC->_L8_establishingByRBC_SM1);
      _19_infomDriverNoCompatibleVersionSupported_partial =
        outC->_L7_establishingByRBC_SM1;
      _17_requestSafeRadioConnectionSetup_partial = outC->_L7_establishingByRBC_SM1;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &_13_p42_establishSessionCmd_partial);
      outC->send_m155_initiationOfACommunicationSession =
        _14_send_m155_initiationOfACommunicationSession_partial;
      outC->send_m159_sessionEstablishedReport =
        _15_send_m159_sessionEstablishedReport_partial;
      outC->send_m154_noCompatibleVersionSupported =
        _16_send_m154_noCompatibleVersionSupported_partial;
      outC->requestSafeRadioConnectionSetup =
        _17_requestSafeRadioConnectionSetup_partial;
      outC->terminateCommunicationSession = _18_terminateCommunicationSession_partial;
      outC->infomDriverNoCompatibleVersionSupported =
        _19_infomDriverNoCompatibleVersionSupported_partial;
      outC->established = _20_established_partial;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_21_sessionStatus_partial);
      outC->SM1_state_nxt = _22_SM1_state_nxt_partial;
      break;
    case SSM_st_establishingByOBU_SM1 :
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_establishingByOBU_SM1;
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &outC->_L10_establishingByOBU_SM1,
        sessionEstablishCmd_in);
      kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
        &outC->_L11_establishingByOBU_SM1,
        m32_SystemVersion);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &outC->_L12_establishingByOBU_SM1,
        connectionStatus);
      outC->_L13_establishingByOBU_SM1 = reset;
      if (outC->SM1_reset_act) {
        /* SM1:establishingByOBU:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2#1)/ */
        establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->Context_establishSessionFromOBU_v2_1);
      }
      /* SM1:establishingByOBU:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2#1)/ */
      establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
        &outC->_L10_establishingByOBU_SM1,
        &outC->_L11_establishingByOBU_SM1,
        &outC->_L12_establishingByOBU_SM1,
        outC->_L13_establishingByOBU_SM1,
        &outC->Context_establishSessionFromOBU_v2_1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->_L2_establishingByOBU_SM1,
        &outC->Context_establishSessionFromOBU_v2_1.p42_establishSessionCmd);
      outC->_L3_establishingByOBU_SM1 =
        outC->Context_establishSessionFromOBU_v2_1.send_m155_initiationOfACommunicationSession;
      outC->_L4_establishingByOBU_SM1 =
        outC->Context_establishSessionFromOBU_v2_1.send_m159_sessionEstablishedReport;
      outC->_L5_establishingByOBU_SM1 =
        outC->Context_establishSessionFromOBU_v2_1.send_m154_noCompatibleVersionSupported;
      outC->_L6_establishingByOBU_SM1 =
        outC->Context_establishSessionFromOBU_v2_1.requestSafeRadioConnectionSetup;
      outC->_L7_establishingByOBU_SM1 =
        outC->Context_establishSessionFromOBU_v2_1.terminateCommunicationSession;
      outC->_L8_establishingByOBU_SM1 =
        outC->Context_establishSessionFromOBU_v2_1.infomDriverNoCompatibleVersionSupported;
      outC->_L14_establishingByOBU_SM1 =
        outC->Context_establishSessionFromOBU_v2_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L9_establishingByOBU_SM1,
        &outC->Context_establishSessionFromOBU_v2_1.sessionStatus);
      _8_established_partial = outC->_L14_establishingByOBU_SM1;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_9_sessionStatus_partial,
        &outC->_L9_establishingByOBU_SM1);
      _7_infomDriverNoCompatibleVersionSupported_partial =
        outC->_L8_establishingByOBU_SM1;
      _6_terminateCommunicationSession_partial = outC->_L7_establishingByOBU_SM1;
      _5_requestSafeRadioConnectionSetup_partial = outC->_L6_establishingByOBU_SM1;
      _4_send_m154_noCompatibleVersionSupported_partial =
        outC->_L5_establishingByOBU_SM1;
      _3_send_m159_sessionEstablishedReport_partial = outC->_L4_establishingByOBU_SM1;
      _2_send_m155_initiationOfACommunicationSession_partial =
        outC->_L3_establishingByOBU_SM1;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_1_p42_establishSessionCmd_partial,
        &outC->_L2_establishingByOBU_SM1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &_1_p42_establishSessionCmd_partial);
      outC->send_m155_initiationOfACommunicationSession =
        _2_send_m155_initiationOfACommunicationSession_partial;
      outC->send_m159_sessionEstablishedReport =
        _3_send_m159_sessionEstablishedReport_partial;
      outC->send_m154_noCompatibleVersionSupported =
        _4_send_m154_noCompatibleVersionSupported_partial;
      outC->requestSafeRadioConnectionSetup =
        _5_requestSafeRadioConnectionSetup_partial;
      outC->terminateCommunicationSession = _6_terminateCommunicationSession_partial;
      outC->infomDriverNoCompatibleVersionSupported =
        _7_infomDriverNoCompatibleVersionSupported_partial;
      outC->established = _8_established_partial;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_9_sessionStatus_partial);
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      break;
    case _156_SSM_st_idle_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _156_SSM_st_idle_SM1;
      outC->_L4_idle_SM1 = kcg_false;
      established_partial = outC->_L4_idle_SM1;
      outC->_L12_idle_SM1 = kcg_true;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L9_idle_SM1,
        (sessionStatus_T_RCM_Session_Types_Pkg *)
          &cNoSessionStatus_RCM_Session_Types_Pkg);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L11_idle_SM1,
        &outC->_L9_idle_SM1);
      if (kcg_true) {
        outC->_L11_idle_SM1.valid = outC->_L12_idle_SM1;
      }
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->_L3_idle_SM1,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      terminateCommunicationSession_partial = outC->_L4_idle_SM1;
      requestSafeRadioConnectionSetup_partial = outC->_L4_idle_SM1;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &sessionStatus_partial,
        &outC->_L11_idle_SM1);
      send_m154_noCompatibleVersionSupported_partial = outC->_L4_idle_SM1;
      infomDriverNoCompatibleVersionSupported_partial = outC->_L4_idle_SM1;
      send_m155_initiationOfACommunicationSession_partial = outC->_L4_idle_SM1;
      send_m159_sessionEstablishedReport_partial = outC->_L4_idle_SM1;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &p42_establishSessionCmd_partial,
        &outC->_L3_idle_SM1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &p42_establishSessionCmd_partial);
      outC->send_m155_initiationOfACommunicationSession =
        send_m155_initiationOfACommunicationSession_partial;
      outC->send_m159_sessionEstablishedReport =
        send_m159_sessionEstablishedReport_partial;
      outC->send_m154_noCompatibleVersionSupported =
        send_m154_noCompatibleVersionSupported_partial;
      outC->requestSafeRadioConnectionSetup = requestSafeRadioConnectionSetup_partial;
      outC->terminateCommunicationSession = terminateCommunicationSession_partial;
      outC->infomDriverNoCompatibleVersionSupported =
        infomDriverNoCompatibleVersionSupported_partial;
      outC->established = established_partial;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &sessionStatus_partial);
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_establishingByRBC_SM1 :
      outC->SM1_reset_nxt = _23_SM1_reset_nxt_partial;
      outC->SM1_fired = _24_SM1_fired_partial;
      break;
    case SSM_st_establishingByOBU_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case _156_SSM_st_idle_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void establishSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L100.valid = kcg_true;
  outC->_L100.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L100.origin.valid = kcg_true;
  outC->_L100.origin.nid_c = kcg_lit_int32(0);
  outC->_L100.origin.rbc_id = kcg_lit_int32(0);
  outC->_L100.origin.device_id = kcg_lit_int32(0);
  outC->_L101 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L104 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L105.valid = kcg_true;
  outC->_L105.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L105.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L105.nid_radio = kcg_lit_int64(0);
  outC->_L105.settingUpConnectionHasFailed = kcg_true;
  outC->_L105.connectionLost = kcg_true;
  outC->_L105.isInRadioHole = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L107 = kcg_true;
  outC->_L109 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L111 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.initiatedByOBU = kcg_true;
  outC->_L1.initiatedByRBC = kcg_true;
  outC->_L1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_rbc = kcg_lit_int32(0);
  outC->_L1.nid_radio = kcg_lit_int64(0);
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
  outC->_L1.p42.nid_radio = kcg_lit_int64(0);
  outC->_L1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1.p42.origin.valid = kcg_true;
  outC->_L1.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.p42.origin.device_id = kcg_lit_int32(0);
  outC->initiatedByRBC = kcg_true;
  outC->initiatedByOBU = kcg_true;
  outC->SM1_fired = _157_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _157_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _156_SSM_st_idle_SM1;
  outC->SM1_state_sel = _156_SSM_st_idle_SM1;
  outC->_L3_establishingByRBC_SM1.valid = kcg_true;
  outC->_L3_establishingByRBC_SM1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L3_establishingByRBC_SM1.nid_c = kcg_lit_int32(0);
  outC->_L3_establishingByRBC_SM1.nid_rbc = kcg_lit_int32(0);
  outC->_L3_establishingByRBC_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L2_establishingByRBC_SM1 = kcg_true;
  outC->_L4_establishingByRBC_SM1.valid = kcg_true;
  outC->_L4_establishingByRBC_SM1.initiatedByOBU = kcg_true;
  outC->_L4_establishingByRBC_SM1.initiatedByRBC = kcg_true;
  outC->_L4_establishingByRBC_SM1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L4_establishingByRBC_SM1.nid_c = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.nid_rbc = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L4_establishingByRBC_SM1.origin.valid = kcg_true;
  outC->_L4_establishingByRBC_SM1.origin.nid_c = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.origin.device_id = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.m38.valid = kcg_true;
  outC->_L4_establishingByRBC_SM1.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L4_establishingByRBC_SM1.m38.origin.valid = kcg_true;
  outC->_L4_establishingByRBC_SM1.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.p42.valid = kcg_true;
  outC->_L4_establishingByRBC_SM1.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L4_establishingByRBC_SM1.p42.q_dir = Q_DIR_Reverse;
  outC->_L4_establishingByRBC_SM1.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L4_establishingByRBC_SM1.p42.nid_c = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.p42.nid_radio = kcg_lit_int64(0);
  outC->_L4_establishingByRBC_SM1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L4_establishingByRBC_SM1.p42.origin.valid = kcg_true;
  outC->_L4_establishingByRBC_SM1.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L4_establishingByRBC_SM1.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L5_establishingByRBC_SM1.valid = kcg_true;
  outC->_L5_establishingByRBC_SM1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L5_establishingByRBC_SM1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L5_establishingByRBC_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L5_establishingByRBC_SM1.settingUpConnectionHasFailed = kcg_true;
  outC->_L5_establishingByRBC_SM1.connectionLost = kcg_true;
  outC->_L5_establishingByRBC_SM1.isInRadioHole = kcg_true;
  outC->_L6_establishingByRBC_SM1 = kcg_true;
  outC->_L7_establishingByRBC_SM1 = kcg_true;
  outC->_L8_establishingByRBC_SM1.valid = kcg_true;
  outC->_L8_establishingByRBC_SM1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_establishingByRBC_SM1.q_dir = Q_DIR_Reverse;
  outC->_L8_establishingByRBC_SM1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_establishingByRBC_SM1.nid_c = kcg_lit_int32(0);
  outC->_L8_establishingByRBC_SM1.nid_RBC = kcg_lit_int32(0);
  outC->_L8_establishingByRBC_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L8_establishingByRBC_SM1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_establishingByRBC_SM1.origin.valid = kcg_true;
  outC->_L8_establishingByRBC_SM1.origin.nid_c = kcg_lit_int32(0);
  outC->_L8_establishingByRBC_SM1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L8_establishingByRBC_SM1.origin.device_id = kcg_lit_int32(0);
  outC->_L9_establishingByRBC_SM1 = kcg_true;
  outC->_L9_establishingByOBU_SM1.valid = kcg_true;
  outC->_L9_establishingByOBU_SM1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L9_establishingByOBU_SM1.nid_c = kcg_lit_int32(0);
  outC->_L9_establishingByOBU_SM1.nid_rbc = kcg_lit_int32(0);
  outC->_L9_establishingByOBU_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L8_establishingByOBU_SM1 = kcg_true;
  outC->_L7_establishingByOBU_SM1 = kcg_true;
  outC->_L6_establishingByOBU_SM1 = kcg_true;
  outC->_L5_establishingByOBU_SM1 = kcg_true;
  outC->_L4_establishingByOBU_SM1 = kcg_true;
  outC->_L3_establishingByOBU_SM1 = kcg_true;
  outC->_L2_establishingByOBU_SM1.valid = kcg_true;
  outC->_L2_establishingByOBU_SM1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L2_establishingByOBU_SM1.q_dir = Q_DIR_Reverse;
  outC->_L2_establishingByOBU_SM1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L2_establishingByOBU_SM1.nid_c = kcg_lit_int32(0);
  outC->_L2_establishingByOBU_SM1.nid_RBC = kcg_lit_int32(0);
  outC->_L2_establishingByOBU_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L2_establishingByOBU_SM1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L2_establishingByOBU_SM1.origin.valid = kcg_true;
  outC->_L2_establishingByOBU_SM1.origin.nid_c = kcg_lit_int32(0);
  outC->_L2_establishingByOBU_SM1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L2_establishingByOBU_SM1.origin.device_id = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.valid = kcg_true;
  outC->_L10_establishingByOBU_SM1.initiatedByOBU = kcg_true;
  outC->_L10_establishingByOBU_SM1.initiatedByRBC = kcg_true;
  outC->_L10_establishingByOBU_SM1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L10_establishingByOBU_SM1.nid_c = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.nid_rbc = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L10_establishingByOBU_SM1.origin.valid = kcg_true;
  outC->_L10_establishingByOBU_SM1.origin.nid_c = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.origin.device_id = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.m38.valid = kcg_true;
  outC->_L10_establishingByOBU_SM1.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L10_establishingByOBU_SM1.m38.origin.valid = kcg_true;
  outC->_L10_establishingByOBU_SM1.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.p42.valid = kcg_true;
  outC->_L10_establishingByOBU_SM1.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L10_establishingByOBU_SM1.p42.q_dir = Q_DIR_Reverse;
  outC->_L10_establishingByOBU_SM1.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L10_establishingByOBU_SM1.p42.nid_c = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.p42.nid_radio = kcg_lit_int64(0);
  outC->_L10_establishingByOBU_SM1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L10_establishingByOBU_SM1.p42.origin.valid = kcg_true;
  outC->_L10_establishingByOBU_SM1.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L10_establishingByOBU_SM1.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L11_establishingByOBU_SM1.valid = kcg_true;
  outC->_L11_establishingByOBU_SM1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L11_establishingByOBU_SM1.versionSupported = kcg_true;
  outC->_L11_establishingByOBU_SM1.origin.valid = kcg_true;
  outC->_L11_establishingByOBU_SM1.origin.nid_c = kcg_lit_int32(0);
  outC->_L11_establishingByOBU_SM1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L11_establishingByOBU_SM1.origin.device_id = kcg_lit_int32(0);
  outC->_L11_establishingByOBU_SM1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_establishingByOBU_SM1.valid = kcg_true;
  outC->_L12_establishingByOBU_SM1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L12_establishingByOBU_SM1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L12_establishingByOBU_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L12_establishingByOBU_SM1.settingUpConnectionHasFailed = kcg_true;
  outC->_L12_establishingByOBU_SM1.connectionLost = kcg_true;
  outC->_L12_establishingByOBU_SM1.isInRadioHole = kcg_true;
  outC->_L13_establishingByOBU_SM1 = kcg_true;
  outC->_L14_establishingByOBU_SM1 = kcg_true;
  outC->_L4_idle_SM1 = kcg_true;
  outC->_L3_idle_SM1.valid = kcg_true;
  outC->_L3_idle_SM1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L3_idle_SM1.q_dir = Q_DIR_Reverse;
  outC->_L3_idle_SM1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L3_idle_SM1.nid_c = kcg_lit_int32(0);
  outC->_L3_idle_SM1.nid_RBC = kcg_lit_int32(0);
  outC->_L3_idle_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L3_idle_SM1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L3_idle_SM1.origin.valid = kcg_true;
  outC->_L3_idle_SM1.origin.nid_c = kcg_lit_int32(0);
  outC->_L3_idle_SM1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L3_idle_SM1.origin.device_id = kcg_lit_int32(0);
  outC->_L9_idle_SM1.valid = kcg_true;
  outC->_L9_idle_SM1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L9_idle_SM1.nid_c = kcg_lit_int32(0);
  outC->_L9_idle_SM1.nid_rbc = kcg_lit_int32(0);
  outC->_L9_idle_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L11_idle_SM1.valid = kcg_true;
  outC->_L11_idle_SM1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L11_idle_SM1.nid_c = kcg_lit_int32(0);
  outC->_L11_idle_SM1.nid_rbc = kcg_lit_int32(0);
  outC->_L11_idle_SM1.nid_radio = kcg_lit_int64(0);
  outC->_L12_idle_SM1 = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = kcg_lit_int32(0);
  outC->sessionStatus.nid_rbc = kcg_lit_int32(0);
  outC->sessionStatus.nid_radio = kcg_lit_int64(0);
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
  outC->p42_establishSessionCmd.nid_radio = kcg_lit_int64(0);
  outC->p42_establishSessionCmd.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_establishSessionCmd.origin.valid = kcg_true;
  outC->p42_establishSessionCmd.origin.nid_c = kcg_lit_int32(0);
  outC->p42_establishSessionCmd.origin.rbc_id = kcg_lit_int32(0);
  outC->p42_establishSessionCmd.origin.device_id = kcg_lit_int32(0);
  /* SM1:establishingByOBU:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2#1)/ */
  establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSessionFromOBU_v2_1);
  /* SM1:establishingByRBC:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2#1)/ */
  establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSessionFromRBC_v2_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _156_SSM_st_idle_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* SM1:establishingByOBU:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2#1)/ */
  establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSessionFromOBU_v2_1);
  /* SM1:establishingByRBC:_L2=(MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2#1)/ */
  establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSessionFromRBC_v2_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _156_SSM_st_idle_SM1;
}


void kcg_save_SV_establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  SV_establishSession_v2_MoRC_Pck_Subfunc_Pkg *SV,
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  kcg_save_SV_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
    &SV->Context_establishSessionFromRBC_v2_1,
    &outC->Context_establishSessionFromRBC_v2_1);
  kcg_save_SV_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    &SV->Context_establishSessionFromOBU_v2_1,
    &outC->Context_establishSessionFromOBU_v2_1);
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
}

void kcg_load_SV_establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC,
  SV_establishSession_v2_MoRC_Pck_Subfunc_Pkg *SV)
{
  kcg_load_SV_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSessionFromRBC_v2_1,
    &SV->Context_establishSessionFromRBC_v2_1);
  kcg_load_SV_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_establishSessionFromOBU_v2_1,
    &SV->Context_establishSessionFromOBU_v2_1);
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** establishSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

