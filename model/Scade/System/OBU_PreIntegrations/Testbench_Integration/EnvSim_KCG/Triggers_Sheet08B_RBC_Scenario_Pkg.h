/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Triggers_Sheet08B_RBC_Scenario_Pkg_H_
#define _Triggers_Sheet08B_RBC_Scenario_Pkg_H_

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
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_6;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_5;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_4;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  T_TRAIN /* _L4/ */ _L4;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
} outC_Triggers_Sheet08B_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_Sheet08B/ */
extern void Triggers_Sheet08B_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Triggers_Sheet08B_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Triggers_Sheet08B_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Triggers_Sheet08B_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet08B_RBC_Scenario_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

