/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _C_compr_P005_TM_TrainToTrack_H_
#define _C_compr_P005_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "Filter_Variable_TM_TrainToTrack.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"
#include "CAST_Int_to_NID_OPERATIONAL_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P005_TM_TrainToTrack /* P005_out/ */ P005_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_OPERATIONAL_TM_conversions /* _L71=(TM_conversions::CAST_Int_to_NID_OPERATIONAL#1)/ */ Context_CAST_Int_to_NID_OPERATIONAL_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L76=(TM_TrainToTrack::Filter_Variable#3)/ */ Context_Filter_Variable_3;
  outC_Filter_Variable_TM_TrainToTrack /* _L75=(TM_TrainToTrack::Filter_Variable#2)/ */ Context_Filter_Variable_2;
  outC_Filter_Variable_TM_TrainToTrack /* _L74=(TM_TrainToTrack::Filter_Variable#1)/ */ Context_Filter_Variable_1;
  outC_Decode_NID_PACKET_TM_TrainToTrack /* _L73=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */ Context_Decode_NID_PACKET_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_PACKET /* @1/nid_packet/ */ nid_packet_CAST_Int_to_NID_PACKET_1;
  kcg_int64 /* @1/nid_packet_int/ */ nid_packet_int_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @1/_L2/ */ _L2_CAST_Int_to_NID_PACKET_1;
  kcg_int64 /* @1/_L3/ */ _L3_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @1/_L4/ */ _L4_CAST_Int_to_NID_PACKET_1;
  kcg_int64 /* @1/_L5/ */ _L5_CAST_Int_to_NID_PACKET_1;
  kcg_int64 /* @1/_L1/ */ _L1_CAST_Int_to_NID_PACKET_1;
  L_PACKET /* @2/l_packet/ */ l_packet_CAST_Int_to_L_PACKET_1;
  kcg_int64 /* @2/l_packet_int/ */ l_packet_int_CAST_Int_to_L_PACKET_1;
  kcg_int64 /* @2/_L13/ */ _L13_CAST_Int_to_L_PACKET_1;
  kcg_int64 /* @2/_L12/ */ _L12_CAST_Int_to_L_PACKET_1;
  kcg_bool /* @2/_L8/ */ _L8_CAST_Int_to_L_PACKET_1;
  kcg_bool /* @2/_L9/ */ _L9_CAST_Int_to_L_PACKET_1;
  kcg_int64 /* @2/_L1/ */ _L1_CAST_Int_to_L_PACKET_1;
  P005_TrainTrack_int_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  NID_PACKET /* _L69/ */ _L69;
  L_PACKET /* _L70/ */ _L70;
  NID_OPERATIONAL /* _L71/ */ _L71;
  P005_TM_TrainToTrack /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  kcg_int64 /* _L74/ */ _L74;
  kcg_int64 /* _L75/ */ _L75;
  kcg_int64 /* _L76/ */ _L76;
} outC_C_compr_P005_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P005/ */
extern void C_compr_P005_TM_TrainToTrack(
  /* P005_in/ */
  P005_TrainTrack_int_TM_TrainToTrack *P005_in,
  outC_C_compr_P005_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_compr_P005_reset_TM_TrainToTrack(
  outC_C_compr_P005_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_compr_P005_init_TM_TrainToTrack(
  outC_C_compr_P005_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_TrainToTrack::C_compr_P005/
  @1: (TM_conversions::CAST_Int_to_NID_PACKET#1)
  @2: (TM_conversions::CAST_Int_to_L_PACKET#1)
*/

#endif /* _C_compr_P005_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P005_TM_TrainToTrack.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

