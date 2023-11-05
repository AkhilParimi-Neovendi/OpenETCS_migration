/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::checkNTCPriority/ */
void checkNTCPriority_xdebugSupport_Pkg(
  /* p41/ */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_checkNTCPriority_xdebugSupport_Pkg *outC)
{
  kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
    &outC->_L8,
    (P41_LevelTransitionOrder_T_Packet_Types_Pkg *)
      &cNoP41Element_xdebugSupport_Pkg);
  outC->_L6 = M_LEVELTR_Level_NTC_specified_by_NID_NTC;
  outC->_L3 = kcg_lit_int32(0);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(&outC->_L1, p41);
  if ((kcg_lit_int32(0) <= outC->_L3) & (outC->_L3 < kcg_lit_int32(7))) {
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L2,
      &outC->_L1[outC->_L3]);
  }
  else {
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(&outC->_L2, &outC->_L8);
  }
  outC->_L5 = outC->_L2.m_leveltr;
  outC->_L7 = outC->_L5 == outC->_L6;
  outC->isNTC = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void checkNTCPriority_init_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;

  outC->_L8.valid = kcg_true;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.d_leveltr = kcg_lit_int32(0);
  outC->_L8.m_leveltr = M_LEVELTR_Level_0;
  outC->_L8.nid_ntc = kcg_lit_int32(0);
  outC->_L8.l_ackleveltr = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = M_LEVELTR_Level_0;
  outC->_L5 = M_LEVELTR_Level_0;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_leveltr = kcg_lit_int32(0);
  outC->_L2.m_leveltr = M_LEVELTR_Level_0;
  outC->_L2.nid_ntc = kcg_lit_int32(0);
  outC->_L2.l_ackleveltr = kcg_lit_int32(0);
  for (idx = 0; idx < 7; idx++) {
    outC->_L1[idx].valid = kcg_true;
    outC->_L1[idx].q_dir = Q_DIR_Reverse;
    outC->_L1[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1[idx].d_leveltr = kcg_lit_int32(0);
    outC->_L1[idx].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1[idx].nid_ntc = kcg_lit_int32(0);
    outC->_L1[idx].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->isNTC = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkNTCPriority_reset_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkNTCPriority_xdebugSupport_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

