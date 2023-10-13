/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _SelectDriverCondition_LevelTransitionSelection_H_
#define _SelectDriverCondition_LevelTransitionSelection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* driver_output_level_transition/ */ driver_output_level_transition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Driver_Transition_Set/ */ Driver_Transition_Set;
  M_LEVEL /* Driver_Transition_Level/ */ Driver_Transition_Level;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L18/ */ _L18;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L19/ */ _L19;
  NID_LRBG /* _L20/ */ _L20;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  M_LEVEL /* _L17/ */ _L17;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L24/ */ _L24;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L25/ */ _L25;
} outC_SelectDriverCondition_LevelTransitionSelection;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::SelectDriverCondition/ */
extern void SelectDriverCondition_LevelTransitionSelection(
  /* current_level/ */
  M_LEVEL current_level,
  /* train_standstill/ */
  kcg_bool train_standstill,
  /* driver_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  outC_SelectDriverCondition_LevelTransitionSelection *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SelectDriverCondition_reset_LevelTransitionSelection(
  outC_SelectDriverCondition_LevelTransitionSelection *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SelectDriverCondition_init_LevelTransitionSelection(
  outC_SelectDriverCondition_LevelTransitionSelection *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SelectDriverCondition_LevelTransitionSelection_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectDriverCondition_LevelTransitionSelection.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

