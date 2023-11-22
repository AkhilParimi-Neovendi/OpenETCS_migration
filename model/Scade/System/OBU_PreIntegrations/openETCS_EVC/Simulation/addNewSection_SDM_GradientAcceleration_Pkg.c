/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addNewSection_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::addNewSection/ */
void addNewSection_SDM_GradientAcceleration_Pkg(
  /* newGradientSection/ */
  Gradient_real_t_SDM_GradientAcceleration_types newGradientSection,
  /* index/ */
  kcg_int32 index,
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  outC_addNewSection_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L9, Accu);
  outC->_L8 = outC->_L9.frontPos;
  outC->_L7 = kcg_true;
  outC->_L3 = newGradientSection;
  outC->_L6.location = outC->_L8;
  outC->_L6.gradient = outC->_L3;
  outC->_L6.valid = outC->_L7;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L2, Accu);
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L5,
    &outC->_L2.compensatedGradientProfile);
  outC->_L1 = index;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L4,
    &outC->_L5);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(100))) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &outC->_L4[outC->_L1],
      &outC->_L6);
  }
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->modifiedProfile,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void addNewSection_init_SDM_GradientAcceleration_Pkg(
  outC_addNewSection_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L9.frontPos = kcg_lit_float32(0.0);
  outC->_L9.frontIndex = kcg_lit_int32(0);
  outC->_L9.rearPos = kcg_lit_float32(0.0);
  outC->_L9.rearIndex = kcg_lit_int32(0);
  for (idx = 0; idx < 100; idx++) {
    outC->_L9.compensatedGradientProfile[idx].location = kcg_lit_float32(0.0);
    outC->_L9.compensatedGradientProfile[idx].gradient = kcg_lit_float32(0.0);
    outC->_L9.compensatedGradientProfile[idx].valid = kcg_true;
  }
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_true;
  outC->_L6.location = kcg_lit_float32(0.0);
  outC->_L6.gradient = kcg_lit_float32(0.0);
  outC->_L6.valid = kcg_true;
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L5[idx1].location = kcg_lit_float32(0.0);
    outC->_L5[idx1].gradient = kcg_lit_float32(0.0);
    outC->_L5[idx1].valid = kcg_true;
  }
  for (idx2 = 0; idx2 < 100; idx2++) {
    outC->_L4[idx2].location = kcg_lit_float32(0.0);
    outC->_L4[idx2].gradient = kcg_lit_float32(0.0);
    outC->_L4[idx2].valid = kcg_true;
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->_L2.frontPos = kcg_lit_float32(0.0);
  outC->_L2.frontIndex = kcg_lit_int32(0);
  outC->_L2.rearPos = kcg_lit_float32(0.0);
  outC->_L2.rearIndex = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L2.compensatedGradientProfile[idx3].location = kcg_lit_float32(0.0);
    outC->_L2.compensatedGradientProfile[idx3].gradient = kcg_lit_float32(0.0);
    outC->_L2.compensatedGradientProfile[idx3].valid = kcg_true;
  }
  outC->_L3 = kcg_lit_float32(0.0);
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->modifiedProfile[idx4].location = kcg_lit_float32(0.0);
    outC->modifiedProfile[idx4].gradient = kcg_lit_float32(0.0);
    outC->modifiedProfile[idx4].valid = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void addNewSection_reset_SDM_GradientAcceleration_Pkg(
  outC_addNewSection_SDM_GradientAcceleration_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addNewSection_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

