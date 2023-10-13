/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __51_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_
#define __51_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_

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
  CompressedRadioMessage_TM /* _L1/ */ _L1;
  RadioTrackTrainMessageQueueEntry_T /* _L2/ */ _L2;
  RadioTrackTrainMessageQueueEntry_T /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  RadioTrackTrainMessageQueueEntry_T /* _L5/ */ _L5;
} outC__51_RadioTrackTrainMessageQue_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create/ */
extern void _51_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  outC__51_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

extern void _51_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
  outC__51_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _51_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
  outC__51_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __51_RadioTrackTrainMessageQue_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _51_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

