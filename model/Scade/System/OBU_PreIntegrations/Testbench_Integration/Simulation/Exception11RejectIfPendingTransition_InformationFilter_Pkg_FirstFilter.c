/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition/ */
void Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* inLevelTransitionInMessage/ */
  kcg_bool inLevelTransitionInMessage,
  /* inPendingL1Transtion/ */
  kcg_bool inPendingL1Transtion,
  /* inPendingL2L3Transition/ */
  kcg_bool inPendingL2L3Transition,
  outC_Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L8 = inPendingL2L3Transition;
  outC->_L7 = inPendingL1Transtion;
  outC->_L6 = inLevelTransitionInMessage;
  outC->_L10 = outC->_L6 | outC->_L7 | outC->_L8;
  outC->_L11 = !outC->_L10;
  outC->_L2 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception11RejectIfPendingTransition_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L2 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception11RejectIfPendingTransition_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

