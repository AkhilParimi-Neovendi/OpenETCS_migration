/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _prevPassedLinkedBG_CalculateTrainPosition_Pkg_H_
#define _prevPassedLinkedBG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* previouslyPassedBG/ */ previouslyPassedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L42=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal#1)/ */ Context_nidBG_nidc_equal_1;
  outC_indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */ Context_indexOfLastPassedBG_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L42/ */ _L42;
  NID_C /* _L45/ */ _L45;
  NID_BG /* _L46/ */ _L46;
  NID_C /* _L49/ */ _L49;
  NID_BG /* _L50/ */ _L50;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  kcg_int32 /* _L60/ */ _L60;
  positionedBGs_T_TrainPosition_Types_Pck /* _L63/ */ _L63;
  positionedBG_T_TrainPosition_Types_Pck /* _L64/ */ _L64;
  passedBG_T_BG_Types_Pkg /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L69/ */ _L69;
  positionedBG_T_TrainPosition_Types_Pck /* _L70/ */ _L70;
  positionedBG_T_TrainPosition_Types_Pck /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
} outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::prevPassedLinkedBG/ */
extern void prevPassedLinkedBG_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* last_BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *last_BGs,
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void prevPassedLinkedBG_init_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _prevPassedLinkedBG_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** prevPassedLinkedBG_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

