/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _C_header_to_M016_TM_RBC_conversions_H_
#define _C_header_to_M016_TM_RBC_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NID_EM_TM_conversions.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_016_T_TM_radio_messages /* message_out/ */ message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_ACK_TM_conversions /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */ Context_CAST_Int_to_M_ACK_1;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */ Context_CAST_Int_to_NID_LRBG_1;
  outC_CAST_Int_to_NID_EM_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_NID_EM#1)/ */ Context_CAST_Int_to_NID_EM_1;
  outC_CAST_Int_to_L_MESSAGE_TM_conversions /* _L31=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */ Context_CAST_Int_to_L_MESSAGE_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* _L32=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */ Context_CAST_Int_to_T_TRAIN_1;
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* _L33=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */ Context_CAST_Int_to_NID_MESSAGE_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* _L1/ */ _L1;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  M_016_T_TM_radio_messages /* _L26/ */ _L26;
  M_ACK /* _L27/ */ _L27;
  NID_LRBG /* _L28/ */ _L28;
  NID_EM /* _L29/ */ _L29;
  NID_MESSAGE /* _L33/ */ _L33;
  T_TRAIN /* _L32/ */ _L32;
  L_MESSAGE /* _L31/ */ _L31;
} outC_C_header_to_M016_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::C_header_to_M016/ */
extern void C_header_to_M016_TM_RBC_conversions(
  /* header_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M016_TM_RBC_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_header_to_M016_reset_TM_RBC_conversions(
  outC_C_header_to_M016_TM_RBC_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_header_to_M016_init_TM_RBC_conversions(
  outC_C_header_to_M016_TM_RBC_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_header_to_M016_TM_RBC_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_header_to_M016_TM_RBC_conversions.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

