/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ */
void connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* connectionCmd/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* mobileConnectionContext/ */
  mobileConnectionContext_T_RCM_Types_Pkg *_1_mobileConnectionContext,
  /* mobileRegistrationStatus/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationStatus,
  outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg action_partial;
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg _2_action_partial;
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg _3_action_partial;
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg _4_action_partial;
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg _5_action_partial;
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg _6_action_partial;
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg _7_action_partial;
  /* action/ */
  static mobileConnetionAction_T_RCM_Types_Pkg _8_action_partial;

  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L394,
    _1_mobileConnectionContext);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->connectionStatus,
    &outC->_L394);
  outC->_L362 = mca_connect_RCM_Types_Pkg;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&outC->_L370, connectionCmd);
  outC->_L366 = outC->_L370.action;
  outC->_L367 = outC->_L366 == outC->_L362;
  outC->_L354 = outC->_L370.valid;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L379,
    _1_mobileConnectionContext);
  outC->_L380 = outC->_L379.valid;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L355,
    mobileRegistrationStatus);
  outC->_L356 = outC->_L355.valid;
  outC->_L377 = outC->_L356 & outC->_L380 & outC->_L354;
  outC->_L357 = outC->_L355.status;
  outC->_L359 = mrs_registered_RCM_Types_Pkg;
  outC->_L358 = outC->_L359 == outC->_L357;
  outC->_L360 = outC->_L358 & outC->_L377;
  outC->_L371 = outC->_L360 & outC->_L367;
  outC->connect = outC->_L371;
  outC->IfBlock1_clock = outC->connect;
  outC->_L363 = mca_disconnect_RCM_Types_Pkg;
  outC->_L368 = outC->_L366 == outC->_L363;
  outC->_L372 = outC->_L360 & outC->_L368;
  outC->disconnect = outC->_L372;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->disconnect;
  }
  outC->_L364 = mca_expectRadioHole_RCM_Types_Pkg;
  outC->_L373 = outC->_L366 == outC->_L364;
  outC->_L375 = outC->_L377 & outC->_L373;
  outC->enterHole = outC->_L375;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else {
    outC->else_clock_else_IfBlock1 = outC->enterHole;
  }
  outC->_L365 = mca_unexpectRadioHole_RCM_Types_Pkg;
  outC->_L374 = outC->_L366 == outC->_L365;
  outC->_L376 = outC->_L377 & outC->_L374;
  outC->leaveHole = outC->_L376;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = mca_connect_RCM_Types_Pkg;
    action_partial = outC->_L1_then_IfBlock1;
    outC->action = action_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = mca_disconnect_RCM_Types_Pkg;
      _8_action_partial = outC->_L1_then_else_IfBlock1;
      _2_action_partial = _8_action_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = mca_expectRadioHole_RCM_Types_Pkg;
        _3_action_partial = outC->_L1_then_else_else_IfBlock1;
        _7_action_partial = _3_action_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->leaveHole;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = mca_unexpectRadioHole_RCM_Types_Pkg;
          _6_action_partial = outC->_L1_then_else_else_else_IfBlock1;
          _4_action_partial = _6_action_partial;
        }
        else {
          outC->_L1_else_else_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
          _5_action_partial = outC->_L1_else_else_else_else_IfBlock1;
          _4_action_partial = _5_action_partial;
        }
        _7_action_partial = _4_action_partial;
      }
      _2_action_partial = _7_action_partial;
    }
    outC->action = _2_action_partial;
  }
  outC->_L393 = outC->action;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&outC->_L392, connectionCmd);
  outC->_L391 = outC->_L392.nid_radio;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L389,
    _1_mobileConnectionContext);
  outC->_L390 = outC->_L389.mobileDeviceNo;
  outC->_L387 = outC->leaveHole;
  outC->_L386 = outC->enterHole;
  outC->_L385 = outC->disconnect;
  outC->_L384 = outC->connect;
  outC->_L388 = outC->_L384 | outC->_L385 | outC->_L386 | outC->_L387;
  outC->_L383.valid = outC->_L388;
  outC->_L383.mobileDeviceNo = outC->_L390;
  outC->_L383.action = outC->_L393;
  outC->_L383.nid_radio = outC->_L391;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd,
    &outC->_L383);
  outC->_L382 = !outC->_L358;
  outC->_L381 = outC->_L382 & outC->_L356 & outC->_L380;
  outC->rejectOrderToContactRBC_or_RIU = outC->_L381;
}

#ifndef KCG_USER_DEFINED_INIT
void connectingToTheRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L394.valid = kcg_true;
  outC->_L394.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L394.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L394.nid_radio = kcg_lit_int64(0);
  outC->_L394.settingUpConnectionHasFailed = kcg_true;
  outC->_L394.connectionLost = kcg_true;
  outC->_L394.isInRadioHole = kcg_true;
  outC->_L393 = mca_nop_RCM_Types_Pkg;
  outC->_L392.valid = kcg_true;
  outC->_L392.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L392.action = mca_nop_RCM_Types_Pkg;
  outC->_L392.nid_radio = kcg_lit_int64(0);
  outC->_L391 = kcg_lit_int64(0);
  outC->_L390 = kcg_lit_int32(0);
  outC->_L389.valid = kcg_true;
  outC->_L389.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L389.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L389.nid_radio = kcg_lit_int64(0);
  outC->_L389.settingUpConnectionHasFailed = kcg_true;
  outC->_L389.connectionLost = kcg_true;
  outC->_L389.isInRadioHole = kcg_true;
  outC->_L388 = kcg_true;
  outC->_L387 = kcg_true;
  outC->_L386 = kcg_true;
  outC->_L385 = kcg_true;
  outC->_L384 = kcg_true;
  outC->_L383.valid = kcg_true;
  outC->_L383.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L383.action = mca_nop_RCM_Types_Pkg;
  outC->_L383.nid_radio = kcg_lit_int64(0);
  outC->_L382 = kcg_true;
  outC->_L381 = kcg_true;
  outC->_L380 = kcg_true;
  outC->_L379.valid = kcg_true;
  outC->_L379.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L379.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L379.nid_radio = kcg_lit_int64(0);
  outC->_L379.settingUpConnectionHasFailed = kcg_true;
  outC->_L379.connectionLost = kcg_true;
  outC->_L379.isInRadioHole = kcg_true;
  outC->_L377 = kcg_true;
  outC->_L376 = kcg_true;
  outC->_L375 = kcg_true;
  outC->_L374 = kcg_true;
  outC->_L373 = kcg_true;
  outC->_L372 = kcg_true;
  outC->_L371 = kcg_true;
  outC->_L370.valid = kcg_true;
  outC->_L370.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L370.action = mca_nop_RCM_Types_Pkg;
  outC->_L370.nid_radio = kcg_lit_int64(0);
  outC->_L368 = kcg_true;
  outC->_L367 = kcg_true;
  outC->_L366 = mca_nop_RCM_Types_Pkg;
  outC->_L365 = mca_nop_RCM_Types_Pkg;
  outC->_L364 = mca_nop_RCM_Types_Pkg;
  outC->_L363 = mca_nop_RCM_Types_Pkg;
  outC->_L362 = mca_nop_RCM_Types_Pkg;
  outC->_L360 = kcg_true;
  outC->_L359 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L358 = kcg_true;
  outC->_L357 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L356 = kcg_true;
  outC->_L355.valid = kcg_true;
  outC->_L355.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L355.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L355.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L355.nid_mn = kcg_lit_int32(0);
  outC->_L354 = kcg_true;
  outC->action = mca_nop_RCM_Types_Pkg;
  outC->leaveHole = kcg_true;
  outC->enterHole = kcg_true;
  outC->disconnect = kcg_true;
  outC->connect = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->_L1_else_else_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->connectionStatus.valid = kcg_true;
  outC->connectionStatus.mobileDeviceNo = kcg_lit_int32(0);
  outC->connectionStatus.status = mcs_disconnected_RCM_Types_Pkg;
  outC->connectionStatus.nid_radio = kcg_lit_int64(0);
  outC->connectionStatus.settingUpConnectionHasFailed = kcg_true;
  outC->connectionStatus.connectionLost = kcg_true;
  outC->connectionStatus.isInRadioHole = kcg_true;
  outC->mobileConnectionCmd.valid = kcg_true;
  outC->mobileConnectionCmd.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileConnectionCmd.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd.nid_radio = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void connectingToTheRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

