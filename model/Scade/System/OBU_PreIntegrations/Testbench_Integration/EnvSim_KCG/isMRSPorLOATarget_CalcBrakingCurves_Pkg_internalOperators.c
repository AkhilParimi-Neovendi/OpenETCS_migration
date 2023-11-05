/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget/ */
void isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(
  /* Target/ */
  Target_real_T_TargetManagement_types *Target,
  outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L9 = kcg_lit_float32(0.0);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L1, Target);
  outC->_L2 = outC->_L1.speed;
  outC->_L8 = outC->_L2 > outC->_L9;
  outC->isVnonZero = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void isMRSPorLOATarget_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_true;
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1.targetType = EoA_TargetManagement_types;
  outC->_L1.distance = kcg_lit_float32(0.0);
  outC->_L1.speed = kcg_lit_float32(0.0);
  outC->isVnonZero = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isMRSPorLOATarget_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

