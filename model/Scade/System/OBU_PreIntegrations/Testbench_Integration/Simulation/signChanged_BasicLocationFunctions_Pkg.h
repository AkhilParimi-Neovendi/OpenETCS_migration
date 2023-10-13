/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _signChanged_BasicLocationFunctions_Pkg_H_
#define _signChanged_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* change/ */ change;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* val/ */ mem_val;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/A_Output/ */ A_Output_Abs_1_int64;
  kcg_int64 /* @1/A_Input/ */ A_Input_Abs_1_int64;
  kcg_int64 /* @1/_L8/ */ _L8_Abs_1_int64;
  kcg_int64 /* @1/_L5/ */ _L5_Abs_1_int64;
  kcg_int64 /* @1/_L3/ */ _L3_Abs_1_int64;
  kcg_int64 /* @1/_L2/ */ _L2_Abs_1_int64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_int64;
  kcg_int64 /* @2/A_Output/ */ A_Output_Abs_2_int64;
  kcg_int64 /* @2/A_Input/ */ A_Input_Abs_2_int64;
  kcg_int64 /* @2/_L8/ */ _L8_Abs_2_int64;
  kcg_int64 /* @2/_L5/ */ _L5_Abs_2_int64;
  kcg_int64 /* @2/_L3/ */ _L3_Abs_2_int64;
  kcg_int64 /* @2/_L2/ */ _L2_Abs_2_int64;
  kcg_bool /* @2/_L1/ */ _L1_Abs_2_int64;
  kcg_int64 /* @3/A_Output/ */ A_Output_Abs_3_int64;
  kcg_int64 /* @3/A_Input/ */ A_Input_Abs_3_int64;
  kcg_int64 /* @3/_L8/ */ _L8_Abs_3_int64;
  kcg_int64 /* @3/_L5/ */ _L5_Abs_3_int64;
  kcg_int64 /* @3/_L3/ */ _L3_Abs_3_int64;
  kcg_int64 /* @3/_L2/ */ _L2_Abs_3_int64;
  kcg_bool /* @3/_L1/ */ _L1_Abs_3_int64;
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
} outC_signChanged_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::signChanged/ */
extern void signChanged_BasicLocationFunctions_Pkg(
  /* val/ */
  kcg_int64 val,
  outC_signChanged_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void signChanged_reset_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void signChanged_init_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* val/ */ Context_mem_val;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_signChanged_BasicLocationFunctions_Pkg;

extern void kcg_save_SV_signChanged_BasicLocationFunctions_Pkg(
  SV_signChanged_BasicLocationFunctions_Pkg *SV,
  outC_signChanged_BasicLocationFunctions_Pkg *outC);
extern void kcg_load_SV_signChanged_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC,
  SV_signChanged_BasicLocationFunctions_Pkg *SV);

/*
  Expanded instances for: BasicLocationFunctions_Pkg::signChanged/
  @1: (math::Abs#1)
  @2: (math::Abs#2)
  @3: (math::Abs#3)
*/

#endif /* _signChanged_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** signChanged_BasicLocationFunctions_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
