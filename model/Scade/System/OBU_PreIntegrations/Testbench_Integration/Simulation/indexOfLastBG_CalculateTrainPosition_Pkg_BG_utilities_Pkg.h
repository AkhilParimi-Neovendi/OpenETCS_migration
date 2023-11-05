/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* indexOfBG/ */ indexOfBG;
  kcg_bool /* BG_found/ */ BG_found;
  kcg_bool /* indexValid/ */ indexValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr#1)/ */ Context_indexOfLastBG_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  positionedBGs_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L12/ */ _L12;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  kcg_bool /* _L13/ */ _L13;
  array_bool_41 /* _L14/ */ _L14;
} outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG/ */
extern void indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* linked/ */
  kcg_bool linked,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void indexOfLastBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void indexOfLastBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

