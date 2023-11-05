/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet12_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_Sheet12/ */
void Triggers_Sheet12_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet12_RBC_Scenario_Pkg *outC)
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
    kcg_lit_int32(417),
    kcg_lit_float32(47.4),
    kcg_lit_float32(57.4),
    kcg_lit_int32(417000524),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
  outC->_L1 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_1.outTriggerId;
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L1,
    outC->_L5,
    kcg_lit_int32(418),
    kcg_lit_float32(199.0),
    kcg_lit_float32(209.0),
    kcg_lit_int32(418002040),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  outC->_L6 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_2.outTriggerId;
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L6,
    outC->_L5,
    kcg_lit_int32(419),
    kcg_lit_float32(48.5),
    kcg_lit_float32(58.5),
    kcg_lit_int32(419000535),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  outC->_L7 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_3.outTriggerId;
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L7,
    outC->_L5,
    kcg_lit_int32(476),
    kcg_lit_float32(246.4),
    kcg_lit_float32(256.4),
    kcg_lit_int32(476002514),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  outC->_L8 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_4.outTriggerId;
  outC->outTriggerId = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet12_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet12_RBC_Scenario_Pkg *outC)
{
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet12_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet12_RBC_Scenario_Pkg *outC)
{
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Triggers_Sheet12_RBC_Scenario_Pkg(
  SV_Triggers_Sheet12_RBC_Scenario_Pkg *SV,
  outC_Triggers_Sheet12_RBC_Scenario_Pkg *outC)
{
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_1,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_2,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_3,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_4,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
}

void kcg_load_SV_Triggers_Sheet12_RBC_Scenario_Pkg(
  outC_Triggers_Sheet12_RBC_Scenario_Pkg *outC,
  SV_Triggers_Sheet12_RBC_Scenario_Pkg *SV)
{
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_1);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_4);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet12_RBC_Scenario_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

