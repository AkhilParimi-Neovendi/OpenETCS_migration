/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory16_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_UserStory16/ */
void Triggers_UserStory16_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_UserStory16_RBC_Scenario_Pkg *outC)
{
  NID_LRBG noname;
  kcg_float32 _1_noname;
  T_TRAIN _2_noname;

  outC->_L9 = inTriggerId;
  outC->_L7 = inRBCTime;
  _2_noname = outC->_L7;
  outC->_L6 = inDistanceToLRBG;
  _1_noname = outC->_L6;
  outC->_L8 = inLRBG;
  noname = outC->_L8;
  outC->outTriggerId = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_UserStory16_init_RBC_Scenario_Pkg(
  outC_Triggers_UserStory16_RBC_Scenario_Pkg *outC)
{
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_UserStory16_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory16_RBC_Scenario_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_UserStory16_RBC_Scenario_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

