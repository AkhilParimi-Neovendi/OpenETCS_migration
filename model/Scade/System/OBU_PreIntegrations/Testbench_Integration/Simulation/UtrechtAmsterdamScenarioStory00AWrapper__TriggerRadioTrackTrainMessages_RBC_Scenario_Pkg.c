/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages/ */
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  outC->_L2 = inLRBG;
  outC->_L3 = inDistanceToLRBG;
  outC->_L38 = kcg_lit_int64(-1);
  outC->_L37 = inRBCTime;
  /* _L1=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L38,
    outC->_L37,
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1);
  outC->_L1 =
    outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1.outTriggerId;
  /* _L35=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L1,
    outC->_L37,
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1);
  outC->_L35 =
    outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1.outTriggerId;
  /* _L39=(RBC_Scenario_Pkg::Triggers_Sheet07#1)/ */
  Triggers_Sheet07_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L35,
    outC->_L37,
    &outC->Context_Triggers_Sheet07_1);
  outC->_L39 = outC->Context_Triggers_Sheet07_1.outTriggerId;
  /* _L40=(RBC_Scenario_Pkg::Triggers_Sheet08A#1)/ */
  Triggers_Sheet08A_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L39,
    outC->_L37,
    &outC->Context_Triggers_Sheet08A_1);
  outC->_L40 = outC->Context_Triggers_Sheet08A_1.outTriggerId;
  /* _L42=(RBC_Scenario_Pkg::Triggers_Sheet08B#2)/ */
  Triggers_Sheet08B_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L40,
    outC->_L37,
    &outC->Context_Triggers_Sheet08B_2);
  outC->_L42 = outC->Context_Triggers_Sheet08B_2.outTriggerId;
  /* _L43=(RBC_Scenario_Pkg::Triggers_Sheet09#1)/ */
  Triggers_Sheet09_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L42,
    outC->_L37,
    &outC->Context_Triggers_Sheet09_1);
  outC->_L43 = outC->Context_Triggers_Sheet09_1.outTriggerId;
  /* _L44=(RBC_Scenario_Pkg::Triggers_Sheet11#1)/ */
  Triggers_Sheet11_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L43,
    outC->_L37,
    &outC->Context_Triggers_Sheet11_1);
  outC->_L44 = outC->Context_Triggers_Sheet11_1.outTriggerId;
  /* _L45=(RBC_Scenario_Pkg::Triggers_Sheet12#1)/ */
  Triggers_Sheet12_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L44,
    outC->_L37,
    &outC->Context_Triggers_Sheet12_1);
  outC->_L45 = outC->Context_Triggers_Sheet12_1.outTriggerId;
  /* _L46=(RBC_Scenario_Pkg::Triggers_Sheet13#1)/ */
  Triggers_Sheet13_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L45,
    outC->_L37,
    &outC->Context_Triggers_Sheet13_1);
  outC->_L46 = outC->Context_Triggers_Sheet13_1.outTriggerId;
  /* _L47=(RBC_Scenario_Pkg::Triggers_Sheet14#1)/ */
  Triggers_Sheet14_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L46,
    outC->_L37,
    &outC->Context_Triggers_Sheet14_1);
  outC->_L47 = outC->Context_Triggers_Sheet14_1.outTriggerId;
  /* _L50=(RBC_Scenario_Pkg::Triggers_UserStory13#1)/ */
  Triggers_UserStory13_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L47,
    outC->_L37,
    &outC->Context_Triggers_UserStory13_1);
  outC->_L50 = outC->Context_Triggers_UserStory13_1.outTriggerId;
  /* _L51=(RBC_Scenario_Pkg::Triggers_UserStory14#1)/ */
  Triggers_UserStory14_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L50,
    outC->_L37,
    &outC->Context_Triggers_UserStory14_1);
  outC->_L51 = outC->Context_Triggers_UserStory14_1.outTriggerId;
  /* _L52=(RBC_Scenario_Pkg::Triggers_UserStory15#1)/ */
  Triggers_UserStory15_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L51,
    outC->_L37,
    &outC->Context_Triggers_UserStory15_1);
  outC->_L52 = outC->Context_Triggers_UserStory15_1.outTriggerId;
  /* _L53=(RBC_Scenario_Pkg::Triggers_UserStory16#1)/ */
  Triggers_UserStory16_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L52,
    outC->_L37,
    &outC->Context_Triggers_UserStory16_1);
  outC->_L53 = outC->Context_Triggers_UserStory16_1.outTriggerId;
  outC->outTriggerId = outC->_L53;
}

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  outC->_L53 = kcg_lit_int64(0);
  outC->_L52 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L50 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L44 = kcg_lit_int64(0);
  outC->_L43 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->outTriggerId = kcg_lit_int64(0);
  /* _L53=(RBC_Scenario_Pkg::Triggers_UserStory16#1)/ */
  Triggers_UserStory16_init_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory16_1);
  /* _L52=(RBC_Scenario_Pkg::Triggers_UserStory15#1)/ */
  Triggers_UserStory15_init_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory15_1);
  /* _L51=(RBC_Scenario_Pkg::Triggers_UserStory14#1)/ */
  Triggers_UserStory14_init_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory14_1);
  /* _L50=(RBC_Scenario_Pkg::Triggers_UserStory13#1)/ */
  Triggers_UserStory13_init_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory13_1);
  /* _L47=(RBC_Scenario_Pkg::Triggers_Sheet14#1)/ */
  Triggers_Sheet14_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet14_1);
  /* _L46=(RBC_Scenario_Pkg::Triggers_Sheet13#1)/ */
  Triggers_Sheet13_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet13_1);
  /* _L45=(RBC_Scenario_Pkg::Triggers_Sheet12#1)/ */
  Triggers_Sheet12_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet12_1);
  /* _L44=(RBC_Scenario_Pkg::Triggers_Sheet11#1)/ */
  Triggers_Sheet11_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet11_1);
  /* _L43=(RBC_Scenario_Pkg::Triggers_Sheet09#1)/ */
  Triggers_Sheet09_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet09_1);
  /* _L42=(RBC_Scenario_Pkg::Triggers_Sheet08B#2)/ */
  Triggers_Sheet08B_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet08B_2);
  /* _L40=(RBC_Scenario_Pkg::Triggers_Sheet08A#1)/ */
  Triggers_Sheet08A_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet08A_1);
  /* _L39=(RBC_Scenario_Pkg::Triggers_Sheet07#1)/ */
  Triggers_Sheet07_init_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet07_1);
  /* _L35=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_init_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1);
  /* _L1=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_init_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  /* _L53=(RBC_Scenario_Pkg::Triggers_UserStory16#1)/ */
  Triggers_UserStory16_reset_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory16_1);
  /* _L52=(RBC_Scenario_Pkg::Triggers_UserStory15#1)/ */
  Triggers_UserStory15_reset_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory15_1);
  /* _L51=(RBC_Scenario_Pkg::Triggers_UserStory14#1)/ */
  Triggers_UserStory14_reset_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory14_1);
  /* _L50=(RBC_Scenario_Pkg::Triggers_UserStory13#1)/ */
  Triggers_UserStory13_reset_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory13_1);
  /* _L47=(RBC_Scenario_Pkg::Triggers_Sheet14#1)/ */
  Triggers_Sheet14_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet14_1);
  /* _L46=(RBC_Scenario_Pkg::Triggers_Sheet13#1)/ */
  Triggers_Sheet13_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet13_1);
  /* _L45=(RBC_Scenario_Pkg::Triggers_Sheet12#1)/ */
  Triggers_Sheet12_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet12_1);
  /* _L44=(RBC_Scenario_Pkg::Triggers_Sheet11#1)/ */
  Triggers_Sheet11_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet11_1);
  /* _L43=(RBC_Scenario_Pkg::Triggers_Sheet09#1)/ */
  Triggers_Sheet09_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet09_1);
  /* _L42=(RBC_Scenario_Pkg::Triggers_Sheet08B#2)/ */
  Triggers_Sheet08B_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet08B_2);
  /* _L40=(RBC_Scenario_Pkg::Triggers_Sheet08A#1)/ */
  Triggers_Sheet08A_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet08A_1);
  /* _L39=(RBC_Scenario_Pkg::Triggers_Sheet07#1)/ */
  Triggers_Sheet07_reset_RBC_Scenario_Pkg(&outC->Context_Triggers_Sheet07_1);
  /* _L35=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_reset_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1);
  /* _L1=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_reset_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
  SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *SV,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  kcg_save_SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
    &SV->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1,
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1);
  kcg_save_SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
    &SV->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1,
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1);
  kcg_save_SV_Triggers_Sheet07_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet07_1,
    &outC->Context_Triggers_Sheet07_1);
  kcg_save_SV_Triggers_Sheet08A_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet08A_1,
    &outC->Context_Triggers_Sheet08A_1);
  kcg_save_SV_Triggers_Sheet08B_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet08B_2,
    &outC->Context_Triggers_Sheet08B_2);
  kcg_save_SV_Triggers_Sheet09_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet09_1,
    &outC->Context_Triggers_Sheet09_1);
  kcg_save_SV_Triggers_Sheet11_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet11_1,
    &outC->Context_Triggers_Sheet11_1);
  kcg_save_SV_Triggers_Sheet12_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet12_1,
    &outC->Context_Triggers_Sheet12_1);
  kcg_save_SV_Triggers_Sheet13_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet13_1,
    &outC->Context_Triggers_Sheet13_1);
  kcg_save_SV_Triggers_Sheet14_RBC_Scenario_Pkg(
    &SV->Context_Triggers_Sheet14_1,
    &outC->Context_Triggers_Sheet14_1);
  kcg_save_SV_Triggers_UserStory13_RBC_Scenario_Pkg(
    &SV->Context_Triggers_UserStory13_1,
    &outC->Context_Triggers_UserStory13_1);
}

void kcg_load_SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC,
  SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *SV)
{
  kcg_load_SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1,
    &SV->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1);
  kcg_load_SV_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1,
    &SV->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1);
  kcg_load_SV_Triggers_Sheet07_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet07_1,
    &SV->Context_Triggers_Sheet07_1);
  kcg_load_SV_Triggers_Sheet08A_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet08A_1,
    &SV->Context_Triggers_Sheet08A_1);
  kcg_load_SV_Triggers_Sheet08B_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet08B_2,
    &SV->Context_Triggers_Sheet08B_2);
  kcg_load_SV_Triggers_Sheet09_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet09_1,
    &SV->Context_Triggers_Sheet09_1);
  kcg_load_SV_Triggers_Sheet11_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet11_1,
    &SV->Context_Triggers_Sheet11_1);
  kcg_load_SV_Triggers_Sheet12_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet12_1,
    &SV->Context_Triggers_Sheet12_1);
  kcg_load_SV_Triggers_Sheet13_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet13_1,
    &SV->Context_Triggers_Sheet13_1);
  kcg_load_SV_Triggers_Sheet14_RBC_Scenario_Pkg(
    &outC->Context_Triggers_Sheet14_1,
    &SV->Context_Triggers_Sheet14_1);
  kcg_load_SV_Triggers_UserStory13_RBC_Scenario_Pkg(
    &outC->Context_Triggers_UserStory13_1,
    &SV->Context_Triggers_UserStory13_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

