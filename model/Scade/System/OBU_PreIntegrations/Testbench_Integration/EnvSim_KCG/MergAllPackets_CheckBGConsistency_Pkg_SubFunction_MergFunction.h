/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
#include "Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* go_on/ */ go_on;
  Telegram_T_BG_Types_Pkg /* telegram_out/ */ telegram_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction /* IfBlock1:else:else:then:_L2=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration#1)/ */ Context_Merg2MetaDataIteration_1;
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction /* IfBlock1:else:else:then:_L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray#1)/ */ Context_Merg2PacketsListArray_1;
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction /* IfBlock1:else:else:then:_L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#1)/ */ Context_FindIndexOfMetaDataIteration_1;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* _L58=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#4)/ */ Context_N_PIG2int_4;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* _L61=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */ Context_N_PIG2int_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:else:then:_L20/ */ _L20_then_else_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:else:then:_L19/ */ _L19_then_else_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:else:then:_L18/ */ _L18_then_else_else_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L17/ */ _L17_then_else_else_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L16/ */ _L16_then_else_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:else:then:_L15/ */ _L15_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L14/ */ _L14_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L13/ */ _L13_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L11/ */ _L11_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L12/ */ _L12_then_else_else_IfBlock1;
  Metadata_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L10/ */ _L10_then_else_else_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L9/ */ _L9_then_else_else_IfBlock1;
  Metadata_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L8/ */ _L8_then_else_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  Metadata_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  M_DUP /* mDup1/ */ mDup1;
  M_DUP /* mDup2/ */ mDup2;
  kcg_int64 /* diff/ */ diff;
  kcg_bool /* nominal/ */ nominal;
  kcg_bool /* revers/ */ revers;
  Metadata_T_Common_Types_Pkg /* metadata/ */ metadata;
  CompressedPacketData_T_Common_Types_Pkg /* packetlist/ */ packetlist;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L54/ */ _L54;
  M_DUP /* _L53/ */ _L53;
  M_DUP /* _L52/ */ _L52;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L48/ */ _L48;
  M_DUP /* _L47/ */ _L47;
  M_DUP /* _L46/ */ _L46;
  M_DUP /* _L45/ */ _L45;
  kcg_bool /* _L44/ */ _L44;
  M_DUP /* _L43/ */ _L43;
  M_DUP /* _L42/ */ _L42;
  M_DUP /* _L41/ */ _L41;
  Telegram_T_BG_Types_Pkg /* _L68/ */ _L68;
  M_DUP /* _L67/ */ _L67;
  kcg_int64 /* _L66/ */ _L66;
  M_DUP /* _L65/ */ _L65;
  N_PIG /* _L64/ */ _L64;
  TelegramHeader_T_BG_Types_Pkg /* _L63/ */ _L63;
  TelegramHeader_T_BG_Types_Pkg /* _L62/ */ _L62;
  kcg_int64 /* _L61/ */ _L61;
  Telegram_T_BG_Types_Pkg /* _L60/ */ _L60;
  N_PIG /* _L59/ */ _L59;
  kcg_int64 /* _L58/ */ _L58;
  Metadata_T_Common_Types_Pkg /* _L72/ */ _L72;
  Telegram_T_BG_Types_Pkg /* _L71/ */ _L71;
  CompressedPackets_T_Common_Types_Pkg /* _L70/ */ _L70;
  CompressedPacketData_T_Common_Types_Pkg /* _L69/ */ _L69;
  Telegram_T_BG_Types_Pkg /* _L73/ */ _L73;
} outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets/ */
extern void MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* telegramACC/ */
  Telegram_T_BG_Types_Pkg *telegramACC,
  /* telegram/ */
  Telegram_T_BG_Types_Pkg *telegram,
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MergAllPackets_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MergAllPackets_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

