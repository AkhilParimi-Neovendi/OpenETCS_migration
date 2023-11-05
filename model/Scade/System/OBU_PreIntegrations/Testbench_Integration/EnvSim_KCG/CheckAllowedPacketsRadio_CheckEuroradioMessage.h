/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckAllowedPacketsRadio_CheckEuroradioMessage_H_
#define _CheckAllowedPacketsRadio_CheckEuroradioMessage_H_

#include "kcg_types.h"
#include "CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions /* _L14=(CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage#1)/ */ Context_CheckIfSinglePacketIsAllowedForRadioMessage_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L6/ */ _L6;
  Metadata_T_Common_Types_Pkg /* _L7/ */ _L7;
  NID_MESSAGE /* _L8/ */ _L8;
  MetadataTruthtable_T1_CheckEuroradioMessage /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
  array_int32_30 /* _L12/ */ _L12;
  array_bool_256_46_30 /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
} outC_CheckAllowedPacketsRadio_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::CheckAllowedPacketsRadio/ */
extern void CheckAllowedPacketsRadio_CheckEuroradioMessage(
  /* rtmMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckAllowedPacketsRadio_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckAllowedPacketsRadio_reset_CheckEuroradioMessage(
  outC_CheckAllowedPacketsRadio_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckAllowedPacketsRadio_init_CheckEuroradioMessage(
  outC_CheckAllowedPacketsRadio_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckAllowedPacketsRadio_CheckEuroradioMessage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckAllowedPacketsRadio_CheckEuroradioMessage.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

