/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory15_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_UserStory15/ */
void Triggers_UserStory15_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_UserStory15_RBC_Scenario_Pkg *outC)
{
  static NID_LRBG noname;
  static kcg_float32 _1_noname;
  static T_TRAIN _2_noname;

  outC->_L9 = inTriggerId;
  outC->_L8 = inRBCTime;
  _2_noname = outC->_L8;
  outC->_L7 = inDistanceToLRBG;
  _1_noname = outC->_L7;
  outC->_L6 = inLRBG;
  noname = outC->_L6;
  outC->outTriggerId = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_UserStory15_init_RBC_Scenario_Pkg(
  outC_Triggers_UserStory15_RBC_Scenario_Pkg *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_UserStory15_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory15_RBC_Scenario_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_UserStory15_RBC_Scenario_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

