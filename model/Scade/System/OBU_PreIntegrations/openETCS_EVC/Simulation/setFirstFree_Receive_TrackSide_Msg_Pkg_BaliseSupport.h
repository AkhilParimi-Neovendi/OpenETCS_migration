/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  Telegram_T_BG_Types_Pkg /* outTelegrams/ */ outTelegrams;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  Telegram_T_BG_Types_Pkg /* _L2/ */ _L2;
  Telegram_T_BG_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
} outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree/ */
extern void setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inTelegramArray/ */
  Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setFirstFree_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

