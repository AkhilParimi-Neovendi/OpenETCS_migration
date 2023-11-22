#include "openETCS_EVC_interface.h"
#include "openETCS_EVC_type.h"
#include "openETCS_EVC_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_EVC inputs_ctx;
static inC_EVC inputs_ctx_execute;
outC_EVC outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&inputs_ctx.EVC_reset);
    init_kcg_bool(&inputs_ctx_execute.EVC_reset);
    init_odometry_T_Obu_BasicTypes_Pkg(&inputs_ctx.API_Odometry);
    init_odometry_T_Obu_BasicTypes_Pkg(&inputs_ctx_execute.API_Odometry);
    init_T_internal_Type_Obu_BasicTypes_Pkg(&inputs_ctx.API_SystemTime);
    init_T_internal_Type_Obu_BasicTypes_Pkg(&inputs_ctx_execute.API_SystemTime);
    init_API_TrackSideInput_T_API_Msg_Pkg(&inputs_ctx.API_fromTrack);
    init_API_TrackSideInput_T_API_Msg_Pkg(&inputs_ctx_execute.API_fromTrack);
    init_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&inputs_ctx.API_fromDMI);
    init_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&inputs_ctx_execute.API_fromDMI);
    init_TIU_Input_msg_API_TIU_Pkg(&inputs_ctx.API_fromTIU);
    init_TIU_Input_msg_API_TIU_Pkg(&inputs_ctx_execute.API_fromTIU);
    init_mobileHWStatus_Type_MoRC_Pck(&inputs_ctx.API_mobileHWStatus);
    init_mobileHWStatus_Type_MoRC_Pck(&inputs_ctx_execute.API_mobileHWStatus);
    init_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(&inputs_ctx.API_persistentData);
    init_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(&inputs_ctx_execute.API_persistentData);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.EVC_reset = inputs_ctx.EVC_reset;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&inputs_ctx_execute.API_Odometry, &inputs_ctx.API_Odometry);
    inputs_ctx_execute.API_SystemTime = inputs_ctx.API_SystemTime;
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&inputs_ctx_execute.API_fromTrack, &inputs_ctx.API_fromTrack);
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&inputs_ctx_execute.API_fromDMI, &inputs_ctx.API_fromDMI);
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(&inputs_ctx_execute.API_fromTIU, &inputs_ctx.API_fromTIU);
    kcg_copy_mobileHWStatus_Type_MoRC_Pck(&inputs_ctx_execute.API_mobileHWStatus, &inputs_ctx.API_mobileHWStatus);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(&inputs_ctx_execute.API_persistentData, &inputs_ctx.API_persistentData);
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "0983120fef9080cd55dc0e0a4448534d";
const char* _SCSIM_SmuTypesCheckSum = "e199405d867d4446e9a5ba6df64b408e";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    EVC_init(&outputs_ctx);
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
    EVC_reset(&outputs_ctx);
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
    #ifdef pSimoutC_EVCCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_EVCCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_EVCCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_EVCCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_EVCCIVTable != NULL && 
        pSimoutC_EVCCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_EVCCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
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
    EVC(&inputs_ctx_execute, &outputs_ctx);
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
    nSize += sizeof(inC_EVC);
    nSize += sizeof(outC_EVC);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_EVC));
    pCurrent += sizeof(inC_EVC);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_EVC));
    pCurrent += sizeof(outC_EVC);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_EVC));
    pCurrent += sizeof(inC_EVC);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_EVC));
    pCurrent += sizeof(outC_EVC);
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

