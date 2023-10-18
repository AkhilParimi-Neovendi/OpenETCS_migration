/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_
#define _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outAcceptMessage/ */ outAcceptMessage;
  kcg_bool /* outStoreInTransitionBuffer/ */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter /* _L1=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#1)/ */ Context_Exception01StoreOnboardIfPendingL1Transition_1;
  outC_Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter /* _L3=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#1)/ */ Context_Exception02StoreOnboardIfPendingL2L3Transition_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
} outC_Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition/ */
extern void Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* inPendingL1Transition/ */
  kcg_bool inPendingL1Transition,
  /* inPendingL1L2Transition/ */
  kcg_bool inPendingL1L2Transition,
  outC_Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Exception0102StoreOnboardIfPendingTransition_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Exception0102StoreOnboardIfPendingTransition_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

