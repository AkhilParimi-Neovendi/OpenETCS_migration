/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg_H_
#define _RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioTrackTrainMessageQueueEntries_T /* outRadioTrackTrainMessageQueueEntries/ */ outRadioTrackTrainMessageQueueEntries;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueue_T /* _L1/ */ _L1;
  RadioTrackTrainMessageQueueEntries_T /* _L2/ */ _L2;
} outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries/ */
extern void RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg *outC);

extern void RadioTrackTrainMessageQueue__GetEntries_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMessageQueue__GetEntries_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

