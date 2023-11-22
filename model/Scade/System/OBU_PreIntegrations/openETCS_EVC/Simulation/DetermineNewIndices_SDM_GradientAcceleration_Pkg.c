/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineNewIndices_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::DetermineNewIndices/ */
void DetermineNewIndices_SDM_GradientAcceleration_Pkg(
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* IncFrontIdx/ */
  kcg_bool IncFrontIdx,
  outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L11, Accu);
  outC->_L3 = outC->_L11.frontIndex;
  outC->_L6 = kcg_lit_int32(1);
  outC->_L5 = outC->_L3 + outC->_L6;
  outC->_L2 = IncFrontIdx;
  /* _L9= */
  if (outC->_L2) {
    outC->_L9 = outC->_L5;
  }
  else {
    outC->_L9 = outC->_L3;
  }
  outC->_L4 = outC->_L11.rearIndex;
  outC->_L7 = outC->_L6 + outC->_L4;
  /* _L9= */
  if (outC->_L2) {
    outC->_L10 = outC->_L4;
  }
  else {
    outC->_L10 = outC->_L7;
  }
  outC->frontIndex = outC->_L9;
  outC->rearIndex = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void DetermineNewIndices_init_SDM_GradientAcceleration_Pkg(
  outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_size idx;

  outC->_L11.frontPos = kcg_lit_float32(0.0);
  outC->_L11.frontIndex = kcg_lit_int32(0);
  outC->_L11.rearPos = kcg_lit_float32(0.0);
  outC->_L11.rearIndex = kcg_lit_int32(0);
  for (idx = 0; idx < 100; idx++) {
    outC->_L11.compensatedGradientProfile[idx].location = kcg_lit_float32(0.0);
    outC->_L11.compensatedGradientProfile[idx].gradient = kcg_lit_float32(0.0);
    outC->_L11.compensatedGradientProfile[idx].valid = kcg_true;
  }
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->rearIndex = kcg_lit_int32(0);
  outC->frontIndex = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DetermineNewIndices_reset_SDM_GradientAcceleration_Pkg(
  outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DetermineNewIndices_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

