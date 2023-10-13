/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage/ */
void C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal(
  /* section/ */
  P011_voltage_TM_TrainToTrack *section,
  outC_C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal *outC)
{
  kcg_copy_P011_voltage_TM_TrainToTrack(&outC->_L1, section);
  outC->_L4 = outC->_L1.nid_ctraction;
  /* _L14=(TM_conversions::CAST_NID_CTRACTION_to_int#1)/ */
  CAST_NID_CTRACTION_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_NID_CTRACTION_to_int_1);
  outC->_L14 = outC->Context_CAST_NID_CTRACTION_to_int_1.nid_ctraction_int;
  outC->_L3 = outC->_L1.m_voltage;
  /* _L13=(TM_conversions::CAST_M_VOLTAGE_to_int#1)/ */
  CAST_M_VOLTAGE_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_M_VOLTAGE_to_int_1);
  outC->_L13 = outC->Context_CAST_M_VOLTAGE_to_int_1.m_voltage_int;
  outC->_L2[0] = outC->_L13;
  outC->_L2[1] = outC->_L14;
  kcg_copy_P011_voltage_section_array_T_TM_TrainToTrack(
    &outC->section_arrays,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_fs_struct_to_array_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L3 = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L4 = kcg_lit_int64(0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  outC->_L1.m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L1.nid_ctraction = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->section_arrays[idx1] = kcg_lit_int64(0);
  }
  /* _L13=(TM_conversions::CAST_M_VOLTAGE_to_int#1)/ */
  CAST_M_VOLTAGE_to_int_init_TM_conversions(
    &outC->Context_CAST_M_VOLTAGE_to_int_1);
  /* _L14=(TM_conversions::CAST_NID_CTRACTION_to_int#1)/ */
  CAST_NID_CTRACTION_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_CTRACTION_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_fs_struct_to_array_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal *outC)
{
  /* _L13=(TM_conversions::CAST_M_VOLTAGE_to_int#1)/ */
  CAST_M_VOLTAGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_VOLTAGE_to_int_1);
  /* _L14=(TM_conversions::CAST_NID_CTRACTION_to_int#1)/ */
  CAST_NID_CTRACTION_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_CTRACTION_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

