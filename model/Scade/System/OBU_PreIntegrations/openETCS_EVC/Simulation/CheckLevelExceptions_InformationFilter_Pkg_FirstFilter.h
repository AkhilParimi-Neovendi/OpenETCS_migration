/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_
#define _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception030405Reject_InformationFilter_Pkg_FirstFilter.h"
#include "Exception0102StoreOnboard_InformationFilter_Pkg_FirstFilter.h"
#include "Exception04RejectIfSPPAnd_InformationFilter_Pkg_FirstFilter.h"
#include "Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter.h"
#include "Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.h"
#include "Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"
#include "Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter.h"
#include "Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter.h"
#include "Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
#include "Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter.h"
#include "Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"
#include "Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
#include "Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outAccept/ */ outAccept;
  kcg_bool /* outStoreInTransitionBuffer/ */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter /* _L30=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#2)/ */ Context_Exception01StoreOnboardIfPendingL1Transition_2;
  outC_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter /* _L34=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#2)/ */ Context_Exception02StoreOnboardIfPendingL2L3Transition_2;
  outC_Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter /* _L36=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#2)/ */ Context_Exception03RejectIfPendingAckOfTrainData_2;
  outC_Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter /* _L38=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#2)/ */ Context_Exception05RejectIfEmergencyStopAccepted_2;
  outC_Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter /* _L40=(InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition#2)/ */ Context_Exception06StoreOnboardIfPendingNTCTransition_2;
  outC_Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter /* _L65=(InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition#1)/ */ Context_Exception07RejectIfNoPendingNTCTransition_1;
  outC_Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter /* _L111=(InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored#1)/ */ Context_Exception09RejectIfNoL2L3TransitionIsStored_1;
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter /* _L113=(InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition#1)/ */ Context_Exception11RejectIfPendingTransition_1;
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter /* _L115=(InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending#1)/ */ Context_Exception12RejectIfTextMessageAckPending_1;
  outC_Exception04RejectIfSPPAnd_InformationFilter_Pkg_FirstFilter /* _L127=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */ Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1;
  outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter /* _L137=(InformationFilter_Pkg::FirstFilter::Exception030405Reject#1)/ */ Context_Exception030405Reject_1;
  outC_Exception0102StoreOnboard_InformationFilter_Pkg_FirstFilter /* _L135=(InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition#1)/ */ Context_Exception0102StoreOnboardIfPendingTransition_1;
  outC_Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter /* _L117=(InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition#1)/ */ Context_Exception13RejectIfNotWithImmediateL1L2L3Transition_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* e01m/ */ e01m;
  kcg_bool /* e01b/ */ e01b;
  kcg_bool /* e02m/ */ e02m;
  kcg_bool /* e02b/ */ e02b;
  kcg_bool /* e03m/ */ e03m;
  kcg_bool /* e03b/ */ e03b;
  kcg_bool /* e05m/ */ e05m;
  kcg_bool /* e05b/ */ e05b;
  kcg_bool /* e06m/ */ e06m;
  kcg_bool /* e06b/ */ e06b;
  kcg_bool /* e07m/ */ e07m;
  kcg_bool /* e07b/ */ e07b;
  kcg_bool /* e09m/ */ e09m;
  kcg_bool /* e09b/ */ e09b;
  kcg_bool /* e11m/ */ e11m;
  kcg_bool /* e11b/ */ e11b;
  kcg_bool /* e12m/ */ e12m;
  kcg_bool /* e12b/ */ e12b;
  kcg_bool /* e04b/ */ e04b;
  kcg_bool /* e04m/ */ e04m;
  kcg_bool /* e13m/ */ e13m;
  kcg_bool /* e13b/ */ e13b;
  kcg_bool /* e0102m/ */ e0102m;
  kcg_bool /* e0102b/ */ e0102b;
  kcg_bool /* e030405m/ */ e030405m;
  kcg_bool /* e030405b/ */ e030405b;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L65/ */ _L65;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* _L75/ */ _L75;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L104/ */ _L104;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L111/ */ _L111;
  kcg_bool /* _L114/ */ _L114;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L116/ */ _L116;
  kcg_bool /* _L115/ */ _L115;
  kcg_bool /* _L118/ */ _L118;
  kcg_bool /* _L117/ */ _L117;
  kcg_bool /* _L119/ */ _L119;
  kcg_int32 /* _L120/ */ _L120;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L123/ */ _L123;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L126/ */ _L126;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L128/ */ _L128;
  kcg_bool /* _L130/ */ _L130;
  kcg_bool /* _L131/ */ _L131;
  kcg_bool /* _L132/ */ _L132;
  kcg_bool /* _L133/ */ _L133;
  kcg_bool /* _L134/ */ _L134;
  kcg_bool /* _L136/ */ _L136;
  kcg_bool /* _L135/ */ _L135;
  kcg_bool /* _L138/ */ _L138;
  kcg_bool /* _L137/ */ _L137;
  kcg_bool /* _L139/ */ _L139;
  kcg_bool /* _L141/ */ _L141;
  kcg_bool /* _L142/ */ _L142;
  kcg_bool /* _L143/ */ _L143;
  kcg_bool /* _L144/ */ _L144;
  kcg_bool /* _L145/ */ _L145;
  kcg_bool /* _L146/ */ _L146;
  kcg_bool /* _L147/ */ _L147;
  kcg_bool /* _L148/ */ _L148;
  kcg_bool /* _L149/ */ _L149;
  kcg_bool /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
  kcg_bool /* _L152/ */ _L152;
} outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions/ */
extern void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
  /* inAction/ */
  LevelDecisionTableActionKind_DataDictionary_Pkg inAction,
  /* inPendingL1Transition/ */
  kcg_bool inPendingL1Transition,
  /* inPendingL2L3Transition/ */
  kcg_bool inPendingL2L3Transition,
  /* inPendingAckOfTrainData/ */
  kcg_bool inPendingAckOfTrainData,
  /* inEmergencyBrakeActive/ */
  kcg_bool inEmergencyBrakeActive,
  /* inLastAckTextMessageId/ */
  kcg_int32 inLastAckTextMessageId,
  /* inPendingNTCTransition/ */
  kcg_bool inPendingNTCTransition,
  /* inSPPAndGradientOnBoard/ */
  kcg_bool inSPPAndGradientOnBoard,
  /* MACoverNotFullLength/ */
  kcg_bool MACoverNotFullLength,
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckLevelExceptions_reset_InformationFilter_Pkg_FirstFilter(
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckLevelExceptions_init_InformationFilter_Pkg_FirstFilter(
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

