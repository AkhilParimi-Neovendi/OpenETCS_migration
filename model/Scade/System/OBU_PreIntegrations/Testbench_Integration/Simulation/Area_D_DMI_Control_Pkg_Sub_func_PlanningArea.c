/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D/ */
void Area_D_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float64 inTrainPosition,
  /* inGradientsValue/ */
  array_float64_32 *inGradientsValue,
  /* inGradientsEnd/ */
  array_float64_32 *inGradientsEnd,
  /* inGradientsStart/ */
  array_float64_32 *inGradientsStart,
  /* inCeilingPermittedSpeed/ */
  kcg_float64 inCeilingPermittedSpeed,
  /* inSpeedProfile_Distance/ */
  array_float64_32 *inSpeedProfile_Distance,
  /* inSpeedProfile_Speed/ */
  array_float64_32 *inSpeedProfile_Speed,
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L12 = inTrainPosition;
  kcg_copy_array_float64_32(&outC->_L9, inSpeedProfile_Distance);
  kcg_copy_array_float64_32(&outC->_L10, inSpeedProfile_Speed);
  /* _L13=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles#1)/ */
  NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L12,
    &outC->_L9,
    &outC->_L10,
    &outC->Context_NextSpeedProfiles_1);
  kcg_copy_array_float64_10(
    &outC->_L13,
    &outC->Context_NextSpeedProfiles_1.SpeedProfile_Distance_DMI);
  kcg_copy_array_float64_10(
    &outC->_L14,
    &outC->Context_NextSpeedProfiles_1.SpeedProfile_Speed_DMI);
  kcg_copy_array_float64_10(&outC->_L11[0], &outC->_L13);
  kcg_copy_array_float64_10(&outC->_L11[1], &outC->_L14);
  kcg_copy_tSpeedPoints(&outC->PlaningAreaSpeedProfile, &outC->_L11);
  outC->_L8 = inCeilingPermittedSpeed;
  outC->CeilingPermittedSpeed = outC->_L8;
  outC->_L7 = inTrainPosition;
  kcg_copy_array_float64_32(&outC->_L4, inGradientsStart);
  kcg_copy_array_float64_32(&outC->_L5, inGradientsEnd);
  kcg_copy_array_float64_32(&outC->_L6, inGradientsValue);
  /* _L1=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients#1)/ */
  NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L7,
    &outC->_L4,
    &outC->_L5,
    &outC->_L6,
    &outC->Context_NextGradients_1);
  kcg_copy_array_float64_32(
    &outC->_L1,
    &outC->Context_NextGradients_1.GradientsStartDMI);
  kcg_copy_array_float64_32(
    &outC->_L2,
    &outC->Context_NextGradients_1.GradientsEndDMI);
  kcg_copy_array_float64_32(
    &outC->_L3,
    &outC->Context_NextGradients_1.GradientsValueDMI);
  kcg_copy_array_float64_32(&outC->GradientsStart, &outC->_L1);
  kcg_copy_array_float64_32(&outC->GradientsEnd, &outC->_L2);
  kcg_copy_array_float64_32(&outC->GradientsValue, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void Area_D_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
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

  for (idx = 0; idx < 10; idx++) {
    outC->_L13[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L14[idx1] = kcg_lit_float64(0.0);
  }
  outC->_L12 = kcg_lit_float64(0.0);
  for (idx3 = 0; idx3 < 2; idx3++) {
    for (idx2 = 0; idx2 < 10; idx2++) {
      outC->_L11[idx3][idx2] = kcg_lit_float64(0.0);
    }
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L10[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L9[idx5] = kcg_lit_float64(0.0);
  }
  outC->_L8 = kcg_lit_float64(0.0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L3[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L2[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L1[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L4[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L5[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L6[idx11] = kcg_lit_float64(0.0);
  }
  outC->_L7 = kcg_lit_float64(0.0);
  for (idx12 = 0; idx12 < 32; idx12++) {
    outC->GradientsValue[idx12] = kcg_lit_float64(0.0);
  }
  outC->CeilingPermittedSpeed = kcg_lit_float64(0.0);
  for (idx14 = 0; idx14 < 2; idx14++) {
    for (idx13 = 0; idx13 < 10; idx13++) {
      outC->PlaningAreaSpeedProfile[idx14][idx13] = kcg_lit_float64(0.0);
    }
  }
  for (idx15 = 0; idx15 < 32; idx15++) {
    outC->GradientsEnd[idx15] = kcg_lit_float64(0.0);
  }
  for (idx16 = 0; idx16 < 32; idx16++) {
    outC->GradientsStart[idx16] = kcg_lit_float64(0.0);
  }
  /* _L1=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients#1)/ */
  NextGradients_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_1);
  /* _L13=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles#1)/ */
  NextSpeedProfiles_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextSpeedProfiles_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Area_D_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  /* _L1=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients#1)/ */
  NextGradients_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_1);
  /* _L13=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles#1)/ */
  NextSpeedProfiles_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextSpeedProfiles_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

