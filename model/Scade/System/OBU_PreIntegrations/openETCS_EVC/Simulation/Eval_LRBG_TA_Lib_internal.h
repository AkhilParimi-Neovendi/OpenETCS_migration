/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Eval_LRBG_TA_Lib_internal_H_
#define _Eval_LRBG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  kcg_int32 /* C/ */ C;
  kcg_int32 /* BG/ */ BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DECODE_NID_LRBG_TM_conversions /* IfBlock1:else:then:_L3=(TM_conversions::DECODE_NID_LRBG#2)/ */ Context_DECODE_NID_LRBG_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_C /* IfBlock1:then:_L44/ */ _L44_then_IfBlock1;
  NID_BG /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  BG_Header_T_BG_Types_Pkg /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  NID_LRBG /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  NID_C /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  NID_BG /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* source/ */ source;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  MsgSource_T_Common_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
} outC_Eval_LRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Eval_LRBG/ */
extern void Eval_LRBG_TA_Lib_internal(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_Eval_LRBG_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Eval_LRBG_reset_TA_Lib_internal(
  outC_Eval_LRBG_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Eval_LRBG_init_TA_Lib_internal(
  outC_Eval_LRBG_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Eval_LRBG_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Eval_LRBG_TA_Lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

