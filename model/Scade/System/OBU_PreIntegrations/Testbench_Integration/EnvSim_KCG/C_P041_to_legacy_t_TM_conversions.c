/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P041_to_legacy_t/ */
void C_P041_to_legacy_t_TM_conversions(
  /* P041_in/ */
  P041_OBU_T_TM *P041_in,
  outC_C_P041_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static N_ITER noname;
  static kcg_bool _5_noname;

  kcg_copy_P041_OBU_T_TM(&outC->_L1, P041_in);
  outC->_L3 = outC->_L1.valid;
  _5_noname = outC->_L3;
  outC->_L4 = outC->_L1.q_dir;
  /* _L26/ */
  for (idx = 0; idx < 7; idx++) {
    outC->_L26[idx] = outC->_L4;
  }
  outC->_L5 = outC->_L1.q_scale;
  /* _L25/ */
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L25[idx1] = outC->_L5;
  }
  outC->_L6 = outC->_L1.d_leveltr;
  /* _L24/ */
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L24[idx2] = outC->_L6;
  }
  kcg_copy_P041_OBU_sectionlist_enum_T_TM(&outC->_L8, &outC->_L1.sections);
  /* _L23/ */
  for (idx3 = 0; idx3 < 7; idx3++) {
    kcg_copy_P041_OBU_sectionlist_enum_T_TM(&outC->_L23[idx3], &outC->_L8);
  }
  outC->_L7 = outC->_L1.n_iter;
  noname = outC->_L7;
  /* _L20= */
  for (idx4 = 0; idx4 < 7; idx4++) {
    /* _L20=(TM_conversions::C_P041_to_legacy_loop#1)/ */
    C_P041_to_legacy_loop_TM_conversions(
      /* _L20= */(kcg_int32) idx4,
      outC->_L26[idx4],
      outC->_L25[idx4],
      outC->_L24[idx4],
      &outC->_L23[idx4],
      &outC->Context_C_P041_to_legacy_loop_1[idx4]);
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L20[idx4],
      &outC->Context_C_P041_to_legacy_loop_1[idx4].P041_legacy_out);
  }
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->P041_legacy_out,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P041_to_legacy_t_init_TM_conversions(
  outC_C_P041_to_legacy_t_TM_conversions *outC)
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

  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L26[idx1] = Q_DIR_Reverse;
  }
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L25[idx2] = Q_SCALE_10_cm_scale;
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L24[idx3] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L23[idx5][idx4].valid = kcg_true;
      outC->_L23[idx5][idx4].m_leveltr = M_LEVELTR_Level_0;
      outC->_L23[idx5][idx4].nid_ntc = kcg_lit_int32(0);
      outC->_L23[idx5][idx4].l_ackleveltr = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L20[idx6].valid = kcg_true;
    outC->_L20[idx6].q_dir = Q_DIR_Reverse;
    outC->_L20[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx6].d_leveltr = kcg_lit_int32(0);
    outC->_L20[idx6].m_leveltr = M_LEVELTR_Level_0;
    outC->_L20[idx6].nid_ntc = kcg_lit_int32(0);
    outC->_L20[idx6].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_true;
  outC->_L4 = Q_DIR_Reverse;
  outC->_L5 = Q_SCALE_10_cm_scale;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L8[idx7].valid = kcg_true;
    outC->_L8[idx7].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8[idx7].nid_ntc = kcg_lit_int32(0);
    outC->_L8[idx7].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_leveltr = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L1.sections[idx8].valid = kcg_true;
    outC->_L1.sections[idx8].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1.sections[idx8].nid_ntc = kcg_lit_int32(0);
    outC->_L1.sections[idx8].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->P041_legacy_out[idx9].valid = kcg_true;
    outC->P041_legacy_out[idx9].q_dir = Q_DIR_Reverse;
    outC->P041_legacy_out[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->P041_legacy_out[idx9].d_leveltr = kcg_lit_int32(0);
    outC->P041_legacy_out[idx9].m_leveltr = M_LEVELTR_Level_0;
    outC->P041_legacy_out[idx9].nid_ntc = kcg_lit_int32(0);
    outC->P041_legacy_out[idx9].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 7; idx++) {
    /* _L20=(TM_conversions::C_P041_to_legacy_loop#1)/ */
    C_P041_to_legacy_loop_init_TM_conversions(
      &outC->Context_C_P041_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P041_to_legacy_t_reset_TM_conversions(
  outC_C_P041_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 7; idx++) {
    /* _L20=(TM_conversions::C_P041_to_legacy_loop#1)/ */
    C_P041_to_legacy_loop_reset_TM_conversions(
      &outC->Context_C_P041_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P041_to_legacy_t_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

