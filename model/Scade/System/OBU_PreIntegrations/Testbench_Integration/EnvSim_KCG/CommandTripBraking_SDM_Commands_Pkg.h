/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CommandTripBraking_SDM_Commands_Pkg_H_
#define _CommandTripBraking_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EB_command_T_SDM_Commands_Pkg /* eb/ */ eb;
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
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L27/ */ _L27;
  trainPosition_T_TrainPosition_Types_Pck /* _L29/ */ _L29;
  Location_T_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L32/ */ _L32;
  trainData_internal_t_SDM_Types_Pkg /* _L39/ */ _L39;
  SDM_Locations_T_SDM_Types_Pkg /* _L41/ */ _L41;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L43/ */ _L43;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_int32 /* _L46/ */ _L46;
} outC_CommandTripBraking_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CommandTripBraking/ */
extern void CommandTripBraking_SDM_Commands_Pkg(
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CommandTripBraking_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CommandTripBraking_reset_SDM_Commands_Pkg(
  outC_CommandTripBraking_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CommandTripBraking_init_SDM_Commands_Pkg(
  outC_CommandTripBraking_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDM_Commands_Pkg::CommandTripBraking/
  @1: (math::Min#1)
*/

#endif /* _CommandTripBraking_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CommandTripBraking_SDM_Commands_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

