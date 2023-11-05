/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal/ */
void SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  array_float32_10 *acc,
  /* TimeQueue/ */
  array_float32_10 *TimeQueue,
  /* num/ */
  kcg_int32 num,
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L80 = index;
  outC->_L73 = num;
  outC->_L71 = cDIM_MSGQueueMax_DMI_Control_Pkg;
  outC->_L78 = outC->_L71 - outC->_L73;
  outC->_L79 = outC->_L78 + outC->_L80;
  outC->_L77 = c_hh_DMI_Control_Pkg;
  outC->_L76 = index;
  kcg_copy_array_float32_10(&outC->_L72, TimeQueue);
  if ((kcg_lit_int32(0) <= outC->_L79) & (outC->_L79 < kcg_lit_int32(10))) {
    outC->_L65 = outC->_L72[outC->_L79];
  }
  else {
    outC->_L65 = outC->_L77;
  }
  kcg_copy_array_float32_10(&outC->_L64, acc);
  kcg_copy_array_float32_10(&outC->_L66, &outC->_L64);
  if ((kcg_lit_int32(0) <= outC->_L76) & (outC->_L76 < kcg_lit_int32(10))) {
    outC->_L66[outC->_L76] = outC->_L65;
  }
  kcg_copy_array_float32_10(&outC->_L75, acc);
  outC->_L62 = kcg_lit_float32(-1.0);
  outC->_L69 = kcg_lit_float32(-1.0);
  outC->_L67 = index;
  kcg_copy_array_float32_10(&outC->_L63, acc);
  if ((kcg_lit_int32(0) <= outC->_L67) & (outC->_L67 < kcg_lit_int32(10))) {
    outC->_L68 = outC->_L63[outC->_L67];
  }
  else {
    outC->_L68 = outC->_L69;
  }
  outC->_L74 = outC->_L68 != outC->_L62;
  /* _L70= */
  if (outC->_L74) {
    kcg_copy_array_float32_10(&outC->_L70, &outC->_L75);
  }
  else {
    kcg_copy_array_float32_10(&outC->_L70, &outC->_L66);
  }
  kcg_copy_array_float32_10(&outC->outTimeArray, &outC->_L70);
}

#ifndef KCG_USER_DEFINED_INIT
void SortTimeTopDown_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L62 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L63[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L64[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L65 = kcg_lit_float32(0.0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L66[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L67 = kcg_lit_int32(0);
  outC->_L68 = kcg_lit_float32(0.0);
  outC->_L69 = kcg_lit_float32(0.0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L70[idx3] = kcg_lit_float32(0.0);
  }
  outC->_L71 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L72[idx4] = kcg_lit_float32(0.0);
  }
  outC->_L73 = kcg_lit_int32(0);
  outC->_L74 = kcg_true;
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L75[idx5] = kcg_lit_float32(0.0);
  }
  outC->_L76 = kcg_lit_int32(0);
  outC->_L77 = kcg_lit_float32(0.0);
  outC->_L78 = kcg_lit_int32(0);
  outC->_L79 = kcg_lit_int32(0);
  outC->_L80 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->outTimeArray[idx6] = kcg_lit_float32(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SortTimeTopDown_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

