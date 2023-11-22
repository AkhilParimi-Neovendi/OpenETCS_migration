/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Real_to_Int_Utilities_H_
#define _Real_to_Int_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* int_out/ */ int_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_Real_to_Int_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Real_to_Int/ */
extern void Real_to_Int_Utilities(
  /* real_in/ */
  kcg_float32 real_in,
  /* resolution_factor_in/ */
  kcg_float32 resolution_factor_in,
  /* unit_factor_in/ */
  kcg_float32 unit_factor_in,
  /* max_value/ */
  kcg_int32 max_value,
  /* min_value/ */
  kcg_int32 min_value,
  outC_Real_to_Int_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Real_to_Int_reset_Utilities(outC_Real_to_Int_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Real_to_Int_init_Utilities(outC_Real_to_Int_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Real_to_Int_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Real_to_Int_Utilities.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

