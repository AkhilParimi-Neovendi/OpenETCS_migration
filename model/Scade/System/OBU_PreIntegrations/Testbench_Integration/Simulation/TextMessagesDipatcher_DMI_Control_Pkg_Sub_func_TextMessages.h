/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _80_array /* AckMsgQueue/ */ AckMsgQueue;
  _95_array /* MsgQueue/ */ MsgQueue;
  kcg_int64 /* NumE/ */ NumE;
  kcg_bool /* AckisEmpty/ */ AckisEmpty;
  kcg_bool /* isEmpty/ */ isEmpty;
  kcg_int64 /* NumAckMsg/ */ NumAckMsg;
  array_float64_10 /* hh_array/ */ hh_array;
  array_float64_10 /* mm_array/ */ mm_array;
  array_float64_5 /* ack_hh_array/ */ ack_hh_array;
  array_float64_5 /* ack_mm_array/ */ ack_mm_array;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* debugExpired/ */ debugExpired;
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* numAckMsg/ */ numAckMsg;
  array_float64_5 /* mm_local_array_ack/ */ mm_local_array_ack;
  array_float64_5 /* hh_local_array_ack/ */ hh_local_array_ack;
  _80_array /* Local_AckMsgQueue/ */ Local_AckMsgQueue;
  kcg_int64 /* numNormalMsg/ */ numNormalMsg;
  _95_array /* Local_NormaliMsgQueue/ */ Local_NormaliMsgQueue;
  kcg_bool /* Local_ack_empty/ */ Local_ack_empty;
  array_float64_10 /* mm_local_array/ */ mm_local_array;
  kcg_bool /* Local_isEmpty/ */ Local_isEmpty;
  array_float64_10 /* hh_local_array/ */ hh_local_array;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages /* IfBlock5:then:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG#3)/ */ Context_MSGQueue_AcklMSG_3;
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages /* IfBlock5:else:then:_L33=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG#1)/ */ Context_MSGQueue_normalMSG_1;
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages /* IfBlock5:else:else:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg#2)/ */ Context_DeleteAckMsg_2;
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages /* IfBlock5:else:else:_L30=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg#1)/ */ Context_DeleteNormalMsg_1;
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages /* _L2=(DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot#1)/ */ Context_CheckAckOrNot_1;
  outC_countDownTimer_MoRC_Pck_Utils /* _L7=(MoRC_Pck::Utils::countDownTimer#1)/ */ Context_countDownTimer_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock5:else: */ else_clock_IfBlock5;
  kcg_bool /* IfBlock5: */ IfBlock5_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  tPASPOutput_Array /* IfBlock5:then:_L53/ */ _L53_then_IfBlock5;
  kcg_int64 /* IfBlock5:then:_L52/ */ _L52_then_IfBlock5;
  kcg_bool /* IfBlock5:then:_L49/ */ _L49_then_IfBlock5;
  array_float64_5 /* IfBlock5:then:_L51/ */ _L51_then_IfBlock5;
  array_float64_5 /* IfBlock5:then:_L50/ */ _L50_then_IfBlock5;
  kcg_bool /* IfBlock5:then:_L48/ */ _L48_then_IfBlock5;
  kcg_int64 /* IfBlock5:then:_L28/ */ _L28_then_IfBlock5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock5:then:_L13/ */ _L13_then_IfBlock5;
  _80_array /* IfBlock5:then:_L5/ */ _L5_then_IfBlock5;
  kcg_int64 /* IfBlock5:else:else:_L10/ */ _L10_else_else_IfBlock5;
  _80_array /* IfBlock5:else:else:_L5/ */ _L5_else_else_IfBlock5;
  kcg_int64 /* IfBlock5:else:else:_L6/ */ _L6_else_else_IfBlock5;
  array_float64_5 /* IfBlock5:else:else:_L7/ */ _L7_else_else_IfBlock5;
  array_float64_5 /* IfBlock5:else:else:_L8/ */ _L8_else_else_IfBlock5;
  kcg_bool /* IfBlock5:else:else:_L9/ */ _L9_else_else_IfBlock5;
  array_float64_5 /* IfBlock5:else:else:_L3/ */ _L3_else_else_IfBlock5;
  array_float64_5 /* IfBlock5:else:else:_L2/ */ _L2_else_else_IfBlock5;
  kcg_bool /* IfBlock5:else:else:_L1/ */ _L1_else_else_IfBlock5;
  _95_array /* IfBlock5:else:else:_L12/ */ _L12_else_else_IfBlock5;
  kcg_int64 /* IfBlock5:else:else:_L11/ */ _L11_else_else_IfBlock5;
  kcg_bool /* IfBlock5:else:else:_L23/ */ _L23_else_else_IfBlock5;
  kcg_bool /* IfBlock5:else:else:_L24/ */ _L24_else_else_IfBlock5;
  _80_array /* IfBlock5:else:else:_L28/ */ _L28_else_else_IfBlock5;
  kcg_bool /* IfBlock5:else:else:_L33/ */ _L33_else_else_IfBlock5;
  array_float64_10 /* IfBlock5:else:else:_L32/ */ _L32_else_else_IfBlock5;
  array_float64_10 /* IfBlock5:else:else:_L31/ */ _L31_else_else_IfBlock5;
  kcg_int64 /* IfBlock5:else:else:_L30/ */ _L30_else_else_IfBlock5;
  _95_array /* IfBlock5:else:else:_L34/ */ _L34_else_else_IfBlock5;
  kcg_int64 /* IfBlock5:else:else:_L43/ */ _L43_else_else_IfBlock5;
  array_float64_10 /* IfBlock5:else:else:_L44/ */ _L44_else_else_IfBlock5;
  array_float64_10 /* IfBlock5:else:else:_L45/ */ _L45_else_else_IfBlock5;
  kcg_bool /* IfBlock5:else:else:_L47/ */ _L47_else_else_IfBlock5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock5:else:then:_L27/ */ _L27_then_else_IfBlock5;
  _95_array /* IfBlock5:else:then:_L36/ */ _L36_then_else_IfBlock5;
  kcg_int64 /* IfBlock5:else:then:_L35/ */ _L35_then_else_IfBlock5;
  kcg_bool /* IfBlock5:else:then:_L34/ */ _L34_then_else_IfBlock5;
  kcg_bool /* IfBlock5:else:then:_L33/ */ _L33_then_else_IfBlock5;
  kcg_bool /* IfBlock5:else:then:_L39/ */ _L39_then_else_IfBlock5;
  array_float64_10 /* IfBlock5:else:then:_L40/ */ _L40_then_else_IfBlock5;
  array_float64_10 /* IfBlock5:else:then:_L41/ */ _L41_then_else_IfBlock5;
  kcg_int64 /* IfBlock5:else:then:_L42/ */ _L42_then_else_IfBlock5;
  tPASPOutput_Array /* IfBlock5:else:then:_L43/ */ _L43_then_else_IfBlock5;
  kcg_bool /* AuxiMsg/ */ AuxiMsg;
  kcg_bool /* AckMsg/ */ AckMsg;
  kcg_bool /* ImportantMsg/ */ ImportantMsg;
  kcg_bool /* timeExpired/ */ timeExpired;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L9/ */ _L9;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L14/ */ _L14;
} outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher/ */
extern void TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  /* dmi_txt_msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* SystemTime/ */
  kcg_int64 SystemTime,
  /* deleteMsg/ */
  kcg_bool deleteMsg,
  /* LocalTime/ */
  tPASPOutput_Array *LocalTime,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void TextMessagesDipatcher_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  array_float64_5 /* ack_mm_array/ */ Context_ack_mm_array;
  array_float64_5 /* ack_hh_array/ */ Context_ack_hh_array;
  array_float64_10 /* mm_array/ */ Context_mm_array;
  array_float64_10 /* hh_array/ */ Context_hh_array;
  kcg_int64 /* NumAckMsg/ */ Context_NumAckMsg;
  kcg_bool /* isEmpty/ */ Context_isEmpty;
  kcg_bool /* AckisEmpty/ */ Context_AckisEmpty;
  kcg_int64 /* NumE/ */ Context_NumE;
  _95_array /* MsgQueue/ */ Context_MsgQueue;
  _80_array /* AckMsgQueue/ */ Context_AckMsgQueue;
  /* ----------------------- local memories  ------------------------- */
  array_float64_10 /* hh_local_array/ */ Context_hh_local_array;
  kcg_bool /* Local_isEmpty/ */ Context_Local_isEmpty;
  array_float64_10 /* mm_local_array/ */ Context_mm_local_array;
  kcg_bool /* Local_ack_empty/ */ Context_Local_ack_empty;
  _95_array /* Local_NormaliMsgQueue/ */ Context_Local_NormaliMsgQueue;
  kcg_int64 /* numNormalMsg/ */ Context_numNormalMsg;
  _80_array /* Local_AckMsgQueue/ */ Context_Local_AckMsgQueue;
  array_float64_5 /* hh_local_array_ack/ */ Context_hh_local_array_ack;
  array_float64_5 /* mm_local_array_ack/ */ Context_mm_local_array_ack;
  kcg_int64 /* numAckMsg/ */ Context_numAckMsg;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_countDownTimer_MoRC_Pck_Utils Context_countDownTimer_1;
  SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages Context_DeleteNormalMsg_1;
  SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages Context_DeleteAckMsg_2;
  SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages Context_MSGQueue_normalMSG_1;
  SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages Context_MSGQueue_AcklMSG_3;
} SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

