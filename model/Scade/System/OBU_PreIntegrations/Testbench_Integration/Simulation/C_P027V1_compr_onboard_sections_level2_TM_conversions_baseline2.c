/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ */
void C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_int64 noname_C_P027V1_unflatten_sections_qdiff_1;
  static kcg_bool noname_CAST_Int_to_N_ITER_1;
  static kcg_bool _3_noname_CAST_Int_to_N_ITER_1;
  static MetadataElement_T_Common_Types_Pkg noname;

  outC->_L27 = kcg_lit_int64(0);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  outC->_L28 = outC->_L9[3];
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = outC->_L28;
  outC->_L1_CAST_Int_to_N_ITER_1 = outC->n_iter_int_CAST_Int_to_N_ITER_1;
  outC->n_iter_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1;
  outC->_L33 = outC->n_iter_CAST_Int_to_N_ITER_1;
  outC->_L26 = outC->_L33 < outC->_L27;
  outC->n_iter_ok_C_P027V1_unflatten_sections_qdiff_1 = outC->_L26;
  outC->_L11_C_P027V1_unflatten_sections_qdiff_1 =
    outC->n_iter_ok_C_P027V1_unflatten_sections_qdiff_1;
  outC->n_iter_C_P027V1_unflatten_sections_qdiff_1 = outC->_L33;
  outC->_L3_C_P027V1_unflatten_sections_qdiff_1 =
    outC->n_iter_C_P027V1_unflatten_sections_qdiff_1;
  /* @1/_L5/ */
  for (idx = 0; idx < 32; idx++) {
    outC->_L5_C_P027V1_unflatten_sections_qdiff_1[idx] =
      outC->_L3_C_P027V1_unflatten_sections_qdiff_1;
  }
  kcg_copy_array_int64_64(&outC->_L29, (array_int64_64 *) &outC->_L9[4]);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->flat_C_P027V1_unflatten_sections_qdiff_1,
    &outC->_L29);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L1_C_P027V1_unflatten_sections_qdiff_1,
    &outC->flat_C_P027V1_unflatten_sections_qdiff_1);
  /* @1/_L6/ */
  for (idx1 = 0; idx1 < 32; idx1++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
      &outC->_L6_C_P027V1_unflatten_sections_qdiff_1[idx1],
      &outC->_L1_C_P027V1_unflatten_sections_qdiff_1);
  }
  /* @1/_L7= */
  if (outC->_L11_C_P027V1_unflatten_sections_qdiff_1) {
    /* @1/_L7= */
    for (idx2 = 0; idx2 < 32; idx2++) {
      /* @1/_L7=(TM_lib_internal::C_P027V1_us_array_qdiff#1)/ */
      C_P027V1_us_array_qdiff_TM_lib_internal(
        /* @1/_L7= */(kcg_int64) idx2,
        outC->_L5_C_P027V1_unflatten_sections_qdiff_1[idx2],
        &outC->_L6_C_P027V1_unflatten_sections_qdiff_1[idx2],
        &outC->Context_C_P027V1_us_array_qdiff_1_C_P027V1_unflatten_sections_qdiff_1[idx2]);
      kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
        &outC->_L9_C_P027V1_unflatten_sections_qdiff_1[idx2],
        &outC->Context_C_P027V1_us_array_qdiff_1_C_P027V1_unflatten_sections_qdiff_1[idx2].sections);
      outC->_L7_C_P027V1_unflatten_sections_qdiff_1 = /* @1/_L7= */(kcg_int64)
          (idx2 + 1);
      /* @1/_L7= */
      if (!outC->Context_C_P027V1_us_array_qdiff_1_C_P027V1_unflatten_sections_qdiff_1[idx2].cont) {
        break;
      }
    }
  }
  else {
    outC->_L7_C_P027V1_unflatten_sections_qdiff_1 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* @1/_L7= */
  for (
    idx2 = /* @1/_L7= */(kcg_size) outC->_L7_C_P027V1_unflatten_sections_qdiff_1;
    idx2 < 32;
    idx2++) {
    kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
      &outC->_L9_C_P027V1_unflatten_sections_qdiff_1[idx2],
      (P027V1_section_enum_qdiff_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */

  noname_C_P027V1_unflatten_sections_qdiff_1 =
    outC->_L7_C_P027V1_unflatten_sections_qdiff_1;
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &outC->sections_C_P027V1_unflatten_sections_qdiff_1,
    &outC->_L9_C_P027V1_unflatten_sections_qdiff_1);
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L10_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 <
    outC->_L11_CAST_Int_to_N_ITER_1;
  noname_CAST_Int_to_N_ITER_1 = outC->_L10_CAST_Int_to_N_ITER_1;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int64(31);
  outC->_L12_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 >
    outC->_L9_CAST_Int_to_N_ITER_1;
  _3_noname_CAST_Int_to_N_ITER_1 = outC->_L12_CAST_Int_to_N_ITER_1;
  kcg_copy_array_int64_3(&outC->_L6, (array_int64_3 *) &outC->_L9[0]);
  outC->_L15 = outC->_L6[1];
  /* _L32=(TM_conversions::CAST_Int_to_V_STATIC#1)/ */
  CAST_Int_to_V_STATIC_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_V_STATIC_1);
  outC->_L32 = outC->Context_CAST_Int_to_V_STATIC_1.v_static;
  outC->_L16 = outC->_L6[2];
  /* _L31=(TM_conversions::CAST_Int_to_Q_FRONT#1)/ */
  CAST_Int_to_Q_FRONT_TM_conversions(
    outC->_L16,
    &outC->Context_CAST_Int_to_Q_FRONT_1);
  outC->_L31 = outC->Context_CAST_Int_to_Q_FRONT_1.q_front;
  outC->_L14 = outC->_L6[0];
  /* _L30=(TM_conversions::CAST_Int_to_D_STATIC#1)/ */
  CAST_Int_to_D_STATIC_TM_conversions(
    outC->_L14,
    &outC->Context_CAST_Int_to_D_STATIC_1);
  outC->_L30 = outC->Context_CAST_Int_to_D_STATIC_1.d_static;
  outC->_L23 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &outC->_L5,
    &outC->sections_C_P027V1_unflatten_sections_qdiff_1);
  outC->_L10.valid = outC->_L23;
  outC->_L10.d_static = outC->_L30;
  outC->_L10.v_static = outC->_L32;
  outC->_L10.q_front = outC->_L31;
  outC->_L10.n_iter = outC->_L33;
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &outC->_L10.SECTIONS_q_diff,
    &outC->_L5);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->P027V1_section_onbard,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_compr_onboard_sections_level2_init_TM_conversions_baseline2(
  outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 *outC)
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
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;

  outC->_L33 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L31 =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L32 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 64; idx1++) {
    outC->_L29[idx1] = kcg_lit_int64(0);
  }
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L20.nid_packet = kcg_lit_int64(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.valid = kcg_true;
  outC->_L20.startAddress = kcg_lit_int64(0);
  outC->_L20.endAddress = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L5[idx2].valid = kcg_true;
    outC->_L5[idx2].nc_diff = kcg_lit_int64(0);
    outC->_L5[idx2].v_diff = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L6[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L9[idx4] = kcg_lit_int64(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.d_static = kcg_lit_int64(0);
  outC->_L10.v_static = kcg_lit_int64(0);
  outC->_L10.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L10.n_iter = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L10.SECTIONS_q_diff[idx5].valid = kcg_true;
    outC->_L10.SECTIONS_q_diff[idx5].nc_diff = kcg_lit_int64(0);
    outC->_L10.SECTIONS_q_diff[idx5].v_diff = kcg_lit_int64(0);
  }
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L1_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L12_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L10_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->n_iter_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 64; idx6++) {
    outC->_L1_C_P027V1_unflatten_sections_qdiff_1[idx6] = kcg_lit_int64(0);
  }
  outC->_L3_C_P027V1_unflatten_sections_qdiff_1 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L5_C_P027V1_unflatten_sections_qdiff_1[idx7] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 32; idx9++) {
    for (idx8 = 0; idx8 < 64; idx8++) {
      outC->_L6_C_P027V1_unflatten_sections_qdiff_1[idx9][idx8] = kcg_lit_int64(0);
    }
  }
  outC->_L7_C_P027V1_unflatten_sections_qdiff_1 = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L9_C_P027V1_unflatten_sections_qdiff_1[idx10].valid = kcg_true;
    outC->_L9_C_P027V1_unflatten_sections_qdiff_1[idx10].nc_diff = kcg_lit_int64(0);
    outC->_L9_C_P027V1_unflatten_sections_qdiff_1[idx10].v_diff = kcg_lit_int64(0);
  }
  outC->_L11_C_P027V1_unflatten_sections_qdiff_1 = kcg_true;
  outC->n_iter_ok_C_P027V1_unflatten_sections_qdiff_1 = kcg_true;
  outC->n_iter_C_P027V1_unflatten_sections_qdiff_1 = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 64; idx11++) {
    outC->flat_C_P027V1_unflatten_sections_qdiff_1[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 32; idx12++) {
    outC->sections_C_P027V1_unflatten_sections_qdiff_1[idx12].valid = kcg_true;
    outC->sections_C_P027V1_unflatten_sections_qdiff_1[idx12].nc_diff =
      kcg_lit_int64(0);
    outC->sections_C_P027V1_unflatten_sections_qdiff_1[idx12].v_diff =
      kcg_lit_int64(0);
  }
  outC->P027V1_section_onbard.valid = kcg_true;
  outC->P027V1_section_onbard.d_static = kcg_lit_int64(0);
  outC->P027V1_section_onbard.v_static = kcg_lit_int64(0);
  outC->P027V1_section_onbard.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->P027V1_section_onbard.n_iter = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->P027V1_section_onbard.SECTIONS_q_diff[idx13].valid = kcg_true;
    outC->P027V1_section_onbard.SECTIONS_q_diff[idx13].nc_diff = kcg_lit_int64(0);
    outC->P027V1_section_onbard.SECTIONS_q_diff[idx13].v_diff = kcg_lit_int64(0);
  }
  /* _L30=(TM_conversions::CAST_Int_to_D_STATIC#1)/ */
  CAST_Int_to_D_STATIC_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_STATIC_1);
  /* _L31=(TM_conversions::CAST_Int_to_Q_FRONT#1)/ */
  CAST_Int_to_Q_FRONT_init_TM_conversions(&outC->Context_CAST_Int_to_Q_FRONT_1);
  /* _L32=(TM_conversions::CAST_Int_to_V_STATIC#1)/ */
  CAST_Int_to_V_STATIC_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_STATIC_1);
  for (idx = 0; idx < 32; idx++) {
    /* @1/_L7=(TM_lib_internal::C_P027V1_us_array_qdiff#1)/ */
    C_P027V1_us_array_qdiff_init_TM_lib_internal(
      &outC->Context_C_P027V1_us_array_qdiff_1_C_P027V1_unflatten_sections_qdiff_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_compr_onboard_sections_level2_reset_TM_conversions_baseline2(
  outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 *outC)
{
  static kcg_size idx;

  /* _L30=(TM_conversions::CAST_Int_to_D_STATIC#1)/ */
  CAST_Int_to_D_STATIC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_STATIC_1);
  /* _L31=(TM_conversions::CAST_Int_to_Q_FRONT#1)/ */
  CAST_Int_to_Q_FRONT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_FRONT_1);
  /* _L32=(TM_conversions::CAST_Int_to_V_STATIC#1)/ */
  CAST_Int_to_V_STATIC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_STATIC_1);
  for (idx = 0; idx < 32; idx++) {
    /* @1/_L7=(TM_lib_internal::C_P027V1_us_array_qdiff#1)/ */
    C_P027V1_us_array_qdiff_reset_TM_lib_internal(
      &outC->Context_C_P027V1_us_array_qdiff_1_C_P027V1_unflatten_sections_qdiff_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/
  @1: (TM_lib_internal::C_P027V1_unflatten_sections_qdiff#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

