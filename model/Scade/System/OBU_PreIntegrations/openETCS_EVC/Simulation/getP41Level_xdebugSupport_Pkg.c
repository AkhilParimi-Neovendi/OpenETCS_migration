/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getP41Level_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::getP41Level/ */
void getP41Level_xdebugSupport_Pkg(
  /* p41/ */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_getP41Level_xdebugSupport_Pkg *outC)
{
  outC->_L14 = M_LEVEL_Level_3;
  outC->_L13 = M_LEVEL_Level_2;
  outC->_L12 = M_LEVEL_Level_1;
  outC->_L11 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L10 = M_LEVEL_Level_0;
  kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
    &outC->_L8,
    (P41_LevelTransitionOrder_T_Packet_Types_Pkg *)
      &cNoP41Element_xdebugSupport_Pkg);
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
  /* _L9= */
  switch (outC->_L5) {
    case M_LEVELTR_Level_0 :
      outC->_L9 = outC->_L10;
      break;
    case M_LEVELTR_Level_NTC_specified_by_NID_NTC :
      outC->_L9 = outC->_L11;
      break;
    case M_LEVELTR_Level_1 :
      outC->_L9 = outC->_L12;
      break;
    case M_LEVELTR_Level_2 :
      outC->_L9 = outC->_L13;
      break;
    case M_LEVELTR_Level_3 :
      outC->_L9 = outC->_L14;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->p41_level = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void getP41Level_init_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC)
{
  kcg_size idx;

  outC->_L14 = M_LEVEL_Level_0;
  outC->_L13 = M_LEVEL_Level_0;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L11 = M_LEVEL_Level_0;
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L9 = M_LEVEL_Level_0;
  outC->_L8.valid = kcg_true;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.d_leveltr = kcg_lit_int32(0);
  outC->_L8.m_leveltr = M_LEVELTR_Level_0;
  outC->_L8.nid_ntc = kcg_lit_int32(0);
  outC->_L8.l_ackleveltr = kcg_lit_int32(0);
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
  outC->p41_level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getP41Level_reset_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getP41Level_xdebugSupport_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

