/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _BufferOutput_read_write1_TM_lib_internal_H_
#define _BufferOutput_read_write1_TM_lib_internal_H_

#include "kcg_types.h"

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
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* index/ */ index;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L23/ */ _L23;
  M_TrainTrack_Message_T_TM_radio_messages /* _L21/ */ _L21;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L14/ */ _L14;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* _L12/ */ _L12;
  _52_array /* _L24/ */ _L24;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* _L25/ */ _L25;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  M_TrainTrack_Message_T_TM_radio_messages /* _L29/ */ _L29;
  M_TrainTrack_Message_T_TM_radio_messages /* _L30/ */ _L30;
  _39_array /* _L31/ */ _L31;
  _39_array /* _L32/ */ _L32;
  M_TrainTrack_Message_T_TM_radio_messages /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  _39_array /* _L37/ */ _L37;
} outC_BufferOutput_read_write1_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferOutput_read_write1/ */
extern void BufferOutput_read_write1_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int32 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  outC_BufferOutput_read_write1_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferOutput_read_write1_reset_TM_lib_internal(
  outC_BufferOutput_read_write1_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferOutput_read_write1_init_TM_lib_internal(
  outC_BufferOutput_read_write1_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BufferOutput_read_write1_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_read_write1_TM_lib_internal.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

