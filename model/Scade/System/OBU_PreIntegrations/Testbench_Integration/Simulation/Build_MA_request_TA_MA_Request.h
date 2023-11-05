/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _Build_MA_request_TA_MA_Request_H_
#define _Build_MA_request_TA_MA_Request_H_

#include "kcg_types.h"
#include "Send_M132_TM_radio_messages.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"
#include "C_legacy_P001_TM_conversions_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* bus_out/ */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M132_TM_radio_messages /* _L84=(TM_radio_messages::Send_M132#1)/ */ Context_Send_M132_1;
  outC_C_legacy_P001_TM_conversions_TrainToTrack /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */ Context_C_legacy_P001_1;
  outC_C_legacy_P000_TM_conversions_TrainToTrack /* _L109=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */ Context_C_legacy_P000_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_MARQSTREASON /* q_marqrstreason_local/ */ q_marqrstreason_local;
  kcg_bool /* _L33/ */ _L33;
  Q_MARQSTREASON /* _L34/ */ _L34;
  Q_MARQSTREASON /* _L35/ */ _L35;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L84/ */ _L84;
  T_TRAIN /* _L85/ */ _L85;
  NID_ENGINE /* _L102/ */ _L102;
  kcg_int32 /* _L101/ */ _L101;
  kcg_bool /* _L100/ */ _L100;
  trainProperties_T_TrainPosition_Types_Pck /* _L99/ */ _L99;
  M_132_T_TM_radio_messages /* _L98/ */ _L98;
  kcg_int32 /* _L97/ */ _L97;
  Q_MARQSTREASON /* _L103/ */ _L103;
  M_VERSION /* _L104/ */ _L104;
  P009_TM_TrainToTrack /* _L105/ */ _L105;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L106/ */ _L106;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L107/ */ _L107;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L108/ */ _L108;
  P000_TM_TrainToTrack /* _L109/ */ _L109;
  P001_TM_TrainToTrack /* _L110/ */ _L110;
  kcg_int32 /* _L111/ */ _L111;
  Q_MARQSTREASON /* _L114/ */ _L114;
} outC_Build_MA_request_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Build_MA_request/ */
extern void Build_MA_request_TA_MA_Request(
  /* trackDescrDeleted/ */
  kcg_bool trackDescrDeleted,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* t_train/ */
  T_TRAIN t_train,
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MA_request_reset_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MA_request_init_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Send_M132_TM_radio_messages Context_Send_M132_1;
} SV_Build_MA_request_TA_MA_Request;

extern void kcg_save_SV_Build_MA_request_TA_MA_Request(
  SV_Build_MA_request_TA_MA_Request *SV,
  outC_Build_MA_request_TA_MA_Request *outC);
extern void kcg_load_SV_Build_MA_request_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC,
  SV_Build_MA_request_TA_MA_Request *SV);



#endif /* _Build_MA_request_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_MA_request_TA_MA_Request.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

