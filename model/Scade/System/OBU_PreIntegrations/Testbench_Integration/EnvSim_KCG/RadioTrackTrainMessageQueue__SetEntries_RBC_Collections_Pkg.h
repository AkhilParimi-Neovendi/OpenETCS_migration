/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg_H_
#define _RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioTrackTrainMessageQueue_T /* out_RadioTrackTrainMessageQueue/ */ out_RadioTrackTrainMessageQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueueEntries_T /* _L1/ */ _L1;
  RadioTrackTrainMessageQueue_T /* _L3/ */ _L3;
  RadioTrackTrainMessageQueue_T /* _L5/ */ _L5;
} outC_RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries/ */
extern void RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueueEntries/ */
  RadioTrackTrainMessageQueueEntries_T *inRadioTrackTrainMessageQueueEntries,
  outC_RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg *outC);

extern void RadioTrackTrainMessageQueue__SetEntries_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageQueue__SetEntries_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

