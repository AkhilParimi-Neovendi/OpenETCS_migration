/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileConStatus_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::getMobileConStatus/ */
void getMobileConStatus_EVC_MEM_Support_Pkg(
  /* HW_ConnectionStatus/ */
  mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus,
  outC_getMobileConStatus_EVC_MEM_Support_Pkg *outC)
{
  outC->_L9 = mcs_connected_RCM_Types_Pkg;
  outC->_L7 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L5 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L3 = mcs_connecting_RCM_Types_Pkg;
  outC->_L1 = HW_ConnectionStatus;
  /* _L2= */
  switch (outC->_L1) {
    case mhwc_notRegistered_MoRC_Pck :
      outC->_L2 = outC->_L5;
      break;
    case mhwc_registered_MoRC_Pck :
      outC->_L2 = outC->_L5;
      break;
    case mhwc_connected_MoRC_Pck :
      outC->_L2 = outC->_L9;
      break;
    case mhwc_connecting_MoRC_Pck :
      outC->_L2 = outC->_L3;
      break;
    default :
      outC->_L2 = outC->_L7;
      break;
  }
  outC->MobileConnectionStatus = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void getMobileConStatus_init_EVC_MEM_Support_Pkg(
  outC_getMobileConStatus_EVC_MEM_Support_Pkg *outC)
{
  outC->_L9 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L7 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L5 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L3 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L2 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1 = mhwc_notRegistered_MoRC_Pck;
  outC->MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getMobileConStatus_reset_EVC_MEM_Support_Pkg(
  outC_getMobileConStatus_EVC_MEM_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getMobileConStatus_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

