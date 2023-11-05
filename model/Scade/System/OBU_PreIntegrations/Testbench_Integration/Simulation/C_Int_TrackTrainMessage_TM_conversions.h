/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_Int_TrackTrainMessage_TM_conversions_H_
#define _C_Int_TrackTrainMessage_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"
#include "CAST_Int_to_D_REF_TM_conversions.h"
#include "CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NID_EM_TM_conversions.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_D_SR_TM_conversions.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_TM_transitional /* Message_Out/ */ Message_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_VERSION_TM_conversions /* _L7=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */ Context_CAST_Int_to_M_VERSION_1;
  outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions /* _L10=(TM_conversions::CAST_Int_to_D_EMERGENCYSTOP#1)/ */ Context_CAST_Int_to_D_EMERGENCYSTOP_1;
  outC_CAST_Int_to_D_REF_TM_conversions /* _L26=(TM_conversions::CAST_Int_to_D_REF#1)/ */ Context_CAST_Int_to_D_REF_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* _L9=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */ Context_CAST_Int_to_T_TRAIN_3;
  outC_CAST_Int_to_D_SR_TM_conversions /* _L2=(TM_conversions::CAST_Int_to_D_SR#1)/ */ Context_CAST_Int_to_D_SR_1;
  outC_CAST_Int_to_NID_EM_TM_conversions /* _L5=(TM_conversions::CAST_Int_to_NID_EM#1)/ */ Context_CAST_Int_to_NID_EM_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_T_TRAIN#2)/ */ Context_CAST_Int_to_T_TRAIN_2;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* _L27=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */ Context_CAST_Int_to_NID_LRBG_1;
  outC_CAST_Int_to_M_ACK_TM_conversions /* _L4=(TM_conversions::CAST_Int_to_M_ACK#1)/ */ Context_CAST_Int_to_M_ACK_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* _L8=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */ Context_CAST_Int_to_T_TRAIN_1;
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* _L3=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */ Context_CAST_Int_to_NID_MESSAGE_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @1/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_1_IfBlock1;
  kcg_bool /* @2/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @2/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else: */ else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIR /* @1/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @1/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @1/_L12/ */ _L12_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/_L13/ */ _L13_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @1/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/error/ */ error_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_bool /* @1/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  Q_SCALE /* @2/q_scale/ */ q_scale_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @2/q_scale_int/ */ q_scale_int_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @2/_L4/ */ _L4_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @2/_L2/ */ _L2_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @2/error/ */ error_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @2/q_scale_in/ */ q_scale_in_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @2/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:else:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:then:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  kcg_bool /* @2/IfBlock1:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  Q_SCALE /* _L31/ */ _L31;
  Radio_TrackTrain_Header_T_TM_transitional /* _L30/ */ _L30;
  T_TRAIN /* _L29/ */ _L29;
  Radio_TrackTrain_Header_T_TM /* _L28/ */ _L28;
  NID_LRBG /* _L27/ */ _L27;
  D_REF /* _L26/ */ _L26;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  D_EMERGENCYSTOP /* _L10/ */ _L10;
  T_TRAIN /* _L9/ */ _L9;
  T_TRAIN /* _L8/ */ _L8;
  M_VERSION /* _L7/ */ _L7;
  Q_DIR /* _L6/ */ _L6;
  NID_EM /* _L5/ */ _L5;
  M_ACK /* _L4/ */ _L4;
  NID_MESSAGE /* _L3/ */ _L3;
  D_SR /* _L2/ */ _L2;
} outC_C_Int_TrackTrainMessage_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_Int_TrackTrainMessage/ */
extern void C_Int_TrackTrainMessage_TM_conversions(
  /* Message_In/ */
  Radio_TrackTrain_Header_T_TM *Message_In,
  outC_C_Int_TrackTrainMessage_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_Int_TrackTrainMessage_reset_TM_conversions(
  outC_C_Int_TrackTrainMessage_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_Int_TrackTrainMessage_init_TM_conversions(
  outC_C_Int_TrackTrainMessage_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions::C_Int_TrackTrainMessage/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
  @2: (TM_conversions::CAST_Int_to_Q_SCALE#1)
*/

#endif /* _C_Int_TrackTrainMessage_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_Int_TrackTrainMessage_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

