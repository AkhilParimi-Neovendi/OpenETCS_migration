/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg_H_
#define _RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outContinueIteration/ */ outContinueIteration;
  kcg_int32 /* outAccumulator/ */ outAccumulator;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */ Context_RadioTrackTrainMessageQueueEntry__IsValid_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  RadioTrackTrainMessageQueueEntry_T /* _L3/ */ _L3;
} outC_RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable/ */
extern void RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg(
  /* inIndex/ */
  kcg_int32 inIndex,
  /* inAccumulator/ */
  kcg_int32 inAccumulator,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC_RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainMessageQueue__Take_Iterable_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageQueue__Take_Iterable_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

