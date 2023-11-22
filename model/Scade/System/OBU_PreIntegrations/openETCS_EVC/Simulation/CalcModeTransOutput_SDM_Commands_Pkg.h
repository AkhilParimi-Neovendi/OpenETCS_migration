/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CalcModeTransOutput_SDM_Commands_Pkg_H_
#define _CalcModeTransOutput_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* eoaOverpassed/ */ eoaOverpassed;
  kcg_bool /* targetSpeedReached/ */ targetSpeedReached;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Speeds_T_SDM_Types_Pkg /* _L9/ */ _L9;
  SDM_Locations_T_SDM_Types_Pkg /* _L6/ */ _L6;
  trainPosition_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_bool /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  Location_T_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L27/ */ _L27;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  trainData_internal_t_SDM_Types_Pkg /* _L30/ */ _L30;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L32/ */ _L32;
} outC_CalcModeTransOutput_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcModeTransOutput/ */
extern void CalcModeTransOutput_SDM_Commands_Pkg(
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CalcModeTransOutput_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcModeTransOutput_reset_SDM_Commands_Pkg(
  outC_CalcModeTransOutput_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcModeTransOutput_init_SDM_Commands_Pkg(
  outC_CalcModeTransOutput_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcModeTransOutput_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcModeTransOutput_SDM_Commands_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

