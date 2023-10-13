/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectGradientLocations_SDMModelPkg.h"

/* SDMModelPkg::collectGradientLocations/ */
void collectGradientLocations_SDMModelPkg(
  /* last_loc/ */
  L_internal_real_Type_SDM_Types_Pkg last_loc,
  /* Gsection/ */
  A_gradient_element_t_SDM_GradientAcceleration_types *Gsection,
  outC_collectGradientLocations_SDMModelPkg *outC)
{
  outC->_L1 = last_loc;
  kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
    &outC->_L2,
    Gsection);
  outC->_L10 = outC->_L2.position;
  outC->_L9 = outC->_L2.valid;
  /* _L11= */
  if (outC->_L9) {
    outC->_L11 = outC->_L10;
  }
  else {
    outC->_L11 = outC->_L1;
  }
  outC->location = outC->_L11;
  outC->location_ = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void collectGradientLocations_init_SDMModelPkg(
  outC_collectGradientLocations_SDMModelPkg *outC)
{
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_true;
  outC->_L2.position = kcg_lit_float64(0.0);
  outC->_L2.gradient_acceleration = kcg_lit_float64(0.0);
  outC->_L2.valid = kcg_true;
  outC->_L1 = kcg_lit_float64(0.0);
  outC->location = kcg_lit_float64(0.0);
  outC->location_ = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void collectGradientLocations_reset_SDMModelPkg(
  outC_collectGradientLocations_SDMModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** collectGradientLocations_SDMModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

