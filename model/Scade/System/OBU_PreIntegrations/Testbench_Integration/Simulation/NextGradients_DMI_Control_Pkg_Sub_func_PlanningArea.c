/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients/ */
void NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float32 inTrainPosition,
  /* inGradientsStart/ */
  array_float32_32 *inGradientsStart,
  /* inGradientsEnd/ */
  array_float32_32 *inGradientsEnd,
  /* inGradientsValue/ */
  array_float32_32 *inGradientsValue,
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_float32 acc;
  static kcg_size idx;
  static kcg_float32 noname;

  kcg_copy_array_float32_32(&outC->_L54, inGradientsValue);
  kcg_copy_array_float32_32(&outC->_L53, inGradientsEnd);
  kcg_copy_array_float32_32(&outC->_L52, inGradientsStart);
  outC->_L13 = kcg_lit_int32(2);
  outC->_L2 = inTrainPosition;
  kcg_copy_array_float32_32(&outC->_L3, inGradientsStart);
  outC->_L7 = kcg_true;
  outC->_L51 = outC->_L2;
  /* _L6= */
  if (outC->_L7) {
    /* _L6= */
    for (idx = 0; idx < 32; idx++) {
      acc = outC->_L51;
      /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator#1)/ */
      NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
        acc,
        outC->_L3[idx],
        &outC->Context_NextGradients_Iterator_1[idx]);
      outC->_L51 = outC->Context_NextGradients_Iterator_1[idx].AccOut;
      outC->_L6 = /* _L6= */(kcg_int32) (idx + 1);
      /* _L6= */
      if (!outC->Context_NextGradients_Iterator_1[idx].outFirstIndexOfNextGradients) {
        break;
      }
    }
  }
  else {
    outC->_L6 = kcg_lit_int32(0);
  }
  outC->_L12 = outC->_L6 - outC->_L13;
  outC->lGradientsFirstIndex = outC->_L12;
  noname = outC->_L51;
  kcg_copy_array_float32_32(&outC->GradientsValueDMI, &outC->_L54);
  kcg_copy_array_float32_32(&outC->GradientsEndDMI, &outC->_L53);
  kcg_copy_array_float32_32(&outC->GradientsStartDMI, &outC->_L52);
  kcg_copy_array_float32_32(&outC->_L48, inGradientsValue);
  kcg_copy_array_float32_32(&outC->_L47, inGradientsEnd);
  outC->_L46 = outC->lGradientsFirstIndex;
  outC->_L45 = outC->lGradientsFirstIndex;
  outC->_L44 = outC->lGradientsFirstIndex;
  kcg_copy_array_float32_32(&outC->_L43, inGradientsStart);
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value#1)/ */
  NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L46,
    &outC->_L48,
    &outC->Context_NextGradients_Value_1);
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End#1)/ */
  NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L45,
    &outC->_L47,
    &outC->Context_NextGradients_End_1);
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start#1)/ */
  NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L44,
    &outC->_L43,
    &outC->Context_NextGradients_Start_1);
}

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
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

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L54[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L53[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L52[idx3] = kcg_lit_float32(0.0);
  }
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_float32(0.0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L48[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L47[idx5] = kcg_lit_float32(0.0);
  }
  outC->_L46 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L43[idx6] = kcg_lit_float32(0.0);
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L3[idx7] = kcg_lit_float32(0.0);
  }
  outC->_L2 = kcg_lit_float32(0.0);
  outC->lGradientsFirstIndex = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->GradientsValueDMI[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->GradientsEndDMI[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->GradientsStartDMI[idx10] = kcg_lit_float32(0.0);
  }
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start#1)/ */
  NextGradients_Start_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_Start_1);
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End#1)/ */
  NextGradients_End_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_End_1);
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value#1)/ */
  NextGradients_Value_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_Value_1);
  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator#1)/ */
    NextGradients_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_NextGradients_Iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_size idx;

  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start#1)/ */
  NextGradients_Start_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_Start_1);
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End#1)/ */
  NextGradients_End_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_End_1);
  /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value#1)/ */
  NextGradients_Value_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextGradients_Value_1);
  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator#1)/ */
    NextGradients_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_NextGradients_Iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

