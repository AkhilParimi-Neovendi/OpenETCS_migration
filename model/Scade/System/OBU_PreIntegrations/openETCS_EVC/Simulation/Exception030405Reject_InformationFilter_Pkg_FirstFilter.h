/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_
#define _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception04RejectIfSPPAnd_InformationFilter_Pkg_FirstFilter.h"
#include "Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter.h"
#include "Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"

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
  outC_Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter /* _L1=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#1)/ */ Context_Exception03RejectIfPendingAckOfTrainData_1;
  outC_Exception04RejectIfSPPAnd_InformationFilter_Pkg_FirstFilter /* _L3=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */ Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1;
  outC_Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter /* _L5=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#1)/ */ Context_Exception05RejectIfEmergencyStopAccepted_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
} outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception030405Reject/ */
extern void Exception030405Reject_InformationFilter_Pkg_FirstFilter(
  /* inPendingAckOfTrainData/ */
  kcg_bool inPendingAckOfTrainData,
  /* inSPPAndGradientOnBoard/ */
  kcg_bool inSPPAndGradientOnBoard,
  /* inMACoverNotFullLength/ */
  kcg_bool inMACoverNotFullLength,
  /* inEmergencyStopAccepted/ */
  kcg_bool inEmergencyStopAccepted,
  outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Exception030405Reject_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Exception030405Reject_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception030405Reject_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

