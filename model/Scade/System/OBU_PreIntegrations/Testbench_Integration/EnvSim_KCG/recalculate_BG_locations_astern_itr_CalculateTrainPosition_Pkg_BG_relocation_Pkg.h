/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* refBGs_out/ */ refBGs_out;
  positionedBG_T_TrainPosition_Types_Pck /* BG_out/ */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L150=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern#1)/ */ Context_recalculate_BG_location_astern_1;
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L67=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */ Context_positionedBGs_ids_equal_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L246=(BasicLocationFunctions_Pkg::sub_2_distances#3)/ */ Context_sub_2_distances_3;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* _L244=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */ Context_sub_2_odoDistances_2;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L199=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L224=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */ Context_sub_2_distances_2;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* _L221=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */ Context_sub_2_odoDistances_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* BGin_is_refBG/ */ BGin_is_refBG;
  kcg_bool /* recalculateSubsequentBGs/ */ recalculateSubsequentBGs;
  positionedBG_T_TrainPosition_Types_Pck /* refBG/ */ refBG;
  positionedBG_T_TrainPosition_Types_Pck /* prevLinkedBG/ */ prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck /* prevUnlinkedBG/ */ prevUnlinkedBG;
  positionedBG_T_TrainPosition_Types_Pck /* relocatedBG/ */ relocatedBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* sumOfBestDistances/ */ sumOfBestDistances;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L36/ */ _L36;
  positionedBG_T_TrainPosition_Types_Pck /* _L71/ */ _L71;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L67/ */ _L67;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L64/ */ _L64;
  positionedBG_T_TrainPosition_Types_Pck /* _L74/ */ _L74;
  kcg_bool /* _L77/ */ _L77;
  positionedBG_T_TrainPosition_Types_Pck /* _L78/ */ _L78;
  kcg_bool /* _L80/ */ _L80;
  positionedBG_T_TrainPosition_Types_Pck /* _L81/ */ _L81;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  positionedBG_T_TrainPosition_Types_Pck /* _L85/ */ _L85;
  Q_LINK /* _L105/ */ _L105;
  kcg_bool /* _L106/ */ _L106;
  Q_LINK /* _L107/ */ _L107;
  Q_LINK /* _L108/ */ _L108;
  kcg_bool /* _L109/ */ _L109;
  Q_LINK /* _L110/ */ _L110;
  positionedBG_T_TrainPosition_Types_Pck /* _L111/ */ _L111;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L113/ */ _L113;
  positionedBG_T_TrainPosition_Types_Pck /* _L112/ */ _L112;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L144/ */ _L144;
  positionedBG_T_TrainPosition_Types_Pck /* _L143/ */ _L143;
  positionedBG_T_TrainPosition_Types_Pck /* _L142/ */ _L142;
  Q_LINK /* _L141/ */ _L141;
  kcg_bool /* _L140/ */ _L140;
  Q_LINK /* _L139/ */ _L139;
  Q_LINK /* _L138/ */ _L138;
  kcg_bool /* _L137/ */ _L137;
  Q_LINK /* _L136/ */ _L136;
  positionedBG_T_TrainPosition_Types_Pck /* _L121/ */ _L121;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L119/ */ _L119;
  positionedBG_T_TrainPosition_Types_Pck /* _L117/ */ _L117;
  kcg_bool /* _L116/ */ _L116;
  positionedBG_T_TrainPosition_Types_Pck /* _L115/ */ _L115;
  kcg_bool /* _L114/ */ _L114;
  positionedBG_T_TrainPosition_Types_Pck /* _L147/ */ _L147;
  positionedBG_T_TrainPosition_Types_Pck /* _L148/ */ _L148;
  positionedBG_T_TrainPosition_Types_Pck /* _L149/ */ _L149;
  positionedBG_T_TrainPosition_Types_Pck /* _L150/ */ _L150;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L152/ */ _L152;
  positionedBG_T_TrainPosition_Types_Pck /* _L153/ */ _L153;
  positionedBG_T_TrainPosition_Types_Pck /* _L154/ */ _L154;
  positionedBG_T_TrainPosition_Types_Pck /* _L155/ */ _L155;
  positionedBG_T_TrainPosition_Types_Pck /* _L156/ */ _L156;
  kcg_bool /* _L157/ */ _L157;
  kcg_bool /* _L158/ */ _L158;
  kcg_bool /* _L159/ */ _L159;
  kcg_bool /* _L160/ */ _L160;
  kcg_bool /* _L161/ */ _L161;
  positionedBG_T_TrainPosition_Types_Pck /* _L162/ */ _L162;
  positionedBG_T_TrainPosition_Types_Pck /* _L172/ */ _L172;
  kcg_bool /* _L173/ */ _L173;
  positionedBG_T_TrainPosition_Types_Pck /* _L174/ */ _L174;
  positionedBG_T_TrainPosition_Types_Pck /* _L175/ */ _L175;
  positionedBG_T_TrainPosition_Types_Pck /* _L181/ */ _L181;
  kcg_bool /* _L182/ */ _L182;
  positionedBG_T_TrainPosition_Types_Pck /* _L183/ */ _L183;
  kcg_bool /* _L184/ */ _L184;
  Q_LINK /* _L187/ */ _L187;
  kcg_bool /* _L186/ */ _L186;
  Q_LINK /* _L185/ */ _L185;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L190/ */ _L190;
  kcg_bool /* _L193/ */ _L193;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L194/ */ _L194;
  kcg_bool /* _L195/ */ _L195;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L196/ */ _L196;
  positionedBG_T_TrainPosition_Types_Pck /* _L197/ */ _L197;
  positionedBG_T_TrainPosition_Types_Pck /* _L198/ */ _L198;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L199/ */ _L199;
  kcg_bool /* _L203/ */ _L203;
  kcg_bool /* _L204/ */ _L204;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L205/ */ _L205;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L206/ */ _L206;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L207/ */ _L207;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L209/ */ _L209;
  positionedBG_T_TrainPosition_Types_Pck /* _L208/ */ _L208;
  kcg_bool /* _L210/ */ _L210;
  kcg_bool /* _L213/ */ _L213;
  passedBG_T_BG_Types_Pkg /* _L214/ */ _L214;
  kcg_bool /* _L215/ */ _L215;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L216/ */ _L216;
  positionedBG_T_TrainPosition_Types_Pck /* _L217/ */ _L217;
  passedBG_T_BG_Types_Pkg /* _L218/ */ _L218;
  kcg_bool /* _L220/ */ _L220;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L219/ */ _L219;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L221/ */ _L221;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L224/ */ _L224;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L223/ */ _L223;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L222/ */ _L222;
  positionedBG_T_TrainPosition_Types_Pck /* _L226/ */ _L226;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L225/ */ _L225;
  Q_LINK /* _L229/ */ _L229;
  Q_LINK /* _L228/ */ _L228;
  kcg_bool /* _L227/ */ _L227;
  positionedBG_T_TrainPosition_Types_Pck /* _L230/ */ _L230;
  kcg_bool /* _L231/ */ _L231;
  kcg_bool /* _L232/ */ _L232;
  kcg_bool /* _L233/ */ _L233;
  kcg_bool /* _L235/ */ _L235;
  passedBG_T_BG_Types_Pkg /* _L234/ */ _L234;
  kcg_bool /* _L236/ */ _L236;
  kcg_bool /* _L242/ */ _L242;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L241/ */ _L241;
  passedBG_T_BG_Types_Pkg /* _L240/ */ _L240;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L243/ */ _L243;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L244/ */ _L244;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L245/ */ _L245;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L246/ */ _L246;
  positionedBG_T_TrainPosition_Types_Pck /* _L247/ */ _L247;
  positionedBG_T_TrainPosition_Types_Pck /* _L248/ */ _L248;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L249/ */ _L249;
  trainProperties_T_TrainPosition_Types_Pck /* _L250/ */ _L250;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L251/ */ _L251;
} outC_recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr/ */
extern void recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* refBGs_in/ */
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void recalculate_BG_locations_astern_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void recalculate_BG_locations_astern_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

