/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P041_fs_struct_to_array/ */
void C_P041_fs_struct_to_array_TM_lib_internal(
  /* section/ */
  P041_section_int_T_TM *section,
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P041_section_int_T_TM(&outC->_L1, section);
  outC->_L3 = outC->_L1.M_LEVELTR;
  outC->_L4 = outC->_L1.NID_NTC;
  outC->_L11 = outC->_L1.L_ACKLEVELTR;
  outC->_L10[0] = outC->_L3;
  outC->_L10[1] = outC->_L4;
  outC->_L10[2] = outC->_L11;
  kcg_copy_P041_section_array_T_TM(&outC->section_arrays, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P041_fs_struct_to_array_init_TM_lib_internal(
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L11 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L10[idx] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L1.M_LEVELTR = kcg_lit_int32(0);
  outC->_L1.NID_NTC = kcg_lit_int32(0);
  outC->_L1.L_ACKLEVELTR = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->section_arrays[idx1] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P041_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P041_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

