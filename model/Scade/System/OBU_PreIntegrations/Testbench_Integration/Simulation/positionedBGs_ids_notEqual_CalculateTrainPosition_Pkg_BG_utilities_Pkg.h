/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* idsNotEqual/ */ idsNotEqual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal#1)/ */ Context_nidBG_nidc_equal_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  NID_C /* _L4/ */ _L4;
  NID_BG /* _L5/ */ _L5;
  NID_C /* _L6/ */ _L6;
  NID_BG /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual/ */
extern void positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* bg_2/ */
  positionedBG_T_TrainPosition_Types_Pck *bg_2,
  /* bg_1/ */
  positionedBG_T_TrainPosition_Types_Pck *bg_1,
  outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void positionedBGs_ids_notEqual_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void positionedBGs_ids_notEqual_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

