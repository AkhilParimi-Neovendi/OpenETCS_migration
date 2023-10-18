/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _BuildOutputToRBC_OutputToRBC_H_
#define _BuildOutputToRBC_OutputToRBC_H_

#include "kcg_types.h"
#include "ExitLevel2or3_OutputToRBC.h"
#include "EntryInLevel2or3_OutputToRBC.h"
#include "RBCSessionRequests_OutputToRBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Connection_to_RBC_Requested/ */ Connection_to_RBC_Requested;
  kcg_bool /* PositionReportNeeded/ */ PositionReportNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBCSessionRequests_OutputToRBC /* _L2=(OutputToRBC::RBCSessionRequests#2)/ */ Context_RBCSessionRequests_2;
  outC_EntryInLevel2or3_OutputToRBC /* _L5=(OutputToRBC::EntryInLevel2or3#1)/ */ Context_EntryInLevel2or3_1;
  outC_ExitLevel2or3_OutputToRBC /* _L8=(OutputToRBC::ExitLevel2or3#1)/ */ Context_ExitLevel2or3_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  M_LEVEL /* _L3/ */ _L3;
  M_LEVEL /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L6/ */ _L6;
  M_LEVEL /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  M_LEVEL /* _L9/ */ _L9;
  M_LEVEL /* _L10/ */ _L10;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L11/ */ _L11;
  trainPosition_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
} outC_BuildOutputToRBC_OutputToRBC;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::BuildOutputToRBC/ */
extern void BuildOutputToRBC_OutputToRBC(
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* last_level/ */
  M_LEVEL last_level,
  /* new_level/ */
  M_LEVEL new_level,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_BuildOutputToRBC_OutputToRBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildOutputToRBC_reset_OutputToRBC(
  outC_BuildOutputToRBC_OutputToRBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildOutputToRBC_init_OutputToRBC(
  outC_BuildOutputToRBC_OutputToRBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BuildOutputToRBC_OutputToRBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildOutputToRBC_OutputToRBC.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

