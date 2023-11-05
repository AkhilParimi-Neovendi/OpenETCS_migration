/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End/ */
void NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* GradientsFirstIndex/ */
  kcg_int32 GradientsFirstIndex,
  /* inGradientsEnd/ */
  array_float32_32 *inGradientsEnd,
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
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

  kcg_copy_array_float32_32(&outC->_L32, inGradientsEnd);
  if ((kcg_lit_int32(0) <= GradientsFirstIndex) & (GradientsFirstIndex <
      kcg_lit_int32(32))) {
    outC->_L36 = outC->_L32[GradientsFirstIndex];
  }
  else {
    outC->_L36 = kcg_lit_float32(0.0);
  }
  idx6 = GradientsFirstIndex + kcg_lit_int32(1);
  if ((kcg_lit_int32(0) <= idx6) & (idx6 < kcg_lit_int32(32))) {
    outC->_L31 = outC->_L32[idx6];
  }
  else {
    outC->_L31 = kcg_lit_float32(0.0);
  }
  idx8 = GradientsFirstIndex + kcg_lit_int32(2);
  if ((kcg_lit_int32(0) <= idx8) & (idx8 < kcg_lit_int32(32))) {
    outC->_L29 = outC->_L32[idx8];
  }
  else {
    outC->_L29 = kcg_lit_float32(0.0);
  }
  idx3 = GradientsFirstIndex + kcg_lit_int32(3);
  if ((kcg_lit_int32(0) <= idx3) & (idx3 < kcg_lit_int32(32))) {
    outC->_L35 = outC->_L32[idx3];
  }
  else {
    outC->_L35 = kcg_lit_float32(0.0);
  }
  idx = GradientsFirstIndex + kcg_lit_int32(4);
  if ((kcg_lit_int32(0) <= idx) & (idx < kcg_lit_int32(32))) {
    outC->_L40 = outC->_L32[idx];
  }
  else {
    outC->_L40 = kcg_lit_float32(0.0);
  }
  idx10 = GradientsFirstIndex + kcg_lit_int32(5);
  if ((kcg_lit_int32(0) <= idx10) & (idx10 < kcg_lit_int32(32))) {
    outC->_L27 = outC->_L32[idx10];
  }
  else {
    outC->_L27 = kcg_lit_float32(0.0);
  }
  idx9 = GradientsFirstIndex + kcg_lit_int32(6);
  if ((kcg_lit_int32(0) <= idx9) & (idx9 < kcg_lit_int32(32))) {
    outC->_L28 = outC->_L32[idx9];
  }
  else {
    outC->_L28 = kcg_lit_float32(0.0);
  }
  idx4 = GradientsFirstIndex + kcg_lit_int32(7);
  if ((kcg_lit_int32(0) <= idx4) & (idx4 < kcg_lit_int32(32))) {
    outC->_L34 = outC->_L32[idx4];
  }
  else {
    outC->_L34 = kcg_lit_float32(0.0);
  }
  idx1 = GradientsFirstIndex + kcg_lit_int32(8);
  if ((kcg_lit_int32(0) <= idx1) & (idx1 < kcg_lit_int32(32))) {
    outC->_L39 = outC->_L32[idx1];
  }
  else {
    outC->_L39 = kcg_lit_float32(0.0);
  }
  idx2 = GradientsFirstIndex + kcg_lit_int32(9);
  if ((kcg_lit_int32(0) <= idx2) & (idx2 < kcg_lit_int32(32))) {
    outC->_L37 = outC->_L32[idx2];
  }
  else {
    outC->_L37 = kcg_lit_float32(0.0);
  }
  idx7 = GradientsFirstIndex + kcg_lit_int32(10);
  if ((kcg_lit_int32(0) <= idx7) & (idx7 < kcg_lit_int32(32))) {
    outC->_L30 = outC->_L32[idx7];
  }
  else {
    outC->_L30 = kcg_lit_float32(0.0);
  }
  idx5 = GradientsFirstIndex + kcg_lit_int32(11);
  if ((kcg_lit_int32(0) <= idx5) & (idx5 < kcg_lit_int32(32))) {
    outC->_L33 = outC->_L32[idx5];
  }
  else {
    outC->_L33 = kcg_lit_float32(0.0);
  }
  outC->_L38[0] = outC->_L36;
  outC->_L38[1] = outC->_L31;
  outC->_L38[2] = outC->_L29;
  outC->_L38[3] = outC->_L35;
  outC->_L38[4] = outC->_L40;
  outC->_L38[5] = outC->_L27;
  outC->_L38[6] = outC->_L28;
  outC->_L38[7] = outC->_L34;
  outC->_L38[8] = outC->_L39;
  outC->_L38[9] = outC->_L37;
  outC->_L38[10] = outC->_L30;
  outC->_L38[11] = outC->_L33;
  kcg_copy_array_float32_12(&noname, &outC->_L38);
}

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_End_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L27 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L32[idx] = kcg_lit_float32(0.0);
  }
  outC->_L33 = kcg_lit_float32(0.0);
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L35 = kcg_lit_float32(0.0);
  outC->_L36 = kcg_lit_float32(0.0);
  outC->_L37 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 12; idx1++) {
    outC->_L38[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L39 = kcg_lit_float32(0.0);
  outC->_L40 = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_End_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

