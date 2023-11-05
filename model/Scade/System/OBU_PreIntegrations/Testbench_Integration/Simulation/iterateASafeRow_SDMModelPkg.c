/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeRow_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeRow/ */
void iterateASafeRow_SDMModelPkg(
  /* last_gradient/ */
  A_internal_real_Type_SDM_Types_Pkg last_gradient,
  /* A/ */
  A_internal_real_Type_SDM_Types_Pkg A,
  /* AGradient/ */
  A_gradient_element_t_SDM_GradientAcceleration_types *AGradient,
  outC_iterateASafeRow_SDMModelPkg *outC)
{
  outC->_L7 = last_gradient;
  kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
    &outC->_L2,
    AGradient);
  outC->_L5 = outC->_L2.gradient_acceleration;
  outC->_L4 = outC->_L2.valid;
  /* _L6= */
  if (outC->_L4) {
    outC->_L6 = outC->_L5;
  }
  else {
    outC->_L6 = outC->_L7;
  }
  outC->keep_gradient = outC->_L6;
  outC->_L1 = A;
  outC->_L3 = outC->_L6 + outC->_L1;
  outC->A_graded = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void iterateASafeRow_init_SDMModelPkg(outC_iterateASafeRow_SDMModelPkg *outC)
{
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2.position = kcg_lit_float32(0.0);
  outC->_L2.gradient_acceleration = kcg_lit_float32(0.0);
  outC->_L2.valid = kcg_true;
  outC->_L1 = kcg_lit_float32(0.0);
  outC->A_graded = kcg_lit_float32(0.0);
  outC->keep_gradient = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void iterateASafeRow_reset_SDMModelPkg(outC_iterateASafeRow_SDMModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** iterateASafeRow_SDMModelPkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

