/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ES_ReceiveAndControl_TA_EmergencyStop_H_
#define _ES_ReceiveAndControl_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_Filter_Messages_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* receivedMsg15/ */ receivedMsg15;
  kcg_bool /* receivedMsg16/ */ receivedMsg16;
  kcg_bool /* receivedMsg18/ */ receivedMsg18;
  kcg_bool /* sendMsg147/ */ sendMsg147;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ES_Filter_Messages_TA_EmergencyStop /* _L28=(TA_EmergencyStop::ES_Filter_Messages#1)/ */ Context_ES_Filter_Messages_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L28/ */ _L28;
} outC_ES_ReceiveAndControl_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_ReceiveAndControl/ */
extern void ES_ReceiveAndControl_TA_EmergencyStop(
  /* messageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *messageIn,
  outC_ES_ReceiveAndControl_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_ReceiveAndControl_reset_TA_EmergencyStop(
  outC_ES_ReceiveAndControl_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_ReceiveAndControl_init_TA_EmergencyStop(
  outC_ES_ReceiveAndControl_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_ReceiveAndControl_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_ReceiveAndControl_TA_EmergencyStop.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

