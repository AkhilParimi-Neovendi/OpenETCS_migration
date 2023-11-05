/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CheckEuroRadioMessage_CheckEuroradioMessage_H_
#define _CheckEuroRadioMessage_CheckEuroradioMessage_H_

#include "kcg_types.h"
#include "BuildOutput_CheckEuroradioMessage.h"
#include "CheckMandatoryVariablesAndMA_CheckEuroradioMessage.h"
#include "TimingChecker_CheckEuroradioMessage.h"
#include "CheckAllowedPacketsRadio_CheckEuroradioMessage.h"
#include "ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* checkedMessage/ */ checkedMessage;
  kcg_bool /* radioSequenceError/ */ radioSequenceError;
  kcg_bool /* tNvContactError/ */ tNvContactError;
  kcg_bool /* otherTimingError/ */ otherTimingError;
  kcg_bool /* radioMessageConsistencyError/ */ radioMessageConsistencyError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildOutput_CheckEuroradioMessage /* IfBlock1:then:_L83=(CheckEuroradioMessage::BuildOutput#6)/ */ Context_BuildOutput_6;
  outC_CheckAllowedPacketsRadio_CheckEuroradioMessage /* IfBlock1:then:_L64=(CheckEuroradioMessage::CheckAllowedPacketsRadio#6)/ */ Context_CheckAllowedPacketsRadio_6;
  outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage /* IfBlock1:then:_L73=(CheckEuroradioMessage::CheckMandatoryVariablesAndMA#6)/ */ Context_CheckMandatoryVariablesAndMA_6;
  outC_TimingChecker_CheckEuroradioMessage /* IfBlock1:then:_L85=(CheckEuroradioMessage::TimingChecker#6)/ */ Context_TimingChecker_6;
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage /* IfBlock1:then:_L76=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#6)/ */ Context_ConvertTrackSideMessageToRadioMessage_6;
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage /* IfBlock1:else:_L2=(CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage#7)/ */ Context_ConvertTrackSideMessageToRadioMessage_7;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* IfBlock1:then:_L104/ */ _L104_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L103/ */ _L103_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L102/ */ _L102_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L99/ */ _L99_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L100/ */ _L100_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L101/ */ _L101_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L95/ */ _L95_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L94/ */ _L94_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L89/ */ _L89_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L90/ */ _L90_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L91/ */ _L91_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L86/ */ _L86_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L85/ */ _L85_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L64/ */ _L64_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L65/ */ _L65_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L66/ */ _L66_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L67/ */ _L67_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L68/ */ _L68_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L70/ */ _L70_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L72/ */ _L72_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L73/ */ _L73_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L74/ */ _L74_then_IfBlock1;
  T_NVCONTACT /* IfBlock1:then:_L75/ */ _L75_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L76/ */ _L76_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L77/ */ _L77_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L78/ */ _L78_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L79/ */ _L79_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L80/ */ _L80_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L81/ */ _L81_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L82/ */ _L82_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L83/ */ _L83_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L84/ */ _L84_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
} outC_CheckEuroRadioMessage_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::CheckEuroRadioMessage/ */
extern void CheckEuroRadioMessage_CheckEuroradioMessage(
  /* rtmMessage/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* tNvContact/ */
  T_NVCONTACT tNvContact,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* activateCheck/ */
  kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckEuroRadioMessage_reset_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckEuroRadioMessage_init_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_TimingChecker_CheckEuroradioMessage Context_TimingChecker_6;
} SV_CheckEuroRadioMessage_CheckEuroradioMessage;

extern void kcg_save_SV_CheckEuroRadioMessage_CheckEuroradioMessage(
  SV_CheckEuroRadioMessage_CheckEuroradioMessage *SV,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);
extern void kcg_load_SV_CheckEuroRadioMessage_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC,
  SV_CheckEuroRadioMessage_CheckEuroradioMessage *SV);



#endif /* _CheckEuroRadioMessage_CheckEuroradioMessage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckEuroRadioMessage_CheckEuroradioMessage.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

