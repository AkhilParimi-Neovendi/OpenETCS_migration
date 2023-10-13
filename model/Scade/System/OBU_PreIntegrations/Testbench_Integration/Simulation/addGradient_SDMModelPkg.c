/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addGradient_SDMModelPkg.h"

/* SDMModelPkg::addGradient/ */
void addGradient_SDMModelPkg(
  /* aBrakeSafe/ */
  ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* aGradient/ */
  A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  outC_addGradient_SDMModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_float64 acc;
  static kcg_size idx2;
  static L_internal_real_Type_SDM_Types_Pkg noname;

  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&outC->_L31, aGradient);
  /* _L30/ */
  for (idx = 0; idx < 14; idx++) {
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
      &outC->_L30[idx],
      &outC->_L31);
  }
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L29, aBrakeSafe);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L26, &outC->_L29.data);
  /* _L32= */
  for (idx1 = 0; idx1 < 14; idx1++) {
    /* _L32=(SDMModelPkg::iterateASafeData#1)/ */
    iterateASafeData_SDMModelPkg(
      &outC->_L26[idx1],
      &outC->_L30[idx1],
      &outC->Context_iterateASafeData_1[idx1]);
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(
      &outC->_L32[idx1],
      &outC->Context_iterateASafeData_1[idx1].ASafeRows_graded);
  }
  outC->_L20 = kcg_lit_float64(0.0);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&outC->_L2, aGradient);
  outC->_L17 = outC->_L20;
  /* _L17= */
  for (idx2 = 0; idx2 < 100; idx2++) {
    acc = outC->_L17;
    /* _L17=(SDMModelPkg::collectGradientLocations#1)/ */
    collectGradientLocations_SDMModelPkg(
      acc,
      &outC->_L2[idx2],
      &outC->Context_collectGradientLocations_1[idx2]);
    outC->_L17 = outC->Context_collectGradientLocations_1[idx2].location_;
    outC->_L28[idx2] = outC->Context_collectGradientLocations_1[idx2].location;
  }
  noname = outC->_L17;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L27, aBrakeSafe);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L13,
    &outC->_L27.speed_definition);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L12.distance_definition,
    &outC->_L28);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L12.speed_definition,
    &outC->_L13);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L12.data, &outC->_L32);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->aSafe, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void addGradient_init_SDMModelPkg(outC_addGradient_SDMModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;

  for (idx3 = 0; idx3 < 14; idx3++) {
    for (idx2 = 0; idx2 < 100; idx2++) {
      outC->_L32[idx3][idx2] = kcg_lit_float64(0.0);
    }
  }
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L31[idx4].position = kcg_lit_float64(0.0);
    outC->_L31[idx4].gradient_acceleration = kcg_lit_float64(0.0);
    outC->_L31[idx4].valid = kcg_true;
  }
  for (idx6 = 0; idx6 < 14; idx6++) {
    for (idx5 = 0; idx5 < 100; idx5++) {
      outC->_L30[idx6][idx5].position = kcg_lit_float64(0.0);
      outC->_L30[idx6][idx5].gradient_acceleration = kcg_lit_float64(0.0);
      outC->_L30[idx6][idx5].valid = kcg_true;
    }
  }
  for (idx7 = 0; idx7 < 100; idx7++) {
    outC->_L29.distance_definition[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 14; idx8++) {
    outC->_L29.speed_definition[idx8] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 14; idx10++) {
    for (idx9 = 0; idx9 < 100; idx9++) {
      outC->_L29.data[idx10][idx9] = kcg_lit_float64(0.0);
    }
  }
  for (idx11 = 0; idx11 < 100; idx11++) {
    outC->_L28[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 100; idx12++) {
    outC->_L27.distance_definition[idx12] = kcg_lit_float64(0.0);
  }
  for (idx13 = 0; idx13 < 14; idx13++) {
    outC->_L27.speed_definition[idx13] = kcg_lit_float64(0.0);
  }
  for (idx15 = 0; idx15 < 14; idx15++) {
    for (idx14 = 0; idx14 < 100; idx14++) {
      outC->_L27.data[idx15][idx14] = kcg_lit_float64(0.0);
    }
  }
  for (idx17 = 0; idx17 < 14; idx17++) {
    for (idx16 = 0; idx16 < 100; idx16++) {
      outC->_L26[idx17][idx16] = kcg_lit_float64(0.0);
    }
  }
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  for (idx18 = 0; idx18 < 14; idx18++) {
    outC->_L13[idx18] = kcg_lit_float64(0.0);
  }
  for (idx19 = 0; idx19 < 100; idx19++) {
    outC->_L12.distance_definition[idx19] = kcg_lit_float64(0.0);
  }
  for (idx20 = 0; idx20 < 14; idx20++) {
    outC->_L12.speed_definition[idx20] = kcg_lit_float64(0.0);
  }
  for (idx22 = 0; idx22 < 14; idx22++) {
    for (idx21 = 0; idx21 < 100; idx21++) {
      outC->_L12.data[idx22][idx21] = kcg_lit_float64(0.0);
    }
  }
  for (idx23 = 0; idx23 < 100; idx23++) {
    outC->_L2[idx23].position = kcg_lit_float64(0.0);
    outC->_L2[idx23].gradient_acceleration = kcg_lit_float64(0.0);
    outC->_L2[idx23].valid = kcg_true;
  }
  for (idx24 = 0; idx24 < 100; idx24++) {
    outC->aSafe.distance_definition[idx24] = kcg_lit_float64(0.0);
  }
  for (idx25 = 0; idx25 < 14; idx25++) {
    outC->aSafe.speed_definition[idx25] = kcg_lit_float64(0.0);
  }
  for (idx27 = 0; idx27 < 14; idx27++) {
    for (idx26 = 0; idx26 < 100; idx26++) {
      outC->aSafe.data[idx27][idx26] = kcg_lit_float64(0.0);
    }
  }
  for (idx1 = 0; idx1 < 100; idx1++) {
    /* _L17=(SDMModelPkg::collectGradientLocations#1)/ */
    collectGradientLocations_init_SDMModelPkg(
      &outC->Context_collectGradientLocations_1[idx1]);
  }
  for (idx = 0; idx < 14; idx++) {
    /* _L32=(SDMModelPkg::iterateASafeData#1)/ */
    iterateASafeData_init_SDMModelPkg(&outC->Context_iterateASafeData_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void addGradient_reset_SDMModelPkg(outC_addGradient_SDMModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 100; idx1++) {
    /* _L17=(SDMModelPkg::collectGradientLocations#1)/ */
    collectGradientLocations_reset_SDMModelPkg(
      &outC->Context_collectGradientLocations_1[idx1]);
  }
  for (idx = 0; idx < 14; idx++) {
    /* _L32=(SDMModelPkg::iterateASafeData#1)/ */
    iterateASafeData_reset_SDMModelPkg(&outC->Context_iterateASafeData_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addGradient_SDMModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

