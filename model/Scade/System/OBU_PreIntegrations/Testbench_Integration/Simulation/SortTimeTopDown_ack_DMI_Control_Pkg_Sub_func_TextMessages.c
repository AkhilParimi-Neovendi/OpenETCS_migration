/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack/ */
void SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  array_float64_5 *acc,
  /* TimeQueue/ */
  array_float64_5 *TimeQueue,
  /* num/ */
  kcg_int64 num,
  /* numE/ */
  kcg_int64 numE,
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L71 = index;
  outC->_L70 = index;
  outC->_L65 = num;
  outC->_L68 = numE;
  outC->_L64 = outC->_L68 - outC->_L65;
  outC->_L69 = outC->_L70 + outC->_L64;
  outC->_L58 = num;
  outC->_L18 = index;
  outC->_L62 = outC->_L18 >= outC->_L58;
  kcg_copy_array_float64_5(&outC->_L32, TimeQueue);
  outC->_L28 = c_hh_DMI_Control_Pkg;
  if ((kcg_lit_int64(0) <= outC->_L69) & (outC->_L69 < kcg_lit_int64(5))) {
    outC->_L25 = outC->_L32[outC->_L69];
  }
  else {
    outC->_L25 = outC->_L28;
  }
  kcg_copy_array_float64_5(&outC->_L22, acc);
  kcg_copy_array_float64_5(&outC->_L14, &outC->_L22);
  if ((kcg_lit_int64(0) <= outC->_L71) & (outC->_L71 < kcg_lit_int64(5))) {
    outC->_L14[outC->_L71] = outC->_L25;
  }
  kcg_copy_array_float64_5(&outC->_L21, acc);
  /* _L19= */
  if (outC->_L62) {
    kcg_copy_array_float64_5(&outC->_L19, &outC->_L21);
  }
  else {
    kcg_copy_array_float64_5(&outC->_L19, &outC->_L14);
  }
  kcg_copy_array_float64_5(&outC->outTimeArray, &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L71 = kcg_lit_int64(0);
  outC->_L70 = kcg_lit_int64(0);
  outC->_L69 = kcg_lit_int64(0);
  outC->_L68 = kcg_lit_int64(0);
  outC->_L64 = kcg_lit_int64(0);
  outC->_L65 = kcg_lit_int64(0);
  outC->_L62 = kcg_true;
  outC->_L58 = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L14[idx] = kcg_lit_float64(0.0);
  }
  outC->_L18 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L19[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L21[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L22[idx3] = kcg_lit_float64(0.0);
  }
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L32[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->outTimeArray[idx5] = kcg_lit_float64(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

