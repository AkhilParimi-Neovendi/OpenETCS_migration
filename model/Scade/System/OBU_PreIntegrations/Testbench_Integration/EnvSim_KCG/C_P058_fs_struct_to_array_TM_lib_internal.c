/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P058_fs_struct_to_array/ */
void C_P058_fs_struct_to_array_TM_lib_internal(
  /* section/ */
  P058_section_int_T_TM *section,
  outC_C_P058_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P058_section_int_T_TM(&outC->_L1, section);
  outC->_L3 = outC->_L1.D_LOC;
  outC->_L4 = outC->_L1.Q_LGTLOC;
  outC->_L10[0] = outC->_L3;
  outC->_L10[1] = outC->_L4;
  kcg_copy_P058_section_array_T_TM(&outC->section_arrays, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P058_fs_struct_to_array_init_TM_lib_internal(
  outC_C_P058_fs_struct_to_array_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx = 0; idx < 2; idx++) {
    outC->_L10[idx] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L1.D_LOC = kcg_lit_int64(0);
  outC->_L1.Q_LGTLOC = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->section_arrays[idx1] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P058_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P058_fs_struct_to_array_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

