/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "_232_recalculate_BG_locat_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "_230_recalculate_BG_locat_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L38=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations#1)/ */ Context_improveUnlinkedBGLocations_1;
  outC__232_recalculate_BG_locat_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L34=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern#1)/ */ Context_recalculate_BG_locations_astern_1;
  outC__230_recalculate_BG_locat_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L33=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead#1)/ */ _1_Context_recalculate_BG_locations_ahead_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* _L33/ */ _L33;
  positionedBGs_T_TrainPosition_Types_Pck /* _L34/ */ _L34;
  positionedBGs_T_TrainPosition_Types_Pck /* _L38/ */ _L38;
  trainProperties_T_TrainPosition_Types_Pck /* _L39/ */ _L39;
} outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations/ */
extern void improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* referenceBG/ */
  positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void improve_BG_locations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void improve_BG_locations_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

