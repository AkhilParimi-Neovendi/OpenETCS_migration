/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _checkInit_Receive_TrackSide_Msg_Pkg_H_
#define _checkInit_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* outCollector/ */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport /* IfBlock1:else:_L20=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */ Context_initCollector_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:else:_L20/ */ _L20_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:_L19/ */ _L19_else_IfBlock1;
  kcg_bool /* isDefined/ */ isDefined;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L8/ */ _L8;
} outC_checkInit_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::checkInit/ */
extern void checkInit_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkInit_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkInit_init_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _checkInit_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkInit_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

