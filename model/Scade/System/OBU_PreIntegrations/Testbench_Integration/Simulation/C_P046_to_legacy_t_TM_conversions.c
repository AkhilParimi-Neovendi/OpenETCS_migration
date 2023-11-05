/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P046_to_legacy_t/ */
void C_P046_to_legacy_t_TM_conversions(
  /* P046_in/ */
  P046_OBU_T_TM *P046_in,
  outC_C_P046_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static N_ITER noname;
  static kcg_bool _3_noname;

  kcg_copy_P046_OBU_T_TM(&outC->_L1, P046_in);
  outC->_L4 = outC->_L1.q_dir;
  /* _L26/ */
  for (idx = 0; idx < 7; idx++) {
    outC->_L26[idx] = outC->_L4;
  }
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(&outC->_L6, &outC->_L1.sections);
  /* _L23/ */
  for (idx1 = 0; idx1 < 7; idx1++) {
    kcg_copy_P046_OBU_sectionlist_enum_T_TM(&outC->_L23[idx1], &outC->_L6);
  }
  outC->_L3 = outC->_L1.valid;
  _3_noname = outC->_L3;
  outC->_L5 = outC->_L1.n_iter;
  noname = outC->_L5;
  /* _L20= */
  for (idx2 = 0; idx2 < 7; idx2++) {
    /* _L20=(TM_conversions::C_P046_to_legacy_loop#1)/ */
    C_P046_to_legacy_loop_TM_conversions(
      /* _L20= */(kcg_int32) idx2,
      outC->_L26[idx2],
      &outC->_L23[idx2],
      &outC->Context_C_P046_to_legacy_loop_1[idx2]);
    kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L20[idx2],
      &outC->Context_C_P046_to_legacy_loop_1[idx2].P046_legacy_out);
  }
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->P046_legacy_out,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P046_to_legacy_t_init_TM_conversions(
  outC_C_P046_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L26[idx1] = Q_DIR_Reverse;
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L23[idx3][idx2].valid = kcg_true;
      outC->_L23[idx3][idx2].m_leveltr = M_LEVELTR_Level_0;
      outC->_L23[idx3][idx2].nid_ntc = kcg_lit_int32(0);
    }
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L20[idx4].valid = kcg_true;
    outC->_L20[idx4].q_dir = Q_DIR_Reverse;
    outC->_L20[idx4].m_leveltr = M_LEVELTR_Level_0;
    outC->_L20[idx4].nid_ntc = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_true;
  outC->_L4 = Q_DIR_Reverse;
  outC->_L5 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L6[idx5].valid = kcg_true;
    outC->_L6[idx5].m_leveltr = M_LEVELTR_Level_0;
    outC->_L6[idx5].nid_ntc = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L1.sections[idx6].valid = kcg_true;
    outC->_L1.sections[idx6].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1.sections[idx6].nid_ntc = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->P046_legacy_out[idx7].valid = kcg_true;
    outC->P046_legacy_out[idx7].q_dir = Q_DIR_Reverse;
    outC->P046_legacy_out[idx7].m_leveltr = M_LEVELTR_Level_0;
    outC->P046_legacy_out[idx7].nid_ntc = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 7; idx++) {
    /* _L20=(TM_conversions::C_P046_to_legacy_loop#1)/ */
    C_P046_to_legacy_loop_init_TM_conversions(
      &outC->Context_C_P046_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P046_to_legacy_t_reset_TM_conversions(
  outC_C_P046_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 7; idx++) {
    /* _L20=(TM_conversions::C_P046_to_legacy_loop#1)/ */
    C_P046_to_legacy_loop_reset_TM_conversions(
      &outC->Context_C_P046_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P046_to_legacy_t_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

