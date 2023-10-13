/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions/ */
void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
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
  kcg_int64 inLastAckTextMessageId,
  /* inPendingNTCTransition/ */
  kcg_bool inPendingNTCTransition,
  /* inSPPAndGradientOnBoard/ */
  kcg_bool inSPPAndGradientOnBoard,
  /* MACoverNotFullLength/ */
  kcg_bool MACoverNotFullLength,
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L119 = kcg_false;
  /* _L117=(InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition#1)/ */
  Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter(
    outC->_L119,
    &outC->Context_Exception13RejectIfNotWithImmediateL1L2L3Transition_1);
  outC->_L117 =
    outC->Context_Exception13RejectIfNotWithImmediateL1L2L3Transition_1.outAcceptMessage;
  outC->_L118 =
    outC->Context_Exception13RejectIfNotWithImmediateL1L2L3Transition_1.outStoreInTransitionBuffer;
  outC->e13m = outC->_L117;
  outC->_L152 = outC->e13m;
  outC->e13b = outC->_L118;
  outC->_L151 = outC->e13b;
  outC->_L150 = inEmergencyBrakeActive;
  outC->_L149 = MACoverNotFullLength;
  outC->_L148 = inSPPAndGradientOnBoard;
  outC->_L147 = inPendingAckOfTrainData;
  outC->_L146 = inPendingL2L3Transition;
  outC->_L145 = inPendingL1Transition;
  /* _L135=(InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition#1)/ */
  Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
    outC->_L145,
    outC->_L146,
    &outC->Context_Exception0102StoreOnboardIfPendingTransition_1);
  outC->_L135 =
    outC->Context_Exception0102StoreOnboardIfPendingTransition_1.outAcceptMessage;
  outC->_L136 =
    outC->Context_Exception0102StoreOnboardIfPendingTransition_1.outStoreInTransitionBuffer;
  outC->e0102m = outC->_L135;
  outC->_L144 = outC->e0102m;
  /* _L137=(InformationFilter_Pkg::FirstFilter::Exception030405Reject#1)/ */
  Exception030405Reject_InformationFilter_Pkg_FirstFilter(
    outC->_L147,
    outC->_L148,
    outC->_L149,
    outC->_L150,
    &outC->Context_Exception030405Reject_1);
  outC->_L137 = outC->Context_Exception030405Reject_1.outAcceptMessage;
  outC->_L138 = outC->Context_Exception030405Reject_1.outStoreInTransitionBuffer;
  outC->e030405m = outC->_L137;
  outC->_L143 = outC->e030405m;
  outC->e0102b = outC->_L136;
  outC->_L142 = outC->e0102b;
  outC->e030405b = outC->_L138;
  outC->_L141 = outC->e030405b;
  outC->_L139 = kcg_false;
  outC->_L134 = kcg_false;
  outC->_L133 = MACoverNotFullLength;
  outC->_L132 = inSPPAndGradientOnBoard;
  /* _L127=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
    outC->_L132,
    outC->_L133,
    &outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1);
  outC->_L127 =
    outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1.outAcceptMessage;
  outC->_L128 =
    outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1.outStoreInTransitionBuffer;
  outC->e04b = outC->_L128;
  outC->_L131 = outC->e04b;
  outC->e04m = outC->_L127;
  outC->_L130 = outC->e04m;
  outC->_L120 = kcg_lit_int64(0);
  outC->_L28 = inLastAckTextMessageId;
  /* _L115=(InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending#1)/ */
  Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
    outC->_L120,
    outC->_L28,
    &outC->Context_Exception12RejectIfTextMessageAckPending_1);
  outC->_L115 =
    outC->Context_Exception12RejectIfTextMessageAckPending_1.outAcceptMessage;
  outC->_L116 =
    outC->Context_Exception12RejectIfTextMessageAckPending_1.outStoreInTransitionBuffer;
  outC->e12b = outC->_L116;
  outC->_L126 = outC->e12b;
  outC->e12m = outC->_L115;
  outC->_L125 = outC->e12m;
  outC->_L24 = inPendingL1Transition;
  outC->_L25 = inPendingL2L3Transition;
  /* _L113=(InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition#1)/ */
  Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter(
    outC->_L119,
    outC->_L24,
    outC->_L25,
    &outC->Context_Exception11RejectIfPendingTransition_1);
  outC->_L113 =
    outC->Context_Exception11RejectIfPendingTransition_1.outAcceptMessage;
  outC->_L114 =
    outC->Context_Exception11RejectIfPendingTransition_1.outStoreInTransitionBuffer;
  outC->e11m = outC->_L113;
  outC->_L124 = outC->e11m;
  outC->e11b = outC->_L114;
  outC->_L123 = outC->e11b;
  /* _L111=(InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored#1)/ */
  Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
    outC->_L119,
    &outC->Context_Exception09RejectIfNoL2L3TransitionIsStored_1);
  outC->_L111 =
    outC->Context_Exception09RejectIfNoL2L3TransitionIsStored_1.outAcceptMessage;
  outC->_L112 =
    outC->Context_Exception09RejectIfNoL2L3TransitionIsStored_1.outStoreInTransitionBuffer;
  outC->e09b = outC->_L112;
  outC->_L122 = outC->e09b;
  outC->e09m = outC->_L111;
  outC->_L121 = outC->e09m;
  outC->_L104 = kcg_false;
  outC->_L103 = kcg_false;
  outC->_L29 = inPendingNTCTransition;
  /* _L65=(InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition#1)/ */
  Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    outC->_L29,
    &outC->Context_Exception07RejectIfNoPendingNTCTransition_1);
  outC->_L65 =
    outC->Context_Exception07RejectIfNoPendingNTCTransition_1.outAcceptMessage;
  outC->_L66 =
    outC->Context_Exception07RejectIfNoPendingNTCTransition_1.outStoreInTransitionBuffer;
  outC->e07b = outC->_L66;
  outC->_L100 = outC->e07b;
  /* _L40=(InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition#2)/ */
  Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    outC->_L29,
    &outC->Context_Exception06StoreOnboardIfPendingNTCTransition_2);
  outC->_L40 =
    outC->Context_Exception06StoreOnboardIfPendingNTCTransition_2.outAcceptMessage;
  outC->_L41 =
    outC->Context_Exception06StoreOnboardIfPendingNTCTransition_2.outStoreInTransitionBuffer;
  outC->e06b = outC->_L41;
  outC->_L99 = outC->e06b;
  outC->_L27 = inEmergencyBrakeActive;
  /* _L38=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#2)/ */
  Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
    outC->_L27,
    &outC->Context_Exception05RejectIfEmergencyStopAccepted_2);
  outC->_L38 =
    outC->Context_Exception05RejectIfEmergencyStopAccepted_2.outAcceptMessage;
  outC->_L39 =
    outC->Context_Exception05RejectIfEmergencyStopAccepted_2.outStoreInTransitionBuffer;
  outC->e05b = outC->_L39;
  outC->_L98 = outC->e05b;
  outC->_L26 = inPendingAckOfTrainData;
  /* _L36=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#2)/ */
  Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
    outC->_L26,
    &outC->Context_Exception03RejectIfPendingAckOfTrainData_2);
  outC->_L36 =
    outC->Context_Exception03RejectIfPendingAckOfTrainData_2.outAcceptMessage;
  outC->_L37 =
    outC->Context_Exception03RejectIfPendingAckOfTrainData_2.outStoreInTransitionBuffer;
  outC->e03b = outC->_L37;
  outC->_L97 = outC->e03b;
  /* _L34=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#2)/ */
  Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
    outC->_L25,
    &outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_2);
  outC->_L34 =
    outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_2.outAcceptMessage;
  outC->_L35 =
    outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_2.outStoreInTransitionBuffer;
  outC->e02b = outC->_L35;
  outC->_L96 = outC->e02b;
  /* _L30=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#2)/ */
  Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
    outC->_L24,
    &outC->Context_Exception01StoreOnboardIfPendingL1Transition_2);
  outC->_L30 =
    outC->Context_Exception01StoreOnboardIfPendingL1Transition_2.outAcceptMessage;
  outC->_L31 =
    outC->Context_Exception01StoreOnboardIfPendingL1Transition_2.outStoreInTransitionBuffer;
  outC->e01b = outC->_L31;
  outC->_L95 = outC->e01b;
  outC->_L94 = kcg_false;
  outC->_L93 = kcg_false;
  outC->_L92 = kcg_false;
  outC->_L90 = kcg_false;
  outC->_L85 = kcg_false;
  outC->_L84 = kcg_false;
  outC->e07m = outC->_L65;
  outC->_L82 = outC->e07m;
  outC->e06m = outC->_L40;
  outC->_L81 = outC->e06m;
  outC->e05m = outC->_L38;
  outC->_L80 = outC->e05m;
  outC->e03m = outC->_L36;
  outC->_L79 = outC->e03m;
  outC->e02m = outC->_L34;
  outC->_L78 = outC->e02m;
  outC->e01m = outC->_L30;
  outC->_L77 = outC->e01m;
  outC->_L76 = inAction;
  /* _L33= */
  switch (outC->_L76) {
    case LD_Accept_DataDictionary_Pkg :
      outC->_L33 = outC->_L92;
      break;
    case LD_Reject_DataDictionary_Pkg :
      outC->_L33 = outC->_L93;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      outC->_L33 = outC->_L94;
      break;
    case LD_01StoreIfPendingL1Transition_DataDictionary_Pkg :
      outC->_L33 = outC->_L95;
      break;
    case LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      outC->_L33 = outC->_L96;
      break;
    case LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      outC->_L33 = outC->_L97;
      break;
    case LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg :
      outC->_L33 = outC->_L131;
      break;
    case LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      outC->_L33 = outC->_L98;
      break;
    case LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg :
      outC->_L33 = outC->_L99;
      break;
    case LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      outC->_L33 = outC->_L100;
      break;
    case LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg :
      outC->_L33 = outC->_L103;
      break;
    case LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      outC->_L33 = outC->_L122;
      break;
    case LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg :
      outC->_L33 = outC->_L104;
      break;
    case LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg :
      outC->_L33 = outC->_L123;
      break;
    case LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg :
      outC->_L33 = outC->_L126;
      break;
    case LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg :
      outC->_L33 = outC->_L151;
      break;
    case LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg :
      outC->_L33 = outC->_L142;
      break;
    case LD_030405Reject_DataDictionary_Pkg :
      outC->_L33 = outC->_L141;
      break;
    case LD_Invalid_DataDictionary_Pkg :
      outC->_L33 = outC->_L139;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->outStoreInTransitionBuffer = outC->_L33;
  outC->_L75 = inAction;
  outC->_L14 = kcg_false;
  outC->_L13 = kcg_true;
  /* _L11= */
  switch (outC->_L75) {
    case LD_Accept_DataDictionary_Pkg :
      outC->_L11 = outC->_L13;
      break;
    case LD_Reject_DataDictionary_Pkg :
      outC->_L11 = outC->_L14;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      outC->_L11 = outC->_L84;
      break;
    case LD_01StoreIfPendingL1Transition_DataDictionary_Pkg :
      outC->_L11 = outC->_L77;
      break;
    case LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      outC->_L11 = outC->_L78;
      break;
    case LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      outC->_L11 = outC->_L79;
      break;
    case LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg :
      outC->_L11 = outC->_L130;
      break;
    case LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      outC->_L11 = outC->_L80;
      break;
    case LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg :
      outC->_L11 = outC->_L81;
      break;
    case LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      outC->_L11 = outC->_L82;
      break;
    case LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg :
      outC->_L11 = outC->_L90;
      break;
    case LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      outC->_L11 = outC->_L121;
      break;
    case LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg :
      outC->_L11 = outC->_L85;
      break;
    case LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg :
      outC->_L11 = outC->_L124;
      break;
    case LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg :
      outC->_L11 = outC->_L125;
      break;
    case LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg :
      outC->_L11 = outC->_L152;
      break;
    case LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg :
      outC->_L11 = outC->_L144;
      break;
    case LD_030405Reject_DataDictionary_Pkg :
      outC->_L11 = outC->_L143;
      break;
    case LD_Invalid_DataDictionary_Pkg :
      outC->_L11 = outC->_L134;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->outAccept = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckLevelExceptions_init_InformationFilter_Pkg_FirstFilter(
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L152 = kcg_true;
  outC->_L151 = kcg_true;
  outC->_L150 = kcg_true;
  outC->_L149 = kcg_true;
  outC->_L148 = kcg_true;
  outC->_L147 = kcg_true;
  outC->_L146 = kcg_true;
  outC->_L145 = kcg_true;
  outC->_L144 = kcg_true;
  outC->_L143 = kcg_true;
  outC->_L142 = kcg_true;
  outC->_L141 = kcg_true;
  outC->_L139 = kcg_true;
  outC->_L137 = kcg_true;
  outC->_L138 = kcg_true;
  outC->_L135 = kcg_true;
  outC->_L136 = kcg_true;
  outC->_L134 = kcg_true;
  outC->_L133 = kcg_true;
  outC->_L132 = kcg_true;
  outC->_L131 = kcg_true;
  outC->_L130 = kcg_true;
  outC->_L128 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L120 = kcg_lit_int64(0);
  outC->_L119 = kcg_true;
  outC->_L117 = kcg_true;
  outC->_L118 = kcg_true;
  outC->_L115 = kcg_true;
  outC->_L116 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L104 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76 = LD_Invalid_DataDictionary_Pkg;
  outC->_L75 = LD_Invalid_DataDictionary_Pkg;
  outC->_L65 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L11 = kcg_true;
  outC->e030405b = kcg_true;
  outC->e030405m = kcg_true;
  outC->e0102b = kcg_true;
  outC->e0102m = kcg_true;
  outC->e13b = kcg_true;
  outC->e13m = kcg_true;
  outC->e04m = kcg_true;
  outC->e04b = kcg_true;
  outC->e12b = kcg_true;
  outC->e12m = kcg_true;
  outC->e11b = kcg_true;
  outC->e11m = kcg_true;
  outC->e09b = kcg_true;
  outC->e09m = kcg_true;
  outC->e07b = kcg_true;
  outC->e07m = kcg_true;
  outC->e06b = kcg_true;
  outC->e06m = kcg_true;
  outC->e05b = kcg_true;
  outC->e05m = kcg_true;
  outC->e03b = kcg_true;
  outC->e03m = kcg_true;
  outC->e02b = kcg_true;
  outC->e02m = kcg_true;
  outC->e01b = kcg_true;
  outC->e01m = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAccept = kcg_true;
  /* _L30=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#2)/ */
  Exception01StoreOnboardIfPendingL1Transition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception01StoreOnboardIfPendingL1Transition_2);
  /* _L34=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#2)/ */
  Exception02StoreOnboardIfPendingL2L3Transition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_2);
  /* _L36=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#2)/ */
  Exception03RejectIfPendingAckOfTrainData_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception03RejectIfPendingAckOfTrainData_2);
  /* _L38=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#2)/ */
  Exception05RejectIfEmergencyStopAccepted_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception05RejectIfEmergencyStopAccepted_2);
  /* _L40=(InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition#2)/ */
  Exception06StoreOnboardIfPendingNTCTransition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception06StoreOnboardIfPendingNTCTransition_2);
  /* _L65=(InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition#1)/ */
  Exception07RejectIfNoPendingNTCTransition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception07RejectIfNoPendingNTCTransition_1);
  /* _L111=(InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored#1)/ */
  Exception09RejectIfNoL2L3TransitionIsStored_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception09RejectIfNoL2L3TransitionIsStored_1);
  /* _L113=(InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition#1)/ */
  Exception11RejectIfPendingTransition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception11RejectIfPendingTransition_1);
  /* _L115=(InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending#1)/ */
  Exception12RejectIfTextMessageAckPending_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception12RejectIfTextMessageAckPending_1);
  /* _L127=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1);
  /* _L137=(InformationFilter_Pkg::FirstFilter::Exception030405Reject#1)/ */
  Exception030405Reject_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception030405Reject_1);
  /* _L135=(InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition#1)/ */
  Exception0102StoreOnboardIfPendingTransition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception0102StoreOnboardIfPendingTransition_1);
  /* _L117=(InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition#1)/ */
  Exception13RejectIfNotWithImmediateL1L2L3Transition_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception13RejectIfNotWithImmediateL1L2L3Transition_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckLevelExceptions_reset_InformationFilter_Pkg_FirstFilter(
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC)
{
  /* _L30=(InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition#2)/ */
  Exception01StoreOnboardIfPendingL1Transition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception01StoreOnboardIfPendingL1Transition_2);
  /* _L34=(InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition#2)/ */
  Exception02StoreOnboardIfPendingL2L3Transition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception02StoreOnboardIfPendingL2L3Transition_2);
  /* _L36=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#2)/ */
  Exception03RejectIfPendingAckOfTrainData_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception03RejectIfPendingAckOfTrainData_2);
  /* _L38=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#2)/ */
  Exception05RejectIfEmergencyStopAccepted_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception05RejectIfEmergencyStopAccepted_2);
  /* _L40=(InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition#2)/ */
  Exception06StoreOnboardIfPendingNTCTransition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception06StoreOnboardIfPendingNTCTransition_2);
  /* _L65=(InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition#1)/ */
  Exception07RejectIfNoPendingNTCTransition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception07RejectIfNoPendingNTCTransition_1);
  /* _L111=(InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored#1)/ */
  Exception09RejectIfNoL2L3TransitionIsStored_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception09RejectIfNoL2L3TransitionIsStored_1);
  /* _L113=(InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition#1)/ */
  Exception11RejectIfPendingTransition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception11RejectIfPendingTransition_1);
  /* _L115=(InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending#1)/ */
  Exception12RejectIfTextMessageAckPending_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception12RejectIfTextMessageAckPending_1);
  /* _L127=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1);
  /* _L137=(InformationFilter_Pkg::FirstFilter::Exception030405Reject#1)/ */
  Exception030405Reject_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception030405Reject_1);
  /* _L135=(InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition#1)/ */
  Exception0102StoreOnboardIfPendingTransition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception0102StoreOnboardIfPendingTransition_1);
  /* _L117=(InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition#1)/ */
  Exception13RejectIfNotWithImmediateL1L2L3Transition_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception13RejectIfNotWithImmediateL1L2L3Transition_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

