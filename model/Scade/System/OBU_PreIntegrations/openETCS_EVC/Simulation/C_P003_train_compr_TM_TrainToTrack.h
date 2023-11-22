/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _C_P003_train_compr_TM_TrainToTrack_H_
#define _C_P003_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_TrainTrack_int_TM_TrainToTrack /* P003_int/ */ P003_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_N_ITER_to_int_TM_conversions /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */ Context_CAST_N_ITER_to_int_1;
  outC_CAST_L_PACKET_to_int_TM_conversions /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */ Context_CAST_L_PACKET_to_int_1;
  outC_C_P003_flatten_sections_TM_TrainToTrack_lib_internal /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */ Context_C_P003_flatten_sections_1;
  outC_Encode_NID_PACKET_TM_TrainToTrack /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#1)/ */ Context_Encode_NID_PACKET_1;
  outC_CAST_NID_PACKET_to_int_TM_conversions /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */ Context_CAST_NID_PACKET_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003_TM_TrainToTrack /* _L1/ */ _L1;
  P003_nid_radio_list_t_TM_TrainToTrack /* _L6/ */ _L6;
  N_ITER /* _L5/ */ _L5;
  L_PACKET /* _L4/ */ _L4;
  NID_PACKET /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  array_int32_3 /* _L68/ */ _L68;
  kcg_int32 /* _L69/ */ _L69;
  kcg_int32 /* _L70/ */ _L70;
  kcg_int32 /* _L71/ */ _L71;
  P003_nid_radio_list_int_t_TM_TrainToTrack /* _L89/ */ _L89;
  array_int32_8 /* _L90/ */ _L90;
  kcg_int32 /* _L91/ */ _L91;
} outC_C_P003_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P003_train_compr/ */
extern void C_P003_train_compr_TM_TrainToTrack(
  /* P003_in/ */
  P003_TM_TrainToTrack *P003_in,
  outC_C_P003_train_compr_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003_train_compr_reset_TM_TrainToTrack(
  outC_C_P003_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003_train_compr_init_TM_TrainToTrack(
  outC_C_P003_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P003_train_compr_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003_train_compr_TM_TrainToTrack.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

