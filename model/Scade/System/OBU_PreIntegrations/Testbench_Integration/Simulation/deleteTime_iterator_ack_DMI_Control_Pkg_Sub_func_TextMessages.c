/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack/ */
void deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  array_float64_5 *acc,
  /* Position/ */
  kcg_int64 Position,
  /* time_array/ */
  array_float64_5 *time_array,
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L28 = kcg_lit_int64(1);
  outC->_L25 = index;
  outC->_L27 = outC->_L25 + outC->_L28;
  outC->_L26 = kcg_lit_float64(-1.0);
  kcg_copy_array_float64_5(&outC->_L24, time_array);
  outC->_L23 = index;
  kcg_copy_array_float64_5(&outC->_L22, acc);
  if ((kcg_lit_int64(0) <= outC->_L27) & (outC->_L27 < kcg_lit_int64(5))) {
    outC->_L20 = outC->_L24[outC->_L27];
  }
  else {
    outC->_L20 = outC->_L26;
  }
  kcg_copy_array_float64_5(&outC->_L21, &outC->_L22);
  if ((kcg_lit_int64(0) <= outC->_L23) & (outC->_L23 < kcg_lit_int64(5))) {
    outC->_L21[outC->_L23] = outC->_L20;
  }
  kcg_copy_array_float64_5(&outC->_L19, acc);
  outC->_L2 = Position;
  outC->_L1 = index;
  outC->_L4 = outC->_L1 < outC->_L2;
  /* _L6= */
  if (outC->_L4) {
    kcg_copy_array_float64_5(&outC->_L6, &outC->_L19);
  }
  else {
    kcg_copy_array_float64_5(&outC->_L6, &outC->_L21);
  }
  kcg_copy_array_float64_5(&outC->time, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void deleteTime_iterator_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L24[idx] = kcg_lit_float64(0.0);
  }
  outC->_L23 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L22[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L21[idx2] = kcg_lit_float64(0.0);
  }
  outC->_L20 = kcg_lit_float64(0.0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L19[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L6[idx4] = kcg_lit_float64(0.0);
  }
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->time[idx5] = kcg_lit_float64(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void deleteTime_iterator_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

