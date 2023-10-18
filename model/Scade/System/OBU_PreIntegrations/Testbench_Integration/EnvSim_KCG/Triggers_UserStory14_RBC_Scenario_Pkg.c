/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory14_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_UserStory14/ */
void Triggers_UserStory14_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int64 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_UserStory14_RBC_Scenario_Pkg *outC)
{
  static NID_LRBG noname;
  static kcg_float64 _1_noname;
  static T_TRAIN _2_noname;

  outC->_L5 = inRBCTime;
  _2_noname = outC->_L5;
  outC->_L3 = inDistanceToLRBG;
  _1_noname = outC->_L3;
  outC->_L2 = inLRBG;
  noname = outC->_L2;
  outC->_L4 = inTriggerId;
  outC->outTriggerId = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_UserStory14_init_RBC_Scenario_Pkg(
  outC_Triggers_UserStory14_RBC_Scenario_Pkg *outC)
{
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_int64(0);
  outC->outTriggerId = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_UserStory14_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory14_RBC_Scenario_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_UserStory14_RBC_Scenario_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

