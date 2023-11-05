/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _94_array /* queue/ */ queue;
  array_float32_10 /* hh_array/ */ hh_array;
  array_float32_10 /* mm_array/ */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages /* _L34=(DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal#1)/ */ Context_InsertStructMSGFIFO_iterator_normal_1[10];
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* _L22=(DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator#1)/ */ Context_InsertTime_iterator_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  _5_array /* _L7/ */ _L7;
  array_int32_10 /* _L9/ */ _L9;
  array_int32_10 /* _L26/ */ _L26;
  array_float32_10 /* _L25/ */ _L25;
  kcg_int32 /* _L22/ */ _L22;
  array_float32_10 /* _L23/ */ _L23;
  array_float32_10 /* _L24/ */ _L24;
  kcg_bool /* _L21/ */ _L21;
  kcg_float32 /* _L20/ */ _L20;
  array_float32_10 /* _L19/ */ _L19;
  kcg_int32 /* _L18/ */ _L18;
  kcg_float32 /* _L17/ */ _L17;
  kcg_bool /* _L29/ */ _L29;
  array_bool_10 /* _L31/ */ _L31;
  _94_array /* _L34/ */ _L34;
  _94_array /* _L36/ */ _L36;
} outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal/ */
extern void FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Pos/ */
  kcg_int32 Pos,
  /* Messaggio/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* new_mm/ */
  kcg_float32 new_mm,
  /* new_hh/ */
  kcg_float32 new_hh,
  /* isFull/ */
  kcg_bool isFull,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  array_float32_10 /* mm_array/ */ Context_mm_array;
  array_float32_10 /* hh_array/ */ Context_hh_array;
  _94_array /* queue/ */ Context_queue;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages Context_InsertTime_iterator_1[10];
  SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages Context_InsertStructMSGFIFO_iterator_normal_1[10];
} SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

