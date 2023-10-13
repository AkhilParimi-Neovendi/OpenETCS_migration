/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_M147_to_header_TM_RBC_conversions_H_
#define _C_M147_to_header_TM_RBC_conversions_H_

#include "kcg_types.h"
#include "CAST_Q_EMERGENCYSTOP_to_int_TM_conversions.h"
#include "CAST_NID_EM_to_int_TM_conversions.h"
#include "CAST_NID_ENGINE_to_int_TM_conversions.h"
#include "CAST_L_MESSAGE_to_int_TM_conversions.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_MessageHd_T_TM_radio_messages /* Message_Header_Out/ */ Message_Header_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_EM_to_int_TM_conversions /* _L21=(TM_conversions::CAST_NID_EM_to_int#1)/ */ Context_CAST_NID_EM_to_int_1;
  outC_CAST_Q_EMERGENCYSTOP_to_int_TM_conversions /* _L23=(TM_conversions::CAST_Q_EMERGENCYSTOP_to_int#1)/ */ Context_CAST_Q_EMERGENCYSTOP_to_int_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* _L24=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */ Context_CAST_T_TRAIN_to_int_1;
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* _L25=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */ Context_CAST_NID_MESSAGE_to_int_1;
  outC_CAST_L_MESSAGE_to_int_TM_conversions /* _L26=(TM_conversions::CAST_L_MESSAGE_to_int#1)/ */ Context_CAST_L_MESSAGE_to_int_1;
  outC_CAST_NID_ENGINE_to_int_TM_conversions /* _L27=(TM_conversions::CAST_NID_ENGINE_to_int#1)/ */ Context_CAST_NID_ENGINE_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_147_T_TM_radio_messages /* _L1/ */ _L1;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L2/ */ _L2;
  NID_ENGINE /* _L7/ */ _L7;
  T_TRAIN /* _L6/ */ _L6;
  L_MESSAGE /* _L5/ */ _L5;
  NID_MESSAGE /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_int64 /* _L19/ */ _L19;
  NID_EM /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  Q_EMERGENCYSTOP /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L27/ */ _L27;
  kcg_int64 /* _L26/ */ _L26;
  kcg_int64 /* _L25/ */ _L25;
  kcg_int64 /* _L24/ */ _L24;
} outC_C_M147_to_header_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::C_M147_to_header/ */
extern void C_M147_to_header_TM_RBC_conversions(
  /* Message_Data_in/ */
  M_147_T_TM_radio_messages *Message_Data_in,
  outC_C_M147_to_header_TM_RBC_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_M147_to_header_reset_TM_RBC_conversions(
  outC_C_M147_to_header_TM_RBC_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_M147_to_header_init_TM_RBC_conversions(
  outC_C_M147_to_header_TM_RBC_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_M147_to_header_TM_RBC_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_M147_to_header_TM_RBC_conversions.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

