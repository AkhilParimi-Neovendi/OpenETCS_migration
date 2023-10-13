/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ES_Filter_Messages_TA_EmergencyStop_H_
#define _ES_Filter_Messages_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* receivedMsg15/ */ receivedMsg15;
  kcg_bool /* receivedMsg16/ */ receivedMsg16;
  kcg_bool /* receivedMsg18/ */ receivedMsg18;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* isValidRadioMsg/ */ isValidRadioMsg;
  MsgSource_T_Common_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L9/ */ _L9;
  MsgSource_T_Common_Types_Pkg /* _L8/ */ _L8;
  ReceivedMessage_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  ReceivedMessage_T_Common_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  NID_MESSAGE /* _L2/ */ _L2;
  NID_MESSAGE /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  NID_MESSAGE /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L17/ */ _L17;
  NID_MESSAGE /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
} outC_ES_Filter_Messages_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Filter_Messages/ */
extern void ES_Filter_Messages_TA_EmergencyStop(
  /* messageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *messageIn,
  outC_ES_Filter_Messages_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Filter_Messages_reset_TA_EmergencyStop(
  outC_ES_Filter_Messages_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Filter_Messages_init_TA_EmergencyStop(
  outC_ES_Filter_Messages_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_Filter_Messages_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Filter_Messages_TA_EmergencyStop.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

