/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _addTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _addTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* outCollector/ */ outCollector;
  TelegramArray_T_BG_Types_Pkg /* outTelegramArray/ */ outTelegramArray;
  kcg_bool /* outBGisComplete/ */ outBGisComplete;
  kcg_bool /* outIsDuplicate/ */ outIsDuplicate;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L15=(Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition#1)/ */ Context_setCoordinateSystemPosition_1;
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport /* IfBlock1:then:_L35=(Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree#3)/ */ Context_setFirstFree_3[8];
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L46=(Receive_TrackSide_Msg_Pkg::setIntervalBGPosition#1)/ */ Context_setIntervalBGPosition_1;
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport /* IfBlock1:else:_L14=(Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram#1)/ */ Context_replaceTelegram_1[8];
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L55/ */ _L55_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L48/ */ _L48_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L49/ */ _L49_then_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock1:then:_L50/ */ _L50_then_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock1:then:_L51/ */ _L51_then_IfBlock1;
  NID_BG /* IfBlock1:then:_L52/ */ _L52_then_IfBlock1;
  NID_C /* IfBlock1:then:_L53/ */ _L53_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L54/ */ _L54_then_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock1:then:_L47/ */ _L47_then_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock1:then:_L46/ */ _L46_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L45/ */ _L45_then_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L35/ */ _L35_then_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L37/ */ _L37_then_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L39/ */ _L39_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L40/ */ _L40_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L41/ */ _L41_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  centerOfBalisePosition_T_BG_Types_Pkg /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L33/ */ _L33_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L32/ */ _L32_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L31/ */ _L31_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L30/ */ _L30_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L29/ */ _L29_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L27/ */ _L27_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L22/ */ _L22_else_IfBlock1;
  array_bool_8 /* IfBlock1:else:_L21/ */ _L21_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:_L20/ */ _L20_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L18/ */ _L18_else_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:else:_L16/ */ _L16_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:_L17/ */ _L17_else_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:else:_L15/ */ _L15_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L14/ */ _L14_else_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:else:_L13/ */ _L13_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L11/ */ _L11_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L10/ */ _L10_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L9/ */ _L9_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L8/ */ _L8_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
} outC_addTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::addTelegram/ */
extern void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* inoldTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* doUpdate/ */
  kcg_bool doUpdate,
  /* inPosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void addTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void addTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _addTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

