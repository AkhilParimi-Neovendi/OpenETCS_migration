/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed/ */
void FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
  /* inAcceleration/ */
  A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  /* inD0/ */
  L_internal_real_Type_SDM_Types_Pkg inD0,
  /* inD1/ */
  L_internal_real_Type_SDM_Types_Pkg inD1,
  /* inBeginSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static kcg_float64 op_call;

  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L5 = inBeginSpeed;
  /* _L11=(mathext::Square#1)/ */
  Square_mathext_float64(outC->_L5, &outC->Context_Square_1);
  outC->_L11 = outC->Context_Square_1.Square_Out_float64;
  outC->_L4 = inD1;
  outC->_L3 = inD0;
  outC->_L9 = outC->_L3 - outC->_L4;
  outC->_L2 = inAcceleration;
  outC->_L6 = kcg_lit_float64(2.0);
  outC->_L7 = outC->_L6 * outC->_L2 * outC->_L9;
  outC->_L10 = outC->_L7 + outC->_L11;
  outC->_L13 = outC->_L10 > outC->_L12;
  outC->every = outC->_L13;
  if (outC->every) {
    op_call = /* _L1=(mathext::SqrtR#1)/ */ SqrtR64_mathext_mathextimpl(outC->_L10);
  }
  outC->valid = outC->_L13;
  outC->_L14 = kcg_lit_float64(0.0);
  if (outC->every) {
    outC->_L1 = op_call;
  }
  else {
    outC->_L1 = outC->_L14;
  }
  outC->outSpeedAtD1 = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void FormularNewSpeed_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->every = kcg_true;
  outC->valid = kcg_true;
  outC->outSpeedAtD1 = kcg_lit_float64(0.0);
  /* _L11=(mathext::Square#1)/ */
  Square_init_mathext_float64(&outC->Context_Square_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FormularNewSpeed_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L11=(mathext::Square#1)/ */
  Square_reset_mathext_float64(&outC->Context_Square_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

