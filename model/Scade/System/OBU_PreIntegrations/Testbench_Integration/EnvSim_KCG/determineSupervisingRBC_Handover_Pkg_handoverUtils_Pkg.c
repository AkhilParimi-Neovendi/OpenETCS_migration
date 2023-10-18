/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC/ */
void determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* supervising_isMobile_1/ */
  static kcg_bool supervising_isMobile_1_partial;
  /* supervising_isMobile_2/ */
  static kcg_bool supervising_isMobile_2_partial;
  /* supervisingStatusFromMobile/ */
  static morcStatus_T_RCM_Session_Types_Pkg supervisingStatusFromMobile_partial;
  /* supervising_isMobile_1/ */
  static kcg_bool _1_supervising_isMobile_1_partial;
  /* supervising_isMobile_2/ */
  static kcg_bool _2_supervising_isMobile_2_partial;
  /* supervisingStatusFromMobile/ */
  static morcStatus_T_RCM_Session_Types_Pkg _3_supervisingStatusFromMobile_partial;

  outC->IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &supervisingStatusFromMobile_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->supervisingStatusFromMobile,
      &supervisingStatusFromMobile_partial);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L3_else_IfBlock1,
      morcStatus_2);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L2_else_IfBlock1,
      morcStatus_1);
    outC->_L1_else_IfBlock1 = handingOverMobile_is_mobile_1;
    /* IfBlock1:else:_L4= */
    if (outC->_L1_else_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L4_else_IfBlock1,
        &outC->_L2_else_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L4_else_IfBlock1,
        &outC->_L3_else_IfBlock1);
    }
    /* IfBlock1:else:_L6= */
    if (outC->_L1_else_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L6_else_IfBlock1,
        &outC->_L3_else_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L6_else_IfBlock1,
        &outC->_L2_else_IfBlock1);
    }
    outC->_L5_else_IfBlock1 = useInformationFromAcceptingRBC;
    /* IfBlock1:else:_L7= */
    if (outC->_L5_else_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L7_else_IfBlock1,
        &outC->_L6_else_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L7_else_IfBlock1,
        &outC->_L4_else_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_3_supervisingStatusFromMobile_partial,
      &outC->_L7_else_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->supervisingStatusFromMobile,
      &_3_supervisingStatusFromMobile_partial);
  }
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L37,
    &outC->supervisingStatusFromMobile);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L46,
    &outC->_L37.registration);
  outC->_L58 = outC->_L46.mobileDeviceNo;
  outC->_L57 = outC->_L46.nid_mn;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L45,
    &outC->_L37.session);
  outC->_L56 = outC->_L45.nid_radio;
  outC->_L55 = outC->_L45.nid_rbc;
  outC->_L54 = outC->_L45.nid_c;
  outC->_L52 = sp_maintaining_RCM_Session_Types_Pkg;
  outC->_L50 = outC->_L45.phase;
  outC->_L51 = outC->_L50 == outC->_L52;
  outC->_L49 = outC->_L45.valid;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L44,
    &outC->_L37.connection);
  outC->_L48 = outC->_L44.valid;
  outC->_L47 = outC->_L46.valid;
  outC->_L53 = outC->_L47 & outC->_L48 & outC->_L49 & outC->_L51;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    outC->_L2_then_IfBlock1 = kcg_true;
    supervising_isMobile_2_partial = outC->_L3_then_IfBlock1;
    supervising_isMobile_1_partial = outC->_L2_then_IfBlock1;
    outC->supervising_isMobile_1 = supervising_isMobile_1_partial;
    outC->supervising_isMobile_2 = supervising_isMobile_2_partial;
  }
  else {
    outC->_L16_else_IfBlock1 = useInformationFromAcceptingRBC;
    outC->_L14_else_IfBlock1 = handingOverMobile_is_mobile_1;
    outC->_L19_else_IfBlock1 = !outC->_L14_else_IfBlock1;
    outC->_L20_else_IfBlock1 = outC->_L19_else_IfBlock1 & outC->_L16_else_IfBlock1;
    outC->_L17_else_IfBlock1 = !outC->_L16_else_IfBlock1;
    outC->_L15_else_IfBlock1 = outC->_L14_else_IfBlock1 & outC->_L17_else_IfBlock1;
    outC->_L18_else_IfBlock1 = outC->_L15_else_IfBlock1 | outC->_L20_else_IfBlock1;
    outC->_L21_else_IfBlock1 = !outC->_L18_else_IfBlock1;
    _2_supervising_isMobile_2_partial = outC->_L21_else_IfBlock1;
    _1_supervising_isMobile_1_partial = outC->_L18_else_IfBlock1;
    outC->supervising_isMobile_1 = _1_supervising_isMobile_1_partial;
    outC->supervising_isMobile_2 = _2_supervising_isMobile_2_partial;
  }
  outC->_L13.valid = outC->_L53;
  outC->_L13.mobileDeviceNo = outC->_L58;
  outC->_L13.nid_c = outC->_L54;
  outC->_L13.nid_RBC = outC->_L55;
  outC->_L13.nid_radio = outC->_L56;
  outC->_L13.nid_mn = outC->_L57;
  kcg_copy_connection_ids_T_Handover_Pkg(&outC->supervisingRBC, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void determineSupervisingRBC_init_Handover_Pkg_handoverUtils_Pkg(
  outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->_L58 = kcg_lit_int64(0);
  outC->_L57 = kcg_lit_int64(0);
  outC->_L56 = kcg_lit_int64(0);
  outC->_L55 = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L53 = kcg_true;
  outC->_L52 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L51 = kcg_true;
  outC->_L50 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46.valid = kcg_true;
  outC->_L46.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L46.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L46.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L46.nid_mn = kcg_lit_int64(0);
  outC->_L45.valid = kcg_true;
  outC->_L45.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L45.nid_c = kcg_lit_int64(0);
  outC->_L45.nid_rbc = kcg_lit_int64(0);
  outC->_L45.nid_radio = kcg_lit_int64(0);
  outC->_L44.valid = kcg_true;
  outC->_L44.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L44.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L44.nid_radio = kcg_lit_int64(0);
  outC->_L44.settingUpConnectionHasFailed = kcg_true;
  outC->_L44.connectionLost = kcg_true;
  outC->_L44.isInRadioHole = kcg_true;
  outC->_L37.registration.valid = kcg_true;
  outC->_L37.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L37.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L37.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L37.registration.nid_mn = kcg_lit_int64(0);
  outC->_L37.connection.valid = kcg_true;
  outC->_L37.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L37.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L37.connection.nid_radio = kcg_lit_int64(0);
  outC->_L37.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L37.connection.connectionLost = kcg_true;
  outC->_L37.connection.isInRadioHole = kcg_true;
  outC->_L37.session.valid = kcg_true;
  outC->_L37.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L37.session.nid_c = kcg_lit_int64(0);
  outC->_L37.session.nid_rbc = kcg_lit_int64(0);
  outC->_L37.session.nid_radio = kcg_lit_int64(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L13.nid_c = kcg_lit_int64(0);
  outC->_L13.nid_RBC = kcg_lit_int64(0);
  outC->_L13.nid_radio = kcg_lit_int64(0);
  outC->_L13.nid_mn = kcg_lit_int64(0);
  outC->supervisingStatusFromMobile.registration.valid = kcg_true;
  outC->supervisingStatusFromMobile.registration.mobileDeviceNo = kcg_lit_int64(
      0);
  outC->supervisingStatusFromMobile.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->supervisingStatusFromMobile.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->supervisingStatusFromMobile.registration.nid_mn = kcg_lit_int64(0);
  outC->supervisingStatusFromMobile.connection.valid = kcg_true;
  outC->supervisingStatusFromMobile.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->supervisingStatusFromMobile.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->supervisingStatusFromMobile.connection.nid_radio = kcg_lit_int64(0);
  outC->supervisingStatusFromMobile.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->supervisingStatusFromMobile.connection.connectionLost = kcg_true;
  outC->supervisingStatusFromMobile.connection.isInRadioHole = kcg_true;
  outC->supervisingStatusFromMobile.session.valid = kcg_true;
  outC->supervisingStatusFromMobile.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->supervisingStatusFromMobile.session.nid_c = kcg_lit_int64(0);
  outC->supervisingStatusFromMobile.session.nid_rbc = kcg_lit_int64(0);
  outC->supervisingStatusFromMobile.session.nid_radio = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L2_else_IfBlock1.registration.valid = kcg_true;
  outC->_L2_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L2_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L2_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.connection.valid = kcg_true;
  outC->_L2_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L2_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L2_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L2_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L2_else_IfBlock1.session.valid = kcg_true;
  outC->_L2_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.registration.valid = kcg_true;
  outC->_L3_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L3_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L3_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.connection.valid = kcg_true;
  outC->_L3_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L3_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L3_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L3_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L3_else_IfBlock1.session.valid = kcg_true;
  outC->_L3_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L3_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.registration.valid = kcg_true;
  outC->_L4_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L4_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L4_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.connection.valid = kcg_true;
  outC->_L4_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L4_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L4_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L4_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L4_else_IfBlock1.session.valid = kcg_true;
  outC->_L4_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L4_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L5_else_IfBlock1 = kcg_true;
  outC->_L6_else_IfBlock1.registration.valid = kcg_true;
  outC->_L6_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L6_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L6_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.connection.valid = kcg_true;
  outC->_L6_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L6_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L6_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L6_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L6_else_IfBlock1.session.valid = kcg_true;
  outC->_L6_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L6_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.registration.valid = kcg_true;
  outC->_L7_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L7_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L7_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.connection.valid = kcg_true;
  outC->_L7_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L7_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L7_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L7_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L7_else_IfBlock1.session.valid = kcg_true;
  outC->_L7_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L14_else_IfBlock1 = kcg_true;
  outC->_L15_else_IfBlock1 = kcg_true;
  outC->_L16_else_IfBlock1 = kcg_true;
  outC->_L17_else_IfBlock1 = kcg_true;
  outC->_L18_else_IfBlock1 = kcg_true;
  outC->_L19_else_IfBlock1 = kcg_true;
  outC->_L20_else_IfBlock1 = kcg_true;
  outC->_L21_else_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.registration.valid = kcg_true;
  outC->_L1_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1_then_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.connection.valid = kcg_true;
  outC->_L1_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1_then_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L1_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L1_then_IfBlock1.session.valid = kcg_true;
  outC->_L1_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_then_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->supervising_isMobile_2 = kcg_true;
  outC->supervising_isMobile_1 = kcg_true;
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = kcg_lit_int64(0);
  outC->supervisingRBC.nid_c = kcg_lit_int64(0);
  outC->supervisingRBC.nid_RBC = kcg_lit_int64(0);
  outC->supervisingRBC.nid_radio = kcg_lit_int64(0);
  outC->supervisingRBC.nid_mn = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void determineSupervisingRBC_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

