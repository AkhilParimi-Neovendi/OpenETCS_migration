/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _TOOLS_convert_engineering_location_TM_conversions_H_
#define _TOOLS_convert_engineering_location_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Loc_real/ */ Loc_real;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L4/ */ _L4;
} outC_TOOLS_convert_engineering_location_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::TOOLS_convert_engineering_location/ */
extern void TOOLS_convert_engineering_location_TM_conversions(
  /* Loc_int/ */
  kcg_int32 Loc_int,
  outC_TOOLS_convert_engineering_location_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TOOLS_convert_engineering_location_reset_TM_conversions(
  outC_TOOLS_convert_engineering_location_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TOOLS_convert_engineering_location_init_TM_conversions(
  outC_TOOLS_convert_engineering_location_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TOOLS_convert_engineering_location_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TOOLS_convert_engineering_location_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

