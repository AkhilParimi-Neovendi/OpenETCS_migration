/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending/ */
void Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter(
  /* inCurrentTextMessageId/ */
  kcg_int32 inCurrentTextMessageId,
  /* inLastAckTextMessageId/ */
  kcg_int32 inLastAckTextMessageId,
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L5 = inLastAckTextMessageId;
  outC->_L3 = inCurrentTextMessageId;
  outC->_L4 = outC->_L5 == outC->_L3;
  outC->_L2 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L2;
  outC->outAcceptMessage = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Exception12RejectIfTextMe_init_InformationFilter_Pkg_FirstFilter(
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  outC->outAcceptMessage = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exception12RejectIfTextMe_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

