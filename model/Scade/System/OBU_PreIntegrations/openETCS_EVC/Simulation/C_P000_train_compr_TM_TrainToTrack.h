/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _C_P000_train_compr_TM_TrainToTrack_H_
#define _C_P000_train_compr_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "CAST_D_LRBG_to_int_TM_conversions.h"
#include "CAST_NID_NTC_to_int_TM_conversions.h"
#include "CAST_Q_DIRTRAIN_to_int_TM_conversions.h"
#include "CAST_V_TRAIN_to_int_TM_conversions.h"
#include "CAST_L_TRAININT_to_int_TM_conversions.h"
#include "CAST_Q_LENGTH_to_int_TM_conversions.h"
#include "CAST_L_DOUBTUNDER_to_int_TM_conversions.h"
#include "CAST_L_DOUBTOVER_to_int_TM_conversions.h"
#include "CAST_Q_DRLRBG_to_int_TM_conversions.h"
#include "CAST_Q_DIRLRBG_to_int_TM_conversions.h"
#include "CAST_NID_LRBG_to_int_TM_conversions.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"
#include "CAST_M_LEVEL_to_int_TM_conversions.h"
#include "CAST_M_MODE_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P000_TrainTrack_int_TM_TrainToTrack /* P000_int/ */ P000_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_NTC_to_int_TM_conversions /* _L85=(TM_conversions::CAST_NID_NTC_to_int#1)/ */ Context_CAST_NID_NTC_to_int_1;
  outC_CAST_M_LEVEL_to_int_TM_conversions /* _L84=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */ Context_CAST_M_LEVEL_to_int_1;
  outC_CAST_M_MODE_to_int_TM_conversions /* _L83=(TM_conversions::CAST_M_MODE_to_int#1)/ */ Context_CAST_M_MODE_to_int_1;
  outC_CAST_Q_DIRTRAIN_to_int_TM_conversions /* _L82=(TM_conversions::CAST_Q_DIRTRAIN_to_int#1)/ */ Context_CAST_Q_DIRTRAIN_to_int_1;
  outC_CAST_V_TRAIN_to_int_TM_conversions /* _L81=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */ Context_CAST_V_TRAIN_to_int_1;
  outC_CAST_L_TRAININT_to_int_TM_conversions /* _L80=(TM_conversions::CAST_L_TRAININT_to_int#1)/ */ Context_CAST_L_TRAININT_to_int_1;
  outC_CAST_Q_LENGTH_to_int_TM_conversions /* _L79=(TM_conversions::CAST_Q_LENGTH_to_int#1)/ */ Context_CAST_Q_LENGTH_to_int_1;
  outC_CAST_L_DOUBTUNDER_to_int_TM_conversions /* _L78=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */ Context_CAST_L_DOUBTUNDER_to_int_1;
  outC_CAST_L_DOUBTOVER_to_int_TM_conversions /* _L77=(TM_conversions::CAST_L_DOUBTOVER_to_int#2)/ */ Context_CAST_L_DOUBTOVER_to_int_2;
  outC_CAST_Q_DRLRBG_to_int_TM_conversions /* _L75=(TM_conversions::CAST_Q_DRLRBG_to_int#2)/ */ Context_CAST_Q_DRLRBG_to_int_2;
  outC_CAST_Q_DIRLRBG_to_int_TM_conversions /* _L74=(TM_conversions::CAST_Q_DIRLRBG_to_int#1)/ */ Context_CAST_Q_DIRLRBG_to_int_1;
  outC_CAST_NID_LRBG_to_int_TM_conversions /* _L72=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */ Context_CAST_NID_LRBG_to_int_1;
  outC_CAST_Q_SCALE_to_int_TM_conversions /* _L71=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */ Context_CAST_Q_SCALE_to_int_1;
  outC_CAST_L_PACKET_to_int_TM_conversions /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */ Context_CAST_L_PACKET_to_int_1;
  outC_Encode_NID_PACKET_TM_TrainToTrack /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#2)/ */ Context_Encode_NID_PACKET_2;
  outC_CAST_NID_PACKET_to_int_TM_conversions /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */ Context_CAST_NID_PACKET_to_int_1;
  outC_CAST_D_LRBG_to_int_TM_conversions /* _L93=(TM_conversions::CAST_D_LRBG_to_int#1)/ */ Context_CAST_D_LRBG_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P000_TM_TrainToTrack /* _L1/ */ _L1;
  M_LEVEL /* _L16/ */ _L16;
  M_MODE /* _L15/ */ _L15;
  Q_DIRTRAIN /* _L14/ */ _L14;
  V_TRAIN /* _L13/ */ _L13;
  L_TRAININT /* _L12/ */ _L12;
  Q_LENGTH /* _L11/ */ _L11;
  L_DOUBTUNDER /* _L10/ */ _L10;
  L_DOUBTOVER /* _L9/ */ _L9;
  Q_DLRBG /* _L8/ */ _L8;
  Q_DIRLRBG /* _L7/ */ _L7;
  NID_LRBG /* _L6/ */ _L6;
  Q_SCALE /* _L5/ */ _L5;
  L_PACKET /* _L4/ */ _L4;
  NID_PACKET /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L69/ */ _L69;
  kcg_int32 /* _L70/ */ _L70;
  kcg_int32 /* _L71/ */ _L71;
  kcg_int32 /* _L72/ */ _L72;
  NID_NTC /* _L73/ */ _L73;
  kcg_int32 /* _L74/ */ _L74;
  kcg_int32 /* _L75/ */ _L75;
  kcg_int32 /* _L77/ */ _L77;
  kcg_int32 /* _L78/ */ _L78;
  kcg_int32 /* _L79/ */ _L79;
  kcg_int32 /* _L80/ */ _L80;
  kcg_int32 /* _L81/ */ _L81;
  kcg_int32 /* _L82/ */ _L82;
  kcg_int32 /* _L83/ */ _L83;
  kcg_int32 /* _L84/ */ _L84;
  kcg_int32 /* _L85/ */ _L85;
  array_int32_17 /* _L68/ */ _L68;
  kcg_int32 /* _L91/ */ _L91;
  D_LRBG /* _L92/ */ _L92;
  kcg_int32 /* _L93/ */ _L93;
  kcg_int32 /* _L94/ */ _L94;
} outC_C_P000_train_compr_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_P000_train_compr/ */
extern void C_P000_train_compr_TM_TrainToTrack(
  /* P000_in/ */
  P000_TM_TrainToTrack *P000_in,
  outC_C_P000_train_compr_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P000_train_compr_reset_TM_TrainToTrack(
  outC_C_P000_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P000_train_compr_init_TM_TrainToTrack(
  outC_C_P000_train_compr_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P000_train_compr_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P000_train_compr_TM_TrainToTrack.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

