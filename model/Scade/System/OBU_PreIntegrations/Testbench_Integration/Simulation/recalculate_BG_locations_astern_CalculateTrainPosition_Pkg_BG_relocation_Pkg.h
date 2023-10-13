/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L3=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr#1)/ */ Context_recalculate_BG_locations_astern_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L3/ */ _L3;
  positionedBGs_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L7/ */ _L7;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L8/ */ _L8;
  positionedBGs_T_TrainPosition_Types_Pck /* _L9/ */ _L9;
  positionedBGs_T_TrainPosition_Types_Pck /* _L10/ */ _L10;
  trainProperties_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  _74_array /* _L12/ */ _L12;
} outC_recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern/ */
extern void recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* referenceBG/ */
  positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void recalculate_BG_locations_astern_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void recalculate_BG_locations_astern_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

