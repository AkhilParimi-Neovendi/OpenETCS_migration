/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __48_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_
#define __48_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_

#include "kcg_types.h"
#include "_47_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"
#include "_46_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* outRemainingCapacity/ */ outRemainingCapacity;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__46_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* _L45=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */ Context_RadioTrackTrainMessageQueueEntry__IsValid_1;
  outC__47_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* _L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable#1)/ */ _1_Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_1[8];
  outC_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */ _2_Context_RadioTrackTrainMessageQueue__GetEntries_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* index/ */ index;
  kcg_int32 /* remainingCapacity/ */ remainingCapacity;
  _2_RadioTrackTrainMessageQueue_T /* _L1/ */ _L1;
  _3_RadioTrackTrainMessageQueueEntries_T /* _L2/ */ _L2;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
  kcg_int32 /* _L31/ */ _L31;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  RadioTrackTrainMessageQueueEntry_T /* _L42/ */ _L42;
  RadioTrackTrainMessageQueueEntry_T /* _L43/ */ _L43;
  kcg_int32 /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_int32 /* _L51/ */ _L51;
  kcg_int32 /* _L52/ */ _L52;
  kcg_int32 /* _L53/ */ _L53;
  kcg_int32 /* _L54/ */ _L54;
} outC__48_RadioTrackTrainMessageQue_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity/ */
extern void _48_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  _2_RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  outC__48_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

extern void _48_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
  outC__48_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _48_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
  outC__48_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __48_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _48_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

