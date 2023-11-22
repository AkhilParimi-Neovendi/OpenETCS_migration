/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitT_bs_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::splitT_bs/ */
void splitT_bs_TargetLimits_Pkg(
  /* bs/ */
  T_internal_real_Type_SDM_Types_Pkg bs,
  /* isSB_FBAvailable/ */
  kcg_bool isSB_FBAvailable,
  /* isSB_CmdAvailable/ */
  kcg_bool isSB_CmdAvailable,
  outC_splitT_bs_TargetLimits_Pkg *outC)
{
  outC->_L11 = bs;
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L1 = bs;
  outC->_L2 = isSB_FBAvailable;
  /* _L8= */
  if (outC->_L2) {
    outC->_L8 = outC->_L11;
  }
  else {
    outC->_L8 = outC->_L1;
  }
  /* _L8= */
  if (outC->_L2) {
    outC->_L10 = outC->_L11;
  }
  else {
    outC->_L10 = outC->_L1;
  }
  outC->_L3 = isSB_CmdAvailable;
  /* _L6= */
  if (outC->_L3) {
    outC->_L6 = outC->_L8;
  }
  else {
    outC->_L6 = outC->_L9;
  }
  /* _L6= */
  if (outC->_L3) {
    outC->_L7 = outC->_L10;
  }
  else {
    outC->_L7 = outC->_L9;
  }
  outC->bs2 = outC->_L7;
  outC->bs1 = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void splitT_bs_init_TargetLimits_Pkg(outC_splitT_bs_TargetLimits_Pkg *outC)
{
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_lit_float32(0.0);
  outC->bs2 = kcg_lit_float32(0.0);
  outC->bs1 = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void splitT_bs_reset_TargetLimits_Pkg(outC_splitT_bs_TargetLimits_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** splitT_bs_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

