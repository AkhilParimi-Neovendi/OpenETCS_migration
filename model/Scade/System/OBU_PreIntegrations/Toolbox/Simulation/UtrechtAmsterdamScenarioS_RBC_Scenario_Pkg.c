/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel/ */
void UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int64 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC)
{
  outC->_L37 = inRBCTime;
  outC->_L36 = inTriggerId;
  outC->_L3 = inDistanceToLRBG;
  outC->_L2 = inLRBG;
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L36,
    outC->_L37,
    kcg_lit_int64(0),
    kcg_lit_float64(0.0),
    kcg_lit_float64(0.0),
    kcg_lit_int64(-1),
    kcg_lit_float64(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
  outC->_L1 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_1.outTriggerId;
  outC->outTriggerId = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioS_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC)
{
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->outTriggerId = kcg_lit_int64(0);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UtrechtAmsterdamScenarioS_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC)
{
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

