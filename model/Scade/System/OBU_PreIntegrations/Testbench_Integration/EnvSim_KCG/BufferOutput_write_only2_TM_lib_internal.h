/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _BufferOutput_write_only2_TM_lib_internal_H_
#define _BufferOutput_write_only2_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* Buffer_Out/ */ Buffer_Out;
  kcg_int64 /* Stacksize_new/ */ Stacksize_new;
  M_TrainTrack_Message_T_TM_radio_messages /* Message_out/ */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L3/ */ _L3;
  _76_array /* _L4/ */ _L4;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* _L5/ */ _L5;
  _89_array /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  M_TrainTrack_Message_T_TM_radio_messages /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
} outC_BufferOutput_write_only2_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferOutput_write_only2/ */
extern void BufferOutput_write_only2_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  outC_BufferOutput_write_only2_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferOutput_write_only2_reset_TM_lib_internal(
  outC_BufferOutput_write_only2_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferOutput_write_only2_init_TM_lib_internal(
  outC_BufferOutput_write_only2_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BufferOutput_write_only2_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_write_only2_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

