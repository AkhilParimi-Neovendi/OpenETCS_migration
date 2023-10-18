/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter_H_
#define _Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter_H_

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
} outC_Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored/ */
extern void Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
  /* inL2L3TransitionInTransitionBuffer/ */
  kcg_bool inL2L3TransitionInTransitionBuffer,
  outC_Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Exception09RejectIfNoL2L3TransitionIsStored_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Exception09RejectIfNoL2L3TransitionIsStored_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

