/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DLRBG /* nominalOrReverseToLRBG/ */ nominalOrReverseToLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L10=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L6=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */ Context_add_2_Distances_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DLRBG /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  Q_DLRBG /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  Q_DLRBG /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  Q_DLRBG /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  Q_DLRBG /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  Q_DLRBG /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  Q_DLRBG /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* estimated_d_LRBGToFrontend/ */ estimated_d_LRBGToFrontend;
  Q_DIRLRBG /* trainOrientationToLRBG/ */ trainOrientationToLRBG;
  trainPositionInfo_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  trainProperties_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  passedBG_T_BG_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  Q_DIRLRBG /* _L14/ */ _L14;
  Q_DIRLRBG /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  Q_DIRLRBG /* _L19/ */ _L19;
} outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG/ */
extern void frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* LRBG/ */
  positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* trainPositionInfo/ */
  trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void frontendToLRBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void frontendToLRBG_init_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

