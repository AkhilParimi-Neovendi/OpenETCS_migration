/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage_H_
#define _ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage_H_

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
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  MsgSource_T_Common_Types_Pkg /* _L4/ */ _L4;
  BG_Message_T_BG_Types_Pkg /* _L3/ */ _L3;
  RadioMessage_T_Radio_Types_Pkg /* _L2/ */ _L2;
  ReceivedMessage_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  BG_Header_T_BG_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  CompressedPackets_T_Common_Types_Pkg /* _L9/ */ _L9;
  RadioMetadata_T_Common_Types_Pkg /* _L10/ */ _L10;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  RBC_Id_T_Common_Types_Pkg /* _L19/ */ _L19;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L20/ */ _L20;
} outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage/ */
extern void ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
  /* TrackSideMessage/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *TrackSideMessage,
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertTrackSideMessageToRadioMessage_reset_CheckEuroradioMessage(
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertTrackSideMessageToRadioMessage_init_CheckEuroradioMessage(
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

