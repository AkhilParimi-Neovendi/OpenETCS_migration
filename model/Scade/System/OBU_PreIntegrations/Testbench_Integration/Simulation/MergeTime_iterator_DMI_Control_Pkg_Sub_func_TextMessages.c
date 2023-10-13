/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator/ */
void MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  array_float64_10 *acc,
  /* ImpArray/ */
  array_float64_10 *ImpArray,
  /* numAuxi/ */
  kcg_int64 numAuxi,
  /* AuxiArray/ */
  array_float64_10 *AuxiArray,
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L25 = numAuxi;
  outC->_L41 = index;
  outC->_L42 = outC->_L41 - outC->_L25;
  kcg_copy_array_float64_10(&outC->_L40, AuxiArray);
  kcg_copy_array_float64_10(&outC->_L38, acc);
  outC->_L36 = kcg_lit_float64(-1.0);
  outC->_L34 = kcg_lit_float64(-1.0);
  outC->_L33 = index;
  if ((kcg_lit_int64(0) <= outC->_L33) & (outC->_L33 < kcg_lit_int64(10))) {
    outC->_L32 = outC->_L40[outC->_L33];
  }
  else {
    outC->_L32 = outC->_L34;
  }
  outC->_L35 = outC->_L32 != outC->_L36;
  outC->_L29 = c_hh_DMI_Control_Pkg;
  kcg_copy_array_float64_10(&outC->_L24, ImpArray);
  outC->_L21 = index;
  if ((kcg_lit_int64(0) <= outC->_L42) & (outC->_L42 < kcg_lit_int64(10))) {
    outC->_L11 = outC->_L24[outC->_L42];
  }
  else {
    outC->_L11 = outC->_L29;
  }
  kcg_copy_array_float64_10(&outC->_L12, acc);
  kcg_copy_array_float64_10(&outC->_L15, &outC->_L12);
  if ((kcg_lit_int64(0) <= outC->_L21) & (outC->_L21 < kcg_lit_int64(10))) {
    outC->_L15[outC->_L21] = outC->_L11;
  }
  /* _L5= */
  if (outC->_L35) {
    kcg_copy_array_float64_10(&outC->_L5, &outC->_L38);
  }
  else {
    kcg_copy_array_float64_10(&outC->_L5, &outC->_L15);
  }
  kcg_copy_array_float64_10(&outC->OutputTimeArray, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void MergeTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L42 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int64(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L40[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L38[idx1] = kcg_lit_float64(0.0);
  }
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L24[idx2] = kcg_lit_float64(0.0);
  }
  outC->_L21 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_float64(0.0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L12[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L15[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L5[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->OutputTimeArray[idx6] = kcg_lit_float64(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

