/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027_flatten_sections_qdiff/ */
void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* MergedSections/ */
  P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 acc;
  static kcg_size idx2;

  kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(
    &outC->_L75,
    MergedSections);
  /* _L74= */
  for (idx = 0; idx < 32; idx++) {
    /* _L74=(TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff#1)/ */
    C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal(
      &outC->_L75[idx],
      &outC->Context_C_P027V1_fs_struct_to_array_qdiff_1[idx]);
    kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2(
      &outC->_L74[idx],
      &outC->Context_C_P027V1_fs_struct_to_array_qdiff_1[idx].section_arrays);
  }
  /* _L84/ */
  for (idx1 = 0; idx1 < 32; idx1++) {
    kcg_copy_array_int64_2_32(&outC->_L84[idx1], &outC->_L74);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L76,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L83,
    &outC->_L76);
  /* _L83= */
  for (idx2 = 0; idx2 < 32; idx2++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&acc, &outC->_L83);
    /* _L83=(TM_lib_internal::C_P027V1_fs_flatten_array_qdiff#1)/ */
    C_P027V1_fs_flatten_array_qdiff_TM_lib_internal(
      /* _L83= */(kcg_int64) idx2,
      &acc,
      &outC->_L84[idx2],
      &outC->Context_C_P027V1_fs_flatten_array_qdiff_1[idx2]);
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
      &outC->_L83,
      &outC->Context_C_P027V1_fs_flatten_array_qdiff_1[idx2].flat);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->Flattened,
    &outC->_L83);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P027_flatten_sections_qdiff_init_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
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

  for (idx4 = 0; idx4 < 32; idx4++) {
    for (idx3 = 0; idx3 < 32; idx3++) {
      for (idx2 = 0; idx2 < 2; idx2++) {
        outC->_L84[idx4][idx3][idx2] = kcg_lit_int64(0);
      }
    }
  }
  for (idx5 = 0; idx5 < 64; idx5++) {
    outC->_L83[idx5] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 32; idx7++) {
    for (idx6 = 0; idx6 < 2; idx6++) {
      outC->_L74[idx7][idx6] = kcg_lit_int64(0);
    }
  }
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L75[idx8].NC_DIFF = kcg_lit_int64(0);
    outC->_L75[idx8].V_DIFF = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 64; idx9++) {
    outC->_L76[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 64; idx10++) {
    outC->Flattened[idx10] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 32; idx1++) {
    /* _L83=(TM_lib_internal::C_P027V1_fs_flatten_array_qdiff#1)/ */
    C_P027V1_fs_flatten_array_qdiff_init_TM_lib_internal(
      &outC->Context_C_P027V1_fs_flatten_array_qdiff_1[idx1]);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L74=(TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff#1)/ */
    C_P027V1_fs_struct_to_array_qdiff_init_TM_lib_internal(
      &outC->Context_C_P027V1_fs_struct_to_array_qdiff_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P027_flatten_sections_qdiff_reset_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 32; idx1++) {
    /* _L83=(TM_lib_internal::C_P027V1_fs_flatten_array_qdiff#1)/ */
    C_P027V1_fs_flatten_array_qdiff_reset_TM_lib_internal(
      &outC->Context_C_P027V1_fs_flatten_array_qdiff_1[idx1]);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L74=(TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff#1)/ */
    C_P027V1_fs_struct_to_array_qdiff_reset_TM_lib_internal(
      &outC->Context_C_P027V1_fs_struct_to_array_qdiff_1[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027_flatten_sections_qdiff_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

