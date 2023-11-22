/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg_H_
#define _checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isLessThanOrEqual/ */ isLessThanOrEqual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/A_Output/ */ A_Output_Abs_1_int32;
  kcg_int32 /* @1/A_Input/ */ A_Input_Abs_1_int32;
  kcg_int32 /* @1/_L8/ */ _L8_Abs_1_int32;
  kcg_int32 /* @1/_L5/ */ _L5_Abs_1_int32;
  kcg_int32 /* @1/_L3/ */ _L3_Abs_1_int32;
  kcg_int32 /* @1/_L2/ */ _L2_Abs_1_int32;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_int32;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
} outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/ */
extern void checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* odo_2/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* odo_1/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* maxDelta/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta,
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkMaxAbsOdoDistance_init_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/
  @1: (math::Abs#1)
*/

#endif /* _checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

