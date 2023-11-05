/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CaseLinkingInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* passedBG_out/ */ passedBG_out;
  kcg_bool /* errorLinkedBG/ */ errorLinkedBG;
  NID_ERRORBG_BG_Types_Pkg /* nid_errorBG/ */ nid_errorBG;
  NID_C /* nid_c/ */ nid_c;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* passedBGlocal/ */ passedBGlocal;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:then:_L16=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#1)/ */ Context_WriteDirection2PassedBG_1;
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L23=(CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG#2)/ */ Context_WriteDirection2PassedBG_2;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L15=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#16)/ */ Context_N_PIG2int_16;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L14=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#17)/ */ Context_N_PIG2int_17;
  outC_CheckCompleteness_CheckBGConsistency_Pkg /* _L11=(CheckBGConsistency_Pkg::CheckCompleteness#2)/ */ Context_CheckCompleteness_2;
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction /* _L16=(CheckBGConsistency_Pkg::SubFunction::IsBG_announced#1)/ */ Context_IsBG_announced_1;
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction /* _L19=(CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage#1)/ */ Context_BuildCheckedMessage_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_LINKORIENTATION /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  Q_LINKORIENTATION /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L49/ */ _L49_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L47/ */ _L47_then_else_IfBlock1;
  Q_LINKORIENTATION /* IfBlock1:else:then:_L45/ */ _L45_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L24/ */ _L24_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L23/ */ _L23_then_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:then:_L19/ */ _L19_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L18/ */ _L18_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L16/ */ _L16_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L15/ */ _L15_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  Q_LINKORIENTATION /* IfBlock1:else:then:_L52/ */ _L52_then_else_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* IfBlock1:else:then:_L58/ */ _L58_then_else_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:else:then:_L57/ */ _L57_then_else_IfBlock1;
  kcg_bool /* isComplete/ */ isComplete;
  Telegram_T_BG_Types_Pkg /* lastTelegram/ */ lastTelegram;
  kcg_bool /* isSingle/ */ isSingle;
  kcg_bool /* isAnnounced/ */ isAnnounced;
  Q_LINKORIENTATION /* q_linkorientation_local/ */ q_linkorientation_local;
  kcg_int32 /* nid_errorBG_local/ */ nid_errorBG_local;
  kcg_int32 /* nid_c_local/ */ nid_c_local;
  Telegram_T_BG_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L15/ */ _L15;
  Q_LINKORIENTATION /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  positionedBGs_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  ReceivedMessage_T_Common_Types_Pkg /* _L19/ */ _L19;
  BG_Header_T_BG_Types_Pkg /* _L24/ */ _L24;
  Q_NVLOCACC /* _L25/ */ _L25;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L26/ */ _L26;
  BG_Message_T_BG_Types_Pkg /* _L27/ */ _L27;
  TelegramHeader_T_BG_Types_Pkg /* _L28/ */ _L28;
  NID_BG /* _L29/ */ _L29;
  NID_C /* _L30/ */ _L30;
} outC_CaseLinkingInUse_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CaseLinkingInUse/ */
extern void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CaseLinkingInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CaseLinkingInUse_init_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* passedBGlocal/ */ Context_passedBGlocal;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_CaseLinkingInUse_CheckBGConsistency_Pkg;

extern void kcg_save_SV_CaseLinkingInUse_CheckBGConsistency_Pkg(
  SV_CaseLinkingInUse_CheckBGConsistency_Pkg *SV,
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);
extern void kcg_load_SV_CaseLinkingInUse_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC,
  SV_CaseLinkingInUse_CheckBGConsistency_Pkg *SV);



#endif /* _CaseLinkingInUse_CheckBGConsistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CaseLinkingInUse_CheckBGConsistency_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

