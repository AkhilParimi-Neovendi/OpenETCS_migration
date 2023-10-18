/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception030405Reject_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception030405Reject/ */
void Exception030405Reject_InformationFilter_Pkg_FirstFilter(
  /* inPendingAckOfTrainData/ */
  kcg_bool inPendingAckOfTrainData,
  /* inSPPAndGradientOnBoard/ */
  kcg_bool inSPPAndGradientOnBoard,
  /* inMACoverNotFullLength/ */
  kcg_bool inMACoverNotFullLength,
  /* inEmergencyStopAccepted/ */
  kcg_bool inEmergencyStopAccepted,
  outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;

  outC->_L10 = inEmergencyStopAccepted;
  /* _L5=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#1)/ */
  Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
    outC->_L10,
    &outC->Context_Exception05RejectIfEmergencyStopAccepted_1);
  outC->_L5 =
    outC->Context_Exception05RejectIfEmergencyStopAccepted_1.outAcceptMessage;
  outC->_L6 =
    outC->Context_Exception05RejectIfEmergencyStopAccepted_1.outStoreInTransitionBuffer;
  _2_noname = outC->_L6;
  outC->_L8 = inSPPAndGradientOnBoard;
  outC->_L9 = inMACoverNotFullLength;
  /* _L3=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
    outC->_L8,
    outC->_L9,
    &outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1);
  outC->_L3 =
    outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1.outAcceptMessage;
  outC->_L4 =
    outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1.outStoreInTransitionBuffer;
  _1_noname = outC->_L4;
  outC->_L7 = inPendingAckOfTrainData;
  /* _L1=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#1)/ */
  Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
    outC->_L7,
    &outC->Context_Exception03RejectIfPendingAckOfTrainData_1);
  outC->_L1 =
    outC->Context_Exception03RejectIfPendingAckOfTrainData_1.outAcceptMessage;
  outC->_L2 =
    outC->Context_Exception03RejectIfPendingAckOfTrainData_1.outStoreInTransitionBuffer;
  noname = outC->_L2;
  outC->_L12 = outC->_L1 | outC->_L3 | outC->_L5;
  outC->_L11 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L11;
  outC->outAcceptMessage = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception030405Reject_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
  /* _L1=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#1)/ */
  Exception03RejectIfPendingAckOfTrainData_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception03RejectIfPendingAckOfTrainData_1);
  /* _L3=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_init_InformationFilter_Pkg_FirstFilte(
    &outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1);
  /* _L5=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#1)/ */
  Exception05RejectIfEmergencyStopAccepted_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception05RejectIfEmergencyStopAccepted_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception030405Reject_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception030405Reject_InformationFilter_Pkg_FirstFilter *outC)
{
  /* _L1=(InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData#1)/ */
  Exception03RejectIfPendingAckOfTrainData_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception03RejectIfPendingAckOfTrainData_1);
  /* _L3=(InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength#1)/ */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_reset_InformationFilter_Pkg_FirstFilt(
    &outC->Context_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_1);
  /* _L5=(InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted#1)/ */
  Exception05RejectIfEmergencyStopAccepted_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_Exception05RejectIfEmergencyStopAccepted_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception030405Reject_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

