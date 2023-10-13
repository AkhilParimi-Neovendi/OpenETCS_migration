#include "Testbench_Integration_interface.h"
#include "Testbench_Integration_type.h"
#include "Testbench_Integration_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

kcg_bool _ctx_GUI_reset_buffer;
kcg_float64 _ctx_GUI_targetSpeed_buffer;
kcg_float64 _ctx_GUI_traction_buffer;
kcg_float64 _ctx_GUI_brake_buffer;
kcg_float64 _ctx_GUI_initialPosition_buffer;
kcg_float64 _ctx_GUI_initialVelocity_buffer;
kcg_int64 _ctx_GUI_mode_buffer;
kcg_int64 _ctx_GUI_level_buffer;
kcg_int64 _ctx_GUI_mobileHWStatus_buffer;
kcg_bool _ctx_GUI_openDesk_buffer;
kcg_bool _ctx_DMI_MousePressed_buffer;
kcg_bool _ctx_DMI_startRequest_buffer;
kcg_bool _ctx_DMI_openTrainRN_buffer;
kcg_bool _ctx_DMI_traindataYesAck_buffer;
kcg_bool _ctx_DMI_TrainRN_Ack_buffer;
array_bool_12 _ctx_DMI_keypad_buffer;
kcg_bool _ctx_DMI_openTrainDataWindow_buffer;
kcg_bool _ctx_DMI_openDriverID_buffer;
kcg_bool _ctx_DMI_DriverID_Ack_buffer;
kcg_bool _ctx_DMI_traindataNoAck_buffer;
kcg_bool _ctx_DMI_traindataAck_buffer;
kcg_bool _ctx_DMI_OverD9_fromDisplay_buffer;
kcg_bool _ctx_DMI_closeButton_buffer;
kcg_bool _ctx_DMI_confirmTrainData_buffer;
kcg_bool _ctx_DMI_textMsgAck_buffer;
kcg_bool _ctx_DMI_openLevelMenu_buffer;
kcg_bool _ctx_DMI_InputFieldAck_buffer;
kcg_bool _ctx_DMI_openMainMenu_fromDisplay_buffer;
kcg_bool _ctx_DMI_OverD12_frpmDisplay_buffer;
kcg_bool _ctx_DMI_HidePlanningArea_fromDisplay_buffer;
kcg_bool _ctx_DMI_ShowPlanningArea_fromDisplay_buffer;
kcg_bool _ctx_DMI_closeButtonMain_buffer;
kcg_bool _ctx_DMI_C1AreaAck_buffer;
kcg_bool _ctx_DMI_ScrollUp_buffer;
kcg_bool _ctx_DMI_ScrollDown_buffer;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&GUI_reset);
    init_kcg_bool(&_ctx_GUI_reset_buffer);
    init_kcg_float64(&GUI_targetSpeed);
    init_kcg_float64(&_ctx_GUI_targetSpeed_buffer);
    init_kcg_float64(&GUI_traction);
    init_kcg_float64(&_ctx_GUI_traction_buffer);
    init_kcg_float64(&GUI_brake);
    init_kcg_float64(&_ctx_GUI_brake_buffer);
    init_kcg_float64(&GUI_initialPosition);
    init_kcg_float64(&_ctx_GUI_initialPosition_buffer);
    init_kcg_float64(&GUI_initialVelocity);
    init_kcg_float64(&_ctx_GUI_initialVelocity_buffer);
    init_kcg_int64(&GUI_mode);
    init_kcg_int64(&_ctx_GUI_mode_buffer);
    init_kcg_int64(&GUI_level);
    init_kcg_int64(&_ctx_GUI_level_buffer);
    init_kcg_int64(&GUI_mobileHWStatus);
    init_kcg_int64(&_ctx_GUI_mobileHWStatus_buffer);
    init_kcg_bool(&GUI_openDesk);
    init_kcg_bool(&_ctx_GUI_openDesk_buffer);
    init_kcg_bool(&DMI_MousePressed);
    init_kcg_bool(&_ctx_DMI_MousePressed_buffer);
    init_kcg_bool(&DMI_startRequest);
    init_kcg_bool(&_ctx_DMI_startRequest_buffer);
    init_kcg_bool(&DMI_openTrainRN);
    init_kcg_bool(&_ctx_DMI_openTrainRN_buffer);
    init_kcg_bool(&DMI_traindataYesAck);
    init_kcg_bool(&_ctx_DMI_traindataYesAck_buffer);
    init_kcg_bool(&DMI_TrainRN_Ack);
    init_kcg_bool(&_ctx_DMI_TrainRN_Ack_buffer);
    init_array_bool_12(&DMI_keypad);
    init_array_bool_12(&_ctx_DMI_keypad_buffer);
    init_kcg_bool(&DMI_openTrainDataWindow);
    init_kcg_bool(&_ctx_DMI_openTrainDataWindow_buffer);
    init_kcg_bool(&DMI_openDriverID);
    init_kcg_bool(&_ctx_DMI_openDriverID_buffer);
    init_kcg_bool(&DMI_DriverID_Ack);
    init_kcg_bool(&_ctx_DMI_DriverID_Ack_buffer);
    init_kcg_bool(&DMI_traindataNoAck);
    init_kcg_bool(&_ctx_DMI_traindataNoAck_buffer);
    init_kcg_bool(&DMI_traindataAck);
    init_kcg_bool(&_ctx_DMI_traindataAck_buffer);
    init_kcg_bool(&DMI_OverD9_fromDisplay);
    init_kcg_bool(&_ctx_DMI_OverD9_fromDisplay_buffer);
    init_kcg_bool(&DMI_closeButton);
    init_kcg_bool(&_ctx_DMI_closeButton_buffer);
    init_kcg_bool(&DMI_confirmTrainData);
    init_kcg_bool(&_ctx_DMI_confirmTrainData_buffer);
    init_kcg_bool(&DMI_textMsgAck);
    init_kcg_bool(&_ctx_DMI_textMsgAck_buffer);
    init_kcg_bool(&DMI_openLevelMenu);
    init_kcg_bool(&_ctx_DMI_openLevelMenu_buffer);
    init_kcg_bool(&DMI_InputFieldAck);
    init_kcg_bool(&_ctx_DMI_InputFieldAck_buffer);
    init_kcg_bool(&DMI_openMainMenu_fromDisplay);
    init_kcg_bool(&_ctx_DMI_openMainMenu_fromDisplay_buffer);
    init_kcg_bool(&DMI_OverD12_frpmDisplay);
    init_kcg_bool(&_ctx_DMI_OverD12_frpmDisplay_buffer);
    init_kcg_bool(&DMI_HidePlanningArea_fromDisplay);
    init_kcg_bool(&_ctx_DMI_HidePlanningArea_fromDisplay_buffer);
    init_kcg_bool(&DMI_ShowPlanningArea_fromDisplay);
    init_kcg_bool(&_ctx_DMI_ShowPlanningArea_fromDisplay_buffer);
    init_kcg_bool(&DMI_closeButtonMain);
    init_kcg_bool(&_ctx_DMI_closeButtonMain_buffer);
    init_kcg_bool(&DMI_C1AreaAck);
    init_kcg_bool(&_ctx_DMI_C1AreaAck_buffer);
    init_kcg_bool(&DMI_ScrollUp);
    init_kcg_bool(&_ctx_DMI_ScrollUp_buffer);
    init_kcg_bool(&DMI_ScrollDown);
    init_kcg_bool(&_ctx_DMI_ScrollDown_buffer);
    init_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&DMI_icons_ack);
    init_kcg_bool(&DMI_openDesk_toDisplay);
    init_array_bool_15(&DMI_window_mask_visibility__toDisplay);
    init_kcg_float64(&DMI_SpeedTarget_toDisplay);
    init_kcg_int64(&DMI_VpermColor_toDisplay);
    init_kcg_float64(&DMI_trainLenght_toDisplay);
    init_array_float64_32(&DMI_GradientsValue_toDisplay);
    init_kcg_float64(&DMI_TrainPosition_toDisplay);
    init_kcg_bool(&DMI_Vinterv_Visibility_toDisplay);
    init_kcg_bool(&DMI_DistanceToTargetBarVisibility_toDisplay);
    init_kcg_float64(&DMI_SpeedDigitOne_toDisplay);
    init_kcg_bool(&DMI_hourGlassVisibility_toDisplay);
    init_kcg_int64(&DMI_trainAxleloadIndex_toDisplay);
    init_kcg_int64(&DMI_PointerColor_toDisplay);
    init_kcg_int64(&DMI_CloseButtonEnabler_toDisplay);
    init_kcg_float64(&DMI_SpeedRelease_toDisplay);
    init_kcg_int64(&DMI_VtargetColor_toDisplay);
    init_kcg_float64(&DMI_trainMaxspeed_toDisplay);
    init_kcg_bool(&DMI_DistanceToTargetVisible_toDisplay);
    init_kcg_bool(&DMI_LevelSymbolVisibility_toDisplay);
    init_kcg_float64(&DMI_SpeedIntervention_toDisplay);
    init_kcg_bool(&DMI_yellowBorderBrakeSymbol_toDisplay);
    init_kcg_int64(&DMI_closeButtonIndex_toDisplay);
    init_kcg_bool(&DMI_ModeSymbolVisibility_toDisplay);
    init_kcg_float64(&DMI_SpeedDigitThree_toDisplay);
    init_kcg_float64(&DMI_hourGlassCounter_toDisplay);
    init_kcg_int64(&DMI_trainLoadingGougeIndex_toDisplay);
    init_array_int64_9(&DMI_TrainRN_Display_toDisplay);
    init_kcg_int64(&DMI_RBC_status_symbol_toDisplay);
    init_array_float64_32(&DMI_GradientsEnd_toDisplay);
    init_kcg_int64(&DMI_vtarget_permColor_toDisplay);
    init_kcg_int64(&DMI_traindataYesNoIndex_toDisplay);
    init_kcg_bool(&DMI_StatusSymbolBrake_toDisplay);
    init_kcg_bool(&DMI_TrainDataWindowVisibility_toDisplay);
    init_kcg_int64(&DMI_levelSymbolAnnouncementIndex_toDisplay);
    init_kcg_int64(&DMI_trainCategoryIndex_toDisplay);
    init_kcg_float64(&DMI_SpeedPermitted_toDisplay);
    init_kcg_int64(&DMI_VreleaseColor_toDisplay);
    init_kcg_float64(&DMI_trainBrakePerc_toDisplay);
    init_array_int64_30(&DMI_ArrayButtonsEnabler_toDisplay);
    init_kcg_int64(&DMI_ETCS_LevelSymbol_toDisplay);
    init_kcg_int64(&DMI_modeSymbolAnnouncementIndex_toDisplay);
    init_kcg_int64(&DMI_ModeSymbol_toDisplay);
    init_kcg_float64(&DMI_DistanceToTarget_toDisplay);
    init_kcg_int64(&DMI_Vinterv_Color_toDisplay);
    init_kcg_bool(&DMI_yellowBorderMsg_toDisplay);
    init_array_int64_9(&DMI_DriverID_Display_toDisplay);
    init_kcg_float64(&DMI_SpeedDigitTwo_toDisplay);
    init_kcg_bool(&DMI_yellowBorderC1Area_toDisplay);
    init_kcg_int64(&DMI_trainAirtightIndex_toDisplay);
    init_array_float64_32(&DMI_GradientsStart_toDisplay);
    init_kcg_bool(&DMI_Vtarget_permVisibility_toDisplay);
    init_kcg_bool(&DMI_traindataValidWinVisibility_toDisplay);
    init_kcg_bool(&DMI_StatusSymbolVisibility_toDisplay);
    init_kcg_float64(&DMI_TrainSpeed_toDisplay);
    init_kcg_int64(&DMI_iconGroupIndex_toDisplay);
    init_array_int64_5(&DMI_ArrayOfMsgIndex_toDisplay);
    init_kcg_float64(&DMI_InterpolatedDistanceToTarget_toDisplay);
    init_kcg_bool(&DMI_SingleMsgAckRequiredVisibility_toDysplay);
    init_array_int64_5(&DMI_IndexFixedMsg_toDisplay);
    init_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&DMI_level_data);
    init_kcg_int64(&DMI_IndexLevel_toDisplay);
    init_array_int64_12(&DMI_ArrayLevelIndex_toDisplay);
    init_kcg_bool(&DMI_levelMenuVisibility_toDisplay);
    init_array_char_30_5(&DMI_PlainText_toDisplay);
    init_array_float64_5(&DMI_Array_hh_toDisplay);
    init_array_float64_5(&DMI_Array_mm_toDisplay);
    init_kcg_bool(&DMI_isAuxiliarMsg_toDisplay);
    init_array_bool_10(&DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
    init_array_float64_1(&DMI_D_PASP_IndicationMarker_toDisplay);
    init_array_int64_10(&DMI_D_SPDI_SpeedChangeIndex_toDisplay);
    init_array_float64_10(&DMI_D_SPDI_SpeedChangePosition_toDisplay);
    init_tPASPOutput_Array(&DMI_D_PASP_Speeds_toDisplay);
    init_tPASPOutput_Array(&DMI_D_PASP_Distances_toDisplay);
    init_array_bool_32(&DMI_D_GradientVisible_toDisplay);
    init_tScale(&DMI_D_Scale_toDisplay);
    init_kcg_bool(&DMI_PlanningAreaVisibility_toDisplay);
    init_kcg_bool(&GUI_serviceBrake);
    init_kcg_bool(&GUI_TractionCutOff);
    init_L_internal_Type_Obu_BasicTypes_Pkg(&GUI_currentPositionInCm);
    init_kcg_float64(&GUI_currentPositionInM);
    init_kcg_float64(&GUI_currentVelocityInKmH);
    init_kcg_float64(&GUI_TrainPositionDeltaMax);
    init_kcg_float64(&GUI_TrainPositionDeltaMin);
    init_kcg_int64(&GUI_timestamp);
    init_kcg_float64(&GUI_TrainPositionNominal);
    init_kcg_bool(&GUI_emergencyBrake);
    init_kcg_bool(&GUI_AFBActive);
    init_kcg_int64(&DMI_ScrollDownEnableIndex);
    init_kcg_int64(&DMI_ScrollUpEnableIndex);
    init_tPASPOutput_Array(&DMI_localTime);
    memset((void*)&Ctxt_ROOT_Integration_Testbench_Integration, 0, sizeof(Ctxt_ROOT_Integration_Testbench_Integration));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    GUI_reset = _ctx_GUI_reset_buffer;
    GUI_targetSpeed = _ctx_GUI_targetSpeed_buffer;
    GUI_traction = _ctx_GUI_traction_buffer;
    GUI_brake = _ctx_GUI_brake_buffer;
    GUI_initialPosition = _ctx_GUI_initialPosition_buffer;
    GUI_initialVelocity = _ctx_GUI_initialVelocity_buffer;
    GUI_mode = _ctx_GUI_mode_buffer;
    GUI_level = _ctx_GUI_level_buffer;
    GUI_mobileHWStatus = _ctx_GUI_mobileHWStatus_buffer;
    GUI_openDesk = _ctx_GUI_openDesk_buffer;
    DMI_MousePressed = _ctx_DMI_MousePressed_buffer;
    DMI_startRequest = _ctx_DMI_startRequest_buffer;
    DMI_openTrainRN = _ctx_DMI_openTrainRN_buffer;
    DMI_traindataYesAck = _ctx_DMI_traindataYesAck_buffer;
    DMI_TrainRN_Ack = _ctx_DMI_TrainRN_Ack_buffer;
    kcg_copy_array_bool_12(&DMI_keypad, &_ctx_DMI_keypad_buffer);
    DMI_openTrainDataWindow = _ctx_DMI_openTrainDataWindow_buffer;
    DMI_openDriverID = _ctx_DMI_openDriverID_buffer;
    DMI_DriverID_Ack = _ctx_DMI_DriverID_Ack_buffer;
    DMI_traindataNoAck = _ctx_DMI_traindataNoAck_buffer;
    DMI_traindataAck = _ctx_DMI_traindataAck_buffer;
    DMI_OverD9_fromDisplay = _ctx_DMI_OverD9_fromDisplay_buffer;
    DMI_closeButton = _ctx_DMI_closeButton_buffer;
    DMI_confirmTrainData = _ctx_DMI_confirmTrainData_buffer;
    DMI_textMsgAck = _ctx_DMI_textMsgAck_buffer;
    DMI_openLevelMenu = _ctx_DMI_openLevelMenu_buffer;
    DMI_InputFieldAck = _ctx_DMI_InputFieldAck_buffer;
    DMI_openMainMenu_fromDisplay = _ctx_DMI_openMainMenu_fromDisplay_buffer;
    DMI_OverD12_frpmDisplay = _ctx_DMI_OverD12_frpmDisplay_buffer;
    DMI_HidePlanningArea_fromDisplay = _ctx_DMI_HidePlanningArea_fromDisplay_buffer;
    DMI_ShowPlanningArea_fromDisplay = _ctx_DMI_ShowPlanningArea_fromDisplay_buffer;
    DMI_closeButtonMain = _ctx_DMI_closeButtonMain_buffer;
    DMI_C1AreaAck = _ctx_DMI_C1AreaAck_buffer;
    DMI_ScrollUp = _ctx_DMI_ScrollUp_buffer;
    DMI_ScrollDown = _ctx_DMI_ScrollDown_buffer;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "abaf2117ba3c689c7aad35e24b5f77d6";
const char* _SCSIM_SmuTypesCheckSum = "e199405d867d4446e9a5ba6df64b408e";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    ROOT_Integration_init_Testbench_Integration();
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    ROOT_Integration_reset_Testbench_Integration();
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_ROOT_Integration_Testbench_IntegrationCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_ROOT_Integration_Testbench_IntegrationCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_ROOT_Integration_Testbench_IntegrationCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_ROOT_Integration_Testbench_IntegrationCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_ROOT_Integration_Testbench_IntegrationCIVTable != NULL && 
        pSimoutC_ROOT_Integration_Testbench_IntegrationCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_ROOT_Integration_Testbench_IntegrationCIVTable->m_pfnCustomInit ((void*)&Ctxt_ROOT_Integration_Testbench_Integration);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    ROOT_Integration_Testbench_Integration();
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(array_bool_12);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(array_bool_15);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(array_float64_32);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(array_int64_9);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(array_float64_32);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(array_int64_30);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(array_int64_9);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(array_float64_32);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(array_int64_5);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(array_int64_5);
    nSize += sizeof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(array_int64_12);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(array_char_30_5);
    nSize += sizeof(array_float64_5);
    nSize += sizeof(array_float64_5);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(array_bool_10);
    nSize += sizeof(array_float64_1);
    nSize += sizeof(array_int64_10);
    nSize += sizeof(array_float64_10);
    nSize += sizeof(tPASPOutput_Array);
    nSize += sizeof(tPASPOutput_Array);
    nSize += sizeof(array_bool_32);
    nSize += sizeof(tScale);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(L_internal_Type_Obu_BasicTypes_Pkg);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_float64);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(kcg_int64);
    nSize += sizeof(tPASPOutput_Array);
    nSize += sizeof(outC_ROOT_Integration_Testbench_Integration);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &GUI_reset, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &GUI_targetSpeed, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_traction, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_brake, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_initialPosition, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_initialVelocity, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_mode, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &GUI_level, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &GUI_mobileHWStatus, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &GUI_openDesk, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_MousePressed, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_startRequest, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_openTrainRN, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_traindataYesAck, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_TrainRN_Ack, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_keypad, sizeof(array_bool_12));
    pCurrent += sizeof(array_bool_12);
    memcpy(pCurrent, &DMI_openTrainDataWindow, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_openDriverID, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_DriverID_Ack, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_traindataNoAck, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_traindataAck, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_OverD9_fromDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_closeButton, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_confirmTrainData, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_textMsgAck, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_openLevelMenu, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_InputFieldAck, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_openMainMenu_fromDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_OverD12_frpmDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_HidePlanningArea_fromDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_ShowPlanningArea_fromDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_closeButtonMain, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_C1AreaAck, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_ScrollUp, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_ScrollDown, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_icons_ack, sizeof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg));
    pCurrent += sizeof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg);
    memcpy(pCurrent, &DMI_openDesk_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_window_mask_visibility__toDisplay, sizeof(array_bool_15));
    pCurrent += sizeof(array_bool_15);
    memcpy(pCurrent, &DMI_SpeedTarget_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_VpermColor_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_trainLenght_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_GradientsValue_toDisplay, sizeof(array_float64_32));
    pCurrent += sizeof(array_float64_32);
    memcpy(pCurrent, &DMI_TrainPosition_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_Vinterv_Visibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_DistanceToTargetBarVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_SpeedDigitOne_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_hourGlassVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_trainAxleloadIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_PointerColor_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_CloseButtonEnabler_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_SpeedRelease_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_VtargetColor_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_trainMaxspeed_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_DistanceToTargetVisible_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_LevelSymbolVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_SpeedIntervention_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_yellowBorderBrakeSymbol_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_closeButtonIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_ModeSymbolVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_SpeedDigitThree_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_hourGlassCounter_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_trainLoadingGougeIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_TrainRN_Display_toDisplay, sizeof(array_int64_9));
    pCurrent += sizeof(array_int64_9);
    memcpy(pCurrent, &DMI_RBC_status_symbol_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_GradientsEnd_toDisplay, sizeof(array_float64_32));
    pCurrent += sizeof(array_float64_32);
    memcpy(pCurrent, &DMI_vtarget_permColor_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_traindataYesNoIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_StatusSymbolBrake_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_TrainDataWindowVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_levelSymbolAnnouncementIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_trainCategoryIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_SpeedPermitted_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_VreleaseColor_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_trainBrakePerc_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_ArrayButtonsEnabler_toDisplay, sizeof(array_int64_30));
    pCurrent += sizeof(array_int64_30);
    memcpy(pCurrent, &DMI_ETCS_LevelSymbol_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_modeSymbolAnnouncementIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_ModeSymbol_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_DistanceToTarget_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_Vinterv_Color_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_yellowBorderMsg_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_DriverID_Display_toDisplay, sizeof(array_int64_9));
    pCurrent += sizeof(array_int64_9);
    memcpy(pCurrent, &DMI_SpeedDigitTwo_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_yellowBorderC1Area_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_trainAirtightIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_GradientsStart_toDisplay, sizeof(array_float64_32));
    pCurrent += sizeof(array_float64_32);
    memcpy(pCurrent, &DMI_Vtarget_permVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_traindataValidWinVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_StatusSymbolVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_TrainSpeed_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_iconGroupIndex_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_ArrayOfMsgIndex_toDisplay, sizeof(array_int64_5));
    pCurrent += sizeof(array_int64_5);
    memcpy(pCurrent, &DMI_InterpolatedDistanceToTarget_toDisplay, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &DMI_SingleMsgAckRequiredVisibility_toDysplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_IndexFixedMsg_toDisplay, sizeof(array_int64_5));
    pCurrent += sizeof(array_int64_5);
    memcpy(pCurrent, &DMI_level_data, sizeof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg));
    pCurrent += sizeof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg);
    memcpy(pCurrent, &DMI_IndexLevel_toDisplay, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_ArrayLevelIndex_toDisplay, sizeof(array_int64_12));
    pCurrent += sizeof(array_int64_12);
    memcpy(pCurrent, &DMI_levelMenuVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_PlainText_toDisplay, sizeof(array_char_30_5));
    pCurrent += sizeof(array_char_30_5);
    memcpy(pCurrent, &DMI_Array_hh_toDisplay, sizeof(array_float64_5));
    pCurrent += sizeof(array_float64_5);
    memcpy(pCurrent, &DMI_Array_mm_toDisplay, sizeof(array_float64_5));
    pCurrent += sizeof(array_float64_5);
    memcpy(pCurrent, &DMI_isAuxiliarMsg_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay, sizeof(array_bool_10));
    pCurrent += sizeof(array_bool_10);
    memcpy(pCurrent, &DMI_D_PASP_IndicationMarker_toDisplay, sizeof(array_float64_1));
    pCurrent += sizeof(array_float64_1);
    memcpy(pCurrent, &DMI_D_SPDI_SpeedChangeIndex_toDisplay, sizeof(array_int64_10));
    pCurrent += sizeof(array_int64_10);
    memcpy(pCurrent, &DMI_D_SPDI_SpeedChangePosition_toDisplay, sizeof(array_float64_10));
    pCurrent += sizeof(array_float64_10);
    memcpy(pCurrent, &DMI_D_PASP_Speeds_toDisplay, sizeof(tPASPOutput_Array));
    pCurrent += sizeof(tPASPOutput_Array);
    memcpy(pCurrent, &DMI_D_PASP_Distances_toDisplay, sizeof(tPASPOutput_Array));
    pCurrent += sizeof(tPASPOutput_Array);
    memcpy(pCurrent, &DMI_D_GradientVisible_toDisplay, sizeof(array_bool_32));
    pCurrent += sizeof(array_bool_32);
    memcpy(pCurrent, &DMI_D_Scale_toDisplay, sizeof(tScale));
    pCurrent += sizeof(tScale);
    memcpy(pCurrent, &DMI_PlanningAreaVisibility_toDisplay, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &GUI_serviceBrake, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &GUI_TractionCutOff, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &GUI_currentPositionInCm, sizeof(L_internal_Type_Obu_BasicTypes_Pkg));
    pCurrent += sizeof(L_internal_Type_Obu_BasicTypes_Pkg);
    memcpy(pCurrent, &GUI_currentPositionInM, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_currentVelocityInKmH, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_TrainPositionDeltaMax, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_TrainPositionDeltaMin, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_timestamp, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &GUI_TrainPositionNominal, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(pCurrent, &GUI_emergencyBrake, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &GUI_AFBActive, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &DMI_ScrollDownEnableIndex, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_ScrollUpEnableIndex, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(pCurrent, &DMI_localTime, sizeof(tPASPOutput_Array));
    pCurrent += sizeof(tPASPOutput_Array);
    memcpy(pCurrent, &Ctxt_ROOT_Integration_Testbench_Integration, sizeof(outC_ROOT_Integration_Testbench_Integration));
    pCurrent += sizeof(outC_ROOT_Integration_Testbench_Integration);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&GUI_reset, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&GUI_targetSpeed, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_traction, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_brake, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_initialPosition, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_initialVelocity, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_mode, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&GUI_level, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&GUI_mobileHWStatus, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&GUI_openDesk, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_MousePressed, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_startRequest, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_openTrainRN, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_traindataYesAck, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_TrainRN_Ack, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_keypad, pCurrent, sizeof(array_bool_12));
    pCurrent += sizeof(array_bool_12);
    memcpy(&DMI_openTrainDataWindow, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_openDriverID, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_DriverID_Ack, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_traindataNoAck, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_traindataAck, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_OverD9_fromDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_closeButton, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_confirmTrainData, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_textMsgAck, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_openLevelMenu, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_InputFieldAck, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_openMainMenu_fromDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_OverD12_frpmDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_HidePlanningArea_fromDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_ShowPlanningArea_fromDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_closeButtonMain, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_C1AreaAck, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_ScrollUp, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_ScrollDown, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_icons_ack, pCurrent, sizeof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg));
    pCurrent += sizeof(DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg);
    memcpy(&DMI_openDesk_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_window_mask_visibility__toDisplay, pCurrent, sizeof(array_bool_15));
    pCurrent += sizeof(array_bool_15);
    memcpy(&DMI_SpeedTarget_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_VpermColor_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_trainLenght_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_GradientsValue_toDisplay, pCurrent, sizeof(array_float64_32));
    pCurrent += sizeof(array_float64_32);
    memcpy(&DMI_TrainPosition_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_Vinterv_Visibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_DistanceToTargetBarVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_SpeedDigitOne_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_hourGlassVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_trainAxleloadIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_PointerColor_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_CloseButtonEnabler_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_SpeedRelease_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_VtargetColor_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_trainMaxspeed_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_DistanceToTargetVisible_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_LevelSymbolVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_SpeedIntervention_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_yellowBorderBrakeSymbol_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_closeButtonIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_ModeSymbolVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_SpeedDigitThree_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_hourGlassCounter_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_trainLoadingGougeIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_TrainRN_Display_toDisplay, pCurrent, sizeof(array_int64_9));
    pCurrent += sizeof(array_int64_9);
    memcpy(&DMI_RBC_status_symbol_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_GradientsEnd_toDisplay, pCurrent, sizeof(array_float64_32));
    pCurrent += sizeof(array_float64_32);
    memcpy(&DMI_vtarget_permColor_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_traindataYesNoIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_StatusSymbolBrake_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_TrainDataWindowVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_levelSymbolAnnouncementIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_trainCategoryIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_SpeedPermitted_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_VreleaseColor_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_trainBrakePerc_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_ArrayButtonsEnabler_toDisplay, pCurrent, sizeof(array_int64_30));
    pCurrent += sizeof(array_int64_30);
    memcpy(&DMI_ETCS_LevelSymbol_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_modeSymbolAnnouncementIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_ModeSymbol_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_DistanceToTarget_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_Vinterv_Color_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_yellowBorderMsg_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_DriverID_Display_toDisplay, pCurrent, sizeof(array_int64_9));
    pCurrent += sizeof(array_int64_9);
    memcpy(&DMI_SpeedDigitTwo_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_yellowBorderC1Area_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_trainAirtightIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_GradientsStart_toDisplay, pCurrent, sizeof(array_float64_32));
    pCurrent += sizeof(array_float64_32);
    memcpy(&DMI_Vtarget_permVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_traindataValidWinVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_StatusSymbolVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_TrainSpeed_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_iconGroupIndex_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_ArrayOfMsgIndex_toDisplay, pCurrent, sizeof(array_int64_5));
    pCurrent += sizeof(array_int64_5);
    memcpy(&DMI_InterpolatedDistanceToTarget_toDisplay, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&DMI_SingleMsgAckRequiredVisibility_toDysplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_IndexFixedMsg_toDisplay, pCurrent, sizeof(array_int64_5));
    pCurrent += sizeof(array_int64_5);
    memcpy(&DMI_level_data, pCurrent, sizeof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg));
    pCurrent += sizeof(DMI_Level_Data_T_DMI_Messages_Bothways_Pkg);
    memcpy(&DMI_IndexLevel_toDisplay, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_ArrayLevelIndex_toDisplay, pCurrent, sizeof(array_int64_12));
    pCurrent += sizeof(array_int64_12);
    memcpy(&DMI_levelMenuVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_PlainText_toDisplay, pCurrent, sizeof(array_char_30_5));
    pCurrent += sizeof(array_char_30_5);
    memcpy(&DMI_Array_hh_toDisplay, pCurrent, sizeof(array_float64_5));
    pCurrent += sizeof(array_float64_5);
    memcpy(&DMI_Array_mm_toDisplay, pCurrent, sizeof(array_float64_5));
    pCurrent += sizeof(array_float64_5);
    memcpy(&DMI_isAuxiliarMsg_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay, pCurrent, sizeof(array_bool_10));
    pCurrent += sizeof(array_bool_10);
    memcpy(&DMI_D_PASP_IndicationMarker_toDisplay, pCurrent, sizeof(array_float64_1));
    pCurrent += sizeof(array_float64_1);
    memcpy(&DMI_D_SPDI_SpeedChangeIndex_toDisplay, pCurrent, sizeof(array_int64_10));
    pCurrent += sizeof(array_int64_10);
    memcpy(&DMI_D_SPDI_SpeedChangePosition_toDisplay, pCurrent, sizeof(array_float64_10));
    pCurrent += sizeof(array_float64_10);
    memcpy(&DMI_D_PASP_Speeds_toDisplay, pCurrent, sizeof(tPASPOutput_Array));
    pCurrent += sizeof(tPASPOutput_Array);
    memcpy(&DMI_D_PASP_Distances_toDisplay, pCurrent, sizeof(tPASPOutput_Array));
    pCurrent += sizeof(tPASPOutput_Array);
    memcpy(&DMI_D_GradientVisible_toDisplay, pCurrent, sizeof(array_bool_32));
    pCurrent += sizeof(array_bool_32);
    memcpy(&DMI_D_Scale_toDisplay, pCurrent, sizeof(tScale));
    pCurrent += sizeof(tScale);
    memcpy(&DMI_PlanningAreaVisibility_toDisplay, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&GUI_serviceBrake, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&GUI_TractionCutOff, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&GUI_currentPositionInCm, pCurrent, sizeof(L_internal_Type_Obu_BasicTypes_Pkg));
    pCurrent += sizeof(L_internal_Type_Obu_BasicTypes_Pkg);
    memcpy(&GUI_currentPositionInM, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_currentVelocityInKmH, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_TrainPositionDeltaMax, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_TrainPositionDeltaMin, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_timestamp, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&GUI_TrainPositionNominal, pCurrent, sizeof(kcg_float64));
    pCurrent += sizeof(kcg_float64);
    memcpy(&GUI_emergencyBrake, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&GUI_AFBActive, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&DMI_ScrollDownEnableIndex, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_ScrollUpEnableIndex, pCurrent, sizeof(kcg_int64));
    pCurrent += sizeof(kcg_int64);
    memcpy(&DMI_localTime, pCurrent, sizeof(tPASPOutput_Array));
    pCurrent += sizeof(tPASPOutput_Array);
    memcpy(&Ctxt_ROOT_Integration_Testbench_Integration, pCurrent, sizeof(outC_ROOT_Integration_Testbench_Integration));
    pCurrent += sizeof(outC_ROOT_Integration_Testbench_Integration);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

