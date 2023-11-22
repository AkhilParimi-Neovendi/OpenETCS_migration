/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  kcg_bool /* telegramAlreadyInGroup/ */ telegramAlreadyInGroup;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L2/ */ _L2;
  N_PIG /* _L3/ */ _L3;
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  N_PIG /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
} outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck/ */
extern void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* accu/ */
  kcg_bool accu,
  /* telegram/ */
  Telegram_T_BG_Types_Pkg *telegram,
  /* which_pig/ */
  N_PIG which_pig,
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void simpleTelegramCheck_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

