/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ES_Build_AcknowledgementNew_TA_EmergencyStop_H_
#define _ES_Build_AcknowledgementNew_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_147_T_TM_radio_messages /* m147/ */ m147;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_EMERGENCYSTOP /* q_emergencystop/ */ q_emergencystop;
  NID_EM /* _L4/ */ _L4;
  T_TRAIN /* _L5/ */ _L5;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  trainProperties_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  NID_ENGINE /* _L12/ */ _L12;
  Q_EMERGENCYSTOP /* _L13/ */ _L13;
  Q_EMERGENCYSTOP /* _L14/ */ _L14;
  Q_EMERGENCYSTOP /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  Q_EMERGENCYSTOP /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  Q_EMERGENCYSTOP /* _L38/ */ _L38;
  Q_EMERGENCYSTOP /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  Q_EMERGENCYSTOP /* _L42/ */ _L42;
  Q_EMERGENCYSTOP /* _L43/ */ _L43;
  M_147_T_TM_radio_messages /* _L50/ */ _L50;
  kcg_int32 /* _L51/ */ _L51;
} outC_ES_Build_AcknowledgementNew_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Build_AcknowledgementNew/ */
extern void ES_Build_AcknowledgementNew_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* t_train/ */
  T_TRAIN t_train,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* receivedMsg16/ */
  kcg_bool receivedMsg16,
  /* cesAccepted/ */
  kcg_bool cesAccepted,
  /* updateEOA/ */
  kcg_bool updateEOA,
  outC_ES_Build_AcknowledgementNew_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Build_AcknowledgementNew_reset_TA_EmergencyStop(
  outC_ES_Build_AcknowledgementNew_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Build_AcknowledgementNew_init_TA_EmergencyStop(
  outC_ES_Build_AcknowledgementNew_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_Build_AcknowledgementNew_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Build_AcknowledgementNew_TA_EmergencyStop.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

