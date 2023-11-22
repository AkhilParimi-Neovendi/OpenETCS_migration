/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CheckSpaceLoop_TM_TrainTrack_Bus_H_
#define _CheckSpaceLoop_TM_TrainTrack_Bus_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  kcg_int32 /* Count/ */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  M_TrainTrack_Message_T_TM_radio_messages /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
} outC_CheckSpaceLoop_TM_TrainTrack_Bus;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainTrack_Bus::CheckSpaceLoop/ */
extern void CheckSpaceLoop_TM_TrainTrack_Bus(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  kcg_int32 Acc,
  /* Message/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message,
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckSpaceLoop_reset_TM_TrainTrack_Bus(
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckSpaceLoop_init_TM_TrainTrack_Bus(
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckSpaceLoop_TM_TrainTrack_Bus_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckSpaceLoop_TM_TrainTrack_Bus.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

