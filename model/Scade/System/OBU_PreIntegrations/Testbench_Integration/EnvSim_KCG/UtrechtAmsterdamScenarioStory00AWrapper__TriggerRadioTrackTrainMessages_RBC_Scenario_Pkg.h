/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg_H_
#define _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "Triggers_UserStory16_RBC_Scenario_Pkg.h"
#include "Triggers_UserStory15_RBC_Scenario_Pkg.h"
#include "Triggers_UserStory14_RBC_Scenario_Pkg.h"
#include "Triggers_UserStory13_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet14_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet13_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet12_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet11_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet09_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet08B_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet08A_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet07_RBC_Scenario_Pkg.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* outTriggerId/ */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Triggers_UserStory16_RBC_Scenario_Pkg /* _L53=(RBC_Scenario_Pkg::Triggers_UserStory16#1)/ */ Context_Triggers_UserStory16_1;
  outC_Triggers_UserStory15_RBC_Scenario_Pkg /* _L52=(RBC_Scenario_Pkg::Triggers_UserStory15#1)/ */ Context_Triggers_UserStory15_1;
  outC_Triggers_UserStory14_RBC_Scenario_Pkg /* _L51=(RBC_Scenario_Pkg::Triggers_UserStory14#1)/ */ Context_Triggers_UserStory14_1;
  outC_Triggers_UserStory13_RBC_Scenario_Pkg /* _L50=(RBC_Scenario_Pkg::Triggers_UserStory13#1)/ */ Context_Triggers_UserStory13_1;
  outC_Triggers_Sheet14_RBC_Scenario_Pkg /* _L47=(RBC_Scenario_Pkg::Triggers_Sheet14#1)/ */ Context_Triggers_Sheet14_1;
  outC_Triggers_Sheet13_RBC_Scenario_Pkg /* _L46=(RBC_Scenario_Pkg::Triggers_Sheet13#1)/ */ Context_Triggers_Sheet13_1;
  outC_Triggers_Sheet12_RBC_Scenario_Pkg /* _L45=(RBC_Scenario_Pkg::Triggers_Sheet12#1)/ */ Context_Triggers_Sheet12_1;
  outC_Triggers_Sheet11_RBC_Scenario_Pkg /* _L44=(RBC_Scenario_Pkg::Triggers_Sheet11#1)/ */ Context_Triggers_Sheet11_1;
  outC_Triggers_Sheet09_RBC_Scenario_Pkg /* _L43=(RBC_Scenario_Pkg::Triggers_Sheet09#1)/ */ Context_Triggers_Sheet09_1;
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg /* _L42=(RBC_Scenario_Pkg::Triggers_Sheet08B#2)/ */ Context_Triggers_Sheet08B_2;
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg /* _L40=(RBC_Scenario_Pkg::Triggers_Sheet08A#1)/ */ Context_Triggers_Sheet08A_1;
  outC_Triggers_Sheet07_RBC_Scenario_Pkg /* _L39=(RBC_Scenario_Pkg::Triggers_Sheet07#1)/ */ Context_Triggers_Sheet07_1;
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk /* _L35=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer#1)/ */ Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_1;
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg /* _L1=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel#1)/ */ Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  NID_LRBG /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_int64 /* _L35/ */ _L35;
  T_TRAIN /* _L37/ */ _L37;
  kcg_int64 /* _L38/ */ _L38;
  kcg_int64 /* _L39/ */ _L39;
  kcg_int64 /* _L40/ */ _L40;
  kcg_int64 /* _L42/ */ _L42;
  kcg_int64 /* _L43/ */ _L43;
  kcg_int64 /* _L44/ */ _L44;
  kcg_int64 /* _L45/ */ _L45;
  kcg_int64 /* _L46/ */ _L46;
  kcg_int64 /* _L47/ */ _L47;
  kcg_int64 /* _L50/ */ _L50;
  kcg_int64 /* _L51/ */ _L51;
  kcg_int64 /* _L52/ */ _L52;
  kcg_int64 /* _L53/ */ _L53;
} outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages/ */
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

