/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Int2BoolVect_digital_int32_30_H_
#define _Int2BoolVect_digital_int32_30_H_

#include "kcg_types.h"
#include "Int2BoolVectElt_digital_int32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Available_Menu_int_T_DATA /* BV/ */ BV_int32_30;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int2BoolVectElt_digital_int32 /* Acc=(digital::Int2BoolVectElt#1)/ */ Context_Int2BoolVectElt_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* Acc/ */ Acc_int32_30;
  kcg_int32 /* _L1/ */ _L1_int32_30;
  DMI_Available_Menu_int_T_DATA /* _L4/ */ _L4_int32_30;
  DMI_Available_Menu_int_T_DATA /* _L5/ */ _L5_int32_30;
} outC_Int2BoolVect_digital_int32_30;

/* ===========  node initialization and cycle functions  =========== */
/* digital::Int2BoolVect/ */
extern void Int2BoolVect_digital_int32_30(
  /* In/ */
  kcg_int32 In_int32_30,
  outC_Int2BoolVect_digital_int32_30 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Int2BoolVect_reset_digital_int32_30(
  outC_Int2BoolVect_digital_int32_30 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Int2BoolVect_init_digital_int32_30(
  outC_Int2BoolVect_digital_int32_30 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Int2BoolVect_digital_int32_30_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int2BoolVect_digital_int32_30.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

