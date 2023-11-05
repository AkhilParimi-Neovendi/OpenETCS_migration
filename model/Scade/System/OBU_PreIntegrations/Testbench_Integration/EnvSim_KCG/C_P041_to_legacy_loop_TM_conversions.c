/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P041_to_legacy_loop/ */
void C_P041_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int32 i,
  /* q_dir_in/ */
  Q_DIR q_dir_in,
  /* q_scale_in/ */
  Q_SCALE q_scale_in,
  /* d_leveltr_in/ */
  D_LEVELTR d_leveltr_in,
  /* P041_section_in/ */
  P041_OBU_sectionlist_enum_T_TM *P041_section_in,
  outC_C_P041_to_legacy_loop_TM_conversions *outC)
{
  outC->_L30 = d_leveltr_in;
  outC->_L29 = q_scale_in;
  outC->_L28 = q_dir_in;
  outC->_L20 = i;
  kcg_copy_P041_OBU_sectionlist_enum_T_TM(&outC->_L1, P041_section_in);
  if ((kcg_lit_int32(0) <= outC->_L20) & (outC->_L20 < kcg_lit_int32(33))) {
    kcg_copy_P041_section_enum_T_TM(&outC->_L21, &outC->_L1[outC->_L20]);
  }
  else {
    kcg_copy_P041_section_enum_T_TM(
      &outC->_L21,
      (P041_section_enum_T_TM *) &DEFAULT_P041_OBU_section_TM);
  }
  outC->_L27 = outC->_L21.valid;
  outC->_L26 = outC->_L21.m_leveltr;
  outC->_L25 = outC->_L21.nid_ntc;
  outC->_L24 = outC->_L21.l_ackleveltr;
  outC->_L2.valid = outC->_L27;
  outC->_L2.q_dir = outC->_L28;
  outC->_L2.q_scale = outC->_L29;
  outC->_L2.d_leveltr = outC->_L30;
  outC->_L2.m_leveltr = outC->_L26;
  outC->_L2.nid_ntc = outC->_L25;
  outC->_L2.l_ackleveltr = outC->_L24;
  kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
    &outC->P041_legacy_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P041_to_legacy_loop_init_TM_conversions(
  outC_C_P041_to_legacy_loop_TM_conversions *outC)
{
  static kcg_size idx;

  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = Q_SCALE_10_cm_scale;
  outC->_L28 = Q_DIR_Reverse;
  outC->_L27 = kcg_true;
  outC->_L26 = M_LEVELTR_Level_0;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.m_leveltr = M_LEVELTR_Level_0;
  outC->_L21.nid_ntc = kcg_lit_int32(0);
  outC->_L21.l_ackleveltr = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_leveltr = kcg_lit_int32(0);
  outC->_L2.m_leveltr = M_LEVELTR_Level_0;
  outC->_L2.nid_ntc = kcg_lit_int32(0);
  outC->_L2.l_ackleveltr = kcg_lit_int32(0);
  for (idx = 0; idx < 33; idx++) {
    outC->_L1[idx].valid = kcg_true;
    outC->_L1[idx].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1[idx].nid_ntc = kcg_lit_int32(0);
    outC->_L1[idx].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->P041_legacy_out.valid = kcg_true;
  outC->P041_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P041_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P041_legacy_out.d_leveltr = kcg_lit_int32(0);
  outC->P041_legacy_out.m_leveltr = M_LEVELTR_Level_0;
  outC->P041_legacy_out.nid_ntc = kcg_lit_int32(0);
  outC->P041_legacy_out.l_ackleveltr = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P041_to_legacy_loop_reset_TM_conversions(
  outC_C_P041_to_legacy_loop_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P041_to_legacy_loop_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

