/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg_H_
#define _setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  centerOfBalisePosition_T_BG_Types_Pkg /* outUpdateBGPosition/ */ outUpdateBGPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L2/ */ _L2;
  N_PIG /* _L3/ */ _L3;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  N_PIG /* _L6/ */ _L6;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  N_PIG /* _L8/ */ _L8;
  M_DUP /* _L10/ */ _L10;
  M_DUP /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
} outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition/ */
extern void setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
  /* inOldPosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setCoordinateSystemPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setCoordinateSystemPosition_init_Receive_TrackSide_Msg_Pkg(
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

