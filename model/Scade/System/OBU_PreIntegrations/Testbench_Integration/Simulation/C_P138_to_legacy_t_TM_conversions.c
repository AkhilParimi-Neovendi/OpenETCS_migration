/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P138_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P138_to_legacy_t/ */
void C_P138_to_legacy_t_TM_conversions(
  /* P138_in/ */
  P138_OBU_T_TM *P138_in,
  outC_C_P138_to_legacy_t_TM_conversions *outC)
{
  kcg_copy_P138_OBU_T_TM(&outC->_L1, P138_in);
  outC->_L3 = outC->_L1.valid;
  outC->_L4 = outC->_L1.q_dir;
  outC->_L5 = outC->_L1.q_scale;
  outC->_L6 = outC->_L1.d_startreverse;
  outC->_L7 = outC->_L1.l_reversearea;
  outC->_L2.valid = outC->_L3;
  outC->_L2.q_dir = outC->_L4;
  outC->_L2.q_scale = outC->_L5;
  outC->_L2.d_startreverse = outC->_L6;
  outC->_L2.l_reversearea = outC->_L7;
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->P138_legacy_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P138_to_legacy_t_init_TM_conversions(
  outC_C_P138_to_legacy_t_TM_conversions *outC)
{
  outC->_L3 = kcg_true;
  outC->_L4 = Q_DIR_Reverse;
  outC->_L5 = Q_SCALE_10_cm_scale;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_startreverse = kcg_lit_int32(0);
  outC->_L2.l_reversearea = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_startreverse = kcg_lit_int32(0);
  outC->_L1.l_reversearea = kcg_lit_int32(0);
  outC->P138_legacy_out.valid = kcg_true;
  outC->P138_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P138_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P138_legacy_out.d_startreverse = kcg_lit_int32(0);
  outC->P138_legacy_out.l_reversearea = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P138_to_legacy_t_reset_TM_conversions(
  outC_C_P138_to_legacy_t_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P138_to_legacy_t_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

