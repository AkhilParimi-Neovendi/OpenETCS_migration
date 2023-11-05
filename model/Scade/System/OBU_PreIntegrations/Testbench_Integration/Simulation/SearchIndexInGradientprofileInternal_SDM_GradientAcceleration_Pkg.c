/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal/ */
void SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
  /* index/ */
  kcg_int32 index,
  /* indexOfPosition/ */
  kcg_int32 indexOfPosition,
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg *outC)
{
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_false;
  outC->_L12.location = outC->_L13;
  outC->_L12.gradient = outC->_L13;
  outC->_L12.valid = outC->_L14;
  outC->_L1 = index;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L4,
    GradientProfile);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &outC->_L5,
      &outC->_L4[outC->_L1]);
  }
  else {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &outC->_L5,
      &outC->_L12);
  }
  outC->_L15 = outC->_L5.location;
  outC->_L11 = outC->_L5.valid;
  outC->_L3 = position;
  outC->_L9 = outC->_L3 >= outC->_L15;
  outC->_L10 = outC->_L9 & outC->_L11;
  outC->cond = outC->_L10;
  outC->_L2 = indexOfPosition;
  /* _L6= */
  if (outC->_L10) {
    outC->_L6 = outC->_L1;
  }
  else {
    outC->_L6 = outC->_L2;
  }
  outC->indexOfPositionOut = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void SearchIndexInGradientprofileInternal_init_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;

  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L12.location = kcg_lit_float32(0.0);
  outC->_L12.gradient = kcg_lit_float32(0.0);
  outC->_L12.valid = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5.location = kcg_lit_float32(0.0);
  outC->_L5.gradient = kcg_lit_float32(0.0);
  outC->_L5.valid = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L4[idx].location = kcg_lit_float32(0.0);
    outC->_L4[idx].gradient = kcg_lit_float32(0.0);
    outC->_L4[idx].valid = kcg_true;
  }
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->indexOfPositionOut = kcg_lit_int32(0);
  outC->cond = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SearchIndexInGradientprofileInternal_reset_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

