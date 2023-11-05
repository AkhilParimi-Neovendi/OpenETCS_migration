/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Decode_NID_PACKET_TM_TrainToTrack_H_
#define _Decode_NID_PACKET_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Valid/ */ Valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_Decode_NID_PACKET_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Decode_NID_PACKET/ */
extern void Decode_NID_PACKET_TM_TrainToTrack(
  /* Meta/ */
  kcg_int32 Meta,
  /* Packet_ID/ */
  kcg_int32 Packet_ID,
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Decode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Decode_NID_PACKET_init_TM_TrainToTrack(
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Decode_NID_PACKET_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Decode_NID_PACKET_TM_TrainToTrack.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

