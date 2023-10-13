/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _SelectNormalTransition_LevelTransitionSelection_H_
#define _SelectNormalTransition_LevelTransitionSelection_H_

#include "kcg_types.h"
#include "IsSelectedTransition_LevelTransitionSelection.h"

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
  outC_IsSelectedTransition_LevelTransitionSelection /* _L27=(LevelTransitionSelection::IsSelectedTransition#1)/ */ Context_IsSelectedTransition_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* Loc_index/ */ Loc_index;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L25/ */ _L25;
  kcg_int64 /* _L27/ */ _L27;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L28/ */ _L28;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L29/ */ _L29;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L30/ */ _L30;
  _87_array /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
} outC_SelectNormalTransition_LevelTransitionSelection;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::SelectNormalTransition/ */
extern void SelectNormalTransition_LevelTransitionSelection(
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* level_transition_table/ */
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_table,
  outC_SelectNormalTransition_LevelTransitionSelection *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SelectNormalTransition_reset_LevelTransitionSelection(
  outC_SelectNormalTransition_LevelTransitionSelection *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SelectNormalTransition_init_LevelTransitionSelection(
  outC_SelectNormalTransition_LevelTransitionSelection *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SelectNormalTransition_LevelTransitionSelection_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectNormalTransition_LevelTransitionSelection.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

