/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter/ */
void radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* morcStatusFromAcceptingRBC/ */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromAcceptingRBC_partial;
  /* morcStatusFromHandingOverRBC/ */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromHandingOverRBC_partial;
  /* morcStatusFromAcceptingRBC/ */
  static morcStatus_T_RCM_Session_Types_Pkg _1_morcStatusFromAcceptingRBC_partial;
  /* morcStatusFromHandingOverRBC/ */
  static morcStatus_T_RCM_Session_Types_Pkg _2_morcStatusFromHandingOverRBC_partial;

  outC->IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L11_then_IfBlock1,
      morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromHandingOverRBC_partial,
      &outC->_L11_then_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromAcceptingRBC_partial,
      &outC->_L11_then_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromAcceptingRBC,
      &morcStatusFromAcceptingRBC_partial);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromHandingOverRBC,
      &morcStatusFromHandingOverRBC_partial);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L40_else_IfBlock1,
      morcStatus_2);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L39_else_IfBlock1,
      morcStatus_1);
    outC->_L18_else_IfBlock1 = handingOverMobile_is_mobile_1;
    /* IfBlock1:else:_L34= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L34_else_IfBlock1,
        &outC->_L39_else_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L34_else_IfBlock1,
        &outC->_L40_else_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_2_morcStatusFromHandingOverRBC_partial,
      &outC->_L34_else_IfBlock1);
    /* IfBlock1:else:_L35= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L35_else_IfBlock1,
        &outC->_L40_else_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L35_else_IfBlock1,
        &outC->_L39_else_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_1_morcStatusFromAcceptingRBC_partial,
      &outC->_L35_else_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromAcceptingRBC,
      &_1_morcStatusFromAcceptingRBC_partial);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromHandingOverRBC,
      &_2_morcStatusFromHandingOverRBC_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void radioStatusRouter_init_Handover_Pkg_handoverUtils_Pkg(
  outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L18_else_IfBlock1 = kcg_true;
  outC->_L34_else_IfBlock1.registration.valid = kcg_true;
  outC->_L34_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L34_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L34_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L34_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L34_else_IfBlock1.connection.valid = kcg_true;
  outC->_L34_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L34_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L34_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L34_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L34_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L34_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L34_else_IfBlock1.session.valid = kcg_true;
  outC->_L34_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L34_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L34_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L34_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L35_else_IfBlock1.registration.valid = kcg_true;
  outC->_L35_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L35_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L35_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L35_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L35_else_IfBlock1.connection.valid = kcg_true;
  outC->_L35_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L35_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L35_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L35_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L35_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L35_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L35_else_IfBlock1.session.valid = kcg_true;
  outC->_L35_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L35_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L35_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L35_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L39_else_IfBlock1.registration.valid = kcg_true;
  outC->_L39_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L39_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L39_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L39_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L39_else_IfBlock1.connection.valid = kcg_true;
  outC->_L39_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L39_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L39_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L39_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L39_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L39_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L39_else_IfBlock1.session.valid = kcg_true;
  outC->_L39_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L39_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L39_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L39_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L40_else_IfBlock1.registration.valid = kcg_true;
  outC->_L40_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L40_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L40_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L40_else_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L40_else_IfBlock1.connection.valid = kcg_true;
  outC->_L40_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L40_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L40_else_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L40_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L40_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L40_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L40_else_IfBlock1.session.valid = kcg_true;
  outC->_L40_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L40_else_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L40_else_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L40_else_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.registration.valid = kcg_true;
  outC->_L11_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L11_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L11_then_IfBlock1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.connection.valid = kcg_true;
  outC->_L11_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L11_then_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L11_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L11_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L11_then_IfBlock1.session.valid = kcg_true;
  outC->_L11_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L11_then_IfBlock1.session.nid_c = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->morcStatusFromHandingOverRBC.registration.valid = kcg_true;
  outC->morcStatusFromHandingOverRBC.registration.mobileDeviceNo =
    kcg_lit_int64(0);
  outC->morcStatusFromHandingOverRBC.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->morcStatusFromHandingOverRBC.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->morcStatusFromHandingOverRBC.registration.nid_mn = kcg_lit_int64(0);
  outC->morcStatusFromHandingOverRBC.connection.valid = kcg_true;
  outC->morcStatusFromHandingOverRBC.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->morcStatusFromHandingOverRBC.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->morcStatusFromHandingOverRBC.connection.nid_radio = kcg_lit_int64(0);
  outC->morcStatusFromHandingOverRBC.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->morcStatusFromHandingOverRBC.connection.connectionLost = kcg_true;
  outC->morcStatusFromHandingOverRBC.connection.isInRadioHole = kcg_true;
  outC->morcStatusFromHandingOverRBC.session.valid = kcg_true;
  outC->morcStatusFromHandingOverRBC.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->morcStatusFromHandingOverRBC.session.nid_c = kcg_lit_int64(0);
  outC->morcStatusFromHandingOverRBC.session.nid_rbc = kcg_lit_int64(0);
  outC->morcStatusFromHandingOverRBC.session.nid_radio = kcg_lit_int64(0);
  outC->morcStatusFromAcceptingRBC.registration.valid = kcg_true;
  outC->morcStatusFromAcceptingRBC.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->morcStatusFromAcceptingRBC.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->morcStatusFromAcceptingRBC.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->morcStatusFromAcceptingRBC.registration.nid_mn = kcg_lit_int64(0);
  outC->morcStatusFromAcceptingRBC.connection.valid = kcg_true;
  outC->morcStatusFromAcceptingRBC.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->morcStatusFromAcceptingRBC.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->morcStatusFromAcceptingRBC.connection.nid_radio = kcg_lit_int64(0);
  outC->morcStatusFromAcceptingRBC.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->morcStatusFromAcceptingRBC.connection.connectionLost = kcg_true;
  outC->morcStatusFromAcceptingRBC.connection.isInRadioHole = kcg_true;
  outC->morcStatusFromAcceptingRBC.session.valid = kcg_true;
  outC->morcStatusFromAcceptingRBC.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->morcStatusFromAcceptingRBC.session.nid_c = kcg_lit_int64(0);
  outC->morcStatusFromAcceptingRBC.session.nid_rbc = kcg_lit_int64(0);
  outC->morcStatusFromAcceptingRBC.session.nid_radio = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void radioStatusRouter_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

