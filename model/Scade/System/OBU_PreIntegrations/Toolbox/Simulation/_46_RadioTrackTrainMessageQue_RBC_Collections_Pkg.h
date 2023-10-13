/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __46_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_
#define __46_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outIsValid/ */ outIsValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueueEntry_T /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
} outC__46_RadioTrackTrainMessageQue_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid/ */
extern void _46_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC__46_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

extern void _46_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
  outC__46_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _46_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
  outC__46_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __46_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _46_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

