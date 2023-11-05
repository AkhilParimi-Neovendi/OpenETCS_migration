/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* NumE/ */ NumE;
  array_float32_10 /* new_mm/ */ new_mm;
  array_float32_10 /* new_hh/ */ new_hh;
  kcg_bool /* msg_is_Empty/ */ msg_is_Empty;
  _94_array /* MsgQueue/ */ MsgQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _94_array /* localQueue/ */ mem_localQueue;
  kcg_int32 /* local_num_ack/ */ mem_local_num_ack;
  kcg_bool init;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* _L138=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal#1)/ */ Context_FIFO_Delete_Op_Normal_1;
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* _L139=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal#1)/ */ Context_FIFO_delete_time_Normal_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* LocalNum/ */ LocalNum;
  kcg_int32 /* _L91/ */ _L91;
  kcg_bool /* _L93/ */ _L93;
  kcg_int32 /* _L94/ */ _L94;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_int32 /* _L118/ */ _L118;
  _94_array /* _L112/ */ _L112;
  kcg_int32 /* _L113/ */ _L113;
  kcg_int32 /* _L111/ */ _L111;
  kcg_int32 /* _L110/ */ _L110;
  kcg_bool /* _L119/ */ _L119;
  kcg_int32 /* _L121/ */ _L121;
  kcg_int32 /* _L123/ */ _L123;
  _94_array /* _L125/ */ _L125;
  _94_array /* _L126/ */ _L126;
  array_float32_10 /* _L134/ */ _L134;
  array_float32_10 /* _L135/ */ _L135;
  array_float32_10 /* _L131/ */ _L131;
  array_float32_10 /* _L130/ */ _L130;
  array_float32_10 /* _L129/ */ _L129;
  array_float32_10 /* _L128/ */ _L128;
  kcg_bool /* _L137/ */ _L137;
  _94_array /* _L138/ */ _L138;
  array_float32_10 /* _L140/ */ _L140;
  array_float32_10 /* _L139/ */ _L139;
} outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg/ */
extern void DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* localQueue/ */
  _94_array *localQueue,
  /* hh_array/ */
  array_float32_10 *hh_array,
  /* mm_array/ */
  array_float32_10 *mm_array,
  /* local_num_ack/ */
  kcg_int32 local_num_ack,
  /* is_empty/ */
  kcg_bool is_empty,
  /* deleteMsg/ */
  kcg_bool deleteMsg,
  /* num/ */
  kcg_int32 num,
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void DeleteNormalMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DeleteNormalMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  _94_array /* MsgQueue/ */ Context_MsgQueue;
  kcg_bool /* msg_is_Empty/ */ Context_msg_is_Empty;
  array_float32_10 /* new_hh/ */ Context_new_hh;
  array_float32_10 /* new_mm/ */ Context_new_mm;
  kcg_int32 /* NumE/ */ Context_NumE;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool Context_init;
  kcg_int32 /* local_num_ack/ */ Context_mem_local_num_ack;
  _94_array /* localQueue/ */ Context_mem_localQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages Context_FIFO_delete_time_Normal_1;
} SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

