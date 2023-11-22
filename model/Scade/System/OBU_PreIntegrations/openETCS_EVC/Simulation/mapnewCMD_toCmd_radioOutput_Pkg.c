/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapnewCMD_toCmd_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapnewCMD_toCmd/ */
void mapnewCMD_toCmd_radioOutput_Pkg(
  /* mobileConnectionCMD/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* mobileRegistrationCMD/ */
  mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  /* toRTMCMD/ */
  cmdRadioUnit_T_API_RadioCommunication_Pkg toRTMCMD_partial;
  /* nidMN/ */
  NID_MN nidMN_partial;
  /* nidRadio/ */
  NID_RADIO nidRadio_partial;
  /* toRTMCMD/ */
  cmdRadioUnit_T_API_RadioCommunication_Pkg _1_toRTMCMD_partial;
  /* nidMN/ */
  NID_MN _2_nidMN_partial;
  /* nidRadio/ */
  NID_RADIO _3_nidRadio_partial;
  /* nidRadio/ */
  NID_RADIO _4_nidRadio_partial;
  /* nidMN/ */
  NID_MN _5_nidMN_partial;
  /* toRTMCMD/ */
  cmdRadioUnit_T_API_RadioCommunication_Pkg _6_toRTMCMD_partial;
  /* nidRadio/ */
  NID_RADIO _7_nidRadio_partial;
  /* nidMN/ */
  NID_MN _8_nidMN_partial;
  /* toRTMCMD/ */
  cmdRadioUnit_T_API_RadioCommunication_Pkg _9_toRTMCMD_partial;
  /* nidRadio/ */
  NID_RADIO last_nidRadio;
  /* nidMN/ */
  NID_MN last_nidMN;

  last_nidRadio = outC->nidRadio;
  last_nidMN = outC->nidMN;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L36,
    mobileRegistrationCMD);
  outC->_L38 = outC->_L36.valid;
  outC->_L40 = !outC->_L38;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&outC->_L35, mobileConnectionCMD);
  outC->_L37 = outC->_L35.valid;
  outC->_L39 = outC->_L37 & outC->_L40;
  outC->doConnection = outC->_L39;
  outC->IfBlock1_clock = outC->doConnection;
  outC->doRegistration = outC->_L38;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &outC->_L9_then_IfBlock1,
      mobileConnectionCMD);
    outC->_L10_then_IfBlock1 = outC->_L9_then_IfBlock1.nid_radio;
    nidRadio_partial = outC->_L10_then_IfBlock1;
    outC->nidRadio = nidRadio_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->doRegistration;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L15_then_else_IfBlock1 = last_nidRadio;
      _7_nidRadio_partial = outC->_L15_then_else_IfBlock1;
      _3_nidRadio_partial = _7_nidRadio_partial;
    }
    else {
      outC->_L30_else_else_IfBlock1 = last_nidRadio;
      _4_nidRadio_partial = outC->_L30_else_else_IfBlock1;
      _3_nidRadio_partial = _4_nidRadio_partial;
    }
    outC->nidRadio = _3_nidRadio_partial;
  }
  outC->_L42 = outC->nidRadio;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L11_then_IfBlock1 = last_nidMN;
    nidMN_partial = outC->_L11_then_IfBlock1;
    outC->nidMN = nidMN_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
        &outC->_L13_then_else_IfBlock1,
        mobileRegistrationCMD);
      outC->_L14_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.network_id;
      _8_nidMN_partial = outC->_L14_then_else_IfBlock1;
      _2_nidMN_partial = _8_nidMN_partial;
    }
    else {
      outC->_L29_else_else_IfBlock1 = last_nidMN;
      _5_nidMN_partial = outC->_L29_else_else_IfBlock1;
      _2_nidMN_partial = _5_nidMN_partial;
    }
    outC->nidMN = _2_nidMN_partial;
  }
  outC->_L41 = outC->nidMN;
  outC->outMN = outC->_L41;
  outC->outRadio = outC->_L42;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &outC->_L7_then_IfBlock1,
      mobileConnectionCMD);
    outC->_L8_then_IfBlock1 = outC->_L7_then_IfBlock1.action;
    outC->_L6_then_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
    outC->_L5_then_IfBlock1 = cmdr_disconnection_request_API_RadioCommunication_Pkg;
    outC->_L3_then_IfBlock1 = cmdr_connection_request_API_RadioCommunication_Pkg;
    /* IfBlock1:then:_L2= */
    switch (outC->_L8_then_IfBlock1) {
      case mca_connect_RCM_Types_Pkg :
        outC->_L2_then_IfBlock1 = outC->_L3_then_IfBlock1;
        break;
      case mca_disconnect_RCM_Types_Pkg :
        outC->_L2_then_IfBlock1 = outC->_L5_then_IfBlock1;
        break;
      default :
        outC->_L2_then_IfBlock1 = outC->_L6_then_IfBlock1;
        break;
    }
    toRTMCMD_partial = outC->_L2_then_IfBlock1;
    outC->toRTMCMD = toRTMCMD_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L11_then_else_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
      kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
        &outC->_L10_then_else_IfBlock1,
        mobileRegistrationCMD);
      outC->_L9_then_else_IfBlock1 =
        cmdr_networkUnregister_API_RadioCommunication_Pkg;
      outC->_L6_then_else_IfBlock1 = cmdr_networkRegister_API_RadioCommunication_Pkg;
      outC->_L7_then_else_IfBlock1 = outC->_L10_then_else_IfBlock1.action;
      /* IfBlock1:else:then:_L8= */
      switch (outC->_L7_then_else_IfBlock1) {
        case mra_register_RCM_Types_Pkg :
          outC->_L8_then_else_IfBlock1 = outC->_L6_then_else_IfBlock1;
          break;
        case mra_unregister_RCM_Types_Pkg :
          outC->_L8_then_else_IfBlock1 = outC->_L9_then_else_IfBlock1;
          break;
        default :
          outC->_L8_then_else_IfBlock1 = outC->_L11_then_else_IfBlock1;
          break;
      }
      _9_toRTMCMD_partial = outC->_L8_then_else_IfBlock1;
      _1_toRTMCMD_partial = _9_toRTMCMD_partial;
    }
    else {
      outC->_L28_else_else_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
      _6_toRTMCMD_partial = outC->_L28_else_else_IfBlock1;
      _1_toRTMCMD_partial = _6_toRTMCMD_partial;
    }
    outC->toRTMCMD = _1_toRTMCMD_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void mapnewCMD_toCmd_init_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  outC->_L42 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int32(0);
  outC->_L35.valid = kcg_true;
  outC->_L35.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L35.action = mca_nop_RCM_Types_Pkg;
  outC->_L35.nid_radio = kcg_lit_int64(0);
  outC->_L36.valid = kcg_true;
  outC->_L36.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L36.action = mra_nop_RCM_Types_Pkg;
  outC->_L36.network_id = kcg_lit_int32(0);
  outC->_L37 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L40 = kcg_true;
  outC->doRegistration = kcg_true;
  outC->doConnection = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L15_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L14_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.valid = kcg_true;
  outC->_L13_then_else_IfBlock1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.action = mra_nop_RCM_Types_Pkg;
  outC->_L13_then_else_IfBlock1.network_id = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L7_then_else_IfBlock1 = mra_nop_RCM_Types_Pkg;
  outC->_L8_then_else_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L9_then_else_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L10_then_else_IfBlock1.valid = kcg_true;
  outC->_L10_then_else_IfBlock1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.action = mra_nop_RCM_Types_Pkg;
  outC->_L10_then_else_IfBlock1.network_id = kcg_lit_int32(0);
  outC->_L11_then_else_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L30_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L29_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L28_else_else_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L5_then_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L3_then_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L2_then_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L7_then_IfBlock1.valid = kcg_true;
  outC->_L7_then_IfBlock1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1.action = mca_nop_RCM_Types_Pkg;
  outC->_L7_then_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1 = mca_nop_RCM_Types_Pkg;
  outC->_L9_then_IfBlock1.valid = kcg_true;
  outC->_L9_then_IfBlock1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.action = mca_nop_RCM_Types_Pkg;
  outC->_L9_then_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1 = kcg_lit_int32(0);
  outC->outMN = kcg_lit_int32(0);
  outC->outRadio = kcg_lit_int64(0);
  outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->nidMN = kcg_lit_int32(0);
  outC->nidRadio = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapnewCMD_toCmd_reset_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  outC->nidMN = kcg_lit_int32(0);
  outC->nidRadio = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapnewCMD_toCmd_radioOutput_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

