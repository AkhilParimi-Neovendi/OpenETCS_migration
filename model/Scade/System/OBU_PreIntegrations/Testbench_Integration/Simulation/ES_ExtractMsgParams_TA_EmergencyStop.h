/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ES_ExtractMsgParams_TA_EmergencyStop_H_
#define _ES_ExtractMsgParams_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_EM /* nid_em/ */ nid_em;
  Q_SCALE /* q_scale/ */ q_scale;
  D_REF /* d_ref/ */ d_ref;
  Q_DIR /* q_dir/ */ q_dir;
  D_EMERGENCYSTOP /* d_emergencystop/ */ d_emergencystop;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L2/ */ _L2;
  NID_EM /* _L3/ */ _L3;
  NID_EM /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  Q_SCALE /* _L7/ */ _L7;
  D_REF /* _L10/ */ _L10;
  Q_DIR /* _L11/ */ _L11;
  D_EMERGENCYSTOP /* _L12/ */ _L12;
} outC_ES_ExtractMsgParams_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_ExtractMsgParams/ */
extern void ES_ExtractMsgParams_TA_EmergencyStop(
  /* messageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* receivedESMsg/ */
  kcg_bool receivedESMsg,
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_ExtractMsgParams_reset_TA_EmergencyStop(
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_ExtractMsgParams_init_TA_EmergencyStop(
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_ExtractMsgParams_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_ExtractMsgParams_TA_EmergencyStop.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

