/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _CheckSpace_TM_TrainTrack_Bus_H_
#define _CheckSpace_TM_TrainTrack_Bus_H_

#include "kcg_types.h"
#include "CheckSpaceLoop_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Busy/ */ Busy;
  kcg_int32 /* SlotsUsed/ */ SlotsUsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckSpaceLoop_TM_TrainTrack_Bus /* _L2=(TM_TrainTrack_Bus::CheckSpaceLoop#1)/ */ Context_CheckSpaceLoop_1[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  _16_array /* _L6/ */ _L6;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_CheckSpace_TM_TrainTrack_Bus;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainTrack_Bus::CheckSpace/ */
extern void CheckSpace_TM_TrainTrack_Bus(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  outC_CheckSpace_TM_TrainTrack_Bus *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckSpace_reset_TM_TrainTrack_Bus(
  outC_CheckSpace_TM_TrainTrack_Bus *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckSpace_init_TM_TrainTrack_Bus(
  outC_CheckSpace_TM_TrainTrack_Bus *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckSpace_TM_TrainTrack_Bus_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckSpace_TM_TrainTrack_Bus.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

