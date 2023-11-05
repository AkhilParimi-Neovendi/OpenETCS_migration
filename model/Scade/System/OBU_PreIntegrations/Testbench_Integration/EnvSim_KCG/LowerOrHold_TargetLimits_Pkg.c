/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LowerOrHold_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::LowerOrHold/ */
void LowerOrHold_TargetLimits_Pkg(
  /* vi/ */
  V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* enable/ */
  kcg_bool enable,
  outC_LowerOrHold_TargetLimits_Pkg *outC)
{
  /* vo/ */
  static V_odometry_Type_Obu_BasicTypes_Pkg last_vo;
  /* vi/ */
  static V_odometry_Type_Obu_BasicTypes_Pkg last_vi;

  last_vi = outC->mem_vi;
  outC->mem_vi = vi;
  last_vo = outC->vo;
  outC->_L37 = enable;
  outC->_L36 = last_vi;
  outC->_L1 = vi;
  outC->_L30 = last_vo;
  outC->_L33 = outC->_L30 < outC->_L1;
  outC->_L31 = kcg_lit_int32(0);
  outC->_L32 = outC->_L36 >= outC->_L31;
  outC->_L28 = outC->_L32 & outC->_L37 & outC->_L33;
  /* _L6= */
  if (outC->_L28) {
    outC->_L6 = outC->_L30;
  }
  else {
    outC->_L6 = outC->_L1;
  }
  outC->vo = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void LowerOrHold_init_TargetLimits_Pkg(outC_LowerOrHold_TargetLimits_Pkg *outC)
{
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_lit_int32(0);
  outC->_L33 = kcg_true;
  outC->_L30 = kcg_lit_int32(0);
  outC->_L31 = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->vo = kcg_lit_int32(-1);
  outC->mem_vi = kcg_lit_int32(-1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LowerOrHold_reset_TargetLimits_Pkg(outC_LowerOrHold_TargetLimits_Pkg *outC)
{
  outC->vo = kcg_lit_int32(-1);
  outC->mem_vi = kcg_lit_int32(-1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LowerOrHold_TargetLimits_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

