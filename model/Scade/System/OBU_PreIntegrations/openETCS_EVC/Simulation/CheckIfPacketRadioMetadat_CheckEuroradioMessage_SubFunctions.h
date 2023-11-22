/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions_H_
#define _CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* result/ */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_extract_nid_packet_from_TM /* _L9=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */ Context_T_extract_nid_packet_from_metadata_selector_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L1/ */ _L1;
  NID_PACKET /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
} outC_CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15/ */
extern void CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions(
  /* accumulatorInput/ */
  kcg_bool accumulatorInput,
  /* metadataElement/ */
  MetadataElement_T_Common_Types_Pkg *metadataElement,
  outC_CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckIfPacketRadioMetadat_reset_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckIfPacketRadioMetadat_init_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckIfPacketRadioMetadat_CheckEuroradioMessage_SubFunctions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

