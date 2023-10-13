/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* applyServiceBrake/ */ applyServiceBrake;
  kcg_bool /* badBaliseMessageToDMI/ */ badBaliseMessageToDMI;
  ReceivedMessage_T_Common_Types_Pkg /* passedBG_out/ */ passedBG_out;
  kcg_bool /* errorUnlinkedBG/ */ errorUnlinkedBG;
  NID_ERRORBG_BG_Types_Pkg /* nid_errorBG/ */ nid_errorBG;
  NID_C /* nid_c/ */ nid_c;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */ Context_BuildCheckedMessage_1;
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */ Context_WriteDirection2PassedBG_1;
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#2)/ */ Context_BuildCheckedMessage_2;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */ Context_N_PIG2int_16;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */ Context_N_PIG2int_17;
  outC_CheckCompleteness_CheckBGConsistency_Pkg /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#1)/ */ Context_CheckCompleteness_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  Q_NVLOCACC /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L7/ */ _L7_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L18/ */ _L18_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L16/ */ _L16_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L15/ */ _L15_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L23/ */ _L23_then_else_IfBlock1;
  Q_NVLOCACC /* IfBlock1:else:then:_L24/ */ _L24_then_else_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:else:then:_L25/ */ _L25_then_else_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* IfBlock1:else:then:_L26/ */ _L26_then_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:then:_L19/ */ _L19_then_else_IfBlock1;
  kcg_bool /* isComplete/ */ isComplete;
  kcg_bool /* isSingle/ */ isSingle;
  Telegram_T_BG_Types_Pkg /* lastTelegram/ */ lastTelegram;
  kcg_int64 /* nid_errorBG_local/ */ nid_errorBG_local;
  kcg_int64 /* nid_c_local/ */ nid_c_local;
  Telegram_T_BG_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L15/ */ _L15;
  BG_Message_T_BG_Types_Pkg /* _L21/ */ _L21;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L20/ */ _L20;
  TelegramHeader_T_BG_Types_Pkg /* _L24/ */ _L24;
  NID_BG /* _L23/ */ _L23;
  NID_C /* _L22/ */ _L22;
} outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CaseLinkingNotInUse/ */
extern void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CaseLinkingNotInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CaseLinkingNotInUse_init_CheckBGConsistency_Pkg(
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

