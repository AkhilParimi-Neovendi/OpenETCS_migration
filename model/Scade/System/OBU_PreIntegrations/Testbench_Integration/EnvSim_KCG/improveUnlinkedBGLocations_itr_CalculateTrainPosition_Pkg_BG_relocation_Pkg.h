/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  positionedBG_T_TrainPosition_Types_Pck /* BG_out/ */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L15=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation#1)/ */ Context_improveUnlinkedBGLocation_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  positionedBG_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  positionedBG_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
  positionedBG_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
} outC_improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr/ */
extern void improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BG_index_in/ */
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BG_index_in,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void improveUnlinkedBGLocations_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void improveUnlinkedBGLocations_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

