/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __49_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_
#define __49_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _2_RadioTrackTrainMessageQueue_T /* out_RadioTrackTrainMessageQueue/ */ out_RadioTrackTrainMessageQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _3_RadioTrackTrainMessageQueueEntries_T /* _L1/ */ _L1;
  _2_RadioTrackTrainMessageQueue_T /* _L3/ */ _L3;
  _2_RadioTrackTrainMessageQueue_T /* _L5/ */ _L5;
} outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries/ */
extern void _49_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueueEntries/ */
  _3_RadioTrackTrainMessageQueueEntries_T *inRadioTrackTrainMessageQueueEntries,
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

extern void _49_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _49_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __49_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _49_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

