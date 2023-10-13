/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_compr_P011_TM_TrainToTrack_H_
#define _C_compr_P011_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "_149_C_P011_unflatten_sec_TM_TrainToTrack_lib_internal.h"
#include "C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.h"
#include "CAST_Int_to_N_AXLE_TM_conversions.h"
#include "CAST_Int_to_M_AIRTIGHT_TM_conversions.h"
#include "CAST_Int_to_M_AXLELOADCAT_TM_conversions.h"
#include "CAST_Int_to_M_LOADINGGAUGE_TM_conversions.h"
#include "CAST_Int_to_V_MAXTRAIN_TM_conversions.h"
#include "CAST_Int_to_L_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NC_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NC_CDTRAIN_TM_conversions.h"
#include "Filter_Variable_TM_TrainToTrack.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_TM_TrainToTrack /* P011_out/ */ P011_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_N_AXLE_TM_conversions /* _L106=(TM_conversions::CAST_Int_to_N_AXLE#1)/ */ Context_CAST_Int_to_N_AXLE_1;
  outC_CAST_Int_to_M_AIRTIGHT_TM_conversions /* _L105=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */ Context_CAST_Int_to_M_AIRTIGHT_1;
  outC_CAST_Int_to_M_AXLELOADCAT_TM_conversions /* _L104=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */ Context_CAST_Int_to_M_AXLELOADCAT_1;
  outC_CAST_Int_to_M_LOADINGGAUGE_TM_conversions /* _L103=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */ Context_CAST_Int_to_M_LOADINGGAUGE_1;
  outC_CAST_Int_to_V_MAXTRAIN_TM_conversions /* _L102=(TM_conversions::CAST_Int_to_V_MAXTRAIN#1)/ */ Context_CAST_Int_to_V_MAXTRAIN_1;
  outC_CAST_Int_to_L_TRAIN_TM_conversions /* _L101=(TM_conversions::CAST_Int_to_L_TRAIN#1)/ */ Context_CAST_Int_to_L_TRAIN_1;
  outC_CAST_Int_to_NC_TRAIN_TM_conversions /* _L100=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */ Context_CAST_Int_to_NC_TRAIN_1;
  outC_CAST_Int_to_NC_CDTRAIN_TM_conversions /* _L71=(TM_conversions::CAST_Int_to_NC_CDTRAIN#1)/ */ Context_CAST_Int_to_NC_CDTRAIN_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L153=(TM_TrainToTrack::Filter_Variable#3)/ */ Context_Filter_Variable_3;
  outC_Filter_Variable_TM_TrainToTrack /* _L154=(TM_TrainToTrack::Filter_Variable#4)/ */ Context_Filter_Variable_4;
  outC_Filter_Variable_TM_TrainToTrack /* _L156=(TM_TrainToTrack::Filter_Variable#6)/ */ Context_Filter_Variable_6;
  outC_Filter_Variable_TM_TrainToTrack /* _L157=(TM_TrainToTrack::Filter_Variable#7)/ */ Context_Filter_Variable_7;
  outC_Filter_Variable_TM_TrainToTrack /* _L158=(TM_TrainToTrack::Filter_Variable#8)/ */ Context_Filter_Variable_8;
  outC_Filter_Variable_TM_TrainToTrack /* _L159=(TM_TrainToTrack::Filter_Variable#9)/ */ Context_Filter_Variable_9;
  outC_Filter_Variable_TM_TrainToTrack /* _L160=(TM_TrainToTrack::Filter_Variable#10)/ */ Context_Filter_Variable_10;
  outC_Filter_Variable_TM_TrainToTrack /* _L161=(TM_TrainToTrack::Filter_Variable#11)/ */ Context_Filter_Variable_11;
  outC__149_C_P011_unflatten_sec_TM_TrainToTrack_lib_internal /* _L113=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage#1)/ */ Context_C_P011_unflatten_sections_voltage_1;
  outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal /* _L114=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc#1)/ */ _1_Context_C_P011_unflatten_sections_ntc_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L163=(TM_TrainToTrack::Filter_Variable#13)/ */ Context_Filter_Variable_13;
  outC_Filter_Variable_TM_TrainToTrack /* _L162=(TM_TrainToTrack::Filter_Variable#12)/ */ Context_Filter_Variable_12;
  outC_Filter_Variable_TM_TrainToTrack /* _L152=(TM_TrainToTrack::Filter_Variable#2)/ */ Context_Filter_Variable_2;
  outC_Filter_Variable_TM_TrainToTrack /* _L151=(TM_TrainToTrack::Filter_Variable#1)/ */ Context_Filter_Variable_1;
  outC_Decode_NID_PACKET_TM_TrainToTrack /* _L150=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */ Context_Decode_NID_PACKET_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every2;
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
  N_ITER /* @3/n_iter/ */ n_iter_CAST_Int_to_N_ITER_1;
  kcg_int64 /* @3/n_iter_int/ */ n_iter_int_CAST_Int_to_N_ITER_1;
  kcg_int64 /* @3/_L9/ */ _L9_CAST_Int_to_N_ITER_1;
  kcg_bool /* @3/_L10/ */ _L10_CAST_Int_to_N_ITER_1;
  kcg_int64 /* @3/_L11/ */ _L11_CAST_Int_to_N_ITER_1;
  kcg_bool /* @3/_L12/ */ _L12_CAST_Int_to_N_ITER_1;
  kcg_int64 /* @3/_L1/ */ _L1_CAST_Int_to_N_ITER_1;
  N_ITER /* @4/n_iter/ */ n_iter_CAST_Int_to_N_ITER_2;
  kcg_int64 /* @4/n_iter_int/ */ n_iter_int_CAST_Int_to_N_ITER_2;
  kcg_int64 /* @4/_L9/ */ _L9_CAST_Int_to_N_ITER_2;
  kcg_bool /* @4/_L10/ */ _L10_CAST_Int_to_N_ITER_2;
  kcg_int64 /* @4/_L11/ */ _L11_CAST_Int_to_N_ITER_2;
  kcg_bool /* @4/_L12/ */ _L12_CAST_Int_to_N_ITER_2;
  kcg_int64 /* @4/_L1/ */ _L1_CAST_Int_to_N_ITER_2;
  P011_TrainTrack_int_TM_TrainToTrack /* _L1/ */ _L1;
  NID_PACKET /* _L69/ */ _L69;
  L_PACKET /* _L70/ */ _L70;
  NC_CDTRAIN /* _L71/ */ _L71;
  NC_TRAIN /* _L100/ */ _L100;
  L_TRAIN /* _L101/ */ _L101;
  V_MAXTRAIN /* _L102/ */ _L102;
  M_LOADINGGAUGE /* _L103/ */ _L103;
  M_AXLELOADCAT /* _L104/ */ _L104;
  M_AIRTIGHT /* _L105/ */ _L105;
  N_AXLE /* _L106/ */ _L106;
  N_ITER /* _L107/ */ _L107;
  N_ITER /* _L108/ */ _L108;
  P011_ntc_list_TM_TrainToTrack /* _L114/ */ _L114;
  P011_TM_TrainToTrack /* _L116/ */ _L116;
  Array11_TM_TrainToTrack /* _L127/ */ _L127;
  kcg_int64 /* _L149/ */ _L149;
  kcg_int64 /* _L148/ */ _L148;
  kcg_int64 /* _L147/ */ _L147;
  kcg_int64 /* _L146/ */ _L146;
  kcg_int64 /* _L145/ */ _L145;
  kcg_int64 /* _L144/ */ _L144;
  kcg_int64 /* _L143/ */ _L143;
  kcg_int64 /* _L142/ */ _L142;
  kcg_int64 /* _L141/ */ _L141;
  kcg_int64 /* _L140/ */ _L140;
  kcg_int64 /* _L139/ */ _L139;
  kcg_bool /* _L150/ */ _L150;
  kcg_int64 /* _L151/ */ _L151;
  kcg_int64 /* _L152/ */ _L152;
  kcg_int64 /* _L153/ */ _L153;
  kcg_int64 /* _L154/ */ _L154;
  kcg_int64 /* _L156/ */ _L156;
  kcg_int64 /* _L157/ */ _L157;
  kcg_int64 /* _L158/ */ _L158;
  kcg_int64 /* _L159/ */ _L159;
  kcg_int64 /* _L160/ */ _L160;
  kcg_int64 /* _L161/ */ _L161;
  kcg_int64 /* _L162/ */ _L162;
  kcg_int64 /* _L163/ */ _L163;
  kcg_int64 /* _L164/ */ _L164;
  array_int64_8 /* _L165/ */ _L165;
  array_int64_5 /* _L166/ */ _L166;
  P011_voltage_list_TM_TrainToTrack /* _L113/ */ _L113;
} outC_C_compr_P011_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P011/ */
extern void C_compr_P011_TM_TrainToTrack(
  /* P011_int/ */
  P011_TrainTrack_int_TM_TrainToTrack *P011_int,
  outC_C_compr_P011_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_compr_P011_reset_TM_TrainToTrack(
  outC_C_compr_P011_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_compr_P011_init_TM_TrainToTrack(
  outC_C_compr_P011_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_TrainToTrack::C_compr_P011/
  @1: (TM_conversions::CAST_Int_to_NID_PACKET#1)
  @2: (TM_conversions::CAST_Int_to_L_PACKET#1)
  @3: (TM_conversions::CAST_Int_to_N_ITER#1)
  @4: (TM_conversions::CAST_Int_to_N_ITER#2)
*/

#endif /* _C_compr_P011_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P011_TM_TrainToTrack.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

