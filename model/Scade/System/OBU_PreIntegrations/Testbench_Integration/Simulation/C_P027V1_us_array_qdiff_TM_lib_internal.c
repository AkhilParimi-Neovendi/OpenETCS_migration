/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_us_array_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_us_array_qdiff/ */
void C_P027V1_us_array_qdiff_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat,
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC)
{
  outC->_L5 = i;
  outC->_L3 = n_iter_int;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  outC->_L18 = DIM_P027V1_n_sections_qdiff_TM_lib_internal;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&outC->_L1, flat);
  /* _L19=(TM_lib_internal::C_P027V1_extract_el_section#2)/ */
  C_P027V1_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(1),
    &outC->Context_C_P027V1_extract_el_section_2);
  outC->_L19 = outC->Context_C_P027V1_extract_el_section_2.element;
  /* _L28=(TM_conversions::CAST_Int_to_V_DIFF#1)/ */
  CAST_Int_to_V_DIFF_TM_conversions(
    outC->_L19,
    &outC->Context_CAST_Int_to_V_DIFF_1);
  outC->_L28 = outC->Context_CAST_Int_to_V_DIFF_1.v_diff;
  /* _L15=(TM_lib_internal::C_P027V1_extract_el_section#1)/ */
  C_P027V1_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(0),
    &outC->Context_C_P027V1_extract_el_section_1);
  outC->_L15 = outC->Context_C_P027V1_extract_el_section_1.element;
  /* _L25=(TM_conversions::CAST_Int_to_NC_DIFF#1)/ */
  CAST_Int_to_NC_DIFF_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_NC_DIFF_1);
  outC->_L25 = outC->Context_CAST_Int_to_NC_DIFF_1.nc_diff;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.nc_diff = outC->_L25;
  outC->_L4.v_diff = outC->_L28;
  kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(&outC->sections, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_us_array_qdiff_init_TM_lib_internal(
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L28 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.nc_diff = kcg_lit_int64(0);
  outC->_L4.v_diff = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx = 0; idx < 64; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->sections.valid = kcg_true;
  outC->sections.nc_diff = kcg_lit_int64(0);
  outC->sections.v_diff = kcg_lit_int64(0);
  outC->cont = kcg_true;
  /* _L25=(TM_conversions::CAST_Int_to_NC_DIFF#1)/ */
  CAST_Int_to_NC_DIFF_init_TM_conversions(&outC->Context_CAST_Int_to_NC_DIFF_1);
  /* _L15=(TM_lib_internal::C_P027V1_extract_el_section#1)/ */
  C_P027V1_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P027V1_extract_el_section_1);
  /* _L28=(TM_conversions::CAST_Int_to_V_DIFF#1)/ */
  CAST_Int_to_V_DIFF_init_TM_conversions(&outC->Context_CAST_Int_to_V_DIFF_1);
  /* _L19=(TM_lib_internal::C_P027V1_extract_el_section#2)/ */
  C_P027V1_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P027V1_extract_el_section_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_us_array_qdiff_reset_TM_lib_internal(
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC)
{
  /* _L25=(TM_conversions::CAST_Int_to_NC_DIFF#1)/ */
  CAST_Int_to_NC_DIFF_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NC_DIFF_1);
  /* _L15=(TM_lib_internal::C_P027V1_extract_el_section#1)/ */
  C_P027V1_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P027V1_extract_el_section_1);
  /* _L28=(TM_conversions::CAST_Int_to_V_DIFF#1)/ */
  CAST_Int_to_V_DIFF_reset_TM_conversions(&outC->Context_CAST_Int_to_V_DIFF_1);
  /* _L19=(TM_lib_internal::C_P027V1_extract_el_section#2)/ */
  C_P027V1_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P027V1_extract_el_section_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_us_array_qdiff_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

