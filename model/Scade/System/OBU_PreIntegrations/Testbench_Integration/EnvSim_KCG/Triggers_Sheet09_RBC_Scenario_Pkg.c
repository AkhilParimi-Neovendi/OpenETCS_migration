/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet09_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_Sheet09/ */
void Triggers_Sheet09_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet09_RBC_Scenario_Pkg *outC)
{
  outC->_L1 = inLRBG;
  outC->_L2 = inDistanceToLRBG;
  outC->_L3 = inTriggerId;
  outC->_L4 = inRBCTime;
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L3,
    outC->_L4,
    kcg_lit_int32(390),
    kcg_lit_float32(62.4),
    kcg_lit_float32(72.4),
    kcg_lit_int32(390000674),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  outC->_L6 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_2.outTriggerId;
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L6,
    outC->_L4,
    kcg_lit_int32(391),
    kcg_lit_float32(366.4),
    kcg_lit_float32(376.4),
    kcg_lit_int32(391003714),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  outC->_L7 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_3.outTriggerId;
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L7,
    outC->_L4,
    kcg_lit_int32(393),
    kcg_lit_float32(59.8),
    kcg_lit_float32(69.8),
    kcg_lit_int32(393000648),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  outC->_L8 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_4.outTriggerId;
  /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L8,
    outC->_L4,
    kcg_lit_int32(396),
    kcg_lit_float32(72.7),
    kcg_lit_float32(82.7),
    kcg_lit_int32(396000777),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  outC->_L9 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_5.outTriggerId;
  outC->outTriggerId = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet09_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet09_RBC_Scenario_Pkg *outC)
{
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
  /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet09_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet09_RBC_Scenario_Pkg *outC)
{
  /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet09_RBC_Scenario_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

