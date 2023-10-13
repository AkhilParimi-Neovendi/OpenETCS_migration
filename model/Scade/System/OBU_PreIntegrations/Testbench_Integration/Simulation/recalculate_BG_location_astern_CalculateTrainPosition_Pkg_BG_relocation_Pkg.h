/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* BG_out/ */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* _L211=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */ Context_overlapOf_2_Locations_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L200=(BasicLocationFunctions_Pkg::sub_2_distances#3)/ */ Context_sub_2_distances_3;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L199=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */ Context_add_2_Distances_3;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* _L196=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */ Context_sub_2_odoDistances_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L181=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L183=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies#1)/ */ Context_calculateLocalBGInaccuracies_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L180=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */ Context_add_2_Distances_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L162/ */ _L162;
  positionedBG_T_TrainPosition_Types_Pck /* _L164/ */ _L164;
  kcg_bool /* _L165/ */ _L165;
  kcg_bool /* _L166/ */ _L166;
  kcg_bool /* _L168/ */ _L168;
  positionedBG_T_TrainPosition_Types_Pck /* _L171/ */ _L171;
  positionedBG_T_TrainPosition_Types_Pck /* _L172/ */ _L172;
  Q_LINK /* _L176/ */ _L176;
  Q_LINK /* _L175/ */ _L175;
  kcg_bool /* _L174/ */ _L174;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L177/ */ _L177;
  positionedBG_T_TrainPosition_Types_Pck /* _L178/ */ _L178;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L179/ */ _L179;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L180/ */ _L180;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L181/ */ _L181;
  kcg_bool /* _L182/ */ _L182;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L183/ */ _L183;
  trainProperties_T_TrainPosition_Types_Pck /* _L184/ */ _L184;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L185/ */ _L185;
  positionedBG_T_TrainPosition_Types_Pck /* _L186/ */ _L186;
  positionedBG_T_TrainPosition_Types_Pck /* _L187/ */ _L187;
  passedBG_T_BG_Types_Pkg /* _L188/ */ _L188;
  kcg_bool /* _L189/ */ _L189;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L190/ */ _L190;
  positionedBG_T_TrainPosition_Types_Pck /* _L191/ */ _L191;
  passedBG_T_BG_Types_Pkg /* _L194/ */ _L194;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L193/ */ _L193;
  kcg_bool /* _L192/ */ _L192;
  kcg_bool /* _L195/ */ _L195;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L196/ */ _L196;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L197/ */ _L197;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L198/ */ _L198;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L199/ */ _L199;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L200/ */ _L200;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L203/ */ _L203;
  positionedBG_T_TrainPosition_Types_Pck /* _L204/ */ _L204;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L205/ */ _L205;
  kcg_bool /* _L208/ */ _L208;
  kcg_bool /* _L210/ */ _L210;
  kcg_bool /* _L212/ */ _L212;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L211/ */ _L211;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L213/ */ _L213;
  kcg_bool /* _L214/ */ _L214;
} outC_recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern/ */
extern void recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* prevLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* refBG/ */
  positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* sumOfBestDistances/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void recalculate_BG_location_astern_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void recalculate_BG_location_astern_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

