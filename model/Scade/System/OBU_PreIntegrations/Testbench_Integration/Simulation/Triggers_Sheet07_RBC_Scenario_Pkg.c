/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet07_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_Sheet07/ */
void Triggers_Sheet07_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC)
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
    kcg_lit_int32(371),
    kcg_lit_float32(19.1),
    kcg_lit_float32(29.1),
    kcg_lit_int32(371000241),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  outC->_L6 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_2.outTriggerId;
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L6,
    outC->_L4,
    kcg_lit_int32(371),
    kcg_lit_float32(100.2),
    kcg_lit_float32(110.2),
    kcg_lit_int32(371001052),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  outC->_L8 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_3.outTriggerId;
  /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L8,
    outC->_L4,
    kcg_lit_int32(371),
    kcg_lit_float32(158.4),
    kcg_lit_float32(168.4),
    kcg_lit_int32(371001634),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  outC->_L9 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_4.outTriggerId;
  /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L1,
    outC->_L2,
    outC->_L9,
    outC->_L4,
    kcg_lit_int32(372),
    kcg_lit_float32(54.4),
    kcg_lit_float32(64.4),
    kcg_lit_int32(372000594),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  outC->_L10 =
    outC->Context_RadioTrackTrainMessageTrigger__Trigger_5.outTriggerId;
  outC->outTriggerId = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet07_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC)
{
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
  /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet07_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC)
{
  /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Triggers_Sheet07_RBC_Scenario_Pkg(
  SV_Triggers_Sheet07_RBC_Scenario_Pkg *SV,
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC)
{
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_2,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_3,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_4,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_5,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
}

void kcg_load_SV_Triggers_Sheet07_RBC_Scenario_Pkg(
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC,
  SV_Triggers_Sheet07_RBC_Scenario_Pkg *SV)
{
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_5);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet07_RBC_Scenario_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

