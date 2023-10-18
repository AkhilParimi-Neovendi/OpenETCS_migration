/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _BoolVect2Int64_digital_30_H_
#define _BoolVect2Int64_digital_30_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* Out/ */ Out_30;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_30 /* @1/_L9/ */ _L9_BoolVect2IntElt_1_int64;
  array_int64_30 /* @1/_L8/ */ _L8_BoolVect2IntElt_1_int64;
  array_int64_30 /* @1/_L7/ */ _L7_BoolVect2IntElt_1_int64;
  array_int64_30 /* @1/_L6/ */ _L6_BoolVect2IntElt_1_int64;
  array_int64_30 /* @1/_L5/ */ _L5_BoolVect2IntElt_1_int64;
  array_int64_30 /* @1/_L4/ */ _L4_BoolVect2IntElt_1_int64;
  array_bool_30 /* @1/_L2/ */ _L2_BoolVect2IntElt_1_int64;
  array_int64_30 /* @1/_L1/ */ _L1_BoolVect2IntElt_1_int64;
  kcg_int64 /* _L2/ */ _L2_30;
  kcg_int64 /* _L3/ */ _L3_30;
  array_bool_30 /* _L4/ */ _L4_30;
} outC_BoolVect2Int64_digital_30;

/* ===========  node initialization and cycle functions  =========== */
/* digital::BoolVect2Int64/ */
extern void BoolVect2Int64_digital_30(
  /* BV/ */
  array_bool_30 *BV_30,
  outC_BoolVect2Int64_digital_30 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BoolVect2Int64_reset_digital_30(
  outC_BoolVect2Int64_digital_30 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BoolVect2Int64_init_digital_30(
  outC_BoolVect2Int64_digital_30 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: digital::BoolVect2Int64/
  @1: (digital::BoolVect2IntElt#1)
*/

#endif /* _BoolVect2Int64_digital_30_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BoolVect2Int64_digital_30.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

