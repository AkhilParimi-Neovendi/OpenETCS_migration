/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_
#define _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TSM_revokeCond_T_SDM_Commands_Pkg /* revokationConds/ */ revokationConds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* FLOI_eq_SBI2/ */ FLOI_eq_SBI2;
  kcg_bool /* FLOI_eq_SBI1/ */ FLOI_eq_SBI1;
  Location_T_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  Location_T_Obu_BasicTypes_Pkg /* _L34/ */ _L34;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L30/ */ _L30;
  SDM_Locations_T_SDM_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  TSM_revokeCond_T_SDM_Commands_Pkg /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  Location_T_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  Speeds_T_SDM_Types_Pkg /* _L51/ */ _L51;
  trainPosition_T_TrainPosition_Types_Pck /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
} outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL/ */
extern void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcRevokCondForTSM_EOA_SvL_reset_SDM_Commands_Pkg(
  outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcRevokCondForTSM_EOA_SvL_init_SDM_Commands_Pkg(
  outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

