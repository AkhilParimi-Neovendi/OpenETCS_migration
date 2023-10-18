/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::manageDMI_Input/ */
void manageDMI_Input_manage_DMI_Input_Pkg(
  /* fromDMI/ */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *fromDMI,
  /* dmiStatusReset/ */
  kcg_bool dmiStatusReset,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* lasttNTC/ */
  NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  /* currentDMIStatus/ */
  static DMI_EVC_status_T_DMI_Types_Pkg currentDMIStatus_partial;
  /* fromDMI_Identifier/ */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_Identifier_partial;
  /* outUpdateLevelsDMI/ */
  static kcg_bool outUpdateLevelsDMI_partial;
  /* fromDMI_DriverIdentifier/ */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg fromDMI_DriverIdentifier_partial;
  /* fromDMI_TrainRunningNumber/ */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg fromDMI_TrainRunningNumber_partial;
  /* fromDMI_RadioNetData/ */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_RadioNetData_partial;
  /* fromDMI_Icon_Ack/ */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_Icon_Ack_partial;
  /* fromDMI_TrainData/ */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg fromDMI_TrainData_partial;
  /* fromDMI_TrainDataAck/ */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_TrainDataAck_partial;
  /* fromDMI_AdhesionFactor/ */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg fromDMI_AdhesionFactor_partial;
  /* forModesAndLevel/ */
  static DMI_To_Modes_T_DMI_Types_Pkg forModesAndLevel_partial;
  /* ML_levelTransition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg ML_levelTransition_partial;
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg outStatusList_partial;
  /* updatedNTC/ */
  static NID_STM_DMI_Types_Pkg updatedNTC_partial;
  /* outForMA/ */
  static Driver2MAR_T_MA_Request outForMA_partial;
  /* DMI_Status_inEVC/ */
  static DMI_EVC_status_T_DMI_Types_Pkg DMI_Status_inEVC_partial;
  /* textMessage_Ack/ */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg textMessage_Ack_partial;
  /* icon_Ack/ */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg icon_Ack_partial;
  /* driverRequest/ */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg driverRequest_partial;
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg noname;
  static kcg_bool _1_noname;
  /* currentDMIStatus/ */
  static DMI_EVC_status_T_DMI_Types_Pkg _2_currentDMIStatus_partial;
  /* fromDMI_Identifier/ */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _3_fromDMI_Identifier_partial;
  /* outUpdateLevelsDMI/ */
  static kcg_bool _4_outUpdateLevelsDMI_partial;
  /* fromDMI_DriverIdentifier/ */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _5_fromDMI_DriverIdentifier_partial;
  /* fromDMI_TrainRunningNumber/ */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _6_fromDMI_TrainRunningNumber_partial;
  /* fromDMI_RadioNetData/ */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _7_fromDMI_RadioNetData_partial;
  /* fromDMI_Icon_Ack/ */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _8_fromDMI_Icon_Ack_partial;
  /* fromDMI_TrainData/ */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _9_fromDMI_TrainData_partial;
  /* fromDMI_TrainDataAck/ */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _10_fromDMI_TrainDataAck_partial;
  /* fromDMI_AdhesionFactor/ */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _11_fromDMI_AdhesionFactor_partial;
  /* forModesAndLevel/ */
  static DMI_To_Modes_T_DMI_Types_Pkg _12_forModesAndLevel_partial;
  /* ML_levelTransition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _13_ML_levelTransition_partial;
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _14_outStatusList_partial;
  /* updatedNTC/ */
  static NID_STM_DMI_Types_Pkg _15_updatedNTC_partial;
  /* outForMA/ */
  static Driver2MAR_T_MA_Request _16_outForMA_partial;
  /* DMI_Status_inEVC/ */
  static DMI_EVC_status_T_DMI_Types_Pkg _17_DMI_Status_inEVC_partial;
  /* textMessage_Ack/ */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _18_textMessage_Ack_partial;
  /* icon_Ack/ */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _19_icon_Ack_partial;
  /* driverRequest/ */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _20_driverRequest_partial;
  /* driverRequest/ */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _21_driverRequest_partial;
  /* icon_Ack/ */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _22_icon_Ack_partial;
  /* DMI_Status_inEVC/ */
  static DMI_EVC_status_T_DMI_Types_Pkg _23_DMI_Status_inEVC_partial;
  /* outForMA/ */
  static Driver2MAR_T_MA_Request _24_outForMA_partial;
  /* updatedNTC/ */
  static NID_STM_DMI_Types_Pkg _25_updatedNTC_partial;
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _26_outStatusList_partial;
  /* currentDMIStatus/ */
  static DMI_EVC_status_T_DMI_Types_Pkg _27_currentDMIStatus_partial;
  /* driverRequest/ */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _28_driverRequest_partial;
  /* icon_Ack/ */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _29_icon_Ack_partial;
  /* DMI_Status_inEVC/ */
  static DMI_EVC_status_T_DMI_Types_Pkg _30_DMI_Status_inEVC_partial;
  /* outForMA/ */
  static Driver2MAR_T_MA_Request _31_outForMA_partial;
  /* updatedNTC/ */
  static NID_STM_DMI_Types_Pkg _32_updatedNTC_partial;
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _33_outStatusList_partial;
  /* currentDMIStatus/ */
  static DMI_EVC_status_T_DMI_Types_Pkg _34_currentDMIStatus_partial;
  /* DMI_Status_inEVC/ */
  static DMI_EVC_status_T_DMI_Types_Pkg last_DMI_Status_inEVC;

  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &last_DMI_Status_inEVC,
    &outC->DMI_Status_inEVC);
  outC->_L20 = kcg_lit_int64(1);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L1, fromDMI);
  outC->_L19 = outC->_L1[0];
  outC->_L18 = outC->_L20 == outC->_L19;
  outC->inputPresent = outC->_L18;
  outC->IfBlock1_clock = outC->inputPresent & (!dmiStatusReset);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
      &outC->_L11_then_IfBlock1,
      fromDMI);
    /* IfBlock1:then:_L54=(Messages::Write_int_to_DMI_to_EVC#2)/ */
    Write_int_to_DMI_to_EVC_Messages(
      &outC->_L11_then_IfBlock1,
      &outC->Context_Write_int_to_DMI_to_EVC_2);
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
      &outC->_L54_then_IfBlock1,
      &outC->Context_Write_int_to_DMI_to_EVC_2.dmi_to_evc_ct);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L4_then_IfBlock1,
      &outC->_L54_then_IfBlock1.driverRequest);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &driverRequest_partial,
      &outC->_L4_then_IfBlock1);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->driverRequest,
      &driverRequest_partial);
  }
  else {
    outC->else_clock_IfBlock1 = dmiStatusReset;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->_L7_then_else_IfBlock1,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_28_driverRequest_partial,
        &outC->_L7_then_else_IfBlock1);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_20_driverRequest_partial,
        &_28_driverRequest_partial);
    }
    else {
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->_L6_else_else_IfBlock1,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_21_driverRequest_partial,
        &outC->_L6_else_else_IfBlock1);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_20_driverRequest_partial,
        &_21_driverRequest_partial);
    }
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->driverRequest,
      &_20_driverRequest_partial);
  }
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L16,
    &outC->driverRequest);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->outDriverRequest,
    &outC->_L16);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L14, &last_DMI_Status_inEVC);
  outC->_L15 = outC->_L14.DMI_TrainRunningNumberFirstValidation;
  outC->sndValidationRequested = outC->_L15;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L53_then_IfBlock1,
      &driverRequest_partial);
    /* IfBlock1:then:_L52=(manage_DMI_Input_Pkg::triggerForMA#1)/ */
    triggerForMA_manage_DMI_Input_Pkg(
      &outC->_L53_then_IfBlock1,
      &outC->Context_triggerForMA_1);
    kcg_copy_Driver2MAR_T_MA_Request(
      &outC->_L52_then_IfBlock1,
      &outC->Context_triggerForMA_1.outForMA);
    kcg_copy_Driver2MAR_T_MA_Request(&outForMA_partial, &outC->_L52_then_IfBlock1);
    outC->_L51_then_IfBlock1 = lasttNTC;
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->_L36_then_IfBlock1,
      &outC->_L54_then_IfBlock1.selectedLevel);
    /* IfBlock1:then:_L37=(manage_DMI_Input_Pkg::changeLevelByDiver#1)/ */
    changeLevelByDiver_manage_DMI_Input_Pkg(
      &outC->_L36_then_IfBlock1,
      outC->_L51_then_IfBlock1,
      &outC->Context_changeLevelByDiver_1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L37_then_IfBlock1,
      &outC->Context_changeLevelByDiver_1.ML_levelTransition);
    outC->_L50_then_IfBlock1 = outC->Context_changeLevelByDiver_1.updatedNTC;
    updatedNTC_partial = outC->_L50_then_IfBlock1;
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L9_then_IfBlock1,
      &outC->_L54_then_IfBlock1.trainDataAck);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_TrainDataAck_partial,
      &outC->_L9_then_IfBlock1);
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->_L54_then_IfBlock1.status);
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &noname,
      &outC->_L2_then_IfBlock1);
    outC->_L1_then_IfBlock1 = outC->_L54_then_IfBlock1.present;
    _1_noname = outC->_L1_then_IfBlock1;
    outC->_L45_then_IfBlock1 = inSystemTime;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L44_then_IfBlock1,
      inStatusList);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L41_then_IfBlock1,
      &driverRequest_partial);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L30_then_IfBlock1,
      &outC->_L54_then_IfBlock1.iconAck);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &icon_Ack_partial,
      &outC->_L30_then_IfBlock1);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L42_then_IfBlock1,
      &icon_Ack_partial);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L8_then_IfBlock1,
      &outC->_L54_then_IfBlock1.textMessageAck);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &textMessage_Ack_partial,
      &outC->_L8_then_IfBlock1);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L43_then_IfBlock1,
      &textMessage_Ack_partial);
    /* IfBlock1:then:_L32=(manage_DMI_Input_Pkg::receiveRequestsModesAndLevel#1)/ */
    receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
      &outC->_L41_then_IfBlock1,
      &outC->_L42_then_IfBlock1,
      &outC->_L43_then_IfBlock1,
      outC->_L45_then_IfBlock1,
      &outC->_L44_then_IfBlock1,
      &outC->Context_receiveRequestsModesAndLevel_1);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->_L32_then_IfBlock1,
      &outC->Context_receiveRequestsModesAndLevel_1.forModesAndLevel);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L38_then_IfBlock1,
      &outC->Context_receiveRequestsModesAndLevel_1.outStatusList);
    outC->_L47_then_IfBlock1 =
      outC->Context_receiveRequestsModesAndLevel_1.outDriverRequestToLevels;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outStatusList_partial,
      &outC->_L38_then_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &ML_levelTransition_partial,
      &outC->_L37_then_IfBlock1);
    outUpdateLevelsDMI_partial = outC->_L47_then_IfBlock1;
    outC->_L33_then_IfBlock1 = outC->sndValidationRequested;
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &forModesAndLevel_partial,
      &outC->_L32_then_IfBlock1);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_Icon_Ack_partial,
      &outC->_L30_then_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->_L21_then_IfBlock1,
      &last_DMI_Status_inEVC);
    /* IfBlock1:then:_L12=(manage_DMI_Input_Pkg::updateDMIStatus#2)/ */
    updateDMIStatus_manage_DMI_Input_Pkg(
      &outC->_L21_then_IfBlock1,
      &outC->_L54_then_IfBlock1,
      outC->_L33_then_IfBlock1,
      &outC->Context_updateDMIStatus_2);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->_L12_then_IfBlock1,
      &outC->Context_updateDMIStatus_2.newStatus);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &currentDMIStatus_partial,
      &outC->_L12_then_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &DMI_Status_inEVC_partial,
      &outC->_L12_then_IfBlock1);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->_L5_then_IfBlock1,
      &outC->_L54_then_IfBlock1.driverIdentifier);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_DriverIdentifier_partial,
      &outC->_L5_then_IfBlock1);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->_L6_then_IfBlock1,
      &outC->_L54_then_IfBlock1.trainRunningNumber);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_TrainRunningNumber_partial,
      &outC->_L6_then_IfBlock1);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->_L10_then_IfBlock1,
      &outC->_L54_then_IfBlock1.trainData);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_TrainData_partial,
      &outC->_L10_then_IfBlock1);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L7_then_IfBlock1,
      &outC->_L54_then_IfBlock1.radioNetData);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_RadioNetData_partial,
      &outC->_L7_then_IfBlock1);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L54_then_IfBlock1.identifier);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_Identifier_partial,
      &outC->_L3_then_IfBlock1);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->_L19_then_IfBlock1,
      &outC->_L54_then_IfBlock1.adhesionFactor);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_AdhesionFactor_partial,
      &outC->_L19_then_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->currentDMIStatus,
      &currentDMIStatus_partial);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &fromDMI_Identifier_partial);
    outC->outUpdateLevelsDMI = outUpdateLevelsDMI_partial;
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &fromDMI_DriverIdentifier_partial);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &fromDMI_TrainRunningNumber_partial);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &fromDMI_RadioNetData_partial);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &fromDMI_Icon_Ack_partial);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      &fromDMI_TrainData_partial);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      &fromDMI_TrainDataAck_partial);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &fromDMI_AdhesionFactor_partial);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->forModesAndLevel,
      &forModesAndLevel_partial);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->ML_levelTransition,
      &ML_levelTransition_partial);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &outStatusList_partial);
    outC->updatedNTC = updatedNTC_partial;
    kcg_copy_Driver2MAR_T_MA_Request(&outC->outForMA, &outForMA_partial);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->DMI_Status_inEVC,
      &DMI_Status_inEVC_partial);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->textMessage_Ack,
      &textMessage_Ack_partial);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->icon_Ack,
      &icon_Ack_partial);
  }
  else {
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_18_textMessage_Ack_partial,
      (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMITextMessageAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_13_ML_levelTransition_partial,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &_12_forModesAndLevel_partial,
      (DMI_To_Modes_T_DMI_Types_Pkg *) &cAckModesAndLevels_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &_11_fromDMI_AdhesionFactor_partial,
      (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_10_fromDMI_TrainDataAck_partial,
      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMITrainDataAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &_9_fromDMI_TrainData_partial,
      (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_8_fromDMI_Icon_Ack_partial,
      (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIconAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_7_fromDMI_RadioNetData_partial,
      (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIRadioNetDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &_6_fromDMI_TrainRunningNumber_partial,
      (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainRunningNumberDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &_5_fromDMI_DriverIdentifier_partial,
      (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
        &cDMIDriverIdentifierDefault_manage_DMI_Input_Pkg);
    _4_outUpdateLevelsDMI_partial = kcg_false;
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_3_fromDMI_Identifier_partial,
      (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIdentifierDefault_manage_DMI_Input_Pkg);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->_L11_then_else_IfBlock1,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_Driver2MAR_T_MA_Request(
        &_31_outForMA_partial,
        &outC->_L11_then_else_IfBlock1);
      outC->_L10_then_else_IfBlock1 = lasttNTC;
      _32_updatedNTC_partial = outC->_L10_then_else_IfBlock1;
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->_L9_then_else_IfBlock1,
        (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *) &cEmptyTestStatusList_DMI_Types_Pkg);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->_L8_then_else_IfBlock1,
        (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIIconAckDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_29_icon_Ack_partial,
        &outC->_L8_then_else_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_33_outStatusList_partial,
        &outC->_L9_then_else_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &outC->_L5_then_else_IfBlock1,
        (DMI_EVC_status_T_DMI_Types_Pkg *) &cDMI_EVC_Status_Default_DMI_Types_Pkg);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_34_currentDMIStatus_partial,
        &outC->_L5_then_else_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_30_DMI_Status_inEVC_partial,
        &outC->_L5_then_else_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_2_currentDMIStatus_partial,
        &_34_currentDMIStatus_partial);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_14_outStatusList_partial,
        &_33_outStatusList_partial);
      _15_updatedNTC_partial = _32_updatedNTC_partial;
      kcg_copy_Driver2MAR_T_MA_Request(&_16_outForMA_partial, &_31_outForMA_partial);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_17_DMI_Status_inEVC_partial,
        &_30_DMI_Status_inEVC_partial);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_19_icon_Ack_partial,
        &_29_icon_Ack_partial);
    }
    else {
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->_L8_else_else_IfBlock1,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_Driver2MAR_T_MA_Request(
        &_24_outForMA_partial,
        &outC->_L8_else_else_IfBlock1);
      outC->_L7_else_else_IfBlock1 = lasttNTC;
      _25_updatedNTC_partial = outC->_L7_else_else_IfBlock1;
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->_L5_else_else_IfBlock1,
        (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIIconAckDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_22_icon_Ack_partial,
        &outC->_L5_else_else_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->_L4_else_else_IfBlock1,
        inStatusList);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_26_outStatusList_partial,
        &outC->_L4_else_else_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &outC->_L3_else_else_IfBlock1,
        &last_DMI_Status_inEVC);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_27_currentDMIStatus_partial,
        &outC->_L3_else_else_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_23_DMI_Status_inEVC_partial,
        &outC->_L3_else_else_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_2_currentDMIStatus_partial,
        &_27_currentDMIStatus_partial);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_14_outStatusList_partial,
        &_26_outStatusList_partial);
      _15_updatedNTC_partial = _25_updatedNTC_partial;
      kcg_copy_Driver2MAR_T_MA_Request(&_16_outForMA_partial, &_24_outForMA_partial);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_17_DMI_Status_inEVC_partial,
        &_23_DMI_Status_inEVC_partial);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_19_icon_Ack_partial,
        &_22_icon_Ack_partial);
    }
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->currentDMIStatus,
      &_2_currentDMIStatus_partial);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &_3_fromDMI_Identifier_partial);
    outC->outUpdateLevelsDMI = _4_outUpdateLevelsDMI_partial;
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &_5_fromDMI_DriverIdentifier_partial);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &_6_fromDMI_TrainRunningNumber_partial);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &_7_fromDMI_RadioNetData_partial);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &_8_fromDMI_Icon_Ack_partial);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      &_9_fromDMI_TrainData_partial);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      &_10_fromDMI_TrainDataAck_partial);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &_11_fromDMI_AdhesionFactor_partial);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->forModesAndLevel,
      &_12_forModesAndLevel_partial);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->ML_levelTransition,
      &_13_ML_levelTransition_partial);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &_14_outStatusList_partial);
    outC->updatedNTC = _15_updatedNTC_partial;
    kcg_copy_Driver2MAR_T_MA_Request(&outC->outForMA, &_16_outForMA_partial);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->DMI_Status_inEVC,
      &_17_DMI_Status_inEVC_partial);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->textMessage_Ack,
      &_18_textMessage_Ack_partial);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->icon_Ack,
      &_19_icon_Ack_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void manageDMI_Input_init_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;

  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.systemTime = kcg_lit_int64(0);
  outC->_L16.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L15 = kcg_true;
  outC->_L14.DMI_Active = kcg_true;
  outC->_L14.DMI_Error = kcg_true;
  outC->_L14.DMI_DriverIdValidated = kcg_true;
  outC->_L14.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L14.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L14.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L14.DMI_TrainDataValidated = kcg_true;
  outC->_L14.DMI_StartReceived = kcg_true;
  outC->_L14.DMI_Identifier.valid = kcg_true;
  outC->_L14.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L14.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L14.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L14.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L14.DMI_Identifier.DMI_name[idx] = ' ';
  }
  outC->_L14.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx1 = 0; idx1 < 311; idx1++) {
    outC->_L1[idx1] = kcg_lit_int64(0);
  }
  outC->driverRequest.valid = kcg_true;
  outC->driverRequest.systemTime = kcg_lit_int64(0);
  outC->driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->icon_Ack.valid = kcg_true;
  outC->icon_Ack.systemTime = kcg_lit_int64(0);
  outC->icon_Ack.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->textMessage_Ack.valid = kcg_true;
  outC->textMessage_Ack.systemTime = kcg_lit_int64(0);
  outC->textMessage_Ack.textMessage_ID = kcg_lit_int64(0);
  outC->textMessage_Ack.acknowledged = kcg_true;
  outC->sndValidationRequested = kcg_true;
  outC->inputPresent = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L11_then_else_IfBlock1.trackAheadFree = kcg_true;
  outC->_L11_then_else_IfBlock1.driverSelectsStart = kcg_true;
  outC->_L10_then_else_IfBlock1 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 31; idx2++) {
    outC->_L9_then_else_IfBlock1[idx2].valid = kcg_true;
    outC->_L9_then_else_IfBlock1[idx2].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L9_then_else_IfBlock1[idx2].timeStamp = kcg_lit_int64(0);
    outC->_L9_then_else_IfBlock1[idx2].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L9_then_else_IfBlock1[idx2].context = con_undefined_DMI_Types_Pkg;
    outC->_L9_then_else_IfBlock1[idx2].nid_textmessage = kcg_lit_int64(0);
    outC->_L9_then_else_IfBlock1[idx2].whichLevel = M_LEVEL_Level_0;
    outC->_L9_then_else_IfBlock1[idx2].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L8_then_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L8_then_else_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L7_then_else_IfBlock1.valid = kcg_true;
  outC->_L7_then_else_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L7_then_else_IfBlock1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L5_then_else_IfBlock1.DMI_Active = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_Error = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_DriverIdValidated = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_TrainDataValidated = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_StartReceived = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_Identifier.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.DMI_Identifier.DMI_Identifier =
    DMI_1_DMI_Types_Pkg;
  outC->_L5_then_else_IfBlock1.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->_L5_then_else_IfBlock1.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L5_then_else_IfBlock1.DMI_Identifier.DMI_name[idx3] = ' ';
  }
  outC->_L5_then_else_IfBlock1.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_else_else_IfBlock1.trackAheadFree = kcg_true;
  outC->_L8_else_else_IfBlock1.driverSelectsStart = kcg_true;
  outC->_L7_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_else_else_IfBlock1.valid = kcg_true;
  outC->_L5_else_else_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L5_else_else_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L6_else_else_IfBlock1.valid = kcg_true;
  outC->_L6_else_else_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L6_else_else_IfBlock1.m_request = Start_of_mission_DMI_Types_Pkg;
  for (idx4 = 0; idx4 < 31; idx4++) {
    outC->_L4_else_else_IfBlock1[idx4].valid = kcg_true;
    outC->_L4_else_else_IfBlock1[idx4].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L4_else_else_IfBlock1[idx4].timeStamp = kcg_lit_int64(0);
    outC->_L4_else_else_IfBlock1[idx4].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L4_else_else_IfBlock1[idx4].context = con_undefined_DMI_Types_Pkg;
    outC->_L4_else_else_IfBlock1[idx4].nid_textmessage = kcg_lit_int64(0);
    outC->_L4_else_else_IfBlock1[idx4].whichLevel = M_LEVEL_Level_0;
    outC->_L4_else_else_IfBlock1[idx4].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L3_else_else_IfBlock1.DMI_Active = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_Error = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_DriverIdValidated = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_TrainDataValidated = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_StartReceived = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_Identifier.valid = kcg_true;
  outC->_L3_else_else_IfBlock1.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L3_else_else_IfBlock1.DMI_Identifier.DMI_Identifier =
    DMI_1_DMI_Types_Pkg;
  outC->_L3_else_else_IfBlock1.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->_L3_else_else_IfBlock1.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L3_else_else_IfBlock1.DMI_Identifier.DMI_name[idx5] = ' ';
  }
  outC->_L3_else_else_IfBlock1.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L2_then_IfBlock1.nAlive = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L3_then_IfBlock1.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L3_then_IfBlock1.l_name = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->_L3_then_IfBlock1.DMI_name[idx6] = ' ';
  }
  outC->_L3_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_IfBlock1.valid = kcg_true;
  outC->_L4_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.systemTime = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 9; idx7++) {
    outC->_L5_then_IfBlock1.driverIdentifier[idx7] = ' ';
  }
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.trainRunningNumber = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.valid = kcg_true;
  outC->_L7_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.valid = kcg_true;
  outC->_L8_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.acknowledged = kcg_true;
  outC->_L9_then_IfBlock1.valid = kcg_true;
  outC->_L9_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.acknowledged = kcg_true;
  outC->_L10_then_IfBlock1.valid = kcg_true;
  outC->_L10_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L10_then_IfBlock1.l_train = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.m_brakeperct = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.v_maxTrain = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L10_then_IfBlock1.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L10_then_IfBlock1.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  for (idx8 = 0; idx8 < 311; idx8++) {
    outC->_L11_then_IfBlock1[idx8] = kcg_lit_int64(0);
  }
  outC->_L12_then_IfBlock1.DMI_Active = kcg_true;
  outC->_L12_then_IfBlock1.DMI_Error = kcg_true;
  outC->_L12_then_IfBlock1.DMI_DriverIdValidated = kcg_true;
  outC->_L12_then_IfBlock1.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L12_then_IfBlock1.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L12_then_IfBlock1.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L12_then_IfBlock1.DMI_TrainDataValidated = kcg_true;
  outC->_L12_then_IfBlock1.DMI_StartReceived = kcg_true;
  outC->_L12_then_IfBlock1.DMI_Identifier.valid = kcg_true;
  outC->_L12_then_IfBlock1.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L12_then_IfBlock1.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->_L12_then_IfBlock1.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 255; idx9++) {
    outC->_L12_then_IfBlock1.DMI_Identifier.DMI_name[idx9] = ' ';
  }
  outC->_L12_then_IfBlock1.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_then_IfBlock1.valid = kcg_true;
  outC->_L19_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L19_then_IfBlock1.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L21_then_IfBlock1.DMI_Active = kcg_true;
  outC->_L21_then_IfBlock1.DMI_Error = kcg_true;
  outC->_L21_then_IfBlock1.DMI_DriverIdValidated = kcg_true;
  outC->_L21_then_IfBlock1.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L21_then_IfBlock1.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L21_then_IfBlock1.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L21_then_IfBlock1.DMI_TrainDataValidated = kcg_true;
  outC->_L21_then_IfBlock1.DMI_StartReceived = kcg_true;
  outC->_L21_then_IfBlock1.DMI_Identifier.valid = kcg_true;
  outC->_L21_then_IfBlock1.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L21_then_IfBlock1.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L21_then_IfBlock1.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->_L21_then_IfBlock1.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 255; idx10++) {
    outC->_L21_then_IfBlock1.DMI_Identifier.DMI_name[idx10] = ' ';
  }
  outC->_L21_then_IfBlock1.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30_then_IfBlock1.valid = kcg_true;
  outC->_L30_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.valid = kcg_true;
  outC->_L32_then_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L32_then_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L32_then_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L32_then_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L32_then_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L32_then_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L32_then_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L32_then_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L32_then_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L32_then_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L32_then_IfBlock1.LevelAck = kcg_true;
  outC->_L33_then_IfBlock1 = kcg_true;
  outC->_L36_then_IfBlock1.valid = kcg_true;
  outC->_L36_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.level.level = M_LEVEL_Level_0;
  outC->_L36_then_IfBlock1.level.nid_stm = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.is_set = kcg_true;
  outC->_L37_then_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L37_then_IfBlock1.transition.position = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L37_then_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L37_then_IfBlock1.transition.AckLength = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.LRBG = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.referenceLocation = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 31; idx11++) {
    outC->_L38_then_IfBlock1[idx11].valid = kcg_true;
    outC->_L38_then_IfBlock1[idx11].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L38_then_IfBlock1[idx11].timeStamp = kcg_lit_int64(0);
    outC->_L38_then_IfBlock1[idx11].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L38_then_IfBlock1[idx11].context = con_undefined_DMI_Types_Pkg;
    outC->_L38_then_IfBlock1[idx11].nid_textmessage = kcg_lit_int64(0);
    outC->_L38_then_IfBlock1[idx11].whichLevel = M_LEVEL_Level_0;
    outC->_L38_then_IfBlock1[idx11].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L41_then_IfBlock1.valid = kcg_true;
  outC->_L41_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L41_then_IfBlock1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L42_then_IfBlock1.valid = kcg_true;
  outC->_L42_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L43_then_IfBlock1.valid = kcg_true;
  outC->_L43_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L43_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L43_then_IfBlock1.acknowledged = kcg_true;
  for (idx12 = 0; idx12 < 31; idx12++) {
    outC->_L44_then_IfBlock1[idx12].valid = kcg_true;
    outC->_L44_then_IfBlock1[idx12].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L44_then_IfBlock1[idx12].timeStamp = kcg_lit_int64(0);
    outC->_L44_then_IfBlock1[idx12].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L44_then_IfBlock1[idx12].context = con_undefined_DMI_Types_Pkg;
    outC->_L44_then_IfBlock1[idx12].nid_textmessage = kcg_lit_int64(0);
    outC->_L44_then_IfBlock1[idx12].whichLevel = M_LEVEL_Level_0;
    outC->_L44_then_IfBlock1[idx12].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L45_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L47_then_IfBlock1 = kcg_true;
  outC->_L50_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L51_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L52_then_IfBlock1.trackAheadFree = kcg_true;
  outC->_L52_then_IfBlock1.driverSelectsStart = kcg_true;
  outC->_L53_then_IfBlock1.valid = kcg_true;
  outC->_L53_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L53_then_IfBlock1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L54_then_IfBlock1.present = kcg_true;
  outC->_L54_then_IfBlock1.status.valid = kcg_true;
  outC->_L54_then_IfBlock1.status.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L54_then_IfBlock1.status.nAlive = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.identifier.valid = kcg_true;
  outC->_L54_then_IfBlock1.identifier.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L54_then_IfBlock1.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L54_then_IfBlock1.identifier.l_name = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 255; idx13++) {
    outC->_L54_then_IfBlock1.identifier.DMI_name[idx13] = ' ';
  }
  outC->_L54_then_IfBlock1.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L54_then_IfBlock1.driverRequest.valid = kcg_true;
  outC->_L54_then_IfBlock1.driverRequest.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.driverRequest.m_request =
    Start_of_mission_DMI_Types_Pkg;
  outC->_L54_then_IfBlock1.driverIdentifier.valid = kcg_true;
  outC->_L54_then_IfBlock1.driverIdentifier.systemTime = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 9; idx14++) {
    outC->_L54_then_IfBlock1.driverIdentifier.driverIdentifier[idx14] = ' ';
  }
  outC->_L54_then_IfBlock1.trainRunningNumber.valid = kcg_true;
  outC->_L54_then_IfBlock1.trainRunningNumber.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.trainRunningNumber.trainRunningNumber =
    kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.radioNetData.valid = kcg_true;
  outC->_L54_then_IfBlock1.radioNetData.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.textMessageAck.valid = kcg_true;
  outC->_L54_then_IfBlock1.textMessageAck.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.textMessageAck.textMessage_ID = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.textMessageAck.acknowledged = kcg_true;
  outC->_L54_then_IfBlock1.trainDataAck.valid = kcg_true;
  outC->_L54_then_IfBlock1.trainDataAck.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.trainDataAck.acknowledged = kcg_true;
  outC->_L54_then_IfBlock1.trainData.valid = kcg_true;
  outC->_L54_then_IfBlock1.trainData.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L54_then_IfBlock1.trainData.l_train = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.trainData.m_brakeperct = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.trainData.v_maxTrain = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L54_then_IfBlock1.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L54_then_IfBlock1.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L54_then_IfBlock1.adhesionFactor.valid = kcg_true;
  outC->_L54_then_IfBlock1.adhesionFactor.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.adhesionFactor.adhesionFactor =
    M_ADHESION_Slippery_rail;
  outC->_L54_then_IfBlock1.iconAck.valid = kcg_true;
  outC->_L54_then_IfBlock1.iconAck.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.iconAck.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.selectedLevel.valid = kcg_true;
  outC->_L54_then_IfBlock1.selectedLevel.systemTime = kcg_lit_int64(0);
  outC->_L54_then_IfBlock1.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L54_then_IfBlock1.selectedLevel.level.nid_stm = kcg_lit_int64(0);
  outC->outForMA.trackAheadFree = kcg_true;
  outC->outForMA.driverSelectsStart = kcg_true;
  outC->updatedNTC = kcg_lit_int64(0);
  outC->outDriverRequest.valid = kcg_true;
  outC->outDriverRequest.systemTime = kcg_lit_int64(0);
  outC->outDriverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  for (idx15 = 0; idx15 < 31; idx15++) {
    outC->outStatusList[idx15].valid = kcg_true;
    outC->outStatusList[idx15].dmi_textMessageID = kcg_lit_int64(0);
    outC->outStatusList[idx15].timeStamp = kcg_lit_int64(0);
    outC->outStatusList[idx15].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[idx15].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[idx15].nid_textmessage = kcg_lit_int64(0);
    outC->outStatusList[idx15].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[idx15].whichMode = M_MODE_Full_Supervision;
  }
  outC->ML_levelTransition.is_set = kcg_true;
  outC->ML_levelTransition.transition.level = M_LEVEL_Level_0;
  outC->ML_levelTransition.transition.position = kcg_lit_int64(0);
  outC->ML_levelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_levelTransition.transition.immediateAck = kcg_true;
  outC->ML_levelTransition.transition.AckLength = kcg_lit_int64(0);
  outC->ML_levelTransition.LRBG = kcg_lit_int64(0);
  outC->ML_levelTransition.referenceLocation = kcg_lit_int64(0);
  outC->forModesAndLevel.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->forModesAndLevel.DriverAck.acknowledgement = kcg_true;
  outC->forModesAndLevel.DriverRequest.valid = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Exit_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_NL = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Override = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Start = kcg_true;
  outC->forModesAndLevel.DriverRequest.ETCS_Isolated = kcg_true;
  outC->forModesAndLevel.LevelAck = kcg_true;
  outC->fromDMI_AdhesionFactor.valid = kcg_true;
  outC->fromDMI_AdhesionFactor.systemTime = kcg_lit_int64(0);
  outC->fromDMI_AdhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->fromDMI_TrainDataAck.valid = kcg_true;
  outC->fromDMI_TrainDataAck.systemTime = kcg_lit_int64(0);
  outC->fromDMI_TrainDataAck.acknowledged = kcg_true;
  outC->fromDMI_TrainData.valid = kcg_true;
  outC->fromDMI_TrainData.systemTime = kcg_lit_int64(0);
  outC->fromDMI_TrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->fromDMI_TrainData.l_train = kcg_lit_int64(0);
  outC->fromDMI_TrainData.m_brakeperct = kcg_lit_int64(0);
  outC->fromDMI_TrainData.v_maxTrain = kcg_lit_int64(0);
  outC->fromDMI_TrainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->fromDMI_TrainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->fromDMI_TrainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->fromDMI_Icon_Ack.valid = kcg_true;
  outC->fromDMI_Icon_Ack.systemTime = kcg_lit_int64(0);
  outC->fromDMI_Icon_Ack.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->fromDMI_RadioNetData.valid = kcg_true;
  outC->fromDMI_RadioNetData.systemTime = kcg_lit_int64(0);
  outC->fromDMI_TrainRunningNumber.valid = kcg_true;
  outC->fromDMI_TrainRunningNumber.systemTime = kcg_lit_int64(0);
  outC->fromDMI_TrainRunningNumber.trainRunningNumber = kcg_lit_int64(0);
  outC->fromDMI_DriverIdentifier.valid = kcg_true;
  outC->fromDMI_DriverIdentifier.systemTime = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 9; idx16++) {
    outC->fromDMI_DriverIdentifier.driverIdentifier[idx16] = ' ';
  }
  outC->outUpdateLevelsDMI = kcg_true;
  outC->fromDMI_Identifier.valid = kcg_true;
  outC->fromDMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->fromDMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->fromDMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->fromDMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 255; idx17++) {
    outC->fromDMI_Identifier.DMI_name[idx17] = ' ';
  }
  outC->fromDMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->currentDMIStatus.DMI_Active = kcg_true;
  outC->currentDMIStatus.DMI_Error = kcg_true;
  outC->currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  outC->currentDMIStatus.DMI_LevelSelectedByDirver = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  outC->currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  outC->currentDMIStatus.DMI_StartReceived = kcg_true;
  outC->currentDMIStatus.DMI_Identifier.valid = kcg_true;
  outC->currentDMIStatus.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->currentDMIStatus.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 255; idx18++) {
    outC->currentDMIStatus.DMI_Identifier.DMI_name[idx18] = ' ';
  }
  outC->currentDMIStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* IfBlock1:then:_L12=(manage_DMI_Input_Pkg::updateDMIStatus#2)/ */
  updateDMIStatus_init_manage_DMI_Input_Pkg(&outC->Context_updateDMIStatus_2);
  /* IfBlock1:then:_L32=(manage_DMI_Input_Pkg::receiveRequestsModesAndLevel#1)/ */
  receiveRequestsModesAndLevel_init_manage_DMI_Input_Pkg(
    &outC->Context_receiveRequestsModesAndLevel_1);
  /* IfBlock1:then:_L37=(manage_DMI_Input_Pkg::changeLevelByDiver#1)/ */
  changeLevelByDiver_init_manage_DMI_Input_Pkg(
    &outC->Context_changeLevelByDiver_1);
  /* IfBlock1:then:_L52=(manage_DMI_Input_Pkg::triggerForMA#1)/ */
  triggerForMA_init_manage_DMI_Input_Pkg(&outC->Context_triggerForMA_1);
  /* IfBlock1:then:_L54=(Messages::Write_int_to_DMI_to_EVC#2)/ */
  Write_int_to_DMI_to_EVC_init_Messages(
    &outC->Context_Write_int_to_DMI_to_EVC_2);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_Status_inEVC,
    (DMI_EVC_status_T_DMI_Types_Pkg *) &cDMI_EVC_Status_Default_DMI_Types_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  /* IfBlock1:then:_L12=(manage_DMI_Input_Pkg::updateDMIStatus#2)/ */
  updateDMIStatus_reset_manage_DMI_Input_Pkg(&outC->Context_updateDMIStatus_2);
  /* IfBlock1:then:_L32=(manage_DMI_Input_Pkg::receiveRequestsModesAndLevel#1)/ */
  receiveRequestsModesAndLevel_reset_manage_DMI_Input_Pkg(
    &outC->Context_receiveRequestsModesAndLevel_1);
  /* IfBlock1:then:_L37=(manage_DMI_Input_Pkg::changeLevelByDiver#1)/ */
  changeLevelByDiver_reset_manage_DMI_Input_Pkg(
    &outC->Context_changeLevelByDiver_1);
  /* IfBlock1:then:_L52=(manage_DMI_Input_Pkg::triggerForMA#1)/ */
  triggerForMA_reset_manage_DMI_Input_Pkg(&outC->Context_triggerForMA_1);
  /* IfBlock1:then:_L54=(Messages::Write_int_to_DMI_to_EVC#2)/ */
  Write_int_to_DMI_to_EVC_reset_Messages(
    &outC->Context_Write_int_to_DMI_to_EVC_2);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_Status_inEVC,
    (DMI_EVC_status_T_DMI_Types_Pkg *) &cDMI_EVC_Status_Default_DMI_Types_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageDMI_Input_manage_DMI_Input_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

