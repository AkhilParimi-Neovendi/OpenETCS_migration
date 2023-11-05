/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _checkTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _checkTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* outCollector/ */ outCollector;
  TelegramArray_T_BG_Types_Pkg /* outTelegramArray/ */ outTelegramArray;
  kcg_bool /* outTelegramNotInGroup/ */ outTelegramNotInGroup;
  kcg_bool /* outBGchangedEarly/ */ outBGchangedEarly;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport /* _L41=(Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram#1)/ */ Context_findTelegram_1;
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport /* _L93=(Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB#1)/ */ Context_checkSingleBB_1;
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport /* _L92=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */ Context_initCollector_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* newBGInitNeeded/ */ newBGInitNeeded;
  Telegram_T_BG_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L31/ */ _L31;
  NID_BG /* _L32/ */ _L32;
  kcg_bool /* _L36/ */ _L36;
  TelegramArray_T_BG_Types_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  N_PIG /* _L55/ */ _L55;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L56/ */ _L56;
  NID_BG /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_int32 /* _L64/ */ _L64;
  kcg_bool /* _L65/ */ _L65;
  kcg_int32 /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  TelegramArray_T_BG_Types_Pkg /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L73/ */ _L73;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L72/ */ _L72;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L74/ */ _L74;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L92/ */ _L92;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L93/ */ _L93;
  TelegramArray_T_BG_Types_Pkg /* _L94/ */ _L94;
} outC_checkTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::checkTelegram/ */
extern void checkTelegram_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* BGCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *BGCollector,
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _checkTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

