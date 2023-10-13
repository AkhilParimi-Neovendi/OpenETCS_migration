/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_5 /* new_mm_array/ */ new_mm_array;
  array_float64_5 /* new_hh_array/ */ new_hh_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages /* _L15=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack#1)/ */ Context_deleteTime_iterator_ack_1[5];
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack#2)/ */ Context_deleteTime_iterator_ack_2[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float64_5 /* _L10/ */ _L10;
  array_int64_5 /* _L4/ */ _L4;
  array_float64_5 /* _L1/ */ _L1;
  kcg_int64 /* _L13/ */ _L13;
  array_float64_5 /* _L15/ */ _L15;
  array_float64_5 /* _L17/ */ _L17;
  kcg_int64 /* _L22/ */ _L22;
  array_float64_5 /* _L21/ */ _L21;
  array_float64_5 /* _L20/ */ _L20;
  array_int64_5 /* _L19/ */ _L19;
  array_float64_5_5 /* _L24/ */ _L24;
  array_float64_5_5 /* _L28/ */ _L28;
} outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Ack/ */
extern void FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* hh_array/ */
  array_float64_5 *hh_array,
  /* mm_array/ */
  array_float64_5 *mm_array,
  outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_delete_time_Ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FIFO_delete_time_Ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  array_float64_5 /* new_hh_array/ */ Context_new_hh_array;
  array_float64_5 /* new_mm_array/ */ Context_new_mm_array;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

