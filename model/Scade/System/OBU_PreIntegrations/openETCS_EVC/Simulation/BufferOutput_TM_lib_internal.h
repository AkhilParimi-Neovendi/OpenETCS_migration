/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _BufferOutput_TM_lib_internal_H_
#define _BufferOutput_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferOutput_read_only_TM_lib_internal.h"
#include "BufferOutput_read_write_TM_lib_internal.h"
#include "BufferOutput_write_only_TM_lib_internal.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* Out/ */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* buffer/ */ buffer;
  kcg_int32 /* stacksize/ */ stacksize;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferOutput_read_only_TM_lib_internal /* IfBlock1:then:_L8=(TM_lib_internal::BufferOutput_read_only#1)/ */ Context_BufferOutput_read_only_1;
  outC_BufferOutput_read_write_TM_lib_internal /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferOutput_read_write#1)/ */ Context_BufferOutput_read_write_1;
  outC_BufferOutput_write_only_TM_lib_internal /* IfBlock1:else:else:then:_L7=(TM_lib_internal::BufferOutput_write_only#1)/ */ Context_BufferOutput_write_only_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L7=(TM_TrainTrack_Bus::CheckSpace#2)/ */ Context_CheckSpace_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L8/ */ _L8_then_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:then:_L7/ */ _L7_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L6/ */ _L6_then_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:then:_L5/ */ _L5_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:else:_L6/ */ _L6_else_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:else:_L5/ */ _L5_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:_L4/ */ _L4_else_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  kcg_bool /* c_r/ */ c_r;
  kcg_bool /* c_w/ */ c_w;
  kcg_bool /* c_rw/ */ c_rw;
  kcg_int32 /* bussize/ */ bussize;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_int32 /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
} outC_BufferOutput_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferOutput/ */
extern void BufferOutput_TM_lib_internal(
  /* In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *In,
  /* Write/ */
  kcg_bool Write,
  outC_BufferOutput_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferOutput_reset_TM_lib_internal(
  outC_BufferOutput_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferOutput_init_TM_lib_internal(
  outC_BufferOutput_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BufferOutput_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_TM_lib_internal.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

