/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g/ */
void op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  /* modeLevelStatus/ */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;

  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &last_modeLevelStatus,
    &outC->mem_modeLevelStatus);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    modeLevelStatus);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L1,
    modeLevelStatus);
  outC->_L14 = outC->_L1.levelTransitionBorderPassed;
  outC->_L2 = outC->_L1.currLevel;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L11,
    &last_modeLevelStatus);
  outC->_L12 = outC->_L11.currLevel;
  outC->_L8 = outC->_L12 != outC->_L2;
  outC->_L13 = outC->_L8 | outC->_L14;
  outC->trigger = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_f_g_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L11.currMode = M_MODE_Full_Supervision;
  outC->_L11.currLevel = M_LEVEL_Level_0;
  outC->_L11.levelTransitionBorderPassed = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L2 = M_LEVEL_Level_0;
  outC->_L1.currMode = M_MODE_Full_Supervision;
  outC->_L1.currLevel = M_LEVEL_Level_0;
  outC->_L1.levelTransitionBorderPassed = kcg_true;
  outC->trigger = kcg_true;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
      &cModeAndLevelStatus_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_f_g_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
      &cModeAndLevelStatus_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
  SV_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *SV,
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &SV->Context_mem_modeLevelStatus,
    &outC->mem_modeLevelStatus);
}

void kcg_load_SV_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC,
  SV_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *SV)
{
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    &SV->Context_mem_modeLevelStatus);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

