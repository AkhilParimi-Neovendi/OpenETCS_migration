/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg_H_
#define _RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* outTriggerId/ */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* valid/ */ valid;
  kcg_bool /* setReferenceTime/ */ setReferenceTime;
  T_TRAIN /* referenceTime/ */ referenceTime;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:then:IfBlock2: */ IfBlock2_clock_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock3: */ IfBlock3_clock_then_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_TRAIN /* IfBlock1:then:IfBlock2:then:_L3/ */ _L3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:_L1/ */ _L1_then_IfBlock2_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:IfBlock3:else:_L2/ */ _L2_else_IfBlock3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock3:then:_L17/ */ _L17_then_IfBlock3_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:IfBlock3:then:_L10/ */ _L10_then_IfBlock3_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  T_TRAIN /* activatorTimeout/ */ activatorTimeout;
  kcg_float32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
} outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger/ */
extern void RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  /* inLRBGTrigger/ */
  NID_LRBG inLRBGTrigger,
  /* inMinDistanceToLRBGTrigger/ */
  kcg_float32 inMinDistanceToLRBGTrigger,
  /* inMaxDistanceToLRBGTrigger/ */
  kcg_float32 inMaxDistanceToLRBGTrigger,
  /* inTriggerIdHidden/ */
  kcg_int32 inTriggerIdHidden,
  /* inActivatorTimeout/ */
  kcg_float32 inActivatorTimeout,
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

