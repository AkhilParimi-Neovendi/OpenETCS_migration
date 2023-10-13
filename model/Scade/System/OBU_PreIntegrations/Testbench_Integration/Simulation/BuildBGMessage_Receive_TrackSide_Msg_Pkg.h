/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_
#define _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BG_Message_T_BG_Types_Pkg /* outBGMessage/ */ outBGMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* storeAdditionalTelegram/ */ storeAdditionalTelegram;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* storeCollector/ */ storeCollector;
  TelegramArray_T_BG_Types_Pkg /* storeBGTelegramArray/ */ storeBGTelegramArray;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport /* IfBlock2:then:_L45=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage#1)/ */ Context_updateCollectorSendMessage_1;
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::manageTelegram#1)/ */ Context_manageTelegram_1;
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg /* IfBlock1:else:IfBlock3:then:_L6=(Receive_TrackSide_Msg_Pkg::checkOdometry#3)/ */ Context_checkOdometry_3;
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg /* IfBlock4:else:_L10=(Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram#3)/ */ Context_manageAdditionalTelegram_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock2:else:IfBlock3: */ IfBlock3_clock_else_IfBlock2;
  kcg_bool /* IfBlock1:else:IfBlock3: */ IfBlock3_clock_else_IfBlock1;
  kcg_bool /* IfBlock4: */ IfBlock4_clock;
  kcg_bool /* IfBlock2: */ IfBlock2_clock;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock4:then:_L1/ */ _L1_then_IfBlock4;
  kcg_bool /* IfBlock4:else:_L10/ */ _L10_else_IfBlock4;
  Telegram_T_BG_Types_Pkg /* IfBlock4:else:_L11/ */ _L11_else_IfBlock4;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock4:else:_L12/ */ _L12_else_IfBlock4;
  kcg_bool /* IfBlock4:else:_L13/ */ _L13_else_IfBlock4;
  kcg_bool /* IfBlock4:else:_L9/ */ _L9_else_IfBlock4;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* IfBlock4:else:_L5/ */ _L5_else_IfBlock4;
  Telegram_T_BG_Types_Pkg /* IfBlock4:else:_L6/ */ _L6_else_IfBlock4;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock4:else:_L7/ */ _L7_else_IfBlock4;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock2:then:_L48/ */ _L48_then_IfBlock2;
  kcg_int64 /* IfBlock2:then:_L46/ */ _L46_then_IfBlock2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock2:then:_L45/ */ _L45_then_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* IfBlock2:then:_L41/ */ _L41_then_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* IfBlock2:then:_L29/ */ _L29_then_IfBlock2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock2:then:_L23/ */ _L23_then_IfBlock2;
  kcg_bool /* IfBlock2:then:_L14/ */ _L14_then_IfBlock2;
  BG_Message_T_BG_Types_Pkg /* IfBlock2:then:_L7/ */ _L7_then_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* IfBlock2:else:_L12/ */ _L12_else_IfBlock2;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock2:else:_L11/ */ _L11_else_IfBlock2;
  kcg_int64 /* IfBlock2:else:_L6/ */ _L6_else_IfBlock2;
  BG_Message_T_BG_Types_Pkg /* IfBlock2:else:_L3/ */ _L3_else_IfBlock2;
  kcg_bool /* IfBlock2:else:_L1/ */ _L1_else_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* IfBlock2:else:IfBlock3:else:_L1/ */ _L1_else_IfBlock3_else_IfBlock2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock2:else:IfBlock3:else:_L2/ */ _L2_else_IfBlock3_else_IfBlock2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock2:else:IfBlock3:then:_L1/ */ _L1_then_IfBlock3_else_IfBlock2;
  TelegramArray_T_BG_Types_Pkg /* IfBlock2:else:IfBlock3:then:_L2/ */ _L2_then_IfBlock3_else_IfBlock2;
  kcg_bool /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:else:IfBlock3:else:_L1/ */ _L1_else_IfBlock3_else_IfBlock1;
  kcg_bool /* IfBlock1:else:IfBlock3:else:_L2/ */ _L2_else_IfBlock3_else_IfBlock1;
  kcg_bool /* IfBlock1:else:IfBlock3:then:_L6/ */ _L6_then_IfBlock3_else_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:else:IfBlock3:then:_L5/ */ _L5_then_IfBlock3_else_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:else:IfBlock3:then:_L4/ */ _L4_then_IfBlock3_else_IfBlock1;
  kcg_bool /* IfBlock1:else:IfBlock3:then:_L7/ */ _L7_then_IfBlock3_else_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:else:IfBlock3:then:_L9/ */ _L9_then_IfBlock3_else_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:else:IfBlock3:then:_L11/ */ _L11_then_IfBlock3_else_IfBlock1;
  kcg_bool /* BGisComplete/ */ BGisComplete;
  kcg_bool /* BGisChangedEarly/ */ BGisChangedEarly;
  Telegram_T_BG_Types_Pkg /* telegramToUse/ */ telegramToUse;
  kcg_bool /* telegramPresent/ */ telegramPresent;
  centerOfBalisePosition_T_BG_Types_Pkg /* positionToUse/ */ positionToUse;
  kcg_bool /* needTelegramStore/ */ needTelegramStore;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* tempCollectorStore/ */ tempCollectorStore;
  TelegramArray_T_BG_Types_Pkg /* tempBGTelegramArray/ */ tempBGTelegramArray;
  kcg_bool /* storeIsChanged/ */ storeIsChanged;
  BG_Message_T_BG_Types_Pkg /* testBG/ */ testBG;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* _L30/ */ _L30;
  Telegram_T_BG_Types_Pkg /* _L27/ */ _L27;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* _L47/ */ _L47;
  BG_Message_T_BG_Types_Pkg /* _L48/ */ _L48;
} outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ */
extern void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* reset/ */
  kcg_bool reset,
  /* inTelegramPresent/ */
  kcg_bool inTelegramPresent,
  /* inDecodedTelegram/ */
  Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* inActualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  TelegramArray_T_BG_Types_Pkg /* storeBGTelegramArray/ */ Context_storeBGTelegramArray;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* storeCollector/ */ Context_storeCollector;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* storeAdditionalTelegram/ */ Context_storeAdditionalTelegram;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_BuildBGMessage_Receive_TrackSide_Msg_Pkg;

extern void kcg_save_SV_BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  SV_BuildBGMessage_Receive_TrackSide_Msg_Pkg *SV,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);
extern void kcg_load_SV_BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC,
  SV_BuildBGMessage_Receive_TrackSide_Msg_Pkg *SV);



#endif /* _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

