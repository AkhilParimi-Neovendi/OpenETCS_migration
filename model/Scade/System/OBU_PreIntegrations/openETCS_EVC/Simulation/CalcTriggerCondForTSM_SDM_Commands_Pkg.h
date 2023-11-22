/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CalcTriggerCondForTSM_SDM_Commands_Pkg_H_
#define _CalcTriggerCondForTSM_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "TSM_PositionCond_SDM_Commands_Pkg.h"
#include "TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg.h"
#include "TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TSM_triggerCond_T_SDM_Commands_Pkg /* triggerConds/ */ triggerConds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TSM_PositionCond_SDM_Commands_Pkg /* _L12=(SDM_Commands_Pkg::TSM_PositionCond#1)/ */ Context_TSM_PositionCond_1;
  outC_TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg /* _L10=(SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL#1)/ */ Context_TSM_EstSpeedCond_EOA_SvL_1;
  outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg /* _L11=(SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA#1)/ */ Context_TSM_EstSpeedCond_MRSP_LOA_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Speeds_T_SDM_Types_Pkg /* _L1/ */ _L1;
  SDM_Locations_T_SDM_Types_Pkg /* _L2/ */ _L2;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L3/ */ _L3;
  Target_T_TargetManagement_types /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  TargetType_T_TargetManagement_types /* _L8/ */ _L8;
  TargetType_T_TargetManagement_types /* _L9/ */ _L9;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L10/ */ _L10;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L11/ */ _L11;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L12/ */ _L12;
  MyArray_SDM_Commands_Pkg /* _L13/ */ _L13;
  TSM_triggerCond_T_SDM_Commands_Pkg /* _L196/ */ _L196;
  kcg_bool /* _L224/ */ _L224;
  kcg_bool /* _L223/ */ _L223;
  kcg_bool /* _L222/ */ _L222;
  kcg_bool /* _L221/ */ _L221;
  kcg_bool /* _L220/ */ _L220;
  kcg_bool /* _L219/ */ _L219;
  kcg_bool /* _L218/ */ _L218;
  kcg_bool /* _L217/ */ _L217;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L215/ */ _L215;
  kcg_bool /* _L214/ */ _L214;
  kcg_bool /* _L213/ */ _L213;
  kcg_bool /* _L212/ */ _L212;
  kcg_bool /* _L211/ */ _L211;
  kcg_bool /* _L252/ */ _L252;
  kcg_bool /* _L251/ */ _L251;
  kcg_bool /* _L250/ */ _L250;
  kcg_bool /* _L249/ */ _L249;
  kcg_bool /* _L248/ */ _L248;
  kcg_bool /* _L247/ */ _L247;
  kcg_bool /* _L246/ */ _L246;
  kcg_bool /* _L245/ */ _L245;
  kcg_bool /* _L244/ */ _L244;
  kcg_bool /* _L243/ */ _L243;
  kcg_bool /* _L242/ */ _L242;
  kcg_bool /* _L241/ */ _L241;
  kcg_bool /* _L240/ */ _L240;
  kcg_bool /* _L239/ */ _L239;
  MyArray_SDM_Commands_Pkg /* _L365/ */ _L365;
  kcg_bool /* _L422/ */ _L422;
  kcg_bool /* _L421/ */ _L421;
  kcg_bool /* _L420/ */ _L420;
  kcg_bool /* _L419/ */ _L419;
  kcg_bool /* _L418/ */ _L418;
  kcg_bool /* _L417/ */ _L417;
  kcg_bool /* _L416/ */ _L416;
  kcg_bool /* _L415/ */ _L415;
  kcg_bool /* _L414/ */ _L414;
  kcg_bool /* _L413/ */ _L413;
  kcg_bool /* _L412/ */ _L412;
  kcg_bool /* _L411/ */ _L411;
  kcg_bool /* _L410/ */ _L410;
  kcg_bool /* _L409/ */ _L409;
  MyArray_SDM_Commands_Pkg /* _L479/ */ _L479;
  TargetType_T_TargetManagement_types /* _L480/ */ _L480;
  trainPosition_T_TrainPosition_Types_Pck /* _L481/ */ _L481;
  kcg_bool /* _L482/ */ _L482;
} outC_CalcTriggerCondForTSM_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcTriggerCondForTSM/ */
extern void CalcTriggerCondForTSM_SDM_Commands_Pkg(
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  outC_CalcTriggerCondForTSM_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcTriggerCondForTSM_reset_SDM_Commands_Pkg(
  outC_CalcTriggerCondForTSM_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcTriggerCondForTSM_init_SDM_Commands_Pkg(
  outC_CalcTriggerCondForTSM_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcTriggerCondForTSM_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcTriggerCondForTSM_SDM_Commands_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

