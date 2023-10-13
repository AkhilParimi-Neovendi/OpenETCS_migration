/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* outTrackMessage_for_check/ */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg /* _L6=(Receive_TrackSide_Msg_Pkg::BuildBGMessage#1)/ */ Context_BuildBGMessage_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* telegramPresent/ */ telegramPresent;
  centerOfBalisePosition_T_BG_Types_Pkg /* centerOfBaliseDetection/ */ centerOfBaliseDetection;
  Telegram_T_BG_Types_Pkg /* decodedTelegram/ */ decodedTelegram;
  MsgSource_T_Common_Types_Pkg /* msgType/ */ msgType;
  T_internal_Type_Obu_BasicTypes_Pkg /* systemTimeMsgReceived/ */ systemTimeMsgReceived;
  kcg_bool /* _L1/ */ _L1;
  odometry_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  BG_Message_T_BG_Types_Pkg /* _L6/ */ _L6;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L7/ */ _L7;
  RadioMessage_T_Radio_Types_Pkg /* _L13/ */ _L13;
  API_TrackSideInput_T_API_Msg_Pkg /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L23/ */ _L23;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L25/ */ _L25;
  TelegramHeader_T_BG_Types_Pkg /* _L26/ */ _L26;
  Telegram_T_BG_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L34/ */ _L34;
  MsgSource_T_Common_Types_Pkg /* _L35/ */ _L35;
  MsgSource_T_Common_Types_Pkg /* _L37/ */ _L37;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L40/ */ _L40;
  CompressedPackets_T_Common_Types_Pkg /* _L46/ */ _L46;
  Telegram_T_BG_Types_Pkg /* _L55/ */ _L55;
} outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram/ */
extern void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* reset/ */
  kcg_bool reset,
  /* inActualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* API_TrackSide_Msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_BuildBGMessage_Receive_TrackSide_Msg_Pkg Context_BuildBGMessage_1;
} SV_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg;

extern void kcg_save_SV_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  SV_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *SV,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);
extern void kcg_load_SV_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC,
  SV_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *SV);



#endif /* _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

