/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ExitLevel2or3_OutputToRBC_H_
#define _ExitLevel2or3_OutputToRBC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* PositionReportNeeded/ */ PositionReportNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _136_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  M_POSITION /* Loc_Position/ */ Loc_Position;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:State2:<1> */ tr_1_clock_State2_SM1;
  _136_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_POSITION /* SM1:BeforeChange:_L3/ */ _L3_BeforeChange_SM1;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* SM1:BeforeChange:_L2/ */ _L2_BeforeChange_SM1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* SM1:BeforeChange:_L1/ */ _L1_BeforeChange_SM1;
  M_POSITION /* SM1:State2:_L1/ */ _L1_State2_SM1;
  _136_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _137_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _137_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* Loc_PositionReportToPlan/ */ Loc_PositionReportToPlan;
  Location_T_Obu_BasicTypes_Pkg /* Loc_MinSafeRearEnd/ */ Loc_MinSafeRearEnd;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  M_LEVEL /* _L7/ */ _L7;
  M_LEVEL /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  Location_T_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  trainPosition_T_TrainPosition_Types_Pck /* _L26/ */ _L26;
} outC_ExitLevel2or3_OutputToRBC;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::ExitLevel2or3/ */
extern void ExitLevel2or3_OutputToRBC(
  /* new_level/ */
  M_LEVEL new_level,
  /* last_level/ */
  M_LEVEL last_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ExitLevel2or3_OutputToRBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ExitLevel2or3_reset_OutputToRBC(
  outC_ExitLevel2or3_OutputToRBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ExitLevel2or3_init_OutputToRBC(
  outC_ExitLevel2or3_OutputToRBC *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_POSITION /* Loc_Position/ */ Context_Loc_Position;
  kcg_bool /* SM1: */ Context_SM1_reset_nxt;
  kcg_bool /* SM1: */ Context_SM1_reset_act;
  _136_SSM_ST_SM1 /* SM1: */ Context_SM1_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_ExitLevel2or3_OutputToRBC;

extern void kcg_save_SV_ExitLevel2or3_OutputToRBC(
  SV_ExitLevel2or3_OutputToRBC *SV,
  outC_ExitLevel2or3_OutputToRBC *outC);
extern void kcg_load_SV_ExitLevel2or3_OutputToRBC(
  outC_ExitLevel2or3_OutputToRBC *outC,
  SV_ExitLevel2or3_OutputToRBC *SV);



#endif /* _ExitLevel2or3_OutputToRBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ExitLevel2or3_OutputToRBC.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

