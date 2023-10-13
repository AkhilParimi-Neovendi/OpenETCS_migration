/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_P011_train_compr_TM_TrainToTrack_H_
#define _C_P011_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal.h"
#include "C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"
#include "CAST_N_AXLE_to_int_TM_conversions.h"
#include "CAST_V_MAXTRAIN_to_int_TM_conversions.h"
#include "CAST_L_TRAIN_to_int_TM_conversions.h"
#include "CAST_NC_CDTRAIN_to_int_TM_conversions.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"
#include "CAST_M_LOADINGGAUGE_to_int_TM_conversions.h"
#include "CAST_M_AIRTIGHT_to_int_TM_conversions.h"
#include "CAST_NC_TRAIN_to_int_TM_conversions.h"
#include "CAST_M_AXLELOADCAT_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_TrainTrack_int_TM_TrainToTrack /* P011_int/ */ P011_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_N_ITER_to_int_TM_conversions /* _L107=(TM_conversions::CAST_N_ITER_to_int#1)/ */ Context_CAST_N_ITER_to_int_1;
  outC_CAST_N_AXLE_to_int_TM_conversions /* _L106=(TM_conversions::CAST_N_AXLE_to_int#1)/ */ Context_CAST_N_AXLE_to_int_1;
  outC_CAST_M_AIRTIGHT_to_int_TM_conversions /* _L105=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */ Context_CAST_M_AIRTIGHT_to_int_1;
  outC_CAST_M_AXLELOADCAT_to_int_TM_conversions /* _L104=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */ Context_CAST_M_AXLELOADCAT_to_int_1;
  outC_CAST_M_LOADINGGAUGE_to_int_TM_conversions /* _L103=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */ Context_CAST_M_LOADINGGAUGE_to_int_1;
  outC_CAST_V_MAXTRAIN_to_int_TM_conversions /* _L102=(TM_conversions::CAST_V_MAXTRAIN_to_int#1)/ */ Context_CAST_V_MAXTRAIN_to_int_1;
  outC_CAST_L_TRAIN_to_int_TM_conversions /* _L101=(TM_conversions::CAST_L_TRAIN_to_int#1)/ */ Context_CAST_L_TRAIN_to_int_1;
  outC_CAST_NC_TRAIN_to_int_TM_conversions /* _L100=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */ Context_CAST_NC_TRAIN_to_int_1;
  outC_CAST_NC_CDTRAIN_to_int_TM_conversions /* _L71=(TM_conversions::CAST_NC_CDTRAIN_to_int#1)/ */ Context_CAST_NC_CDTRAIN_to_int_1;
  outC_CAST_L_PACKET_to_int_TM_conversions /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */ Context_CAST_L_PACKET_to_int_1;
  outC_CAST_NID_PACKET_to_int_TM_conversions /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */ Context_CAST_NID_PACKET_to_int_1;
  outC_CAST_N_ITER_to_int_TM_conversions /* _L108=(TM_conversions::CAST_N_ITER_to_int#2)/ */ Context_CAST_N_ITER_to_int_2;
  outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal /* _L113=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage#1)/ */ Context_C_P011_flatten_sections_voltage_1;
  outC_C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal /* _L114=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc#1)/ */ Context_C_P011_flatten_sections_ntc_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_TM_TrainToTrack /* _L1/ */ _L1;
  NC_CDTRAIN /* _L5/ */ _L5;
  L_PACKET /* _L4/ */ _L4;
  NID_PACKET /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  array_int64_11 /* _L68/ */ _L68;
  kcg_int64 /* _L69/ */ _L69;
  kcg_int64 /* _L70/ */ _L70;
  kcg_int64 /* _L71/ */ _L71;
  array_int64_25 /* _L88/ */ _L88;
  NC_TRAIN /* _L99/ */ _L99;
  L_TRAIN /* _L98/ */ _L98;
  V_MAXTRAIN /* _L97/ */ _L97;
  M_LOADINGGAUGE /* _L96/ */ _L96;
  M_AXLELOADCAT /* _L95/ */ _L95;
  M_AIRTIGHT /* _L94/ */ _L94;
  N_AXLE /* _L93/ */ _L93;
  N_ITER /* _L92/ */ _L92;
  P011_voltage_list_TM_TrainToTrack /* _L91/ */ _L91;
  N_ITER /* _L90/ */ _L90;
  P011_ntc_list_TM_TrainToTrack /* _L89/ */ _L89;
  kcg_int64 /* _L100/ */ _L100;
  kcg_int64 /* _L101/ */ _L101;
  kcg_int64 /* _L102/ */ _L102;
  kcg_int64 /* _L103/ */ _L103;
  kcg_int64 /* _L104/ */ _L104;
  kcg_int64 /* _L105/ */ _L105;
  kcg_int64 /* _L106/ */ _L106;
  kcg_int64 /* _L107/ */ _L107;
  kcg_int64 /* _L108/ */ _L108;
  P044_other_data_TM_TrainToTrack /* _L109/ */ _L109;
  array_int64_20 /* _L110/ */ _L110;
  array_int64_9 /* _L111/ */ _L111;
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L113/ */ _L113;
  P011_ntc_list_array_T_TM_TrainToTrack /* _L114/ */ _L114;
} outC_C_P011_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P011_train_compr/ */
extern void C_P011_train_compr_TM_TrainToTrack(
  /* P011_in/ */
  P011_TM_TrainToTrack *P011_in,
  outC_C_P011_train_compr_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_train_compr_reset_TM_TrainToTrack(
  outC_C_P011_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_train_compr_init_TM_TrainToTrack(
  outC_C_P011_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_train_compr_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_train_compr_TM_TrainToTrack.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

