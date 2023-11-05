/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg_H_
#define _RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioTrackTrainMessageQueue_T /* outRadioTrackTrainMessageQueue/ */ outRadioTrackTrainMessageQueue;
  RadioTrackTrainMessageQueueEntry_T /* outRadioTrackTrainMessageQueueEntry/ */ outRadioTrackTrainMessageQueueEntry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg /* IfBlock1:then:_L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */ Context_RadioTrackTrainMessageQueue__SetEntries_1;
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg /* IfBlock1:then:_L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#2)/ */ Context_RadioTrackTrainMessageQueue__GetEntries_2;
  outC_RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg /* IfBlock1:else:else:_L11=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#3)/ */ Context_RadioTrackTrainMessageQueue__SetEntries_3;
  outC_RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg /* IfBlock1:else:else:_L9=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2#2)/ */ Context_RadioTrackTrainMessageQueue__Take_Iterable2_2[8];
  outC_RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg /* IfBlock1:else:else:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable#2)/ */ Context_RadioTrackTrainMessageQueue__Take_Iterable_2[8];
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg /* IfBlock1:else:else:_L3=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#4)/ */ Context_RadioTrackTrainMessageQueue__GetEntries_4;
  outC_RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */ Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  _38_array /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  array /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:foundIndex/ */ foundIndex_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L14/ */ _L14_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L15/ */ _L15_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L13/ */ _L13_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:else:else:_L12/ */ _L12_else_else_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:else:else:_L11/ */ _L11_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:else:else:_L10/ */ _L10_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L9/ */ _L9_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L8/ */ _L8_else_else_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:else:else:_L7/ */ _L7_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  array_int32_8 /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:else:then:_L23/ */ _L23_then_else_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:else:then:_L24/ */ _L24_then_else_IfBlock1;
  kcg_int32 /* remainingCapacity/ */ remainingCapacity;
  RadioTrackTrainMessageQueue_T /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
} outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take/ */
extern void RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainMessageQueue__Take_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageQueue__Take_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

