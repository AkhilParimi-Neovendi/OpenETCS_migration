/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P005_us_array/ */
void C_P005_us_array_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P005_sections_array_flat_T_TM *flat,
  outC_C_P005_us_array_TM_lib_internal *outC)
{
  outC->_L18 = DIM_P005_n_sections_TM_lib_internal;
  outC->_L5 = i;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P005_sections_array_flat_T_TM(&outC->_L1, flat);
  /* _L21=(TM_lib_internal::C_P005_extract_el_section#4)/ */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(3),
    &outC->Context_C_P005_extract_el_section_4);
  outC->_L21 = outC->Context_C_P005_extract_el_section_4.element;
  /* _L22=(TM_lib_internal::C_P005_extract_el_section#5)/ */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(4),
    &outC->Context_C_P005_extract_el_section_5);
  outC->_L22 = outC->Context_C_P005_extract_el_section_5.element;
  /* _L23=(TM_lib_internal::C_P005_extract_el_section#6)/ */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(5),
    &outC->Context_C_P005_extract_el_section_6);
  outC->_L23 = outC->Context_C_P005_extract_el_section_6.element;
  /* _L24=(TM_lib_internal::C_P005_extract_el_section#7)/ */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(6),
    &outC->Context_C_P005_extract_el_section_7);
  outC->_L24 = outC->Context_C_P005_extract_el_section_7.element;
  /* _L27=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_TM_conversions(
    outC->_L21,
    &outC->Context_CAST_Int_to_NID_BG_1);
  outC->_L27 = outC->Context_CAST_Int_to_NID_BG_1.nid_bg;
  /* _L29=(TM_conversions::CAST_Int_to_Q_LINKORIENTATION#1)/ */
  CAST_Int_to_Q_LINKORIENTATION_TM_conversions(
    outC->_L22,
    &outC->Context_CAST_Int_to_Q_LINKORIENTATION_1);
  outC->_L29 = outC->Context_CAST_Int_to_Q_LINKORIENTATION_1.q_linkorientation;
  /* _L30=(TM_conversions::CAST_Int_to_Q_LINKREACTION#1)/ */
  CAST_Int_to_Q_LINKREACTION_TM_conversions(
    outC->_L23,
    &outC->Context_CAST_Int_to_Q_LINKREACTION_1);
  outC->_L30 = outC->Context_CAST_Int_to_Q_LINKREACTION_1.q_linkreaction;
  /* _L31=(TM_conversions::CAST_Int_to_Q_LOCACC#1)/ */
  CAST_Int_to_Q_LOCACC_TM_conversions(
    outC->_L24,
    &outC->Context_CAST_Int_to_Q_LOCACC_1);
  outC->_L31 = outC->Context_CAST_Int_to_Q_LOCACC_1.q_locacc;
  outC->_L3 = n_iter_int;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  /* _L19=(TM_lib_internal::C_P005_extract_el_section#2)/ */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(1),
    &outC->Context_C_P005_extract_el_section_2);
  outC->_L19 = outC->Context_C_P005_extract_el_section_2.element;
  /* _L28=(TM_conversions::CAST_Int_to_Q_NEWCOUNTRY#1)/ */
  CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(
    outC->_L19,
    &outC->Context_CAST_Int_to_Q_NEWCOUNTRY_1);
  outC->_L28 = outC->Context_CAST_Int_to_Q_NEWCOUNTRY_1.q_newcountry;
  /* _L20=(TM_lib_internal::C_P005_extract_el_section#3)/ */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(2),
    &outC->Context_C_P005_extract_el_section_3);
  outC->_L20 = outC->Context_C_P005_extract_el_section_3.element;
  /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_TM_conversions(
    outC->_L20,
    &outC->Context_CAST_Int_to_NID_C_1);
  outC->_L26 = outC->Context_CAST_Int_to_NID_C_1.nid_c;
  /* _L15=(TM_lib_internal::C_P005_extract_el_section#1)/ */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int64(0),
    &outC->Context_C_P005_extract_el_section_1);
  outC->_L15 = outC->Context_C_P005_extract_el_section_1.element;
  /* _L25=(TM_conversions::CAST_Int_to_D_LINK#1)/ */
  CAST_Int_to_D_LINK_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_D_LINK_1);
  outC->_L25 = outC->Context_CAST_Int_to_D_LINK_1.d_link;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.d_link = outC->_L25;
  outC->_L4.q_newcountry = outC->_L28;
  outC->_L4.nid_c = outC->_L26;
  outC->_L4.nid_bg = outC->_L27;
  outC->_L4.q_linkorientation = outC->_L29;
  outC->_L4.q_linkreaction = outC->_L30;
  outC->_L4.q_locacc = outC->_L31;
  kcg_copy_P005_section_enum_T_TM(&outC->sections, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P005_us_array_init_TM_lib_internal(
  outC_C_P005_us_array_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L21 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L29 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L30 = Q_LINKREACTION_Train_trip;
  outC->_L31 = kcg_lit_int64(0);
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L28 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.d_link = kcg_lit_int64(0);
  outC->_L4.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4.nid_c = kcg_lit_int64(0);
  outC->_L4.nid_bg = kcg_lit_int64(0);
  outC->_L4.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L4.q_locacc = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx = 0; idx < 95; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->sections.valid = kcg_true;
  outC->sections.d_link = kcg_lit_int64(0);
  outC->sections.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->sections.nid_c = kcg_lit_int64(0);
  outC->sections.nid_bg = kcg_lit_int64(0);
  outC->sections.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->sections.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->sections.q_locacc = kcg_lit_int64(0);
  outC->cont = kcg_true;
  /* _L25=(TM_conversions::CAST_Int_to_D_LINK#1)/ */
  CAST_Int_to_D_LINK_init_TM_conversions(&outC->Context_CAST_Int_to_D_LINK_1);
  /* _L15=(TM_lib_internal::C_P005_extract_el_section#1)/ */
  C_P005_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_1);
  /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_init_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L20=(TM_lib_internal::C_P005_extract_el_section#3)/ */
  C_P005_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_3);
  /* _L28=(TM_conversions::CAST_Int_to_Q_NEWCOUNTRY#1)/ */
  CAST_Int_to_Q_NEWCOUNTRY_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NEWCOUNTRY_1);
  /* _L19=(TM_lib_internal::C_P005_extract_el_section#2)/ */
  C_P005_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_2);
  /* _L31=(TM_conversions::CAST_Int_to_Q_LOCACC#1)/ */
  CAST_Int_to_Q_LOCACC_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LOCACC_1);
  /* _L30=(TM_conversions::CAST_Int_to_Q_LINKREACTION#1)/ */
  CAST_Int_to_Q_LINKREACTION_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LINKREACTION_1);
  /* _L29=(TM_conversions::CAST_Int_to_Q_LINKORIENTATION#1)/ */
  CAST_Int_to_Q_LINKORIENTATION_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LINKORIENTATION_1);
  /* _L27=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_init_TM_conversions(&outC->Context_CAST_Int_to_NID_BG_1);
  /* _L24=(TM_lib_internal::C_P005_extract_el_section#7)/ */
  C_P005_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_7);
  /* _L23=(TM_lib_internal::C_P005_extract_el_section#6)/ */
  C_P005_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_6);
  /* _L22=(TM_lib_internal::C_P005_extract_el_section#5)/ */
  C_P005_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_5);
  /* _L21=(TM_lib_internal::C_P005_extract_el_section#4)/ */
  C_P005_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P005_us_array_reset_TM_lib_internal(
  outC_C_P005_us_array_TM_lib_internal *outC)
{
  /* _L25=(TM_conversions::CAST_Int_to_D_LINK#1)/ */
  CAST_Int_to_D_LINK_reset_TM_conversions(&outC->Context_CAST_Int_to_D_LINK_1);
  /* _L15=(TM_lib_internal::C_P005_extract_el_section#1)/ */
  C_P005_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_1);
  /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L20=(TM_lib_internal::C_P005_extract_el_section#3)/ */
  C_P005_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_3);
  /* _L28=(TM_conversions::CAST_Int_to_Q_NEWCOUNTRY#1)/ */
  CAST_Int_to_Q_NEWCOUNTRY_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NEWCOUNTRY_1);
  /* _L19=(TM_lib_internal::C_P005_extract_el_section#2)/ */
  C_P005_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_2);
  /* _L31=(TM_conversions::CAST_Int_to_Q_LOCACC#1)/ */
  CAST_Int_to_Q_LOCACC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LOCACC_1);
  /* _L30=(TM_conversions::CAST_Int_to_Q_LINKREACTION#1)/ */
  CAST_Int_to_Q_LINKREACTION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LINKREACTION_1);
  /* _L29=(TM_conversions::CAST_Int_to_Q_LINKORIENTATION#1)/ */
  CAST_Int_to_Q_LINKORIENTATION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LINKORIENTATION_1);
  /* _L27=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_BG_1);
  /* _L24=(TM_lib_internal::C_P005_extract_el_section#7)/ */
  C_P005_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_7);
  /* _L23=(TM_lib_internal::C_P005_extract_el_section#6)/ */
  C_P005_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_6);
  /* _L22=(TM_lib_internal::C_P005_extract_el_section#5)/ */
  C_P005_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_5);
  /* _L21=(TM_lib_internal::C_P005_extract_el_section#4)/ */
  C_P005_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P005_extract_el_section_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_us_array_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

