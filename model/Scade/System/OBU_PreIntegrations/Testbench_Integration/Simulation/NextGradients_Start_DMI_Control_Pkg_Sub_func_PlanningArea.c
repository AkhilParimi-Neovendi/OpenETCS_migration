/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start/ */
void NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* GradientsFirstIndex/ */
  kcg_int32 GradientsFirstIndex,
  /* inGradientsStart/ */
  array_float32_32 *inGradientsStart,
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int32 idx;
  static kcg_int32 idx1;
  static kcg_int32 idx2;
  static kcg_int32 idx3;
  static kcg_int32 idx4;
  static kcg_int32 idx5;
  static kcg_int32 idx6;
  static kcg_int32 idx7;
  static kcg_int32 idx8;
  static kcg_int32 idx9;
  static kcg_int32 idx10;
  static array_float32_12 noname;

  kcg_copy_array_float32_32(&outC->_L5, inGradientsStart);
  if ((kcg_lit_int32(0) <= GradientsFirstIndex) & (GradientsFirstIndex <
      kcg_lit_int32(32))) {
    outC->_L8 = outC->_L5[GradientsFirstIndex];
  }
  else {
    outC->_L8 = kcg_lit_float32(0.0);
  }
  idx9 = GradientsFirstIndex + kcg_lit_int32(1);
  if ((kcg_lit_int32(0) <= idx9) & (idx9 < kcg_lit_int32(32))) {
    outC->_L3 = outC->_L5[idx9];
  }
  else {
    outC->_L3 = kcg_lit_float32(0.0);
  }
  idx4 = GradientsFirstIndex + kcg_lit_int32(2);
  if ((kcg_lit_int32(0) <= idx4) & (idx4 < kcg_lit_int32(32))) {
    outC->_L10 = outC->_L5[idx4];
  }
  else {
    outC->_L10 = kcg_lit_float32(0.0);
  }
  idx3 = GradientsFirstIndex + kcg_lit_int32(3);
  if ((kcg_lit_int32(0) <= idx3) & (idx3 < kcg_lit_int32(32))) {
    outC->_L11 = outC->_L5[idx3];
  }
  else {
    outC->_L11 = kcg_lit_float32(0.0);
  }
  idx5 = GradientsFirstIndex + kcg_lit_int32(4);
  if ((kcg_lit_int32(0) <= idx5) & (idx5 < kcg_lit_int32(32))) {
    outC->_L9 = outC->_L5[idx5];
  }
  else {
    outC->_L9 = kcg_lit_float32(0.0);
  }
  idx10 = GradientsFirstIndex + kcg_lit_int32(5);
  if ((kcg_lit_int32(0) <= idx10) & (idx10 < kcg_lit_int32(32))) {
    outC->_L2 = outC->_L5[idx10];
  }
  else {
    outC->_L2 = kcg_lit_float32(0.0);
  }
  idx7 = GradientsFirstIndex + kcg_lit_int32(6);
  if ((kcg_lit_int32(0) <= idx7) & (idx7 < kcg_lit_int32(32))) {
    outC->_L6 = outC->_L5[idx7];
  }
  else {
    outC->_L6 = kcg_lit_float32(0.0);
  }
  idx6 = GradientsFirstIndex + kcg_lit_int32(7);
  if ((kcg_lit_int32(0) <= idx6) & (idx6 < kcg_lit_int32(32))) {
    outC->_L7 = outC->_L5[idx6];
  }
  else {
    outC->_L7 = kcg_lit_float32(0.0);
  }
  idx2 = GradientsFirstIndex + kcg_lit_int32(8);
  if ((kcg_lit_int32(0) <= idx2) & (idx2 < kcg_lit_int32(32))) {
    outC->_L12 = outC->_L5[idx2];
  }
  else {
    outC->_L12 = kcg_lit_float32(0.0);
  }
  idx8 = GradientsFirstIndex + kcg_lit_int32(9);
  if ((kcg_lit_int32(0) <= idx8) & (idx8 < kcg_lit_int32(32))) {
    outC->_L4 = outC->_L5[idx8];
  }
  else {
    outC->_L4 = kcg_lit_float32(0.0);
  }
  idx = GradientsFirstIndex + kcg_lit_int32(10);
  if ((kcg_lit_int32(0) <= idx) & (idx < kcg_lit_int32(32))) {
    outC->_L14 = outC->_L5[idx];
  }
  else {
    outC->_L14 = kcg_lit_float32(0.0);
  }
  idx1 = GradientsFirstIndex + kcg_lit_int32(11);
  if ((kcg_lit_int32(0) <= idx1) & (idx1 < kcg_lit_int32(32))) {
    outC->_L13 = outC->_L5[idx1];
  }
  else {
    outC->_L13 = kcg_lit_float32(0.0);
  }
  outC->_L1[0] = outC->_L8;
  outC->_L1[1] = outC->_L3;
  outC->_L1[2] = outC->_L10;
  outC->_L1[3] = outC->_L11;
  outC->_L1[4] = outC->_L9;
  outC->_L1[5] = outC->_L2;
  outC->_L1[6] = outC->_L6;
  outC->_L1[7] = outC->_L7;
  outC->_L1[8] = outC->_L12;
  outC->_L1[9] = outC->_L4;
  outC->_L1[10] = outC->_L14;
  outC->_L1[11] = outC->_L13;
  kcg_copy_array_float32_12(&noname, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_Start_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 12; idx++) {
    outC->_L1[idx] = kcg_lit_float32(0.0);
  }
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L5[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_Start_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

