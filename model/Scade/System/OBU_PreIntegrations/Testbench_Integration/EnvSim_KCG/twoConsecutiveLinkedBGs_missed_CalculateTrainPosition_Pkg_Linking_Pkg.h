/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* secondConsecutiveBG_missed/ */ secondConsecutiveBG_missed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  positionedBG_T_TrainPosition_Types_Pck /* @1/_L8/ */ _L8_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* storedMissedBG/ */ storedMissedBG;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L11=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */ Context_positionedBGs_ids_notEqual_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* @1/Out/ */ Out_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @1/InitVal/ */ InitVal_Memory_1_struct;
  kcg_bool /* @1/MemCond/ */ MemCond_Memory_1_struct;
  kcg_bool /* @1/Reset/ */ Reset_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @1/M_Input/ */ M_Input_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @1/_L9/ */ _L9_Memory_1_struct;
  kcg_bool /* @1/_L1/ */ _L1_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @1/_L2/ */ _L2_Memory_1_struct;
  kcg_bool /* @1/_L3/ */ _L3_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @1/_L5/ */ _L5_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @1/_L6/ */ _L6_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @1/_L7/ */ _L7_Memory_1_struct;
  kcg_bool /* linkedAnnouncedBG_passed/ */ linkedAnnouncedBG_passed;
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* _L9/ */ _L9;
  positionedBG_T_TrainPosition_Types_Pck /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  Q_LINK /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  Q_LINK /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L29/ */ _L29;
} outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed/ */
extern void twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* missed/ */
  kcg_bool missed,
  /* missedLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* passedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* reset/ */
  kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void twoConsecutiveLinkedBGs_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed/
  @1: (linear::Memory#1)
*/

#endif /* _twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

