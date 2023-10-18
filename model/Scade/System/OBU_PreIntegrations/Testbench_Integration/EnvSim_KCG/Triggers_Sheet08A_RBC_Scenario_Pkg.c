/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet08A_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_Sheet08A/ */
void Triggers_Sheet08A_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int64 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC)
{
  outC->_L1 = inLRBG;
  outC->_L2 = inDistanceToLRBG;
  outC->_L3 = inTriggerId;
  outC->_L4 = inRBCTime;
  /* _L5=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L3,
    outC->_L4,
    kcg_lit_int64(374),
    kcg_lit_float64(173.9),
    kcg_lit_float64(183.9),
    kcg_lit_int64(374001789),
    kcg_lit_float64(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
  outC->_L5 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_1.outTriggerId;
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L5,
    outC->_L4,
    kcg_lit_int64(375),
    kcg_lit_float64(49.4),
    kcg_lit_float64(59.4),
    kcg_lit_int64(375000544),
    kcg_lit_float64(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  outC->_L6 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_2.outTriggerId;
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L6,
    outC->_L4,
    kcg_lit_int64(376),
    kcg_lit_float64(286.3),
    kcg_lit_float64(296.3),
    kcg_lit_int64(376002913),
    kcg_lit_float64(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  outC->_L7 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_3.outTriggerId;
  outC->outTriggerId = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet08A_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC)
{
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_int64(0);
  outC->outTriggerId = kcg_lit_int64(0);
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L5=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet08A_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC)
{
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L5=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet08A_RBC_Scenario_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

