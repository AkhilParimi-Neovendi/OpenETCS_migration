/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ */
void C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2(
  /* i/ */
  kcg_int64 i,
  /* P027V1_sections_from_track/ */
  P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* meta_first_section_in/ */
  kcg_int64 meta_first_section_in,
  /* q_dir/ */
  Q_DIR q_dir,
  outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2 *outC)
{
  static kcg_size idx;

  outC->_L457 = q_dir;
  outC->_L435 = meta_first_section_in;
  outC->_L433 = i;
  outC->_L456 = outC->_L433 + outC->_L435;
  kcg_copy_P027V1_section_int_T_TM_baseline2(
    &outC->_L447,
    P027V1_sections_from_track);
  outC->_L452 = outC->_L447.N_ITER;
  /* _L434=(TM_lib_internal::T_DeterminePacketSizeInt#2)/ */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L452,
    kcg_lit_int64(4),
    kcg_lit_int64(2),
    &outC->Context_T_DeterminePacketSizeInt_2);
  outC->_L434 = outC->Context_T_DeterminePacketSizeInt_2.p_size;
  outC->p_size = outC->_L434;
  outC->_L455 = outC->p_size;
  outC->_L438 = kcg_true;
  outC->_L445 = kcg_lit_int64(0);
  outC->_L440 = kcg_lit_int64(1);
  outC->_L443 = outC->_L455 - outC->_L440;
  outC->_L454.nid_packet = outC->_L456;
  outC->_L454.q_dir = outC->_L457;
  outC->_L454.valid = outC->_L438;
  outC->_L454.startAddress = outC->_L445;
  outC->_L454.endAddress = outC->_L443;
  outC->_L449 = outC->_L447.D_STATIC;
  outC->_L450 = outC->_L447.V_STATIC;
  outC->_L451 = outC->_L447.Q_FRONT;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &outC->_L453,
    &outC->_L447.SECTIONS_q_diff);
  outC->_L446 = kcg_lit_int64(0);
  /* _L448/ */
  for (idx = 0; idx < 432; idx++) {
    outC->_L448[idx] = outC->_L446;
  }
  outC->_L444[0] = outC->_L449;
  outC->_L444[1] = outC->_L450;
  outC->_L444[2] = outC->_L451;
  outC->_L444[3] = outC->_L452;
  /* _L439=(TM_lib_internal::C_P027_flatten_sections_qdiff#2)/ */
  C_P027_flatten_sections_qdiff_TM_lib_internal(
    &outC->_L453,
    &outC->Context_C_P027_flatten_sections_qdiff_2);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L439,
    &outC->Context_C_P027_flatten_sections_qdiff_2.Flattened);
  kcg_copy_array_int64_4(&outC->_L437[0], &outC->_L444);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L437[4],
    &outC->_L439);
  kcg_copy_array_int64_68(&outC->_L442[0], &outC->_L437);
  kcg_copy_array_int64_432(&outC->_L442[68], &outC->_L448);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P027V1_sections_compressed,
    &outC->_L442);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L454);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_tracksim_compr_one_section_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L457 = Q_DIR_Reverse;
  outC->_L433 = kcg_lit_int64(0);
  outC->_L434 = kcg_lit_int64(0);
  outC->_L435 = kcg_lit_int64(0);
  for (idx = 0; idx < 68; idx++) {
    outC->_L437[idx] = kcg_lit_int64(0);
  }
  outC->_L438 = kcg_true;
  for (idx1 = 0; idx1 < 64; idx1++) {
    outC->_L439[idx1] = kcg_lit_int64(0);
  }
  outC->_L440 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L442[idx2] = kcg_lit_int64(0);
  }
  outC->_L443 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L444[idx3] = kcg_lit_int64(0);
  }
  outC->_L445 = kcg_lit_int64(0);
  outC->_L446 = kcg_lit_int64(0);
  outC->_L447.D_STATIC = kcg_lit_int64(0);
  outC->_L447.V_STATIC = kcg_lit_int64(0);
  outC->_L447.Q_FRONT = kcg_lit_int64(0);
  outC->_L447.N_ITER = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L447.SECTIONS_q_diff[idx4].NC_DIFF = kcg_lit_int64(0);
    outC->_L447.SECTIONS_q_diff[idx4].V_DIFF = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 432; idx5++) {
    outC->_L448[idx5] = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L453[idx6].NC_DIFF = kcg_lit_int64(0);
    outC->_L453[idx6].V_DIFF = kcg_lit_int64(0);
  }
  outC->_L452 = kcg_lit_int64(0);
  outC->_L451 = kcg_lit_int64(0);
  outC->_L450 = kcg_lit_int64(0);
  outC->_L449 = kcg_lit_int64(0);
  outC->_L454.nid_packet = kcg_lit_int64(0);
  outC->_L454.q_dir = Q_DIR_Reverse;
  outC->_L454.valid = kcg_true;
  outC->_L454.startAddress = kcg_lit_int64(0);
  outC->_L454.endAddress = kcg_lit_int64(0);
  outC->_L455 = kcg_lit_int64(0);
  outC->_L456 = kcg_lit_int64(0);
  outC->p_size = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->P027V1_sections_compressed[idx7] = kcg_lit_int64(0);
  }
  outC->Header.nid_packet = kcg_lit_int64(0);
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = kcg_lit_int64(0);
  outC->Header.endAddress = kcg_lit_int64(0);
  /* _L439=(TM_lib_internal::C_P027_flatten_sections_qdiff#2)/ */
  C_P027_flatten_sections_qdiff_init_TM_lib_internal(
    &outC->Context_C_P027_flatten_sections_qdiff_2);
  /* _L434=(TM_lib_internal::T_DeterminePacketSizeInt#2)/ */
  T_DeterminePacketSizeInt_init_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_2);
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P027V1_tracksim_compr_one_section_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2 *outC)
{
  /* _L439=(TM_lib_internal::C_P027_flatten_sections_qdiff#2)/ */
  C_P027_flatten_sections_qdiff_reset_TM_lib_internal(
    &outC->Context_C_P027_flatten_sections_qdiff_2);
  /* _L434=(TM_lib_internal::T_DeterminePacketSizeInt#2)/ */
  T_DeterminePacketSizeInt_reset_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_2);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

