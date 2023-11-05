/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _TSM_PositionCond_SDM_Commands_Pkg_H_
#define _TSM_PositionCond_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TSM_triggerCond_T_SDM_Commands_Pkg /* triggerConds/ */ triggerConds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* FLOI_eq_SBI1/ */ FLOI_eq_SBI1;
  kcg_bool /* FLOI_eq_SBI2/ */ FLOI_eq_SBI2;
  SDM_Locations_T_SDM_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L3/ */ _L3;
  Location_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  Location_T_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  Location_T_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L34/ */ _L34;
  Location_T_Obu_BasicTypes_Pkg /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L45/ */ _L45;
  Location_T_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L54/ */ _L54;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L55/ */ _L55;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L56/ */ _L56;
  Location_T_Obu_BasicTypes_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  Location_T_Obu_BasicTypes_Pkg /* _L71/ */ _L71;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L74/ */ _L74;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  trainPosition_T_TrainPosition_Types_Pck /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
} outC_TSM_PositionCond_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::TSM_PositionCond/ */
extern void TSM_PositionCond_SDM_Commands_Pkg(
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  outC_TSM_PositionCond_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TSM_PositionCond_reset_SDM_Commands_Pkg(
  outC_TSM_PositionCond_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TSM_PositionCond_init_SDM_Commands_Pkg(
  outC_TSM_PositionCond_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TSM_PositionCond_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TSM_PositionCond_SDM_Commands_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

