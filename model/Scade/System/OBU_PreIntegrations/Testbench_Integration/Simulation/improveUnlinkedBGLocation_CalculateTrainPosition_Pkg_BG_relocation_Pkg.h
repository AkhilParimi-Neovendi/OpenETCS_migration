/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "odoLoc_2_refLocations_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* unlinkedBG_out/ */ unlinkedBG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* _L30=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */ Context_overlapOf_2_Locations_1;
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg /* _L19=(BasicLocationFunctions_Pkg::odoLoc_2_refLocations#1)/ */ Context_odoLoc_2_refLocations_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  Q_LINK /* _L3/ */ _L3;
  Q_LINK /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  positionedBG_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  Q_LINK /* _L11/ */ _L11;
  Q_LINK /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  positionedBG_T_TrainPosition_Types_Pck /* _L20/ */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  positionedBG_T_TrainPosition_Types_Pck /* _L24/ */ _L24;
  positionedBG_T_TrainPosition_Types_Pck /* _L28/ */ _L28;
  kcg_bool /* _L31/ */ _L31;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L32/ */ _L32;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L34/ */ _L34;
  positionedBG_T_TrainPosition_Types_Pck /* _L35/ */ _L35;
  positionedBG_T_TrainPosition_Types_Pck /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  Q_LINK /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  Q_LINK /* _L39/ */ _L39;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L47/ */ _L47;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L48/ */ _L48;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L51/ */ _L51;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
} outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation/ */
extern void improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* passedLinkedBG_2/ */
  positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_2,
  /* passedLinkedBG_1/ */
  positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_1,
  /* unlinkedBG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void improveUnlinkedBGLocation_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void improveUnlinkedBGLocation_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

