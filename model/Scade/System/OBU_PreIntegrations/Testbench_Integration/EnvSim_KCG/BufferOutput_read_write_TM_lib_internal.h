/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _BufferOutput_read_write_TM_lib_internal_H_
#define _BufferOutput_read_write_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferOutput_read_write1_TM_lib_internal.h"
#include "BufferOutput_read_write2_TM_lib_internal.h"
#include "BufferOutput_read_write3_TM_lib_internal.h"
#include "BufferOutput_read_write4_TM_lib_internal.h"
#include "BufferOutput_read_write5_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* Buffer_Out/ */ Buffer_Out;
  kcg_int32 /* Stacksize_new/ */ Stacksize_new;
  M_TrainTrack_Message_T_TM_radio_messages /* Message_out/ */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferOutput_read_write1_TM_lib_internal /* IfBlock1:then:_L1=(TM_lib_internal::BufferOutput_read_write1#6)/ */ Context_BufferOutput_read_write1_6;
  outC_BufferOutput_read_write2_TM_lib_internal /* IfBlock1:else:then:_L4=(TM_lib_internal::BufferOutput_read_write2#4)/ */ Context_BufferOutput_read_write2_4;
  outC_BufferOutput_read_write3_TM_lib_internal /* IfBlock1:else:else:then:_L4=(TM_lib_internal::BufferOutput_read_write3#3)/ */ Context_BufferOutput_read_write3_3;
  outC_BufferOutput_read_write4_TM_lib_internal /* IfBlock1:else:else:else:then:_L1=(TM_lib_internal::BufferOutput_read_write4#3)/ */ Context_BufferOutput_read_write4_3;
  outC_BufferOutput_read_write5_TM_lib_internal /* IfBlock1:else:else:else:else:_L1=(TM_lib_internal::BufferOutput_read_write5#3)/ */ Context_BufferOutput_read_write5_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L5/ */ _L5_then_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:then:_L6/ */ _L6_then_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:else:else:_L6/ */ _L6_else_else_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:else:else:_L5/ */ _L5_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:_L4/ */ _L4_else_else_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:else:else:_L3/ */ _L3_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:_L2/ */ _L2_else_else_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:else:else:_L1/ */ _L1_else_else_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:else:then:_L6/ */ _L6_then_else_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:else:then:_L5/ */ _L5_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:then:_L4/ */ _L4_then_else_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
} outC_BufferOutput_read_write_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferOutput_read_write/ */
extern void BufferOutput_read_write_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int32 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* Bus_Size/ */
  kcg_int32 Bus_Size,
  outC_BufferOutput_read_write_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferOutput_read_write_reset_TM_lib_internal(
  outC_BufferOutput_read_write_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferOutput_read_write_init_TM_lib_internal(
  outC_BufferOutput_read_write_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BufferOutput_read_write_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_read_write_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

