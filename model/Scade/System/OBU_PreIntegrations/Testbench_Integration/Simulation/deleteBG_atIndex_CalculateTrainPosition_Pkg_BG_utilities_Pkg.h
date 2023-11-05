/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr#1)/ */ Context_deleteBG_atIndex_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  array_int32_41 /* _L9/ */ _L9;
  _42_array /* _L10/ */ _L10;
  positionedBG_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  _45_array /* _L12/ */ _L12;
  positionedBGs_T_TrainPosition_Types_Pck /* _L13/ */ _L13;
  positionedBGs_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  positionedBGs_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  positionedBGs_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
} outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex/ */
extern void deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* indexOfBG/ */
  kcg_int32 indexOfBG,
  /* del/ */
  kcg_bool del,
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deleteBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deleteBG_atIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

