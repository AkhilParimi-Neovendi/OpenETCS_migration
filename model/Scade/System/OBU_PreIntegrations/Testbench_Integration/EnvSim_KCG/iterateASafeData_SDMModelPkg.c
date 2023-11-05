/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeData_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeData/ */
void iterateASafeData_SDMModelPkg(
  /* ASafeRows/ */
  ASafeRow_T_CalcBrakingCurves_types *ASafeRows,
  /* AGradient/ */
  A_gradient_t_SDM_GradientAcceleration_types *AGradient,
  outC_iterateASafeData_SDMModelPkg *outC)
{
  static kcg_float32 acc;
  static kcg_size idx;
  static A_internal_real_Type_SDM_Types_Pkg noname;

  outC->_L7 = kcg_lit_float32(0.0);
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&outC->_L1, ASafeRows);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&outC->_L2, AGradient);
  outC->_L5 = outC->_L7;
  /* _L5= */
  for (idx = 0; idx < 100; idx++) {
    acc = outC->_L5;
    /* _L5=(SDMModelPkg::iterateASafeRow#1)/ */
    iterateASafeRow_SDMModelPkg(
      acc,
      outC->_L1[idx],
      &outC->_L2[idx],
      &outC->Context_iterateASafeRow_1[idx]);
    outC->_L5 = outC->Context_iterateASafeRow_1[idx].keep_gradient;
    outC->_L4[idx] = outC->Context_iterateASafeRow_1[idx].A_graded;
  }
  noname = outC->_L5;
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(
    &outC->ASafeRows_graded,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void iterateASafeData_init_SDMModelPkg(outC_iterateASafeData_SDMModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L4[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 100; idx2++) {
    outC->_L2[idx2].position = kcg_lit_float32(0.0);
    outC->_L2[idx2].gradient_acceleration = kcg_lit_float32(0.0);
    outC->_L2[idx2].valid = kcg_true;
  }
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L1[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->ASafeRows_graded[idx4] = kcg_lit_float32(0.0);
  }
  for (idx = 0; idx < 100; idx++) {
    /* _L5=(SDMModelPkg::iterateASafeRow#1)/ */
    iterateASafeRow_init_SDMModelPkg(&outC->Context_iterateASafeRow_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void iterateASafeData_reset_SDMModelPkg(outC_iterateASafeData_SDMModelPkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 100; idx++) {
    /* _L5=(SDMModelPkg::iterateASafeRow#1)/ */
    iterateASafeRow_reset_SDMModelPkg(&outC->Context_iterateASafeRow_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** iterateASafeData_SDMModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

