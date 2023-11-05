/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition/ */
void FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
  /* inBeginDistance/ */
  L_internal_real_Type_SDM_Types_Pkg inBeginDistance,
  /* inEndSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg inEndSpeed,
  /* inBeginSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* inAcceleration/ */
  A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static kcg_float32 op_call;
  static kcg_bool every;

  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L19 = inAcceleration;
  outC->_L20 = outC->_L19 != outC->_L21;
  every = outC->_L20;
  outC->_L3 = inBeginSpeed;
  /* _L6=(mathext::Square#1)/ */
  Square_mathext_float32(outC->_L3, &outC->Context_Square_1);
  outC->_L6 = outC->Context_Square_1.Square_Out_float32;
  outC->_L2 = inEndSpeed;
  /* _L7=(mathext::Square#2)/ */
  Square_mathext_float32(outC->_L2, &outC->Context_Square_2);
  outC->_L7 = outC->Context_Square_2.Square_Out_float32;
  outC->_L8 = outC->_L7 - outC->_L6;
  outC->_L4 = inAcceleration;
  outC->_L11 = kcg_lit_float32(2.0);
  outC->_L10 = outC->_L11 * outC->_L4;
  if (every) {
    op_call = outC->_L8 / outC->_L10;
  }
  outC->_L18 = kcg_lit_float32(0.0);
  if (every) {
    outC->_L9 = op_call;
  }
  else {
    outC->_L9 = outC->_L18;
  }
  outC->_L1 = inBeginDistance;
  outC->_L5 = outC->_L1 - outC->_L9;
  outC->outD1 = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void FormularNewPosition_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->outD1 = kcg_lit_float32(0.0);
  /* _L7=(mathext::Square#2)/ */
  Square_init_mathext_float32(&outC->Context_Square_2);
  /* _L6=(mathext::Square#1)/ */
  Square_init_mathext_float32(&outC->Context_Square_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FormularNewPosition_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L7=(mathext::Square#2)/ */
  Square_reset_mathext_float32(&outC->Context_Square_2);
  /* _L6=(mathext::Square#1)/ */
  Square_reset_mathext_float32(&outC->Context_Square_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

