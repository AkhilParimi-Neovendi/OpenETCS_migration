/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _overlapOf_2_Locations_BasicLocationFunctions_Pkg_H_
#define _overlapOf_2_Locations_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* loc/ */ loc;
  kcg_bool /* overlap/ */ overlap;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/Mi_Output/ */ Mi_Output_Min_1_int64;
  kcg_int64 /* @1/I2/ */ I2_Min_1_int64;
  kcg_int64 /* @1/I1/ */ I1_Min_1_int64;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_int64;
  kcg_int64 /* @1/_L24/ */ _L24_Min_1_int64;
  kcg_int64 /* @1/_L22/ */ _L22_Min_1_int64;
  kcg_int64 /* @1/_L21/ */ _L21_Min_1_int64;
  kcg_int64 /* @2/Ma_Output/ */ Ma_Output_Max_1_int64;
  kcg_int64 /* @2/I2/ */ I2_Max_1_int64;
  kcg_int64 /* @2/I1/ */ I1_Max_1_int64;
  kcg_int64 /* @2/_L4/ */ _L4_Max_1_int64;
  kcg_bool /* @2/_L3/ */ _L3_Max_1_int64;
  kcg_int64 /* @2/_L2/ */ _L2_Max_1_int64;
  kcg_int64 /* @2/_L1/ */ _L1_Max_1_int64;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L19/ */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  kcg_int64 /* _L17/ */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  kcg_int64 /* _L11/ */ _L11;
  kcg_bool /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L24/ */ _L24;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L31/ */ _L31;
  kcg_int64 /* _L32/ */ _L32;
  kcg_int64 /* _L33/ */ _L33;
} outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::overlapOf_2_Locations/ */
extern void overlapOf_2_Locations_BasicLocationFunctions_Pkg(
  /* loc_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* loc_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: BasicLocationFunctions_Pkg::overlapOf_2_Locations/
  @1: (math::Min#1)
  @2: (math::Max#1)
*/

#endif /* _overlapOf_2_Locations_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** overlapOf_2_Locations_BasicLocationFunctions_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

