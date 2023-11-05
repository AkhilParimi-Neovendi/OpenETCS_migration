/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __146_RadioTrackTrainMessa_RBC_Collections_Pkg_H_
#define __146_RadioTrackTrainMessa_RBC_Collections_Pkg_H_

#include "kcg_types.h"
#include "_46_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"

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
  outC__46_RadioTrackTrainMessageQue_RBC_Collections_Pkg /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */ Context_RadioTrackTrainMessageQueueEntry__IsValid_1;
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
} outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable/ */
extern void _146_RadioTrackTrainMessa_RBC_Collections_Pkg(
  /* inIndex/ */
  kcg_int32 inIndex,
  /* inAccumulator/ */
  kcg_int32 inAccumulator,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _146_RadioTrackTrainMessa_reset_RBC_Collections_Pkg(
  outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _146_RadioTrackTrainMessa_init_RBC_Collections_Pkg(
  outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __146_RadioTrackTrainMessa_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _146_RadioTrackTrainMessa_RBC_Collections_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

