/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _BufferOutput_read_only_TM_lib_internal_H_
#define _BufferOutput_read_only_TM_lib_internal_H_

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
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L3/ */ _L3;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  M_TrainTrack_Message_T_TM_radio_messages /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal /* _L21/ */ _L21;
  M_TrainTrack_Message_T_TM_radio_messages /* _L22/ */ _L22;
} outC_BufferOutput_read_only_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::BufferOutput_read_only/ */
extern void BufferOutput_read_only_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int32 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  outC_BufferOutput_read_only_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BufferOutput_read_only_reset_TM_lib_internal(
  outC_BufferOutput_read_only_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BufferOutput_read_only_init_TM_lib_internal(
  outC_BufferOutput_read_only_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BufferOutput_read_only_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_read_only_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

