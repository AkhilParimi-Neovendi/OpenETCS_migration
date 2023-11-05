/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory13_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_UserStory13/ */
void Triggers_UserStory13_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  outC->_L2 = inLRBG;
  outC->_L3 = inDistanceToLRBG;
  outC->_L4 = inTriggerId;
  outC->_L5 = inRBCTime;
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    kcg_lit_int32(359),
    kcg_lit_float32(25.0),
    kcg_lit_float32(35.0),
    kcg_lit_int32(359000300),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
  outC->_L1 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_1.outTriggerId;
  outC->outTriggerId = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_UserStory13_init_RBC_Scenario_Pkg(
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_UserStory13_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Triggers_UserStory13_RBC_Scenario_Pkg(
  SV_Triggers_UserStory13_RBC_Scenario_Pkg *SV,
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_1,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}

void kcg_load_SV_Triggers_UserStory13_RBC_Scenario_Pkg(
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC,
  SV_Triggers_UserStory13_RBC_Scenario_Pkg *SV)
{
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_UserStory13_RBC_Scenario_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

