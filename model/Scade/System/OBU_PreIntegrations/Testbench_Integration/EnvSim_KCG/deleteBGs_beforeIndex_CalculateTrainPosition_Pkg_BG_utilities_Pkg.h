/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr#1)/ */ Context_deleteBGs_beforeIndex_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  array_int64_41 /* _L9/ */ _L9;
  positionedBGs_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  positionedBGs_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  positionedBGs_T_TrainPosition_Types_Pck /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  _68_array /* _L22/ */ _L22;
} outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex/ */
extern void deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* indexOfBG/ */
  kcg_int64 indexOfBG,
  /* del/ */
  kcg_bool del,
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deleteBGs_beforeIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deleteBGs_beforeIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

