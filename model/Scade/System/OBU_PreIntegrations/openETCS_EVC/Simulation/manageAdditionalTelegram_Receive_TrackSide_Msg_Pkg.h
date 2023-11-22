/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outputPresent/ */ outputPresent;
  Telegram_T_BG_Types_Pkg /* outDecodedTelegram/ */ outDecodedTelegram;
  centerOfBalisePosition_T_BG_Types_Pkg /* outcenterOfBalisePosition/ */ outcenterOfBalisePosition;
  kcg_bool /* outNeedStore/ */ outNeedStore;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* storeValid/ */ storeValid;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L51/ */ _L51;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L21/ */ _L21;
  Telegram_T_BG_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L26/ */ _L26;
  Telegram_T_BG_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* _L46/ */ _L46;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L19/ */ _L19;
  Telegram_T_BG_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L55/ */ _L55;
} outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram/ */
extern void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* inDecodedTelegram/ */
  Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* inTelegramStore/ */
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* inputTelegramPresent/ */
  kcg_bool inputTelegramPresent,
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageAdditionalTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

