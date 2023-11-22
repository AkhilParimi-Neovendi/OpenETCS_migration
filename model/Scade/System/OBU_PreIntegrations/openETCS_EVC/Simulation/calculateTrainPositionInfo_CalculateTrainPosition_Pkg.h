/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_
#define _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPositionInfo_T_TrainPosition_Types_Pck /* trainPositionInfo/ */ trainPositionInfo;
  kcg_bool /* positionCalculationNotConsistent/ */ positionCalculationNotConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  positionedBG_T_TrainPosition_Types_Pck /* _L62/ */ _L62;
  positionedBG_T_TrainPosition_Types_Pck /* _L61/ */ _L61;
  positionedBG_T_TrainPosition_Types_Pck /* _L70/ */ _L70;
  positionedBG_T_TrainPosition_Types_Pck /* _L71/ */ _L71;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */ Context_overlapOf_2_Locations_1;
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L8=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#2)/ */ Context_positionDerivedFromPassedBG_2;
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */ _1_Context_positionDerivedFromPassedBG_1;
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg /* _L56=(CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed#1)/ */ Context_linkingIsUsed_1;
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L70=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#2)/ */ Context_lastAndPrevBG_2;
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L61=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG#1)/ */ Context_lastAndPrevBG_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every2;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  trainPositionInfo_T_TrainPosition_Types_Pck /* _L9/ */ _L9;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  odometry_T_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L56/ */ _L56;
  odometry_T_Obu_BasicTypes_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  positionedBGs_T_TrainPosition_Types_Pck /* _L59/ */ _L59;
  positionedBG_T_TrainPosition_Types_Pck /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L66/ */ _L66;
  positionedBGs_T_TrainPosition_Types_Pck /* _L65/ */ _L65;
  kcg_bool /* _L64/ */ _L64;
  positionedBG_T_TrainPosition_Types_Pck /* _L63/ */ _L63;
  kcg_bool /* _L76/ */ _L76;
  positionedBG_T_TrainPosition_Types_Pck /* _L75/ */ _L75;
  kcg_bool /* _L74/ */ _L74;
  kcg_bool /* _L73/ */ _L73;
  positionedBG_T_TrainPosition_Types_Pck /* _L72/ */ _L72;
  positionedBGs_T_TrainPosition_Types_Pck /* _L69/ */ _L69;
  kcg_bool /* _L77/ */ _L77;
} outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo/ */
extern void calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* recalculateBGs/ */
  kcg_bool recalculateBGs,
  /* passedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* reset/ */
  kcg_bool reset,
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

