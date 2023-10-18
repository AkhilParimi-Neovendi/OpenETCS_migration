/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Triggers_UserStory14_RBC_Scenario_Pkg_H_
#define _Triggers_UserStory14_RBC_Scenario_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* outTriggerId/ */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  T_TRAIN /* _L5/ */ _L5;
} outC_Triggers_UserStory14_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_UserStory14/ */
extern void Triggers_UserStory14_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float64 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int64 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  outC_Triggers_UserStory14_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Triggers_UserStory14_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory14_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Triggers_UserStory14_init_RBC_Scenario_Pkg(
  outC_Triggers_UserStory14_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Triggers_UserStory14_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Triggers_UserStory14_RBC_Scenario_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

