/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored/ */
void Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
  /* inL2L3TransitionInTransitionBuffer/ */
  kcg_bool inL2L3TransitionInTransitionBuffer,
  outC_Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_false;
  outC->_L1 = inL2L3TransitionInTransitionBuffer;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception09RejectIfNoL2L3TransitionIsStored_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception09RejectIfNoL2L3TransitionIsStored_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

