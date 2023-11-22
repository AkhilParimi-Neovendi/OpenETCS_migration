/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _BuildOutput_CheckEuroradioMessage_H_
#define _BuildOutput_CheckEuroradioMessage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* ReceivedMessage/ */ ReceivedMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L10/ */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L19/ */ _L19;
  MsgSource_T_Common_Types_Pkg /* _L18/ */ _L18;
  RadioMetadata_T_Common_Types_Pkg /* _L17/ */ _L17;
  BG_Header_T_BG_Types_Pkg /* _L16/ */ _L16;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L15/ */ _L15;
  CompressedPackets_T_Common_Types_Pkg /* _L14/ */ _L14;
  RBC_Id_T_Common_Types_Pkg /* _L20/ */ _L20;
} outC_BuildOutput_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::BuildOutput/ */
extern void BuildOutput_CheckEuroradioMessage(
  /* message/ */
  ReceivedMessage_T_Common_Types_Pkg *message,
  /* valid/ */
  kcg_bool valid,
  outC_BuildOutput_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildOutput_reset_CheckEuroradioMessage(
  outC_BuildOutput_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildOutput_init_CheckEuroradioMessage(
  outC_BuildOutput_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BuildOutput_CheckEuroradioMessage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildOutput_CheckEuroradioMessage.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

