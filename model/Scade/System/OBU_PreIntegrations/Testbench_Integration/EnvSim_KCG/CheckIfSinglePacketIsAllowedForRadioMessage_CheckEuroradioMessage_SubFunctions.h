/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions_H_
#define _CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_extract_nid_packet_from_metadata_selector_TM /* _L20=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */ Context_T_extract_nid_packet_from_metadata_selector_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock2:then:IfBlock1: */ IfBlock1_clock_then_IfBlock2;
  kcg_bool /* IfBlock2: */ IfBlock2_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock2:then:IfBlock1:else:_L1/ */ _L1_else_IfBlock1_then_IfBlock2;
  kcg_int32 /* IfBlock2:then:IfBlock1:then:_L5/ */ _L5_then_IfBlock1_then_IfBlock2;
  kcg_bool /* IfBlock2:then:IfBlock1:then:_L4/ */ _L4_then_IfBlock1_then_IfBlock2;
  NID_MESSAGE /* IfBlock2:then:IfBlock1:then:_L3/ */ _L3_then_IfBlock1_then_IfBlock2;
  MetadataTruthtable_T1_CheckEuroradioMessage /* IfBlock2:then:IfBlock1:then:_L2/ */ _L2_then_IfBlock1_then_IfBlock2;
  kcg_bool /* IfBlock2:then:IfBlock1:then:_L1/ */ _L1_then_IfBlock1_then_IfBlock2;
  kcg_int32 /* IfBlock2:then:IfBlock1:then:_L7/ */ _L7_then_IfBlock1_then_IfBlock2;
  kcg_bool /* IfBlock2:else:_L1/ */ _L1_else_IfBlock2;
  kcg_bool /* present/ */ present;
  kcg_int32 /* nid_packet/ */ nid_packet;
  kcg_bool /* validTmp/ */ validTmp;
  MetadataElement_T_Common_Types_Pkg /* _L3/ */ _L3;
  NID_PACKET /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
} outC_CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage/ */
extern void CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
  /* accumulator/ */
  kcg_bool accumulator,
  /* currentPacket/ */
  MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* nid_message/ */
  NID_MESSAGE nid_message,
  /* permittedPackets/ */
  MetadataTruthtable_T1_CheckEuroradioMessage *permittedPackets,
  outC_CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckIfSinglePacketIsAllowedForRadioMessage_reset_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckIfSinglePacketIsAllowedForRadioMessage_init_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

