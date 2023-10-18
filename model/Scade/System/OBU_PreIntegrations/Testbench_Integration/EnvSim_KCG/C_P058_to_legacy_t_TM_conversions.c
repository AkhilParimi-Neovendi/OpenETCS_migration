/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P058_to_legacy_t/ */
void C_P058_to_legacy_t_TM_conversions(
  /* P058_in/ */
  P058_OBU_T_TM *P058_in,
  outC_C_P058_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  kcg_copy_P058_OBU_T_TM(&outC->_L1, P058_in);
  kcg_copy_P058_OBU_sectionlist_enum_T_TM(&outC->_L10, &outC->_L1.sections);
  /* _L22/ */
  for (idx = 0; idx < 2; idx++) {
    kcg_copy_P058_OBU_sectionlist_enum_T_TM(&outC->_L22[idx], &outC->_L10);
  }
  /* _L20= */
  for (idx1 = 0; idx1 < 2; idx1++) {
    /* _L20=(TM_conversions::C_P058_to_legacy_loop#1)/ */
    C_P058_to_legacy_loop_TM_conversions(
      /* _L20= */(kcg_int64) idx1,
      &outC->_L22[idx1],
      &outC->Context_C_P058_to_legacy_loop_1[idx1]);
    kcg_copy_IterPacket58_T_Packet_Types_Pkg(
      &outC->_L20[idx1],
      &outC->Context_C_P058_to_legacy_loop_1[idx1].P058_legacy_iter_out);
  }
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(58);
  outC->_L3 = outC->_L1.valid;
  outC->_L4 = outC->_L1.q_dir;
  outC->_L5 = outC->_L1.q_scale;
  outC->_L6 = outC->_L1.t_cycloc;
  outC->_L7 = outC->_L1.d_cycloc;
  outC->_L8 = outC->_L1.m_loc;
  outC->_L9 = outC->_L1.n_iter;
  outC->_L2.valid = outC->_L3;
  outC->_L2.nid_packet = outC->_L11;
  outC->_L2.q_dir = outC->_L4;
  outC->_L2.l_packet = outC->_L12;
  outC->_L2.q_scale = outC->_L5;
  outC->_L2.t_cycloc = outC->_L6;
  outC->_L2.d_cycloc = outC->_L7;
  outC->_L2.m_loc = outC->_L8;
  outC->_L2.n_iter = outC->_L9;
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(
    &outC->_L2.iterPacket58List,
    &outC->_L20);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->P058_legacy_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P058_to_legacy_t_init_TM_conversions(
  outC_C_P058_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx2 = 0; idx2 < 2; idx2++) {
    for (idx1 = 0; idx1 < 32; idx1++) {
      outC->_L22[idx2][idx1].valid = kcg_true;
      outC->_L22[idx2][idx1].d_loc = kcg_lit_int64(0);
      outC->_L22[idx2][idx1].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
    }
  }
  for (idx3 = 0; idx3 < 2; idx3++) {
    outC->_L20[idx3].d_loc = kcg_lit_int64(0);
    outC->_L20[idx3].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L4 = Q_DIR_Reverse;
  outC->_L5 = Q_SCALE_10_cm_scale;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = M_LOC_Now;
  outC->_L9 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L10[idx4].valid = kcg_true;
    outC->_L10[idx4].d_loc = kcg_lit_int64(0);
    outC->_L10[idx4].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_packet = kcg_lit_int64(0);
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.l_packet = kcg_lit_int64(0);
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.t_cycloc = kcg_lit_int64(0);
  outC->_L2.d_cycloc = kcg_lit_int64(0);
  outC->_L2.m_loc = M_LOC_Now;
  outC->_L2.n_iter = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 2; idx5++) {
    outC->_L2.iterPacket58List[idx5].d_loc = kcg_lit_int64(0);
    outC->_L2.iterPacket58List[idx5].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.t_cycloc = kcg_lit_int64(0);
  outC->_L1.d_cycloc = kcg_lit_int64(0);
  outC->_L1.m_loc = M_LOC_Now;
  outC->_L1.n_iter = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L1.sections[idx6].valid = kcg_true;
    outC->_L1.sections[idx6].d_loc = kcg_lit_int64(0);
    outC->_L1.sections[idx6].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->P058_legacy_out.valid = kcg_true;
  outC->P058_legacy_out.nid_packet = kcg_lit_int64(0);
  outC->P058_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P058_legacy_out.l_packet = kcg_lit_int64(0);
  outC->P058_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P058_legacy_out.t_cycloc = kcg_lit_int64(0);
  outC->P058_legacy_out.d_cycloc = kcg_lit_int64(0);
  outC->P058_legacy_out.m_loc = M_LOC_Now;
  outC->P058_legacy_out.n_iter = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 2; idx7++) {
    outC->P058_legacy_out.iterPacket58List[idx7].d_loc = kcg_lit_int64(0);
    outC->P058_legacy_out.iterPacket58List[idx7].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx = 0; idx < 2; idx++) {
    /* _L20=(TM_conversions::C_P058_to_legacy_loop#1)/ */
    C_P058_to_legacy_loop_init_TM_conversions(
      &outC->Context_C_P058_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P058_to_legacy_t_reset_TM_conversions(
  outC_C_P058_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 2; idx++) {
    /* _L20=(TM_conversions::C_P058_to_legacy_loop#1)/ */
    C_P058_to_legacy_loop_reset_TM_conversions(
      &outC->Context_C_P058_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_to_legacy_t_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

