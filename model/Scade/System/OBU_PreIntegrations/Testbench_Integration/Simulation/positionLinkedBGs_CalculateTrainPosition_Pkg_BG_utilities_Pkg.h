/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* linkedPositionedBGs/ */ linkedPositionedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr#1)/ */ Context_positionLinkedBGs_itr_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  LinkedBGs_T_BG_Types_Pkg /* _L2/ */ _L2;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  trainProperties_T_TrainPosition_Types_Pck /* _L8/ */ _L8;
  _55_array /* _L9/ */ _L9;
} outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs/ */
extern void positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* passedPositionedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* linkedBGs/ */
  LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void positionLinkedBGs_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

