/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength/ */
void Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
  /* inSPPAndGradientOnBoard/ */
  kcg_bool inSPPAndGradientOnBoard,
  /* inMACoverNotFullLength/ */
  kcg_bool inMACoverNotFullLength,
  outC_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L2 = inMACoverNotFullLength;
  outC->_L1 = inSPPAndGradientOnBoard;
  outC->_L4 = outC->_L1 | outC->_L2;
  outC->_L5 = !outC->_L4;
  outC->outAcceptMessage = outC->_L5;
  outC->_L3 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

