/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _IsInPriorityTable_LevelTransitionSelection_H_
#define _IsInPriorityTable_LevelTransitionSelection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* same_level_and_set/ */ same_level_and_set;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  M_LEVEL /* _L6/ */ _L6;
  kcg_bool /* _L2/ */ _L2;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  NID_LRBG /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  M_LEVEL /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
} outC_IsInPriorityTable_LevelTransitionSelection;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::IsInPriorityTable/ */
extern void IsInPriorityTable_LevelTransitionSelection(
  /* In_same_level_and_set/ */
  kcg_bool In_same_level_and_set,
  /* level/ */
  M_LEVEL level,
  /* level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  outC_IsInPriorityTable_LevelTransitionSelection *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void IsInPriorityTable_reset_LevelTransitionSelection(
  outC_IsInPriorityTable_LevelTransitionSelection *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void IsInPriorityTable_init_LevelTransitionSelection(
  outC_IsInPriorityTable_LevelTransitionSelection *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _IsInPriorityTable_LevelTransitionSelection_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsInPriorityTable_LevelTransitionSelection.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

