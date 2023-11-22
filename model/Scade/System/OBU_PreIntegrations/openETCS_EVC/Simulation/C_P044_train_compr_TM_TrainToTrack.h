/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _C_P044_train_compr_TM_TrainToTrack_H_
#define _C_P044_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P044_TrainTrack_int_TM_TrainToTrack /* P044_int/ */ P044_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P044_TM_TrainToTrack /* _L1/ */ _L1;
  P044_TrainTrack_int_TM_TrainToTrack /* _L116/ */ _L116;
} outC_C_P044_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P044_train_compr/ */
extern void C_P044_train_compr_TM_TrainToTrack(
  /* P044_in/ */
  P044_TM_TrainToTrack *P044_in,
  outC_C_P044_train_compr_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P044_train_compr_reset_TM_TrainToTrack(
  outC_C_P044_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P044_train_compr_init_TM_TrainToTrack(
  outC_C_P044_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P044_train_compr_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P044_train_compr_TM_TrainToTrack.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

