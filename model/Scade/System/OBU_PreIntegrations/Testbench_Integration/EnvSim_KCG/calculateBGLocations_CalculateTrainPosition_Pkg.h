/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _calculateBGLocations_CalculateTrainPosition_Pkg_H_
#define _calculateBGLocations_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs/ */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* errors/ */ errors;
  positionedBG_T_TrainPosition_Types_Pck /* passedPositionedBG/ */ passedPositionedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L364=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */ Context_indexOfBG_by_id_1;
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L347=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations#1)/ */ Context_improve_BG_locations_1;
  outC_passing_a_BG_CalculateTrainPosition_Pkg /* _L87=(CalculateTrainPosition_Pkg::passing_a_BG#1)/ */ Context_passing_a_BG_1;
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg /* _L298=(CalculateTrainPosition_Pkg::genPassedBG_SeqNo#2)/ */ Context_genPassedBG_SeqNo_2;
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg /* _L137=(CalculateTrainPosition_Pkg::prevPassedLinkedBG#1)/ */ Context_prevPassedLinkedBG_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* outOfMemSpace/ */ outOfMemSpace;
  kcg_bool /* passedBG_foundNotWhereExpected/ */ passedBG_foundNotWhereExpected;
  positionedBG_T_TrainPosition_Types_Pck /* passedPositionedBG_loc/ */ passedPositionedBG_loc;
  kcg_bool /* BGpassedInUnexpectedDirection/ */ BGpassedInUnexpectedDirection;
  passedBG_T_BG_Types_Pkg /* _L92/ */ _L92;
  positionedBG_T_TrainPosition_Types_Pck /* _L87/ */ _L87;
  positionedBGs_T_TrainPosition_Types_Pck /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  positionedBG_T_TrainPosition_Types_Pck /* _L137/ */ _L137;
  kcg_bool /* _L156/ */ _L156;
  kcg_bool /* _L157/ */ _L157;
  positionErrors_T_TrainPosition_Types_Pck /* _L225/ */ _L225;
  passedBG_T_BG_Types_Pkg /* _L301/ */ _L301;
  kcg_int32 /* _L298/ */ _L298;
  positionedBGs_T_TrainPosition_Types_Pck /* _L324/ */ _L324;
  kcg_bool /* _L346/ */ _L346;
  positionedBGs_T_TrainPosition_Types_Pck /* _L347/ */ _L347;
  kcg_bool /* _L349/ */ _L349;
  kcg_bool /* _L351/ */ _L351;
  positionedBGs_T_TrainPosition_Types_Pck /* _L352/ */ _L352;
  positionedBGs_T_TrainPosition_Types_Pck /* _L353/ */ _L353;
  kcg_bool /* _L299/ */ _L299;
  kcg_bool /* _L354/ */ _L354;
  trainProperties_T_TrainPosition_Types_Pck /* _L355/ */ _L355;
  trainProperties_T_TrainPosition_Types_Pck /* _L356/ */ _L356;
  Q_LINK /* _L359/ */ _L359;
  kcg_bool /* _L358/ */ _L358;
  Q_LINK /* _L357/ */ _L357;
  positionedBGs_T_TrainPosition_Types_Pck /* _L360/ */ _L360;
  positionedBGs_T_TrainPosition_Types_Pck /* _L361/ */ _L361;
  kcg_bool /* _L362/ */ _L362;
  kcg_bool /* _L366/ */ _L366;
  kcg_bool /* _L365/ */ _L365;
  kcg_int32 /* _L364/ */ _L364;
  positionedBG_T_TrainPosition_Types_Pck /* _L367/ */ _L367;
  positionedBG_T_TrainPosition_Types_Pck /* _L369/ */ _L369;
  positionedBG_T_TrainPosition_Types_Pck /* _L372/ */ _L372;
  positionedBG_T_TrainPosition_Types_Pck /* _L373/ */ _L373;
  kcg_bool /* _L374/ */ _L374;
  kcg_bool /* _L376/ */ _L376;
  kcg_bool /* _L377/ */ _L377;
} outC_calculateBGLocations_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateBGLocations/ */
extern void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* lastBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* reset/ */
  kcg_bool reset,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateBGLocations_init_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calculateBGLocations_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateBGLocations_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

