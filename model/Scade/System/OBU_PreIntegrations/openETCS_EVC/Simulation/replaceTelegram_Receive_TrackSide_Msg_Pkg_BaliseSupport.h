/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  Telegram_T_BG_Types_Pkg /* outTelegrams/ */ outTelegrams;
  kcg_bool /* outIsDuplicate/ */ outIsDuplicate;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport /* _L16=(Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams#1)/ */ Context_compareTelegrams_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* doReplace/ */ doReplace;
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  Telegram_T_BG_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  Telegram_T_BG_Types_Pkg /* _L4/ */ _L4;
  N_PIG /* _L6/ */ _L6;
  N_PIG /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  Telegram_T_BG_Types_Pkg /* _L17/ */ _L17;
  Telegram_T_BG_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
} outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram/ */
extern void replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inTelegramArray/ */
  Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void replaceTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

