/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P005_fs_struct_to_array/ */
void C_P005_fs_struct_to_array_TM_lib_internal(
  /* section/ */
  P005_section_int_T_TM *section,
  outC_C_P005_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P005_section_int_T_TM(&outC->_L1, section);
  outC->_L3 = outC->_L1.D_LINK;
  outC->_L4 = outC->_L1.Q_NEWCOUNTRY;
  outC->_L5 = outC->_L1.NID_C;
  outC->_L6 = outC->_L1.NID_BG;
  outC->_L12 = outC->_L1.Q_LINKORIENTATION;
  outC->_L11 = outC->_L1.Q_LINKREACTION;
  outC->_L10 = outC->_L1.Q_LOCACC;
  outC->_L2[0] = outC->_L3;
  outC->_L2[1] = outC->_L4;
  outC->_L2[2] = outC->_L5;
  outC->_L2[3] = outC->_L6;
  outC->_L2[4] = outC->_L12;
  outC->_L2[5] = outC->_L11;
  outC->_L2[6] = outC->_L10;
  kcg_copy_P005_section_array_T_TM(&outC->section_arrays, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P005_fs_struct_to_array_init_TM_lib_internal(
  outC_C_P005_fs_struct_to_array_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  for (idx = 0; idx < 7; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  outC->_L1.D_LINK = kcg_lit_int32(0);
  outC->_L1.Q_NEWCOUNTRY = kcg_lit_int32(0);
  outC->_L1.NID_C = kcg_lit_int32(0);
  outC->_L1.NID_BG = kcg_lit_int32(0);
  outC->_L1.Q_LINKORIENTATION = kcg_lit_int32(0);
  outC->_L1.Q_LINKREACTION = kcg_lit_int32(0);
  outC->_L1.Q_LOCACC = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->section_arrays[idx1] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P005_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P005_fs_struct_to_array_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

