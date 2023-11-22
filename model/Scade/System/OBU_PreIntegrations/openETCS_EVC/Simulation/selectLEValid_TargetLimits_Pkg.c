/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::selectLEValid/ */
void selectLEValid_TargetLimits_Pkg(
  /* valid1/ */
  kcg_bool valid1,
  /* i1/ */
  kcg_float32 i1,
  /* valid2/ */
  kcg_bool valid2,
  /* i2/ */
  kcg_float32 i2,
  outC_selectLEValid_TargetLimits_Pkg *outC)
{
  outC->_L1 = valid1;
  outC->_L2 = i1;
  outC->_L9 = valid2;
  outC->_L4 = i2;
  /* _L16=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_TargetLimits_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L9,
    outC->_L4,
    &outC->Context_isLEValid_1);
  outC->_L16 = outC->Context_isLEValid_1.result;
  outC->_L15 = i2;
  outC->_L14 = i1;
  /* _L11= */
  if (outC->_L16) {
    outC->_L12 = outC->_L14;
  }
  else {
    outC->_L12 = outC->_L15;
  }
  outC->o = outC->_L12;
  outC->_L10 = valid2;
  outC->_L13 = valid1;
  /* _L11= */
  if (outC->_L16) {
    outC->_L11 = outC->_L13;
  }
  else {
    outC->_L11 = outC->_L10;
  }
  outC->valid = outC->_L11;
  outC->isUpper = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void selectLEValid_init_TargetLimits_Pkg(
  outC_selectLEValid_TargetLimits_Pkg *outC)
{
  outC->_L16 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_true;
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_true;
  outC->o = kcg_lit_float32(0.0);
  outC->valid = kcg_true;
  outC->isUpper = kcg_true;
  /* _L16=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_init_TargetLimits_Pkg(&outC->Context_isLEValid_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void selectLEValid_reset_TargetLimits_Pkg(
  outC_selectLEValid_TargetLimits_Pkg *outC)
{
  /* _L16=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_reset_TargetLimits_Pkg(&outC->Context_isLEValid_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** selectLEValid_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

