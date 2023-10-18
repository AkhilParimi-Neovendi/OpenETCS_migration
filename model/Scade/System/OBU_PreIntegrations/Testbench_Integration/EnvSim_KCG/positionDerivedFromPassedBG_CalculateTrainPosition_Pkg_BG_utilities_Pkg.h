/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* position/ */ position;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* IfBlock1:then:_L15=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */ Context_add_odo_2_Location_6;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* IfBlock1:else:_L3=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */ Context_sub_2_odoDistances_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
} outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG/ */
extern void positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* odoPosition/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odoPosition,
  /* passedRefBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedRefBG,
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void positionDerivedFromPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

