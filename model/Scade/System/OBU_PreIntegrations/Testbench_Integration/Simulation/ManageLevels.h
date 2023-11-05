/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ManageLevels_H_
#define _ManageLevels_H_

#include "kcg_types.h"
#include "ManageAck_Acknowledgement.h"
#include "BuildOutputToRBC_OutputToRBC.h"
#include "ProceedOnLevelChange_LevelChangement.h"
#include "SelectLevelTransition_LevelTransitionSelection.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* nextLevel/ */ nextLevel;
  kcg_bool /* TripTrainRequested/ */ TripTrainRequested;
  kcg_bool /* needsAckFromDriver/ */ needsAckFromDriver;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* announcedLevelTransition/ */ announcedLevelTransition;
  kcg_bool /* serviceBrakeRequested/ */ serviceBrakeRequested;
  kcg_bool /* connectionToRBCRequested/ */ connectionToRBCRequested;
  kcg_bool /* positionReportNeeded/ */ positionReportNeeded;
  kcg_bool /* levelIsNew/ */ levelIsNew;
  kcg_bool /* isAvailableForUse/ */ isAvailableForUse;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildOutputToRBC_OutputToRBC /* _L68=(OutputToRBC::BuildOutputToRBC#1)/ */ Context_BuildOutputToRBC_1;
  outC_ManageAck_Acknowledgement /* _L75=(Acknowledgement::ManageAck#1)/ */ Context_ManageAck_1;
  outC_ProceedOnLevelChange_LevelChangement /* _L55=(LevelChangement::ProceedOnLevelChange#1)/ */ Context_ProceedOnLevelChange_1;
  outC_SelectLevelTransition_LevelTransitionSelection /* _L35=(LevelTransitionSelection::SelectLevelTransition#1)/ */ Context_SelectLevelTransition_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_IsNewLevel/ */ Loc_IsNewLevel;
  M_LEVEL /* Loc_NextLevel/ */ Loc_NextLevel;
  kcg_bool /* _L15/ */ _L15;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  trainPosition_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L24/ */ _L24;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L35/ */ _L35;
  kcg_bool /* _L38/ */ _L38;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L54/ */ _L54;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L56/ */ _L56;
  M_LEVEL /* _L55/ */ _L55;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L61/ */ _L61;
  M_LEVEL /* _L67/ */ _L67;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  M_LEVEL /* _L70/ */ _L70;
  trainPosition_T_TrainPosition_Types_Pck /* _L72/ */ _L72;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L75/ */ _L75;
  trainPosition_T_TrainPosition_Types_Pck /* _L78/ */ _L78;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L82/ */ _L82;
  M_LEVEL /* _L84/ */ _L84;
  M_LEVEL /* _L85/ */ _L85;
  M_LEVEL /* _L86/ */ _L86;
  M_LEVEL /* _L87/ */ _L87;
} outC_ManageLevels;

/* ===========  node initialization and cycle functions  =========== */
/* ManageLevels/ */
extern void ManageLevels(
  /* trainStandstill/ */
  kcg_bool trainStandstill,
  /* driverLevelTransition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driverLevelTransition,
  /* levelAck/ */
  kcg_bool levelAck,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ERTMScapabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMScapabilities,
  /* DataFromTrackToLevel/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *DataFromTrackToLevel,
  /* MemorizedLevelIn/ */
  M_LEVEL MemorizedLevelIn,
  outC_ManageLevels *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManageLevels_reset(outC_ManageLevels *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManageLevels_init(outC_ManageLevels *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_SelectLevelTransition_LevelTransitionSelection Context_SelectLevelTransition_1;
  SV_ManageAck_Acknowledgement Context_ManageAck_1;
  SV_BuildOutputToRBC_OutputToRBC Context_BuildOutputToRBC_1;
} SV_ManageLevels;

extern void kcg_save_SV_ManageLevels(
  SV_ManageLevels *SV,
  outC_ManageLevels *outC);
extern void kcg_load_SV_ManageLevels(
  outC_ManageLevels *outC,
  SV_ManageLevels *SV);



#endif /* _ManageLevels_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageLevels.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

