/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ComputeNewLevel_LevelChangement_H_
#define _ComputeNewLevel_LevelChangement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* next_level/ */ next_level;
  kcg_bool /* IsNewLevel/ */ IsNewLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_is_set/ */ Loc_is_set;
  M_LEVEL /* Loc_Level/ */ Loc_Level;
  M_POSITION /* Loc_Position/ */ Loc_Position;
  T_TransitionType_Level_And_Mode_Types_Pkg /* Loc_Type/ */ Loc_Type;
  M_LEVEL /* _L1/ */ _L1;
  kcg_bool /* _L7/ */ _L7;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L6/ */ _L6;
  NID_LRBG /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  M_LEVEL /* _L12/ */ _L12;
  M_POSITION /* _L11/ */ _L11;
  T_TransitionType_Level_And_Mode_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  Location_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  M_LEVEL /* _L13/ */ _L13;
  M_LEVEL /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  M_LEVEL /* _L17/ */ _L17;
  M_LEVEL /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  M_POSITION /* _L26/ */ _L26;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  Location_T_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L31/ */ _L31;
  trainPosition_T_TrainPosition_Types_Pck /* _L32/ */ _L32;
} outC_ComputeNewLevel_LevelChangement;

/* ===========  node initialization and cycle functions  =========== */
/* LevelChangement::ComputeNewLevel/ */
extern void ComputeNewLevel_LevelChangement(
  /* current_level/ */
  M_LEVEL current_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ComputeNewLevel_LevelChangement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ComputeNewLevel_reset_LevelChangement(
  outC_ComputeNewLevel_LevelChangement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ComputeNewLevel_init_LevelChangement(
  outC_ComputeNewLevel_LevelChangement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ComputeNewLevel_LevelChangement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ComputeNewLevel_LevelChangement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

