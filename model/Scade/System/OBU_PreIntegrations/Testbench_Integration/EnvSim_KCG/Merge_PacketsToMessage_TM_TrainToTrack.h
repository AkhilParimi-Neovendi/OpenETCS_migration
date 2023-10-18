/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Merge_PacketsToMessage_TM_TrainToTrack_H_
#define _Merge_PacketsToMessage_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* RadioMessage/ */ RadioMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L1/ */ _L1;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L2/ */ _L2;
  M_TrainTrack_Message_T_TM_radio_messages /* _L4/ */ _L4;
} outC_Merge_PacketsToMessage_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Merge_PacketsToMessage/ */
extern void Merge_PacketsToMessage_TM_TrainToTrack(
  /* OptionalPackets/ */
  M_TrainTrack_compressed_packets_T_TM_radio_messages *OptionalPackets,
  /* MessageHeader/ */
  M_TrainTrack_MessageHd_T_TM_radio_messages *MessageHeader,
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Merge_PacketsToMessage_reset_TM_TrainToTrack(
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Merge_PacketsToMessage_init_TM_TrainToTrack(
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Merge_PacketsToMessage_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merge_PacketsToMessage_TM_TrainToTrack.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

