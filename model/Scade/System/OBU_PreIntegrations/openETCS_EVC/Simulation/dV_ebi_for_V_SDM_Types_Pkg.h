/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _dV_ebi_for_V_SDM_Types_Pkg_H_
#define _dV_ebi_for_V_SDM_Types_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* dv_ebi/ */ dv_ebi;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/Mi_Output/ */ Mi_Output_Min_1_int32;
  kcg_int32 /* @1/I2/ */ I2_Min_1_int32;
  kcg_int32 /* @1/I1/ */ I1_Min_1_int32;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_int32;
  kcg_int32 /* @1/_L24/ */ _L24_Min_1_int32;
  kcg_int32 /* @1/_L22/ */ _L22_Min_1_int32;
  kcg_int32 /* @1/_L21/ */ _L21_Min_1_int32;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  kcg_float32 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_float32 /* _L24/ */ _L24;
  kcg_float32 /* _L25/ */ _L25;
  kcg_float32 /* _L26/ */ _L26;
} outC_dV_ebi_for_V_SDM_Types_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Types_Pkg::dV_ebi_for_V/ */
extern void dV_ebi_for_V_SDM_Types_Pkg(
  /* V_input/ */
  V_odometry_Type_Obu_BasicTypes_Pkg V_input,
  outC_dV_ebi_for_V_SDM_Types_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dV_ebi_for_V_reset_SDM_Types_Pkg(
  outC_dV_ebi_for_V_SDM_Types_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dV_ebi_for_V_init_SDM_Types_Pkg(
  outC_dV_ebi_for_V_SDM_Types_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDM_Types_Pkg::dV_ebi_for_V/
  @1: (math::Min#1)
*/

#endif /* _dV_ebi_for_V_SDM_Types_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dV_ebi_for_V_SDM_Types_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

