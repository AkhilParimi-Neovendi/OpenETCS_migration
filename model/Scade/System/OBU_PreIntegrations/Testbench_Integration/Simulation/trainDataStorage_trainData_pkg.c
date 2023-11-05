/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainDataStorage_trainData_pkg.h"

/* trainData_pkg::trainDataStorage/ */
void trainDataStorage_trainData_pkg(
  /* reset/ */
  kcg_bool reset,
  /* trainDatafromTIU/ */
  trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainDatafromDriver/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainDataAckfromDriver/ */
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* eventsForTrainData/ */
  trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  outC_trainDataStorage_trainData_pkg *outC)
{
  /* updatedStatus/ */
  static trainDataStatus_T_trainData_Types_pkg updatedStatus_partial;
  /* trainData/ */
  static trainData_T_TIU_Types_Pkg trainData_partial;
  /* updatedStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _1_updatedStatus_partial;
  /* trainData/ */
  static trainData_T_TIU_Types_Pkg _2_trainData_partial;
  /* updatedStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _3_updatedStatus_partial;
  /* trainData/ */
  static trainData_T_TIU_Types_Pkg _4_trainData_partial;
  /* updatedStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _5_updatedStatus_partial;
  /* trainData/ */
  static trainData_T_TIU_Types_Pkg _6_trainData_partial;
  /* trainData/ */
  static trainData_T_TIU_Types_Pkg _7_trainData_partial;
  /* updatedStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _8_updatedStatus_partial;
  /* trainData/ */
  static trainData_T_TIU_Types_Pkg _9_trainData_partial;
  /* updatedStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _10_updatedStatus_partial;
  static kcg_bool noname;
  static kcg_bool _11_noname;
  /* trainData/ */
  static trainData_T_TIU_Types_Pkg last_trainData;

  kcg_copy_trainData_T_TIU_Types_Pkg(&last_trainData, &outC->trainData);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L31,
    trainDataAckfromDriver);
  outC->_L32 = outC->_L31.valid;
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L7,
    trainDatafromDriver);
  outC->_L8 = outC->_L7.valid;
  outC->_L33 = outC->_L8 | outC->_L32;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->_L23,
    eventsForTrainData);
  outC->_L25 = outC->_L23.trainStandStill;
  outC->_L24 = outC->_L23.driverRequestModify;
  outC->_L26 = outC->_L24 & outC->_L25;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L19, actualStatus);
  outC->_L18 = outC->_L19.valid;
  outC->_L20 = !outC->_L18;
  outC->_L21 = outC->_L33 & outC->_L20;
  outC->_L27 = outC->_L21 | outC->_L26;
  outC->systemFailure = outC->_L27;
  outC->_L30 = outC->systemFailure;
  _11_noname = outC->_L30;
  outC->modifyData = outC->_L26;
  outC->_L29 = outC->modifyData;
  noname = outC->_L29;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L2, actualStatus);
  outC->_L3 = outC->_L2.valid;
  outC->_L5 = !outC->_L3;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1, trainDatafromTIU);
  outC->_L4 = outC->_L1.valid;
  outC->_L6 = outC->_L4 & outC->_L5;
  outC->dataFromTIU = outC->_L6;
  outC->IfBlock1_clock = outC->dataFromTIU;
  outC->_L9 = outC->_L2.valid;
  outC->_L17 = outC->_L9 & outC->_L33;
  outC->dataFromDMI = outC->_L17;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L2_then_IfBlock1, trainDatafromTIU);
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L7_then_IfBlock1, &last_trainData);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->_L4_then_IfBlock1,
      actualStatus);
    /* IfBlock1:then:_L5=(trainData_pkg::storeTIUData#1)/ */
    storeTIUData_trainData_pkg(
      &outC->_L2_then_IfBlock1,
      &outC->_L7_then_IfBlock1,
      &outC->_L4_then_IfBlock1,
      &outC->Context_storeTIUData_1);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &outC->_L5_then_IfBlock1,
      &outC->Context_storeTIUData_1.actualTrainData);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->_L3_then_IfBlock1,
      &outC->Context_storeTIUData_1.updatedStatus);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &trainData_partial,
      &outC->_L5_then_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->trainData, &trainData_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->dataFromDMI;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
        &outC->_L9_then_else_IfBlock1,
        trainDatafromDriver);
      kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->_L12_then_else_IfBlock1,
        trainDataAckfromDriver);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &outC->_L8_then_else_IfBlock1,
        &last_trainData);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->_L5_then_else_IfBlock1,
        actualStatus);
      /* IfBlock1:else:then:_L13=(trainData_pkg::storeDriverInput#1)/ */
      storeDriverInput_trainData_pkg(
        &outC->_L9_then_else_IfBlock1,
        &outC->_L12_then_else_IfBlock1,
        &outC->_L8_then_else_IfBlock1,
        &outC->_L5_then_else_IfBlock1,
        &outC->Context_storeDriverInput_1);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &outC->_L13_then_else_IfBlock1,
        &outC->Context_storeDriverInput_1.trainDataForEVC);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->_L14_then_else_IfBlock1,
        &outC->Context_storeDriverInput_1.updatedStatus);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &_9_trainData_partial,
        &outC->_L13_then_else_IfBlock1);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &_2_trainData_partial,
        &_9_trainData_partial);
    }
    else {
      outC->else_clock_else_IfBlock1 = reset;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &outC->_L4_then_else_else_IfBlock1,
          (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &_4_trainData_partial,
          &outC->_L4_then_else_else_IfBlock1);
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &_7_trainData_partial,
          &_4_trainData_partial);
      }
      else {
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &outC->_L2_else_else_else_IfBlock1,
          &last_trainData);
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &_6_trainData_partial,
          &outC->_L2_else_else_else_IfBlock1);
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &_7_trainData_partial,
          &_6_trainData_partial);
      }
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &_2_trainData_partial,
        &_7_trainData_partial);
    }
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->trainData, &_2_trainData_partial);
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L28, &outC->trainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->actualTrainData, &outC->_L28);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &updatedStatus_partial,
      &outC->_L3_then_IfBlock1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->updatedStatus,
      &updatedStatus_partial);
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_10_updatedStatus_partial,
        &outC->_L14_then_else_IfBlock1);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_1_updatedStatus_partial,
        &_10_updatedStatus_partial);
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->_L2_then_else_else_IfBlock1,
          (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_3_updatedStatus_partial,
          &outC->_L2_then_else_else_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_8_updatedStatus_partial,
          &_3_updatedStatus_partial);
      }
      else {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->_L1_else_else_else_IfBlock1,
          actualStatus);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_5_updatedStatus_partial,
          &outC->_L1_else_else_else_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_8_updatedStatus_partial,
          &_5_updatedStatus_partial);
      }
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_1_updatedStatus_partial,
        &_8_updatedStatus_partial);
    }
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->updatedStatus,
      &_1_updatedStatus_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void trainDataStorage_init_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC)
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
  static kcg_size idx19;

  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31.valid = kcg_true;
  outC->_L31.systemTime = kcg_lit_int32(0);
  outC->_L31.acknowledged = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.acknowledgedByDriver = kcg_true;
  outC->_L28.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L28.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L28.trainLength = kcg_lit_int32(0);
  outC->_L28.brakePerctage = kcg_lit_int32(0);
  outC->_L28.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L28.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L28.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L28.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L28.axleNumber = kcg_lit_int32(0);
  outC->_L28.numberNationalSystems = kcg_lit_int32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L28.nationSystems[idx] = kcg_lit_int32(0);
  }
  outC->_L28.numberTractionSystems = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L28.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L28.tractionSystem[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23.trainStandStill = kcg_true;
  outC->_L23.driverRequestModify = kcg_true;
  outC->_L23.communicationSessionEstablished = kcg_true;
  outC->_L23.safeRadioConnectionLost = kcg_true;
  outC->_L23.approachingRBCarea = kcg_true;
  outC->_L23.MoRCreadyFlag = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L19.valid = kcg_true;
  outC->_L19.validatedByDriver = kcg_true;
  outC->_L19.RBCsystemVersionOnboard = kcg_true;
  outC->_L19.validatedbyRBC = kcg_true;
  outC->_L19.waitingForRBCResponse = kcg_true;
  outC->_L19.driverIsModificationTrainData = kcg_true;
  outC->_L19.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L20 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.systemTime = kcg_lit_int32(0);
  outC->_L7.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7.l_train = kcg_lit_int32(0);
  outC->_L7.m_brakeperct = kcg_lit_int32(0);
  outC->_L7.v_maxTrain = kcg_lit_int32(0);
  outC->_L7.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L7.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L7.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.validatedByDriver = kcg_true;
  outC->_L2.RBCsystemVersionOnboard = kcg_true;
  outC->_L2.validatedbyRBC = kcg_true;
  outC->_L2.waitingForRBCResponse = kcg_true;
  outC->_L2.driverIsModificationTrainData = kcg_true;
  outC->_L2.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.acknowledgedByDriver = kcg_true;
  outC->_L1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.trainLength = kcg_lit_int32(0);
  outC->_L1.brakePerctage = kcg_lit_int32(0);
  outC->_L1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1.axleNumber = kcg_lit_int32(0);
  outC->_L1.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L1.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L1.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  outC->modifyData = kcg_true;
  outC->systemFailure = kcg_true;
  outC->dataFromDMI = kcg_true;
  outC->dataFromTIU = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L13_then_else_IfBlock1.valid = kcg_true;
  outC->_L13_then_else_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L13_then_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13_then_else_IfBlock1.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L13_then_else_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13_then_else_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L13_then_else_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L13_then_else_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L13_then_else_IfBlock1.nationSystems[idx4] = kcg_lit_int32(0);
  }
  outC->_L13_then_else_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L13_then_else_IfBlock1.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L13_then_else_IfBlock1.tractionSystem[idx5].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L14_then_else_IfBlock1.valid = kcg_true;
  outC->_L14_then_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L14_then_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L14_then_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L14_then_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L14_then_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L14_then_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.valid = kcg_true;
  outC->_L12_then_else_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.acknowledged = kcg_true;
  outC->_L9_then_else_IfBlock1.valid = kcg_true;
  outC->_L9_then_else_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L9_then_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L9_then_else_IfBlock1.l_train = kcg_lit_int32(0);
  outC->_L9_then_else_IfBlock1.m_brakeperct = kcg_lit_int32(0);
  outC->_L9_then_else_IfBlock1.v_maxTrain = kcg_lit_int32(0);
  outC->_L9_then_else_IfBlock1.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L9_then_else_IfBlock1.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L9_then_else_IfBlock1.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8_then_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L8_then_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8_then_else_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8_then_else_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8_then_else_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L8_then_else_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L8_then_else_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L8_then_else_IfBlock1.nationSystems[idx6] = kcg_lit_int32(0);
  }
  outC->_L8_then_else_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L8_then_else_IfBlock1.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8_then_else_IfBlock1.tractionSystem[idx7].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L5_then_else_IfBlock1.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L5_then_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L5_then_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L5_then_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L5_then_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L5_then_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_else_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L1_else_else_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L1_else_else_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L1_else_else_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L1_else_else_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L1_else_else_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L2_else_else_else_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L2_else_else_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_else_else_else_IfBlock1.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_else_else_else_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_else_else_else_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L2_else_else_else_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L2_else_else_else_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L2_else_else_else_IfBlock1.nationSystems[idx8] = kcg_lit_int32(0);
  }
  outC->_L2_else_else_else_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L2_else_else_else_IfBlock1.tractionSystem[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_else_else_else_IfBlock1.tractionSystem[idx9].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L2_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L2_then_else_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L2_then_else_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L2_then_else_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L2_then_else_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L2_then_else_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_else_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L4_then_else_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_then_else_else_IfBlock1.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_then_else_else_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_then_else_else_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L4_then_else_else_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L4_then_else_else_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L4_then_else_else_IfBlock1.nationSystems[idx10] = kcg_lit_int32(0);
  }
  outC->_L4_then_else_else_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L4_then_else_else_IfBlock1.tractionSystem[idx11].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_then_else_else_IfBlock1.tractionSystem[idx11].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L2_then_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L2_then_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L2_then_IfBlock1.nationSystems[idx12] = kcg_lit_int32(0);
  }
  outC->_L2_then_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L2_then_IfBlock1.tractionSystem[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_IfBlock1.tractionSystem[idx13].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.validatedByDriver = kcg_true;
  outC->_L3_then_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L3_then_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L3_then_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L3_then_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L3_then_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.valid = kcg_true;
  outC->_L4_then_IfBlock1.validatedByDriver = kcg_true;
  outC->_L4_then_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L4_then_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L4_then_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L4_then_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L4_then_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L5_then_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_then_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5_then_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5_then_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L5_then_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L5_then_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L5_then_IfBlock1.nationSystems[idx14] = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 4; idx15++) {
    outC->_L5_then_IfBlock1.tractionSystem[idx15].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5_then_IfBlock1.tractionSystem[idx15].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L7_then_IfBlock1.valid = kcg_true;
  outC->_L7_then_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L7_then_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7_then_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7_then_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7_then_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L7_then_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L7_then_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->_L7_then_IfBlock1.nationSystems[idx16] = kcg_lit_int32(0);
  }
  outC->_L7_then_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 4; idx17++) {
    outC->_L7_then_IfBlock1.tractionSystem[idx17].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7_then_IfBlock1.tractionSystem[idx17].nid_ctraction = kcg_lit_int32(0);
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->actualTrainData.trainLength = kcg_lit_int32(0);
  outC->actualTrainData.brakePerctage = kcg_lit_int32(0);
  outC->actualTrainData.maxTrainSpeed = kcg_lit_int32(0);
  outC->actualTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = kcg_lit_int32(0);
  outC->actualTrainData.numberNationalSystems = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->actualTrainData.nationSystems[idx18] = kcg_lit_int32(0);
  }
  outC->actualTrainData.numberTractionSystems = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->actualTrainData.tractionSystem[idx19].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->actualTrainData.tractionSystem[idx19].nid_ctraction = kcg_lit_int32(0);
  }
  /* IfBlock1:then:_L5=(trainData_pkg::storeTIUData#1)/ */
  storeTIUData_init_trainData_pkg(&outC->Context_storeTIUData_1);
  /* IfBlock1:else:then:_L13=(trainData_pkg::storeDriverInput#1)/ */
  storeDriverInput_init_trainData_pkg(&outC->Context_storeDriverInput_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->trainData,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainDataStorage_reset_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC)
{
  /* IfBlock1:then:_L5=(trainData_pkg::storeTIUData#1)/ */
  storeTIUData_reset_trainData_pkg(&outC->Context_storeTIUData_1);
  /* IfBlock1:else:then:_L13=(trainData_pkg::storeDriverInput#1)/ */
  storeDriverInput_reset_trainData_pkg(&outC->Context_storeDriverInput_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->trainData,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_trainDataStorage_trainData_pkg(
  SV_trainDataStorage_trainData_pkg *SV,
  outC_trainDataStorage_trainData_pkg *outC)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(&SV->Context_trainData, &outC->trainData);
}

void kcg_load_SV_trainDataStorage_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC,
  SV_trainDataStorage_trainData_pkg *SV)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->trainData, &SV->Context_trainData);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trainDataStorage_trainData_pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

