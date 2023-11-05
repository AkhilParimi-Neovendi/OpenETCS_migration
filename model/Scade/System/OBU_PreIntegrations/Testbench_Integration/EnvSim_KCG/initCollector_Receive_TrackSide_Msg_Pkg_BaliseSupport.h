/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"
#include "convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* outCollector/ */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport /* _L5=(Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal#1)/ */ Context_convNTotal_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L11/ */ _L11;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  NID_C /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  TelegramHeader_T_BG_Types_Pkg /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  N_TOTAL /* _L4/ */ _L4;
  NID_BG /* _L3/ */ _L3;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  Telegram_T_BG_Types_Pkg /* _L12/ */ _L12;
} outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector/ */
extern void initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void initCollector_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

