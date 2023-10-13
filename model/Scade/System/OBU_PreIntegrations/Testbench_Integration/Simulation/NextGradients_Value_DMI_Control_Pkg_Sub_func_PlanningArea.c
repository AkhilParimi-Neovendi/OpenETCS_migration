/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value/ */
void NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* GradientsFirstIndex/ */
  kcg_int64 GradientsFirstIndex,
  /* inGradientsValue/ */
  array_float64_32 *inGradientsValue,
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_int64 idx;
  static kcg_int64 idx1;
  static kcg_int64 idx2;
  static kcg_int64 idx3;
  static kcg_int64 idx4;
  static kcg_int64 idx5;
  static kcg_int64 idx6;
  static kcg_int64 idx7;
  static kcg_int64 idx8;
  static kcg_int64 idx9;
  static kcg_int64 idx10;
  static array_float64_12 noname;

  kcg_copy_array_float64_32(&outC->_L24, inGradientsValue);
  if ((kcg_lit_int64(0) <= GradientsFirstIndex) & (GradientsFirstIndex <
      kcg_lit_int64(32))) {
    outC->_L19 = outC->_L24[GradientsFirstIndex];
  }
  else {
    outC->_L19 = kcg_lit_float64(0.0);
  }
  idx5 = GradientsFirstIndex + kcg_lit_int64(1);
  if ((kcg_lit_int64(0) <= idx5) & (idx5 < kcg_lit_int64(32))) {
    outC->_L18 = outC->_L24[idx5];
  }
  else {
    outC->_L18 = kcg_lit_float64(0.0);
  }
  idx1 = GradientsFirstIndex + kcg_lit_int64(2);
  if ((kcg_lit_int64(0) <= idx1) & (idx1 < kcg_lit_int64(32))) {
    outC->_L25 = outC->_L24[idx1];
  }
  else {
    outC->_L25 = kcg_lit_float64(0.0);
  }
  idx4 = GradientsFirstIndex + kcg_lit_int64(3);
  if ((kcg_lit_int64(0) <= idx4) & (idx4 < kcg_lit_int64(32))) {
    outC->_L20 = outC->_L24[idx4];
  }
  else {
    outC->_L20 = kcg_lit_float64(0.0);
  }
  idx7 = GradientsFirstIndex + kcg_lit_int64(4);
  if ((kcg_lit_int64(0) <= idx7) & (idx7 < kcg_lit_int64(32))) {
    outC->_L16 = outC->_L24[idx7];
  }
  else {
    outC->_L16 = kcg_lit_float64(0.0);
  }
  idx2 = GradientsFirstIndex + kcg_lit_int64(5);
  if ((kcg_lit_int64(0) <= idx2) & (idx2 < kcg_lit_int64(32))) {
    outC->_L22 = outC->_L24[idx2];
  }
  else {
    outC->_L22 = kcg_lit_float64(0.0);
  }
  idx8 = GradientsFirstIndex + kcg_lit_int64(6);
  if ((kcg_lit_int64(0) <= idx8) & (idx8 < kcg_lit_int64(32))) {
    outC->_L15 = outC->_L24[idx8];
  }
  else {
    outC->_L15 = kcg_lit_float64(0.0);
  }
  idx10 = GradientsFirstIndex + kcg_lit_int64(7);
  if ((kcg_lit_int64(0) <= idx10) & (idx10 < kcg_lit_int64(32))) {
    outC->_L13 = outC->_L24[idx10];
  }
  else {
    outC->_L13 = kcg_lit_float64(0.0);
  }
  idx6 = GradientsFirstIndex + kcg_lit_int64(8);
  if ((kcg_lit_int64(0) <= idx6) & (idx6 < kcg_lit_int64(32))) {
    outC->_L17 = outC->_L24[idx6];
  }
  else {
    outC->_L17 = kcg_lit_float64(0.0);
  }
  idx9 = GradientsFirstIndex + kcg_lit_int64(9);
  if ((kcg_lit_int64(0) <= idx9) & (idx9 < kcg_lit_int64(32))) {
    outC->_L14 = outC->_L24[idx9];
  }
  else {
    outC->_L14 = kcg_lit_float64(0.0);
  }
  idx3 = GradientsFirstIndex + kcg_lit_int64(10);
  if ((kcg_lit_int64(0) <= idx3) & (idx3 < kcg_lit_int64(32))) {
    outC->_L21 = outC->_L24[idx3];
  }
  else {
    outC->_L21 = kcg_lit_float64(0.0);
  }
  idx = GradientsFirstIndex + kcg_lit_int64(11);
  if ((kcg_lit_int64(0) <= idx) & (idx < kcg_lit_int64(32))) {
    outC->_L26 = outC->_L24[idx];
  }
  else {
    outC->_L26 = kcg_lit_float64(0.0);
  }
  outC->_L23[0] = outC->_L19;
  outC->_L23[1] = outC->_L18;
  outC->_L23[2] = outC->_L25;
  outC->_L23[3] = outC->_L20;
  outC->_L23[4] = outC->_L16;
  outC->_L23[5] = outC->_L22;
  outC->_L23[6] = outC->_L15;
  outC->_L23[7] = outC->_L13;
  outC->_L23[8] = outC->_L17;
  outC->_L23[9] = outC->_L14;
  outC->_L23[10] = outC->_L21;
  outC->_L23[11] = outC->_L26;
  kcg_copy_array_float64_12(&noname, &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_Value_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 12; idx++) {
    outC->_L23[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L24[idx1] = kcg_lit_float64(0.0);
  }
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_Value_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

