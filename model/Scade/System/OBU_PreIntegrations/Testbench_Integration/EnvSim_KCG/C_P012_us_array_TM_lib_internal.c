/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P012_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P012_us_array/ */
void C_P012_us_array_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P012_sections_array_flat_T_TM *flat,
  outC_C_P012_us_array_TM_lib_internal *outC)
{
  outC->_L18 = DIM_P012_n_sections_TM_lib_internal;
  outC->_L5 = i;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P012_sections_array_flat_T_TM(&outC->_L1, flat);
  /* _L21=(TM_lib_internal::C_P012_extract_el_section#4)/ */
  C_P012_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(3),
    &outC->Context_C_P012_extract_el_section_4);
  outC->_L21 = outC->Context_C_P012_extract_el_section_4.element;
  /* _L27=(TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC#1)/ */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(
    outC->_L21,
    &outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1);
  outC->_L27 =
    outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1.d_sectiontimerstoploc;
  outC->_L3 = n_iter_int;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  /* _L19=(TM_lib_internal::C_P012_extract_el_section#2)/ */
  C_P012_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(1),
    &outC->Context_C_P012_extract_el_section_2);
  outC->_L19 = outC->Context_C_P012_extract_el_section_2.element;
  /* _L28=(TM_conversions::CAST_Int_to_Q_SECTIONTIMER#1)/ */
  CAST_Int_to_Q_SECTIONTIMER_TM_conversions(
    outC->_L19,
    &outC->Context_CAST_Int_to_Q_SECTIONTIMER_1);
  outC->_L28 = outC->Context_CAST_Int_to_Q_SECTIONTIMER_1.q_sectiontimer;
  /* _L20=(TM_lib_internal::C_P012_extract_el_section#3)/ */
  C_P012_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(2),
    &outC->Context_C_P012_extract_el_section_3);
  outC->_L20 = outC->Context_C_P012_extract_el_section_3.element;
  /* _L26=(TM_conversions::CAST_Int_to_T_SECTIONTIMER#1)/ */
  CAST_Int_to_T_SECTIONTIMER_TM_conversions(
    outC->_L20,
    &outC->Context_CAST_Int_to_T_SECTIONTIMER_1);
  outC->_L26 = outC->Context_CAST_Int_to_T_SECTIONTIMER_1.t_sectiontimer;
  /* _L15=(TM_lib_internal::C_P012_extract_el_section#1)/ */
  C_P012_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(0),
    &outC->Context_C_P012_extract_el_section_1);
  outC->_L15 = outC->Context_C_P012_extract_el_section_1.element;
  /* _L25=(TM_conversions::CAST_Int_to_L_SECTION#1)/ */
  CAST_Int_to_L_SECTION_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_L_SECTION_1);
  outC->_L25 = outC->Context_CAST_Int_to_L_SECTION_1.l_section;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.l_section = outC->_L25;
  outC->_L4.q_sectiontimer = outC->_L28;
  outC->_L4.t_sectiontimer = outC->_L26;
  outC->_L4.d_sectiontimerstoploc = outC->_L27;
  kcg_copy_P012_section_enum_T_TM(&outC->sections, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P012_us_array_init_TM_lib_internal(
  outC_C_P012_us_array_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L21 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L28 = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.l_section = kcg_lit_int64(0);
  outC->_L4.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L4.t_sectiontimer = kcg_lit_int64(0);
  outC->_L4.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx = 0; idx < 128; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->sections.valid = kcg_true;
  outC->sections.l_section = kcg_lit_int64(0);
  outC->sections.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->sections.t_sectiontimer = kcg_lit_int64(0);
  outC->sections.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->cont = kcg_true;
  /* _L25=(TM_conversions::CAST_Int_to_L_SECTION#1)/ */
  CAST_Int_to_L_SECTION_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_SECTION_1);
  /* _L15=(TM_lib_internal::C_P012_extract_el_section#1)/ */
  C_P012_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_1);
  /* _L26=(TM_conversions::CAST_Int_to_T_SECTIONTIMER#1)/ */
  CAST_Int_to_T_SECTIONTIMER_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_SECTIONTIMER_1);
  /* _L20=(TM_lib_internal::C_P012_extract_el_section#3)/ */
  C_P012_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_3);
  /* _L28=(TM_conversions::CAST_Int_to_Q_SECTIONTIMER#1)/ */
  CAST_Int_to_Q_SECTIONTIMER_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_SECTIONTIMER_1);
  /* _L19=(TM_lib_internal::C_P012_extract_el_section#2)/ */
  C_P012_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_2);
  /* _L27=(TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC#1)/ */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1);
  /* _L21=(TM_lib_internal::C_P012_extract_el_section#4)/ */
  C_P012_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P012_us_array_reset_TM_lib_internal(
  outC_C_P012_us_array_TM_lib_internal *outC)
{
  /* _L25=(TM_conversions::CAST_Int_to_L_SECTION#1)/ */
  CAST_Int_to_L_SECTION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_SECTION_1);
  /* _L15=(TM_lib_internal::C_P012_extract_el_section#1)/ */
  C_P012_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_1);
  /* _L26=(TM_conversions::CAST_Int_to_T_SECTIONTIMER#1)/ */
  CAST_Int_to_T_SECTIONTIMER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_SECTIONTIMER_1);
  /* _L20=(TM_lib_internal::C_P012_extract_el_section#3)/ */
  C_P012_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_3);
  /* _L28=(TM_conversions::CAST_Int_to_Q_SECTIONTIMER#1)/ */
  CAST_Int_to_Q_SECTIONTIMER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_SECTIONTIMER_1);
  /* _L19=(TM_lib_internal::C_P012_extract_el_section#2)/ */
  C_P012_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_2);
  /* _L27=(TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC#1)/ */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1);
  /* _L21=(TM_lib_internal::C_P012_extract_el_section#4)/ */
  C_P012_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P012_extract_el_section_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P012_us_array_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

