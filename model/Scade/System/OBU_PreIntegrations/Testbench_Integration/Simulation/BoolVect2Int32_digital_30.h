/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _BoolVect2Int32_digital_30_H_
#define _BoolVect2Int32_digital_30_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* Out/ */ Out_30;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int32_30 /* @1/_L9/ */ _L9_BoolVect2IntElt_1_int32;
  array_int32_30 /* @1/_L8/ */ _L8_BoolVect2IntElt_1_int32;
  array_int32_30 /* @1/_L7/ */ _L7_BoolVect2IntElt_1_int32;
  array_int32_30 /* @1/_L6/ */ _L6_BoolVect2IntElt_1_int32;
  array_int32_30 /* @1/_L5/ */ _L5_BoolVect2IntElt_1_int32;
  array_int32_30 /* @1/_L4/ */ _L4_BoolVect2IntElt_1_int32;
  DMI_Available_Menu_int_T_DATA /* @1/_L2/ */ _L2_BoolVect2IntElt_1_int32;
  array_int32_30 /* @1/_L1/ */ _L1_BoolVect2IntElt_1_int32;
  kcg_int32 /* _L2/ */ _L2_30;
  kcg_int32 /* _L3/ */ _L3_30;
  DMI_Available_Menu_int_T_DATA /* _L4/ */ _L4_30;
} outC_BoolVect2Int32_digital_30;

/* ===========  node initialization and cycle functions  =========== */
/* digital::BoolVect2Int32/ */
extern void BoolVect2Int32_digital_30(
  /* BV/ */
  DMI_Available_Menu_int_T_DATA *BV_30,
  outC_BoolVect2Int32_digital_30 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BoolVect2Int32_reset_digital_30(
  outC_BoolVect2Int32_digital_30 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BoolVect2Int32_init_digital_30(
  outC_BoolVect2Int32_digital_30 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: digital::BoolVect2Int32/
  @1: (digital::BoolVect2IntElt#1)
*/

#endif /* _BoolVect2Int32_digital_30_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BoolVect2Int32_digital_30.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

