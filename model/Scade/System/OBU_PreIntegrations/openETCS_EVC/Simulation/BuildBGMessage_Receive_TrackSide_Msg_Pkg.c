/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ */
void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
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
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  /* telegramToUse/ */
  Telegram_T_BG_Types_Pkg telegramToUse_partial;
  /* telegramPresent/ */
  kcg_bool telegramPresent_partial;
  /* positionToUse/ */
  centerOfBalisePosition_T_BG_Types_Pkg positionToUse_partial;
  /* needTelegramStore/ */
  kcg_bool needTelegramStore_partial;
  /* telegramToUse/ */
  Telegram_T_BG_Types_Pkg _1_telegramToUse_partial;
  /* telegramPresent/ */
  kcg_bool _2_telegramPresent_partial;
  /* positionToUse/ */
  centerOfBalisePosition_T_BG_Types_Pkg _3_positionToUse_partial;
  /* needTelegramStore/ */
  kcg_bool _4_needTelegramStore_partial;
  /* storeCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg storeCollector_partial;
  /* storeBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg storeBGTelegramArray_partial;
  /* testBG/ */
  BG_Message_T_BG_Types_Pkg testBG_partial;
  /* storeCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg _5_storeCollector_partial;
  /* storeBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg _6_storeBGTelegramArray_partial;
  /* testBG/ */
  BG_Message_T_BG_Types_Pkg _7_testBG_partial;
  /* storeBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg _8_storeBGTelegramArray_partial;
  /* storeCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg _9_storeCollector_partial;
  /* storeBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg _10_storeBGTelegramArray_partial;
  /* storeCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg _11_storeCollector_partial;
  /* BGisComplete/ */
  kcg_bool BGisComplete_partial;
  /* BGisChangedEarly/ */
  kcg_bool BGisChangedEarly_partial;
  /* tempCollectorStore/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg tempCollectorStore_partial;
  /* tempBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg tempBGTelegramArray_partial;
  /* storeIsChanged/ */
  kcg_bool storeIsChanged_partial;
  /* BGisComplete/ */
  kcg_bool _12_BGisComplete_partial;
  /* BGisChangedEarly/ */
  kcg_bool _13_BGisChangedEarly_partial;
  /* tempCollectorStore/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg _14_tempCollectorStore_partial;
  /* tempBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg _15_tempBGTelegramArray_partial;
  /* storeIsChanged/ */
  kcg_bool _16_storeIsChanged_partial;
  /* storeIsChanged/ */
  kcg_bool _17_storeIsChanged_partial;
  /* tempBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg _18_tempBGTelegramArray_partial;
  /* tempCollectorStore/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg _19_tempCollectorStore_partial;
  /* BGisChangedEarly/ */
  kcg_bool _20_BGisChangedEarly_partial;
  /* BGisComplete/ */
  kcg_bool _21_BGisComplete_partial;
  /* storeIsChanged/ */
  kcg_bool _22_storeIsChanged_partial;
  /* tempBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg _23_tempBGTelegramArray_partial;
  /* tempCollectorStore/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg _24_tempCollectorStore_partial;
  /* BGisChangedEarly/ */
  kcg_bool _25_BGisChangedEarly_partial;
  /* BGisComplete/ */
  kcg_bool _26_BGisComplete_partial;
  /* storeBGTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* storeCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg last_storeCollector;
  /* storeAdditionalTelegram/ */
  TelegramStore_T_Receive_TrackSide_Msg_Pkg last_storeAdditionalTelegram;

  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &last_storeBGTelegramArray,
    &outC->storeBGTelegramArray);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &last_storeCollector,
    &outC->storeCollector);
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &last_storeAdditionalTelegram,
    &outC->storeAdditionalTelegram);
  outC->IfBlock4_clock = reset;
  /* IfBlock4: */
  if (outC->IfBlock4_clock) {
    outC->_L1_then_IfBlock4 = kcg_false;
    telegramPresent_partial = outC->_L1_then_IfBlock4;
    outC->telegramPresent = telegramPresent_partial;
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6_else_IfBlock4, inDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L7_else_IfBlock4,
      incenterOfBalisePosition);
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L5_else_IfBlock4,
      &last_storeAdditionalTelegram);
    outC->_L9_else_IfBlock4 = inTelegramPresent;
    /* IfBlock4:else:_L10=(Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram#3)/ */
    manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
      &outC->_L6_else_IfBlock4,
      &outC->_L7_else_IfBlock4,
      &outC->_L5_else_IfBlock4,
      outC->_L9_else_IfBlock4,
      &outC->Context_manageAdditionalTelegram_3);
    outC->_L10_else_IfBlock4 =
      outC->Context_manageAdditionalTelegram_3.outputPresent;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L11_else_IfBlock4,
      &outC->Context_manageAdditionalTelegram_3.outDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L12_else_IfBlock4,
      &outC->Context_manageAdditionalTelegram_3.outcenterOfBalisePosition);
    outC->_L13_else_IfBlock4 =
      outC->Context_manageAdditionalTelegram_3.outNeedStore;
    _2_telegramPresent_partial = outC->_L10_else_IfBlock4;
    outC->telegramPresent = _2_telegramPresent_partial;
  }
  outC->IfBlock1_clock = outC->telegramPresent;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->IfBlock3_clock_else_IfBlock1 = !reset;
    /* IfBlock1:else:IfBlock3: */
    if (outC->IfBlock3_clock_else_IfBlock1) {
      kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
        &outC->_L5_then_IfBlock3_else_IfBlock1,
        inActualOdometry);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L4_then_IfBlock3_else_IfBlock1,
        &last_storeCollector);
      /* IfBlock1:else:IfBlock3:then:_L6=(Receive_TrackSide_Msg_Pkg::checkOdometry#3)/ */
      checkOdometry_Receive_TrackSide_Msg_Pkg(
        &outC->_L5_then_IfBlock3_else_IfBlock1,
        &outC->_L4_then_IfBlock3_else_IfBlock1,
        &outC->Context_checkOdometry_3);
      outC->_L6_then_IfBlock3_else_IfBlock1 =
        outC->Context_checkOdometry_3.outMessageComplete;
      outC->_L7_then_IfBlock3_else_IfBlock1 =
        outC->Context_checkOdometry_3.outBGIsChangedEarly;
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L9_then_IfBlock3_else_IfBlock1,
        &outC->Context_checkOdometry_3.outCollector);
      _26_BGisComplete_partial = outC->_L6_then_IfBlock3_else_IfBlock1;
      _12_BGisComplete_partial = _26_BGisComplete_partial;
    }
    else {
      outC->_L2_else_IfBlock3_else_IfBlock1 = kcg_false;
      _21_BGisComplete_partial = outC->_L2_else_IfBlock3_else_IfBlock1;
      _12_BGisComplete_partial = _21_BGisComplete_partial;
    }
  }
  /* IfBlock4: */
  if (outC->IfBlock4_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &telegramToUse_partial,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegramToUse, &telegramToUse_partial);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &_1_telegramToUse_partial,
      &outC->_L11_else_IfBlock4);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->telegramToUse,
      &_1_telegramToUse_partial);
  }
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L10_then_IfBlock1,
      &outC->telegramToUse);
  }
  /* IfBlock4: */
  if (outC->IfBlock4_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &positionToUse_partial,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->positionToUse,
      &positionToUse_partial);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_3_positionToUse_partial,
      &outC->_L12_else_IfBlock4);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->positionToUse,
      &_3_positionToUse_partial);
  }
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L11_then_IfBlock1,
      &outC->positionToUse);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L14_then_IfBlock1,
      &last_storeCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L20_then_IfBlock1,
      &last_storeBGTelegramArray);
    /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::manageTelegram#1)/ */
    manageTelegram_Receive_TrackSide_Msg_Pkg(
      &outC->_L10_then_IfBlock1,
      &outC->_L11_then_IfBlock1,
      &outC->_L14_then_IfBlock1,
      &outC->_L20_then_IfBlock1,
      &outC->Context_manageTelegram_1);
    outC->_L4_then_IfBlock1 = outC->Context_manageTelegram_1.outBGisComplete;
    outC->_L5_then_IfBlock1 = outC->Context_manageTelegram_1.outBGisChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L12_then_IfBlock1,
      &outC->Context_manageTelegram_1.outCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L18_then_IfBlock1,
      &outC->Context_manageTelegram_1.outTelegramArray);
    outC->_L22_then_IfBlock1 = outC->Context_manageTelegram_1.outStoresChanged;
    BGisComplete_partial = outC->_L4_then_IfBlock1;
    outC->BGisComplete = BGisComplete_partial;
  }
  else {
    outC->BGisComplete = _12_BGisComplete_partial;
  }
  outC->IfBlock2_clock = outC->BGisComplete;
  if (outC->IfBlock2_clock) {
    outC->_L14_then_IfBlock2 = kcg_true;
  }
  else {
    outC->_L1_else_IfBlock2 = kcg_false;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L12_else_IfBlock2,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    outC->_L6_else_IfBlock2 = kcg_lit_int32(0);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L11_else_IfBlock2,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    outC->_L3_else_IfBlock2.present = outC->_L1_else_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L3_else_IfBlock2.Telegrams,
      &outC->_L12_else_IfBlock2);
    outC->_L3_else_IfBlock2.numberBalises = outC->_L6_else_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L3_else_IfBlock2.centerOfBalisePosition,
      &outC->_L11_else_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(
      &_7_testBG_partial,
      &outC->_L3_else_IfBlock2);
  }
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &tempBGTelegramArray_partial,
      &outC->_L18_then_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->tempBGTelegramArray,
      &tempBGTelegramArray_partial);
  }
  else {
    /* IfBlock1:else:IfBlock3: */
    if (outC->IfBlock3_clock_else_IfBlock1) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L11_then_IfBlock3_else_IfBlock1,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_23_tempBGTelegramArray_partial,
        &outC->_L11_then_IfBlock3_else_IfBlock1);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_15_tempBGTelegramArray_partial,
        &_23_tempBGTelegramArray_partial);
    }
    else {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_18_tempBGTelegramArray_partial,
        (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_15_tempBGTelegramArray_partial,
        &_18_tempBGTelegramArray_partial);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->tempBGTelegramArray,
      &_15_tempBGTelegramArray_partial);
  }
  if (outC->IfBlock2_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L29_then_IfBlock2,
      &outC->tempBGTelegramArray);
  }
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &tempCollectorStore_partial,
      &outC->_L12_then_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->tempCollectorStore,
      &tempCollectorStore_partial);
  }
  else {
    /* IfBlock1:else:IfBlock3: */
    if (outC->IfBlock3_clock_else_IfBlock1) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_24_tempCollectorStore_partial,
        &outC->_L9_then_IfBlock3_else_IfBlock1);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_14_tempCollectorStore_partial,
        &_24_tempCollectorStore_partial);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_19_tempCollectorStore_partial,
        (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_14_tempCollectorStore_partial,
        &_19_tempCollectorStore_partial);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->tempCollectorStore,
      &_14_tempCollectorStore_partial);
  }
  /* IfBlock2: */
  if (outC->IfBlock2_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L23_then_IfBlock2,
      &outC->tempCollectorStore);
    /* IfBlock2:then:_L45=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage#1)/ */
    updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L23_then_IfBlock2,
      &outC->Context_updateCollectorSendMessage_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L45_then_IfBlock2,
      &outC->Context_updateCollectorSendMessage_1.outCollector);
    outC->_L46_then_IfBlock2 = outC->_L45_then_IfBlock2.collectedTelegrams;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L48_then_IfBlock2,
      &outC->_L45_then_IfBlock2.balisePosition);
    outC->_L7_then_IfBlock2.present = outC->_L14_then_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L7_then_IfBlock2.Telegrams,
      &outC->_L29_then_IfBlock2);
    outC->_L7_then_IfBlock2.numberBalises = outC->_L46_then_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L7_then_IfBlock2.centerOfBalisePosition,
      &outC->_L48_then_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&testBG_partial, &outC->_L7_then_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->testBG, &testBG_partial);
  }
  else {
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->testBG, &_7_testBG_partial);
  }
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L48, &outC->testBG);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->outBGMessage, &outC->_L48);
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L47,
    (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  outC->_L46 = inTelegramPresent;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    BGisChangedEarly_partial = outC->_L5_then_IfBlock1;
    outC->BGisChangedEarly = BGisChangedEarly_partial;
  }
  else {
    /* IfBlock1:else:IfBlock3: */
    if (outC->IfBlock3_clock_else_IfBlock1) {
      _25_BGisChangedEarly_partial = outC->_L7_then_IfBlock3_else_IfBlock1;
      _13_BGisChangedEarly_partial = _25_BGisChangedEarly_partial;
    }
    else {
      _20_BGisChangedEarly_partial = kcg_false;
      _13_BGisChangedEarly_partial = _20_BGisChangedEarly_partial;
    }
    outC->BGisChangedEarly = _13_BGisChangedEarly_partial;
  }
  outC->_L44 = outC->BGisChangedEarly;
  /* IfBlock4: */
  if (outC->IfBlock4_clock) {
    needTelegramStore_partial = kcg_false;
    outC->needTelegramStore = needTelegramStore_partial;
  }
  else {
    _4_needTelegramStore_partial = outC->_L13_else_IfBlock4;
    outC->needTelegramStore = _4_needTelegramStore_partial;
  }
  outC->_L31 = outC->needTelegramStore;
  outC->_L45 = outC->_L31 | outC->_L44;
  outC->_L42 = reset;
  outC->_L43 = !outC->_L42;
  outC->_L34 = outC->_L46 & outC->_L45 & outC->_L43;
  outC->_L25 = kcg_true;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L27, inDecodedTelegram);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L23,
    incenterOfBalisePosition);
  outC->_L30.valid = outC->_L25;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L30.telegram, &outC->_L27);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L30.position,
    &outC->_L23);
  /* _L26= */
  if (outC->_L34) {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(&outC->_L26, &outC->_L30);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(&outC->_L26, &outC->_L47);
  }
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeAdditionalTelegram,
    &outC->_L26);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    storeIsChanged_partial = outC->_L22_then_IfBlock1;
    outC->storeIsChanged = storeIsChanged_partial;
  }
  else {
    /* IfBlock1:else:IfBlock3: */
    if (outC->IfBlock3_clock_else_IfBlock1) {
      _22_storeIsChanged_partial = kcg_false;
      _16_storeIsChanged_partial = _22_storeIsChanged_partial;
    }
    else {
      outC->_L1_else_IfBlock3_else_IfBlock1 = kcg_true;
      _17_storeIsChanged_partial = outC->_L1_else_IfBlock3_else_IfBlock1;
      _16_storeIsChanged_partial = _17_storeIsChanged_partial;
    }
    outC->storeIsChanged = _16_storeIsChanged_partial;
  }
  /* IfBlock2: */
  if (outC->IfBlock2_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L41_then_IfBlock2,
      &outC->tempBGTelegramArray);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &storeBGTelegramArray_partial,
      &outC->_L41_then_IfBlock2);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &storeCollector_partial,
      &outC->_L45_then_IfBlock2);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &storeCollector_partial);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &storeBGTelegramArray_partial);
  }
  else {
    outC->IfBlock3_clock_else_IfBlock2 = outC->storeIsChanged;
    /* IfBlock2:else:IfBlock3: */
    if (outC->IfBlock3_clock_else_IfBlock2) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L2_then_IfBlock3_else_IfBlock2,
        &outC->tempBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_10_storeBGTelegramArray_partial,
        &outC->_L2_then_IfBlock3_else_IfBlock2);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L1_then_IfBlock3_else_IfBlock2,
        &outC->tempCollectorStore);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_11_storeCollector_partial,
        &outC->_L1_then_IfBlock3_else_IfBlock2);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_5_storeCollector_partial,
        &_11_storeCollector_partial);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_6_storeBGTelegramArray_partial,
        &_10_storeBGTelegramArray_partial);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L2_else_IfBlock3_else_IfBlock2,
        &last_storeCollector);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_9_storeCollector_partial,
        &outC->_L2_else_IfBlock3_else_IfBlock2);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L1_else_IfBlock3_else_IfBlock2,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_8_storeBGTelegramArray_partial,
        &outC->_L1_else_IfBlock3_else_IfBlock2);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_5_storeCollector_partial,
        &_9_storeCollector_partial);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_6_storeBGTelegramArray_partial,
        &_8_storeBGTelegramArray_partial);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &_5_storeCollector_partial);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &_6_storeBGTelegramArray_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;

  outC->_L48.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L48.Telegrams[idx2].valid = kcg_true;
    outC->_L48.Telegrams[idx2].checkResult = kcg_true;
    outC->_L48.Telegrams[idx2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L48.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L48.Telegrams[idx2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L48.Telegrams[idx2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L48.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L48.Telegrams[idx2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L48.Telegrams[idx2].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L48.Telegrams[idx2].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L48.Telegrams[idx2].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L48.Telegrams[idx2].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L48.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L48.Telegrams[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L48.Telegrams[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L48.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L48.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L48.Telegrams[idx2].packets.PacketData[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L48.numberBalises = kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L48.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L48.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L48.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L47.valid = kcg_true;
  outC->_L47.telegram.valid = kcg_true;
  outC->_L47.telegram.checkResult = kcg_true;
  outC->_L47.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L47.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L47.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L47.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L47.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L47.telegram.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L47.telegram.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L47.telegram.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L47.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L47.telegram.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L47.telegram.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L47.telegram.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L47.telegram.packets.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L47.telegram.packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L47.telegram.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L47.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L47.position.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L47.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47.position.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L47.position.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(
      0);
  outC->_L47.position.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(
      0);
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L23.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L23.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L23.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L23.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L25 = kcg_true;
  outC->_L26.valid = kcg_true;
  outC->_L26.telegram.valid = kcg_true;
  outC->_L26.telegram.checkResult = kcg_true;
  outC->_L26.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L26.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L26.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L26.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L26.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L26.telegram.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L26.telegram.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L26.telegram.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L26.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L26.telegram.packets.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L26.telegram.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L26.telegram.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L26.telegram.packets.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L26.telegram.packets.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L26.telegram.packets.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->_L26.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L26.position.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L26.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.position.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L26.position.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(
      0);
  outC->_L26.position.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(
      0);
  outC->_L27.valid = kcg_true;
  outC->_L27.checkResult = kcg_true;
  outC->_L27.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L27.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L27.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L27.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L27.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L27.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L27.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L27.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L27.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L27.packets.PacketHeaders[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L27.packets.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L27.packets.PacketHeaders[idx7].valid = kcg_true;
    outC->_L27.packets.PacketHeaders[idx7].startAddress = kcg_lit_int32(0);
    outC->_L27.packets.PacketHeaders[idx7].endAddress = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L27.packets.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L30.valid = kcg_true;
  outC->_L30.telegram.valid = kcg_true;
  outC->_L30.telegram.checkResult = kcg_true;
  outC->_L30.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L30.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L30.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L30.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L30.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L30.telegram.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L30.telegram.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L30.telegram.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L30.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L30.telegram.packets.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L30.telegram.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L30.telegram.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L30.telegram.packets.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L30.telegram.packets.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L30.telegram.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->_L30.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L30.position.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L30.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.position.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L30.position.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(
      0);
  outC->_L30.position.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(
      0);
  outC->testBG.present = kcg_true;
  for (idx13 = 0; idx13 < 8; idx13++) {
    outC->testBG.Telegrams[idx13].valid = kcg_true;
    outC->testBG.Telegrams[idx13].checkResult = kcg_true;
    outC->testBG.Telegrams[idx13].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->testBG.Telegrams[idx13].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->testBG.Telegrams[idx13].telegramheader.q_media = Q_MEDIA_Balise;
    outC->testBG.Telegrams[idx13].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->testBG.Telegrams[idx13].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->testBG.Telegrams[idx13].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->testBG.Telegrams[idx13].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->testBG.Telegrams[idx13].telegramheader.nid_c = kcg_lit_int32(0);
    outC->testBG.Telegrams[idx13].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->testBG.Telegrams[idx13].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx11 = 0; idx11 < 30; idx11++) {
      outC->testBG.Telegrams[idx13].packets.PacketHeaders[idx11].nid_packet =
        kcg_lit_int32(0);
      outC->testBG.Telegrams[idx13].packets.PacketHeaders[idx11].q_dir =
        Q_DIR_Reverse;
      outC->testBG.Telegrams[idx13].packets.PacketHeaders[idx11].valid = kcg_true;
      outC->testBG.Telegrams[idx13].packets.PacketHeaders[idx11].startAddress =
        kcg_lit_int32(0);
      outC->testBG.Telegrams[idx13].packets.PacketHeaders[idx11].endAddress =
        kcg_lit_int32(0);
    }
    for (idx12 = 0; idx12 < 500; idx12++) {
      outC->testBG.Telegrams[idx13].packets.PacketData[idx12] = kcg_lit_int32(0);
    }
  }
  outC->testBG.numberBalises = kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->testBG.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->testBG.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->testBG.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->storeIsChanged = kcg_true;
  for (idx16 = 0; idx16 < 8; idx16++) {
    outC->tempBGTelegramArray[idx16].valid = kcg_true;
    outC->tempBGTelegramArray[idx16].checkResult = kcg_true;
    outC->tempBGTelegramArray[idx16].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->tempBGTelegramArray[idx16].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->tempBGTelegramArray[idx16].telegramheader.q_media = Q_MEDIA_Balise;
    outC->tempBGTelegramArray[idx16].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->tempBGTelegramArray[idx16].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->tempBGTelegramArray[idx16].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->tempBGTelegramArray[idx16].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->tempBGTelegramArray[idx16].telegramheader.nid_c = kcg_lit_int32(0);
    outC->tempBGTelegramArray[idx16].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->tempBGTelegramArray[idx16].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx14 = 0; idx14 < 30; idx14++) {
      outC->tempBGTelegramArray[idx16].packets.PacketHeaders[idx14].nid_packet =
        kcg_lit_int32(0);
      outC->tempBGTelegramArray[idx16].packets.PacketHeaders[idx14].q_dir =
        Q_DIR_Reverse;
      outC->tempBGTelegramArray[idx16].packets.PacketHeaders[idx14].valid = kcg_true;
      outC->tempBGTelegramArray[idx16].packets.PacketHeaders[idx14].startAddress =
        kcg_lit_int32(0);
      outC->tempBGTelegramArray[idx16].packets.PacketHeaders[idx14].endAddress =
        kcg_lit_int32(0);
    }
    for (idx15 = 0; idx15 < 500; idx15++) {
      outC->tempBGTelegramArray[idx16].packets.PacketData[idx15] = kcg_lit_int32(0);
    }
  }
  outC->tempCollectorStore.badBaliseFlag = kcg_true;
  outC->tempCollectorStore.BGMessageSent = kcg_true;
  outC->tempCollectorStore.C_ID = kcg_lit_int32(0);
  outC->tempCollectorStore.BG_ID = kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->tempCollectorStore.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->tempCollectorStore.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->tempCollectorStore.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->tempCollectorStore.collectedTelegrams = kcg_lit_int32(0);
  outC->tempCollectorStore.totalTelegrams = kcg_lit_int32(0);
  outC->needTelegramStore = kcg_true;
  outC->positionToUse.odometerOfBaliseDetection.valid = kcg_true;
  outC->positionToUse.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->positionToUse.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->positionToUse.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->positionToUse.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->positionToUse.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(
      0);
  outC->positionToUse.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(
      0);
  outC->telegramPresent = kcg_true;
  outC->telegramToUse.valid = kcg_true;
  outC->telegramToUse.checkResult = kcg_true;
  outC->telegramToUse.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->telegramToUse.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->telegramToUse.telegramheader.q_media = Q_MEDIA_Balise;
  outC->telegramToUse.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->telegramToUse.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->telegramToUse.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->telegramToUse.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->telegramToUse.telegramheader.nid_c = kcg_lit_int32(0);
  outC->telegramToUse.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->telegramToUse.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->telegramToUse.packets.PacketHeaders[idx17].nid_packet = kcg_lit_int32(0);
    outC->telegramToUse.packets.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->telegramToUse.packets.PacketHeaders[idx17].valid = kcg_true;
    outC->telegramToUse.packets.PacketHeaders[idx17].startAddress =
      kcg_lit_int32(0);
    outC->telegramToUse.packets.PacketHeaders[idx17].endAddress = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->telegramToUse.packets.PacketData[idx18] = kcg_lit_int32(0);
  }
  outC->BGisChangedEarly = kcg_true;
  outC->BGisComplete = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->IfBlock2_clock = kcg_true;
  outC->IfBlock4_clock = kcg_true;
  for (idx21 = 0; idx21 < 8; idx21++) {
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].valid = kcg_true;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].checkResult = kcg_true;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L11_then_IfBlock3_else_IfBlock1[idx21].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx19 = 0; idx19 < 30; idx19++) {
      outC->_L11_then_IfBlock3_else_IfBlock1[idx21].packets.PacketHeaders[idx19].nid_packet =
        kcg_lit_int32(0);
      outC->_L11_then_IfBlock3_else_IfBlock1[idx21].packets.PacketHeaders[idx19].q_dir =
        Q_DIR_Reverse;
      outC->_L11_then_IfBlock3_else_IfBlock1[idx21].packets.PacketHeaders[idx19].valid =
        kcg_true;
      outC->_L11_then_IfBlock3_else_IfBlock1[idx21].packets.PacketHeaders[idx19].startAddress =
        kcg_lit_int32(0);
      outC->_L11_then_IfBlock3_else_IfBlock1[idx21].packets.PacketHeaders[idx19].endAddress =
        kcg_lit_int32(0);
    }
    for (idx20 = 0; idx20 < 500; idx20++) {
      outC->_L11_then_IfBlock3_else_IfBlock1[idx21].packets.PacketData[idx20] =
        kcg_lit_int32(0);
    }
  }
  outC->_L9_then_IfBlock3_else_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L9_then_IfBlock3_else_IfBlock1.BGMessageSent = kcg_true;
  outC->_L9_then_IfBlock3_else_IfBlock1.C_ID = kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.BG_ID = kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.collectedTelegrams = kcg_lit_int32(0);
  outC->_L9_then_IfBlock3_else_IfBlock1.totalTelegrams = kcg_lit_int32(0);
  outC->_L7_then_IfBlock3_else_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock3_else_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L4_then_IfBlock3_else_IfBlock1.BGMessageSent = kcg_true;
  outC->_L4_then_IfBlock3_else_IfBlock1.C_ID = kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.BG_ID = kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.collectedTelegrams = kcg_lit_int32(0);
  outC->_L4_then_IfBlock3_else_IfBlock1.totalTelegrams = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock3_else_IfBlock1.timestamp = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.odo.o_nominal = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.odo.o_min = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.odo.o_max = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.speed.v_lower = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.speed.v_upper = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.acceleration = kcg_lit_int32(0);
  outC->_L5_then_IfBlock3_else_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_then_IfBlock3_else_IfBlock1.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock3_else_IfBlock1 = kcg_true;
  outC->_L2_else_IfBlock3_else_IfBlock1 = kcg_true;
  outC->_L1_else_IfBlock3_else_IfBlock1 = kcg_true;
  outC->IfBlock3_clock_else_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock1.valid = kcg_true;
  outC->_L10_then_IfBlock1.checkResult = kcg_true;
  outC->_L10_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L10_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L10_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L10_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx22].nid_packet =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx22].startAddress =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.packets.PacketHeaders[idx22].endAddress =
      kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L10_then_IfBlock1.packets.PacketData[idx23] = kcg_lit_int32(0);
  }
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_then_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L12_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L12_then_IfBlock1.C_ID = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_ID = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.collectedTelegrams = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.totalTelegrams = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L14_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L14_then_IfBlock1.C_ID = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_ID = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.collectedTelegrams = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.totalTelegrams = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 8; idx26++) {
    outC->_L18_then_IfBlock1[idx26].valid = kcg_true;
    outC->_L18_then_IfBlock1[idx26].checkResult = kcg_true;
    outC->_L18_then_IfBlock1[idx26].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18_then_IfBlock1[idx26].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18_then_IfBlock1[idx26].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L18_then_IfBlock1[idx26].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L18_then_IfBlock1[idx26].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18_then_IfBlock1[idx26].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L18_then_IfBlock1[idx26].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx26].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx26].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx26].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx24 = 0; idx24 < 30; idx24++) {
      outC->_L18_then_IfBlock1[idx26].packets.PacketHeaders[idx24].nid_packet =
        kcg_lit_int32(0);
      outC->_L18_then_IfBlock1[idx26].packets.PacketHeaders[idx24].q_dir =
        Q_DIR_Reverse;
      outC->_L18_then_IfBlock1[idx26].packets.PacketHeaders[idx24].valid = kcg_true;
      outC->_L18_then_IfBlock1[idx26].packets.PacketHeaders[idx24].startAddress =
        kcg_lit_int32(0);
      outC->_L18_then_IfBlock1[idx26].packets.PacketHeaders[idx24].endAddress =
        kcg_lit_int32(0);
    }
    for (idx25 = 0; idx25 < 500; idx25++) {
      outC->_L18_then_IfBlock1[idx26].packets.PacketData[idx25] = kcg_lit_int32(0);
    }
  }
  for (idx29 = 0; idx29 < 8; idx29++) {
    outC->_L20_then_IfBlock1[idx29].valid = kcg_true;
    outC->_L20_then_IfBlock1[idx29].checkResult = kcg_true;
    outC->_L20_then_IfBlock1[idx29].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L20_then_IfBlock1[idx29].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20_then_IfBlock1[idx29].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L20_then_IfBlock1[idx29].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L20_then_IfBlock1[idx29].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L20_then_IfBlock1[idx29].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L20_then_IfBlock1[idx29].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L20_then_IfBlock1[idx29].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L20_then_IfBlock1[idx29].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L20_then_IfBlock1[idx29].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx27 = 0; idx27 < 30; idx27++) {
      outC->_L20_then_IfBlock1[idx29].packets.PacketHeaders[idx27].nid_packet =
        kcg_lit_int32(0);
      outC->_L20_then_IfBlock1[idx29].packets.PacketHeaders[idx27].q_dir =
        Q_DIR_Reverse;
      outC->_L20_then_IfBlock1[idx29].packets.PacketHeaders[idx27].valid = kcg_true;
      outC->_L20_then_IfBlock1[idx29].packets.PacketHeaders[idx27].startAddress =
        kcg_lit_int32(0);
      outC->_L20_then_IfBlock1[idx29].packets.PacketHeaders[idx27].endAddress =
        kcg_lit_int32(0);
    }
    for (idx28 = 0; idx28 < 500; idx28++) {
      outC->_L20_then_IfBlock1[idx29].packets.PacketData[idx28] = kcg_lit_int32(0);
    }
  }
  outC->_L22_then_IfBlock1 = kcg_true;
  for (idx32 = 0; idx32 < 8; idx32++) {
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].valid = kcg_true;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].checkResult = kcg_true;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock3_else_IfBlock2[idx32].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx30 = 0; idx30 < 30; idx30++) {
      outC->_L2_then_IfBlock3_else_IfBlock2[idx32].packets.PacketHeaders[idx30].nid_packet =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock3_else_IfBlock2[idx32].packets.PacketHeaders[idx30].q_dir =
        Q_DIR_Reverse;
      outC->_L2_then_IfBlock3_else_IfBlock2[idx32].packets.PacketHeaders[idx30].valid =
        kcg_true;
      outC->_L2_then_IfBlock3_else_IfBlock2[idx32].packets.PacketHeaders[idx30].startAddress =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock3_else_IfBlock2[idx32].packets.PacketHeaders[idx30].endAddress =
        kcg_lit_int32(0);
    }
    for (idx31 = 0; idx31 < 500; idx31++) {
      outC->_L2_then_IfBlock3_else_IfBlock2[idx32].packets.PacketData[idx31] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1_then_IfBlock3_else_IfBlock2.badBaliseFlag = kcg_true;
  outC->_L1_then_IfBlock3_else_IfBlock2.BGMessageSent = kcg_true;
  outC->_L1_then_IfBlock3_else_IfBlock2.C_ID = kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.BG_ID = kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.collectedTelegrams = kcg_lit_int32(0);
  outC->_L1_then_IfBlock3_else_IfBlock2.totalTelegrams = kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.badBaliseFlag = kcg_true;
  outC->_L2_else_IfBlock3_else_IfBlock2.BGMessageSent = kcg_true;
  outC->_L2_else_IfBlock3_else_IfBlock2.C_ID = kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.BG_ID = kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.collectedTelegrams = kcg_lit_int32(0);
  outC->_L2_else_IfBlock3_else_IfBlock2.totalTelegrams = kcg_lit_int32(0);
  for (idx35 = 0; idx35 < 8; idx35++) {
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].valid = kcg_true;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].checkResult = kcg_true;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock3_else_IfBlock2[idx35].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx33 = 0; idx33 < 30; idx33++) {
      outC->_L1_else_IfBlock3_else_IfBlock2[idx35].packets.PacketHeaders[idx33].nid_packet =
        kcg_lit_int32(0);
      outC->_L1_else_IfBlock3_else_IfBlock2[idx35].packets.PacketHeaders[idx33].q_dir =
        Q_DIR_Reverse;
      outC->_L1_else_IfBlock3_else_IfBlock2[idx35].packets.PacketHeaders[idx33].valid =
        kcg_true;
      outC->_L1_else_IfBlock3_else_IfBlock2[idx35].packets.PacketHeaders[idx33].startAddress =
        kcg_lit_int32(0);
      outC->_L1_else_IfBlock3_else_IfBlock2[idx35].packets.PacketHeaders[idx33].endAddress =
        kcg_lit_int32(0);
    }
    for (idx34 = 0; idx34 < 500; idx34++) {
      outC->_L1_else_IfBlock3_else_IfBlock2[idx35].packets.PacketData[idx34] =
        kcg_lit_int32(0);
    }
  }
  outC->IfBlock3_clock_else_IfBlock2 = kcg_true;
  outC->_L1_else_IfBlock2 = kcg_true;
  outC->_L3_else_IfBlock2.present = kcg_true;
  for (idx38 = 0; idx38 < 8; idx38++) {
    outC->_L3_else_IfBlock2.Telegrams[idx38].valid = kcg_true;
    outC->_L3_else_IfBlock2.Telegrams[idx38].checkResult = kcg_true;
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock2.Telegrams[idx38].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx36 = 0; idx36 < 30; idx36++) {
      outC->_L3_else_IfBlock2.Telegrams[idx38].packets.PacketHeaders[idx36].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_else_IfBlock2.Telegrams[idx38].packets.PacketHeaders[idx36].q_dir =
        Q_DIR_Reverse;
      outC->_L3_else_IfBlock2.Telegrams[idx38].packets.PacketHeaders[idx36].valid =
        kcg_true;
      outC->_L3_else_IfBlock2.Telegrams[idx38].packets.PacketHeaders[idx36].startAddress =
        kcg_lit_int32(0);
      outC->_L3_else_IfBlock2.Telegrams[idx38].packets.PacketHeaders[idx36].endAddress =
        kcg_lit_int32(0);
    }
    for (idx37 = 0; idx37 < 500; idx37++) {
      outC->_L3_else_IfBlock2.Telegrams[idx38].packets.PacketData[idx37] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_else_IfBlock2.numberBalises = kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_else_IfBlock2 = kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_else_IfBlock2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_else_IfBlock2.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock2.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 8; idx41++) {
    outC->_L12_else_IfBlock2[idx41].valid = kcg_true;
    outC->_L12_else_IfBlock2[idx41].checkResult = kcg_true;
    outC->_L12_else_IfBlock2[idx41].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L12_else_IfBlock2[idx41].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L12_else_IfBlock2[idx41].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L12_else_IfBlock2[idx41].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L12_else_IfBlock2[idx41].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L12_else_IfBlock2[idx41].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L12_else_IfBlock2[idx41].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L12_else_IfBlock2[idx41].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L12_else_IfBlock2[idx41].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L12_else_IfBlock2[idx41].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx39 = 0; idx39 < 30; idx39++) {
      outC->_L12_else_IfBlock2[idx41].packets.PacketHeaders[idx39].nid_packet =
        kcg_lit_int32(0);
      outC->_L12_else_IfBlock2[idx41].packets.PacketHeaders[idx39].q_dir =
        Q_DIR_Reverse;
      outC->_L12_else_IfBlock2[idx41].packets.PacketHeaders[idx39].valid = kcg_true;
      outC->_L12_else_IfBlock2[idx41].packets.PacketHeaders[idx39].startAddress =
        kcg_lit_int32(0);
      outC->_L12_else_IfBlock2[idx41].packets.PacketHeaders[idx39].endAddress =
        kcg_lit_int32(0);
    }
    for (idx40 = 0; idx40 < 500; idx40++) {
      outC->_L12_else_IfBlock2[idx41].packets.PacketData[idx40] = kcg_lit_int32(0);
    }
  }
  outC->_L7_then_IfBlock2.present = kcg_true;
  for (idx44 = 0; idx44 < 8; idx44++) {
    outC->_L7_then_IfBlock2.Telegrams[idx44].valid = kcg_true;
    outC->_L7_then_IfBlock2.Telegrams[idx44].checkResult = kcg_true;
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L7_then_IfBlock2.Telegrams[idx44].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx42 = 0; idx42 < 30; idx42++) {
      outC->_L7_then_IfBlock2.Telegrams[idx44].packets.PacketHeaders[idx42].nid_packet =
        kcg_lit_int32(0);
      outC->_L7_then_IfBlock2.Telegrams[idx44].packets.PacketHeaders[idx42].q_dir =
        Q_DIR_Reverse;
      outC->_L7_then_IfBlock2.Telegrams[idx44].packets.PacketHeaders[idx42].valid =
        kcg_true;
      outC->_L7_then_IfBlock2.Telegrams[idx44].packets.PacketHeaders[idx42].startAddress =
        kcg_lit_int32(0);
      outC->_L7_then_IfBlock2.Telegrams[idx44].packets.PacketHeaders[idx42].endAddress =
        kcg_lit_int32(0);
    }
    for (idx43 = 0; idx43 < 500; idx43++) {
      outC->_L7_then_IfBlock2.Telegrams[idx44].packets.PacketData[idx43] =
        kcg_lit_int32(0);
    }
  }
  outC->_L7_then_IfBlock2.numberBalises = kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_then_IfBlock2.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_then_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_then_IfBlock2.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock2 = kcg_true;
  outC->_L23_then_IfBlock2.badBaliseFlag = kcg_true;
  outC->_L23_then_IfBlock2.BGMessageSent = kcg_true;
  outC->_L23_then_IfBlock2.C_ID = kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.BG_ID = kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_then_IfBlock2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_then_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_then_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.collectedTelegrams = kcg_lit_int32(0);
  outC->_L23_then_IfBlock2.totalTelegrams = kcg_lit_int32(0);
  for (idx47 = 0; idx47 < 8; idx47++) {
    outC->_L29_then_IfBlock2[idx47].valid = kcg_true;
    outC->_L29_then_IfBlock2[idx47].checkResult = kcg_true;
    outC->_L29_then_IfBlock2[idx47].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L29_then_IfBlock2[idx47].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L29_then_IfBlock2[idx47].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L29_then_IfBlock2[idx47].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L29_then_IfBlock2[idx47].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L29_then_IfBlock2[idx47].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L29_then_IfBlock2[idx47].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L29_then_IfBlock2[idx47].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L29_then_IfBlock2[idx47].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L29_then_IfBlock2[idx47].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx45 = 0; idx45 < 30; idx45++) {
      outC->_L29_then_IfBlock2[idx47].packets.PacketHeaders[idx45].nid_packet =
        kcg_lit_int32(0);
      outC->_L29_then_IfBlock2[idx47].packets.PacketHeaders[idx45].q_dir =
        Q_DIR_Reverse;
      outC->_L29_then_IfBlock2[idx47].packets.PacketHeaders[idx45].valid = kcg_true;
      outC->_L29_then_IfBlock2[idx47].packets.PacketHeaders[idx45].startAddress =
        kcg_lit_int32(0);
      outC->_L29_then_IfBlock2[idx47].packets.PacketHeaders[idx45].endAddress =
        kcg_lit_int32(0);
    }
    for (idx46 = 0; idx46 < 500; idx46++) {
      outC->_L29_then_IfBlock2[idx47].packets.PacketData[idx46] = kcg_lit_int32(0);
    }
  }
  for (idx50 = 0; idx50 < 8; idx50++) {
    outC->_L41_then_IfBlock2[idx50].valid = kcg_true;
    outC->_L41_then_IfBlock2[idx50].checkResult = kcg_true;
    outC->_L41_then_IfBlock2[idx50].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L41_then_IfBlock2[idx50].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L41_then_IfBlock2[idx50].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L41_then_IfBlock2[idx50].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L41_then_IfBlock2[idx50].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L41_then_IfBlock2[idx50].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L41_then_IfBlock2[idx50].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L41_then_IfBlock2[idx50].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L41_then_IfBlock2[idx50].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L41_then_IfBlock2[idx50].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx48 = 0; idx48 < 30; idx48++) {
      outC->_L41_then_IfBlock2[idx50].packets.PacketHeaders[idx48].nid_packet =
        kcg_lit_int32(0);
      outC->_L41_then_IfBlock2[idx50].packets.PacketHeaders[idx48].q_dir =
        Q_DIR_Reverse;
      outC->_L41_then_IfBlock2[idx50].packets.PacketHeaders[idx48].valid = kcg_true;
      outC->_L41_then_IfBlock2[idx50].packets.PacketHeaders[idx48].startAddress =
        kcg_lit_int32(0);
      outC->_L41_then_IfBlock2[idx50].packets.PacketHeaders[idx48].endAddress =
        kcg_lit_int32(0);
    }
    for (idx49 = 0; idx49 < 500; idx49++) {
      outC->_L41_then_IfBlock2[idx50].packets.PacketData[idx49] = kcg_lit_int32(0);
    }
  }
  outC->_L45_then_IfBlock2.badBaliseFlag = kcg_true;
  outC->_L45_then_IfBlock2.BGMessageSent = kcg_true;
  outC->_L45_then_IfBlock2.C_ID = kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.BG_ID = kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L45_then_IfBlock2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L45_then_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L45_then_IfBlock2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L45_then_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.collectedTelegrams = kcg_lit_int32(0);
  outC->_L45_then_IfBlock2.totalTelegrams = kcg_lit_int32(0);
  outC->_L46_then_IfBlock2 = kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L48_then_IfBlock2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L48_then_IfBlock2.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L48_then_IfBlock2.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_else_IfBlock4.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_else_IfBlock4.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_else_IfBlock4.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_else_IfBlock4.valid = kcg_true;
  outC->_L6_else_IfBlock4.checkResult = kcg_true;
  outC->_L6_else_IfBlock4.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6_else_IfBlock4.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_else_IfBlock4.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L6_else_IfBlock4.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L6_else_IfBlock4.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6_else_IfBlock4.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L6_else_IfBlock4.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L6_else_IfBlock4.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L6_else_IfBlock4.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L6_else_IfBlock4.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx51 = 0; idx51 < 30; idx51++) {
    outC->_L6_else_IfBlock4.packets.PacketHeaders[idx51].nid_packet =
      kcg_lit_int32(0);
    outC->_L6_else_IfBlock4.packets.PacketHeaders[idx51].q_dir = Q_DIR_Reverse;
    outC->_L6_else_IfBlock4.packets.PacketHeaders[idx51].valid = kcg_true;
    outC->_L6_else_IfBlock4.packets.PacketHeaders[idx51].startAddress =
      kcg_lit_int32(0);
    outC->_L6_else_IfBlock4.packets.PacketHeaders[idx51].endAddress =
      kcg_lit_int32(0);
  }
  for (idx52 = 0; idx52 < 500; idx52++) {
    outC->_L6_else_IfBlock4.packets.PacketData[idx52] = kcg_lit_int32(0);
  }
  outC->_L5_else_IfBlock4.valid = kcg_true;
  outC->_L5_else_IfBlock4.telegram.valid = kcg_true;
  outC->_L5_else_IfBlock4.telegram.checkResult = kcg_true;
  outC->_L5_else_IfBlock4.telegram.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_else_IfBlock4.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_else_IfBlock4.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L5_else_IfBlock4.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L5_else_IfBlock4.telegram.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_else_IfBlock4.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L5_else_IfBlock4.telegram.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.telegram.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.telegram.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx53 = 0; idx53 < 30; idx53++) {
    outC->_L5_else_IfBlock4.telegram.packets.PacketHeaders[idx53].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_else_IfBlock4.telegram.packets.PacketHeaders[idx53].q_dir =
      Q_DIR_Reverse;
    outC->_L5_else_IfBlock4.telegram.packets.PacketHeaders[idx53].valid = kcg_true;
    outC->_L5_else_IfBlock4.telegram.packets.PacketHeaders[idx53].startAddress =
      kcg_lit_int32(0);
    outC->_L5_else_IfBlock4.telegram.packets.PacketHeaders[idx53].endAddress =
      kcg_lit_int32(0);
  }
  for (idx54 = 0; idx54 < 500; idx54++) {
    outC->_L5_else_IfBlock4.telegram.packets.PacketData[idx54] = kcg_lit_int32(0);
  }
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_else_IfBlock4.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_else_IfBlock4.position.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_else_IfBlock4.position.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock4 = kcg_true;
  outC->_L13_else_IfBlock4 = kcg_true;
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_else_IfBlock4.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_else_IfBlock4.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock4.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11_else_IfBlock4.valid = kcg_true;
  outC->_L11_else_IfBlock4.checkResult = kcg_true;
  outC->_L11_else_IfBlock4.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L11_else_IfBlock4.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_else_IfBlock4.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L11_else_IfBlock4.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L11_else_IfBlock4.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L11_else_IfBlock4.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L11_else_IfBlock4.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L11_else_IfBlock4.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L11_else_IfBlock4.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L11_else_IfBlock4.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx55 = 0; idx55 < 30; idx55++) {
    outC->_L11_else_IfBlock4.packets.PacketHeaders[idx55].nid_packet =
      kcg_lit_int32(0);
    outC->_L11_else_IfBlock4.packets.PacketHeaders[idx55].q_dir = Q_DIR_Reverse;
    outC->_L11_else_IfBlock4.packets.PacketHeaders[idx55].valid = kcg_true;
    outC->_L11_else_IfBlock4.packets.PacketHeaders[idx55].startAddress =
      kcg_lit_int32(0);
    outC->_L11_else_IfBlock4.packets.PacketHeaders[idx55].endAddress =
      kcg_lit_int32(0);
  }
  for (idx56 = 0; idx56 < 500; idx56++) {
    outC->_L11_else_IfBlock4.packets.PacketData[idx56] = kcg_lit_int32(0);
  }
  outC->_L10_else_IfBlock4 = kcg_true;
  outC->_L1_then_IfBlock4 = kcg_true;
  outC->outBGMessage.present = kcg_true;
  for (idx59 = 0; idx59 < 8; idx59++) {
    outC->outBGMessage.Telegrams[idx59].valid = kcg_true;
    outC->outBGMessage.Telegrams[idx59].checkResult = kcg_true;
    outC->outBGMessage.Telegrams[idx59].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outBGMessage.Telegrams[idx59].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outBGMessage.Telegrams[idx59].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outBGMessage.Telegrams[idx59].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outBGMessage.Telegrams[idx59].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outBGMessage.Telegrams[idx59].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outBGMessage.Telegrams[idx59].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->outBGMessage.Telegrams[idx59].telegramheader.nid_c = kcg_lit_int32(0);
    outC->outBGMessage.Telegrams[idx59].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->outBGMessage.Telegrams[idx59].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx57 = 0; idx57 < 30; idx57++) {
      outC->outBGMessage.Telegrams[idx59].packets.PacketHeaders[idx57].nid_packet =
        kcg_lit_int32(0);
      outC->outBGMessage.Telegrams[idx59].packets.PacketHeaders[idx57].q_dir =
        Q_DIR_Reverse;
      outC->outBGMessage.Telegrams[idx59].packets.PacketHeaders[idx57].valid =
        kcg_true;
      outC->outBGMessage.Telegrams[idx59].packets.PacketHeaders[idx57].startAddress =
        kcg_lit_int32(0);
      outC->outBGMessage.Telegrams[idx59].packets.PacketHeaders[idx57].endAddress =
        kcg_lit_int32(0);
    }
    for (idx58 = 0; idx58 < 500; idx58++) {
      outC->outBGMessage.Telegrams[idx59].packets.PacketData[idx58] =
        kcg_lit_int32(0);
    }
  }
  outC->outBGMessage.numberBalises = kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  /* IfBlock2:then:_L45=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage#1)/ */
  updateCollectorSendMessage_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_updateCollectorSendMessage_1);
  /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::manageTelegram#1)/ */
  manageTelegram_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_manageTelegram_1);
  /* IfBlock1:else:IfBlock3:then:_L6=(Receive_TrackSide_Msg_Pkg::checkOdometry#3)/ */
  checkOdometry_init_Receive_TrackSide_Msg_Pkg(&outC->Context_checkOdometry_3);
  /* IfBlock4:else:_L10=(Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram#3)/ */
  manageAdditionalTelegram_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_manageAdditionalTelegram_3);
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeAdditionalTelegram,
    (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeCollector,
    (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->storeBGTelegramArray,
    (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  /* IfBlock2:then:_L45=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage#1)/ */
  updateCollectorSendMessage_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_updateCollectorSendMessage_1);
  /* IfBlock1:then:_L4=(Receive_TrackSide_Msg_Pkg::manageTelegram#1)/ */
  manageTelegram_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_manageTelegram_1);
  /* IfBlock1:else:IfBlock3:then:_L6=(Receive_TrackSide_Msg_Pkg::checkOdometry#3)/ */
  checkOdometry_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_checkOdometry_3);
  /* IfBlock4:else:_L10=(Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram#3)/ */
  manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_manageAdditionalTelegram_3);
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeAdditionalTelegram,
    (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeCollector,
    (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->storeBGTelegramArray,
    (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

