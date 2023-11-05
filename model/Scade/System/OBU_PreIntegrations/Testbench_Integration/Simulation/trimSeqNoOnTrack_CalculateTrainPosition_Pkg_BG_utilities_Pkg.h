/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L2=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr#1)/ */ Context_trimSeqNoOnTrack_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L5/ */ _L5;
} outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack/ */
extern void trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void trimSeqNoOnTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void trimSeqNoOnTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

