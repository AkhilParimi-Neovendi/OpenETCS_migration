/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet11_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_Sheet11/ */
void Triggers_Sheet11_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC)
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
    kcg_lit_int32(397),
    kcg_lit_float32(164.2),
    kcg_lit_float32(174.2),
    kcg_lit_int32(397001692),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
  outC->_L1 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_1.outTriggerId;
  /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L1,
    outC->_L5,
    kcg_lit_int32(397),
    kcg_lit_float32(377.0),
    kcg_lit_float32(387.0),
    kcg_lit_int32(397003820),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_2);
  outC->_L6 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_2.outTriggerId;
  /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L6,
    outC->_L5,
    kcg_lit_int32(400),
    kcg_lit_float32(101.0),
    kcg_lit_float32(111.0),
    kcg_lit_int32(400001060),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_3);
  outC->_L7 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_3.outTriggerId;
  /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L7,
    outC->_L5,
    kcg_lit_int32(400),
    kcg_lit_float32(366.2),
    kcg_lit_float32(376.2),
    kcg_lit_int32(400003712),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_4);
  outC->_L8 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_4.outTriggerId;
  /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L8,
    outC->_L5,
    kcg_lit_int32(401),
    kcg_lit_float32(177.7),
    kcg_lit_float32(187.7),
    kcg_lit_int32(401001827),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  outC->_L9 = outC->Context_RadioTrackTrainMessageTrigger__Trigger_5.outTriggerId;
  /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L9,
    outC->_L5,
    kcg_lit_int32(402),
    kcg_lit_float32(58.3),
    kcg_lit_float32(68.3),
    kcg_lit_int32(402000633),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_6);
  outC->_L10 =
    outC->Context_RadioTrackTrainMessageTrigger__Trigger_6.outTriggerId;
  /* _L11=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#7)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L10,
    outC->_L5,
    kcg_lit_int32(404),
    kcg_lit_float32(179.4),
    kcg_lit_float32(189.4),
    kcg_lit_int32(404001844),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_7);
  outC->_L11 =
    outC->Context_RadioTrackTrainMessageTrigger__Trigger_7.outTriggerId;
  /* _L12=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#8)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L11,
    outC->_L5,
    kcg_lit_int32(405),
    kcg_lit_float32(37.2),
    kcg_lit_float32(47.2),
    kcg_lit_int32(405000422),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_8);
  outC->_L12 =
    outC->Context_RadioTrackTrainMessageTrigger__Trigger_8.outTriggerId;
  /* _L13=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#9)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L12,
    outC->_L5,
    kcg_lit_int32(407),
    kcg_lit_float32(162.3),
    kcg_lit_float32(172.3),
    kcg_lit_int32(407001673),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_9);
  outC->_L13 =
    outC->Context_RadioTrackTrainMessageTrigger__Trigger_9.outTriggerId;
  /* _L14=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#10)/ */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L13,
    outC->_L5,
    kcg_lit_int32(408),
    kcg_lit_float32(45.9),
    kcg_lit_float32(55.9),
    kcg_lit_int32(408000509),
    kcg_lit_float32(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_10);
  outC->_L14 =
    outC->Context_RadioTrackTrainMessageTrigger__Trigger_10.outTriggerId;
  outC->outTriggerId = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet11_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC)
{
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outTriggerId = kcg_lit_int32(0);
  /* _L14=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#10)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_10);
  /* _L13=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#9)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_9);
  /* _L12=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#8)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_8);
  /* _L11=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#7)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_7);
  /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_6);
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
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet11_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC)
{
  /* _L14=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#10)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_10);
  /* _L13=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#9)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_9);
  /* _L12=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#8)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_8);
  /* _L11=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#7)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_7);
  /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_6);
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
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Triggers_Sheet11_RBC_Scenario_Pkg(
  SV_Triggers_Sheet11_RBC_Scenario_Pkg *SV,
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC)
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
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_5,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_6,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_6);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_7,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_7);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_8,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_8);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_9,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_9);
  kcg_save_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_10,
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_10);
}

void kcg_load_SV_Triggers_Sheet11_RBC_Scenario_Pkg(
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC,
  SV_Triggers_Sheet11_RBC_Scenario_Pkg *SV)
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
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_5,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_5);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_6,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_6);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_7,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_7);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_8,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_8);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_9,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_9);
  kcg_load_SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_10,
    &SV->Context_RadioTrackTrainMessageTrigger__Trigger_10);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet11_RBC_Scenario_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

