/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_compr_P003_TM_TrainToTrack_H_
#define _C_compr_P003_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"
#include "Filter_Variable_TM_TrainToTrack.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_TM_TrainToTrack /* P003_out/ */ P003_out;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  P003_nid_radio_list_int_t_TM_TrainToTrack /* _L89/ */ _L89;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_N_ITER_to_int_TM_conversions /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */ Context_CAST_N_ITER_to_int_1;
  outC_CAST_L_PACKET_to_int_TM_conversions /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */ Context_CAST_L_PACKET_to_int_1;
  outC_CAST_NID_PACKET_to_int_TM_conversions /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */ Context_CAST_NID_PACKET_to_int_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L106=(TM_TrainToTrack::Filter_Variable#1)/ */ Context_Filter_Variable_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L107=(TM_TrainToTrack::Filter_Variable#2)/ */ Context_Filter_Variable_2;
  outC_Filter_Variable_TM_TrainToTrack /* _L108=(TM_TrainToTrack::Filter_Variable#3)/ */ Context_Filter_Variable_3;
  outC_C_P003_flatten_sections_TM_TrainToTrack_lib_internal /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */ Context_C_P003_flatten_sections_1;
  outC_Decode_NID_PACKET_TM_TrainToTrack /* _L105=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */ Context_Decode_NID_PACKET_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003_TrainTrack_int_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_int64 /* _L69/ */ _L69;
  kcg_int64 /* _L70/ */ _L70;
  kcg_int64 /* _L71/ */ _L71;
  array_int64_3 /* _L94/ */ _L94;
  kcg_int64 /* _L100/ */ _L100;
  kcg_int64 /* _L99/ */ _L99;
  kcg_int64 /* _L98/ */ _L98;
  P003_TM_TrainToTrack /* _L103/ */ _L103;
  array_int64_5 /* _L104/ */ _L104;
  kcg_bool /* _L105/ */ _L105;
  kcg_int64 /* _L106/ */ _L106;
  kcg_int64 /* _L107/ */ _L107;
  kcg_int64 /* _L108/ */ _L108;
} outC_C_compr_P003_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P003/ */
extern void C_compr_P003_TM_TrainToTrack(
  /* P003_int/ */
  P003_TrainTrack_int_TM_TrainToTrack *P003_int,
  outC_C_compr_P003_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_compr_P003_reset_TM_TrainToTrack(
  outC_C_compr_P003_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_compr_P003_init_TM_TrainToTrack(
  outC_C_compr_P003_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_compr_P003_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P003_TM_TrainToTrack.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

