/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg_H_
#define _RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioTrackTrainMessageQueue_T /* outRadioTrackTrainMessageQueue/ */ outRadioTrackTrainMessageQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg /* IfBlock1:then:_L6=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */ Context_RadioTrackTrainMessageQueue__SetEntries_1;
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg /* IfBlock1:then:_L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */ Context_RadioTrackTrainMessageQueue__GetEntries_1;
  outC_RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */ Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _34_array /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  RadioTrackTrainMessageQueueEntries_T /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  array /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* hasCapacity/ */ hasCapacity;
  RadioTrackTrainMessageQueue_T /* _L1/ */ _L1;
  kcg_int64 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
} outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut/ */
extern void RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg *outC);

extern void RadioTrackTrainMessageQueue__TryPut_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageQueue__TryPut_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

