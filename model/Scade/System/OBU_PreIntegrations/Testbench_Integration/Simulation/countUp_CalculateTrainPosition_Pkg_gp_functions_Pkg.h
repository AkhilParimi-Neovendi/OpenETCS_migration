/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_
#define _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* counter/ */ counter;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L11/ */ _L11;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L12/ */ _L12;
} outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp/ */
extern void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* count/ */
  kcg_bool count,
  /* reset/ */
  kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* _L11/ */ Context__L11;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg;

extern void kcg_save_SV_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  SV_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *SV,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);
extern void kcg_load_SV_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC,
  SV_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *SV);



#endif /* _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

