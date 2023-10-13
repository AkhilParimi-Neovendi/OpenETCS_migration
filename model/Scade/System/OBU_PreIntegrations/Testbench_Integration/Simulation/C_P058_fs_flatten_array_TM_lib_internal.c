/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P058_fs_flatten_array/ */
void C_P058_fs_flatten_array_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* Acc/ */
  P058_sections_array_flat_T_TM *Acc,
  /* section_arrays/ */
  P058_OBU_sectionlist_array_T_TM *section_arrays,
  outC_C_P058_fs_flatten_array_TM_lib_internal *outC)
{
  outC->_L5 = kcg_lit_int64(2);
  outC->_L3 = i;
  outC->_L154 = outC->_L3 / outC->_L5;
  outC->_L6 = outC->_L3 % outC->_L5;
  kcg_copy_P058_OBU_sectionlist_array_T_TM(&outC->_L2, section_arrays);
  if ((kcg_lit_int64(0) <= outC->_L154) & (outC->_L154 < kcg_lit_int64(32)) &
    ((kcg_lit_int64(0) <= outC->_L6) & (outC->_L6 < kcg_lit_int64(2)))) {
    outC->_L10 = outC->_L2[outC->_L154][outC->_L6];
  }
  else {
    outC->_L10 = kcg_lit_int64(0);
  }
  outC->_L8 = i;
  kcg_copy_P058_sections_array_flat_T_TM(&outC->_L1, Acc);
  kcg_copy_P058_sections_array_flat_T_TM(&outC->_L7, &outC->_L1);
  if ((kcg_lit_int64(0) <= outC->_L8) & (outC->_L8 < kcg_lit_int64(64))) {
    outC->_L7[outC->_L8] = outC->_L10;
  }
  kcg_copy_P058_sections_array_flat_T_TM(&outC->flat, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P058_fs_flatten_array_init_TM_lib_internal(
  outC_C_P058_fs_flatten_array_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L154 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    for (idx = 0; idx < 2; idx++) {
      outC->_L2[idx1][idx] = kcg_lit_int64(0);
    }
  }
  outC->_L8 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 64; idx2++) {
    outC->_L7[idx2] = kcg_lit_int64(0);
  }
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 64; idx3++) {
    outC->_L1[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 64; idx4++) {
    outC->flat[idx4] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P058_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P058_fs_flatten_array_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_fs_flatten_array_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

