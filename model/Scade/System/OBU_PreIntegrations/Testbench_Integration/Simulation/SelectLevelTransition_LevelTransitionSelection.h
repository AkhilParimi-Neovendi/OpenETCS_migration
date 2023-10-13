/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _SelectLevelTransition_LevelTransitionSelection_H_
#define _SelectLevelTransition_LevelTransitionSelection_H_

#include "kcg_types.h"
#include "SelectDriverCondition_LevelTransitionSelection.h"
#include "SelectConditionnalTransition_LevelTransitionSelection.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* selected_level_transition/ */ selected_level_transition;
  kcg_bool /* IsAvailableForUse/ */ IsAvailableForUse;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SelectDriverCondition_LevelTransitionSelection /* _L2=(LevelTransitionSelection::SelectDriverCondition#1)/ */ Context_SelectDriverCondition_1;
  outC_SelectNormalTransition_LevelTransitionSelection /* _L21=(LevelTransitionSelection::SelectNormalTransition#1)/ */ Context_SelectNormalTransition_1;
  outC_SelectConditionnalTransition_LevelTransitionSelection /* _L22=(LevelTransitionSelection::SelectConditionnalTransition#1)/ */ Context_SelectConditionnalTransition_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:_L3/ */ _L3_else_else_else_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:_L2/ */ _L2_else_else_else_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* Loc_conditionnal_set/ */ Loc_conditionnal_set;
  kcg_bool /* Loc_driver_set/ */ Loc_driver_set;
  kcg_bool /* Loc_normal_set/ */ Loc_normal_set;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* Loc_conditionnal/ */ Loc_conditionnal;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* Loc_driver/ */ Loc_driver;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* Loc_Normal/ */ Loc_Normal;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* last_level_transition/ */ last_level_transition;
  kcg_bool /* Loc_Normal_Available/ */ Loc_Normal_Available;
  kcg_bool /* Loc_Conditionnal_Available/ */ Loc_Conditionnal_Available;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* Loc_normal_transition_table/ */ Loc_normal_transition_table;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* Loc_conditionnal_transition_table/ */ Loc_conditionnal_transition_table;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L2/ */ _L2;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  M_LEVEL /* _L4/ */ _L4;
  kcg_bool /* _L7/ */ _L7;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L8/ */ _L8;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L16/ */ _L16;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L17/ */ _L17;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L28/ */ _L28;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L27/ */ _L27;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L32/ */ _L32;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L33/ */ _L33;
} outC_SelectLevelTransition_LevelTransitionSelection;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::SelectLevelTransition/ */
extern void SelectLevelTransition_LevelTransitionSelection(
  /* current_level/ */
  M_LEVEL current_level,
  /* train_standstill/ */
  kcg_bool train_standstill,
  /* driver_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Data_From_Track_to_Level/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_SelectLevelTransition_LevelTransitionSelection *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SelectLevelTransition_reset_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SelectLevelTransition_init_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* IsAvailableForUse/ */ Context_IsAvailableForUse;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* selected_level_transition/ */ Context_selected_level_transition;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_SelectLevelTransition_LevelTransitionSelection;

extern void kcg_save_SV_SelectLevelTransition_LevelTransitionSelection(
  SV_SelectLevelTransition_LevelTransitionSelection *SV,
  outC_SelectLevelTransition_LevelTransitionSelection *outC);
extern void kcg_load_SV_SelectLevelTransition_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC,
  SV_SelectLevelTransition_LevelTransitionSelection *SV);



#endif /* _SelectLevelTransition_LevelTransitionSelection_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectLevelTransition_LevelTransitionSelection.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

