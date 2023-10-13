/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ProceedOnLevelChange_LevelChangement_H_
#define _ProceedOnLevelChange_LevelChangement_H_

#include "kcg_types.h"
#include "TripRequests_LevelChangement.h"
#include "ComputeNewLevel_LevelChangement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* next_level/ */ next_level;
  kcg_bool /* IsNewLevel/ */ IsNewLevel;
  kcg_bool /* Trip_Requested/ */ Trip_Requested;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TripRequests_LevelChangement /* _L4=(LevelChangement::TripRequests#1)/ */ Context_TripRequests_1;
  outC_ComputeNewLevel_LevelChangement /* _L1=(LevelChangement::ComputeNewLevel#1)/ */ Context_ComputeNewLevel_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  M_LEVEL /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  M_LEVEL /* _L5/ */ _L5;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L6/ */ _L6;
  trainPosition_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  M_LEVEL /* _L9/ */ _L9;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L10/ */ _L10;
} outC_ProceedOnLevelChange_LevelChangement;

/* ===========  node initialization and cycle functions  =========== */
/* LevelChangement::ProceedOnLevelChange/ */
extern void ProceedOnLevelChange_LevelChangement(
  /* current_level/ */
  M_LEVEL current_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Data_From_Track_to_Level/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_ProceedOnLevelChange_LevelChangement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProceedOnLevelChange_reset_LevelChangement(
  outC_ProceedOnLevelChange_LevelChangement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ProceedOnLevelChange_init_LevelChangement(
  outC_ProceedOnLevelChange_LevelChangement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ProceedOnLevelChange_LevelChangement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ProceedOnLevelChange_LevelChangement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

