/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

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
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L20=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */ Context_positionedBGs_ids_equal_1;
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr#1)/ */ Context_indexOfBG_onTrack_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  positionedBGs_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
  kcg_int32 /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
} outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack/ */
extern void indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void indexOfBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void indexOfBG_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

