/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance/ */
void NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inSpeedProfiles_FirstIndex/ */
  kcg_int32 inSpeedProfiles_FirstIndex,
  /* inSpeedProfiles_Distance/ */
  array_float32_32 *inSpeedProfiles_Distance,
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
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

  idx = inSpeedProfiles_FirstIndex + kcg_lit_int32(4);
  kcg_copy_array_float32_32(&outC->_L32, inSpeedProfiles_Distance);
  if ((kcg_lit_int32(0) <= idx) & (idx < kcg_lit_int32(32))) {
    outC->_L40 = outC->_L32[idx];
  }
  else {
    outC->_L40 = kcg_lit_float32(0.0);
  }
  idx1 = inSpeedProfiles_FirstIndex + kcg_lit_int32(8);
  if ((kcg_lit_int32(0) <= idx1) & (idx1 < kcg_lit_int32(32))) {
    outC->_L39 = outC->_L32[idx1];
  }
  else {
    outC->_L39 = kcg_lit_float32(0.0);
  }
  if ((kcg_lit_int32(0) <= inSpeedProfiles_FirstIndex) &
    (inSpeedProfiles_FirstIndex < kcg_lit_int32(32))) {
    outC->_L36 = outC->_L32[inSpeedProfiles_FirstIndex];
  }
  else {
    outC->_L36 = kcg_lit_float32(0.0);
  }
  idx5 = inSpeedProfiles_FirstIndex + kcg_lit_int32(1);
  if ((kcg_lit_int32(0) <= idx5) & (idx5 < kcg_lit_int32(32))) {
    outC->_L31 = outC->_L32[idx5];
  }
  else {
    outC->_L31 = kcg_lit_float32(0.0);
  }
  idx6 = inSpeedProfiles_FirstIndex + kcg_lit_int32(2);
  if ((kcg_lit_int32(0) <= idx6) & (idx6 < kcg_lit_int32(32))) {
    outC->_L29 = outC->_L32[idx6];
  }
  else {
    outC->_L29 = kcg_lit_float32(0.0);
  }
  idx3 = inSpeedProfiles_FirstIndex + kcg_lit_int32(3);
  if ((kcg_lit_int32(0) <= idx3) & (idx3 < kcg_lit_int32(32))) {
    outC->_L35 = outC->_L32[idx3];
  }
  else {
    outC->_L35 = kcg_lit_float32(0.0);
  }
  idx8 = inSpeedProfiles_FirstIndex + kcg_lit_int32(5);
  if ((kcg_lit_int32(0) <= idx8) & (idx8 < kcg_lit_int32(32))) {
    outC->_L27 = outC->_L32[idx8];
  }
  else {
    outC->_L27 = kcg_lit_float32(0.0);
  }
  idx7 = inSpeedProfiles_FirstIndex + kcg_lit_int32(6);
  if ((kcg_lit_int32(0) <= idx7) & (idx7 < kcg_lit_int32(32))) {
    outC->_L28 = outC->_L32[idx7];
  }
  else {
    outC->_L28 = kcg_lit_float32(0.0);
  }
  idx4 = inSpeedProfiles_FirstIndex + kcg_lit_int32(7);
  if ((kcg_lit_int32(0) <= idx4) & (idx4 < kcg_lit_int32(32))) {
    outC->_L34 = outC->_L32[idx4];
  }
  else {
    outC->_L34 = kcg_lit_float32(0.0);
  }
  idx2 = inSpeedProfiles_FirstIndex + kcg_lit_int32(9);
  if ((kcg_lit_int32(0) <= idx2) & (idx2 < kcg_lit_int32(32))) {
    outC->_L37 = outC->_L32[idx2];
  }
  else {
    outC->_L37 = kcg_lit_float32(0.0);
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
  kcg_copy_array_float32_10(&outC->SpeedProfiles_Distance, &outC->_L38);
}

#ifndef KCG_USER_DEFINED_INIT
void NextSpeedProfiles_Distance_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L27 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L32[idx] = kcg_lit_float32(0.0);
  }
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L35 = kcg_lit_float32(0.0);
  outC->_L36 = kcg_lit_float32(0.0);
  outC->_L37 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L38[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L39 = kcg_lit_float32(0.0);
  outC->_L40 = kcg_lit_float32(0.0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->SpeedProfiles_Distance[idx2] = kcg_lit_float32(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextSpeedProfiles_Distance_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

