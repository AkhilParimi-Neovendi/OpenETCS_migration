/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */
#ifndef _CAST_Int_to_T_TRAIN_TM_conversions_H_
#define _CAST_Int_to_T_TRAIN_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_TRAIN /* t_train/ */ t_train;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
} outC_CAST_Int_to_T_TRAIN_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_T_TRAIN/ */
extern void CAST_Int_to_T_TRAIN_TM_conversions(
  /* t_train_int/ */
  kcg_int32 t_train_int,
  outC_CAST_Int_to_T_TRAIN_TM_conversions *outC);

extern void CAST_Int_to_T_TRAIN_reset_TM_conversions(
  outC_CAST_Int_to_T_TRAIN_TM_conversions *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_T_TRAIN_init_TM_conversions(
  outC_CAST_Int_to_T_TRAIN_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_T_TRAIN_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_T_TRAIN_TM_conversions.h
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */

