#include "EnvSim_interface.h"
#include "EnvSim_type.h"
#include "EnvSim_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_ScriptedTrackTest_EnvSim_Internal inputs_ctx;
static inC_ScriptedTrackTest_EnvSim_Internal inputs_ctx_execute;
outC_ScriptedTrackTest_EnvSim_Internal outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_float64(&inputs_ctx.actualTrainPos);
    init_kcg_float64(&inputs_ctx_execute.actualTrainPos);
    init_kcg_float64(&inputs_ctx.radioTrainPos);
    init_kcg_float64(&inputs_ctx_execute.radioTrainPos);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.actualTrainPos = inputs_ctx.actualTrainPos;
    inputs_ctx_execute.radioTrainPos = inputs_ctx.radioTrainPos;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "f8804494a59602773699d0f8a4203a7f";
const char* _SCSIM_SmuTypesCheckSum = "e199405d867d4446e9a5ba6df64b408e";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    ScriptedTrackTest_init_EnvSim_Internal(&outputs_ctx);
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
    ScriptedTrackTest_reset_EnvSim_Internal(&outputs_ctx);
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
    #ifdef pSimoutC_ScriptedTrackTest_EnvSim_InternalCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_ScriptedTrackTest_EnvSim_InternalCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_ScriptedTrackTest_EnvSim_InternalCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_ScriptedTrackTest_EnvSim_InternalCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_ScriptedTrackTest_EnvSim_InternalCIVTable != NULL && 
        pSimoutC_ScriptedTrackTest_EnvSim_InternalCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_ScriptedTrackTest_EnvSim_InternalCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
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
    ScriptedTrackTest_EnvSim_Internal(&inputs_ctx_execute, &outputs_ctx);
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
    nSize += sizeof(inC_ScriptedTrackTest_EnvSim_Internal);
    nSize += sizeof(outC_ScriptedTrackTest_EnvSim_Internal);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_ScriptedTrackTest_EnvSim_Internal));
    pCurrent += sizeof(inC_ScriptedTrackTest_EnvSim_Internal);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_ScriptedTrackTest_EnvSim_Internal));
    pCurrent += sizeof(outC_ScriptedTrackTest_EnvSim_Internal);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_ScriptedTrackTest_EnvSim_Internal));
    pCurrent += sizeof(inC_ScriptedTrackTest_EnvSim_Internal);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_ScriptedTrackTest_EnvSim_Internal));
    pCurrent += sizeof(outC_ScriptedTrackTest_EnvSim_Internal);
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

