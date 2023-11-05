/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage/ */
void C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* MergedSections/ */
  P011_voltage_list_TM_TrainToTrack *MergedSections,
  outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack acc;
  static kcg_size idx2;

  kcg_copy_P011_voltage_list_TM_TrainToTrack(&outC->_L75, MergedSections);
  /* _L74= */
  for (idx = 0; idx < 4; idx++) {
    /* _L74=(TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage#1)/ */
    C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal(
      &outC->_L75[idx],
      &outC->Context_C_P011_fs_struct_to_array_voltage_1[idx]);
    kcg_copy_P011_voltage_section_array_T_TM_TrainToTrack(
      &outC->_L74[idx],
      &outC->Context_C_P011_fs_struct_to_array_voltage_1[idx].section_arrays);
  }
  /* _L80/ */
  for (idx1 = 0; idx1 < 8; idx1++) {
    kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack(
      &outC->_L80[idx1],
      &outC->_L74);
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    &outC->_L76,
    (P011_voltage_sections_array_flat_t_TM_TrainToTrack *)
      &DEFAULT_P011_voltage_sections_array_flat_TM_TrainToTrack);
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    &outC->_L78,
    &outC->_L76);
  /* _L78= */
  for (idx2 = 0; idx2 < 8; idx2++) {
    kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&acc, &outC->_L78);
    /* _L78=(TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage#1)/ */
    C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal(
      /* _L78= */(kcg_int32) idx2,
      &acc,
      &outC->_L80[idx2],
      &outC->Context_C_P011_fs_flatten_array_voltage_1[idx2]);
    kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
      &outC->_L78,
      &outC->Context_C_P011_fs_flatten_array_voltage_1[idx2].flat);
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    &outC->Flattened,
    &outC->_L78);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_flatten_sections_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal *outC)
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

  for (idx4 = 0; idx4 < 8; idx4++) {
    for (idx3 = 0; idx3 < 4; idx3++) {
      for (idx2 = 0; idx2 < 2; idx2++) {
        outC->_L80[idx4][idx3][idx2] = kcg_lit_int32(0);
      }
    }
  }
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L78[idx5] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 4; idx7++) {
    for (idx6 = 0; idx6 < 2; idx6++) {
      outC->_L74[idx7][idx6] = kcg_lit_int32(0);
    }
  }
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->_L75[idx8].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L75[idx8].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 8; idx9++) {
    outC->_L76[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 8; idx10++) {
    outC->Flattened[idx10] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* _L78=(TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage#1)/ */
    C_P011_fs_flatten_array_voltage_init_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_fs_flatten_array_voltage_1[idx1]);
  }
  for (idx = 0; idx < 4; idx++) {
    /* _L74=(TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage#1)/ */
    C_P011_fs_struct_to_array_voltage_init_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_fs_struct_to_array_voltage_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_flatten_sections_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 8; idx1++) {
    /* _L78=(TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage#1)/ */
    C_P011_fs_flatten_array_voltage_reset_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_fs_flatten_array_voltage_1[idx1]);
  }
  for (idx = 0; idx < 4; idx++) {
    /* _L74=(TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage#1)/ */
    C_P011_fs_struct_to_array_voltage_reset_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_fs_struct_to_array_voltage_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

