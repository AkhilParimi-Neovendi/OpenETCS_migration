/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter_H_
#define _Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outAcceptMessage/ */ outAcceptMessage;
  kcg_bool /* outStoreInTransitionBuffer/ */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
} outC_Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition/ */
extern void Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
  /* inPendingL2L3Transition/ */
  kcg_bool inPendingL2L3Transition,
  outC_Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Exception02StoreOnboardIfPendingL2L3Transition_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Exception02StoreOnboardIfPendingL2L3Transition_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

