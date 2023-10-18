/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _calculateTrainPosition_CalculateTrainPosition_Pkg_H_
#define _calculateTrainPosition_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"
#include "linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"
#include "calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* trainPosition/ */ trainPosition;
  positionedBGs_T_TrainPosition_Types_Pck /* BGs/ */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* errors/ */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_loc/ */ BGs_loc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg /* _L200=(CalculateTrainPosition_Pkg::calculateTrainpositionAttributes#1)/ */ Context_calculateTrainpositionAttributes_1;
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg /* _L334=(CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed#1)/ */ Context_twoConsecutiveLinkedBGs_missed_1;
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg /* _L322=(CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed#2)/ */ Context_linkedBG_missed_2;
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg /* trainPositionInfo=(CalculateTrainPosition_Pkg::calculateTrainPositionInfo#1)/ */ Context_calculateTrainPositionInfo_1;
  outC_delDispensableBGs_CalculateTrainPosition_Pkg /* if_BGpassed_or_onlyAnnounced:then:_L22=(CalculateTrainPosition_Pkg::delDispensableBGs#2)/ */ Context_delDispensableBGs_2;
  outC_calculateBGLocations_CalculateTrainPosition_Pkg /* if_BGpassed_or_onlyAnnounced:then:_L10=(CalculateTrainPosition_Pkg::calculateBGLocations#6)/ */ Context_calculateBGLocations_6;
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg /* if_BGpassed_or_onlyAnnounced:else:then:_L14=(CalculateTrainPosition_Pkg::addAnnouncedBGs#1)/ */ Context_addAnnouncedBGs_1;
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg /* _L306=(CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG#1)/ */ Context_msg_2_passedBG_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* if_BGpassed_or_onlyAnnounced:else: */ else_clock_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* if_BGpassed_or_onlyAnnounced: */ if_BGpassed_or_onlyAnnounced_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  passedBG_T_BG_Types_Pkg /* if_BGpassed_or_onlyAnnounced:then:_L24/ */ _L24_then_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* if_BGpassed_or_onlyAnnounced:then:_L23/ */ _L23_then_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L22/ */ _L22_then_if_BGpassed_or_onlyAnnounced;
  trainProperties_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L21/ */ _L21_then_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L9/ */ _L9_then_if_BGpassed_or_onlyAnnounced;
  positionedBG_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L12/ */ _L12_then_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L11/ */ _L11_then_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L10/ */ _L10_then_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L14/ */ _L14_then_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* if_BGpassed_or_onlyAnnounced:then:_L16/ */ _L16_then_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:then:_L19/ */ _L19_then_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:else:else:_L4/ */ _L4_else_else_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:else:else:_L6/ */ _L6_else_else_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:else:then:_L2/ */ _L2_then_else_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:else:then:_L9/ */ _L9_then_else_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* if_BGpassed_or_onlyAnnounced:else:then:_L13/ */ _L13_then_else_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:else:then:_L14/ */ _L14_then_else_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:else:then:_L15/ */ _L15_then_else_if_BGpassed_or_onlyAnnounced;
  trainProperties_T_TrainPosition_Types_Pck /* if_BGpassed_or_onlyAnnounced:else:then:_L16/ */ _L16_then_else_if_BGpassed_or_onlyAnnounced;
  passedBG_T_BG_Types_Pkg /* if_BGpassed_or_onlyAnnounced:else:then:_L17/ */ _L17_then_else_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* BG_passed/ */ BG_passed;
  kcg_bool /* onlyBGsAnnouncedViaRadio/ */ onlyBGsAnnouncedViaRadio;
  positionErrors_T_TrainPosition_Types_Pck /* errors_loc/ */ errors_loc;
  positionedBG_T_TrainPosition_Types_Pck /* passedBG_asPositionedBG/ */ passedBG_asPositionedBG;
  kcg_bool /* positionCalculationNotConsistent/ */ positionCalculationNotConsistent;
  trainPositionInfo_T_TrainPosition_Types_Pck /* trainPositionInfo/ */ trainPositionInfo;
  passedBG_T_BG_Types_Pkg /* passedBG_loc/ */ passedBG_loc;
  kcg_bool /* linkedBGMissed/ */ linkedBGMissed;
  kcg_bool /* twoConsecutiveLinkedBGsMissed/ */ twoConsecutiveLinkedBGsMissed;
  positionedBG_T_TrainPosition_Types_Pck /* missedLinkedBG/ */ missedLinkedBG;
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_preloc/ */ BGs_preloc;
  trainPosition_T_TrainPosition_Types_Pck /* _L200/ */ _L200;
  odometry_T_Obu_BasicTypes_Pkg /* _L201/ */ _L201;
  trainProperties_T_TrainPosition_Types_Pck /* _L207/ */ _L207;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L238/ */ _L238;
  kcg_bool /* _L248/ */ _L248;
  passedBG_T_BG_Types_Pkg /* _L247/ */ _L247;
  kcg_bool /* _L246/ */ _L246;
  kcg_bool /* _L245/ */ _L245;
  kcg_bool /* _L244/ */ _L244;
  kcg_bool /* _L243/ */ _L243;
  positionedBG_T_TrainPosition_Types_Pck /* _L256/ */ _L256;
  kcg_bool /* _L258/ */ _L258;
  kcg_bool /* _L259/ */ _L259;
  kcg_bool /* _L260/ */ _L260;
  kcg_bool /* _L308/ */ _L308;
  kcg_bool /* _L307/ */ _L307;
  passedBG_T_BG_Types_Pkg /* _L306/ */ _L306;
  ReceivedMessage_T_Common_Types_Pkg /* _L309/ */ _L309;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L329/ */ _L329;
  trainPositionInfo_T_TrainPosition_Types_Pck /* _L327/ */ _L327;
  kcg_bool /* _L322/ */ _L322;
  kcg_int64 /* _L323/ */ _L323;
  positionedBG_T_TrainPosition_Types_Pck /* _L324/ */ _L324;
  kcg_bool /* _L321/ */ _L321;
  passedBG_T_BG_Types_Pkg /* _L331/ */ _L331;
  kcg_bool /* _L332/ */ _L332;
  kcg_bool /* _L333/ */ _L333;
  kcg_bool /* _L334/ */ _L334;
  kcg_bool /* _L335/ */ _L335;
  positionedBG_T_TrainPosition_Types_Pck /* _L336/ */ _L336;
  positionedBG_T_TrainPosition_Types_Pck /* _L383/ */ _L383;
  kcg_bool /* _L382/ */ _L382;
  positionedBG_T_TrainPosition_Types_Pck /* _L381/ */ _L381;
  kcg_bool /* _L380/ */ _L380;
  kcg_bool /* _L379/ */ _L379;
  kcg_bool /* _L378/ */ _L378;
  kcg_bool /* _L377/ */ _L377;
  kcg_bool /* _L376/ */ _L376;
  kcg_bool /* _L375/ */ _L375;
  kcg_bool /* _L374/ */ _L374;
  kcg_bool /* _L373/ */ _L373;
  positionedBG_T_TrainPosition_Types_Pck /* _L372/ */ _L372;
  positionErrors_T_TrainPosition_Types_Pck /* _L371/ */ _L371;
  positionErrors_T_TrainPosition_Types_Pck /* _L370/ */ _L370;
  positionedBGs_T_TrainPosition_Types_Pck /* _L384/ */ _L384;
  positionedBGs_T_TrainPosition_Types_Pck /* _L385/ */ _L385;
  positionedBGs_T_TrainPosition_Types_Pck /* _L386/ */ _L386;
} outC_calculateTrainPosition_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPosition/ */
extern void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* msgFromTrack/ */
  ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* reset/ */
  kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateTrainPosition_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calculateTrainPosition_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateTrainPosition_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

