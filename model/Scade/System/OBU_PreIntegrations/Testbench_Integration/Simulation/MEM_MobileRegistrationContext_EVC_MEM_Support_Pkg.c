/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext/ */
void MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg(
  /* MobileFromAPI/ */
  mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* mobileDeviceNo/ */
  kcg_int32 mobileDeviceNo,
  /* Registered_MN/ */
  NID_MN Registered_MN,
  outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L3 = mobileDeviceNo;
  outC->_L4 = outC->_L3 >= outC->_L5;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L1, MobileFromAPI);
  outC->_L13 = outC->_L1.valid;
  outC->_L12 = outC->_L13 & outC->_L4;
  outC->_L6 = mobileDeviceNo;
  outC->_L16 = mhs_nok_RCM_Types_Pkg;
  outC->_L15 = mhs_ok_RCM_Types_Pkg;
  /* _L14= */
  if (outC->_L13) {
    outC->_L14 = outC->_L15;
  }
  else {
    outC->_L14 = outC->_L16;
  }
  outC->_L18 = outC->_L1.connectionStatus;
  /* _L17=(EVC_MEM_Support_Pkg::getMobileRegStatus#1)/ */
  getMobileRegStatus_EVC_MEM_Support_Pkg(
    outC->_L18,
    &outC->Context_getMobileRegStatus_1);
  outC->_L17 = outC->Context_getMobileRegStatus_1.MobileRegistrationStatus;
  outC->_L19 = Registered_MN;
  outC->_L2.valid = outC->_L12;
  outC->_L2.mobileDeviceNo = outC->_L6;
  outC->_L2.healthStatus = outC->_L14;
  outC->_L2.status = outC->_L17;
  outC->_L2.nid_mn = outC->_L19;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->RegistrationContext,
    &outC->_L2);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L20,
    &outC->RegistrationContext);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->MobileRegistrationContext,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void MEM_MobileRegistrationContext_init_EVC_MEM_Support_Pkg(
  outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg *outC)
{
  outC->_L20.valid = kcg_true;
  outC->_L20.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L20.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L20.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L20.nid_mn = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = mhwc_notRegistered_MoRC_Pck;
  outC->_L17 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L16 = mhs_nok_RCM_Types_Pkg;
  outC->_L15 = mhs_nok_RCM_Types_Pkg;
  outC->_L14 = mhs_nok_RCM_Types_Pkg;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L2.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L2.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L2.nid_mn = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L1.settingUpConnectionHasFailed = kcg_true;
  outC->_L1.connectionLost = kcg_true;
  outC->RegistrationContext.valid = kcg_true;
  outC->RegistrationContext.mobileDeviceNo = kcg_lit_int32(0);
  outC->RegistrationContext.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->RegistrationContext.status = mrs_unregistered_RCM_Types_Pkg;
  outC->RegistrationContext.nid_mn = kcg_lit_int32(0);
  outC->MobileRegistrationContext.valid = kcg_true;
  outC->MobileRegistrationContext.mobileDeviceNo = kcg_lit_int32(0);
  outC->MobileRegistrationContext.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->MobileRegistrationContext.status = mrs_unregistered_RCM_Types_Pkg;
  outC->MobileRegistrationContext.nid_mn = kcg_lit_int32(0);
  /* _L17=(EVC_MEM_Support_Pkg::getMobileRegStatus#1)/ */
  getMobileRegStatus_init_EVC_MEM_Support_Pkg(
    &outC->Context_getMobileRegStatus_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_MobileRegistrationContext_reset_EVC_MEM_Support_Pkg(
  outC_MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg *outC)
{
  /* _L17=(EVC_MEM_Support_Pkg::getMobileRegStatus#1)/ */
  getMobileRegStatus_reset_EVC_MEM_Support_Pkg(
    &outC->Context_getMobileRegStatus_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

