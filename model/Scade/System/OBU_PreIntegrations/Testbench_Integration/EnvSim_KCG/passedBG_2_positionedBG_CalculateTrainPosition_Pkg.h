/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_
#define _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* passedPositionedBG/ */ passedPositionedBG;
  kcg_bool /* foundNotWhereAnnounced/ */ foundNotWhereAnnounced;
  kcg_bool /* BGpassedInUnexpectedDirection/ */ BGpassedInUnexpectedDirection;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* linkedBGs/ */ linkedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L265=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */ Context_positionLinkedBGs_1;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L26=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#4)/ */ Context_overlapOf_2_Locations_4;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L22=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */ Context_add_2_Distances_9;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L24=(BasicLocationFunctions_Pkg::sub_2_odoDistances#8)/ */ Context_sub_2_odoDistances_8;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L14=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#5)/ */ Context_overlapOf_2_Locations_5;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L8=(BasicLocationFunctions_Pkg::add_2_Distances#13)/ */ Context_add_2_Distances_13;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#5)/ */ Context_add_odo_2_Location_5;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L15=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#6)/ */ Context_overlapOf_2_Locations_6;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L9=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#3)/ */ Context_overlapOf_2_Locations_3;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L1=(BasicLocationFunctions_Pkg::add_2_Distances#14)/ */ Context_add_2_Distances_14;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L2=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */ Context_add_odo_2_Location_6;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed:else: */ else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed:else:else: */ else_clock_else_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed: */ ifAnnouncedOrABGWasPreviouslyPassed_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L26/ */ _L26_then_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L27/ */ _L27_then_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L20/ */ _L20_then_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L21/ */ _L21_then_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L22/ */ _L22_then_ifAnnouncedOrABGWasPreviouslyPassed;
  passedBG_T_BG_Types_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L23/ */ _L23_then_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L24/ */ _L24_then_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L25/ */ _L25_then_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:then:_L1/ */ _L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:then:_L2/ */ _L2_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L16/ */ _L16_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L15/ */ _L15_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L1/ */ _L1_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L2/ */ _L2_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L3/ */ _L3_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L4/ */ _L4_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L5/ */ _L5_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L6/ */ _L6_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L7/ */ _L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L8/ */ _L8_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L10/ */ _L10_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L9/ */ _L9_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L11/ */ _L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L12/ */ _L12_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  passedBG_T_BG_Types_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L13/ */ _L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L14/ */ _L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L13/ */ _L13_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L12/ */ _L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L11/ */ _L11_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  passedBG_T_BG_Types_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L10/ */ _L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L9/ */ _L9_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L8/ */ _L8_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L7/ */ _L7_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L6/ */ _L6_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L14/ */ _L14_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L15/ */ _L15_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* BG_wasAnnounced/ */ BG_wasAnnounced;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* location/ */ location;
  positionedBG_T_TrainPosition_Types_Pck /* passedPositionedBG_loc/ */ passedPositionedBG_loc;
  kcg_bool /* foundNotWhereAnnounced_loc/ */ foundNotWhereAnnounced_loc;
  kcg_bool /* BGpassedInUnexpectedDirection_loc/ */ BGpassedInUnexpectedDirection_loc;
  positionedBG_T_TrainPosition_Types_Pck /* _L14/ */ _L14;
  passedBG_T_BG_Types_Pkg /* _L15/ */ _L15;
  passedBG_T_BG_Types_Pkg /* _L16/ */ _L16;
  NID_C /* _L37/ */ _L37;
  NID_BG /* _L38/ */ _L38;
  Q_LINK /* _L39/ */ _L39;
  positionedBG_T_TrainPosition_Types_Pck /* _L40/ */ _L40;
  positionedBG_T_TrainPosition_Types_Pck /* _L41/ */ _L41;
  kcg_bool /* _L56/ */ _L56;
  NID_BG /* _L57/ */ _L57;
  passedBG_T_BG_Types_Pkg /* _L58/ */ _L58;
  NID_BG /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  NID_C /* _L61/ */ _L61;
  NID_C /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  Q_LINK /* _L64/ */ _L64;
  Q_LINK /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L181/ */ _L181;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L182/ */ _L182;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L183/ */ _L183;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L184/ */ _L184;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L185/ */ _L185;
  positionedBG_T_TrainPosition_Types_Pck /* _L262/ */ _L262;
  passedBG_T_BG_Types_Pkg /* _L264/ */ _L264;
  LinkedBGs_T_BG_Types_Pkg /* _L263/ */ _L263;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* _L265/ */ _L265;
  kcg_int64 /* _L281/ */ _L281;
  trainProperties_T_TrainPosition_Types_Pck /* _L282/ */ _L282;
  passedBG_T_BG_Types_Pkg /* _L283/ */ _L283;
  kcg_bool /* _L284/ */ _L284;
  passedBG_T_BG_Types_Pkg /* _L285/ */ _L285;
  BG_Header_T_BG_Types_Pkg /* _L295/ */ _L295;
  kcg_bool /* _L296/ */ _L296;
  kcg_bool /* _L297/ */ _L297;
  kcg_bool /* _L301/ */ _L301;
  kcg_bool /* _L302/ */ _L302;
  Q_LINK /* _L303/ */ _L303;
  kcg_bool /* _L305/ */ _L305;
  passedBG_T_BG_Types_Pkg /* _L306/ */ _L306;
  positionedBG_T_TrainPosition_Types_Pck /* _L307/ */ _L307;
  Q_DIRLRBG /* _L308/ */ _L308;
  Q_LINKORIENTATION /* _L309/ */ _L309;
  Q_LINKORIENTATION /* _L310/ */ _L310;
  Q_LINKORIENTATION /* _L311/ */ _L311;
  Q_DIRLRBG /* _L312/ */ _L312;
  Q_DIRLRBG /* _L313/ */ _L313;
  kcg_bool /* _L315/ */ _L315;
  kcg_bool /* _L316/ */ _L316;
  kcg_bool /* _L317/ */ _L317;
  kcg_bool /* _L318/ */ _L318;
  kcg_bool /* _L319/ */ _L319;
  kcg_bool /* _L320/ */ _L320;
  kcg_bool /* _L321/ */ _L321;
  kcg_bool /* _L322/ */ _L322;
  kcg_bool /* _L325/ */ _L325;
  kcg_bool /* _L326/ */ _L326;
  kcg_bool /* _L327/ */ _L327;
} outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG/ */
extern void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* passedBG_asAnnounced/ */
  positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* previouslyPassedLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* passedBGSeqNo/ */
  kcg_int64 passedBGSeqNo,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void passedBG_2_positionedBG_reset_CalculateTrainPosition_Pkg(
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void passedBG_2_positionedBG_init_CalculateTrainPosition_Pkg(
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

