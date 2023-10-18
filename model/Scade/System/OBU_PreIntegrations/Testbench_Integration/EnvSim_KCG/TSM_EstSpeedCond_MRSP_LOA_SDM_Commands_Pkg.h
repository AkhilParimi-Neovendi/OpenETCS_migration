/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg_H_
#define _TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg_H_

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
  Speeds_T_SDM_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L27/ */ _L27;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_int64 /* _L33/ */ _L33;
  kcg_int64 /* _L34/ */ _L34;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L35/ */ _L35;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L36/ */ _L36;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_int64 /* _L41/ */ _L41;
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
} outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA/ */
extern void TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg(
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TSM_EstSpeedCond_MRSP_LOA_reset_SDM_Commands_Pkg(
  outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TSM_EstSpeedCond_MRSP_LOA_init_SDM_Commands_Pkg(
  outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

