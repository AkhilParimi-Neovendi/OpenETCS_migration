#include "Toolbox_interface.h"
#include "Toolbox_type.h"
#include "Toolbox_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_TestEnvironmentSimulation_Toolbox inputs_ctx;
static inC_TestEnvironmentSimulation_Toolbox inputs_ctx_execute;
outC_TestEnvironmentSimulation_Toolbox outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&inputs_ctx.GUI_reset);
    init_kcg_bool(&inputs_ctx_execute.GUI_reset);
    init_kcg_float32(&inputs_ctx.GUI_targetSpeed);
    init_kcg_float32(&inputs_ctx_execute.GUI_targetSpeed);
    init_kcg_float32(&inputs_ctx.GUI_traction);
    init_kcg_float32(&inputs_ctx_execute.GUI_traction);
    init_kcg_float32(&inputs_ctx.GUI_brake);
    init_kcg_float32(&inputs_ctx_execute.GUI_brake);
    init_kcg_float32(&inputs_ctx.GUI_initialPosition);
    init_kcg_float32(&inputs_ctx_execute.GUI_initialPosition);
    init_kcg_float32(&inputs_ctx.GUI_initialVelocity);
    init_kcg_float32(&inputs_ctx_execute.GUI_initialVelocity);
    init_kcg_int32(&inputs_ctx.GUI_level);
    init_kcg_int32(&inputs_ctx_execute.GUI_level);
    init_kcg_int32(&inputs_ctx.GUI_mode);
    init_kcg_int32(&inputs_ctx_execute.GUI_mode);
    init_kcg_int32(&inputs_ctx.GUI_mobileHWStatus);
    init_kcg_int32(&inputs_ctx_execute.GUI_mobileHWStatus);
    init_kcg_bool(&inputs_ctx.GUI_openDesk);
    init_kcg_bool(&inputs_ctx_execute.GUI_openDesk);
    init_RadioManagement_T_API_RadioCommunication_Pkg(&inputs_ctx.EVC_RTM_Management);
    init_RadioManagement_T_API_RadioCommunication_Pkg(&inputs_ctx_execute.EVC_RTM_Management);
    init_TIU_Output_msg_API_TIU_Pkg(&inputs_ctx.EVC_MessageToTIU);
    init_TIU_Output_msg_API_TIU_Pkg(&inputs_ctx_execute.EVC_MessageToTIU);
    init_kcg_int32(&inputs_ctx.deltaSimulationTime);
    init_kcg_int32(&inputs_ctx_execute.deltaSimulationTime);
    init_kcg_bool(&inputs_ctx.activateBrakeBuildupTime);
    init_kcg_bool(&inputs_ctx_execute.activateBrakeBuildupTime);
    init_kcg_bool(&inputs_ctx.activateAirResistance);
    init_kcg_bool(&inputs_ctx_execute.activateAirResistance);
    init_M_TrainTrack_Message_T_TM_radio_messages(&inputs_ctx.EVC_radioMessageToRBC_nextGen);
    init_M_TrainTrack_Message_T_TM_radio_messages(&inputs_ctx_execute.EVC_radioMessageToRBC_nextGen);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.GUI_reset = inputs_ctx.GUI_reset;
    inputs_ctx_execute.GUI_targetSpeed = inputs_ctx.GUI_targetSpeed;
    inputs_ctx_execute.GUI_traction = inputs_ctx.GUI_traction;
    inputs_ctx_execute.GUI_brake = inputs_ctx.GUI_brake;
    inputs_ctx_execute.GUI_initialPosition = inputs_ctx.GUI_initialPosition;
    inputs_ctx_execute.GUI_initialVelocity = inputs_ctx.GUI_initialVelocity;
    inputs_ctx_execute.GUI_level = inputs_ctx.GUI_level;
    inputs_ctx_execute.GUI_mode = inputs_ctx.GUI_mode;
    inputs_ctx_execute.GUI_mobileHWStatus = inputs_ctx.GUI_mobileHWStatus;
    inputs_ctx_execute.GUI_openDesk = inputs_ctx.GUI_openDesk;
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(&inputs_ctx_execute.EVC_RTM_Management, &inputs_ctx.EVC_RTM_Management);
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(&inputs_ctx_execute.EVC_MessageToTIU, &inputs_ctx.EVC_MessageToTIU);
    inputs_ctx_execute.deltaSimulationTime = inputs_ctx.deltaSimulationTime;
    inputs_ctx_execute.activateBrakeBuildupTime = inputs_ctx.activateBrakeBuildupTime;
    inputs_ctx_execute.activateAirResistance = inputs_ctx.activateAirResistance;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&inputs_ctx_execute.EVC_radioMessageToRBC_nextGen, &inputs_ctx.EVC_radioMessageToRBC_nextGen);
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "44d4292052ef3d46dd9b5f876fa978b8";
const char* _SCSIM_SmuTypesCheckSum = "e199405d867d4446e9a5ba6df64b408e";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    TestEnvironmentSimulation_init_Toolbox(&outputs_ctx);
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
    TestEnvironmentSimulation_reset_Toolbox(&outputs_ctx);
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
    #ifdef pSimoutC_TestEnvironmentSimulation_ToolboxCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_TestEnvironmentSimulation_ToolboxCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_TestEnvironmentSimulation_ToolboxCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_TestEnvironmentSimulation_ToolboxCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_TestEnvironmentSimulation_ToolboxCIVTable != NULL && 
        pSimoutC_TestEnvironmentSimulation_ToolboxCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_TestEnvironmentSimulation_ToolboxCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
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
    TestEnvironmentSimulation_Toolbox(&inputs_ctx_execute, &outputs_ctx);
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
    nSize += sizeof(inC_TestEnvironmentSimulation_Toolbox);
    nSize += sizeof(outC_TestEnvironmentSimulation_Toolbox);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_TestEnvironmentSimulation_Toolbox));
    pCurrent += sizeof(inC_TestEnvironmentSimulation_Toolbox);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_TestEnvironmentSimulation_Toolbox));
    pCurrent += sizeof(outC_TestEnvironmentSimulation_Toolbox);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_TestEnvironmentSimulation_Toolbox));
    pCurrent += sizeof(inC_TestEnvironmentSimulation_Toolbox);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_TestEnvironmentSimulation_Toolbox));
    pCurrent += sizeof(outC_TestEnvironmentSimulation_Toolbox);
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

