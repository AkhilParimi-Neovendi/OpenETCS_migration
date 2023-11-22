/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P080_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P080_us_array/ */
void C_P080_us_array_TM_lib_internal(
  /* i/ */
  kcg_int32 i,
  /* n_iter_int/ */
  kcg_int32 n_iter_int,
  /* flat/ */
  P080_sections_array_flat_T_TM *flat,
  outC_C_P080_us_array_TM_lib_internal *outC)
{
  outC->_L18 = DIM_P080_n_sections_TM_lib_internal;
  outC->_L5 = i;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P080_sections_array_flat_T_TM(&outC->_L1, flat);
  /* _L21=(TM_lib_internal::C_P080_extract_el_section#4)/ */
  C_P080_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int32(3),
    &outC->_5_Context_C_P080_extract_el_section_4);
  outC->_L21 = outC->_5_Context_C_P080_extract_el_section_4.element;
  /* _L22=(TM_lib_internal::C_P080_extract_el_section#5)/ */
  C_P080_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int32(4),
    &outC->_4_Context_C_P080_extract_el_section_5);
  outC->_L22 = outC->_4_Context_C_P080_extract_el_section_5.element;
  /* _L23=(TM_lib_internal::C_P080_extract_el_section#6)/ */
  C_P080_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int32(5),
    &outC->_3_Context_C_P080_extract_el_section_6);
  outC->_L23 = outC->_3_Context_C_P080_extract_el_section_6.element;
  /* _L27=(TM_conversions::CAST_Int_to_L_MAMODE#1)/ */
  CAST_Int_to_L_MAMODE_TM_conversions(
    outC->_L21,
    &outC->Context_CAST_Int_to_L_MAMODE_1);
  outC->_L27 = outC->Context_CAST_Int_to_L_MAMODE_1.l_mamode_;
  /* _L29=(TM_conversions::CAST_Int_to_L_ACKMAMODE#1)/ */
  CAST_Int_to_L_ACKMAMODE_TM_conversions(
    outC->_L22,
    &outC->Context_CAST_Int_to_L_ACKMAMODE_1);
  outC->_L29 = outC->Context_CAST_Int_to_L_ACKMAMODE_1.l_ackmamode;
  /* _L30=(TM_conversions::CAST_Int_to_Q_MAMODE#2)/ */
  CAST_Int_to_Q_MAMODE_TM_conversions(
    outC->_L23,
    &outC->Context_CAST_Int_to_Q_MAMODE_2);
  outC->_L30 = outC->Context_CAST_Int_to_Q_MAMODE_2.q_mamode;
  outC->_L3 = n_iter_int;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  /* _L19=(TM_lib_internal::C_P080_extract_el_section#2)/ */
  C_P080_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int32(1),
    &outC->_2_Context_C_P080_extract_el_section_2);
  outC->_L19 = outC->_2_Context_C_P080_extract_el_section_2.element;
  /* _L28=(TM_conversions::CAST_Int_to_M_MAMODE#1)/ */
  CAST_Int_to_M_MAMODE_TM_conversions(
    outC->_L19,
    &outC->Context_CAST_Int_to_M_MAMODE_1);
  outC->_L28 = outC->Context_CAST_Int_to_M_MAMODE_1.m_mamode;
  /* _L20=(TM_lib_internal::C_P080_extract_el_section#3)/ */
  C_P080_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int32(2),
    &outC->_1_Context_C_P080_extract_el_section_3);
  outC->_L20 = outC->_1_Context_C_P080_extract_el_section_3.element;
  /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_TM_conversions(
    outC->_L20,
    &outC->Context_CAST_Int_to_NID_C_1);
  outC->_L26 = outC->Context_CAST_Int_to_NID_C_1.nid_c;
  /* _L15=(TM_lib_internal::C_P080_extract_el_section#1)/ */
  C_P080_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    kcg_lit_int32(0),
    &outC->Context_C_P080_extract_el_section_1);
  outC->_L15 = outC->Context_C_P080_extract_el_section_1.element;
  /* _L25=(TM_conversions::CAST_Int_to_D_MAMODE#1)/ */
  CAST_Int_to_D_MAMODE_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_D_MAMODE_1);
  outC->_L25 = outC->Context_CAST_Int_to_D_MAMODE_1.d_mamode;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.d_mamode = outC->_L25;
  outC->_L4.m_mamode = outC->_L28;
  outC->_L4.v_mamode = outC->_L26;
  outC->_L4.l_mamode = outC->_L27;
  outC->_L4.l_ackmamode = outC->_L29;
  outC->_L4.q_mamode = outC->_L30;
  kcg_copy_P080_section_enum_T_TM(&outC->sections, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P080_us_array_init_TM_lib_internal(
  outC_C_P080_us_array_TM_lib_internal *outC)
{
  kcg_size idx;

  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L30 = Q_MAMODE_as_the_EOA;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L28 = M_MAMODE_On_Sight;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.d_mamode = kcg_lit_int32(0);
  outC->_L4.m_mamode = M_MAMODE_On_Sight;
  outC->_L4.v_mamode = kcg_lit_int32(0);
  outC->_L4.l_mamode = kcg_lit_int32(0);
  outC->_L4.l_ackmamode = kcg_lit_int32(0);
  outC->_L4.q_mamode = Q_MAMODE_as_the_EOA;
  outC->_L3 = kcg_lit_int32(0);
  for (idx = 0; idx < 198; idx++) {
    outC->_L1[idx] = kcg_lit_int32(0);
  }
  outC->sections.valid = kcg_true;
  outC->sections.d_mamode = kcg_lit_int32(0);
  outC->sections.m_mamode = M_MAMODE_On_Sight;
  outC->sections.v_mamode = kcg_lit_int32(0);
  outC->sections.l_mamode = kcg_lit_int32(0);
  outC->sections.l_ackmamode = kcg_lit_int32(0);
  outC->sections.q_mamode = Q_MAMODE_as_the_EOA;
  outC->cont = kcg_true;
  /* _L25=(TM_conversions::CAST_Int_to_D_MAMODE#1)/ */
  CAST_Int_to_D_MAMODE_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_MAMODE_1);
  /* _L15=(TM_lib_internal::C_P080_extract_el_section#1)/ */
  C_P080_extract_el_section_init_TM_lib_internal(
    &outC->Context_C_P080_extract_el_section_1);
  /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_init_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L20=(TM_lib_internal::C_P080_extract_el_section#3)/ */
  C_P080_extract_el_section_init_TM_lib_internal(
    &outC->_1_Context_C_P080_extract_el_section_3);
  /* _L28=(TM_conversions::CAST_Int_to_M_MAMODE#1)/ */
  CAST_Int_to_M_MAMODE_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_MAMODE_1);
  /* _L19=(TM_lib_internal::C_P080_extract_el_section#2)/ */
  C_P080_extract_el_section_init_TM_lib_internal(
    &outC->_2_Context_C_P080_extract_el_section_2);
  /* _L30=(TM_conversions::CAST_Int_to_Q_MAMODE#2)/ */
  CAST_Int_to_Q_MAMODE_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_MAMODE_2);
  /* _L29=(TM_conversions::CAST_Int_to_L_ACKMAMODE#1)/ */
  CAST_Int_to_L_ACKMAMODE_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_ACKMAMODE_1);
  /* _L27=(TM_conversions::CAST_Int_to_L_MAMODE#1)/ */
  CAST_Int_to_L_MAMODE_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_MAMODE_1);
  /* _L23=(TM_lib_internal::C_P080_extract_el_section#6)/ */
  C_P080_extract_el_section_init_TM_lib_internal(
    &outC->_3_Context_C_P080_extract_el_section_6);
  /* _L22=(TM_lib_internal::C_P080_extract_el_section#5)/ */
  C_P080_extract_el_section_init_TM_lib_internal(
    &outC->_4_Context_C_P080_extract_el_section_5);
  /* _L21=(TM_lib_internal::C_P080_extract_el_section#4)/ */
  C_P080_extract_el_section_init_TM_lib_internal(
    &outC->_5_Context_C_P080_extract_el_section_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P080_us_array_reset_TM_lib_internal(
  outC_C_P080_us_array_TM_lib_internal *outC)
{
  /* _L25=(TM_conversions::CAST_Int_to_D_MAMODE#1)/ */
  CAST_Int_to_D_MAMODE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_MAMODE_1);
  /* _L15=(TM_lib_internal::C_P080_extract_el_section#1)/ */
  C_P080_extract_el_section_reset_TM_lib_internal(
    &outC->Context_C_P080_extract_el_section_1);
  /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L20=(TM_lib_internal::C_P080_extract_el_section#3)/ */
  C_P080_extract_el_section_reset_TM_lib_internal(
    &outC->_1_Context_C_P080_extract_el_section_3);
  /* _L28=(TM_conversions::CAST_Int_to_M_MAMODE#1)/ */
  CAST_Int_to_M_MAMODE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_MAMODE_1);
  /* _L19=(TM_lib_internal::C_P080_extract_el_section#2)/ */
  C_P080_extract_el_section_reset_TM_lib_internal(
    &outC->_2_Context_C_P080_extract_el_section_2);
  /* _L30=(TM_conversions::CAST_Int_to_Q_MAMODE#2)/ */
  CAST_Int_to_Q_MAMODE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_MAMODE_2);
  /* _L29=(TM_conversions::CAST_Int_to_L_ACKMAMODE#1)/ */
  CAST_Int_to_L_ACKMAMODE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_ACKMAMODE_1);
  /* _L27=(TM_conversions::CAST_Int_to_L_MAMODE#1)/ */
  CAST_Int_to_L_MAMODE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_MAMODE_1);
  /* _L23=(TM_lib_internal::C_P080_extract_el_section#6)/ */
  C_P080_extract_el_section_reset_TM_lib_internal(
    &outC->_3_Context_C_P080_extract_el_section_6);
  /* _L22=(TM_lib_internal::C_P080_extract_el_section#5)/ */
  C_P080_extract_el_section_reset_TM_lib_internal(
    &outC->_4_Context_C_P080_extract_el_section_5);
  /* _L21=(TM_lib_internal::C_P080_extract_el_section#4)/ */
  C_P080_extract_el_section_reset_TM_lib_internal(
    &outC->_5_Context_C_P080_extract_el_section_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P080_us_array_TM_lib_internal.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

