/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles/ */
void NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float32 inTrainPosition,
  /* inSpeedProfile_Distance/ */
  array_float32_32 *inSpeedProfile_Distance,
  /* inSpeedProfile_Speed/ */
  array_float32_32 *inSpeedProfile_Speed,
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_float32 acc;
  static kcg_size idx;
  static kcg_float32 noname;

  kcg_copy_array_float32_32(&outC->_L48, inSpeedProfile_Speed);
  outC->_L13 = kcg_lit_int32(2);
  outC->_L2 = inTrainPosition;
  kcg_copy_array_float32_32(&outC->_L3, inSpeedProfile_Distance);
  outC->_L7 = kcg_true;
  outC->_L51 = outC->_L2;
  /* _L6= */
  if (outC->_L7) {
    /* _L6= */
    for (idx = 0; idx < 32; idx++) {
      acc = outC->_L51;
      /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator#1)/ */
      NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
        acc,
        outC->_L3[idx],
        &outC->Context_NextSpeedProfiles_Iterator_1[idx]);
      outC->_L51 = outC->Context_NextSpeedProfiles_Iterator_1[idx].AccOut;
      outC->_L6 = /* _L6= */(kcg_int32) (idx + 1);
      /* _L6= */
      if (!outC->Context_NextSpeedProfiles_Iterator_1[idx].outFirstIndexOfNextSpeedProfiles) {
        break;
      }
    }
  }
  else {
    outC->_L6 = kcg_lit_int32(0);
  }
  outC->_L12 = outC->_L6 - outC->_L13;
  outC->lSpeedProfileFirstIndex = outC->_L12;
  noname = outC->_L51;
  outC->_L46 = outC->lSpeedProfileFirstIndex;
  /* _L40=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed#1)/ */
  NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L46,
    &outC->_L48,
    &outC->Context_NextSpeedProfiles_Speed_1);
  kcg_copy_array_float32_10(
    &outC->_L40,
    &outC->Context_NextSpeedProfiles_Speed_1.SpeedProfiles_Speed);
  kcg_copy_array_float32_10(&outC->SpeedProfile_Speed_DMI, &outC->_L40);
  outC->_L44 = outC->lSpeedProfileFirstIndex;
  kcg_copy_array_float32_32(&outC->_L43, inSpeedProfile_Distance);
  /* _L38=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance#1)/ */
  NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea(
    outC->_L44,
    &outC->_L43,
    &outC->Context_NextSpeedProfiles_Distance_1);
  kcg_copy_array_float32_10(
    &outC->_L38,
    &outC->Context_NextSpeedProfiles_Distance_1.SpeedProfiles_Distance);
  kcg_copy_array_float32_10(&outC->SpeedProfile_Distance_DMI, &outC->_L38);
}

#ifndef KCG_USER_DEFINED_INIT
void NextSpeedProfiles_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L48[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_float32(0.0);
  outC->_L46 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L43[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L40[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L38[idx4] = kcg_lit_float32(0.0);
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L3[idx5] = kcg_lit_float32(0.0);
  }
  outC->_L2 = kcg_lit_float32(0.0);
  outC->lSpeedProfileFirstIndex = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->SpeedProfile_Speed_DMI[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->SpeedProfile_Distance_DMI[idx7] = kcg_lit_float32(0.0);
  }
  /* _L38=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance#1)/ */
  NextSpeedProfiles_Distance_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextSpeedProfiles_Distance_1);
  /* _L40=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed#1)/ */
  NextSpeedProfiles_Speed_init_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextSpeedProfiles_Speed_1);
  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator#1)/ */
    NextSpeedProfiles_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_NextSpeedProfiles_Iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextSpeedProfiles_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_size idx;

  /* _L38=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance#1)/ */
  NextSpeedProfiles_Distance_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextSpeedProfiles_Distance_1);
  /* _L40=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed#1)/ */
  NextSpeedProfiles_Speed_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
    &outC->Context_NextSpeedProfiles_Speed_1);
  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator#1)/ */
    NextSpeedProfiles_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
      &outC->Context_NextSpeedProfiles_Iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

