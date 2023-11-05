/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg_H_
#define __32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTri_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* outTriggerId/ */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L50=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#15)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_15;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L49=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#14)/ */ _1_Context_RadioTrackTrainMessageTrigger__Trigger_14;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L48=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#13)/ */ _2_Context_RadioTrackTrainMessageTrigger__Trigger_13;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L47=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#12)/ */ _3_Context_RadioTrackTrainMessageTrigger__Trigger_12;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L46=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#11)/ */ _4_Context_RadioTrackTrainMessageTrigger__Trigger_11;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L41=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */ _5_Context_RadioTrackTrainMessageTrigger__Trigger_6;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L52=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#17)/ */ _6_Context_RadioTrackTrainMessageTrigger__Trigger_17;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L40=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */ _7_Context_RadioTrackTrainMessageTrigger__Trigger_5;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L39=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */ _8_Context_RadioTrackTrainMessageTrigger__Trigger_4;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L38=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */ _9_Context_RadioTrackTrainMessageTrigger__Trigger_3;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L35=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */ _10_Context_RadioTrackTrainMessageTrigger__Trigger_2;
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */ _11_Context_RadioTrackTrainMessageTrigger__Trigger_1;
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
} outC__32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer/ */
extern void _32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC__32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _32_UtrechtAmsterdamScenarioS_reset_RBC_Scenario_Pkg(
  outC__32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _32_UtrechtAmsterdamScenarioS_init_RBC_Scenario_Pkg(
  outC__32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _32_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

