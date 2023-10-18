/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P139_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P139_to_legacy_t/ */
void C_P139_to_legacy_t_TM_conversions(
  /* P139_in/ */
  P139_OBU_T_TM *P139_in,
  outC_C_P139_to_legacy_t_TM_conversions *outC)
{
  kcg_copy_P139_OBU_T_TM(&outC->_L1, P139_in);
  outC->_L3 = outC->_L1.valid;
  outC->_L4 = outC->_L1.q_dir;
  outC->_L5 = outC->_L1.q_scale;
  outC->_L6 = outC->_L1.d_reverse;
  outC->_L7 = outC->_L1.v_reverse;
  outC->_L2.valid = outC->_L3;
  outC->_L2.q_dir = outC->_L4;
  outC->_L2.q_scale = outC->_L5;
  outC->_L2.d_reverse = outC->_L6;
  outC->_L2.v_reverse = outC->_L7;
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->P139_legacy_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P139_to_legacy_t_init_TM_conversions(
  outC_C_P139_to_legacy_t_TM_conversions *outC)
{
  outC->_L3 = kcg_true;
  outC->_L4 = Q_DIR_Reverse;
  outC->_L5 = Q_SCALE_10_cm_scale;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_reverse = kcg_lit_int64(0);
  outC->_L2.v_reverse = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_reverse = kcg_lit_int64(0);
  outC->_L1.v_reverse = kcg_lit_int64(0);
  outC->P139_legacy_out.valid = kcg_true;
  outC->P139_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P139_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P139_legacy_out.d_reverse = kcg_lit_int64(0);
  outC->P139_legacy_out.v_reverse = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P139_to_legacy_t_reset_TM_conversions(
  outC_C_P139_to_legacy_t_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P139_to_legacy_t_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

