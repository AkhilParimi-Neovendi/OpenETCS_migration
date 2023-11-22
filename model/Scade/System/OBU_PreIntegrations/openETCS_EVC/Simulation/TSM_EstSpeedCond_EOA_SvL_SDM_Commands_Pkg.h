/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg_H_
#define _TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg_H_

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
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L5/ */ _L5;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L27/ */ _L27;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L36/ */ _L36;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_int32 /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L44/ */ _L44;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L45/ */ _L45;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L47/ */ _L47;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  Speeds_T_SDM_Types_Pkg /* _L86/ */ _L86;
} outC_TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL/ */
extern void TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg(
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  outC_TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TSM_EstSpeedCond_EOA_SvL_reset_SDM_Commands_Pkg(
  outC_TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TSM_EstSpeedCond_EOA_SvL_init_SDM_Commands_Pkg(
  outC_TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

