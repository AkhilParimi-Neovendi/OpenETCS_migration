/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsError_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::IsError/ */
void IsError_ProvidePositionReport_Pkg(
  /* inError/ */
  kcg_bool inError,
  /* errorVector/ */
  ErrorMessage_T_ProvidePositionReport_Pkg *errorVector,
  outC_IsError_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L1, errorVector);
  outC->_L3 = outC->_L1.present;
  outC->_L2 = inError;
  outC->_L4 = outC->_L2 | outC->_L3;
  outC->containsError = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void IsError_init_ProvidePositionReport_Pkg(
  outC_IsError_ProvidePositionReport_Pkg *outC)
{
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1.present = kcg_true;
  outC->_L1.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2 = kcg_true;
  outC->containsError = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void IsError_reset_ProvidePositionReport_Pkg(
  outC_IsError_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsError_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

