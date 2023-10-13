/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_MobileConnectionContext_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext/ */
void MEM_MobileConnectionContext_EVC_MEM_Support_Pkg(
  /* MobileFromAPI/ */
  mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* mobileDeviceNo/ */
  kcg_int64 mobileDeviceNo,
  /* Radio_ID/ */
  NID_RADIO Radio_ID,
  /* inRadioHole/ */
  kcg_bool inRadioHole,
  outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg *outC)
{
  outC->_L5 = kcg_lit_int64(0);
  outC->_L3 = mobileDeviceNo;
  outC->_L4 = outC->_L3 >= outC->_L5;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L1, MobileFromAPI);
  outC->_L13 = outC->_L1.valid;
  outC->_L12 = outC->_L13 & outC->_L4;
  outC->_L6 = mobileDeviceNo;
  outC->_L25 = outC->_L1.connectionStatus;
  /* _L24=(EVC_MEM_Support_Pkg::getMobileConStatus#1)/ */
  getMobileConStatus_EVC_MEM_Support_Pkg(
    outC->_L25,
    &outC->Context_getMobileConStatus_1);
  outC->_L24 = outC->Context_getMobileConStatus_1.MobileConnectionStatus;
  outC->_L30 = Radio_ID;
  outC->_L28 = outC->_L1.settingUpConnectionHasFailed;
  outC->_L26 = outC->_L1.connectionLost;
  outC->_L27 = inRadioHole;
  outC->_L21.valid = outC->_L12;
  outC->_L21.mobileDeviceNo = outC->_L6;
  outC->_L21.status = outC->_L24;
  outC->_L21.nid_radio = outC->_L30;
  outC->_L21.settingUpConnectionHasFailed = outC->_L28;
  outC->_L21.connectionLost = outC->_L26;
  outC->_L21.isInRadioHole = outC->_L27;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->ConnectionContext,
    &outC->_L21);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L31,
    &outC->ConnectionContext);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->MobileConnectionContext,
    &outC->_L31);
}

#ifndef KCG_USER_DEFINED_INIT
void MEM_MobileConnectionContext_init_EVC_MEM_Support_Pkg(
  outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg *outC)
{
  outC->_L31.valid = kcg_true;
  outC->_L31.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L31.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L31.nid_radio = kcg_lit_int64(0);
  outC->_L31.settingUpConnectionHasFailed = kcg_true;
  outC->_L31.connectionLost = kcg_true;
  outC->_L31.isInRadioHole = kcg_true;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = mhwc_notRegistered_MoRC_Pck;
  outC->_L24 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L21.valid = kcg_true;
  outC->_L21.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L21.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L21.nid_radio = kcg_lit_int64(0);
  outC->_L21.settingUpConnectionHasFailed = kcg_true;
  outC->_L21.connectionLost = kcg_true;
  outC->_L21.isInRadioHole = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L1.settingUpConnectionHasFailed = kcg_true;
  outC->_L1.connectionLost = kcg_true;
  outC->ConnectionContext.valid = kcg_true;
  outC->ConnectionContext.mobileDeviceNo = kcg_lit_int64(0);
  outC->ConnectionContext.status = mcs_disconnected_RCM_Types_Pkg;
  outC->ConnectionContext.nid_radio = kcg_lit_int64(0);
  outC->ConnectionContext.settingUpConnectionHasFailed = kcg_true;
  outC->ConnectionContext.connectionLost = kcg_true;
  outC->ConnectionContext.isInRadioHole = kcg_true;
  outC->MobileConnectionContext.valid = kcg_true;
  outC->MobileConnectionContext.mobileDeviceNo = kcg_lit_int64(0);
  outC->MobileConnectionContext.status = mcs_disconnected_RCM_Types_Pkg;
  outC->MobileConnectionContext.nid_radio = kcg_lit_int64(0);
  outC->MobileConnectionContext.settingUpConnectionHasFailed = kcg_true;
  outC->MobileConnectionContext.connectionLost = kcg_true;
  outC->MobileConnectionContext.isInRadioHole = kcg_true;
  /* _L24=(EVC_MEM_Support_Pkg::getMobileConStatus#1)/ */
  getMobileConStatus_init_EVC_MEM_Support_Pkg(
    &outC->Context_getMobileConStatus_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_MobileConnectionContext_reset_EVC_MEM_Support_Pkg(
  outC_MEM_MobileConnectionContext_EVC_MEM_Support_Pkg *outC)
{
  /* _L24=(EVC_MEM_Support_Pkg::getMobileConStatus#1)/ */
  getMobileConStatus_reset_EVC_MEM_Support_Pkg(
    &outC->Context_getMobileConStatus_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_MobileConnectionContext_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

