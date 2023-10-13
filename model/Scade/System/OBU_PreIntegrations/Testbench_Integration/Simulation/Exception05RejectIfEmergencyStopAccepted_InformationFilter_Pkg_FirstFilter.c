/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted/ */
void Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
  /* inEmergencyStopAccepted/ */
  kcg_bool inEmergencyStopAccepted,
  outC_Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L1 = inEmergencyStopAccepted;
  outC->_L3 = !outC->_L1;
  outC->_L2 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception05RejectIfEmergencyStopAccepted_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception05RejectIfEmergencyStopAccepted_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

