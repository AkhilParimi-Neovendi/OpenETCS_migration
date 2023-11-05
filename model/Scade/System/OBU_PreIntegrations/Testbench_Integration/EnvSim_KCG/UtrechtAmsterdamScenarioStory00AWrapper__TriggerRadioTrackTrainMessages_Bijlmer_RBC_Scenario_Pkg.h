/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg_H_
#define _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* outTriggerId/ */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L50=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#15)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_15;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L49=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#14)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_14;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L48=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#13)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_13;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L47=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#12)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_12;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L46=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#11)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_11;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L41=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_6;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L52=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#17)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_17;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L40=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_5;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L39=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_4;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L38=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_3;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L35=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_2;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  NID_LRBG /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  T_TRAIN /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  kcg_int32 /* _L39/ */ _L39;
  kcg_int32 /* _L40/ */ _L40;
  kcg_int32 /* _L41/ */ _L41;
  kcg_int32 /* _L46/ */ _L46;
  kcg_int32 /* _L47/ */ _L47;
  kcg_int32 /* _L48/ */ _L48;
  kcg_int32 /* _L49/ */ _L49;
  kcg_int32 /* _L50/ */ _L50;
  kcg_int32 /* _L52/ */ _L52;
} outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer/ */
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_reset_RBC_Scenario_P(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_init_RBC_Scenario_Pk(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

