/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Input_Level_Transition_InputManagement_H_
#define _Input_Level_Transition_InputManagement_H_

#include "kcg_types.h"
#include "NormalTransition_InputManagement.h"
#include "ConditionnalTransition_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* conditional_transition/ */ conditional_transition;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* level_transition_priority_table/ */ level_transition_priority_table;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ConditionnalTransition_InputManagement /* _L124=(InputManagement::ConditionnalTransition)/ */ Context_ConditionnalTransition[7];
  outC_NormalTransition_InputManagement /* _L129=(InputManagement::NormalTransition)/ */ Context_NormalTransition[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L124/ */ _L124;
  array_int32_7 /* _L126/ */ _L126;
  array_int32_7 /* _L127/ */ _L127;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L129/ */ _L129;
  NID_LRBG /* _L130/ */ _L130;
  Location_T_Obu_BasicTypes_Pkg /* _L131/ */ _L131;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L132/ */ _L132;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L133/ */ _L133;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L134/ */ _L134;
} outC_Input_Level_Transition_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::Input_Level_Transition/ */
extern void Input_Level_Transition_InputManagement(
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  outC_Input_Level_Transition_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_Level_Transition_reset_InputManagement(
  outC_Input_Level_Transition_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_Level_Transition_init_InputManagement(
  outC_Input_Level_Transition_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_Level_Transition_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Level_Transition_InputManagement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

