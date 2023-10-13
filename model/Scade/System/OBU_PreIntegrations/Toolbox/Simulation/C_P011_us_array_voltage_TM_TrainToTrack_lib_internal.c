/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage/ */
void C_P011_us_array_voltage_TM_TrainToTrack_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal *outC)
{
  outC->_L5 = i;
  outC->_L3 = n_iter_int;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L18 = DIM_voltage_list_TM_TrainToTrack;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&outC->_L1, flat);
  /* _L19=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#2)/ */
  C_P011_extract_el_section_TM_TrainToTrack_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(0),
    &outC->_1_Context_C_P011_extract_el_section_voltage_2);
  outC->_L19 = outC->_1_Context_C_P011_extract_el_section_voltage_2.element;
  /* _L28=(TM_conversions::CAST_Int_to_M_VOLTAGE#1)/ */
  CAST_Int_to_M_VOLTAGE_TM_conversions(
    outC->_L19,
    &outC->Context_CAST_Int_to_M_VOLTAGE_1);
  outC->_L28 = outC->Context_CAST_Int_to_M_VOLTAGE_1.m_voltage;
  /* _L15=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#1)/ */
  C_P011_extract_el_section_TM_TrainToTrack_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(1),
    &outC->Context_C_P011_extract_el_section_voltage_1);
  outC->_L15 = outC->Context_C_P011_extract_el_section_voltage_1.element;
  /* _L25=(TM_conversions::CAST_Int_to_NID_CTRACTION#1)/ */
  CAST_Int_to_NID_CTRACTION_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_NID_CTRACTION_1);
  outC->_L25 = outC->Context_CAST_Int_to_NID_CTRACTION_1.nid_ctraction;
  outC->cont = outC->_L33;
  outC->_L4.m_voltage = outC->_L28;
  outC->_L4.nid_ctraction = outC->_L25;
  kcg_copy_P011_voltage_TM_TrainToTrack(&outC->sections, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_us_array_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal *outC)
{
  kcg_size idx;

  outC->_L33 = kcg_true;
  outC->_L28 = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L25 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L4.nid_ctraction = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx = 0; idx < 8; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->sections.m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->sections.nid_ctraction = kcg_lit_int64(0);
  outC->cont = kcg_true;
  /* _L25=(TM_conversions::CAST_Int_to_NID_CTRACTION#1)/ */
  CAST_Int_to_NID_CTRACTION_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_CTRACTION_1);
  /* _L15=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#1)/ */
  C_P011_extract_el_section_init_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_extract_el_section_voltage_1);
  /* _L28=(TM_conversions::CAST_Int_to_M_VOLTAGE#1)/ */
  CAST_Int_to_M_VOLTAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_VOLTAGE_1);
  /* _L19=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#2)/ */
  C_P011_extract_el_section_init_TM_TrainToTrack_lib_internal(
    &outC->_1_Context_C_P011_extract_el_section_voltage_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_us_array_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal *outC)
{
  /* _L25=(TM_conversions::CAST_Int_to_NID_CTRACTION#1)/ */
  CAST_Int_to_NID_CTRACTION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_CTRACTION_1);
  /* _L15=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#1)/ */
  C_P011_extract_el_section_reset_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_extract_el_section_voltage_1);
  /* _L28=(TM_conversions::CAST_Int_to_M_VOLTAGE#1)/ */
  CAST_Int_to_M_VOLTAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_VOLTAGE_1);
  /* _L19=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#2)/ */
  C_P011_extract_el_section_reset_TM_TrainToTrack_lib_internal(
    &outC->_1_Context_C_P011_extract_el_section_voltage_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

