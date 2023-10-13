#include "MoRC_interface.h"
#include "MoRC_type.h"
#include "MoRC_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

msgFromTrack_T_RCM_MsgTypes_Pkg _ctx_msg_in_buffer;
obuEventsAndPhases_T_RCM_Session_Types_Pkg _ctx_eventsAndPhases_buffer;
P45_RadioNetworkRegistration_T_Packet_Types_Pkg _ctx_atPowerUpRadioNetworkID_buffer;
P45_RadioNetworkRegistration_T_Packet_Types_Pkg _ctx_newRadioNetworkIDFromDriver_buffer;
M_MODE _ctx_mode_buffer;
M_LEVEL _ctx_level_buffer;
mobileRegistrationContext_T_RCM_Types_Pkg _ctx_mobileRegistrationContext_buffer;
mobileConnectionContext_T_RCM_Types_Pkg _ctx_mobileConnectionContext_buffer;
T_internal_Type_Obu_BasicTypes_Pkg _ctx_currentTime_buffer;
kcg_bool _ctx_reset_buffer;
T_TRAIN _ctx_t_train_buffer;
morc_configData_T_RCM_Session_Types_Pkg _ctx_configData_buffer;

static void _SCSIM_RestoreInterface(void) {
    init_msgFromTrack_T_RCM_MsgTypes_Pkg(&msg_in);
    init_msgFromTrack_T_RCM_MsgTypes_Pkg(&_ctx_msg_in_buffer);
    init_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&eventsAndPhases);
    init_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_ctx_eventsAndPhases_buffer);
    init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&atPowerUpRadioNetworkID);
    init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_ctx_atPowerUpRadioNetworkID_buffer);
    init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&newRadioNetworkIDFromDriver);
    init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_ctx_newRadioNetworkIDFromDriver_buffer);
    init_M_MODE(&mode);
    init_M_MODE(&_ctx_mode_buffer);
    init_M_LEVEL(&level);
    init_M_LEVEL(&_ctx_level_buffer);
    init_mobileRegistrationContext_T_RCM_Types_Pkg(&mobileRegistrationContext);
    init_mobileRegistrationContext_T_RCM_Types_Pkg(&_ctx_mobileRegistrationContext_buffer);
    init_mobileConnectionContext_T_RCM_Types_Pkg(&mobileConnectionContext);
    init_mobileConnectionContext_T_RCM_Types_Pkg(&_ctx_mobileConnectionContext_buffer);
    init_T_internal_Type_Obu_BasicTypes_Pkg(&currentTime);
    init_T_internal_Type_Obu_BasicTypes_Pkg(&_ctx_currentTime_buffer);
    init_kcg_bool(&reset);
    init_kcg_bool(&_ctx_reset_buffer);
    init_T_TRAIN(&t_train);
    init_T_TRAIN(&_ctx_t_train_buffer);
    init_morc_configData_T_RCM_Session_Types_Pkg(&configData);
    init_morc_configData_T_RCM_Session_Types_Pkg(&_ctx_configData_buffer);
    init_msgToTrack_T_RCM_MsgTypes_Pkg(&msgToRBC);
    init_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(&msgToTrackTriggers);
    init_kcg_bool(&sendAPositionReport);
    init_kcg_bool(&rejectOrderToContactRBC_or_RIU);
    init_kcg_bool(&infomDriverNoCompatibleVersionSupported);
    init_morcStatus_T_RCM_Session_Types_Pkg(&status);
    init_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(&safeRadioIndication);
    init_mobileConnectionCmd_T_RCM_Types_Pkg(&mobileConnectionCmd);
    init_mobileRegistrationCmd_T_RCM_Types_Pkg(&mobileRegistrationCmd);
    init_kcg_bool(&memorizeTheLastRadioNetworkID);
    init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&lastReceivedRadioNetworkID);
    init_kcg_bool(&notReady);
    memset((void*)&Ctxt_MoRC_Main_v2_MoRC_Pck, 0, sizeof(Ctxt_MoRC_Main_v2_MoRC_Pck));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&msg_in, &_ctx_msg_in_buffer);
    kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&eventsAndPhases, &_ctx_eventsAndPhases_buffer);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&atPowerUpRadioNetworkID, &_ctx_atPowerUpRadioNetworkID_buffer);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&newRadioNetworkIDFromDriver, &_ctx_newRadioNetworkIDFromDriver_buffer);
    mode = _ctx_mode_buffer;
    level = _ctx_level_buffer;
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(&mobileRegistrationContext, &_ctx_mobileRegistrationContext_buffer);
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&mobileConnectionContext, &_ctx_mobileConnectionContext_buffer);
    currentTime = _ctx_currentTime_buffer;
    reset = _ctx_reset_buffer;
    t_train = _ctx_t_train_buffer;
    kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&configData, &_ctx_configData_buffer);
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "c08e175fd130ea5fa5ae60f9647b6024";
const char* _SCSIM_SmuTypesCheckSum = "e199405d867d4446e9a5ba6df64b408e";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    MoRC_Main_v2_init_MoRC_Pck();
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
    MoRC_Main_v2_reset_MoRC_Pck();
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
    #ifdef pSimoutC_MoRC_Main_v2_MoRC_PckCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_MoRC_Main_v2_MoRC_PckCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_MoRC_Main_v2_MoRC_PckCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_MoRC_Main_v2_MoRC_PckCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_MoRC_Main_v2_MoRC_PckCIVTable != NULL && 
        pSimoutC_MoRC_Main_v2_MoRC_PckCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_MoRC_Main_v2_MoRC_PckCIVTable->m_pfnCustomInit ((void*)&Ctxt_MoRC_Main_v2_MoRC_Pck);
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
    MoRC_Main_v2_MoRC_Pck();
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
    nSize += sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg);
    nSize += sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg);
    nSize += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    nSize += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    nSize += sizeof(M_MODE);
    nSize += sizeof(M_LEVEL);
    nSize += sizeof(mobileRegistrationContext_T_RCM_Types_Pkg);
    nSize += sizeof(mobileConnectionContext_T_RCM_Types_Pkg);
    nSize += sizeof(T_internal_Type_Obu_BasicTypes_Pkg);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(T_TRAIN);
    nSize += sizeof(morc_configData_T_RCM_Session_Types_Pkg);
    nSize += sizeof(msgToTrack_T_RCM_MsgTypes_Pkg);
    nSize += sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(morcStatus_T_RCM_Session_Types_Pkg);
    nSize += sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg);
    nSize += sizeof(mobileConnectionCmd_T_RCM_Types_Pkg);
    nSize += sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    nSize += sizeof(kcg_bool);
    nSize += sizeof(outC_MoRC_Main_v2_MoRC_Pck);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &msg_in, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg));
    pCurrent += sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg);
    memcpy(pCurrent, &eventsAndPhases, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg);
    memcpy(pCurrent, &atPowerUpRadioNetworkID, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg));
    pCurrent += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    memcpy(pCurrent, &newRadioNetworkIDFromDriver, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg));
    pCurrent += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    memcpy(pCurrent, &mode, sizeof(M_MODE));
    pCurrent += sizeof(M_MODE);
    memcpy(pCurrent, &level, sizeof(M_LEVEL));
    pCurrent += sizeof(M_LEVEL);
    memcpy(pCurrent, &mobileRegistrationContext, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileRegistrationContext_T_RCM_Types_Pkg);
    memcpy(pCurrent, &mobileConnectionContext, sizeof(mobileConnectionContext_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileConnectionContext_T_RCM_Types_Pkg);
    memcpy(pCurrent, &currentTime, sizeof(T_internal_Type_Obu_BasicTypes_Pkg));
    pCurrent += sizeof(T_internal_Type_Obu_BasicTypes_Pkg);
    memcpy(pCurrent, &reset, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &t_train, sizeof(T_TRAIN));
    pCurrent += sizeof(T_TRAIN);
    memcpy(pCurrent, &configData, sizeof(morc_configData_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(morc_configData_T_RCM_Session_Types_Pkg);
    memcpy(pCurrent, &msgToRBC, sizeof(msgToTrack_T_RCM_MsgTypes_Pkg));
    pCurrent += sizeof(msgToTrack_T_RCM_MsgTypes_Pkg);
    memcpy(pCurrent, &msgToTrackTriggers, sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg));
    pCurrent += sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg);
    memcpy(pCurrent, &sendAPositionReport, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &rejectOrderToContactRBC_or_RIU, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &infomDriverNoCompatibleVersionSupported, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &status, sizeof(morcStatus_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(morcStatus_T_RCM_Session_Types_Pkg);
    memcpy(pCurrent, &safeRadioIndication, sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg);
    memcpy(pCurrent, &mobileConnectionCmd, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileConnectionCmd_T_RCM_Types_Pkg);
    memcpy(pCurrent, &mobileRegistrationCmd, sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg);
    memcpy(pCurrent, &memorizeTheLastRadioNetworkID, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &lastReceivedRadioNetworkID, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg));
    pCurrent += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    memcpy(pCurrent, &notReady, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(pCurrent, &Ctxt_MoRC_Main_v2_MoRC_Pck, sizeof(outC_MoRC_Main_v2_MoRC_Pck));
    pCurrent += sizeof(outC_MoRC_Main_v2_MoRC_Pck);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&msg_in, pCurrent, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg));
    pCurrent += sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg);
    memcpy(&eventsAndPhases, pCurrent, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg);
    memcpy(&atPowerUpRadioNetworkID, pCurrent, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg));
    pCurrent += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    memcpy(&newRadioNetworkIDFromDriver, pCurrent, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg));
    pCurrent += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    memcpy(&mode, pCurrent, sizeof(M_MODE));
    pCurrent += sizeof(M_MODE);
    memcpy(&level, pCurrent, sizeof(M_LEVEL));
    pCurrent += sizeof(M_LEVEL);
    memcpy(&mobileRegistrationContext, pCurrent, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileRegistrationContext_T_RCM_Types_Pkg);
    memcpy(&mobileConnectionContext, pCurrent, sizeof(mobileConnectionContext_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileConnectionContext_T_RCM_Types_Pkg);
    memcpy(&currentTime, pCurrent, sizeof(T_internal_Type_Obu_BasicTypes_Pkg));
    pCurrent += sizeof(T_internal_Type_Obu_BasicTypes_Pkg);
    memcpy(&reset, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&t_train, pCurrent, sizeof(T_TRAIN));
    pCurrent += sizeof(T_TRAIN);
    memcpy(&configData, pCurrent, sizeof(morc_configData_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(morc_configData_T_RCM_Session_Types_Pkg);
    memcpy(&msgToRBC, pCurrent, sizeof(msgToTrack_T_RCM_MsgTypes_Pkg));
    pCurrent += sizeof(msgToTrack_T_RCM_MsgTypes_Pkg);
    memcpy(&msgToTrackTriggers, pCurrent, sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg));
    pCurrent += sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg);
    memcpy(&sendAPositionReport, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&rejectOrderToContactRBC_or_RIU, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&infomDriverNoCompatibleVersionSupported, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&status, pCurrent, sizeof(morcStatus_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(morcStatus_T_RCM_Session_Types_Pkg);
    memcpy(&safeRadioIndication, pCurrent, sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg));
    pCurrent += sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg);
    memcpy(&mobileConnectionCmd, pCurrent, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileConnectionCmd_T_RCM_Types_Pkg);
    memcpy(&mobileRegistrationCmd, pCurrent, sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg));
    pCurrent += sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg);
    memcpy(&memorizeTheLastRadioNetworkID, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&lastReceivedRadioNetworkID, pCurrent, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg));
    pCurrent += sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg);
    memcpy(&notReady, pCurrent, sizeof(kcg_bool));
    pCurrent += sizeof(kcg_bool);
    memcpy(&Ctxt_MoRC_Main_v2_MoRC_Pck, pCurrent, sizeof(outC_MoRC_Main_v2_MoRC_Pck));
    pCurrent += sizeof(outC_MoRC_Main_v2_MoRC_Pck);
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

