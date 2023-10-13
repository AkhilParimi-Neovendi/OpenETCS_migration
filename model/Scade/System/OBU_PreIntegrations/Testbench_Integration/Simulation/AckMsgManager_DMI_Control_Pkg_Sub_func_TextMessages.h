/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Length_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int64_5 /* IndexFixedMsg/ */ IndexFixedMsg;
  array_char_30_5 /* ArrayPlainText/ */ ArrayPlainText;
  array_float64_5 /* Array_hh/ */ Array_hh;
  array_float64_5 /* Array_mm/ */ Array_mm;
  kcg_bool /* FlashingBorderMsg/ */ FlashingBorderMsg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* IfBlock1:then:_L23=(DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator#1)/ */ Context_Find_Q_Text_iterator_1[27];
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages /* _L10=(DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator#1)/ */ Context_FlashingOperator_1;
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages /* _L17=(DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText#1)/ */ Context_CheckTypeOfText_1;
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages /* _L31=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#2)/ */ Context_SortTimeTopDown_ack_2[5];
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages /* _L23=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#1)/ */ Context_SortTimeTopDown_ack_1[5];
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages /* _L56=(DMI_Control_Pkg::Sub_func::TextMessages::Length#2)/ */ Context_Length_2;
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages /* _L54=(DMI_Control_Pkg::Sub_func::TextMessages::Length#1)/ */ Context_Length_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  P044_other_data_TM_TrainToTrack /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  array_int64_5 /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  array_int64_4 /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  DMI_Q_TEXT_DMI_Types_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  Array_DMI_Q_Text /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  Array_DMI_Q_Text /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  MsgStructure /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  _80_array /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  array_char_30 /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  array_char_30 /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  array_char_30 /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  array_char_30 /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  array_char_30_5 /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  array_char_30 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  _80_array /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  MsgStructure /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  DMI_TEXT_DMI_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_bool /* FixText/ */ FixText;
  kcg_bool /* PlainText/ */ PlainText;
  kcg_int64 /* num_mm/ */ num_mm;
  kcg_int64 /* num_hh/ */ num_hh;
  _80_array /* _L1/ */ _L1;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  array_float64_5 /* _L19/ */ _L19;
  array_float64_5 /* _L20/ */ _L20;
  array_float64_5_5 /* _L33/ */ _L33;
  array_float64_5 /* _L31/ */ _L31;
  array_float64_5_5 /* _L29/ */ _L29;
  array_float64_5 /* _L28/ */ _L28;
  array_float64_5 /* _L23/ */ _L23;
  array_float64_5 /* _L21/ */ _L21;
  array_float64_5 /* _L38/ */ _L38;
  kcg_float64 /* _L37/ */ _L37;
  kcg_float64 /* _L36/ */ _L36;
  kcg_float64 /* _L35/ */ _L35;
  kcg_float64 /* _L34/ */ _L34;
  kcg_float64 /* _L40/ */ _L40;
  kcg_float64 /* _L41/ */ _L41;
  kcg_float64 /* _L46/ */ _L46;
  kcg_float64 /* _L45/ */ _L45;
  array_float64_5 /* _L44/ */ _L44;
  kcg_float64 /* _L43/ */ _L43;
  kcg_float64 /* _L42/ */ _L42;
  kcg_int64 /* _L49/ */ _L49;
  array_int64_5 /* _L50/ */ _L50;
  kcg_int64 /* _L52/ */ _L52;
  array_int64_5 /* _L51/ */ _L51;
  array_float64_5 /* _L53/ */ _L53;
  kcg_int64 /* _L54/ */ _L54;
  array_float64_5 /* _L55/ */ _L55;
  kcg_int64 /* _L56/ */ _L56;
  kcg_int64 /* _L58/ */ _L58;
  kcg_int64 /* _L59/ */ _L59;
  array_int64_5 /* _L60/ */ _L60;
  array_int64_5 /* _L61/ */ _L61;
} outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager/ */
extern void AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Queue/ */
  _80_array *Queue,
  /* SystemTime/ */
  kcg_int64 SystemTime,
  /* array_hh_local/ */
  array_float64_5 *array_hh_local,
  /* array_mm_local/ */
  array_float64_5 *array_mm_local,
  /* numAck/ */
  kcg_int64 numAck,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void AckMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages Context_FlashingOperator_1;
} SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

