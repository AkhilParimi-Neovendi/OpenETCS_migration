/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P015_fs_struct_to_array/ */
void C_P015_fs_struct_to_array_TM_lib_internal(
  /* section/ */
  P015_section_int_T_TM *section,
  outC_C_P015_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P015_section_int_T_TM(&outC->_L1, section);
  outC->_L3 = outC->_L1.L_SECTION;
  outC->_L4 = outC->_L1.Q_SECTIONTIMER;
  outC->_L5 = outC->_L1.T_SECTIONTIMER;
  outC->_L6 = outC->_L1.D_SECTIONTIMERSTOPLOC;
  outC->_L2[0] = outC->_L3;
  outC->_L2[1] = outC->_L4;
  outC->_L2[2] = outC->_L5;
  outC->_L2[3] = outC->_L6;
  kcg_copy_P015_section_array_T_TM(&outC->section_arrays, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P015_fs_struct_to_array_init_TM_lib_internal(
  outC_C_P015_fs_struct_to_array_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  outC->_L1.L_SECTION = kcg_lit_int32(0);
  outC->_L1.Q_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L1.T_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L1.D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->section_arrays[idx1] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P015_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P015_fs_struct_to_array_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

