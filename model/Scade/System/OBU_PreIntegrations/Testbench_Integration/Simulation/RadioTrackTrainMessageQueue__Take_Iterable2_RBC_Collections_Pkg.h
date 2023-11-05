/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg_H_
#define _RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioTrackTrainMessageQueueEntry_T /* outRadioTrackTrainMessageQueueEntry/ */ outRadioTrackTrainMessageQueueEntry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  RadioTrackTrainMessageQueueEntry_T /* _L4/ */ _L4;
  RadioTrackTrainMessageQueueEntry_T /* _L5/ */ _L5;
  RadioTrackTrainMessageQueueEntry_T /* _L6/ */ _L6;
  kcg_int32 /* _L13/ */ _L13;
} outC_RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2/ */
extern void RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg(
  /* inIndex/ */
  kcg_int32 inIndex,
  /* inComparisonIndex/ */
  kcg_int32 inComparisonIndex,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC_RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainMessageQueue__Take_Iterable2_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageQueue__Take_Iterable2_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

