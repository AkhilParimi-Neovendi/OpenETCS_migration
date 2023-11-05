/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P021_to_legacy_loop/ */
void C_P021_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int32 i,
  /* P021_in/ */
  P021_OBU_T_TM *P021_in,
  /* P021_section_in/ */
  P021_OBU_sectionlist_enum_T_TM *P021_section_in,
  outC_C_P021_to_legacy_loop_TM_conversions *outC)
{
  outC->_L20 = i;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L1, P021_section_in);
  if ((kcg_lit_int32(0) <= outC->_L20) & (outC->_L20 < kcg_lit_int32(33))) {
    kcg_copy_P021_section_enum_T_TM(&outC->_L21, &outC->_L1[outC->_L20]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L21,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  outC->_L166 = outC->_L21.valid;
  outC->_L167 = outC->_L21.d_gradient;
  outC->_L168 = outC->_L21.q_gdir;
  outC->_L169 = outC->_L21.g_a;
  kcg_copy_P021_OBU_T_TM(&outC->_L132, P021_in);
  outC->_L134 = outC->_L132.q_scale;
  outC->_L133 = outC->_L132.q_dir;
  outC->_L2.valid = outC->_L166;
  outC->_L2.q_dir = outC->_L133;
  outC->_L2.q_scale = outC->_L134;
  outC->_L2.d_gradient = outC->_L167;
  outC->_L2.q_gdir = outC->_L168;
  outC->_L2.g_a = outC->_L169;
  kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg(
    &outC->P015_legacy_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P021_to_legacy_loop_init_TM_conversions(
  outC_C_P021_to_legacy_loop_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L166 = kcg_true;
  outC->_L167 = kcg_lit_int32(0);
  outC->_L168 = Q_GDIR_downhill;
  outC->_L169 = kcg_lit_int32(0);
  outC->_L134 = Q_SCALE_10_cm_scale;
  outC->_L133 = Q_DIR_Reverse;
  outC->_L132.valid = kcg_true;
  outC->_L132.q_dir = Q_DIR_Reverse;
  outC->_L132.q_scale = Q_SCALE_10_cm_scale;
  outC->_L132.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 33; idx++) {
    outC->_L132.sections[idx].valid = kcg_true;
    outC->_L132.sections[idx].d_gradient = kcg_lit_int32(0);
    outC->_L132.sections[idx].q_gdir = Q_GDIR_downhill;
    outC->_L132.sections[idx].g_a = kcg_lit_int32(0);
  }
  outC->_L21.valid = kcg_true;
  outC->_L21.d_gradient = kcg_lit_int32(0);
  outC->_L21.q_gdir = Q_GDIR_downhill;
  outC->_L21.g_a = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_gradient = kcg_lit_int32(0);
  outC->_L2.q_gdir = Q_GDIR_downhill;
  outC->_L2.g_a = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L1[idx1].valid = kcg_true;
    outC->_L1[idx1].d_gradient = kcg_lit_int32(0);
    outC->_L1[idx1].q_gdir = Q_GDIR_downhill;
    outC->_L1[idx1].g_a = kcg_lit_int32(0);
  }
  outC->P015_legacy_out.valid = kcg_true;
  outC->P015_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P015_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P015_legacy_out.d_gradient = kcg_lit_int32(0);
  outC->P015_legacy_out.q_gdir = Q_GDIR_downhill;
  outC->P015_legacy_out.g_a = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P021_to_legacy_loop_reset_TM_conversions(
  outC_C_P021_to_legacy_loop_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_to_legacy_loop_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

