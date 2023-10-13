/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _Triggers_Sheet08A_RBC_Scenario_Pkg_H_
#define _Triggers_Sheet08A_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* outTriggerId/ */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_3;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_2;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L5=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  T_TRAIN /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
} outC_Triggers_Sheet08A_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_Sheet08A/ */
extern void Triggers_Sheet08A_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int64 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Triggers_Sheet08A_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Triggers_Sheet08A_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg Context_RadioTrackTrainMessageTrigger__Trigger_1;
  SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg Context_RadioTrackTrainMessageTrigger__Trigger_2;
  SV_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg Context_RadioTrackTrainMessageTrigger__Trigger_3;
} SV_Triggers_Sheet08A_RBC_Scenario_Pkg;

extern void kcg_save_SV_Triggers_Sheet08A_RBC_Scenario_Pkg(
  SV_Triggers_Sheet08A_RBC_Scenario_Pkg *SV,
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC);
extern void kcg_load_SV_Triggers_Sheet08A_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC,
  SV_Triggers_Sheet08A_RBC_Scenario_Pkg *SV);



#endif /* _Triggers_Sheet08A_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet08A_RBC_Scenario_Pkg.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

