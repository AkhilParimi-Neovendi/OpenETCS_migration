/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _80_array /* queue/ */ queue;
  kcg_int64 /* NumE/ */ NumE;
  array_float64_5 /* new_mm/ */ new_mm;
  array_float64_5 /* new_hh/ */ new_hh;
  kcg_bool /* ack_is_Empty/ */ ack_is_Empty;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _80_array /* localQueue/ */ mem_localQueue;
  kcg_int64 /* local_num_ack/ */ mem_local_num_ack;
  kcg_bool init;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages /* _L108=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack#1)/ */ Context_FIFO_Delete_Op_Ack_1;
  outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages /* _L109=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Ack#1)/ */ Context_FIFO_delete_time_Ack_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* LocalNum/ */ LocalNum;
  kcg_int64 /* _L6/ */ _L6;
  _80_array /* _L19/ */ _L19;
  _80_array /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  array_float64_5 /* _L32/ */ _L32;
  array_float64_5 /* _L33/ */ _L33;
  kcg_bool /* _L70/ */ _L70;
  kcg_int64 /* _L76/ */ _L76;
  kcg_bool /* _L80/ */ _L80;
  array_float64_5 /* _L84/ */ _L84;
  array_float64_5 /* _L85/ */ _L85;
  kcg_int64 /* _L91/ */ _L91;
  kcg_bool /* _L93/ */ _L93;
  kcg_int64 /* _L94/ */ _L94;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  _80_array /* _L101/ */ _L101;
  array_float64_5 /* _L103/ */ _L103;
  array_float64_5 /* _L102/ */ _L102;
  kcg_int64 /* _L104/ */ _L104;
  kcg_int64 /* _L105/ */ _L105;
  kcg_int64 /* _L106/ */ _L106;
  kcg_int64 /* _L107/ */ _L107;
  _80_array /* _L108/ */ _L108;
  array_float64_5 /* _L110/ */ _L110;
  array_float64_5 /* _L109/ */ _L109;
} outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg/ */
extern void DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* localQueue/ */
  _80_array *localQueue,
  /* Delete/ */
  kcg_bool Delete,
  /* hh_array/ */
  array_float64_5 *hh_array,
  /* mm_array/ */
  array_float64_5 *mm_array,
  /* local_num_ack/ */
  kcg_int64 local_num_ack,
  /* local_ack_empty/ */
  kcg_bool local_ack_empty,
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void DeleteAckMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DeleteAckMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* ack_is_Empty/ */ Context_ack_is_Empty;
  array_float64_5 /* new_hh/ */ Context_new_hh;
  array_float64_5 /* new_mm/ */ Context_new_mm;
  kcg_int64 /* NumE/ */ Context_NumE;
  _80_array /* queue/ */ Context_queue;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool Context_init;
  kcg_int64 /* local_num_ack/ */ Context_mem_local_num_ack;
  _80_array /* localQueue/ */ Context_mem_localQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages Context_FIFO_delete_time_Ack_1;
} SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

