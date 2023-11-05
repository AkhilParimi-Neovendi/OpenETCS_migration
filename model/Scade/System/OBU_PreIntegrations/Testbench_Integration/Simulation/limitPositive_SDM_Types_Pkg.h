/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _limitPositive_SDM_Types_Pkg_H_
#define _limitPositive_SDM_Types_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* limited/ */ limited;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* @1/Ma_Output/ */ Ma_Output_Max_1_float32;
  kcg_float32 /* @1/I2/ */ I2_Max_1_float32;
  kcg_float32 /* @1/I1/ */ I1_Max_1_float32;
  kcg_float32 /* @1/_L4/ */ _L4_Max_1_float32;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_float32;
  kcg_float32 /* @1/_L2/ */ _L2_Max_1_float32;
  kcg_float32 /* @1/_L1/ */ _L1_Max_1_float32;
  kcg_float32 /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
} outC_limitPositive_SDM_Types_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Types_Pkg::limitPositive/ */
extern void limitPositive_SDM_Types_Pkg(
  /* in/ */
  kcg_float32 in,
  outC_limitPositive_SDM_Types_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void limitPositive_reset_SDM_Types_Pkg(
  outC_limitPositive_SDM_Types_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void limitPositive_init_SDM_Types_Pkg(
  outC_limitPositive_SDM_Types_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDM_Types_Pkg::limitPositive/
  @1: (math::Max#1)
*/

#endif /* _limitPositive_SDM_Types_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** limitPositive_SDM_Types_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

