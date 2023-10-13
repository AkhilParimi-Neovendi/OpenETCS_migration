/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer/ */
void _32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int64 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC__32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC)
{
  outC->_L2 = inLRBG;
  outC->_L3 = inDistanceToLRBG;
  outC->_L36 = inTriggerId;
  outC->_L37 = inRBCTime;
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L36,
    outC->_L37,
    kcg_lit_int64(354),
    kcg_lit_float64(270.3),
    kcg_lit_float64(280.3),
    kcg_lit_int64(354002753),
    kcg_lit_float64(0.0),
    &outC->_11_Context_RadioTrackTrainMessageTrigger__Trigger_1);
  outC->_L1 =
    outC->_11_Context_RadioTrackTrainMessageTrigger__Trigger_1.outTriggerId;
  /* _L35=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L1,
    outC->_L37,
    kcg_lit_int64(351),
    kcg_lit_float64(49.9),
    kcg_lit_float64(59.9),
    kcg_lit_int64(351000549),
    kcg_lit_float64(0.0),
    &outC->_10_Context_RadioTrackTrainMessageTrigger__Trigger_2);
  outC->_L35 =
    outC->_10_Context_RadioTrackTrainMessageTrigger__Trigger_2.outTriggerId;
  /* _L38=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L35,
    outC->_L37,
    kcg_lit_int64(355),
    kcg_lit_float64(84.4),
    kcg_lit_float64(94.4),
    kcg_lit_int64(355000894),
    kcg_lit_float64(0.0),
    &outC->_9_Context_RadioTrackTrainMessageTrigger__Trigger_3);
  outC->_L38 =
    outC->_9_Context_RadioTrackTrainMessageTrigger__Trigger_3.outTriggerId;
  /* _L39=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L38,
    outC->_L37,
    kcg_lit_int64(356),
    kcg_lit_float64(43.5),
    kcg_lit_float64(53.5),
    kcg_lit_int64(356000485),
    kcg_lit_float64(0.0),
    &outC->_8_Context_RadioTrackTrainMessageTrigger__Trigger_4);
  outC->_L39 =
    outC->_8_Context_RadioTrackTrainMessageTrigger__Trigger_4.outTriggerId;
  /* _L40=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L39,
    outC->_L37,
    kcg_lit_int64(358),
    kcg_lit_float64(118.1),
    kcg_lit_float64(128.1),
    kcg_lit_int64(358001231),
    kcg_lit_float64(0.0),
    &outC->_7_Context_RadioTrackTrainMessageTrigger__Trigger_5);
  outC->_L40 =
    outC->_7_Context_RadioTrackTrainMessageTrigger__Trigger_5.outTriggerId;
  /* _L52=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#17)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L40,
    outC->_L37,
    kcg_lit_int64(360),
    kcg_lit_float64(244.2),
    kcg_lit_float64(254.2),
    kcg_lit_int64(360002492),
    kcg_lit_float64(0.0),
    &outC->_6_Context_RadioTrackTrainMessageTrigger__Trigger_17);
  outC->_L52 =
    outC->_6_Context_RadioTrackTrainMessageTrigger__Trigger_17.outTriggerId;
  /* _L41=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L52,
    outC->_L37,
    kcg_lit_int64(362),
    kcg_lit_float64(119.9),
    kcg_lit_float64(129.9),
    kcg_lit_int64(362001249),
    kcg_lit_float64(0.0),
    &outC->_5_Context_RadioTrackTrainMessageTrigger__Trigger_6);
  outC->_L41 =
    outC->_5_Context_RadioTrackTrainMessageTrigger__Trigger_6.outTriggerId;
  /* _L46=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#11)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L41,
    outC->_L37,
    kcg_lit_int64(362),
    kcg_lit_float64(228.1),
    kcg_lit_float64(233.1),
    kcg_lit_int64(362002306),
    kcg_lit_float64(0.0),
    &outC->_4_Context_RadioTrackTrainMessageTrigger__Trigger_11);
  outC->_L46 =
    outC->_4_Context_RadioTrackTrainMessageTrigger__Trigger_11.outTriggerId;
  /* _L47=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#12)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L46,
    outC->_L37,
    kcg_lit_int64(362),
    kcg_lit_float64(236.4),
    kcg_lit_float64(241.4),
    kcg_lit_int64(362002389),
    kcg_lit_float64(0.0),
    &outC->_3_Context_RadioTrackTrainMessageTrigger__Trigger_12);
  outC->_L47 =
    outC->_3_Context_RadioTrackTrainMessageTrigger__Trigger_12.outTriggerId;
  /* _L48=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#13)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L47,
    outC->_L37,
    kcg_lit_int64(364),
    kcg_lit_float64(86.1),
    kcg_lit_float64(96.1),
    kcg_lit_int64(364000911),
    kcg_lit_float64(0.0),
    &outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_13);
  outC->_L48 =
    outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_13.outTriggerId;
  /* _L49=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#14)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L48,
    outC->_L37,
    kcg_lit_int64(369),
    kcg_lit_float64(226.3),
    kcg_lit_float64(237.3),
    kcg_lit_int64(369002313),
    kcg_lit_float64(0.0),
    &outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_14);
  outC->_L49 =
    outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_14.outTriggerId;
  /* _L50=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#15)/ */
  RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L49,
    outC->_L37,
    kcg_lit_int64(341),
    kcg_lit_float64(129.4),
    kcg_lit_float64(139.4),
    kcg_lit_int64(341001344),
    kcg_lit_float64(0.0),
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_15);
  outC->_L50 =
    outC->Context_RadioTrackTrainMessageTrigger__Trigger_15.outTriggerId;
  outC->outTriggerId = outC->_L50;
}

#ifndef KCG_USER_DEFINED_INIT
void _32_UtrechtAmsterdamScenarioS_init_RBC_Scenario_Pkg(
  outC__32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC)
{
  outC->_L52 = kcg_lit_int64(0);
  outC->_L50 = kcg_lit_int64(0);
  outC->_L49 = kcg_lit_int64(0);
  outC->_L48 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int64(0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->outTriggerId = kcg_lit_int64(0);
  /* _L50=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#15)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_15);
  /* _L49=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#14)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_14);
  /* _L48=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#13)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_13);
  /* _L47=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#12)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_3_Context_RadioTrackTrainMessageTrigger__Trigger_12);
  /* _L46=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#11)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_4_Context_RadioTrackTrainMessageTrigger__Trigger_11);
  /* _L41=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_5_Context_RadioTrackTrainMessageTrigger__Trigger_6);
  /* _L52=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#17)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_6_Context_RadioTrackTrainMessageTrigger__Trigger_17);
  /* _L40=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_7_Context_RadioTrackTrainMessageTrigger__Trigger_5);
  /* _L39=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_8_Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L38=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_9_Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L35=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_10_Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
    &outC->_11_Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _32_UtrechtAmsterdamScenarioS_reset_RBC_Scenario_Pkg(
  outC__32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC)
{
  /* _L50=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#15)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->Context_RadioTrackTrainMessageTrigger__Trigger_15);
  /* _L49=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#14)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_1_Context_RadioTrackTrainMessageTrigger__Trigger_14);
  /* _L48=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#13)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_2_Context_RadioTrackTrainMessageTrigger__Trigger_13);
  /* _L47=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#12)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_3_Context_RadioTrackTrainMessageTrigger__Trigger_12);
  /* _L46=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#11)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_4_Context_RadioTrackTrainMessageTrigger__Trigger_11);
  /* _L41=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_5_Context_RadioTrackTrainMessageTrigger__Trigger_6);
  /* _L52=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#17)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_6_Context_RadioTrackTrainMessageTrigger__Trigger_17);
  /* _L40=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_7_Context_RadioTrackTrainMessageTrigger__Trigger_5);
  /* _L39=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_8_Context_RadioTrackTrainMessageTrigger__Trigger_4);
  /* _L38=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_9_Context_RadioTrackTrainMessageTrigger__Trigger_3);
  /* _L35=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_10_Context_RadioTrackTrainMessageTrigger__Trigger_2);
  /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */
  RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
    &outC->_11_Context_RadioTrackTrainMessageTrigger__Trigger_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

