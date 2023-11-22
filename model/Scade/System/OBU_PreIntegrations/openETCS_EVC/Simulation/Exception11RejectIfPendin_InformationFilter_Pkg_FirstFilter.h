/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter_H_
#define _Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter_H_

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
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition/ */
extern void Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter(
  /* inLevelTransitionInMessage/ */
  kcg_bool inLevelTransitionInMessage,
  /* inPendingL1Transtion/ */
  kcg_bool inPendingL1Transtion,
  /* inPendingL2L3Transition/ */
  kcg_bool inPendingL2L3Transition,
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Exception11RejectIfPendin_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Exception11RejectIfPendin_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

