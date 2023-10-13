/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P015_flatten_sections/ */
void C_P015_flatten_sections_TM_lib_internal(
  /* MergedSections/ */
  P015_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P015_flatten_sections_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static P015_sections_array_flat_T_TM acc;
  static kcg_size idx2;

  kcg_copy_P015_OBU_sectionlist_int_T_TM(&outC->_L75, MergedSections);
  /* _L74= */
  for (idx = 0; idx < 32; idx++) {
    /* _L74=(TM_lib_internal::C_P015_fs_struct_to_array#2)/ */
    C_P015_fs_struct_to_array_TM_lib_internal(
      &outC->_L75[idx],
      &outC->Context_C_P015_fs_struct_to_array_2[idx]);
    kcg_copy_P015_section_array_T_TM(
      &outC->_L74[idx],
      &outC->Context_C_P015_fs_struct_to_array_2[idx].section_arrays);
  }
  /* _L80/ */
  for (idx1 = 0; idx1 < 128; idx1++) {
    kcg_copy_P015_OBU_sectionlist_array_T_TM(&outC->_L80[idx1], &outC->_L74);
  }
  kcg_copy_P015_sections_array_flat_T_TM(
    &outC->_L76,
    (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
  kcg_copy_P015_sections_array_flat_T_TM(&outC->_L78, &outC->_L76);
  /* _L78= */
  for (idx2 = 0; idx2 < 128; idx2++) {
    kcg_copy_P015_sections_array_flat_T_TM(&acc, &outC->_L78);
    /* _L78=(TM_lib_internal::C_P015_fs_flatten_array#1)/ */
    C_P015_fs_flatten_array_TM_lib_internal(
      /* _L78= */(kcg_int64) idx2,
      &acc,
      &outC->_L80[idx2],
      &outC->Context_C_P015_fs_flatten_array_1[idx2]);
    kcg_copy_P015_sections_array_flat_T_TM(
      &outC->_L78,
      &outC->Context_C_P015_fs_flatten_array_1[idx2].flat);
  }
  kcg_copy_P015_sections_array_flat_T_TM(&outC->Flattened, &outC->_L78);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P015_flatten_sections_init_TM_lib_internal(
  outC_C_P015_flatten_sections_TM_lib_internal *outC)
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

  for (idx4 = 0; idx4 < 128; idx4++) {
    for (idx3 = 0; idx3 < 32; idx3++) {
      for (idx2 = 0; idx2 < 4; idx2++) {
        outC->_L80[idx4][idx3][idx2] = kcg_lit_int64(0);
      }
    }
  }
  for (idx5 = 0; idx5 < 128; idx5++) {
    outC->_L78[idx5] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 32; idx7++) {
    for (idx6 = 0; idx6 < 4; idx6++) {
      outC->_L74[idx7][idx6] = kcg_lit_int64(0);
    }
  }
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L75[idx8].L_SECTION = kcg_lit_int64(0);
    outC->_L75[idx8].Q_SECTIONTIMER = kcg_lit_int64(0);
    outC->_L75[idx8].T_SECTIONTIMER = kcg_lit_int64(0);
    outC->_L75[idx8].D_SECTIONTIMERSTOPLOC = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 128; idx9++) {
    outC->_L76[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 128; idx10++) {
    outC->Flattened[idx10] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 128; idx1++) {
    /* _L78=(TM_lib_internal::C_P015_fs_flatten_array#1)/ */
    C_P015_fs_flatten_array_init_TM_lib_internal(
      &outC->Context_C_P015_fs_flatten_array_1[idx1]);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L74=(TM_lib_internal::C_P015_fs_struct_to_array#2)/ */
    C_P015_fs_struct_to_array_init_TM_lib_internal(
      &outC->Context_C_P015_fs_struct_to_array_2[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P015_flatten_sections_reset_TM_lib_internal(
  outC_C_P015_flatten_sections_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 128; idx1++) {
    /* _L78=(TM_lib_internal::C_P015_fs_flatten_array#1)/ */
    C_P015_fs_flatten_array_reset_TM_lib_internal(
      &outC->Context_C_P015_fs_flatten_array_1[idx1]);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L74=(TM_lib_internal::C_P015_fs_struct_to_array#2)/ */
    C_P015_fs_struct_to_array_reset_TM_lib_internal(
      &outC->Context_C_P015_fs_struct_to_array_2[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_flatten_sections_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

