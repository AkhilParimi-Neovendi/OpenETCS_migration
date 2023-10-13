/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P021_fs_struct_to_array/ */
void C_P021_fs_struct_to_array_TM_lib_internal(
  /* section/ */
  P021_section_int_T_TM *section,
  outC_C_P021_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P021_section_int_T_TM(&outC->_L1, section);
  outC->_L3 = outC->_L1.D_GRADIENT;
  outC->_L4 = outC->_L1.Q_GDIR;
  outC->_L5 = outC->_L1.G_A;
  outC->_L2[0] = outC->_L3;
  outC->_L2[1] = outC->_L4;
  outC->_L2[2] = outC->_L5;
  kcg_copy_P021_section_array_T_TM(&outC->section_arrays, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P021_fs_struct_to_array_init_TM_lib_internal(
  outC_C_P021_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  outC->_L1.D_GRADIENT = kcg_lit_int64(0);
  outC->_L1.Q_GDIR = kcg_lit_int64(0);
  outC->_L1.G_A = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->section_arrays[idx1] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P021_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P021_fs_struct_to_array_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

