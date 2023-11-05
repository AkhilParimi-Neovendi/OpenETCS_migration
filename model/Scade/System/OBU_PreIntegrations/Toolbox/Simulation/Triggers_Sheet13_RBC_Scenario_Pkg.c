/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet13_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_Sheet13/ */
void Triggers_Sheet13_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet13_RBC_Scenario_Pkg *outC)
{
  outC->_L2 = inLRBG;
  outC->_L3 = inDistanceToLRBG;
  outC->_L4 = inTriggerId;
  outC->_L5 = inRBCTime;
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    kcg_lit_int32(420),
    kcg_lit_float32(164.4),
    kcg_lit_float32(174.4),
    kcg_lit_int32(420001694),
    kcg_lit_float32(0.0),
    &outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_1);
  outC->_L1 =
    outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_1.outTriggerId;
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L1,
    outC->_L5,
    kcg_lit_int32(421),
    kcg_lit_float32(45.0),
    kcg_lit_float32(55.0),
    kcg_lit_int32(421000500),
    kcg_lit_float32(0.0),
    &outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_2);
  outC->_L6 =
    outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_2.outTriggerId;
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L6,
    outC->_L5,
    kcg_lit_int32(422),
    kcg_lit_float32(187.7),
    kcg_lit_float32(197.7),
    kcg_lit_int32(422001927),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  outC->_L7 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_3.outTriggerId;
  outC->outTriggerId = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet13_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet13_RBC_Scenario_Pkg *outC)
{
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet13_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet13_RBC_Scenario_Pkg *outC)
{
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet13_RBC_Scenario_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

