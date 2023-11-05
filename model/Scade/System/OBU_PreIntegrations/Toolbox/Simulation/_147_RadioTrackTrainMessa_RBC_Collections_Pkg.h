/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __147_RadioTrackTrainMessa_RBC_Collections_Pkg_H_
#define __147_RadioTrackTrainMessa_RBC_Collections_Pkg_H_

#include "kcg_types.h"
#include "_146_RadioTrackTrainMessa_RBC_Collections_Pkg.h"
#include "_145_RadioTrackTrainMessa_RBC_Collections_Pkg.h"
#include "_49_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"
#include "_48_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _2_RadioTrackTrainMessageQueue_T /* outRadioTrackTrainMessageQueue/ */ outRadioTrackTrainMessageQueue;
  RadioTrackTrainMessageQueueEntry_T /* outRadioTrackTrainMessageQueueEntry/ */ outRadioTrackTrainMessageQueueEntry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* IfBlock1:then:_L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */ Context_RadioTrackTrainMessageQueue__SetEntries_1;
  outC_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* IfBlock1:then:_L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#2)/ */ _1_Context_RadioTrackTrainMessageQueue__GetEntries_2;
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* IfBlock1:else:else:_L11=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#3)/ */ _2_Context_RadioTrackTrainMessageQueue__SetEntries_3;
  outC__145_RadioTrackTrainMessa_RBC_Collections_Pkg /* IfBlock1:else:else:_L9=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2#2)/ */ _3_Context_RadioTrackTrainMessageQueue__Take_Iterable2_2[8];
  outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg /* IfBlock1:else:else:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable#2)/ */ _4_Context_RadioTrackTrainMessageQueue__Take_Iterable_2[8];
  outC_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* IfBlock1:else:else:_L3=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#4)/ */ _5_Context_RadioTrackTrainMessageQueue__GetEntries_4;
  outC__48_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */ _6_Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _2_RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  _29_array /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  _3_RadioTrackTrainMessageQueueEntries_T /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  array /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  _3_RadioTrackTrainMessageQueueEntries_T /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  _2_RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:foundIndex/ */ foundIndex_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L14/ */ _L14_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L15/ */ _L15_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L13/ */ _L13_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:else:else:_L12/ */ _L12_else_else_IfBlock1;
  _2_RadioTrackTrainMessageQueue_T /* IfBlock1:else:else:_L11/ */ _L11_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:else:else:_L10/ */ _L10_else_else_IfBlock1;
  _3_RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L9/ */ _L9_else_else_IfBlock1;
  _3_RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L8/ */ _L8_else_else_IfBlock1;
  _2_RadioTrackTrainMessageQueue_T /* IfBlock1:else:else:_L7/ */ _L7_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  array_int32_8 /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  _3_RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  _3_RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  _2_RadioTrackTrainMessageQueue_T /* IfBlock1:else:then:_L23/ */ _L23_then_else_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:else:then:_L24/ */ _L24_then_else_IfBlock1;
  kcg_int32 /* remainingCapacity/ */ remainingCapacity;
  _2_RadioTrackTrainMessageQueue_T /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
} outC__147_RadioTrackTrainMessa_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take/ */
extern void _147_RadioTrackTrainMessa_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  _2_RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  outC__147_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _147_RadioTrackTrainMessa_reset_RBC_Collections_Pkg(
  outC__147_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _147_RadioTrackTrainMessa_init_RBC_Collections_Pkg(
  outC__147_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __147_RadioTrackTrainMessa_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _147_RadioTrackTrainMessa_RBC_Collections_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

