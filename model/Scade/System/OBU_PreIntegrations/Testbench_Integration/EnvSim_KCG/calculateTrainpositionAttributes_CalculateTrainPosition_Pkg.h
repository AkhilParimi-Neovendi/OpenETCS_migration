/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_
#define _calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"
#include "frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* trainPosition/ */ trainPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L260=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG)/ */ Context_nidC_nidBG_2_NIDLRBG;
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg /* _L306=(CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG#1)/ */ Context_frontendToLRBG_1;
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg /* _L347=(CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG#1)/ */ Context_trainMoveDir_vs_refBG_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L366=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L243=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */ Context_add_2_Distances_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* _L205/ */ _L205;
  trainPositionInfo_T_TrainPosition_Types_Pck /* _L218/ */ _L218;
  kcg_bool /* _L219/ */ _L219;
  kcg_bool /* _L223/ */ _L223;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L225/ */ _L225;
  trainProperties_T_TrainPosition_Types_Pck /* _L237/ */ _L237;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L242/ */ _L242;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L243/ */ _L243;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L249/ */ _L249;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L248/ */ _L248;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L247/ */ _L247;
  NID_LRBG /* _L260/ */ _L260;
  kcg_bool /* _L261/ */ _L261;
  NID_C /* _L262/ */ _L262;
  NID_BG /* _L263/ */ _L263;
  kcg_bool /* _L266/ */ _L266;
  kcg_bool /* _L267/ */ _L267;
  NID_LRBG /* _L268/ */ _L268;
  kcg_bool /* _L269/ */ _L269;
  Q_DIRLRBG /* _L274/ */ _L274;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L301/ */ _L301;
  odometry_T_Obu_BasicTypes_Pkg /* _L305/ */ _L305;
  Q_DLRBG /* _L306/ */ _L306;
  trainProperties_T_TrainPosition_Types_Pck /* _L307/ */ _L307;
  kcg_bool /* _L310/ */ _L310;
  Q_DIRLRBG /* _L311/ */ _L311;
  Q_DIRLRBG /* _L312/ */ _L312;
  kcg_int32 /* _L315/ */ _L315;
  kcg_int32 /* _L316/ */ _L316;
  positionedBG_T_TrainPosition_Types_Pck /* _L320/ */ _L320;
  trainPositionInfo_T_TrainPosition_Types_Pck /* _L343/ */ _L343;
  kcg_bool /* _L344/ */ _L344;
  positionedBG_T_TrainPosition_Types_Pck /* _L346/ */ _L346;
  Q_DIRTRAIN /* _L347/ */ _L347;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L365/ */ _L365;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L366/ */ _L366;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L367/ */ _L367;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L368/ */ _L368;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L369/ */ _L369;
  kcg_int32 /* _L370/ */ _L370;
  kcg_int32 /* _L371/ */ _L371;
} outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes/ */
extern void calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
  /* trainPositionInfo/ */
  trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateTrainpositionAttributes_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateTrainpositionAttributes_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

