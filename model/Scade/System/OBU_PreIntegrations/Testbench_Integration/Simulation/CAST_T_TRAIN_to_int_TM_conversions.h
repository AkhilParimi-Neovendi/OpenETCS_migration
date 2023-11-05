/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _CAST_T_TRAIN_to_int_TM_conversions_H_
#define _CAST_T_TRAIN_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* t_train_int/ */ t_train_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_TRAIN /* _L1/ */ _L1;
  kcg_bool /* _L16/ */ _L16;
  kcg_int32 /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_int32 /* _L13/ */ _L13;
} outC_CAST_T_TRAIN_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_T_TRAIN_to_int/ */
extern void CAST_T_TRAIN_to_int_TM_conversions(
  /* t_train/ */
  T_TRAIN t_train,
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC);

extern void CAST_T_TRAIN_to_int_reset_TM_conversions(
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_T_TRAIN_to_int_init_TM_conversions(
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_T_TRAIN_to_int_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_T_TRAIN_to_int_TM_conversions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

