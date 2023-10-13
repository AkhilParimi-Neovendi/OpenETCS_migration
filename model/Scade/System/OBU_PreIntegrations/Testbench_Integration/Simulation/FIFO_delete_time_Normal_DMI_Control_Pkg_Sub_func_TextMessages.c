/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal/ */
void FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* hh_array/ */
  array_float64_10 *hh_array,
  /* mm_array/ */
  array_float64_10 *mm_array,
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static array_float64_10 acc;
  static kcg_size idx3;
  static kcg_size idx4;
  static array_float64_10 acc5;
  static kcg_size idx6;
  /* new_hh_array/ */
  static array_float64_10 last_new_hh_array;
  /* new_mm_array/ */
  static array_float64_10 last_new_mm_array;

  kcg_copy_array_float64_10(&last_new_hh_array, &outC->new_hh_array);
  kcg_copy_array_float64_10(&last_new_mm_array, &outC->new_mm_array);
  kcg_copy_array_float64_10(&outC->_L10, mm_array);
  /* _L28/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy_array_float64_10(&outC->_L28[idx], &outC->_L10);
  }
  kcg_copy_array_float64_10(&outC->_L1, hh_array);
  /* _L24/ */
  for (idx1 = 0; idx1 < 10; idx1++) {
    kcg_copy_array_float64_10(&outC->_L24[idx1], &outC->_L1);
  }
  outC->_L22 = kcg_lit_int64(0);
  kcg_copy_array_float64_10(
    &outC->_L21,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  /* _L19/ */
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L19[idx2] = outC->_L22;
  }
  kcg_copy_array_float64_10(&outC->_L20, &outC->_L21);
  /* _L20= */
  for (idx3 = 0; idx3 < 10; idx3++) {
    kcg_copy_array_float64_10(&acc, &outC->_L20);
    /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal#2)/ */
    deleteTime_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L20= */(kcg_int64) idx3,
      &acc,
      outC->_L19[idx3],
      &outC->_L28[idx3],
      &outC->Context_deleteTime_iterator_normal_2[idx3]);
    kcg_copy_array_float64_10(
      &outC->_L20,
      &outC->Context_deleteTime_iterator_normal_2[idx3].time);
  }
  kcg_copy_array_float64_10(
    &outC->_L17,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  outC->_L13 = kcg_lit_int64(0);
  /* _L4/ */
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L4[idx4] = outC->_L13;
  }
  kcg_copy_array_float64_10(&outC->_L15, &outC->_L17);
  /* _L15= */
  for (idx6 = 0; idx6 < 10; idx6++) {
    kcg_copy_array_float64_10(&acc5, &outC->_L15);
    /* _L15=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal#1)/ */
    deleteTime_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L15= */(kcg_int64) idx6,
      &acc5,
      outC->_L4[idx6],
      &outC->_L24[idx6],
      &outC->Context_deleteTime_iterator_normal_1[idx6]);
    kcg_copy_array_float64_10(
      &outC->_L15,
      &outC->Context_deleteTime_iterator_normal_1[idx6].time);
  }
  kcg_copy_array_float64_10(&outC->new_hh_array, &outC->_L15);
  kcg_copy_array_float64_10(&outC->new_mm_array, &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void FIFO_delete_time_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;

  for (idx3 = 0; idx3 < 10; idx3++) {
    for (idx2 = 0; idx2 < 10; idx2++) {
      outC->_L28[idx3][idx2] = kcg_lit_float64(0.0);
    }
  }
  for (idx5 = 0; idx5 < 10; idx5++) {
    for (idx4 = 0; idx4 < 10; idx4++) {
      outC->_L24[idx5][idx4] = kcg_lit_float64(0.0);
    }
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L19[idx6] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L20[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L21[idx8] = kcg_lit_float64(0.0);
  }
  outC->_L22 = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L17[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L15[idx10] = kcg_lit_float64(0.0);
  }
  outC->_L13 = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L1[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L4[idx12] = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L10[idx13] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L15=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal#1)/ */
    deleteTime_iterator_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_deleteTime_iterator_normal_1[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal#2)/ */
    deleteTime_iterator_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_deleteTime_iterator_normal_2[idx]);
  }
  kcg_copy_array_float64_10(
    &outC->new_mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->new_hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


void FIFO_delete_time_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L15=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal#1)/ */
    deleteTime_iterator_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_deleteTime_iterator_normal_1[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal#2)/ */
    deleteTime_iterator_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_deleteTime_iterator_normal_2[idx]);
  }
  kcg_copy_array_float64_10(
    &outC->new_mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->new_hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
}


void kcg_save_SV_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_float64_10(&SV->Context_new_hh_array, &outC->new_hh_array);
  kcg_copy_array_float64_10(&SV->Context_new_mm_array, &outC->new_mm_array);
}

void kcg_load_SV_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_copy_array_float64_10(&outC->new_hh_array, &SV->Context_new_hh_array);
  kcg_copy_array_float64_10(&outC->new_mm_array, &SV->Context_new_mm_array);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

