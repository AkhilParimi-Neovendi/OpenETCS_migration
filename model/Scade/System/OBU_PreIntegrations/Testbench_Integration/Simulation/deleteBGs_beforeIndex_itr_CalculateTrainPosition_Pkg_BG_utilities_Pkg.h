/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  positionedBG_T_TrainPosition_Types_Pck /* BG_out/ */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  positionedBGs_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  positionedBGs_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
} outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr/ */
extern void deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* indexOfBG/ */
  kcg_int32 indexOfBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deleteBGs_beforeIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deleteBGs_beforeIndex_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

