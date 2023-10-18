/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_
#define _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  kcg_bool /* overrun/ */ overrun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L36=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack#1)/ */ Context_trimSeqNoOnTrack_1;
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L33=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack#1)/ */ Context_mergeBGs_onTrack_1;
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L23=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */ Context_positionLinkedBGs_1;
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L12=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */ Context_indexOfBG_by_id_1;
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */ Context_NIDLRBG_2_nidC_nidBG_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* lrbg/ */ lrbg;
  passedBG_T_BG_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  LinkedBGs_T_BG_Types_Pkg /* _L4/ */ _L4;
  LinkedBG_T_BG_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  NID_LRBG /* _L7/ */ _L7;
  NID_BG /* _L10/ */ _L10;
  NID_C /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_int64 /* _L12/ */ _L12;
  positionedBG_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
  positionedBG_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  positionedBG_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* _L19/ */ _L19;
  positionedBGs_T_TrainPosition_Types_Pck /* _L20/ */ _L20;
  positionedBG_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  positionedBG_T_TrainPosition_Types_Pck /* _L22/ */ _L22;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* _L23/ */ _L23;
  positionedBG_T_TrainPosition_Types_Pck /* _L24/ */ _L24;
  trainProperties_T_TrainPosition_Types_Pck /* _L25/ */ _L25;
  positionedBGs_T_TrainPosition_Types_Pck /* _L36/ */ _L36;
  positionedBG_T_TrainPosition_Types_Pck /* _L35/ */ _L35;
  positionedBGs_T_TrainPosition_Types_Pck /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  positionedBGs_T_TrainPosition_Types_Pck /* _L29/ */ _L29;
  _23_array /* _L26/ */ _L26;
  positionedBGs_T_TrainPosition_Types_Pck /* _L41/ */ _L41;
} outC_addAnnouncedBGs_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::addAnnouncedBGs/ */
extern void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void addAnnouncedBGs_reset_CalculateTrainPosition_Pkg(
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void addAnnouncedBGs_init_CalculateTrainPosition_Pkg(
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addAnnouncedBGs_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

