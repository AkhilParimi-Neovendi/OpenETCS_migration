/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _CAST_D_EMERGENCYSTOP_to_int_TM_conversions_H_
#define _CAST_D_EMERGENCYSTOP_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* d_emergencystop_int/ */ d_emergencystop_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  D_EMERGENCYSTOP /* _L1/ */ _L1;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
} outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_D_EMERGENCYSTOP_to_int/ */
extern void CAST_D_EMERGENCYSTOP_to_int_TM_conversions(
  /* d_emergencystop/ */
  D_EMERGENCYSTOP d_emergencystop,
  outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_D_EMERGENCYSTOP_to_int_reset_TM_conversions(
  outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_D_EMERGENCYSTOP_to_int_init_TM_conversions(
  outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_D_EMERGENCYSTOP_to_int_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_D_EMERGENCYSTOP_to_int_TM_conversions.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

