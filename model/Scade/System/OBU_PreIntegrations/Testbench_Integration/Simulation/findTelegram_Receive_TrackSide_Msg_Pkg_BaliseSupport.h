/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* telegramAlreadyInGroup/ */ telegramAlreadyInGroup;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck#7)/ */ Context_simpleTelegramCheck_7[8];
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  _20_array /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  N_PIG /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  kcg_bool /* valid/ */ valid;
  TelegramArray_T_BG_Types_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
} outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ */
extern void findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* which_pig/ */
  N_PIG which_pig,
  /* HeaderArray/ */
  TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* doSearch/ */
  kcg_bool doSearch,
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void findTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

