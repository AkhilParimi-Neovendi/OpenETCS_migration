/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition/ */
void Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter(
  /* inPendingL2L3Transition/ */
  kcg_bool inPendingL2L3Transition,
  outC_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_false;
  outC->_L1 = inPendingL2L3Transition;
  outC->outStoreInTransitionBuffer = outC->_L1;
  outC->outAcceptMessage = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception02StoreOnboardIf_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception02StoreOnboardIf_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

