/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CalcRSMandPreindicationLocation_SDM_Commands_Pkg_H_
#define _CalcRSMandPreindicationLocation_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isPreIndicationLocation/ */ isPreIndicationLocation;
  kcg_bool /* isRSMLocation/ */ isRSMLocation;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SDM_Locations_T_SDM_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  Location_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  Location_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  trainPosition_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
} outC_CalcRSMandPreindicationLocation_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcRSMandPreindicationLocation/ */
extern void CalcRSMandPreindicationLocation_SDM_Commands_Pkg(
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  outC_CalcRSMandPreindicationLocation_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcRSMandPreindicationLocation_reset_SDM_Commands_Pkg(
  outC_CalcRSMandPreindicationLocation_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcRSMandPreindicationLocation_init_SDM_Commands_Pkg(
  outC_CalcRSMandPreindicationLocation_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcRSMandPreindicationLocation_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcRSMandPreindicationLocation_SDM_Commands_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

