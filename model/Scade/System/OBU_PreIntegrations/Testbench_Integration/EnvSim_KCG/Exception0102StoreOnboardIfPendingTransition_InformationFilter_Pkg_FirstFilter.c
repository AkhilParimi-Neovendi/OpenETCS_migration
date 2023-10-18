/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition/ */
void Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* inPendingL1Transition/ */
  kcg_bool inPendingL1Transition,
  /* inPendingL1L2Transition/ */
  kcg_bool inPendingL1L2Transition,
  outC_Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L6 = inPendingL1L2Transition;
  /* _L3=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#1)/ */
  Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
    outC->_L6,
    &outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_1);
  outC->_L3 =
    outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_1.outAcceptMessage;
  outC->_L4 =
    outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_1.outStoreInTransitionBuffer;
  _1_noname = outC->_L3;
  outC->_L5 = inPendingL1Transition;
  /* _L1=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#1)/ */
  Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
    outC->_L5,
    &outC->Context_Exception01StoreOnboardIfPendingL1Transition_1);
  outC->_L1 =
    outC->Context_Exception01StoreOnboardIfPendingL1Transition_1.outAcceptMessage;
  outC->_L2 =
    outC->Context_Exception01StoreOnboardIfPendingL1Transition_1.outStoreInTransitionBuffer;
  noname = outC->_L1;
  outC->_L8 = outC->_L2 | outC->_L4;
  outC->_L7 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L8;
  outC->outAcceptMessage = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception0102StoreOnboardIfPendingTransition_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
  /* _L1=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#1)/ */
  Exception01StoreOnboardIfPendingL1Transition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception01StoreOnboardIfPendingL1Transition_1);
  /* _L3=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#1)/ */
  Exception02StoreOnboardIfPendingL2L3Transition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception0102StoreOnboardIfPendingTransition_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC)
{
  /* _L1=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#1)/ */
  Exception01StoreOnboardIfPendingL1Transition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception01StoreOnboardIfPendingL1Transition_1);
  /* _L3=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#1)/ */
  Exception02StoreOnboardIfPendingL2L3Transition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

