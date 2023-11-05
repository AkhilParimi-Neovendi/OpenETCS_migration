/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_header_to_M015_TM_RBC_conversions_H_
#define _C_header_to_M015_TM_RBC_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"
#include "CAST_Int_to_D_REF_TM_conversions.h"
#include "CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NID_EM_TM_conversions.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_015_T_TM_radio_messages /* message_out/ */ message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_ACK_TM_conversions /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */ Context_CAST_Int_to_M_ACK_1;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */ Context_CAST_Int_to_NID_LRBG_1;
  outC_CAST_Int_to_NID_EM_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_NID_EM#1)/ */ Context_CAST_Int_to_NID_EM_1;
  outC_CAST_Int_to_D_REF_TM_conversions /* _L31=(TM_conversions::CAST_Int_to_D_REF#1)/ */ Context_CAST_Int_to_D_REF_1;
  outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions /* _L33=(TM_conversions::CAST_Int_to_D_EMERGENCYSTOP#1)/ */ Context_CAST_Int_to_D_EMERGENCYSTOP_1;
  outC_CAST_Int_to_L_MESSAGE_TM_conversions /* _L35=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */ Context_CAST_Int_to_L_MESSAGE_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* _L36=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */ Context_CAST_Int_to_T_TRAIN_1;
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* _L37=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */ Context_CAST_Int_to_NID_MESSAGE_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @1/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else: */ else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1;
  kcg_bool /* @2/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @2/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* @1/q_scale/ */ q_scale_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/q_scale_int/ */ q_scale_int_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/_L4/ */ _L4_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/_L2/ */ _L2_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/error/ */ error_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/q_scale_in/ */ q_scale_in_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:then:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  kcg_bool /* @1/IfBlock1:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  Q_DIR /* @2/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @2/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @2/_L12/ */ _L12_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @2/_L13/ */ _L13_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @2/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @2/error/ */ error_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @2/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @2/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @2/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  Q_DIR /* @2/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  Q_DIR /* @2/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_bool /* @2/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L1/ */ _L1;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  M_015_T_TM_radio_messages /* _L26/ */ _L26;
  M_ACK /* _L27/ */ _L27;
  NID_LRBG /* _L28/ */ _L28;
  NID_EM /* _L29/ */ _L29;
  Q_SCALE /* _L30/ */ _L30;
  D_REF /* _L31/ */ _L31;
  Q_DIR /* _L32/ */ _L32;
  D_EMERGENCYSTOP /* _L33/ */ _L33;
  NID_MESSAGE /* _L37/ */ _L37;
  T_TRAIN /* _L36/ */ _L36;
  L_MESSAGE /* _L35/ */ _L35;
} outC_C_header_to_M015_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::C_header_to_M015/ */
extern void C_header_to_M015_TM_RBC_conversions(
  /* header_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M015_TM_RBC_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_header_to_M015_reset_TM_RBC_conversions(
  outC_C_header_to_M015_TM_RBC_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_header_to_M015_init_TM_RBC_conversions(
  outC_C_header_to_M015_TM_RBC_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_RBC_conversions::C_header_to_M015/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @2: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

#endif /* _C_header_to_M015_TM_RBC_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_header_to_M015_TM_RBC_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

