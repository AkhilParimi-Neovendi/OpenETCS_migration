/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __148_RadioTrackTrainMessa_RBC_Collections_Pkg_H_
#define __148_RadioTrackTrainMessa_RBC_Collections_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* outRadioTrackTrainMessage/ */ outRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioTrackTrainMessageQueueEntry_T /* _L1/ */ _L1;
  CompressedRadioMessage_TM /* _L2/ */ _L2;
} outC__148_RadioTrackTrainMessa_RBC_Collections_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry/ */
extern void _148_RadioTrackTrainMessa_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC__148_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _148_RadioTrackTrainMessa_reset_RBC_Collections_Pkg(
  outC__148_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _148_RadioTrackTrainMessa_init_RBC_Collections_Pkg(
  outC__148_RadioTrackTrainMessa_RBC_Collections_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __148_RadioTrackTrainMessa_RBC_Collections_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _148_RadioTrackTrainMessa_RBC_Collections_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

