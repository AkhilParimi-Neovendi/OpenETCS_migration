/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L12=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack#1)/ */ Context_mergeBG_onTrack_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L13/ */ _L13;
  positionedBGs_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L18/ */ _L18;
  positionedBGs_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  kcg_bool /* _L19/ */ _L19;
} outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr/ */
extern void mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_in,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mergeBGs_onTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mergeBGs_onTrack_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

