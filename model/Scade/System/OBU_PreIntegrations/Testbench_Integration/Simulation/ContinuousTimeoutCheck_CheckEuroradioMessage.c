/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ContinuousTimeoutCheck/ */
void ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* tNvContact/ */
  T_NVCONTACT tNvContact,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* activateCheck/ */
  kcg_bool activateCheck,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  outC_ContinuousTimeoutCheck_CheckEuroradioMessage *outC)
{
  /* tNvContactError/ */
  static kcg_bool tNvContactError_partial;
  /* tNvContactError/ */
  static kcg_bool _1_tNvContactError_partial;

  outC->_L7 = activateCheck;
  outC->_L5 = sp_maintaining_RCM_Session_Types_Pkg;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L1, radioStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L2, &outC->_L1.session);
  outC->_L3 = outC->_L2.phase;
  outC->_L4 = outC->_L3 == outC->_L5;
  outC->_L6 = outC->_L4 & outC->_L7;
  outC->doCheck = outC->_L6;
  outC->IfBlock1_clock = outC->doCheck;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L10_then_IfBlock1 = kcg_lit_int64(1000);
    outC->_L8_then_IfBlock1 = tNvContact;
    outC->_L9_then_IfBlock1 = outC->_L8_then_IfBlock1 * outC->_L10_then_IfBlock1;
    outC->_L5_then_IfBlock1 = lastRelevantEventTimestamp;
    outC->_L1_then_IfBlock1 = systemTime;
    outC->_L6_then_IfBlock1 = outC->_L1_then_IfBlock1 - outC->_L5_then_IfBlock1;
    outC->_L7_then_IfBlock1 = outC->_L6_then_IfBlock1 > outC->_L9_then_IfBlock1;
    tNvContactError_partial = outC->_L7_then_IfBlock1;
    outC->tNvContactError = tNvContactError_partial;
  }
  else {
    outC->_L1_else_IfBlock1 = kcg_false;
    _1_tNvContactError_partial = outC->_L1_else_IfBlock1;
    outC->tNvContactError = _1_tNvContactError_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ContinuousTimeoutCheck_init_CheckEuroradioMessage(
  outC_ContinuousTimeoutCheck_CheckEuroradioMessage *outC)
{
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L4 = kcg_true;
  outC->_L3 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2.valid = kcg_true;
  outC->_L2.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2.nid_c = kcg_lit_int64(0);
  outC->_L2.nid_rbc = kcg_lit_int64(0);
  outC->_L2.nid_radio = kcg_lit_int64(0);
  outC->_L1.registration.valid = kcg_true;
  outC->_L1.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1.registration.nid_mn = kcg_lit_int64(0);
  outC->_L1.connection.valid = kcg_true;
  outC->_L1.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1.connection.connectionLost = kcg_true;
  outC->_L1.connection.isInRadioHole = kcg_true;
  outC->_L1.session.valid = kcg_true;
  outC->_L1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1.session.nid_c = kcg_lit_int64(0);
  outC->_L1.session.nid_rbc = kcg_lit_int64(0);
  outC->_L1.session.nid_radio = kcg_lit_int64(0);
  outC->doCheck = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1 = kcg_lit_int64(0);
  outC->tNvContactError = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ContinuousTimeoutCheck_reset_CheckEuroradioMessage(
  outC_ContinuousTimeoutCheck_CheckEuroradioMessage *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ContinuousTimeoutCheck_CheckEuroradioMessage.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

