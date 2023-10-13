/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc/ */
void C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal(
  /* MergedSections/ */
  P011_ntc_list_TM_TrainToTrack *MergedSections,
  outC_C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;

  kcg_copy_P011_ntc_list_TM_TrainToTrack(&outC->_L75, MergedSections);
  /* _L74= */
  for (idx = 0; idx < 5; idx++) {
    /* _L74=(TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc#1)/ */
    C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal(
      outC->_L75[idx],
      &outC->Context_C_P011_fs_struct_to_array_ntc_1[idx]);
    outC->_L74[idx] =
      outC->Context_C_P011_fs_struct_to_array_ntc_1[idx].section_arrays;
  }
  kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack(&outC->Flattened, &outC->_L74);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_flatten_sections_ntc_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L74[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L75[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->Flattened[idx3] = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L74=(TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc#1)/ */
    C_P011_fs_struct_to_array_ntc_init_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_fs_struct_to_array_ntc_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_flatten_sections_ntc_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    /* _L74=(TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc#1)/ */
    C_P011_fs_struct_to_array_ntc_reset_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_fs_struct_to_array_ntc_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

