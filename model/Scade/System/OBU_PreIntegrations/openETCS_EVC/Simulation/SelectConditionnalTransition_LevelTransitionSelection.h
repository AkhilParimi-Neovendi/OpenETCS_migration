/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _SelectConditionnalTransition_LevelTransitionSelection_H_
#define _SelectConditionnalTransition_LevelTransitionSelection_H_

#include "kcg_types.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"
#include "IsInPriorityTable_LevelTransitionSelection.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Available_for_use/ */ Available_for_use;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* output_level_transition/ */ output_level_transition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SelectNormalTransition_LevelTransitionSelection /* IfBlock1:else:_L8=(LevelTransitionSelection::SelectNormalTransition#1)/ */ Context_SelectNormalTransition_1;
  outC_IsInPriorityTable_LevelTransitionSelection /* _L1=(LevelTransitionSelection::IsInPriorityTable#1)/ */ Context_IsInPriorityTable_1[7];
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:else:_L9/ */ _L9_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L8/ */ _L8_else_IfBlock1;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* Loc_contain_current_level/ */ Loc_contain_current_level;
  kcg_bool /* _L1/ */ _L1;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  M_LEVEL /* _L4/ */ _L4;
  _167_array /* _L5/ */ _L5;
} outC_SelectConditionnalTransition_LevelTransitionSelection;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::SelectConditionnalTransition/ */
extern void SelectConditionnalTransition_LevelTransitionSelection(
  /* current_level/ */
  M_LEVEL current_level,
  /* conditional_transition/ */
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* last_available_for_use/ */
  kcg_bool last_available_for_use,
  outC_SelectConditionnalTransition_LevelTransitionSelection *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SelectConditionnalTransition_reset_LevelTransitionSelection(
  outC_SelectConditionnalTransition_LevelTransitionSelection *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SelectConditionnalTransition_init_LevelTransitionSelection(
  outC_SelectConditionnalTransition_LevelTransitionSelection *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SelectConditionnalTransition_LevelTransitionSelection_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectConditionnalTransition_LevelTransitionSelection.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

