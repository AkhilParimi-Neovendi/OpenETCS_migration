/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _BufferMsg_TM_lib_internal_H_
#define _BufferMsg_TM_lib_internal_H_

#include "kcg_types.h"
#include "BufferMsg_read_only_TM_lib_internal.h"
#include "BufferMsg_read_write_TM_lib_internal.h"
#include "BufferMsg_write_only_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* Out/ */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* buffer/ */ buffer;
  kcg_int64 /* stacksize/ */ stacksize;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferMsg_read_only_TM_lib_internal /* IfBlock1:then:_L8=(TM_lib_internal::BufferMsg_read_only#1)/ */ Context_BufferMsg_read_only_1;
  outC_BufferMsg_read_write_TM_lib_internal /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferMsg_read_write#1)/ */ Context_BufferMsg_read_write_1;
  outC_BufferMsg_write_only_TM_lib_internal /* IfBlock1:else:else:then:_L7=(TM_lib_internal::BufferMsg_write_only#1)/ */ Context_BufferMsg_write_only_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* IfBlock1:else:else:then:_L7/ */ _L7_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L6/ */ _L6_then_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:then:_L5/ */ _L5_then_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:else:else:_L5/ */ _L5_else_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:else:_L4/ */ _L4_else_else_else_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_bool /* c_r/ */ c_r;
  kcg_bool /* c_w/ */ c_w;
  kcg_bool /* c_rw/ */ c_rw;
  M_TrainTrack_Message_T_TM_radio_messages /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
} outC_BufferMsg_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferMsg/ */
extern void BufferMsg_TM_lib_internal(
  /* In/ */
  M_TrainTrack_Message_T_TM_radio_messages *In,
  /* Write/ */
  kcg_bool Write,
  outC_BufferMsg_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferMsg_reset_TM_lib_internal(
  outC_BufferMsg_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferMsg_init_TM_lib_internal(
  outC_BufferMsg_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* stacksize/ */ Context_stacksize;
  M_TrainTrackMessage_buffer_t_TM_lib_internal /* buffer/ */ Context_buffer;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_BufferMsg_TM_lib_internal;

extern void kcg_save_SV_BufferMsg_TM_lib_internal(
  SV_BufferMsg_TM_lib_internal *SV,
  outC_BufferMsg_TM_lib_internal *outC);
extern void kcg_load_SV_BufferMsg_TM_lib_internal(
  outC_BufferMsg_TM_lib_internal *outC,
  SV_BufferMsg_TM_lib_internal *SV);



#endif /* _BufferMsg_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferMsg_TM_lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

