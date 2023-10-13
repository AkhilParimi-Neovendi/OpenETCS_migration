/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isEqual/ */ isEqual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* HeaderIsEqual/ */ HeaderIsEqual;
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  Telegram_T_BG_Types_Pkg /* _L2/ */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* _L3/ */ _L3;
  TelegramHeader_T_BG_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
} outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ */
extern void compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* inTelegram1/ */
  Telegram_T_BG_Types_Pkg *inTelegram1,
  /* inTelegram2/ */
  Telegram_T_BG_Types_Pkg *inTelegram2,
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void compareTelegrams_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

