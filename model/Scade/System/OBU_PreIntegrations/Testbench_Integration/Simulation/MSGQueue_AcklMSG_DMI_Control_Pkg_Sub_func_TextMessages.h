/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _82_array /* queue/ */ queue;
  kcg_int32 /* NumE/ */ NumE;
  kcg_bool /* AckisFull/ */ AckisFull;
  kcg_bool /* AckisEmpty/ */ AckisEmpty;
  array_float32_5 /* hh_array/ */ hh_array;
  array_float32_5 /* mm_array/ */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_float32 /* Local_mm/ */ Local_mm;
  kcg_float32 /* Local_hh/ */ Local_hh;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages /* OperationQueue_IfBlock:then:_L32=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK#1)/ */ Context_FIFO_Insert_Op_ACK_1;
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* _L97=(DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter#1)/ */ Context_ACKMsgQueueCounter_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* StatusQueue_IfBlock:else: */ else_clock_StatusQueue_IfBlock;
  kcg_bool /* StatusQueue_IfBlock: */ StatusQueue_IfBlock_clock;
  kcg_bool /* OperationQueue_IfBlock: */ OperationQueue_IfBlock_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* StatusQueue_IfBlock:then:_L1/ */ _L1_then_StatusQueue_IfBlock;
  kcg_bool /* StatusQueue_IfBlock:else:else:_L1/ */ _L1_else_else_StatusQueue_IfBlock;
  kcg_bool /* StatusQueue_IfBlock:else:then:_L1/ */ _L1_then_else_StatusQueue_IfBlock;
  _82_array /* OperationQueue_IfBlock:then:_L32/ */ _L32_then_OperationQueue_IfBlock;
  array_float32_5 /* OperationQueue_IfBlock:then:_L33/ */ _L33_then_OperationQueue_IfBlock;
  array_float32_5 /* OperationQueue_IfBlock:then:_L34/ */ _L34_then_OperationQueue_IfBlock;
  kcg_bool /* OperationQueue_IfBlock:then:_L31/ */ _L31_then_OperationQueue_IfBlock;
  kcg_float32 /* OperationQueue_IfBlock:then:_L27/ */ _L27_then_OperationQueue_IfBlock;
  kcg_float32 /* OperationQueue_IfBlock:then:_L26/ */ _L26_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L23/ */ _L23_then_OperationQueue_IfBlock;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* OperationQueue_IfBlock:then:_L2/ */ _L2_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L5/ */ _L5_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L6/ */ _L6_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:then:_L7/ */ _L7_then_OperationQueue_IfBlock;
  kcg_int32 /* OperationQueue_IfBlock:else:_L2/ */ _L2_else_OperationQueue_IfBlock;
  kcg_int32 /* NumElem/ */ NumElem;
  kcg_int32 /* CountCommand/ */ CountCommand;
  kcg_bool /* ins/ */ ins;
  kcg_bool /* _L55/ */ _L55;
  kcg_int32 /* _L77/ */ _L77;
  kcg_bool /* _L76/ */ _L76;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L89/ */ _L89;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_int32 /* _L96/ */ _L96;
  kcg_int32 /* _L97/ */ _L97;
  kcg_float32 /* _L100/ */ _L100;
  kcg_float32 /* _L99/ */ _L99;
  tPASPOutput_Array /* _L98/ */ _L98;
} outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG/ */
extern void MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* last_num/ */
  kcg_int32 last_num,
  /* localTime/ */
  tPASPOutput_Array *localTime,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MSGQueue_AcklMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  array_float32_5 /* mm_array/ */ Context_mm_array;
  array_float32_5 /* hh_array/ */ Context_hh_array;
  kcg_bool /* AckisEmpty/ */ Context_AckisEmpty;
  kcg_bool /* AckisFull/ */ Context_AckisFull;
  _82_array /* queue/ */ Context_queue;
  /* ----------------------- local memories  ------------------------- */
  kcg_float32 /* Local_hh/ */ Context_Local_hh;
  kcg_float32 /* Local_mm/ */ Context_Local_mm;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages Context_ACKMsgQueueCounter_1;
  SV_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages Context_FIFO_Insert_Op_ACK_1;
} SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

