/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
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
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L97=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */ Context_sub_2_distances_2;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L132=(BasicLocationFunctions_Pkg::sub_2_distances#3)/ */ Context_sub_2_distances_3;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L300=(BasicLocationFunctions_Pkg::add_2_Distances#12)/ */ Context_add_2_Distances_12;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* _L127=(BasicLocationFunctions_Pkg::sub_2_odoDistances#3)/ */ Context_sub_2_odoDistances_3;
  outC_recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L289=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead#1)/ */ Context_recalculate_BG_location_ahead_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L288=(BasicLocationFunctions_Pkg::sub_2_distances#4)/ */ Context_sub_2_distances_4;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L297=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */ Context_add_2_Distances_9;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* _L92=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */ Context_sub_2_odoDistances_2;
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L67=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#3)/ */ Context_positionedBGs_ids_equal_3;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* _L302=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */ Context_overlapOf_2_Locations_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L219=(BasicLocationFunctions_Pkg::add_2_Distances#6)/ */ Context_add_2_Distances_6;
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L220=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies)/ */ Context_calculateLocalBGInaccuracies;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L255=(BasicLocationFunctions_Pkg::add_2_Distances#7)/ */ Context_add_2_Distances_7;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L280=(BasicLocationFunctions_Pkg::add_2_Distances#8)/ */ Context_add_2_Distances_8;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* _L279=(BasicLocationFunctions_Pkg::sub_2_odoDistances#4)/ */ Context_sub_2_odoDistances_4;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* BGin_is_refBG/ */ BGin_is_refBG;
  kcg_bool /* recalculateSubsequentBGs/ */ recalculateSubsequentBGs;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* refLocation/ */ refLocation;
  positionedBG_T_TrainPosition_Types_Pck /* refBG/ */ refBG;
  positionedBG_T_TrainPosition_Types_Pck /* prevLinkedBG/ */ prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck /* prevUnlinkedBG/ */ prevUnlinkedBG;
  positionedBG_T_TrainPosition_Types_Pck /* relocatedBG/ */ relocatedBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BG_loc_inacc/ */ BG_loc_inacc;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* sumOfBestDistances/ */ sumOfBestDistances;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* d_prevLinkedBG_refBG/ */ d_prevLinkedBG_refBG;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L36/ */ _L36;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L59/ */ _L59;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L51/ */ _L51;
  kcg_bool /* _L61/ */ _L61;
  positionedBG_T_TrainPosition_Types_Pck /* _L71/ */ _L71;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L67/ */ _L67;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L64/ */ _L64;
  positionedBG_T_TrainPosition_Types_Pck /* _L75/ */ _L75;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  positionedBG_T_TrainPosition_Types_Pck /* _L78/ */ _L78;
  kcg_bool /* _L80/ */ _L80;
  positionedBG_T_TrainPosition_Types_Pck /* _L81/ */ _L81;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  positionedBG_T_TrainPosition_Types_Pck /* _L85/ */ _L85;
  positionedBG_T_TrainPosition_Types_Pck /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  passedBG_T_BG_Types_Pkg /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L90/ */ _L90;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L92/ */ _L92;
  passedBG_T_BG_Types_Pkg /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L97/ */ _L97;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L98/ */ _L98;
  positionedBG_T_TrainPosition_Types_Pck /* _L99/ */ _L99;
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
  positionedBG_T_TrainPosition_Types_Pck /* _L134/ */ _L134;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L133/ */ _L133;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L132/ */ _L132;
  kcg_bool /* _L131/ */ _L131;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L130/ */ _L130;
  kcg_bool /* _L129/ */ _L129;
  passedBG_T_BG_Types_Pkg /* _L128/ */ _L128;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L127/ */ _L127;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L126/ */ _L126;
  kcg_bool /* _L125/ */ _L125;
  passedBG_T_BG_Types_Pkg /* _L124/ */ _L124;
  kcg_bool /* _L123/ */ _L123;
  positionedBG_T_TrainPosition_Types_Pck /* _L122/ */ _L122;
  positionedBG_T_TrainPosition_Types_Pck /* _L121/ */ _L121;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L119/ */ _L119;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L118/ */ _L118;
  positionedBG_T_TrainPosition_Types_Pck /* _L117/ */ _L117;
  kcg_bool /* _L116/ */ _L116;
  positionedBG_T_TrainPosition_Types_Pck /* _L115/ */ _L115;
  kcg_bool /* _L114/ */ _L114;
  positionedBG_T_TrainPosition_Types_Pck /* _L148/ */ _L148;
  positionedBG_T_TrainPosition_Types_Pck /* _L149/ */ _L149;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L152/ */ _L152;
  positionedBG_T_TrainPosition_Types_Pck /* _L154/ */ _L154;
  positionedBG_T_TrainPosition_Types_Pck /* _L155/ */ _L155;
  positionedBG_T_TrainPosition_Types_Pck /* _L156/ */ _L156;
  kcg_bool /* _L157/ */ _L157;
  kcg_bool /* _L158/ */ _L158;
  kcg_bool /* _L159/ */ _L159;
  kcg_bool /* _L160/ */ _L160;
  kcg_bool /* _L161/ */ _L161;
  positionedBG_T_TrainPosition_Types_Pck /* _L162/ */ _L162;
  positionedBG_T_TrainPosition_Types_Pck /* _L163/ */ _L163;
  kcg_bool /* _L164/ */ _L164;
  kcg_bool /* _L165/ */ _L165;
  positionedBG_T_TrainPosition_Types_Pck /* _L167/ */ _L167;
  positionedBG_T_TrainPosition_Types_Pck /* _L168/ */ _L168;
  kcg_bool /* _L169/ */ _L169;
  positionedBG_T_TrainPosition_Types_Pck /* _L172/ */ _L172;
  kcg_bool /* _L173/ */ _L173;
  positionedBG_T_TrainPosition_Types_Pck /* _L174/ */ _L174;
  positionedBG_T_TrainPosition_Types_Pck /* _L175/ */ _L175;
  positionedBG_T_TrainPosition_Types_Pck /* _L62/ */ _L62;
  positionedBG_T_TrainPosition_Types_Pck /* _L74/ */ _L74;
  positionedBG_T_TrainPosition_Types_Pck /* _L147/ */ _L147;
  positionedBG_T_TrainPosition_Types_Pck /* _L188/ */ _L188;
  trainProperties_T_TrainPosition_Types_Pck /* _L197/ */ _L197;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L216/ */ _L216;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L217/ */ _L217;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L218/ */ _L218;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L219/ */ _L219;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L220/ */ _L220;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L229/ */ _L229;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L230/ */ _L230;
  kcg_bool /* _L236/ */ _L236;
  Q_LINK /* _L240/ */ _L240;
  kcg_bool /* _L239/ */ _L239;
  Q_LINK /* _L238/ */ _L238;
  positionedBG_T_TrainPosition_Types_Pck /* _L237/ */ _L237;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L243/ */ _L243;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L244/ */ _L244;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L253/ */ _L253;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L254/ */ _L254;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L255/ */ _L255;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L256/ */ _L256;
  kcg_bool /* _L257/ */ _L257;
  kcg_bool /* _L258/ */ _L258;
  kcg_bool /* _L259/ */ _L259;
  kcg_bool /* _L260/ */ _L260;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L265/ */ _L265;
  positionedBG_T_TrainPosition_Types_Pck /* _L267/ */ _L267;
  kcg_bool /* _L268/ */ _L268;
  passedBG_T_BG_Types_Pkg /* _L269/ */ _L269;
  kcg_bool /* _L270/ */ _L270;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L271/ */ _L271;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L273/ */ _L273;
  positionedBG_T_TrainPosition_Types_Pck /* _L274/ */ _L274;
  passedBG_T_BG_Types_Pkg /* _L275/ */ _L275;
  kcg_bool /* _L276/ */ _L276;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L277/ */ _L277;
  kcg_bool /* _L278/ */ _L278;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L279/ */ _L279;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L280/ */ _L280;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L281/ */ _L281;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L282/ */ _L282;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L285/ */ _L285;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L286/ */ _L286;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L287/ */ _L287;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L288/ */ _L288;
  positionedBG_T_TrainPosition_Types_Pck /* _L289/ */ _L289;
  positionedBG_T_TrainPosition_Types_Pck /* _L290/ */ _L290;
  positionedBG_T_TrainPosition_Types_Pck /* _L291/ */ _L291;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L292/ */ _L292;
  trainProperties_T_TrainPosition_Types_Pck /* _L293/ */ _L293;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L294/ */ _L294;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L296/ */ _L296;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L297/ */ _L297;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L300/ */ _L300;
  positionedBG_T_TrainPosition_Types_Pck /* _L301/ */ _L301;
  kcg_bool /* _L303/ */ _L303;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L302/ */ _L302;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L304/ */ _L304;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L305/ */ _L305;
} outC_recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr/ */
extern void recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* refBGs_in/ */
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void recalculate_BG_locations_ahead_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void recalculate_BG_locations_ahead_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

