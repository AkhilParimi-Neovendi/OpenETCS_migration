/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::selectGradientOffset/ */
void selectGradientOffset_SDM_GradientAcceleration_Pkg(
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* Index/ */
  kcg_int64 Index,
  /* Offset/ */
  kcg_int64 Offset,
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg *outC)
{
  outC->_L3 = Offset;
  outC->_L2 = Index;
  outC->_L9 = outC->_L2 + outC->_L3;
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_false;
  outC->_L6.location = outC->_L8;
  outC->_L6.gradient = outC->_L7;
  outC->_L6.valid = outC->_L5;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L1,
    GradientProfile);
  if ((kcg_lit_int64(0) <= outC->_L9) & (outC->_L9 < kcg_lit_int64(50))) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &outC->_L4,
      &outC->_L1[outC->_L9]);
  }
  else {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &outC->_L4,
      &outC->_L6);
  }
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->GradientSect,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void selectGradientOffset_init_SDM_GradientAcceleration_Pkg(
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;

  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6.location = kcg_lit_float64(0.0);
  outC->_L6.gradient = kcg_lit_float64(0.0);
  outC->_L6.valid = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4.location = kcg_lit_float64(0.0);
  outC->_L4.gradient = kcg_lit_float64(0.0);
  outC->_L4.valid = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L1[idx].location = kcg_lit_float64(0.0);
    outC->_L1[idx].gradient = kcg_lit_float64(0.0);
    outC->_L1[idx].valid = kcg_true;
  }
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->GradientSect.location = kcg_lit_float64(0.0);
  outC->GradientSect.gradient = kcg_lit_float64(0.0);
  outC->GradientSect.valid = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void selectGradientOffset_reset_SDM_GradientAcceleration_Pkg(
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** selectGradientOffset_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

