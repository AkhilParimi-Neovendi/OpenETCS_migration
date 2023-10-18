/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _manageTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _manageTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"
#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outBGisComplete/ */ outBGisComplete;
  kcg_bool /* outBGisChangedEarly/ */ outBGisChangedEarly;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* outCollector/ */ outCollector;
  TelegramArray_T_BG_Types_Pkg /* outTelegramArray/ */ outTelegramArray;
  kcg_bool /* outStoresChanged/ */ outStoresChanged;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_addTelegram_Receive_TrackSide_Msg_Pkg /* _L54=(Receive_TrackSide_Msg_Pkg::addTelegram#4)/ */ Context_addTelegram_4;
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg /* _L63=(Receive_TrackSide_Msg_Pkg::checkTelegram#1)/ */ Context_checkTelegram_1;
  outC_checkInit_Receive_TrackSide_Msg_Pkg /* _L66=(Receive_TrackSide_Msg_Pkg::checkInit#1)/ */ Context_checkInit_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* isNotReceivedAlready/ */ isNotReceivedAlready;
  kcg_bool /* needsReplace/ */ needsReplace;
  Telegram_T_BG_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L47/ */ _L47;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L51/ */ _L51;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L54/ */ _L54;
  kcg_bool /* _L53/ */ _L53;
  TelegramArray_T_BG_Types_Pkg /* _L58/ */ _L58;
  TelegramArray_T_BG_Types_Pkg /* _L60/ */ _L60;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L63/ */ _L63;
  TelegramArray_T_BG_Types_Pkg /* _L64/ */ _L64;
  kcg_bool /* _L65/ */ _L65;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
} outC_manageTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::manageTelegram/ */
extern void manageTelegram_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* inoldTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _manageTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

