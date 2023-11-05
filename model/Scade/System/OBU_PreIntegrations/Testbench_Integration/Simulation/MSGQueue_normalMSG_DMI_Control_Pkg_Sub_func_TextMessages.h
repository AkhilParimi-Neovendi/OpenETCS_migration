/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isFull/ */ isFull;
  kcg_bool /* isEmpty/ */ isEmpty;
  kcg_int32 /* NumE/ */ NumE;
  _94_array /* queue/ */ queue;
  array_float32_10 /* mm_array/ */ mm_array;
  array_float32_10 /* hh_array/ */ hh_array;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* NumImp/ */ NumImp;
  kcg_int32 /* NumAuxi/ */ NumAuxi;
  _94_array /* impQueue/ */ impQueue;
  _94_array /* auxiQueue/ */ auxiQueue;
  kcg_float32 /* Local_mm/ */ Local_mm;
  kcg_float32 /* Local_hh/ */ Local_hh;
  array_float32_10 /* Local_mm_array_imp/ */ Local_mm_array_imp;
  array_float32_10 /* Local_hh_array_imp/ */ Local_hh_array_imp;
  array_float32_10 /* Local_hh_array_auxi/ */ Local_hh_array_auxi;
  array_float32_10 /* Local_mm_array_auxi/ */ Local_mm_array_auxi;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* _L7=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#1)/ */ Context_NormalMSGQueueCounter_1;
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages /* OperationQueue_IfBlock:then:_L142=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg#9)/ */ Context_MergeMsg_9;
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages /* OperationQueue_IfBlock:then:_L176=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#1)/ */ Context_MergeTime_1;
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages /* OperationQueue_IfBlock:then:_L181=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#2)/ */ Context_MergeTime_2;
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* OperationQueue_IfBlock:then:IfBlock1:else:_L2=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#24)/ */ Context_FIFO_Insert_Op_Normal_24;
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* OperationQueue_IfBlock:then:IfBlock1:then:_L7=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#25)/ */ Context_FIFO_Insert_Op_Normal_25;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* _L16=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#2)/ */ Context_NormalMSGQueueCounter_2;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* _L33=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#3)/ */ Context_NormalMSGQueueCounter_3;
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages /* _L99=(DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete#1)/ */ Context_CheckMsgInsertOrDelete_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* OperationQueue_IfBlock:then:IfBlock1: */ IfBlock1_clock_then_OperationQueue_IfBlock;
  kcg_bool /* StatusQueue_IfBlock:else: */ else_clock_StatusQueue_IfBlock;
  kcg_bool /* OperationQueue_IfBlock: */ OperationQueue_IfBlock_clock;
  kcg_bool /* StatusQueue_IfBlock: */ StatusQueue_IfBlock_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float32_10 /* OperationQueue_IfBlock:then:_L183/ */ _L183_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:_L182/ */ _L182_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L178/ */ _L178_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:_L181/ */ _L181_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L177/ */ _L177_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:_L176/ */ _L176_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:_L175/ */ _L175_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:_L174/ */ _L174_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L141/ */ _L141_then_OperationQueue_IfBlock;
  _94_array /* OperationQueue_IfBlock:then:_L142/ */ _L142_then_OperationQueue_IfBlock;
  _94_array /* OperationQueue_IfBlock:then:_L143/ */ _L143_then_OperationQueue_IfBlock;
  _94_array /* OperationQueue_IfBlock:then:_L144/ */ _L144_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L52/ */ _L52_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:else:_L1/ */ _L1_else_IfBlock1_then_OperationQueue_IfBlock;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* OperationQueue_IfBlock:then:IfBlock1:else:_L6/ */ _L6_else_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:else:_L4/ */ _L4_else_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:else:_L3/ */ _L3_else_IfBlock1_then_OperationQueue_IfBlock;
  _94_array /* OperationQueue_IfBlock:then:IfBlock1:else:_L2/ */ _L2_else_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:else:_L7/ */ _L7_else_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:else:_L8/ */ _L8_else_IfBlock1_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:IfBlock1:else:_L9/ */ _L9_else_IfBlock1_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:IfBlock1:else:_L10/ */ _L10_else_IfBlock1_then_OperationQueue_IfBlock;
  kcg_float32 /* OperationQueue_IfBlock:then:IfBlock1:else:_L13/ */ _L13_else_IfBlock1_then_OperationQueue_IfBlock;
  kcg_float32 /* OperationQueue_IfBlock:then:IfBlock1:else:_L14/ */ _L14_else_IfBlock1_then_OperationQueue_IfBlock;
  kcg_bool /* OperationQueue_IfBlock:then:IfBlock1:else:_L17/ */ _L17_else_IfBlock1_then_OperationQueue_IfBlock;
  _94_array /* OperationQueue_IfBlock:then:IfBlock1:then:_L7/ */ _L7_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:then:_L6/ */ _L6_then_IfBlock1_then_OperationQueue_IfBlock;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* OperationQueue_IfBlock:then:IfBlock1:then:_L5/ */ _L5_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:then:_L3/ */ _L3_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:then:_L8/ */ _L8_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:then:_L9/ */ _L9_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:IfBlock1:then:_L2/ */ _L2_then_IfBlock1_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:IfBlock1:then:_L10/ */ _L10_then_IfBlock1_then_OperationQueue_IfBlock;
  array_float32_10 /* OperationQueue_IfBlock:then:IfBlock1:then:_L11/ */ _L11_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_float32 /* OperationQueue_IfBlock:then:IfBlock1:then:_L14/ */ _L14_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_float32 /* OperationQueue_IfBlock:then:IfBlock1:then:_L15/ */ _L15_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_bool /* OperationQueue_IfBlock:then:IfBlock1:then:_L19/ */ _L19_then_IfBlock1_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:else:_L2/ */ _L2_else_OperationQueue_IfBlock;
  kcg_bool /* StatusQueue_IfBlock:then:_L1/ */ _L1_then_StatusQueue_IfBlock;
  kcg_bool /* StatusQueue_IfBlock:else:else:_L1/ */ _L1_else_else_StatusQueue_IfBlock;
  kcg_bool /* StatusQueue_IfBlock:else:then:_L1/ */ _L1_then_else_StatusQueue_IfBlock;
  kcg_int32 /* NumElem/ */ NumElem;
  kcg_int32 /* CountCommand/ */ CountCommand;
  kcg_bool /* ins/ */ ins;
  kcg_bool /* insertImpMsg/ */ insertImpMsg;
  kcg_int32 /* CountCommand_imp/ */ CountCommand_imp;
  kcg_int32 /* CountCommand_auxi/ */ CountCommand_auxi;
  kcg_bool /* insertAuxiMsg/ */ insertAuxiMsg;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L16/ */ _L16;
  kcg_bool /* _L22/ */ _L22;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L37/ */ _L37;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L101/ */ _L101;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L102/ */ _L102;
  kcg_bool /* _L106/ */ _L106;
  kcg_bool /* _L107/ */ _L107;
  kcg_int32 /* _L108/ */ _L108;
  kcg_int32 /* _L109/ */ _L109;
  kcg_int32 /* _L110/ */ _L110;
  kcg_float32 /* _L113/ */ _L113;
  kcg_float32 /* _L112/ */ _L112;
  tPASPOutput_Array /* _L111/ */ _L111;
} outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG/ */
extern void MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* isImportant/ */
  kcg_bool isImportant,
  /* num_last/ */
  kcg_int32 num_last,
  /* localTime/ */
  tPASPOutput_Array *localTime,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MSGQueue_normalMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  array_float32_10 /* hh_array/ */ Context_hh_array;
  array_float32_10 /* mm_array/ */ Context_mm_array;
  _94_array /* queue/ */ Context_queue;
  kcg_bool /* isEmpty/ */ Context_isEmpty;
  kcg_bool /* isFull/ */ Context_isFull;
  /* ----------------------- local memories  ------------------------- */
  array_float32_10 /* Local_mm_array_auxi/ */ Context_Local_mm_array_auxi;
  array_float32_10 /* Local_hh_array_auxi/ */ Context_Local_hh_array_auxi;
  array_float32_10 /* Local_hh_array_imp/ */ Context_Local_hh_array_imp;
  array_float32_10 /* Local_mm_array_imp/ */ Context_Local_mm_array_imp;
  kcg_float32 /* Local_hh/ */ Context_Local_hh;
  kcg_float32 /* Local_mm/ */ Context_Local_mm;
  _94_array /* auxiQueue/ */ Context_auxiQueue;
  _94_array /* impQueue/ */ Context_impQueue;
  kcg_int32 /* NumAuxi/ */ Context_NumAuxi;
  kcg_int32 /* NumImp/ */ Context_NumImp;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages Context_NormalMSGQueueCounter_3;
  SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages Context_NormalMSGQueueCounter_2;
  SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages Context_FIFO_Insert_Op_Normal_25;
  SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages Context_FIFO_Insert_Op_Normal_24;
  SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages Context_NormalMSGQueueCounter_1;
} SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

