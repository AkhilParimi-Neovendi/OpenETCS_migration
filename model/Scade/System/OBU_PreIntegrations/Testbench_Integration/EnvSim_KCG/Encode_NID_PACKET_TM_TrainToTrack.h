/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Encode_NID_PACKET_TM_TrainToTrack_H_
#define _Encode_NID_PACKET_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* meta/ */ meta;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_PACKET /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  NID_PACKET /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L13/ */ _L13;
} outC_Encode_NID_PACKET_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Encode_NID_PACKET/ */
extern void Encode_NID_PACKET_TM_TrainToTrack(
  /* valid/ */
  kcg_bool valid,
  /* nid_packet/ */
  NID_PACKET nid_packet,
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Encode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Encode_NID_PACKET_init_TM_TrainToTrack(
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Encode_NID_PACKET_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Encode_NID_PACKET_TM_TrainToTrack.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

