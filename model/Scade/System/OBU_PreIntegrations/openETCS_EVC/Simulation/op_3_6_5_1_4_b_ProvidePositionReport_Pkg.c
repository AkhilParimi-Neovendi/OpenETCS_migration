/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_b/ */
void op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;

  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &last_modeLevelStatus,
    &outC->mem_modeLevelStatus);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    modeLevelStatus);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L5,
    &last_modeLevelStatus);
  outC->_L6 = outC->_L5.currMode;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L1,
    modeLevelStatus);
  outC->_L2 = outC->_L1.currMode;
  outC->_L7 = outC->_L2 != outC->_L6;
  outC->trigger = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  outC->_L7 = kcg_true;
  outC->_L6 = M_MODE_Full_Supervision;
  outC->_L5.currMode = M_MODE_Full_Supervision;
  outC->_L5.currLevel = M_LEVEL_Level_0;
  outC->_L5.levelTransitionBorderPassed = kcg_true;
  outC->_L2 = M_MODE_Full_Supervision;
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
void op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
      &cModeAndLevelStatus_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_b_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

