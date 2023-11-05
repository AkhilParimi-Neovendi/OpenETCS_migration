/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::isLEValid/ */
void isLEValid_TargetLimits_Pkg(
  /* valid1/ */
  kcg_bool valid1,
  /* i1/ */
  kcg_float32 i1,
  /* valid2/ */
  kcg_bool valid2,
  /* i2/ */
  kcg_float32 i2,
  outC_isLEValid_TargetLimits_Pkg *outC)
{
  outC->_L9 = valid2;
  outC->_L7 = !outC->_L9;
  outC->_L4 = i2;
  outC->_L2 = i1;
  outC->_L5 = outC->_L2 <= outC->_L4;
  outC->_L6 = outC->_L5 | outC->_L7;
  outC->_L1 = valid1;
  outC->_L8 = outC->_L1 & outC->_L6;
  outC->result = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void isLEValid_init_TargetLimits_Pkg(outC_isLEValid_TargetLimits_Pkg *outC)
{
  outC->_L9 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_true;
  outC->result = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isLEValid_reset_TargetLimits_Pkg(outC_isLEValid_TargetLimits_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isLEValid_TargetLimits_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

