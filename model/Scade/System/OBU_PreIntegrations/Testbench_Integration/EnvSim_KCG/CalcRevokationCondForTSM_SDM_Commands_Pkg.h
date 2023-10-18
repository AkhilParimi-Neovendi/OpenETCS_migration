/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_
#define _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TSM_revokeCond_T_SDM_Commands_Pkg /* revokationConds/ */ revokationConds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg /* _L59=(SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL#1)/ */ Context_CalcRevokCondForTSM_EOA_SvL_1;
  outC_CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg /* _L60=(SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA#1)/ */ Context_CalcRevokCondForTSM_MRSP_LOA_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Speeds_T_SDM_Types_Pkg /* _L1/ */ _L1;
  SDM_Locations_T_SDM_Types_Pkg /* _L2/ */ _L2;
  TSM_revokeCond_T_SDM_Commands_Pkg /* _L59/ */ _L59;
  TSM_revokeCond_T_SDM_Commands_Pkg /* _L60/ */ _L60;
  TargetType_T_TargetManagement_types /* _L66/ */ _L66;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L64/ */ _L64;
  TargetType_T_TargetManagement_types /* _L63/ */ _L63;
  Target_T_TargetManagement_types /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  TSM_revokeCond_T_SDM_Commands_Pkg /* _L67/ */ _L67;
  TargetType_T_TargetManagement_types /* _L68/ */ _L68;
  trainPosition_T_TrainPosition_Types_Pck /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
} outC_CalcRevokationCondForTSM_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcRevokationCondForTSM/ */
extern void CalcRevokationCondForTSM_SDM_Commands_Pkg(
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
  outC_CalcRevokationCondForTSM_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcRevokationCondForTSM_reset_SDM_Commands_Pkg(
  outC_CalcRevokationCondForTSM_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcRevokationCondForTSM_init_SDM_Commands_Pkg(
  outC_CalcRevokationCondForTSM_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcRevokationCondForTSM_SDM_Commands_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

