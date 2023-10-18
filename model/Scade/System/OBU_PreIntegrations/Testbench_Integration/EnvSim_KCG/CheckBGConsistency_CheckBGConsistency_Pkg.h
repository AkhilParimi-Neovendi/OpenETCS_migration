/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckBGConsistency_CheckBGConsistency_Pkg_H_
#define _CheckBGConsistency_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* passedBG_out/ */ passedBG_out;
  kcg_bool /* applyServiceBrake/ */ applyServiceBrake;
  kcg_bool /* badBaliseMessageToDMI/ */ badBaliseMessageToDMI;
  kcg_bool /* errorLinkedBG/ */ errorLinkedBG;
  kcg_bool /* errorUnlinkedBG/ */ errorUnlinkedBG;
  kcg_bool /* incompatibleVersion/ */ incompatibleVersion;
  NID_ERRORBG_BG_Types_Pkg /* nid_errorBG/ */ nid_errorBG;
  NID_C /* nid_c/ */ nid_c;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg /* IfBlock1:then:_L19=(CheckBGConsistency_Pkg::CaseLinkingInUse#2)/ */ Context_CaseLinkingInUse_2;
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg /* IfBlock1:else:then:_L10=(CheckBGConsistency_Pkg::CaseLinkingNotInUse#3)/ */ Context_CaseLinkingNotInUse_3;
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction /* _L14=(CheckBGConsistency_Pkg::SubFunction::CheckMode#1)/ */ Context_CheckMode_1;
  outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction /* _L50=(CheckBGConsistency_Pkg::SubFunction::CheckMVersion#1)/ */ Context_CheckMVersion_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_ERRORBG_BG_Types_Pkg /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  NID_C /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  Q_NVLOCACC /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:else:then:_L15/ */ _L15_then_else_IfBlock1;
  Q_NVLOCACC /* IfBlock1:else:then:_L16/ */ _L16_then_else_IfBlock1;
  NID_C /* IfBlock1:else:then:_L17/ */ _L17_then_else_IfBlock1;
  NID_ERRORBG_BG_Types_Pkg /* IfBlock1:else:then:_L18/ */ _L18_then_else_IfBlock1;
  kcg_bool /* startTheCheck/ */ startTheCheck;
  kcg_bool /* isLinked/ */ isLinked;
  kcg_bool /* linkingInUse/ */ linkingInUse;
  kcg_bool /* compatibleVersion/ */ compatibleVersion;
  kcg_bool /* _L14/ */ _L14;
  Q_LINK /* _L24/ */ _L24;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L30/ */ _L30;
  trainPosition_T_TrainPosition_Types_Pck /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  M_MODE /* _L35/ */ _L35;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L39/ */ _L39;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L50/ */ _L50;
  TelegramHeader_T_BG_Types_Pkg /* _L54/ */ _L54;
  Q_LINK /* _L55/ */ _L55;
  M_VERSION /* _L56/ */ _L56;
  M_VERSION /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
} outC_CheckBGConsistency_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CheckBGConsistency/ */
extern void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* mMode/ */
  M_MODE mMode,
  /* trackSide_ForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  /* trainVersion/ */
  M_VERSION trainVersion,
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckBGConsistency_reset_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckBGConsistency_init_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckBGConsistency_CheckBGConsistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckBGConsistency_CheckBGConsistency_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

