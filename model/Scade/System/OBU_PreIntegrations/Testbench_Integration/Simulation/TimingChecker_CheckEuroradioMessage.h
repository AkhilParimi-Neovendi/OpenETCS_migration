/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _TimingChecker_CheckEuroradioMessage_H_
#define _TimingChecker_CheckEuroradioMessage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* tNvContactError/ */ tNvContactError;
  kcg_bool /* sequenceError/ */ sequenceError;
  kcg_bool /* otherTimingError/ */ otherTimingError;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* lastKnownTTrain/ */ lastKnownTTrain;
  kcg_bool /* ignoreTimestamp/ */ ignoreTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:IfBlock2: */ IfBlock2_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2: */ IfBlock2_clock_then_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* IfBlock1:then:_L41/ */ _L41_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L40/ */ _L40_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L39/ */ _L39_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L38/ */ _L38_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L37/ */ _L37_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L35/ */ _L35_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L31/ */ _L31_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L27/ */ _L27_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L26/ */ _L26_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:IfBlock2:then:_L5/ */ _L5_then_IfBlock2_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:IfBlock2:then:_L3/ */ _L3_then_IfBlock2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:IfBlock2:then:_L2/ */ _L2_then_IfBlock2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:IfBlock2:else:_L3/ */ _L3_else_IfBlock2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:IfBlock2:else:_L2/ */ _L2_else_IfBlock2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:IfBlock2:else:_L1/ */ _L1_else_IfBlock2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:connectingStatusConnecting/ */ connectingStatusConnecting_else_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  mobileConnectionStatus_T_RCM_Types_Pkg /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  mobileConnectionStatus_T_RCM_Types_Pkg /* IfBlock1:else:else:_L7/ */ _L7_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:then:_L5/ */ _L5_then_IfBlock2_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:IfBlock2:then:_L3/ */ _L3_then_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:then:_L2/ */ _L2_then_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L3/ */ _L3_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L2/ */ _L2_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L1/ */ _L1_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:connectingStatusConnecting/ */ connectingStatusConnecting_then_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  mobileConnectionStatus_T_RCM_Types_Pkg /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  mobileConnectionStatus_T_RCM_Types_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  kcg_bool /* TimestampKnown/ */ TimestampKnown;
  ReceivedMessage_T_Common_Types_Pkg /* _L30/ */ _L30;
  T_TRAIN /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  T_TRAIN /* _L34/ */ _L34;
} outC_TimingChecker_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::TimingChecker/ */
extern void TimingChecker_CheckEuroradioMessage(
  /* tNvContact/ */
  T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* rtmMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* messageTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TimingChecker_reset_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TimingChecker_init_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* ignoreTimestamp/ */ Context_ignoreTimestamp;
  T_TRAIN /* lastKnownTTrain/ */ Context_lastKnownTTrain;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_TimingChecker_CheckEuroradioMessage;

extern void kcg_save_SV_TimingChecker_CheckEuroradioMessage(
  SV_TimingChecker_CheckEuroradioMessage *SV,
  outC_TimingChecker_CheckEuroradioMessage *outC);
extern void kcg_load_SV_TimingChecker_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC,
  SV_TimingChecker_CheckEuroradioMessage *SV);



#endif /* _TimingChecker_CheckEuroradioMessage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TimingChecker_CheckEuroradioMessage.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

