/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P021_to_legacy_t/ */
void C_P021_to_legacy_t_TM_conversions(
  /* P021_in/ */
  P021_OBU_T_TM *P021_in,
  outC_C_P021_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  kcg_copy_P021_OBU_T_TM(&outC->_L1, P021_in);
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L45, &outC->_L1.sections);
  /* _L26/ */
  for (idx = 0; idx < 7; idx++) {
    kcg_copy_P021_OBU_T_TM(&outC->_L26[idx], &outC->_L1);
  }
  /* _L23/ */
  for (idx1 = 0; idx1 < 7; idx1++) {
    kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L23[idx1], &outC->_L45);
  }
  /* _L20= */
  for (idx2 = 0; idx2 < 7; idx2++) {
    /* _L20=(TM_conversions::C_P021_to_legacy_loop#1)/ */
    C_P021_to_legacy_loop_TM_conversions(
      /* _L20= */(kcg_int32) idx2,
      &outC->_L26[idx2],
      &outC->_L23[idx2],
      &outC->Context_C_P021_to_legacy_loop_1[idx2]);
    kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg(
      &outC->_L20[idx2],
      &outC->Context_C_P021_to_legacy_loop_1[idx2].P015_legacy_out);
  }
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->P021_legacy_out,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P021_to_legacy_t_init_TM_conversions(
  outC_C_P021_to_legacy_t_TM_conversions *outC)
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

  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L45[idx1].valid = kcg_true;
    outC->_L45[idx1].d_gradient = kcg_lit_int32(0);
    outC->_L45[idx1].q_gdir = Q_GDIR_downhill;
    outC->_L45[idx1].g_a = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L26[idx3].valid = kcg_true;
    outC->_L26[idx3].q_dir = Q_DIR_Reverse;
    outC->_L26[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26[idx3].n_iter = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L26[idx3].sections[idx2].valid = kcg_true;
      outC->_L26[idx3].sections[idx2].d_gradient = kcg_lit_int32(0);
      outC->_L26[idx3].sections[idx2].q_gdir = Q_GDIR_downhill;
      outC->_L26[idx3].sections[idx2].g_a = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L23[idx5][idx4].valid = kcg_true;
      outC->_L23[idx5][idx4].d_gradient = kcg_lit_int32(0);
      outC->_L23[idx5][idx4].q_gdir = Q_GDIR_downhill;
      outC->_L23[idx5][idx4].g_a = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L20[idx6].valid = kcg_true;
    outC->_L20[idx6].q_dir = Q_DIR_Reverse;
    outC->_L20[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx6].d_gradient = kcg_lit_int32(0);
    outC->_L20[idx6].q_gdir = Q_GDIR_downhill;
    outC->_L20[idx6].g_a = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L1.sections[idx7].valid = kcg_true;
    outC->_L1.sections[idx7].d_gradient = kcg_lit_int32(0);
    outC->_L1.sections[idx7].q_gdir = Q_GDIR_downhill;
    outC->_L1.sections[idx7].g_a = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->P021_legacy_out[idx8].valid = kcg_true;
    outC->P021_legacy_out[idx8].q_dir = Q_DIR_Reverse;
    outC->P021_legacy_out[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->P021_legacy_out[idx8].d_gradient = kcg_lit_int32(0);
    outC->P021_legacy_out[idx8].q_gdir = Q_GDIR_downhill;
    outC->P021_legacy_out[idx8].g_a = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 7; idx++) {
    /* _L20=(TM_conversions::C_P021_to_legacy_loop#1)/ */
    C_P021_to_legacy_loop_init_TM_conversions(
      &outC->Context_C_P021_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P021_to_legacy_t_reset_TM_conversions(
  outC_C_P021_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 7; idx++) {
    /* _L20=(TM_conversions::C_P021_to_legacy_loop#1)/ */
    C_P021_to_legacy_loop_reset_TM_conversions(
      &outC->Context_C_P021_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_to_legacy_t_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

