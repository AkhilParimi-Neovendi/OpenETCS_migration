/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  kcg_int64 /* indexOfBG/ */ indexOfBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* _L36=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */ Context_overlapOf_2_Locations_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* inRange/ */ inRange;
  kcg_bool /* BG_isAhead/ */ BG_isAhead;
  positionedBG_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L25/ */ _L25;
  kcg_int64 /* _L27/ */ _L27;
  kcg_int64 /* _L28/ */ _L28;
  kcg_int64 /* _L29/ */ _L29;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  positionedBG_T_TrainPosition_Types_Pck /* _L34/ */ _L34;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L35/ */ _L35;
  kcg_bool /* _L37/ */ _L37;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L36/ */ _L36;
  kcg_bool /* _L39/ */ _L39;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L40/ */ _L40;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
  kcg_int64 /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_int64 /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
} outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr/ */
extern void posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int64 iteratorIndex,
  /* prevIndex/ */
  kcg_int64 prevIndex,
  /* position/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void posInRangeOfBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void posInRangeOfBG_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

