/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher/ */
void TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  /* dmi_txt_msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* SystemTime/ */
  kcg_int64 SystemTime,
  /* deleteMsg/ */
  kcg_bool deleteMsg,
  /* LocalTime/ */
  tPASPOutput_Array *LocalTime,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* AckMsgQueue/ */
  static _80_array AckMsgQueue_partial;
  /* MsgQueue/ */
  static _95_array MsgQueue_partial;
  /* NumE/ */
  static kcg_int64 NumE_partial;
  /* AckisEmpty/ */
  static kcg_bool AckisEmpty_partial;
  /* isEmpty/ */
  static kcg_bool isEmpty_partial;
  /* NumAckMsg/ */
  static kcg_int64 NumAckMsg_partial;
  /* hh_array/ */
  static array_float64_10 hh_array_partial;
  /* mm_array/ */
  static array_float64_10 mm_array_partial;
  /* ack_hh_array/ */
  static array_float64_5 ack_hh_array_partial;
  /* ack_mm_array/ */
  static array_float64_5 ack_mm_array_partial;
  /* numAckMsg/ */
  static kcg_int64 numAckMsg_partial;
  /* mm_local_array_ack/ */
  static array_float64_5 mm_local_array_ack_partial;
  /* hh_local_array_ack/ */
  static array_float64_5 hh_local_array_ack_partial;
  /* Local_AckMsgQueue/ */
  static _80_array Local_AckMsgQueue_partial;
  /* numNormalMsg/ */
  static kcg_int64 numNormalMsg_partial;
  /* Local_NormaliMsgQueue/ */
  static _95_array Local_NormaliMsgQueue_partial;
  /* Local_ack_empty/ */
  static kcg_bool Local_ack_empty_partial;
  /* mm_local_array/ */
  static array_float64_10 mm_local_array_partial;
  /* Local_isEmpty/ */
  static kcg_bool Local_isEmpty_partial;
  /* hh_local_array/ */
  static array_float64_10 hh_local_array_partial;
  static kcg_bool noname;
  /* AckMsgQueue/ */
  static _80_array _1_AckMsgQueue_partial;
  /* MsgQueue/ */
  static _95_array _2_MsgQueue_partial;
  /* NumE/ */
  static kcg_int64 _3_NumE_partial;
  /* AckisEmpty/ */
  static kcg_bool _4_AckisEmpty_partial;
  /* isEmpty/ */
  static kcg_bool _5_isEmpty_partial;
  /* NumAckMsg/ */
  static kcg_int64 _6_NumAckMsg_partial;
  /* hh_array/ */
  static array_float64_10 _7_hh_array_partial;
  /* mm_array/ */
  static array_float64_10 _8_mm_array_partial;
  /* ack_hh_array/ */
  static array_float64_5 _9_ack_hh_array_partial;
  /* ack_mm_array/ */
  static array_float64_5 _10_ack_mm_array_partial;
  /* numAckMsg/ */
  static kcg_int64 _11_numAckMsg_partial;
  /* mm_local_array_ack/ */
  static array_float64_5 _12_mm_local_array_ack_partial;
  /* hh_local_array_ack/ */
  static array_float64_5 _13_hh_local_array_ack_partial;
  /* Local_AckMsgQueue/ */
  static _80_array _14_Local_AckMsgQueue_partial;
  /* numNormalMsg/ */
  static kcg_int64 _15_numNormalMsg_partial;
  /* Local_NormaliMsgQueue/ */
  static _95_array _16_Local_NormaliMsgQueue_partial;
  /* Local_ack_empty/ */
  static kcg_bool _17_Local_ack_empty_partial;
  /* mm_local_array/ */
  static array_float64_10 _18_mm_local_array_partial;
  /* Local_isEmpty/ */
  static kcg_bool _19_Local_isEmpty_partial;
  /* hh_local_array/ */
  static array_float64_10 _20_hh_local_array_partial;
  /* hh_local_array/ */
  static array_float64_10 _21_hh_local_array_partial;
  /* Local_isEmpty/ */
  static kcg_bool _22_Local_isEmpty_partial;
  /* mm_local_array/ */
  static array_float64_10 _23_mm_local_array_partial;
  /* Local_ack_empty/ */
  static kcg_bool _24_Local_ack_empty_partial;
  /* Local_NormaliMsgQueue/ */
  static _95_array _25_Local_NormaliMsgQueue_partial;
  /* numNormalMsg/ */
  static kcg_int64 _26_numNormalMsg_partial;
  /* Local_AckMsgQueue/ */
  static _80_array _27_Local_AckMsgQueue_partial;
  /* hh_local_array_ack/ */
  static array_float64_5 _28_hh_local_array_ack_partial;
  /* mm_local_array_ack/ */
  static array_float64_5 _29_mm_local_array_ack_partial;
  /* numAckMsg/ */
  static kcg_int64 _30_numAckMsg_partial;
  /* ack_mm_array/ */
  static array_float64_5 _31_ack_mm_array_partial;
  /* ack_hh_array/ */
  static array_float64_5 _32_ack_hh_array_partial;
  /* mm_array/ */
  static array_float64_10 _33_mm_array_partial;
  /* hh_array/ */
  static array_float64_10 _34_hh_array_partial;
  /* NumAckMsg/ */
  static kcg_int64 _35_NumAckMsg_partial;
  /* isEmpty/ */
  static kcg_bool _36_isEmpty_partial;
  /* AckisEmpty/ */
  static kcg_bool _37_AckisEmpty_partial;
  /* NumE/ */
  static kcg_int64 _38_NumE_partial;
  /* MsgQueue/ */
  static _95_array _39_MsgQueue_partial;
  /* AckMsgQueue/ */
  static _80_array _40_AckMsgQueue_partial;
  static kcg_bool _41_noname;
  /* hh_local_array/ */
  static array_float64_10 _42_hh_local_array_partial;
  /* Local_isEmpty/ */
  static kcg_bool _43_Local_isEmpty_partial;
  /* mm_local_array/ */
  static array_float64_10 _44_mm_local_array_partial;
  /* Local_ack_empty/ */
  static kcg_bool _45_Local_ack_empty_partial;
  /* Local_NormaliMsgQueue/ */
  static _95_array _46_Local_NormaliMsgQueue_partial;
  /* numNormalMsg/ */
  static kcg_int64 _47_numNormalMsg_partial;
  /* Local_AckMsgQueue/ */
  static _80_array _48_Local_AckMsgQueue_partial;
  /* hh_local_array_ack/ */
  static array_float64_5 _49_hh_local_array_ack_partial;
  /* mm_local_array_ack/ */
  static array_float64_5 _50_mm_local_array_ack_partial;
  /* numAckMsg/ */
  static kcg_int64 _51_numAckMsg_partial;
  /* ack_mm_array/ */
  static array_float64_5 _52_ack_mm_array_partial;
  /* ack_hh_array/ */
  static array_float64_5 _53_ack_hh_array_partial;
  /* mm_array/ */
  static array_float64_10 _54_mm_array_partial;
  /* hh_array/ */
  static array_float64_10 _55_hh_array_partial;
  /* NumAckMsg/ */
  static kcg_int64 _56_NumAckMsg_partial;
  /* isEmpty/ */
  static kcg_bool _57_isEmpty_partial;
  /* AckisEmpty/ */
  static kcg_bool _58_AckisEmpty_partial;
  /* NumE/ */
  static kcg_int64 _59_NumE_partial;
  /* MsgQueue/ */
  static _95_array _60_MsgQueue_partial;
  /* AckMsgQueue/ */
  static _80_array _61_AckMsgQueue_partial;
  static kcg_bool _62_noname;
  /* hh_local_array/ */
  static array_float64_10 last_hh_local_array;
  /* Local_isEmpty/ */
  static kcg_bool last_Local_isEmpty;
  /* mm_local_array/ */
  static array_float64_10 last_mm_local_array;
  /* Local_ack_empty/ */
  static kcg_bool last_Local_ack_empty;
  /* Local_NormaliMsgQueue/ */
  static _95_array last_Local_NormaliMsgQueue;
  /* numNormalMsg/ */
  static kcg_int64 last_numNormalMsg;
  /* Local_AckMsgQueue/ */
  static _80_array last_Local_AckMsgQueue;
  /* hh_local_array_ack/ */
  static array_float64_5 last_hh_local_array_ack;
  /* mm_local_array_ack/ */
  static array_float64_5 last_mm_local_array_ack;
  /* numAckMsg/ */
  static kcg_int64 last_numAckMsg;
  /* ack_mm_array/ */
  static array_float64_5 last_ack_mm_array;
  /* ack_hh_array/ */
  static array_float64_5 last_ack_hh_array;
  /* mm_array/ */
  static array_float64_10 last_mm_array;
  /* hh_array/ */
  static array_float64_10 last_hh_array;
  /* NumAckMsg/ */
  static kcg_int64 last_NumAckMsg;
  /* isEmpty/ */
  static kcg_bool last_isEmpty;
  /* AckisEmpty/ */
  static kcg_bool last_AckisEmpty;
  /* NumE/ */
  static kcg_int64 last_NumE;
  /* MsgQueue/ */
  static _95_array last_MsgQueue;
  /* AckMsgQueue/ */
  static _80_array last_AckMsgQueue;

  kcg_copy_array_float64_10(&last_hh_local_array, &outC->hh_local_array);
  last_Local_isEmpty = outC->Local_isEmpty;
  kcg_copy_array_float64_10(&last_mm_local_array, &outC->mm_local_array);
  last_Local_ack_empty = outC->Local_ack_empty;
  kcg_copy__95_array(&last_Local_NormaliMsgQueue, &outC->Local_NormaliMsgQueue);
  last_numNormalMsg = outC->numNormalMsg;
  kcg_copy__80_array(&last_Local_AckMsgQueue, &outC->Local_AckMsgQueue);
  kcg_copy_array_float64_5(&last_hh_local_array_ack, &outC->hh_local_array_ack);
  kcg_copy_array_float64_5(&last_mm_local_array_ack, &outC->mm_local_array_ack);
  last_numAckMsg = outC->numAckMsg;
  kcg_copy_array_float64_5(&last_ack_mm_array, &outC->ack_mm_array);
  kcg_copy_array_float64_5(&last_ack_hh_array, &outC->ack_hh_array);
  kcg_copy_array_float64_10(&last_mm_array, &outC->mm_array);
  kcg_copy_array_float64_10(&last_hh_array, &outC->hh_array);
  last_NumAckMsg = outC->NumAckMsg;
  last_isEmpty = outC->isEmpty;
  last_AckisEmpty = outC->AckisEmpty;
  last_NumE = outC->NumE;
  kcg_copy__95_array(&last_MsgQueue, &outC->MsgQueue);
  kcg_copy__80_array(&last_AckMsgQueue, &outC->AckMsgQueue);
  outC->_L11 = kcg_false;
  outC->_L14 = last_isEmpty;
  outC->_L9 = SystemTime;
  outC->_L5 = kcg_true;
  outC->_L10 = kcg_lit_int64(1000);
  /* _L7=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L11,
    outC->_L14,
    outC->_L9,
    outC->_L5,
    outC->_L10,
    &outC->Context_countDownTimer_1);
  outC->_L7 = outC->Context_countDownTimer_1.expired;
  outC->_L8 = outC->Context_countDownTimer_1.started;
  outC->debugExpired = outC->_L7;
  outC->timeExpired = outC->_L7;
  _62_noname = outC->_L8;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_txt_msg);
  /* _L2=(DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot#1)/ */
  CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L1,
    &outC->Context_CheckAckOrNot_1);
  outC->_L2 = outC->Context_CheckAckOrNot_1.Output1;
  outC->_L3 = outC->Context_CheckAckOrNot_1.Output2;
  outC->_L4 = outC->Context_CheckAckOrNot_1.Output3;
  outC->AckMsg = outC->_L2;
  outC->IfBlock5_clock = outC->AckMsg;
  outC->ImportantMsg = outC->_L4;
  outC->AuxiMsg = outC->_L3;
  /* IfBlock5: */
  if (outC->IfBlock5_clock) {
    kcg_copy_array_float64_10(&hh_local_array_partial, &last_hh_local_array);
    Local_isEmpty_partial = last_Local_isEmpty;
    kcg_copy_array_float64_10(&mm_local_array_partial, &last_mm_local_array);
    kcg_copy__95_array(&Local_NormaliMsgQueue_partial, &last_Local_NormaliMsgQueue);
    numNormalMsg_partial = last_numNormalMsg;
    kcg_copy_array_float64_5(&ack_mm_array_partial, &last_ack_mm_array);
    kcg_copy_array_float64_5(&ack_hh_array_partial, &last_ack_hh_array);
    kcg_copy_array_float64_10(&mm_array_partial, &last_mm_array);
    kcg_copy_array_float64_10(&hh_array_partial, &last_hh_array);
    NumAckMsg_partial = last_NumAckMsg;
    isEmpty_partial = last_isEmpty;
    AckisEmpty_partial = last_AckisEmpty;
    NumE_partial = last_NumE;
    kcg_copy__95_array(&MsgQueue_partial, &last_MsgQueue);
    kcg_copy__80_array(&AckMsgQueue_partial, &last_AckMsgQueue);
    kcg_copy_tPASPOutput_Array(&outC->_L53_then_IfBlock5, LocalTime);
    outC->_L52_then_IfBlock5 = last_numAckMsg;
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L13_then_IfBlock5,
      dmi_txt_msg);
    /* IfBlock5:then:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG#3)/ */
    MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_L13_then_IfBlock5,
      outC->_L52_then_IfBlock5,
      &outC->_L53_then_IfBlock5,
      &outC->Context_MSGQueue_AcklMSG_3);
    kcg_copy__80_array(
      &outC->_L5_then_IfBlock5,
      &outC->Context_MSGQueue_AcklMSG_3.queue);
    outC->_L28_then_IfBlock5 = outC->Context_MSGQueue_AcklMSG_3.NumE;
    outC->_L48_then_IfBlock5 = outC->Context_MSGQueue_AcklMSG_3.AckisFull;
    outC->_L49_then_IfBlock5 = outC->Context_MSGQueue_AcklMSG_3.AckisEmpty;
    kcg_copy_array_float64_5(
      &outC->_L50_then_IfBlock5,
      &outC->Context_MSGQueue_AcklMSG_3.hh_array);
    kcg_copy_array_float64_5(
      &outC->_L51_then_IfBlock5,
      &outC->Context_MSGQueue_AcklMSG_3.mm_array);
    Local_ack_empty_partial = outC->_L49_then_IfBlock5;
    numAckMsg_partial = outC->_L28_then_IfBlock5;
    kcg_copy_array_float64_5(
      &mm_local_array_ack_partial,
      &outC->_L51_then_IfBlock5);
    kcg_copy_array_float64_5(
      &hh_local_array_ack_partial,
      &outC->_L50_then_IfBlock5);
    kcg_copy__80_array(&Local_AckMsgQueue_partial, &outC->_L5_then_IfBlock5);
    noname = outC->_L48_then_IfBlock5;
    kcg_copy__80_array(&outC->AckMsgQueue, &AckMsgQueue_partial);
    kcg_copy__95_array(&outC->MsgQueue, &MsgQueue_partial);
    outC->NumE = NumE_partial;
    outC->AckisEmpty = AckisEmpty_partial;
    outC->isEmpty = isEmpty_partial;
    outC->NumAckMsg = NumAckMsg_partial;
    kcg_copy_array_float64_10(&outC->hh_array, &hh_array_partial);
    kcg_copy_array_float64_10(&outC->mm_array, &mm_array_partial);
    kcg_copy_array_float64_5(&outC->ack_hh_array, &ack_hh_array_partial);
    kcg_copy_array_float64_5(&outC->ack_mm_array, &ack_mm_array_partial);
    outC->numAckMsg = numAckMsg_partial;
    kcg_copy_array_float64_5(
      &outC->mm_local_array_ack,
      &mm_local_array_ack_partial);
    kcg_copy_array_float64_5(
      &outC->hh_local_array_ack,
      &hh_local_array_ack_partial);
    kcg_copy__80_array(&outC->Local_AckMsgQueue, &Local_AckMsgQueue_partial);
    outC->numNormalMsg = numNormalMsg_partial;
    kcg_copy__95_array(
      &outC->Local_NormaliMsgQueue,
      &Local_NormaliMsgQueue_partial);
    outC->Local_ack_empty = Local_ack_empty_partial;
    kcg_copy_array_float64_10(&outC->mm_local_array, &mm_local_array_partial);
    outC->Local_isEmpty = Local_isEmpty_partial;
    kcg_copy_array_float64_10(&outC->hh_local_array, &hh_local_array_partial);
  }
  else {
    outC->else_clock_IfBlock5 = outC->AuxiMsg | outC->ImportantMsg;
    /* IfBlock5:else: */
    if (outC->else_clock_IfBlock5) {
      _45_Local_ack_empty_partial = last_Local_ack_empty;
      kcg_copy__80_array(&_48_Local_AckMsgQueue_partial, &last_Local_AckMsgQueue);
      kcg_copy_array_float64_5(
        &_49_hh_local_array_ack_partial,
        &last_hh_local_array_ack);
      kcg_copy_array_float64_5(
        &_50_mm_local_array_ack_partial,
        &last_mm_local_array_ack);
      _51_numAckMsg_partial = last_numAckMsg;
      kcg_copy_array_float64_5(&_52_ack_mm_array_partial, &last_ack_mm_array);
      kcg_copy_array_float64_5(&_53_ack_hh_array_partial, &last_ack_hh_array);
      kcg_copy_array_float64_10(&_54_mm_array_partial, &last_mm_array);
      kcg_copy_array_float64_10(&_55_hh_array_partial, &last_hh_array);
      _56_NumAckMsg_partial = last_NumAckMsg;
      _57_isEmpty_partial = last_isEmpty;
      _58_AckisEmpty_partial = last_AckisEmpty;
      _59_NumE_partial = last_NumE;
      kcg_copy__95_array(&_60_MsgQueue_partial, &last_MsgQueue);
      kcg_copy__80_array(&_61_AckMsgQueue_partial, &last_AckMsgQueue);
      kcg_copy_tPASPOutput_Array(&outC->_L43_then_else_IfBlock5, LocalTime);
      outC->_L42_then_else_IfBlock5 = last_numNormalMsg;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L27_then_else_IfBlock5,
        dmi_txt_msg);
      outC->_L39_then_else_IfBlock5 = outC->ImportantMsg;
      /* IfBlock5:else:then:_L33=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG#1)/ */
      MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
        &outC->_L27_then_else_IfBlock5,
        outC->_L39_then_else_IfBlock5,
        outC->_L42_then_else_IfBlock5,
        &outC->_L43_then_else_IfBlock5,
        &outC->Context_MSGQueue_normalMSG_1);
      outC->_L33_then_else_IfBlock5 = outC->Context_MSGQueue_normalMSG_1.isFull;
      outC->_L34_then_else_IfBlock5 = outC->Context_MSGQueue_normalMSG_1.isEmpty;
      outC->_L35_then_else_IfBlock5 = outC->Context_MSGQueue_normalMSG_1.NumE;
      kcg_copy__95_array(
        &outC->_L36_then_else_IfBlock5,
        &outC->Context_MSGQueue_normalMSG_1.queue);
      kcg_copy_array_float64_10(
        &outC->_L40_then_else_IfBlock5,
        &outC->Context_MSGQueue_normalMSG_1.mm_array);
      kcg_copy_array_float64_10(
        &outC->_L41_then_else_IfBlock5,
        &outC->Context_MSGQueue_normalMSG_1.hh_array);
      _43_Local_isEmpty_partial = outC->_L34_then_else_IfBlock5;
      kcg_copy_array_float64_10(
        &_42_hh_local_array_partial,
        &outC->_L41_then_else_IfBlock5);
      kcg_copy_array_float64_10(
        &_44_mm_local_array_partial,
        &outC->_L40_then_else_IfBlock5);
      kcg_copy__95_array(
        &_46_Local_NormaliMsgQueue_partial,
        &outC->_L36_then_else_IfBlock5);
      _47_numNormalMsg_partial = outC->_L35_then_else_IfBlock5;
      _41_noname = outC->_L33_then_else_IfBlock5;
      kcg_copy__80_array(&_1_AckMsgQueue_partial, &_61_AckMsgQueue_partial);
      kcg_copy__95_array(&_2_MsgQueue_partial, &_60_MsgQueue_partial);
      _3_NumE_partial = _59_NumE_partial;
      _4_AckisEmpty_partial = _58_AckisEmpty_partial;
      _5_isEmpty_partial = _57_isEmpty_partial;
      _6_NumAckMsg_partial = _56_NumAckMsg_partial;
      kcg_copy_array_float64_10(&_7_hh_array_partial, &_55_hh_array_partial);
      kcg_copy_array_float64_10(&_8_mm_array_partial, &_54_mm_array_partial);
      kcg_copy_array_float64_5(&_9_ack_hh_array_partial, &_53_ack_hh_array_partial);
      kcg_copy_array_float64_5(&_10_ack_mm_array_partial, &_52_ack_mm_array_partial);
      _11_numAckMsg_partial = _51_numAckMsg_partial;
      kcg_copy_array_float64_5(
        &_12_mm_local_array_ack_partial,
        &_50_mm_local_array_ack_partial);
      kcg_copy_array_float64_5(
        &_13_hh_local_array_ack_partial,
        &_49_hh_local_array_ack_partial);
      kcg_copy__80_array(
        &_14_Local_AckMsgQueue_partial,
        &_48_Local_AckMsgQueue_partial);
      _15_numNormalMsg_partial = _47_numNormalMsg_partial;
      kcg_copy__95_array(
        &_16_Local_NormaliMsgQueue_partial,
        &_46_Local_NormaliMsgQueue_partial);
      _17_Local_ack_empty_partial = _45_Local_ack_empty_partial;
      kcg_copy_array_float64_10(
        &_18_mm_local_array_partial,
        &_44_mm_local_array_partial);
      _19_Local_isEmpty_partial = _43_Local_isEmpty_partial;
      kcg_copy_array_float64_10(
        &_20_hh_local_array_partial,
        &_42_hh_local_array_partial);
    }
    else {
      outC->_L47_else_else_IfBlock5 = last_Local_isEmpty;
      kcg_copy__95_array(&outC->_L12_else_else_IfBlock5, &last_Local_NormaliMsgQueue);
      kcg_copy_array_float64_10(&outC->_L44_else_else_IfBlock5, &last_hh_local_array);
      kcg_copy_array_float64_10(&outC->_L45_else_else_IfBlock5, &last_mm_local_array);
      outC->_L43_else_else_IfBlock5 = last_numNormalMsg;
      outC->_L23_else_else_IfBlock5 = outC->timeExpired;
      outC->_L11_else_else_IfBlock5 = last_numNormalMsg;
      /* IfBlock5:else:else:_L30=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg#1)/ */
      DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
        &outC->_L12_else_else_IfBlock5,
        &outC->_L44_else_else_IfBlock5,
        &outC->_L45_else_else_IfBlock5,
        outC->_L43_else_else_IfBlock5,
        outC->_L47_else_else_IfBlock5,
        outC->_L23_else_else_IfBlock5,
        outC->_L11_else_else_IfBlock5,
        &outC->Context_DeleteNormalMsg_1);
      outC->_L30_else_else_IfBlock5 = outC->Context_DeleteNormalMsg_1.NumE;
      kcg_copy_array_float64_10(
        &outC->_L31_else_else_IfBlock5,
        &outC->Context_DeleteNormalMsg_1.new_mm);
      kcg_copy_array_float64_10(
        &outC->_L32_else_else_IfBlock5,
        &outC->Context_DeleteNormalMsg_1.new_hh);
      outC->_L33_else_else_IfBlock5 = outC->Context_DeleteNormalMsg_1.msg_is_Empty;
      kcg_copy__95_array(
        &outC->_L34_else_else_IfBlock5,
        &outC->Context_DeleteNormalMsg_1.MsgQueue);
      _22_Local_isEmpty_partial = outC->_L33_else_else_IfBlock5;
      kcg_copy_array_float64_10(
        &_21_hh_local_array_partial,
        &outC->_L32_else_else_IfBlock5);
      kcg_copy_array_float64_10(
        &_23_mm_local_array_partial,
        &outC->_L31_else_else_IfBlock5);
      _36_isEmpty_partial = outC->_L33_else_else_IfBlock5;
      kcg_copy_array_float64_10(
        &_33_mm_array_partial,
        &outC->_L31_else_else_IfBlock5);
      kcg_copy_array_float64_10(
        &_34_hh_array_partial,
        &outC->_L32_else_else_IfBlock5);
      _26_numNormalMsg_partial = outC->_L30_else_else_IfBlock5;
      kcg_copy__95_array(
        &_25_Local_NormaliMsgQueue_partial,
        &outC->_L34_else_else_IfBlock5);
      kcg_copy__80_array(&outC->_L28_else_else_IfBlock5, &last_Local_AckMsgQueue);
      outC->_L1_else_else_IfBlock5 = deleteMsg;
      kcg_copy_array_float64_5(
        &outC->_L2_else_else_IfBlock5,
        &last_hh_local_array_ack);
      kcg_copy_array_float64_5(
        &outC->_L3_else_else_IfBlock5,
        &last_mm_local_array_ack);
      outC->_L10_else_else_IfBlock5 = last_numAckMsg;
      outC->_L24_else_else_IfBlock5 = last_Local_ack_empty;
      /* IfBlock5:else:else:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg#2)/ */
      DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
        &outC->_L28_else_else_IfBlock5,
        outC->_L1_else_else_IfBlock5,
        &outC->_L2_else_else_IfBlock5,
        &outC->_L3_else_else_IfBlock5,
        outC->_L10_else_else_IfBlock5,
        outC->_L24_else_else_IfBlock5,
        &outC->Context_DeleteAckMsg_2);
      kcg_copy__80_array(
        &outC->_L5_else_else_IfBlock5,
        &outC->Context_DeleteAckMsg_2.queue);
      outC->_L6_else_else_IfBlock5 = outC->Context_DeleteAckMsg_2.NumE;
      kcg_copy_array_float64_5(
        &outC->_L7_else_else_IfBlock5,
        &outC->Context_DeleteAckMsg_2.new_mm);
      kcg_copy_array_float64_5(
        &outC->_L8_else_else_IfBlock5,
        &outC->Context_DeleteAckMsg_2.new_hh);
      outC->_L9_else_else_IfBlock5 = outC->Context_DeleteAckMsg_2.ack_is_Empty;
      kcg_copy_array_float64_5(
        &_28_hh_local_array_ack_partial,
        &outC->_L8_else_else_IfBlock5);
      _30_numAckMsg_partial = outC->_L6_else_else_IfBlock5;
      _24_Local_ack_empty_partial = outC->_L9_else_else_IfBlock5;
      kcg_copy_array_float64_5(
        &_29_mm_local_array_ack_partial,
        &outC->_L7_else_else_IfBlock5);
      kcg_copy__80_array(
        &_27_Local_AckMsgQueue_partial,
        &outC->_L5_else_else_IfBlock5);
      kcg_copy__95_array(&_39_MsgQueue_partial, &outC->_L34_else_else_IfBlock5);
      _38_NumE_partial = outC->_L30_else_else_IfBlock5;
      _37_AckisEmpty_partial = outC->_L9_else_else_IfBlock5;
      _35_NumAckMsg_partial = outC->_L6_else_else_IfBlock5;
      kcg_copy_array_float64_5(
        &_32_ack_hh_array_partial,
        &outC->_L8_else_else_IfBlock5);
      kcg_copy_array_float64_5(
        &_31_ack_mm_array_partial,
        &outC->_L7_else_else_IfBlock5);
      kcg_copy__80_array(&_40_AckMsgQueue_partial, &outC->_L5_else_else_IfBlock5);
      kcg_copy__80_array(&_1_AckMsgQueue_partial, &_40_AckMsgQueue_partial);
      kcg_copy__95_array(&_2_MsgQueue_partial, &_39_MsgQueue_partial);
      _3_NumE_partial = _38_NumE_partial;
      _4_AckisEmpty_partial = _37_AckisEmpty_partial;
      _5_isEmpty_partial = _36_isEmpty_partial;
      _6_NumAckMsg_partial = _35_NumAckMsg_partial;
      kcg_copy_array_float64_10(&_7_hh_array_partial, &_34_hh_array_partial);
      kcg_copy_array_float64_10(&_8_mm_array_partial, &_33_mm_array_partial);
      kcg_copy_array_float64_5(&_9_ack_hh_array_partial, &_32_ack_hh_array_partial);
      kcg_copy_array_float64_5(&_10_ack_mm_array_partial, &_31_ack_mm_array_partial);
      _11_numAckMsg_partial = _30_numAckMsg_partial;
      kcg_copy_array_float64_5(
        &_12_mm_local_array_ack_partial,
        &_29_mm_local_array_ack_partial);
      kcg_copy_array_float64_5(
        &_13_hh_local_array_ack_partial,
        &_28_hh_local_array_ack_partial);
      kcg_copy__80_array(
        &_14_Local_AckMsgQueue_partial,
        &_27_Local_AckMsgQueue_partial);
      _15_numNormalMsg_partial = _26_numNormalMsg_partial;
      kcg_copy__95_array(
        &_16_Local_NormaliMsgQueue_partial,
        &_25_Local_NormaliMsgQueue_partial);
      _17_Local_ack_empty_partial = _24_Local_ack_empty_partial;
      kcg_copy_array_float64_10(
        &_18_mm_local_array_partial,
        &_23_mm_local_array_partial);
      _19_Local_isEmpty_partial = _22_Local_isEmpty_partial;
      kcg_copy_array_float64_10(
        &_20_hh_local_array_partial,
        &_21_hh_local_array_partial);
    }
    kcg_copy__80_array(&outC->AckMsgQueue, &_1_AckMsgQueue_partial);
    kcg_copy__95_array(&outC->MsgQueue, &_2_MsgQueue_partial);
    outC->NumE = _3_NumE_partial;
    outC->AckisEmpty = _4_AckisEmpty_partial;
    outC->isEmpty = _5_isEmpty_partial;
    outC->NumAckMsg = _6_NumAckMsg_partial;
    kcg_copy_array_float64_10(&outC->hh_array, &_7_hh_array_partial);
    kcg_copy_array_float64_10(&outC->mm_array, &_8_mm_array_partial);
    kcg_copy_array_float64_5(&outC->ack_hh_array, &_9_ack_hh_array_partial);
    kcg_copy_array_float64_5(&outC->ack_mm_array, &_10_ack_mm_array_partial);
    outC->numAckMsg = _11_numAckMsg_partial;
    kcg_copy_array_float64_5(
      &outC->mm_local_array_ack,
      &_12_mm_local_array_ack_partial);
    kcg_copy_array_float64_5(
      &outC->hh_local_array_ack,
      &_13_hh_local_array_ack_partial);
    kcg_copy__80_array(&outC->Local_AckMsgQueue, &_14_Local_AckMsgQueue_partial);
    outC->numNormalMsg = _15_numNormalMsg_partial;
    kcg_copy__95_array(
      &outC->Local_NormaliMsgQueue,
      &_16_Local_NormaliMsgQueue_partial);
    outC->Local_ack_empty = _17_Local_ack_empty_partial;
    kcg_copy_array_float64_10(&outC->mm_local_array, &_18_mm_local_array_partial);
    outC->Local_isEmpty = _19_Local_isEmpty_partial;
    kcg_copy_array_float64_10(&outC->hh_local_array, &_20_hh_local_array_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void TextMessagesDipatcher_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;

  outC->_L14 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.textMessage_ID = kcg_lit_int64(0);
  outC->_L1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.l_text = kcg_lit_int64(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L1.x_text[idx] = ' ';
  }
  outC->_L1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->debugExpired = kcg_true;
  outC->timeExpired = kcg_true;
  outC->ImportantMsg = kcg_true;
  outC->AckMsg = kcg_true;
  outC->AuxiMsg = kcg_true;
  outC->IfBlock5_clock = kcg_true;
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L43_then_else_IfBlock5[idx1] = kcg_lit_float64(0.0);
  }
  outC->_L42_then_else_IfBlock5 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L41_then_else_IfBlock5[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L40_then_else_IfBlock5[idx3] = kcg_lit_float64(0.0);
  }
  outC->_L39_then_else_IfBlock5 = kcg_true;
  outC->_L33_then_else_IfBlock5 = kcg_true;
  outC->_L34_then_else_IfBlock5 = kcg_true;
  outC->_L35_then_else_IfBlock5 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L36_then_else_IfBlock5[idx5].present = kcg_true;
    outC->_L36_then_else_IfBlock5[idx5].dmi_msg.valid = kcg_true;
    outC->_L36_then_else_IfBlock5[idx5].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L36_then_else_IfBlock5[idx5].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L36_then_else_IfBlock5[idx5].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L36_then_else_IfBlock5[idx5].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 255; idx4++) {
      outC->_L36_then_else_IfBlock5[idx5].dmi_msg.x_text[idx4] = ' ';
    }
    outC->_L36_then_else_IfBlock5[idx5].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L36_then_else_IfBlock5[idx5].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L27_then_else_IfBlock5.valid = kcg_true;
  outC->_L27_then_else_IfBlock5.system_clock = kcg_lit_int64(0);
  outC->_L27_then_else_IfBlock5.textMessage_ID = kcg_lit_int64(0);
  outC->_L27_then_else_IfBlock5.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L27_then_else_IfBlock5.l_text = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->_L27_then_else_IfBlock5.x_text[idx6] = ' ';
  }
  outC->_L27_then_else_IfBlock5.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L27_then_else_IfBlock5.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L47_else_else_IfBlock5 = kcg_true;
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L45_else_else_IfBlock5[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L44_else_else_IfBlock5[idx8] = kcg_lit_float64(0.0);
  }
  outC->_L43_else_else_IfBlock5 = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L34_else_else_IfBlock5[idx10].present = kcg_true;
    outC->_L34_else_else_IfBlock5[idx10].dmi_msg.valid = kcg_true;
    outC->_L34_else_else_IfBlock5[idx10].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L34_else_else_IfBlock5[idx10].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L34_else_else_IfBlock5[idx10].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L34_else_else_IfBlock5[idx10].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 255; idx9++) {
      outC->_L34_else_else_IfBlock5[idx10].dmi_msg.x_text[idx9] = ' ';
    }
    outC->_L34_else_else_IfBlock5[idx10].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L34_else_else_IfBlock5[idx10].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L30_else_else_IfBlock5 = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L31_else_else_IfBlock5[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L32_else_else_IfBlock5[idx12] = kcg_lit_float64(0.0);
  }
  outC->_L33_else_else_IfBlock5 = kcg_true;
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L28_else_else_IfBlock5[idx14].present = kcg_true;
    outC->_L28_else_else_IfBlock5[idx14].dmi_msg.valid = kcg_true;
    outC->_L28_else_else_IfBlock5[idx14].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L28_else_else_IfBlock5[idx14].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L28_else_else_IfBlock5[idx14].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L28_else_else_IfBlock5[idx14].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx13 = 0; idx13 < 255; idx13++) {
      outC->_L28_else_else_IfBlock5[idx14].dmi_msg.x_text[idx13] = ' ';
    }
    outC->_L28_else_else_IfBlock5[idx14].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L28_else_else_IfBlock5[idx14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L24_else_else_IfBlock5 = kcg_true;
  outC->_L23_else_else_IfBlock5 = kcg_true;
  outC->_L11_else_else_IfBlock5 = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 10; idx16++) {
    outC->_L12_else_else_IfBlock5[idx16].present = kcg_true;
    outC->_L12_else_else_IfBlock5[idx16].dmi_msg.valid = kcg_true;
    outC->_L12_else_else_IfBlock5[idx16].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L12_else_else_IfBlock5[idx16].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L12_else_else_IfBlock5[idx16].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L12_else_else_IfBlock5[idx16].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx15 = 0; idx15 < 255; idx15++) {
      outC->_L12_else_else_IfBlock5[idx16].dmi_msg.x_text[idx15] = ' ';
    }
    outC->_L12_else_else_IfBlock5[idx16].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L12_else_else_IfBlock5[idx16].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L1_else_else_IfBlock5 = kcg_true;
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L2_else_else_IfBlock5[idx17] = kcg_lit_float64(0.0);
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L3_else_else_IfBlock5[idx18] = kcg_lit_float64(0.0);
  }
  outC->_L9_else_else_IfBlock5 = kcg_true;
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L8_else_else_IfBlock5[idx19] = kcg_lit_float64(0.0);
  }
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L7_else_else_IfBlock5[idx20] = kcg_lit_float64(0.0);
  }
  outC->_L6_else_else_IfBlock5 = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 5; idx22++) {
    outC->_L5_else_else_IfBlock5[idx22].present = kcg_true;
    outC->_L5_else_else_IfBlock5[idx22].dmi_msg.valid = kcg_true;
    outC->_L5_else_else_IfBlock5[idx22].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L5_else_else_IfBlock5[idx22].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L5_else_else_IfBlock5[idx22].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L5_else_else_IfBlock5[idx22].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx21 = 0; idx21 < 255; idx21++) {
      outC->_L5_else_else_IfBlock5[idx22].dmi_msg.x_text[idx21] = ' ';
    }
    outC->_L5_else_else_IfBlock5[idx22].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L5_else_else_IfBlock5[idx22].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L10_else_else_IfBlock5 = kcg_lit_int64(0);
  outC->else_clock_IfBlock5 = kcg_true;
  for (idx24 = 0; idx24 < 5; idx24++) {
    outC->_L5_then_IfBlock5[idx24].present = kcg_true;
    outC->_L5_then_IfBlock5[idx24].dmi_msg.valid = kcg_true;
    outC->_L5_then_IfBlock5[idx24].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L5_then_IfBlock5[idx24].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L5_then_IfBlock5[idx24].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L5_then_IfBlock5[idx24].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx23 = 0; idx23 < 255; idx23++) {
      outC->_L5_then_IfBlock5[idx24].dmi_msg.x_text[idx23] = ' ';
    }
    outC->_L5_then_IfBlock5[idx24].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L5_then_IfBlock5[idx24].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L13_then_IfBlock5.valid = kcg_true;
  outC->_L13_then_IfBlock5.system_clock = kcg_lit_int64(0);
  outC->_L13_then_IfBlock5.textMessage_ID = kcg_lit_int64(0);
  outC->_L13_then_IfBlock5.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L13_then_IfBlock5.l_text = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 255; idx25++) {
    outC->_L13_then_IfBlock5.x_text[idx25] = ' ';
  }
  outC->_L13_then_IfBlock5.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L13_then_IfBlock5.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L28_then_IfBlock5 = kcg_lit_int64(0);
  outC->_L48_then_IfBlock5 = kcg_true;
  for (idx26 = 0; idx26 < 5; idx26++) {
    outC->_L50_then_IfBlock5[idx26] = kcg_lit_float64(0.0);
  }
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L51_then_IfBlock5[idx27] = kcg_lit_float64(0.0);
  }
  outC->_L49_then_IfBlock5 = kcg_true;
  outC->_L52_then_IfBlock5 = kcg_lit_int64(0);
  for (idx28 = 0; idx28 < 4; idx28++) {
    outC->_L53_then_IfBlock5[idx28] = kcg_lit_float64(0.0);
  }
  /* IfBlock5:then:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG#3)/ */
  MSGQueue_AcklMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MSGQueue_AcklMSG_3);
  /* IfBlock5:else:then:_L33=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG#1)/ */
  MSGQueue_normalMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MSGQueue_normalMSG_1);
  /* IfBlock5:else:else:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg#2)/ */
  DeleteAckMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_DeleteAckMsg_2);
  /* IfBlock5:else:else:_L30=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg#1)/ */
  DeleteNormalMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_DeleteNormalMsg_1);
  /* _L2=(DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot#1)/ */
  CheckAckOrNot_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CheckAckOrNot_1);
  /* _L7=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
  kcg_copy__80_array(
    &outC->AckMsgQueue,
    (_80_array *) &cMsgStructQueue_DMI_Control_Pkg);
  kcg_copy__95_array(
    &outC->MsgQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->NumE = kcg_lit_int64(0);
  outC->AckisEmpty = kcg_true;
  outC->isEmpty = kcg_true;
  outC->NumAckMsg = kcg_lit_int64(0);
  kcg_copy_array_float64_10(
    &outC->hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->ack_hh_array,
    (array_float64_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->ack_mm_array,
    (array_float64_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  outC->numAckMsg = kcg_lit_int64(0);
  kcg_copy_array_float64_5(
    &outC->mm_local_array_ack,
    (array_float64_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->hh_local_array_ack,
    (array_float64_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy__80_array(
    &outC->Local_AckMsgQueue,
    (_80_array *) &cMsgStructQueue_DMI_Control_Pkg);
  outC->numNormalMsg = kcg_lit_int64(0);
  kcg_copy__95_array(
    &outC->Local_NormaliMsgQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->Local_ack_empty = kcg_true;
  kcg_copy_array_float64_10(
    &outC->mm_local_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  outC->Local_isEmpty = kcg_true;
  kcg_copy_array_float64_10(
    &outC->hh_local_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


void TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* IfBlock5:then:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG#3)/ */
  MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MSGQueue_AcklMSG_3);
  /* IfBlock5:else:then:_L33=(DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG#1)/ */
  MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MSGQueue_normalMSG_1);
  /* IfBlock5:else:else:_L5=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg#2)/ */
  DeleteAckMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_DeleteAckMsg_2);
  /* IfBlock5:else:else:_L30=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg#1)/ */
  DeleteNormalMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_DeleteNormalMsg_1);
  /* _L2=(DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot#1)/ */
  CheckAckOrNot_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CheckAckOrNot_1);
  /* _L7=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
  kcg_copy__80_array(
    &outC->AckMsgQueue,
    (_80_array *) &cMsgStructQueue_DMI_Control_Pkg);
  kcg_copy__95_array(
    &outC->MsgQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->NumE = kcg_lit_int64(0);
  outC->AckisEmpty = kcg_true;
  outC->isEmpty = kcg_true;
  outC->NumAckMsg = kcg_lit_int64(0);
  kcg_copy_array_float64_10(
    &outC->hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->ack_hh_array,
    (array_float64_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->ack_mm_array,
    (array_float64_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  outC->numAckMsg = kcg_lit_int64(0);
  kcg_copy_array_float64_5(
    &outC->mm_local_array_ack,
    (array_float64_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->hh_local_array_ack,
    (array_float64_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy__80_array(
    &outC->Local_AckMsgQueue,
    (_80_array *) &cMsgStructQueue_DMI_Control_Pkg);
  outC->numNormalMsg = kcg_lit_int64(0);
  kcg_copy__95_array(
    &outC->Local_NormaliMsgQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->Local_ack_empty = kcg_true;
  kcg_copy_array_float64_10(
    &outC->mm_local_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  outC->Local_isEmpty = kcg_true;
  kcg_copy_array_float64_10(
    &outC->hh_local_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
}


void kcg_save_SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_countDownTimer_MoRC_Pck_Utils(
    &SV->Context_countDownTimer_1,
    &outC->Context_countDownTimer_1);
  kcg_save_SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_DeleteNormalMsg_1,
    &outC->Context_DeleteNormalMsg_1);
  kcg_save_SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_DeleteAckMsg_2,
    &outC->Context_DeleteAckMsg_2);
  kcg_save_SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_MSGQueue_normalMSG_1,
    &outC->Context_MSGQueue_normalMSG_1);
  kcg_save_SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_MSGQueue_AcklMSG_3,
    &outC->Context_MSGQueue_AcklMSG_3);
  kcg_copy_array_float64_5(&SV->Context_ack_mm_array, &outC->ack_mm_array);
  kcg_copy_array_float64_5(&SV->Context_ack_hh_array, &outC->ack_hh_array);
  kcg_copy_array_float64_10(&SV->Context_mm_array, &outC->mm_array);
  kcg_copy_array_float64_10(&SV->Context_hh_array, &outC->hh_array);
  SV->Context_NumAckMsg = outC->NumAckMsg;
  SV->Context_isEmpty = outC->isEmpty;
  SV->Context_AckisEmpty = outC->AckisEmpty;
  SV->Context_NumE = outC->NumE;
  kcg_copy__95_array(&SV->Context_MsgQueue, &outC->MsgQueue);
  kcg_copy__80_array(&SV->Context_AckMsgQueue, &outC->AckMsgQueue);
  kcg_copy_array_float64_10(&SV->Context_hh_local_array, &outC->hh_local_array);
  SV->Context_Local_isEmpty = outC->Local_isEmpty;
  kcg_copy_array_float64_10(&SV->Context_mm_local_array, &outC->mm_local_array);
  SV->Context_Local_ack_empty = outC->Local_ack_empty;
  kcg_copy__95_array(
    &SV->Context_Local_NormaliMsgQueue,
    &outC->Local_NormaliMsgQueue);
  SV->Context_numNormalMsg = outC->numNormalMsg;
  kcg_copy__80_array(&SV->Context_Local_AckMsgQueue, &outC->Local_AckMsgQueue);
  kcg_copy_array_float64_5(
    &SV->Context_hh_local_array_ack,
    &outC->hh_local_array_ack);
  kcg_copy_array_float64_5(
    &SV->Context_mm_local_array_ack,
    &outC->mm_local_array_ack);
  SV->Context_numAckMsg = outC->numAckMsg;
}

void kcg_load_SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_countDownTimer_MoRC_Pck_Utils(
    &outC->Context_countDownTimer_1,
    &SV->Context_countDownTimer_1);
  kcg_load_SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_DeleteNormalMsg_1,
    &SV->Context_DeleteNormalMsg_1);
  kcg_load_SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_DeleteAckMsg_2,
    &SV->Context_DeleteAckMsg_2);
  kcg_load_SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MSGQueue_normalMSG_1,
    &SV->Context_MSGQueue_normalMSG_1);
  kcg_load_SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MSGQueue_AcklMSG_3,
    &SV->Context_MSGQueue_AcklMSG_3);
  kcg_copy_array_float64_5(&outC->ack_mm_array, &SV->Context_ack_mm_array);
  kcg_copy_array_float64_5(&outC->ack_hh_array, &SV->Context_ack_hh_array);
  kcg_copy_array_float64_10(&outC->mm_array, &SV->Context_mm_array);
  kcg_copy_array_float64_10(&outC->hh_array, &SV->Context_hh_array);
  outC->NumAckMsg = SV->Context_NumAckMsg;
  outC->isEmpty = SV->Context_isEmpty;
  outC->AckisEmpty = SV->Context_AckisEmpty;
  outC->NumE = SV->Context_NumE;
  kcg_copy__95_array(&outC->MsgQueue, &SV->Context_MsgQueue);
  kcg_copy__80_array(&outC->AckMsgQueue, &SV->Context_AckMsgQueue);
  kcg_copy_array_float64_10(&outC->hh_local_array, &SV->Context_hh_local_array);
  outC->Local_isEmpty = SV->Context_Local_isEmpty;
  kcg_copy_array_float64_10(&outC->mm_local_array, &SV->Context_mm_local_array);
  outC->Local_ack_empty = SV->Context_Local_ack_empty;
  kcg_copy__95_array(
    &outC->Local_NormaliMsgQueue,
    &SV->Context_Local_NormaliMsgQueue);
  outC->numNormalMsg = SV->Context_numNormalMsg;
  kcg_copy__80_array(&outC->Local_AckMsgQueue, &SV->Context_Local_AckMsgQueue);
  kcg_copy_array_float64_5(
    &outC->hh_local_array_ack,
    &SV->Context_hh_local_array_ack);
  kcg_copy_array_float64_5(
    &outC->mm_local_array_ack,
    &SV->Context_mm_local_array_ack);
  outC->numAckMsg = SV->Context_numAckMsg;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

