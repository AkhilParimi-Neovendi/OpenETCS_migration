/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Triggers_Sheet11_RBC_Scenario_Pkg_H_
#define _Triggers_Sheet11_RBC_Scenario_Pkg_H_

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
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L14=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#10)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_10;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L13=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#9)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_9;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L12=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#8)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_8;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L11=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#7)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_7;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L10=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#6)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_6;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L9=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#5)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_5;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L8=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#4)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_4;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L7=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#3)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_3;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L6=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#2)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_2;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* _L1=(RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger#1)/ */ Context_RadioTrackTrainMessageTrigger__Trigger_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  NID_LRBG /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  T_TRAIN /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
} outC_Triggers_Sheet11_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_Sheet11/ */
extern void Triggers_Sheet11_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int64 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Triggers_Sheet11_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Triggers_Sheet11_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Triggers_Sheet11_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_Sheet11_RBC_Scenario_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

