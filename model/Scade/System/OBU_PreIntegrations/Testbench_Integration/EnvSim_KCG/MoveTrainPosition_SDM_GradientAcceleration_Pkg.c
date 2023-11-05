/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveTrainPosition_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::MoveTrainPosition/ */
void MoveTrainPosition_SDM_GradientAcceleration_Pkg(
  /* distanceStep/ */
  kcg_float32 distanceStep,
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L8, Accu);
  outC->_L7 = outC->_L8.rearPos;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L3, Accu);
  outC->_L6 = outC->_L3.frontPos;
  outC->_L1 = distanceStep;
  outC->_L5 = outC->_L1 + outC->_L7;
  outC->_L4 = outC->_L6 + outC->_L1;
  outC->newFront = outC->_L4;
  outC->newRear = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void MoveTrainPosition_init_SDM_GradientAcceleration_Pkg(
  outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L8.frontPos = kcg_lit_float32(0.0);
  outC->_L8.frontIndex = kcg_lit_int32(0);
  outC->_L8.rearPos = kcg_lit_float32(0.0);
  outC->_L8.rearIndex = kcg_lit_int32(0);
  for (idx = 0; idx < 100; idx++) {
    outC->_L8.compensatedGradientProfile[idx].location = kcg_lit_float32(0.0);
    outC->_L8.compensatedGradientProfile[idx].gradient = kcg_lit_float32(0.0);
    outC->_L8.compensatedGradientProfile[idx].valid = kcg_true;
  }
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->_L3.frontPos = kcg_lit_float32(0.0);
  outC->_L3.frontIndex = kcg_lit_int32(0);
  outC->_L3.rearPos = kcg_lit_float32(0.0);
  outC->_L3.rearIndex = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L3.compensatedGradientProfile[idx1].location = kcg_lit_float32(0.0);
    outC->_L3.compensatedGradientProfile[idx1].gradient = kcg_lit_float32(0.0);
    outC->_L3.compensatedGradientProfile[idx1].valid = kcg_true;
  }
  outC->newRear = kcg_lit_float32(0.0);
  outC->newFront = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoveTrainPosition_reset_SDM_GradientAcceleration_Pkg(
  outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveTrainPosition_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

