/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P041_flatten_sections/ */
void C_P041_flatten_sections_TM_lib_internal(
  /* MergedSections/ */
  P041_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P041_flatten_sections_TM_lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  P041_sections_array_flat_T_TM acc;
  kcg_size idx2;

  kcg_copy_P041_OBU_sectionlist_int_T_TM(&outC->_L75, MergedSections);
  /* _L74= */
  for (idx = 0; idx < 33; idx++) {
    /* _L74=(TM_lib_internal::C_P041_fs_struct_to_array#1)/ */
    C_P041_fs_struct_to_array_TM_lib_internal(
      &outC->_L75[idx],
      &outC->Context_C_P041_fs_struct_to_array_1[idx]);
    kcg_copy_P041_section_array_T_TM(
      &outC->_L74[idx],
      &outC->Context_C_P041_fs_struct_to_array_1[idx].section_arrays);
  }
  /* _L80/ */
  for (idx1 = 0; idx1 < 99; idx1++) {
    kcg_copy_array_int64_3_33(&outC->_L80[idx1], &outC->_L74);
  }
  kcg_copy_P041_sections_array_flat_T_TM(
    &outC->_L76,
    (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
  kcg_copy_P041_sections_array_flat_T_TM(&outC->_L78, &outC->_L76);
  /* _L78= */
  for (idx2 = 0; idx2 < 99; idx2++) {
    kcg_copy_P041_sections_array_flat_T_TM(&acc, &outC->_L78);
    /* _L78=(TM_lib_internal::C_P041_fs_flatten_array#1)/ */
    C_P041_fs_flatten_array_TM_lib_internal(
      /* _L78= */(kcg_int64) idx2,
      &acc,
      &outC->_L80[idx2],
      &outC->Context_C_P041_fs_flatten_array_1[idx2]);
    kcg_copy_P041_sections_array_flat_T_TM(
      &outC->_L78,
      &outC->Context_C_P041_fs_flatten_array_1[idx2].flat);
  }
  kcg_copy_P041_sections_array_flat_T_TM(&outC->Flattened, &outC->_L78);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P041_flatten_sections_init_TM_lib_internal(
  outC_C_P041_flatten_sections_TM_lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;

  for (idx4 = 0; idx4 < 99; idx4++) {
    for (idx3 = 0; idx3 < 33; idx3++) {
      for (idx2 = 0; idx2 < 3; idx2++) {
        outC->_L80[idx4][idx3][idx2] = kcg_lit_int64(0);
      }
    }
  }
  for (idx5 = 0; idx5 < 99; idx5++) {
    outC->_L78[idx5] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 33; idx7++) {
    for (idx6 = 0; idx6 < 3; idx6++) {
      outC->_L74[idx7][idx6] = kcg_lit_int64(0);
    }
  }
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L75[idx8].M_LEVELTR = kcg_lit_int64(0);
    outC->_L75[idx8].NID_NTC = kcg_lit_int64(0);
    outC->_L75[idx8].L_ACKLEVELTR = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 99; idx9++) {
    outC->_L76[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 99; idx10++) {
    outC->Flattened[idx10] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 99; idx1++) {
    /* _L78=(TM_lib_internal::C_P041_fs_flatten_array#1)/ */
    C_P041_fs_flatten_array_init_TM_lib_internal(
      &outC->Context_C_P041_fs_flatten_array_1[idx1]);
  }
  for (idx = 0; idx < 33; idx++) {
    /* _L74=(TM_lib_internal::C_P041_fs_struct_to_array#1)/ */
    C_P041_fs_struct_to_array_init_TM_lib_internal(
      &outC->Context_C_P041_fs_struct_to_array_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P041_flatten_sections_reset_TM_lib_internal(
  outC_C_P041_flatten_sections_TM_lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;

  for (idx1 = 0; idx1 < 99; idx1++) {
    /* _L78=(TM_lib_internal::C_P041_fs_flatten_array#1)/ */
    C_P041_fs_flatten_array_reset_TM_lib_internal(
      &outC->Context_C_P041_fs_flatten_array_1[idx1]);
  }
  for (idx = 0; idx < 33; idx++) {
    /* _L74=(TM_lib_internal::C_P041_fs_struct_to_array#1)/ */
    C_P041_fs_struct_to_array_reset_TM_lib_internal(
      &outC->Context_C_P041_fs_struct_to_array_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P041_flatten_sections_TM_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

