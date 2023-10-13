/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions_H_
#define _CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* result/ */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_extract_nid_packet_from_metadata_selector_TM /* _L9=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */ Context_T_extract_nid_packet_from_metadata_selector_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L1/ */ _L1;
  NID_PACKET /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
} outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15/ */
extern void CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions(
  /* accumulatorInput/ */
  kcg_bool accumulatorInput,
  /* metadataElement/ */
  MetadataElement_T_Common_Types_Pkg *metadataElement,
  outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckIfPacketRadioMetadataElementIsPacket15_reset_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckIfPacketRadioMetadataElementIsPacket15_init_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

