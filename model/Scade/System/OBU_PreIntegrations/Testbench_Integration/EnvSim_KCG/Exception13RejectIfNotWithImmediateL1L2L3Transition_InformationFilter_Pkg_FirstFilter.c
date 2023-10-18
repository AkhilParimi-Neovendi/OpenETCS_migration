/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition/ */
void Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter(
  /* inL1L2L3TransitionInMessage/ */
  kcg_bool inL1L2L3TransitionInMessage,
  outC_Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_false;
  outC->_L1 = inL1L2L3TransitionInMessage;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception13RejectIfNotWithImmediateL1L2L3Transition_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception13RejectIfNotWithImmediateL1L2L3Transition_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

