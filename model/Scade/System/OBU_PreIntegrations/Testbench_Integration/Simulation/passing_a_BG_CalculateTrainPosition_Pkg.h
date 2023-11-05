/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _passing_a_BG_CalculateTrainPosition_Pkg_H_
#define _passing_a_BG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* passedPositionedBG/ */ passedPositionedBG;
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  kcg_bool /* overrun/ */ overrun;
  kcg_bool /* foundNotWhereAnnounced/ */ foundNotWhereAnnounced;
  kcg_bool /* BGpassedInUnexpectedDirection/ */ BGpassedInUnexpectedDirection;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L30=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */ Context_trimSeqNoOnTrack_1;
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */ Context_mergeBGs_onTrack_1;
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack#2)/ */ Context_mergeBG_onTrack_2;
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg /* _L5=(CalculateTrainPosition_Pkg::passedBG_2_positionedBG#1)/ */ Context_passedBG_2_positionedBG_1;
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */ Context_indexOfPassedBG_by_id_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  passedBG_T_BG_Types_Pkg /* _L1/ */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
  positionedBG_T_TrainPosition_Types_Pck /* _L13/ */ _L13;
  kcg_bool /* _L15/ */ _L15;
  positionedBGs_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  positionedBGs_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* _L19/ */ _L19;
  _23_array /* _L20/ */ _L20;
  positionedBGs_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  positionedBGs_T_TrainPosition_Types_Pck /* _L24/ */ _L24;
  positionedBG_T_TrainPosition_Types_Pck /* _L25/ */ _L25;
  kcg_int32 /* _L26/ */ _L26;
  positionedBGs_T_TrainPosition_Types_Pck /* _L30/ */ _L30;
  trainProperties_T_TrainPosition_Types_Pck /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
} outC_passing_a_BG_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::passing_a_BG/ */
extern void passing_a_BG_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* previouslyPassedLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* passedBGSeqNo/ */
  kcg_int32 passedBGSeqNo,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void passing_a_BG_reset_CalculateTrainPosition_Pkg(
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void passing_a_BG_init_CalculateTrainPosition_Pkg(
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _passing_a_BG_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** passing_a_BG_CalculateTrainPosition_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

