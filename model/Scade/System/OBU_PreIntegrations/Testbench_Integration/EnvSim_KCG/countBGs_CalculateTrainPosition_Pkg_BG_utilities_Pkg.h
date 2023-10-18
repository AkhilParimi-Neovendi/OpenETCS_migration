/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* empty/ */ empty;
  kcg_bool /* full/ */ full;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* counters/ */ counters;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr#1)/ */ Context_countBGs_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L3/ */ _L3;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L4/ */ _L4;
  positionedBGs_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_int64 /* _L17/ */ _L17;
  kcg_int64 /* _L24/ */ _L24;
} outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs/ */
extern void countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* enable/ */
  kcg_bool enable,
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countBGs_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

