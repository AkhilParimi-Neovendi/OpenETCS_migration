/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _Filter_Variable_TM_TrainToTrack_H_
#define _Filter_Variable_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* int_out/ */ int_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
} outC_Filter_Variable_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Filter_Variable/ */
extern void Filter_Variable_TM_TrainToTrack(
  /* valid/ */
  kcg_bool valid,
  /* int_in/ */
  kcg_int64 int_in,
  outC_Filter_Variable_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Filter_Variable_reset_TM_TrainToTrack(
  outC_Filter_Variable_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Filter_Variable_init_TM_TrainToTrack(
  outC_Filter_Variable_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Filter_Variable_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Filter_Variable_TM_TrainToTrack.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

