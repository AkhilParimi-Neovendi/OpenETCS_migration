/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions_H_
#define _CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions_H_

#include "kcg_types.h"
#include "CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* result/ */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions /* _L5=(CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15#1)/ */ Context_CheckIfPacketRadioMetadataElementIsPacket15_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  Metadata_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
} outC_CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent/ */
extern void CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
  /* rtmMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckIfPacket15IsPresent_reset_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckIfPacket15IsPresent_init_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

