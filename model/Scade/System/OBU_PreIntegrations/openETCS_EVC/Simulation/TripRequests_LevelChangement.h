/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _TripRequests_LevelChangement_H_
#define _TripRequests_LevelChangement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Trip_Requested/ */ Trip_Requested;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:then:IfBlock2: */ IfBlock2_clock_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:else: */ else_clock_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:IfBlock2:else:then:_L2/ */ _L2_then_else_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:else:then:_L1/ */ _L1_then_else_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:else:else:_L3/ */ _L3_else_else_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:_L1/ */ _L1_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:_L2/ */ _L2_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* Loc_L2L3_MA_track/ */ Loc_L2L3_MA_track;
  kcg_bool /* Loc_L1_MA_track/ */ Loc_L1_MA_track;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L2/ */ _L2;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
} outC_TripRequests_LevelChangement;

/* ===========  node initialization and cycle functions  =========== */
/* LevelChangement::TripRequests/ */
extern void TripRequests_LevelChangement(
  /* last_level/ */
  M_LEVEL last_level,
  /* new_level/ */
  M_LEVEL new_level,
  /* Data_From_Track_to_Level/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_TripRequests_LevelChangement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TripRequests_reset_LevelChangement(
  outC_TripRequests_LevelChangement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TripRequests_init_LevelChangement(
  outC_TripRequests_LevelChangement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TripRequests_LevelChangement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TripRequests_LevelChangement.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

