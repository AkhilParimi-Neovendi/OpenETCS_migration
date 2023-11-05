/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime/ */
void MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
  /* num/ */
  kcg_int32 num,
  /* AuxTimeiArray/ */
  array_float32_10 *AuxTimeiArray,
  /* impTimeArray/ */
  array_float32_10 *impTimeArray,
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static array_float32_10 acc;
  static kcg_size idx3;

  kcg_copy_array_float32_10(&outC->_L12, AuxTimeiArray);
  kcg_copy_array_float32_10(&outC->_L13, impTimeArray);
  /* _L10/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy_array_float32_10(&outC->_L10[idx], &outC->_L13);
  }
  outC->_L11 = num;
  /* _L8/ */
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L8[idx1] = outC->_L11;
  }
  /* _L14/ */
  for (idx2 = 0; idx2 < 10; idx2++) {
    kcg_copy_array_float32_10(&outC->_L14[idx2], &outC->_L12);
  }
  kcg_copy_array_float32_10(&outC->_L9, &outC->_L12);
  /* _L9= */
  for (idx3 = 0; idx3 < 10; idx3++) {
    kcg_copy_array_float32_10(&acc, &outC->_L9);
    /* _L9=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator#1)/ */
    MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L9= */(kcg_int32) idx3,
      &acc,
      &outC->_L10[idx3],
      outC->_L8[idx3],
      &outC->_L14[idx3],
      &outC->Context_MergeTime_iterator_1[idx3]);
    kcg_copy_array_float32_10(
      &outC->_L9,
      &outC->Context_MergeTime_iterator_1[idx3].OutputTimeArray);
  }
  kcg_copy_array_float32_10(&outC->OutQueue, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L8[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L9[idx2] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 10; idx4++) {
    for (idx3 = 0; idx3 < 10; idx3++) {
      outC->_L10[idx4][idx3] = kcg_lit_float32(0.0);
    }
  }
  outC->_L11 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L12[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L13[idx6] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    for (idx7 = 0; idx7 < 10; idx7++) {
      outC->_L14[idx8][idx7] = kcg_lit_float32(0.0);
    }
  }
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->OutQueue[idx9] = kcg_lit_float32(0.0);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L9=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator#1)/ */
    MergeTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_MergeTime_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L9=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator#1)/ */
    MergeTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_MergeTime_iterator_1[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

