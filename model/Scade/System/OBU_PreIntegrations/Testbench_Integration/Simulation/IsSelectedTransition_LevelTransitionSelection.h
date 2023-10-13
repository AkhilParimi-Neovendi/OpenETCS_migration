/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _IsSelectedTransition_LevelTransitionSelection_H_
#define _IsSelectedTransition_LevelTransitionSelection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* available_transition_not_selected/ */ available_transition_not_selected;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* selected_level_transition/ */ selected_level_transition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SelectHigherPriority: */ SelectHigherPriority_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* SelectHigherPriority:then:_L2/ */ _L2_then_SelectHigherPriority;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* SelectHigherPriority:else:_L2/ */ _L2_else_SelectHigherPriority;
  kcg_bool /* Loc_is_valid/ */ Loc_is_valid;
  kcg_bool /* capability_Level1/ */ capability_Level1;
  kcg_bool /* capability_Level2/ */ capability_Level2;
  kcg_bool /* capability_Level3/ */ capability_Level3;
  kcg_bool /* capability_NTC/ */ capability_NTC;
  kcg_bool /* capability_Level0/ */ capability_Level0;
  kcg_bool /* _L26/ */ _L26;
  M_LEVEL /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L7/ */ _L7;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L8/ */ _L8;
  NID_LRBG /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L27/ */ _L27;
} outC_IsSelectedTransition_LevelTransitionSelection;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::IsSelectedTransition/ */
extern void IsSelectedTransition_LevelTransitionSelection(
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  outC_IsSelectedTransition_LevelTransitionSelection *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void IsSelectedTransition_reset_LevelTransitionSelection(
  outC_IsSelectedTransition_LevelTransitionSelection *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void IsSelectedTransition_init_LevelTransitionSelection(
  outC_IsSelectedTransition_LevelTransitionSelection *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _IsSelectedTransition_LevelTransitionSelection_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsSelectedTransition_LevelTransitionSelection.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

