/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  kcg_bool /* overrun/ */ overrun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr#1)/ */ Context_mergeBGs_onTrack_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg /* _L7/ */ _L7;
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L13/ */ _L13;
  positionedBGs_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
} outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack/ */
extern void mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_1/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* BGs_2/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mergeBGs_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mergeBGs_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

