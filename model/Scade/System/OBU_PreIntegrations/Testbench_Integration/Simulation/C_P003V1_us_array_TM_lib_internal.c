/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P003V1_us_array/ */
void C_P003V1_us_array_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_us_array_TM_lib_internal *outC)
{
  outC->_L35 = i;
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&outC->_L37, flat);
  /* _L34=(TM_lib_internal::C_P003V1_extract_el_section#2)/ */
  C_P003V1_extract_el_section_TM_lib_internal(
    outC->_L35,
    &outC->_L37,
    &outC->Context_C_P003V1_extract_el_section_2);
  outC->_L34 = outC->Context_C_P003V1_extract_el_section_2.element;
  /* _L41=(TM_conversions::CAST_Int_to_NID_C#2)/ */
  CAST_Int_to_NID_C_TM_conversions(
    outC->_L34,
    &outC->Context_CAST_Int_to_NID_C_2);
  outC->_L41 = outC->Context_CAST_Int_to_NID_C_2.nid_c;
  outC->_L40 = kcg_true;
  outC->_L36 = n_iter_int;
  outC->_L39 = outC->_L36 > outC->_L35;
  outC->_L38.valid = outC->_L40;
  outC->_L38.nid_c = outC->_L41;
  outC->cont = outC->_L39;
  kcg_copy_P003V1_section_enum_T_TM_baseline2(&outC->sections, &outC->_L38);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003V1_us_array_init_TM_lib_internal(
  outC_C_P003V1_us_array_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L34 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L37[idx] = kcg_lit_int64(0);
  }
  outC->_L38.valid = kcg_true;
  outC->_L38.nid_c = kcg_lit_int64(0);
  outC->_L39 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L41 = kcg_lit_int64(0);
  outC->sections.valid = kcg_true;
  outC->sections.nid_c = kcg_lit_int64(0);
  outC->cont = kcg_true;
  /* _L41=(TM_conversions::CAST_Int_to_NID_C#2)/ */
  CAST_Int_to_NID_C_init_TM_conversions(&outC->Context_CAST_Int_to_NID_C_2);
  /* _L34=(TM_lib_internal::C_P003V1_extract_el_section#2)/ */
  C_P003V1_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P003V1_extract_el_section_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P003V1_us_array_reset_TM_lib_internal(
  outC_C_P003V1_us_array_TM_lib_internal *outC)
{
  /* _L41=(TM_conversions::CAST_Int_to_NID_C#2)/ */
  CAST_Int_to_NID_C_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_C_2);
  /* _L34=(TM_lib_internal::C_P003V1_extract_el_section#2)/ */
  C_P003V1_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P003V1_extract_el_section_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_us_array_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

