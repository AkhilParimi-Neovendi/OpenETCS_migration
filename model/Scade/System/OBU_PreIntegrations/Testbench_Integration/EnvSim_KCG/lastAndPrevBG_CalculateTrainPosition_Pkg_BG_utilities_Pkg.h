/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* prvBG/ */ prvBG;
  positionedBG_T_TrainPosition_Types_Pck /* lastBG/ */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* BG/ */ mem_BG;
  kcg_bool init;
  positionedBG_T_TrainPosition_Types_Pck /* @1/_L8/ */ _L8_Memory_1_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/_L8/ */ _L8_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* prvBG_loc/ */ prvBG_loc;
  positionedBG_T_TrainPosition_Types_Pck /* storedBG_loc/ */ storedBG_loc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */ Context_indexOfBG_by_id_1;
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */ Context_positionedBGs_ids_equal_1;
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L19=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#2)/ */ Context_positionedBGs_ids_equal_2;
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
  positionedBG_T_TrainPosition_Types_Pck /* @2/Out/ */ Out_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/InitVal/ */ InitVal_Memory_2_struct;
  kcg_bool /* @2/MemCond/ */ MemCond_Memory_2_struct;
  kcg_bool /* @2/Reset/ */ Reset_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/M_Input/ */ M_Input_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/_L9/ */ _L9_Memory_2_struct;
  kcg_bool /* @2/_L1/ */ _L1_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/_L2/ */ _L2_Memory_2_struct;
  kcg_bool /* @2/_L3/ */ _L3_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/_L5/ */ _L5_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/_L6/ */ _L6_Memory_2_struct;
  positionedBG_T_TrainPosition_Types_Pck /* @2/_L7/ */ _L7_Memory_2_struct;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  positionedBG_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_bool /* _L2/ */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* _L10/ */ _L10;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  positionedBG_T_TrainPosition_Types_Pck /* _L14/ */ _L14;
  positionedBG_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  positionedBG_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  positionedBG_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  kcg_int32 /* _L21/ */ _L21;
  positionedBGs_T_TrainPosition_Types_Pck /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  positionedBG_T_TrainPosition_Types_Pck /* _L26/ */ _L26;
  positionedBG_T_TrainPosition_Types_Pck /* _L27/ */ _L27;
  positionedBG_T_TrainPosition_Types_Pck /* _L29/ */ _L29;
  Q_LINK /* _L37/ */ _L37;
  Q_LINK /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  Q_LINK /* _L34/ */ _L34;
  Q_LINK /* _L33/ */ _L33;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  positionedBG_T_TrainPosition_Types_Pck /* _L41/ */ _L41;
} outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG/ */
extern void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* linked/ */
  kcg_bool linked,
  /* reset/ */
  kcg_bool reset,
  /* enable/ */
  kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG/
  @1: (linear::Memory#1)
  @2: (linear::Memory#2)
*/

#endif /* _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

