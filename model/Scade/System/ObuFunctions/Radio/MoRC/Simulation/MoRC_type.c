#include "MoRC_type.h"

#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"

#include "kcg_types.h"

#include "SmuConfig.h"

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */
#define UNUSED(x) (void)(x)
#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** Constants 
 ****************************************************************/

#include "kcg_consts.h"

#define TU_cNoMessageToRBC_MoRC_Pck cNoMessageToRBC_MoRC_Pck
#define TU_cNoOrigin_MoRC_Pck_Subfunc_Pkg cNoOrigin_MoRC_Pck_Subfunc_Pkg
#define TU_cEmptyOutPackets_MoRC_Pck_Coder_Pkg cEmptyOutPackets_MoRC_Pck_Coder_Pkg
#define TU_cNoSessionStatus_RCM_Session_Types_Pkg cNoSessionStatus_RCM_Session_Types_Pkg
#define TU_cNoSessionCmd_RCM_Session_Types_Pkg cNoSessionCmd_RCM_Session_Types_Pkg
#define TU_cInitialSessionStatus_RCM_Session_Types_Pkg cInitialSessionStatus_RCM_Session_Types_Pkg
#define TU_cNoP45_RadioNetworkRegistration_RCM_Types_Pkg cNoP45_RadioNetworkRegistration_RCM_Types_Pkg
#define TU_cNoConnectionContext_RCM_Types_Pkg cNoConnectionContext_RCM_Types_Pkg
#define TU_cNoMobileRegistrationContext_RCM_Types_Pkg cNoMobileRegistrationContext_RCM_Types_Pkg
static kcg_int32 const TU_cMetadataArraySize_Common_Types_Pkg = cMetadataArraySize_Common_Types_Pkg;
static kcg_int32 const TU_cDIM_MaxRMessages_Common_Types_Pkg = cDIM_MaxRMessages_Common_Types_Pkg;
static kcg_int32 const TU_cDIM_MaxDataElementsInRMessage_Common_Types_Pkg = cDIM_MaxDataElementsInRMessage_Common_Types_Pkg;
static NID_RBC const TU_c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg = c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg;
static NID_RADIO const TU_cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg = cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg;
#define TU_cNo_p42_SessionManagement_RCM_MsgTypes_Pkg cNo_p42_SessionManagement_RCM_MsgTypes_Pkg
static kcg_int32 const TU_DIM_MaxRMessages_TM = DIM_MaxRMessages_TM;
#define TU_DEFAULT_PHeader_TM DEFAULT_PHeader_TM
#define TU_DEFAULT_CompressedPackets_TM DEFAULT_CompressedPackets_TM
static kcg_int32 const TU_DIM_offset_metadata_nid_packet_TM_lib_internal = DIM_offset_metadata_nid_packet_TM_lib_internal;
static kcg_int32 const TU_DIM_offset_metadata_q_dir_TM_lib_internal = DIM_offset_metadata_q_dir_TM_lib_internal;
static kcg_int32 const TU_DIM_offset_metadata_m_version_TM_lib_internal = DIM_offset_metadata_m_version_TM_lib_internal;
static kcg_int32 const TU_DIM_offset_metadata_id_TM_lib_internal = DIM_offset_metadata_id_TM_lib_internal;
static kcg_int32 const TU_INT_Q_DIR_nomiinal_TM_conversions = INT_Q_DIR_nomiinal_TM_conversions;
static kcg_int32 const TU_INT_Q_DIR_reverse_TM_conversions = INT_Q_DIR_reverse_TM_conversions;
static kcg_int32 const TU_INT_Q_DIR_both_TM_conversions = INT_Q_DIR_both_TM_conversions;
static Q_DIR const TU_ENUM_Q_DIR_both_TM_conversions = ENUM_Q_DIR_both_TM_conversions;
static Q_DIR const TU_ENUM_Q_DIR_reverse_TM_conversions = ENUM_Q_DIR_reverse_TM_conversions;
static Q_DIR const TU_ENUM_Q_DIR_nominal_TM_conversions = ENUM_Q_DIR_nominal_TM_conversions;
static kcg_int32 const TU_INT_Q_RBC_establish_TM_conversions = INT_Q_RBC_establish_TM_conversions;
static kcg_int32 const TU_INT_Q_RBC_terminate_TM_conversions = INT_Q_RBC_terminate_TM_conversions;
static Q_RBC const TU_ENUM_Q_RBC_terminate_TM_conversions = ENUM_Q_RBC_terminate_TM_conversions;
static Q_RBC const TU_ENUM_Q_RBC_establish_TM_conversions = ENUM_Q_RBC_establish_TM_conversions;
static kcg_int32 const TU_INT_Q_SLEEPSESSION_execute_TM_conversions = INT_Q_SLEEPSESSION_execute_TM_conversions;
static kcg_int32 const TU_INT_Q_SLEEPSESSION_ignore_TM_conversions = INT_Q_SLEEPSESSION_ignore_TM_conversions;
static Q_SLEEPSESSION const TU_ENUM_Q_SLEEPSESSION_execute_TM_conversions = ENUM_Q_SLEEPSESSION_execute_TM_conversions;
static Q_SLEEPSESSION const TU_ENUM_Q_SLEEPSESSION_ignore_TM_conversions = ENUM_Q_SLEEPSESSION_ignore_TM_conversions;
static NID_MESSAGE const TU_cm32_RBC_RIU_System_Version_Id_Pkg = cm32_RBC_RIU_System_Version_Id_Pkg;
static NID_MESSAGE const TU_cm38_Initiation_of_a_Communication_Session_Id_Pkg = cm38_Initiation_of_a_Communication_Session_Id_Pkg;
static NID_MESSAGE const TU_cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg = cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg;
static NID_MESSAGE const TU_co154_No_Compatible_Version_Support_Id_Pkg = co154_No_Compatible_Version_Support_Id_Pkg;
static NID_MESSAGE const TU_co159_Session_established_Id_Pkg = co159_Session_established_Id_Pkg;
static NID_MESSAGE const TU_co156_Termination_of_a_communication_session_Id_Pkg = co156_Termination_of_a_communication_session_Id_Pkg;
static NID_MESSAGE const TU_co155_Initiation_of_a_communication_session_Id_Pkg = co155_Initiation_of_a_communication_session_Id_Pkg;
static kcg_int32 const TU_cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg = cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg;
static kcg_int32 const TU_cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg = cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg;
static kcg_int32 const TU_cMaxTractionIdentity_Packet_TrainTypes_Pkg = cMaxTractionIdentity_Packet_TrainTypes_Pkg;
static kcg_int32 const TU_cMaxNationalSystem_Packet_TrainTypes_Pkg = cMaxNationalSystem_Packet_TrainTypes_Pkg;

/****************************************************************
 ** _2_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_2_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _2_SSM_ST_SM1_values[] = {
    { "idle", _12_SSM_st_idle_SM1},
    { "idle", _12_SSM_st_idle_SM1},
    { "establishingByOBU", SSM_st_establishingByOBU_SM1},
    { "establishingByOBU", SSM_st_establishingByOBU_SM1},
    { "establishingByRBC", SSM_st_establishingByRBC_SM1},
    { "establishingByRBC", SSM_st_establishingByRBC_SM1},
};
const int _2_SSM_ST_SM1_nb_values = 6;

int _2_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_2_SSM_ST_SM1*)pValue, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__2_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _2_SSM_ST_SM1 rTemp;
    return string_to__2_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__2_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_2_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(_2_SSM_ST_SM1*)pValue = (_2_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__2_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

int is__2_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__2_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_2_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_2_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_2_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_2_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_2_SSM_ST_SM1*)pValue1), (int)(*(_2_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__2_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__2_SSM_ST_SM1(void *pValue)
{
    *(_2_SSM_ST_SM1*)pValue = _12_SSM_st_idle_SM1;
    return 1;
}

int release__2_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__2_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_2_SSM_ST_SM1*)pToValue) = *((_2_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__2_SSM_ST_SM1_Utils = {
    _2_SSM_ST_SM1_to_string,
    check__2_SSM_ST_SM1_string,
    string_to__2_SSM_ST_SM1,
    is__2_SSM_ST_SM1_double_conversion_allowed,
    _2_SSM_ST_SM1_to_double,
    is__2_SSM_ST_SM1_long_conversion_allowed,
    _2_SSM_ST_SM1_to_long,
    compare__2_SSM_ST_SM1,
    get__2_SSM_ST_SM1_signature,
    init__2_SSM_ST_SM1,
    release__2_SSM_ST_SM1,
    copy__2_SSM_ST_SM1,
    sizeof(_2_SSM_ST_SM1)
};

/****************************************************************
 ** _3_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_3_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _3_SSM_TR_SM1_values[] = {
    { "_13_SSM_TR_no_trans_SM1", _13_SSM_TR_no_trans_SM1},
    { "_13_SSM_TR_no_trans_SM1", _13_SSM_TR_no_trans_SM1},
    { "SSM_TR_idle_establishingByOBU_1_idle_SM1", SSM_TR_idle_establishingByOBU_1_idle_SM1},
    { "SSM_TR_idle_establishingByOBU_1_idle_SM1", SSM_TR_idle_establishingByOBU_1_idle_SM1},
    { "SSM_TR_idle_establishingByRBC_2_idle_SM1", SSM_TR_idle_establishingByRBC_2_idle_SM1},
    { "SSM_TR_idle_establishingByRBC_2_idle_SM1", SSM_TR_idle_establishingByRBC_2_idle_SM1},
    { "SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1", SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1},
    { "SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1", SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1},
    { "SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1", SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1},
    { "SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1", SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1},
};
const int _3_SSM_TR_SM1_nb_values = 10;

int _3_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_3_SSM_TR_SM1*)pValue, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__3_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _3_SSM_TR_SM1 rTemp;
    return string_to__3_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__3_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_3_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(_3_SSM_TR_SM1*)pValue = (_3_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__3_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

int is__3_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__3_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_3_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_3_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_3_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_3_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_3_SSM_TR_SM1*)pValue1), (int)(*(_3_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__3_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__3_SSM_TR_SM1(void *pValue)
{
    *(_3_SSM_TR_SM1*)pValue = _13_SSM_TR_no_trans_SM1;
    return 1;
}

int release__3_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__3_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_3_SSM_TR_SM1*)pToValue) = *((_3_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__3_SSM_TR_SM1_Utils = {
    _3_SSM_TR_SM1_to_string,
    check__3_SSM_TR_SM1_string,
    string_to__3_SSM_TR_SM1,
    is__3_SSM_TR_SM1_double_conversion_allowed,
    _3_SSM_TR_SM1_to_double,
    is__3_SSM_TR_SM1_long_conversion_allowed,
    _3_SSM_TR_SM1_to_long,
    compare__3_SSM_TR_SM1,
    get__3_SSM_TR_SM1_signature,
    init__3_SSM_TR_SM1,
    release__3_SSM_TR_SM1,
    copy__3_SSM_TR_SM1,
    sizeof(_3_SSM_TR_SM1)
};

/****************************************************************
 ** _4_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_4_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _4_SSM_ST_SM1_values[] = {
    { "idle", _9_SSM_st_idle_SM1},
    { "idle", _9_SSM_st_idle_SM1},
    { "sessionEstablished", _8_SSM_st_sessionEstablished_SM1},
    { "sessionEstablished", _8_SSM_st_sessionEstablished_SM1},
};
const int _4_SSM_ST_SM1_nb_values = 4;

int _4_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL
        && pSim_4_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_4_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_4_SSM_ST_SM1*)pValue, _4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__4_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _4_SSM_ST_SM1 rTemp;
    return string_to__4_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__4_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_4_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(_4_SSM_ST_SM1*)pValue = (_4_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__4_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_4_SSM_ST_SM1VTable);
    }
    return 1;
}

int _4_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_4_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_4_SSM_ST_SM1*)pValue);
    return 1;
}

int is__4_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_4_SSM_ST_SM1VTable);
    }
    return 1;
}

int _4_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_4_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_4_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__4_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_4_SSM_ST_SM1VTable != NULL
        && pSim_4_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_4_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_4_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_4_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_4_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_4_SSM_ST_SM1*)pValue1), (int)(*(_4_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__4_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__4_SSM_ST_SM1(void *pValue)
{
    *(_4_SSM_ST_SM1*)pValue = _9_SSM_st_idle_SM1;
    return 1;
}

int release__4_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__4_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_4_SSM_ST_SM1*)pToValue) = *((_4_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__4_SSM_ST_SM1_Utils = {
    _4_SSM_ST_SM1_to_string,
    check__4_SSM_ST_SM1_string,
    string_to__4_SSM_ST_SM1,
    is__4_SSM_ST_SM1_double_conversion_allowed,
    _4_SSM_ST_SM1_to_double,
    is__4_SSM_ST_SM1_long_conversion_allowed,
    _4_SSM_ST_SM1_to_long,
    compare__4_SSM_ST_SM1,
    get__4_SSM_ST_SM1_signature,
    init__4_SSM_ST_SM1,
    release__4_SSM_ST_SM1,
    copy__4_SSM_ST_SM1,
    sizeof(_4_SSM_ST_SM1)
};

/****************************************************************
 ** _5_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_5_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _5_SSM_TR_SM1_values[] = {
    { "_11_SSM_TR_no_trans_SM1", _11_SSM_TR_no_trans_SM1},
    { "_11_SSM_TR_no_trans_SM1", _11_SSM_TR_no_trans_SM1},
    { "SSM_TR_idle_sessionEstablished_1_idle_SM1", SSM_TR_idle_sessionEstablished_1_idle_SM1},
    { "SSM_TR_idle_sessionEstablished_1_idle_SM1", SSM_TR_idle_sessionEstablished_1_idle_SM1},
    { "_10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1", _10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1},
    { "_10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1", _10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1},
};
const int _5_SSM_TR_SM1_nb_values = 6;

int _5_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_5_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_5_SSM_TR_SM1*)pValue, _5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__5_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _5_SSM_TR_SM1 rTemp;
    return string_to__5_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__5_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_5_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(_5_SSM_TR_SM1*)pValue = (_5_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__5_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_5_SSM_TR_SM1VTable);
    }
    return 1;
}

int _5_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_5_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_5_SSM_TR_SM1*)pValue);
    return 1;
}

int is__5_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_5_SSM_TR_SM1VTable);
    }
    return 1;
}

int _5_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_5_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_5_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__5_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_5_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_5_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_5_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_5_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_5_SSM_TR_SM1*)pValue1), (int)(*(_5_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__5_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__5_SSM_TR_SM1(void *pValue)
{
    *(_5_SSM_TR_SM1*)pValue = _11_SSM_TR_no_trans_SM1;
    return 1;
}

int release__5_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__5_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_5_SSM_TR_SM1*)pToValue) = *((_5_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__5_SSM_TR_SM1_Utils = {
    _5_SSM_TR_SM1_to_string,
    check__5_SSM_TR_SM1_string,
    string_to__5_SSM_TR_SM1,
    is__5_SSM_TR_SM1_double_conversion_allowed,
    _5_SSM_TR_SM1_to_double,
    is__5_SSM_TR_SM1_long_conversion_allowed,
    _5_SSM_TR_SM1_to_long,
    compare__5_SSM_TR_SM1,
    get__5_SSM_TR_SM1_signature,
    init__5_SSM_TR_SM1,
    release__5_SSM_TR_SM1,
    copy__5_SSM_TR_SM1,
    sizeof(_5_SSM_TR_SM1)
};

/****************************************************************
 ** _6_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_6_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _6_SSM_ST_SM1_values[] = {
    { "idle", SSM_st_idle_SM1},
    { "idle", SSM_st_idle_SM1},
    { "waitForSafeRadioConnectionSetUp", SSM_st_waitForSafeRadioConnectionSetUp_SM1},
    { "waitForSafeRadioConnectionSetUp", SSM_st_waitForSafeRadioConnectionSetUp_SM1},
    { "waitForSystemVersion", SSM_st_waitForSystemVersion_SM1},
    { "waitForSystemVersion", SSM_st_waitForSystemVersion_SM1},
    { "sessionEstablished", SSM_st_sessionEstablished_SM1},
    { "sessionEstablished", SSM_st_sessionEstablished_SM1},
};
const int _6_SSM_ST_SM1_nb_values = 8;

int _6_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL
        && pSim_6_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_6_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_6_SSM_ST_SM1*)pValue, _6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__6_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _6_SSM_ST_SM1 rTemp;
    return string_to__6_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__6_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_6_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(_6_SSM_ST_SM1*)pValue = (_6_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__6_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_6_SSM_ST_SM1VTable);
    }
    return 1;
}

int _6_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_6_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_6_SSM_ST_SM1*)pValue);
    return 1;
}

int is__6_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_6_SSM_ST_SM1VTable);
    }
    return 1;
}

int _6_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_6_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_6_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__6_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_6_SSM_ST_SM1VTable != NULL
        && pSim_6_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_6_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_6_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_6_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_6_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_6_SSM_ST_SM1*)pValue1), (int)(*(_6_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__6_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__6_SSM_ST_SM1(void *pValue)
{
    *(_6_SSM_ST_SM1*)pValue = SSM_st_idle_SM1;
    return 1;
}

int release__6_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__6_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_6_SSM_ST_SM1*)pToValue) = *((_6_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__6_SSM_ST_SM1_Utils = {
    _6_SSM_ST_SM1_to_string,
    check__6_SSM_ST_SM1_string,
    string_to__6_SSM_ST_SM1,
    is__6_SSM_ST_SM1_double_conversion_allowed,
    _6_SSM_ST_SM1_to_double,
    is__6_SSM_ST_SM1_long_conversion_allowed,
    _6_SSM_ST_SM1_to_long,
    compare__6_SSM_ST_SM1,
    get__6_SSM_ST_SM1_signature,
    init__6_SSM_ST_SM1,
    release__6_SSM_ST_SM1,
    copy__6_SSM_ST_SM1,
    sizeof(_6_SSM_ST_SM1)
};

/****************************************************************
 ** _7_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_7_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _7_SSM_TR_SM1_values[] = {
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1", SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1},
    { "SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1", SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1},
    { "SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1", SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1},
    { "SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1", SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1},
    { "SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1", SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1},
    { "SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1", SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1},
    { "SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1", SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1},
    { "SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1", SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1},
    { "SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1", SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1},
    { "SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1", SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1},
    { "SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1", SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1},
    { "SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1", SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1},
    { "SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1", SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1},
    { "SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1", SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1},
};
const int _7_SSM_TR_SM1_nb_values = 16;

int _7_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL
        && pSim_7_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_7_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_7_SSM_TR_SM1*)pValue, _7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__7_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _7_SSM_TR_SM1 rTemp;
    return string_to__7_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__7_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_7_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(_7_SSM_TR_SM1*)pValue = (_7_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__7_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_7_SSM_TR_SM1VTable);
    }
    return 1;
}

int _7_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_7_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_7_SSM_TR_SM1*)pValue);
    return 1;
}

int is__7_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_7_SSM_TR_SM1VTable);
    }
    return 1;
}

int _7_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_7_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_7_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__7_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_7_SSM_TR_SM1VTable != NULL
        && pSim_7_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_7_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_7_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_7_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_7_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_7_SSM_TR_SM1*)pValue1), (int)(*(_7_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__7_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__7_SSM_TR_SM1(void *pValue)
{
    *(_7_SSM_TR_SM1*)pValue = SSM_TR_no_trans_SM1;
    return 1;
}

int release__7_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__7_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_7_SSM_TR_SM1*)pToValue) = *((_7_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__7_SSM_TR_SM1_Utils = {
    _7_SSM_TR_SM1_to_string,
    check__7_SSM_TR_SM1_string,
    string_to__7_SSM_TR_SM1,
    is__7_SSM_TR_SM1_double_conversion_allowed,
    _7_SSM_TR_SM1_to_double,
    is__7_SSM_TR_SM1_long_conversion_allowed,
    _7_SSM_TR_SM1_to_long,
    compare__7_SSM_TR_SM1,
    get__7_SSM_TR_SM1_signature,
    init__7_SSM_TR_SM1,
    release__7_SSM_TR_SM1,
    copy__7_SSM_TR_SM1,
    sizeof(_7_SSM_TR_SM1)
};

/****************************************************************
 ** A_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimA_internal_Type_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimA_internal_Type_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimA_internal_Type_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimA_internal_Type_Obu_BasicTypes_PkgVTable;
#endif

int A_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_A_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static A_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_A_internal_Type_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_A_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimA_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_A_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimA_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int A_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimA_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_A_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimA_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int A_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimA_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_A_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
               && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_A_internal_Type_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_A_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_A_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_A_internal_Type_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((A_internal_Type_Obu_BasicTypes_Pkg*)pToValue) = *((A_internal_Type_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    A_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_A_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_A_internal_Type_Obu_BasicTypes_Pkg,
    is_A_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    A_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_A_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed,
    A_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_A_internal_Type_Obu_BasicTypes_Pkg,
    get_A_internal_Type_Obu_BasicTypes_Pkg_signature,
    init_A_internal_Type_Obu_BasicTypes_Pkg,
    release_A_internal_Type_Obu_BasicTypes_Pkg,
    copy_A_internal_Type_Obu_BasicTypes_Pkg,
    sizeof(A_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** aNID_NTC_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable;
#endif

int aNID_NTC_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, NID_NTC_to_string, 5, sizeof(NID_NTC), pfnStrAppend, pStrObj);
}

int check_aNID_NTC_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static aNID_NTC_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_aNID_NTC_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_aNID_NTC_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_NID_NTC_Utils, 5, sizeof(NID_NTC), endptr);
    }
    return nRet;
}

int is_aNID_NTC_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int aNID_NTC_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_aNID_NTC_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int aNID_NTC_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_aNID_NTC_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_NID_NTC, 5, sizeof(NID_NTC), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_aNID_NTC_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_NID_NTC_signature, 5, pfnStrAppend, pStrObj); 
}

int init_aNID_NTC_T_Packet_TrainTypes_Pkg(void *pValue)
{
    size_t i;
    for (i = 0; i < 5; i++)
        init_NID_NTC(&((NID_NTC*)pValue)[i]);
    return 1;
}

int release_aNID_NTC_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_aNID_NTC_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg((aNID_NTC_T_Packet_TrainTypes_Pkg*)pToValue, (aNID_NTC_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_aNID_NTC_T_Packet_TrainTypes_Pkg_Utils = {
    aNID_NTC_T_Packet_TrainTypes_Pkg_to_string,
    check_aNID_NTC_T_Packet_TrainTypes_Pkg_string,
    string_to_aNID_NTC_T_Packet_TrainTypes_Pkg,
    is_aNID_NTC_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    aNID_NTC_T_Packet_TrainTypes_Pkg_to_double,
    is_aNID_NTC_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    aNID_NTC_T_Packet_TrainTypes_Pkg_to_long,
    compare_aNID_NTC_T_Packet_TrainTypes_Pkg,
    get_aNID_NTC_T_Packet_TrainTypes_Pkg_signature,
    init_aNID_NTC_T_Packet_TrainTypes_Pkg,
    release_aNID_NTC_T_Packet_TrainTypes_Pkg,
    copy_aNID_NTC_T_Packet_TrainTypes_Pkg,
    sizeof(aNID_NTC_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** aNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable;
#endif

int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, sNID_RADIO_T_Packet_TrainTypes_Pkg_to_string, 1, sizeof(sNID_RADIO_T_Packet_TrainTypes_Pkg), pfnStrAppend, pStrObj);
}

int check_aNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static aNID_RADIO_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_sNID_RADIO_T_Packet_TrainTypes_Pkg_Utils, 1, sizeof(sNID_RADIO_T_Packet_TrainTypes_Pkg), endptr);
    }
    return nRet;
}

int is_aNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_aNID_RADIO_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_aNID_RADIO_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_sNID_RADIO_T_Packet_TrainTypes_Pkg, 1, sizeof(sNID_RADIO_T_Packet_TrainTypes_Pkg), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_aNID_RADIO_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_sNID_RADIO_T_Packet_TrainTypes_Pkg_signature, 1, pfnStrAppend, pStrObj); 
}

int init_aNID_RADIO_T_Packet_TrainTypes_Pkg(void *pValue)
{
    size_t i;
    for (i = 0; i < 1; i++)
        init_sNID_RADIO_T_Packet_TrainTypes_Pkg(&((sNID_RADIO_T_Packet_TrainTypes_Pkg*)pValue)[i]);
    return 1;
}

int release_aNID_RADIO_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg((aNID_RADIO_T_Packet_TrainTypes_Pkg*)pToValue, (aNID_RADIO_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_aNID_RADIO_T_Packet_TrainTypes_Pkg_Utils = {
    aNID_RADIO_T_Packet_TrainTypes_Pkg_to_string,
    check_aNID_RADIO_T_Packet_TrainTypes_Pkg_string,
    string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg,
    is_aNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    aNID_RADIO_T_Packet_TrainTypes_Pkg_to_double,
    is_aNID_RADIO_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    aNID_RADIO_T_Packet_TrainTypes_Pkg_to_long,
    compare_aNID_RADIO_T_Packet_TrainTypes_Pkg,
    get_aNID_RADIO_T_Packet_TrainTypes_Pkg_signature,
    init_aNID_RADIO_T_Packet_TrainTypes_Pkg,
    release_aNID_RADIO_T_Packet_TrainTypes_Pkg,
    copy_aNID_RADIO_T_Packet_TrainTypes_Pkg,
    sizeof(aNID_RADIO_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** array_bool_30 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_bool_30VTable_defined
    extern struct SimTypeVTable *pSimarray_bool_30VTable;
  #else 
    struct SimTypeVTable *pSimarray_bool_30VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_bool_30VTable;
#endif

int array_bool_30_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_bool_30VTable != NULL
        && pSimarray_bool_30VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_30VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 30, sizeof(kcg_bool), pfnStrAppend, pStrObj);
}

int check_array_bool_30_string(const char *str, char **endptr)
{
    static array_bool_30 rTemp;
    return string_to_array_bool_30(str, (void*)&rTemp, endptr);
}

int string_to_array_bool_30(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_bool_30VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_bool_30VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 30, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_30_double_conversion_allowed()
{
    if (pSimarray_bool_30VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_bool_30VTable);
    }
    return 0;
}

int array_bool_30_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_bool_30VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_30VTable, nValue);
    }
    return 0;
}

int is_array_bool_30_long_conversion_allowed()
{
    if (pSimarray_bool_30VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_bool_30VTable);
    }
    return 0;
}

int array_bool_30_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_bool_30VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_bool_30VTable, nValue);
    }
    return 0;
}

void compare_array_bool_30(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_bool_30VTable != NULL
        && pSimarray_bool_30VTable->m_version >= Scv612
        && pSimarray_bool_30VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_30VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_bool_30VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_bool_30VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 30, sizeof(kcg_bool), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_bool_30_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_bool_signature, 30, pfnStrAppend, pStrObj); 
}

int init_array_bool_30(void *pValue)
{
    size_t i;
    for (i = 0; i < 30; i++)
        init_kcg_bool(&((kcg_bool*)pValue)[i]);
    return 1;
}

int release_array_bool_30(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_bool_30(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_bool_30((array_bool_30*)pToValue, (array_bool_30*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_bool_30_Utils = {
    array_bool_30_to_string,
    check_array_bool_30_string,
    string_to_array_bool_30,
    is_array_bool_30_double_conversion_allowed,
    array_bool_30_to_double,
    is_array_bool_30_long_conversion_allowed,
    array_bool_30_to_long,
    compare_array_bool_30,
    get_array_bool_30_signature,
    init_array_bool_30,
    release_array_bool_30,
    copy_array_bool_30,
    sizeof(array_bool_30)
};

/****************************************************************
 ** array_int32_30 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_int32_30VTable_defined
    extern struct SimTypeVTable *pSimarray_int32_30VTable;
  #else 
    struct SimTypeVTable *pSimarray_int32_30VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_int32_30VTable;
#endif

int array_int32_30_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_int32_30VTable != NULL
        && pSimarray_int32_30VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int32_30VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int32_to_string, 30, sizeof(kcg_int32), pfnStrAppend, pStrObj);
}

int check_array_int32_30_string(const char *str, char **endptr)
{
    static array_int32_30 rTemp;
    return string_to_array_int32_30(str, (void*)&rTemp, endptr);
}

int string_to_array_int32_30(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_int32_30VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_int32_30VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int32_Utils, 30, sizeof(kcg_int32), endptr);
    }
    return nRet;
}

int is_array_int32_30_double_conversion_allowed()
{
    if (pSimarray_int32_30VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int32_30VTable);
    }
    return 0;
}

int array_int32_30_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_int32_30VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int32_30VTable, nValue);
    }
    return 0;
}

int is_array_int32_30_long_conversion_allowed()
{
    if (pSimarray_int32_30VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_int32_30VTable);
    }
    return 0;
}

int array_int32_30_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_int32_30VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int32_30VTable, nValue);
    }
    return 0;
}

void compare_array_int32_30(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_int32_30VTable != NULL
        && pSimarray_int32_30VTable->m_version >= Scv612
        && pSimarray_int32_30VTable->m_pfnCompare != NULL) {
        if (pSimarray_int32_30VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_int32_30VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_int32_30VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int32, 30, sizeof(kcg_int32), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_int32_30_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_int32_signature, 30, pfnStrAppend, pStrObj); 
}

int init_array_int32_30(void *pValue)
{
    size_t i;
    for (i = 0; i < 30; i++)
        init_kcg_int32(&((kcg_int32*)pValue)[i]);
    return 1;
}

int release_array_int32_30(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_int32_30(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_int32_30((array_int32_30*)pToValue, (array_int32_30*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_int32_30_Utils = {
    array_int32_30_to_string,
    check_array_int32_30_string,
    string_to_array_int32_30,
    is_array_int32_30_double_conversion_allowed,
    array_int32_30_to_double,
    is_array_int32_30_long_conversion_allowed,
    array_int32_30_to_long,
    compare_array_int32_30,
    get_array_int32_30_signature,
    init_array_int32_30,
    release_array_int32_30,
    copy_array_int32_30,
    sizeof(array_int32_30)
};

/****************************************************************
 ** array_int32_500_500 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_int32_500_500VTable_defined
    extern struct SimTypeVTable *pSimarray_int32_500_500VTable;
  #else 
    struct SimTypeVTable *pSimarray_int32_500_500VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_int32_500_500VTable;
#endif

int array_int32_500_500_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_int32_500_500VTable != NULL
        && pSimarray_int32_500_500VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int32_500_500VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, CompressedPacketData_T_Common_Types_Pkg_to_string, 500, sizeof(CompressedPacketData_T_Common_Types_Pkg), pfnStrAppend, pStrObj);
}

int check_array_int32_500_500_string(const char *str, char **endptr)
{
    static array_int32_500_500 rTemp;
    return string_to_array_int32_500_500(str, (void*)&rTemp, endptr);
}

int string_to_array_int32_500_500(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_int32_500_500VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_int32_500_500VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, 500, sizeof(CompressedPacketData_T_Common_Types_Pkg), endptr);
    }
    return nRet;
}

int is_array_int32_500_500_double_conversion_allowed()
{
    if (pSimarray_int32_500_500VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int32_500_500VTable);
    }
    return 0;
}

int array_int32_500_500_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_int32_500_500VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int32_500_500VTable, nValue);
    }
    return 0;
}

int is_array_int32_500_500_long_conversion_allowed()
{
    if (pSimarray_int32_500_500VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_int32_500_500VTable);
    }
    return 0;
}

int array_int32_500_500_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_int32_500_500VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int32_500_500VTable, nValue);
    }
    return 0;
}

void compare_array_int32_500_500(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_int32_500_500VTable != NULL
        && pSimarray_int32_500_500VTable->m_version >= Scv612
        && pSimarray_int32_500_500VTable->m_pfnCompare != NULL) {
        if (pSimarray_int32_500_500VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_int32_500_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_int32_500_500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_CompressedPacketData_T_Common_Types_Pkg, 500, sizeof(CompressedPacketData_T_Common_Types_Pkg), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_int32_500_500_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_CompressedPacketData_T_Common_Types_Pkg_signature, 500, pfnStrAppend, pStrObj); 
}

int init_array_int32_500_500(void *pValue)
{
    size_t i;
    for (i = 0; i < 500; i++)
        init_CompressedPacketData_T_Common_Types_Pkg(&((CompressedPacketData_T_Common_Types_Pkg*)pValue)[i]);
    return 1;
}

int release_array_int32_500_500(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_int32_500_500(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_int32_500_500((array_int32_500_500*)pToValue, (array_int32_500_500*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_int32_500_500_Utils = {
    array_int32_500_500_to_string,
    check_array_int32_500_500_string,
    string_to_array_int32_500_500,
    is_array_int32_500_500_double_conversion_allowed,
    array_int32_500_500_to_double,
    is_array_int32_500_500_long_conversion_allowed,
    array_int32_500_500_to_long,
    compare_array_int32_500_500,
    get_array_int32_500_500_signature,
    init_array_int32_500_500,
    release_array_int32_500_500,
    copy_array_int32_500_500,
    sizeof(array_int32_500_500)
};

/****************************************************************
 ** aTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable;
#endif

int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, sTractionIdentity_T_Packet_TrainTypes_Pkg_to_string, 4, sizeof(sTractionIdentity_T_Packet_TrainTypes_Pkg), pfnStrAppend, pStrObj);
}

int check_aTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static aTractionIdentity_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_sTractionIdentity_T_Packet_TrainTypes_Pkg_Utils, 4, sizeof(sTractionIdentity_T_Packet_TrainTypes_Pkg), endptr);
    }
    return nRet;
}

int is_aTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_aTractionIdentity_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_aTractionIdentity_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_sTractionIdentity_T_Packet_TrainTypes_Pkg, 4, sizeof(sTractionIdentity_T_Packet_TrainTypes_Pkg), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_aTractionIdentity_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_sTractionIdentity_T_Packet_TrainTypes_Pkg_signature, 4, pfnStrAppend, pStrObj); 
}

int init_aTractionIdentity_T_Packet_TrainTypes_Pkg(void *pValue)
{
    size_t i;
    for (i = 0; i < 4; i++)
        init_sTractionIdentity_T_Packet_TrainTypes_Pkg(&((sTractionIdentity_T_Packet_TrainTypes_Pkg*)pValue)[i]);
    return 1;
}

int release_aTractionIdentity_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg((aTractionIdentity_T_Packet_TrainTypes_Pkg*)pToValue, (aTractionIdentity_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_aTractionIdentity_T_Packet_TrainTypes_Pkg_Utils = {
    aTractionIdentity_T_Packet_TrainTypes_Pkg_to_string,
    check_aTractionIdentity_T_Packet_TrainTypes_Pkg_string,
    string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg,
    is_aTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    aTractionIdentity_T_Packet_TrainTypes_Pkg_to_double,
    is_aTractionIdentity_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    aTractionIdentity_T_Packet_TrainTypes_Pkg_to_long,
    compare_aTractionIdentity_T_Packet_TrainTypes_Pkg,
    get_aTractionIdentity_T_Packet_TrainTypes_Pkg_signature,
    init_aTractionIdentity_T_Packet_TrainTypes_Pkg,
    release_aTractionIdentity_T_Packet_TrainTypes_Pkg,
    copy_aTractionIdentity_T_Packet_TrainTypes_Pkg,
    sizeof(aTractionIdentity_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** BCD_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBCD_T_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimBCD_T_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimBCD_T_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBCD_T_Obu_BasicTypes_PkgVTable;
#endif

int BCD_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_BCD_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static BCD_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_BCD_T_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_BCD_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimBCD_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_BCD_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBCD_T_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int BCD_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBCD_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_BCD_T_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBCD_T_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int BCD_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimBCD_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_BCD_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimBCD_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
               && pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimBCD_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_BCD_T_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_BCD_T_Obu_BasicTypes_Pkg(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_BCD_T_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_BCD_T_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((BCD_T_Obu_BasicTypes_Pkg*)pToValue) = *((BCD_T_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_BCD_T_Obu_BasicTypes_Pkg_Utils = {
    BCD_T_Obu_BasicTypes_Pkg_to_string,
    check_BCD_T_Obu_BasicTypes_Pkg_string,
    string_to_BCD_T_Obu_BasicTypes_Pkg,
    is_BCD_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    BCD_T_Obu_BasicTypes_Pkg_to_double,
    is_BCD_T_Obu_BasicTypes_Pkg_long_conversion_allowed,
    BCD_T_Obu_BasicTypes_Pkg_to_long,
    compare_BCD_T_Obu_BasicTypes_Pkg,
    get_BCD_T_Obu_BasicTypes_Pkg_signature,
    init_BCD_T_Obu_BasicTypes_Pkg,
    release_BCD_T_Obu_BasicTypes_Pkg,
    copy_BCD_T_Obu_BasicTypes_Pkg,
    sizeof(BCD_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** BG_Header_T_BG_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBG_Header_T_BG_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimBG_Header_T_BG_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimBG_Header_T_BG_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBG_Header_T_BG_Types_PkgVTable;
#endif

static SimFieldUtils BG_Header_T_BG_Types_Pkg_fields[] = {
    {"valid", offsetof(BG_Header_T_BG_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"q_updown", offsetof(BG_Header_T_BG_Types_Pkg,q_updown), &_Type_Q_UPDOWN_Utils},
    {"m_version", offsetof(BG_Header_T_BG_Types_Pkg,m_version), &_Type_M_VERSION_Utils},
    {"q_media", offsetof(BG_Header_T_BG_Types_Pkg,q_media), &_Type_Q_MEDIA_Utils},
    {"n_total", offsetof(BG_Header_T_BG_Types_Pkg,n_total), &_Type_N_TOTAL_Utils},
    {"m_mcount", offsetof(BG_Header_T_BG_Types_Pkg,m_mcount), &_Type_M_MCOUNT_Utils},
    {"nid_c", offsetof(BG_Header_T_BG_Types_Pkg,nid_c), &_Type_NID_C_Utils},
    {"nid_bg", offsetof(BG_Header_T_BG_Types_Pkg,nid_bg), &_Type_NID_BG_Utils},
    {"q_link", offsetof(BG_Header_T_BG_Types_Pkg,q_link), &_Type_Q_LINK_Utils},
    {"bgPosition", offsetof(BG_Header_T_BG_Types_Pkg,bgPosition), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils},
    {"BG_centerDetectionInaccuraccuracies", offsetof(BG_Header_T_BG_Types_Pkg,BG_centerDetectionInaccuraccuracies), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils},
    {"q_nvlocacc", offsetof(BG_Header_T_BG_Types_Pkg,q_nvlocacc), &_Type_Q_NVLOCACC_Utils},
    {"noCoordinateSystemHasBeenAssigned", offsetof(BG_Header_T_BG_Types_Pkg,noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils},
    {"trainOrientationToBG", offsetof(BG_Header_T_BG_Types_Pkg,trainOrientationToBG), &_Type_Q_DIRLRBG_Utils},
    {"trainRunningDirectionToBG", offsetof(BG_Header_T_BG_Types_Pkg,trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils},
};

int BG_Header_T_BG_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL
        && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, BG_Header_T_BG_Types_Pkg_fields, 15, pfnStrAppend, pStrObj);
}

int check_BG_Header_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static BG_Header_T_BG_Types_Pkg rTemp;
    return string_to_BG_Header_T_BG_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_BG_Header_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimBG_Header_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, BG_Header_T_BG_Types_Pkg_fields, 15, endptr);
    }
    return nRet;
}

int is_BG_Header_T_BG_Types_Pkg_double_conversion_allowed()
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBG_Header_T_BG_Types_PkgVTable);
    }
    return 0;
}

int BG_Header_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBG_Header_T_BG_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_BG_Header_T_BG_Types_Pkg_long_conversion_allowed()
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBG_Header_T_BG_Types_PkgVTable);
    }
    return 0;
}

int BG_Header_T_BG_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimBG_Header_T_BG_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_BG_Header_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBG_Header_T_BG_Types_PkgVTable != NULL
        && pSimBG_Header_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBG_Header_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimBG_Header_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimBG_Header_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, BG_Header_T_BG_Types_Pkg_fields, 15, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_BG_Header_T_BG_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(BG_Header_T_BG_Types_Pkg_fields, 15, pfnStrAppend, pStrObj);
}

int init_BG_Header_T_BG_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((BG_Header_T_BG_Types_Pkg*)pValue)->valid));
    init_Q_UPDOWN(&(((BG_Header_T_BG_Types_Pkg*)pValue)->q_updown));
    init_M_VERSION(&(((BG_Header_T_BG_Types_Pkg*)pValue)->m_version));
    init_Q_MEDIA(&(((BG_Header_T_BG_Types_Pkg*)pValue)->q_media));
    init_N_TOTAL(&(((BG_Header_T_BG_Types_Pkg*)pValue)->n_total));
    init_M_MCOUNT(&(((BG_Header_T_BG_Types_Pkg*)pValue)->m_mcount));
    init_NID_C(&(((BG_Header_T_BG_Types_Pkg*)pValue)->nid_c));
    init_NID_BG(&(((BG_Header_T_BG_Types_Pkg*)pValue)->nid_bg));
    init_Q_LINK(&(((BG_Header_T_BG_Types_Pkg*)pValue)->q_link));
    init_odometry_T_Obu_BasicTypes_Pkg(&(((BG_Header_T_BG_Types_Pkg*)pValue)->bgPosition));
    init_LocWithInAcc_T_Obu_BasicTypes_Pkg(&(((BG_Header_T_BG_Types_Pkg*)pValue)->BG_centerDetectionInaccuraccuracies));
    init_Q_NVLOCACC(&(((BG_Header_T_BG_Types_Pkg*)pValue)->q_nvlocacc));
    init_kcg_bool(&(((BG_Header_T_BG_Types_Pkg*)pValue)->noCoordinateSystemHasBeenAssigned));
    init_Q_DIRLRBG(&(((BG_Header_T_BG_Types_Pkg*)pValue)->trainOrientationToBG));
    init_Q_DIRTRAIN(&(((BG_Header_T_BG_Types_Pkg*)pValue)->trainRunningDirectionToBG));
    return 1;
}

int release_BG_Header_T_BG_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_BG_Header_T_BG_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_BG_Header_T_BG_Types_Pkg((BG_Header_T_BG_Types_Pkg*)pToValue, (BG_Header_T_BG_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_BG_Header_T_BG_Types_Pkg_Utils = {
    BG_Header_T_BG_Types_Pkg_to_string,
    check_BG_Header_T_BG_Types_Pkg_string,
    string_to_BG_Header_T_BG_Types_Pkg,
    is_BG_Header_T_BG_Types_Pkg_double_conversion_allowed,
    BG_Header_T_BG_Types_Pkg_to_double,
    is_BG_Header_T_BG_Types_Pkg_long_conversion_allowed,
    BG_Header_T_BG_Types_Pkg_to_long,
    compare_BG_Header_T_BG_Types_Pkg,
    get_BG_Header_T_BG_Types_Pkg_signature,
    init_BG_Header_T_BG_Types_Pkg,
    release_BG_Header_T_BG_Types_Pkg,
    copy_BG_Header_T_BG_Types_Pkg,
    sizeof(BG_Header_T_BG_Types_Pkg)
};

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCompressedPacketData_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimCompressedPacketData_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimCompressedPacketData_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCompressedPacketData_T_Common_Types_PkgVTable;
#endif

static SimConstValUtils const CompressedPacketData_T_Common_Types_Pkg_constants[] = {
    { "TM::DEFAULT_CompressedPackets", &TU_DEFAULT_CompressedPackets_TM },
    { "DEFAULT_CompressedPackets", &TU_DEFAULT_CompressedPackets_TM },
};

int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int32_to_string, 500, sizeof(kcg_int32), pfnStrAppend, pStrObj);
}

int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static CompressedPacketData_T_Common_Types_Pkg rTemp;
    return string_to_CompressedPacketData_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimCompressedPacketData_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, CompressedPacketData_T_Common_Types_Pkg_constants, sizeof(CompressedPacketData_T_Common_Types_Pkg_constants) / sizeof(CompressedPacketData_T_Common_Types_Pkg_constants[0]), sizeof(CompressedPacketData_T_Common_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int32_Utils, 500, sizeof(kcg_int32), endptr);
    }
    return nRet;
}

int is_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return 0;
}

int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPacketData_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_CompressedPacketData_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return 0;
}

int CompressedPacketData_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPacketData_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_CompressedPacketData_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int32, 500, sizeof(kcg_int32), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_CompressedPacketData_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_int32_signature, 500, pfnStrAppend, pStrObj); 
}

int init_CompressedPacketData_T_Common_Types_Pkg(void *pValue)
{
    size_t i;
    for (i = 0; i < 500; i++)
        init_kcg_int32(&((kcg_int32*)pValue)[i]);
    return 1;
}

int release_CompressedPacketData_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_CompressedPacketData_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg((CompressedPacketData_T_Common_Types_Pkg*)pToValue, (CompressedPacketData_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils = {
    CompressedPacketData_T_Common_Types_Pkg_to_string,
    check_CompressedPacketData_T_Common_Types_Pkg_string,
    string_to_CompressedPacketData_T_Common_Types_Pkg,
    is_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_double,
    is_CompressedPacketData_T_Common_Types_Pkg_long_conversion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_long,
    compare_CompressedPacketData_T_Common_Types_Pkg,
    get_CompressedPacketData_T_Common_Types_Pkg_signature,
    init_CompressedPacketData_T_Common_Types_Pkg,
    release_CompressedPacketData_T_Common_Types_Pkg,
    copy_CompressedPacketData_T_Common_Types_Pkg,
    sizeof(CompressedPacketData_T_Common_Types_Pkg)
};

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCompressedPackets_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;
#endif

static SimFieldUtils CompressedPackets_T_Common_Types_Pkg_fields[] = {
    {"PacketHeaders", offsetof(CompressedPackets_T_Common_Types_Pkg,PacketHeaders), &_Type_Metadata_T_Common_Types_Pkg_Utils},
    {"PacketData", offsetof(CompressedPackets_T_Common_Types_Pkg,PacketData), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils},
};

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, CompressedPackets_T_Common_Types_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static CompressedPackets_T_Common_Types_Pkg rTemp;
    return string_to_CompressedPackets_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, CompressedPackets_T_Common_Types_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return 0;
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_CompressedPackets_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return 0;
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_CompressedPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, CompressedPackets_T_Common_Types_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(CompressedPackets_T_Common_Types_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_CompressedPackets_T_Common_Types_Pkg(void *pValue)
{
    init_Metadata_T_Common_Types_Pkg(&(((CompressedPackets_T_Common_Types_Pkg*)pValue)->PacketHeaders));
    init_CompressedPacketData_T_Common_Types_Pkg(&(((CompressedPackets_T_Common_Types_Pkg*)pValue)->PacketData));
    return 1;
}

int release_CompressedPackets_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_CompressedPackets_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_CompressedPackets_T_Common_Types_Pkg((CompressedPackets_T_Common_Types_Pkg*)pToValue, (CompressedPackets_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils = {
    CompressedPackets_T_Common_Types_Pkg_to_string,
    check_CompressedPackets_T_Common_Types_Pkg_string,
    string_to_CompressedPackets_T_Common_Types_Pkg,
    is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_double,
    is_CompressedPackets_T_Common_Types_Pkg_long_conversion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_long,
    compare_CompressedPackets_T_Common_Types_Pkg,
    get_CompressedPackets_T_Common_Types_Pkg_signature,
    init_CompressedPackets_T_Common_Types_Pkg,
    release_CompressedPackets_T_Common_Types_Pkg,
    copy_CompressedPackets_T_Common_Types_Pkg,
    sizeof(CompressedPackets_T_Common_Types_Pkg)
};

/****************************************************************
 ** D_EMERGENCYSTOP 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimD_EMERGENCYSTOPVTable_defined
    extern struct SimTypeVTable *pSimD_EMERGENCYSTOPVTable;
  #else 
    struct SimTypeVTable *pSimD_EMERGENCYSTOPVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimD_EMERGENCYSTOPVTable;
#endif

int D_EMERGENCYSTOP_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL
        && pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_D_EMERGENCYSTOP_string(const char *str, char **endptr)
{
    static D_EMERGENCYSTOP rTemp;
    return string_to_D_EMERGENCYSTOP(str, (void*)&rTemp, endptr);
}

int string_to_D_EMERGENCYSTOP(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        nRet = string_to_VTable(str, pSimD_EMERGENCYSTOPVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_D_EMERGENCYSTOP_double_conversion_allowed()
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_EMERGENCYSTOPVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int D_EMERGENCYSTOP_to_double(const void *pValue, double *nValue)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_double(pValue, pSimD_EMERGENCYSTOPVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_D_EMERGENCYSTOP_long_conversion_allowed()
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimD_EMERGENCYSTOPVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int D_EMERGENCYSTOP_to_long(const void *pValue, long *nValue)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_long(pValue, pSimD_EMERGENCYSTOPVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_D_EMERGENCYSTOP(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimD_EMERGENCYSTOPVTable != NULL
        && pSimD_EMERGENCYSTOPVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimD_EMERGENCYSTOPVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimD_EMERGENCYSTOPVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimD_EMERGENCYSTOPVTable->m_version >= Scv612
               && pSimD_EMERGENCYSTOPVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimD_EMERGENCYSTOPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimD_EMERGENCYSTOPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimD_EMERGENCYSTOPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_D_EMERGENCYSTOP_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_D_EMERGENCYSTOP(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_D_EMERGENCYSTOP(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_D_EMERGENCYSTOP(void *pToValue, const void *pFromValue)
{
    *((D_EMERGENCYSTOP*)pToValue) = *((D_EMERGENCYSTOP*)pFromValue);
    return 1;
}

SimTypeUtils _Type_D_EMERGENCYSTOP_Utils = {
    D_EMERGENCYSTOP_to_string,
    check_D_EMERGENCYSTOP_string,
    string_to_D_EMERGENCYSTOP,
    is_D_EMERGENCYSTOP_double_conversion_allowed,
    D_EMERGENCYSTOP_to_double,
    is_D_EMERGENCYSTOP_long_conversion_allowed,
    D_EMERGENCYSTOP_to_long,
    compare_D_EMERGENCYSTOP,
    get_D_EMERGENCYSTOP_signature,
    init_D_EMERGENCYSTOP,
    release_D_EMERGENCYSTOP,
    copy_D_EMERGENCYSTOP,
    sizeof(D_EMERGENCYSTOP)
};

/****************************************************************
 ** D_REF 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimD_REFVTable_defined
    extern struct SimTypeVTable *pSimD_REFVTable;
  #else 
    struct SimTypeVTable *pSimD_REFVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimD_REFVTable;
#endif

int D_REF_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimD_REFVTable != NULL
        && pSimD_REFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_REFVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_D_REF_string(const char *str, char **endptr)
{
    static D_REF rTemp;
    return string_to_D_REF(str, (void*)&rTemp, endptr);
}

int string_to_D_REF(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimD_REFVTable != NULL) {
        nRet = string_to_VTable(str, pSimD_REFVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_D_REF_double_conversion_allowed()
{
    if (pSimD_REFVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_REFVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int D_REF_to_double(const void *pValue, double *nValue)
{
    if (pSimD_REFVTable != NULL) {
        return VTable_to_double(pValue, pSimD_REFVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_D_REF_long_conversion_allowed()
{
    if (pSimD_REFVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimD_REFVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int D_REF_to_long(const void *pValue, long *nValue)
{
    if (pSimD_REFVTable != NULL) {
        return VTable_to_long(pValue, pSimD_REFVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_D_REF(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimD_REFVTable != NULL
        && pSimD_REFVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimD_REFVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimD_REFVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimD_REFVTable->m_version >= Scv612
               && pSimD_REFVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimD_REFVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimD_REFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimD_REFVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_D_REF_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_D_REF(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_D_REF(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_D_REF(void *pToValue, const void *pFromValue)
{
    *((D_REF*)pToValue) = *((D_REF*)pFromValue);
    return 1;
}

SimTypeUtils _Type_D_REF_Utils = {
    D_REF_to_string,
    check_D_REF_string,
    string_to_D_REF,
    is_D_REF_double_conversion_allowed,
    D_REF_to_double,
    is_D_REF_long_conversion_allowed,
    D_REF_to_long,
    compare_D_REF,
    get_D_REF_signature,
    init_D_REF,
    release_D_REF,
    copy_D_REF,
    sizeof(D_REF)
};

/****************************************************************
 ** D_SR 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimD_SRVTable_defined
    extern struct SimTypeVTable *pSimD_SRVTable;
  #else 
    struct SimTypeVTable *pSimD_SRVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimD_SRVTable;
#endif

int D_SR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimD_SRVTable != NULL
        && pSimD_SRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_SRVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_D_SR_string(const char *str, char **endptr)
{
    static D_SR rTemp;
    return string_to_D_SR(str, (void*)&rTemp, endptr);
}

int string_to_D_SR(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimD_SRVTable != NULL) {
        nRet = string_to_VTable(str, pSimD_SRVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_D_SR_double_conversion_allowed()
{
    if (pSimD_SRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_SRVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int D_SR_to_double(const void *pValue, double *nValue)
{
    if (pSimD_SRVTable != NULL) {
        return VTable_to_double(pValue, pSimD_SRVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_D_SR_long_conversion_allowed()
{
    if (pSimD_SRVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimD_SRVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int D_SR_to_long(const void *pValue, long *nValue)
{
    if (pSimD_SRVTable != NULL) {
        return VTable_to_long(pValue, pSimD_SRVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_D_SR(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimD_SRVTable != NULL
        && pSimD_SRVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimD_SRVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimD_SRVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimD_SRVTable->m_version >= Scv612
               && pSimD_SRVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimD_SRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimD_SRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimD_SRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_D_SR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_D_SR(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_D_SR(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_D_SR(void *pToValue, const void *pFromValue)
{
    *((D_SR*)pToValue) = *((D_SR*)pFromValue);
    return 1;
}

SimTypeUtils _Type_D_SR_Utils = {
    D_SR_to_string,
    check_D_SR_string,
    string_to_D_SR,
    is_D_SR_double_conversion_allowed,
    D_SR_to_double,
    is_D_SR_long_conversion_allowed,
    D_SR_to_long,
    compare_D_SR,
    get_D_SR_signature,
    init_D_SR,
    release_D_SR,
    copy_D_SR,
    sizeof(D_SR)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, (void*)&rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int init_kcg_bool(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int release_kcg_bool(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_bool(void *pToValue, const void *pFromValue)
{
    *((kcg_bool*)pToValue) = *((kcg_bool*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    init_kcg_bool,
    release_kcg_bool,
    copy_kcg_bool,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, (void*)&rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int init_kcg_char(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int release_kcg_char(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_char(void *pToValue, const void *pFromValue)
{
    *((kcg_char*)pToValue) = *((kcg_char*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    init_kcg_char,
    release_kcg_char,
    copy_kcg_char,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceFloat;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceFloat
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimFloat32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimFloat32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison (with tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int init_kcg_float32(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

int release_kcg_float32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float32(void *pToValue, const void *pFromValue)
{
    *((kcg_float32*)pToValue) = *((kcg_float32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    init_kcg_float32,
    release_kcg_float32,
    copy_kcg_float32,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimFloat64VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimFloat64VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison (with tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int init_kcg_float64(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

int release_kcg_float64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float64(void *pToValue, const void *pFromValue)
{
    *((kcg_float64*)pToValue) = *((kcg_float64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    init_kcg_float64,
    release_kcg_float64,
    copy_kcg_float64,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int init_kcg_int16(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

int release_kcg_int16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int16(void *pToValue, const void *pFromValue)
{
    *((kcg_int16*)pToValue) = *((kcg_int16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    init_kcg_int16,
    release_kcg_int16,
    copy_kcg_int16,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

static SimConstValUtils const kcg_int32_constants[] = {
    { "Common_Types_Pkg::cMetadataArraySize", &TU_cMetadataArraySize_Common_Types_Pkg },
    { "cMetadataArraySize", &TU_cMetadataArraySize_Common_Types_Pkg },
    { "Common_Types_Pkg::cDIM_MaxRMessages", &TU_cDIM_MaxRMessages_Common_Types_Pkg },
    { "cDIM_MaxRMessages", &TU_cDIM_MaxRMessages_Common_Types_Pkg },
    { "Common_Types_Pkg::cDIM_MaxDataElementsInRMessage", &TU_cDIM_MaxDataElementsInRMessage_Common_Types_Pkg },
    { "cDIM_MaxDataElementsInRMessage", &TU_cDIM_MaxDataElementsInRMessage_Common_Types_Pkg },
    { "RCM_MsgTypes_Pkg::c_nid_RBC_contactLastKnownRBC_", &TU_c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg },
    { "c_nid_RBC_contactLastKnownRBC_", &TU_c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg },
    { "TM::DIM_MaxRMessages", &TU_DIM_MaxRMessages_TM },
    { "DIM_MaxRMessages", &TU_DIM_MaxRMessages_TM },
    { "TM_lib_internal::DIM_offset_metadata_nid_packet", &TU_DIM_offset_metadata_nid_packet_TM_lib_internal },
    { "DIM_offset_metadata_nid_packet", &TU_DIM_offset_metadata_nid_packet_TM_lib_internal },
    { "TM_lib_internal::DIM_offset_metadata_q_dir", &TU_DIM_offset_metadata_q_dir_TM_lib_internal },
    { "DIM_offset_metadata_q_dir", &TU_DIM_offset_metadata_q_dir_TM_lib_internal },
    { "TM_lib_internal::DIM_offset_metadata_m_version", &TU_DIM_offset_metadata_m_version_TM_lib_internal },
    { "DIM_offset_metadata_m_version", &TU_DIM_offset_metadata_m_version_TM_lib_internal },
    { "TM_lib_internal::DIM_offset_metadata_id", &TU_DIM_offset_metadata_id_TM_lib_internal },
    { "DIM_offset_metadata_id", &TU_DIM_offset_metadata_id_TM_lib_internal },
    { "TM_conversions::INT_Q_DIR_nomiinal", &TU_INT_Q_DIR_nomiinal_TM_conversions },
    { "INT_Q_DIR_nomiinal", &TU_INT_Q_DIR_nomiinal_TM_conversions },
    { "TM_conversions::INT_Q_DIR_reverse", &TU_INT_Q_DIR_reverse_TM_conversions },
    { "INT_Q_DIR_reverse", &TU_INT_Q_DIR_reverse_TM_conversions },
    { "TM_conversions::INT_Q_DIR_both", &TU_INT_Q_DIR_both_TM_conversions },
    { "INT_Q_DIR_both", &TU_INT_Q_DIR_both_TM_conversions },
    { "TM_conversions::INT_Q_RBC_establish", &TU_INT_Q_RBC_establish_TM_conversions },
    { "INT_Q_RBC_establish", &TU_INT_Q_RBC_establish_TM_conversions },
    { "TM_conversions::INT_Q_RBC_terminate", &TU_INT_Q_RBC_terminate_TM_conversions },
    { "INT_Q_RBC_terminate", &TU_INT_Q_RBC_terminate_TM_conversions },
    { "TM_conversions::INT_Q_SLEEPSESSION_execute", &TU_INT_Q_SLEEPSESSION_execute_TM_conversions },
    { "INT_Q_SLEEPSESSION_execute", &TU_INT_Q_SLEEPSESSION_execute_TM_conversions },
    { "TM_conversions::INT_Q_SLEEPSESSION_ignore", &TU_INT_Q_SLEEPSESSION_ignore_TM_conversions },
    { "INT_Q_SLEEPSESSION_ignore", &TU_INT_Q_SLEEPSESSION_ignore_TM_conversions },
    { "Id_Pkg::cm32_RBC_RIU_System_Version", &TU_cm32_RBC_RIU_System_Version_Id_Pkg },
    { "cm32_RBC_RIU_System_Version", &TU_cm32_RBC_RIU_System_Version_Id_Pkg },
    { "Id_Pkg::cm38_Initiation_of_a_Communication_Session", &TU_cm38_Initiation_of_a_Communication_Session_Id_Pkg },
    { "cm38_Initiation_of_a_Communication_Session", &TU_cm38_Initiation_of_a_Communication_Session_Id_Pkg },
    { "Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session", &TU_cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg },
    { "cm39_Acknowledgement_of_termination_of_a_communication_session", &TU_cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg },
    { "Id_Pkg::co154_No_Compatible_Version_Support", &TU_co154_No_Compatible_Version_Support_Id_Pkg },
    { "co154_No_Compatible_Version_Support", &TU_co154_No_Compatible_Version_Support_Id_Pkg },
    { "Id_Pkg::co159_Session_established", &TU_co159_Session_established_Id_Pkg },
    { "co159_Session_established", &TU_co159_Session_established_Id_Pkg },
    { "Id_Pkg::co156_Termination_of_a_communication_session", &TU_co156_Termination_of_a_communication_session_Id_Pkg },
    { "co156_Termination_of_a_communication_session", &TU_co156_Termination_of_a_communication_session_Id_Pkg },
    { "Id_Pkg::co155_Initiation_of_a_communication_session", &TU_co155_Initiation_of_a_communication_session_Id_Pkg },
    { "co155_Initiation_of_a_communication_session", &TU_co155_Initiation_of_a_communication_session_Id_Pkg },
    { "Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers", &TU_cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg },
    { "cmaxNumberTelephoneNumbers", &TU_cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg },
    { "Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber", &TU_cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg },
    { "cDigitsInTelephoneNumber", &TU_cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg },
    { "Packet_TrainTypes_Pkg::cMaxTractionIdentity", &TU_cMaxTractionIdentity_Packet_TrainTypes_Pkg },
    { "cMaxTractionIdentity", &TU_cMaxTractionIdentity_Packet_TrainTypes_Pkg },
    { "Packet_TrainTypes_Pkg::cMaxNationalSystem", &TU_cMaxNationalSystem_Packet_TrainTypes_Pkg },
    { "cMaxNationalSystem", &TU_cMaxNationalSystem_Packet_TrainTypes_Pkg },
};

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, kcg_int32_constants, sizeof(kcg_int32_constants) / sizeof(kcg_int32_constants[0]), sizeof(kcg_int32), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int init_kcg_int32(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

int release_kcg_int32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int32(void *pToValue, const void *pFromValue)
{
    *((kcg_int32*)pToValue) = *((kcg_int32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    init_kcg_int32,
    release_kcg_int32,
    copy_kcg_int32,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

static SimConstValUtils const kcg_int64_constants[] = {
    { "RCM_MsgTypes_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard", &TU_cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg },
    { "cNID_RADIO_useTheShortNumberStoredOnboard", &TU_cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg },
};

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, kcg_int64_constants, sizeof(kcg_int64_constants) / sizeof(kcg_int64_constants[0]), sizeof(kcg_int64), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int init_kcg_int64(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

int release_kcg_int64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int64(void *pToValue, const void *pFromValue)
{
    *((kcg_int64*)pToValue) = *((kcg_int64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    init_kcg_int64,
    release_kcg_int64,
    copy_kcg_int64,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int init_kcg_int8(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

int release_kcg_int8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int8(void *pToValue, const void *pFromValue)
{
    *((kcg_int8*)pToValue) = *((kcg_int8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    init_kcg_int8,
    release_kcg_int8,
    copy_kcg_int8,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, (void*)&rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int init_kcg_size(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

int release_kcg_size(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_size(void *pToValue, const void *pFromValue)
{
    *((kcg_size*)pToValue) = *((kcg_size*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    init_kcg_size,
    release_kcg_size,
    copy_kcg_size,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int init_kcg_uint16(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

int release_kcg_uint16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint16(void *pToValue, const void *pFromValue)
{
    *((kcg_uint16*)pToValue) = *((kcg_uint16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    init_kcg_uint16,
    release_kcg_uint16,
    copy_kcg_uint16,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int init_kcg_uint32(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

int release_kcg_uint32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint32(void *pToValue, const void *pFromValue)
{
    *((kcg_uint32*)pToValue) = *((kcg_uint32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    init_kcg_uint32,
    release_kcg_uint32,
    copy_kcg_uint32,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int init_kcg_uint64(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

int release_kcg_uint64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint64(void *pToValue, const void *pFromValue)
{
    *((kcg_uint64*)pToValue) = *((kcg_uint64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    init_kcg_uint64,
    release_kcg_uint64,
    copy_kcg_uint64,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int init_kcg_uint8(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

int release_kcg_uint8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint8(void *pToValue, const void *pFromValue)
{
    *((kcg_uint8*)pToValue) = *((kcg_uint8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    init_kcg_uint8,
    release_kcg_uint8,
    copy_kcg_uint8,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimL_internal_Type_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimL_internal_Type_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimL_internal_Type_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimL_internal_Type_Obu_BasicTypes_PkgVTable;
#endif

int L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static L_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_L_internal_Type_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_L_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimL_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int L_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_L_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimL_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int L_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
               && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_L_internal_Type_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_L_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_L_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_L_internal_Type_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((L_internal_Type_Obu_BasicTypes_Pkg*)pToValue) = *((L_internal_Type_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    L_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_L_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_L_internal_Type_Obu_BasicTypes_Pkg,
    is_L_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    L_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_L_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed,
    L_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_L_internal_Type_Obu_BasicTypes_Pkg,
    get_L_internal_Type_Obu_BasicTypes_Pkg_signature,
    init_L_internal_Type_Obu_BasicTypes_Pkg,
    release_L_internal_Type_Obu_BasicTypes_Pkg,
    copy_L_internal_Type_Obu_BasicTypes_Pkg,
    sizeof(L_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable;
#endif

static SimFieldUtils LocWithInAcc_T_Obu_BasicTypes_Pkg_fields[] = {
    {"nominal", offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg,nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"d_min", offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg,d_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"d_max", offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg,d_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
};

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static LocWithInAcc_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_LocWithInAcc_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(LocWithInAcc_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int init_LocWithInAcc_T_Obu_BasicTypes_Pkg(void *pValue)
{
    init_L_internal_Type_Obu_BasicTypes_Pkg(&(((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)->nominal));
    init_L_internal_Type_Obu_BasicTypes_Pkg(&(((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)->d_min));
    init_L_internal_Type_Obu_BasicTypes_Pkg(&(((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)->d_max));
    return 1;
}

int release_LocWithInAcc_T_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pToValue, (LocWithInAcc_T_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils = {
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string,
    check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string,
    string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double,
    is_LocWithInAcc_T_Obu_BasicTypes_Pkg_long_conversion_allowed,
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_long,
    compare_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature,
    init_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    release_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    copy_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable;
#endif

static SimFieldUtils m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_fields[] = {
    {"valid", offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"msgSrc", offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"versionSupported", offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,versionSupported), &_Type_kcg_bool_Utils},
    {"origin", offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
    {"m_version", offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,m_version), &_Type_M_VERSION_Utils},
};

int m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int check_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_string(const char *str, char **endptr)
{
    static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg rTemp;
    return string_to_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_fields, 5, endptr);
    }
    return nRet;
}

int is_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_double_conversion_allowed()
{
    if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_long_conversion_allowed()
{
    if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable->m_version >= Scv612
        && pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimm32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_fields, 5, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int init_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg*)pValue)->valid));
    init_MsgSource_T_Common_Types_Pkg(&(((m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg*)pValue)->msgSrc));
    init_kcg_bool(&(((m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg*)pValue)->versionSupported));
    init_RBC_Id_T_Common_Types_Pkg(&(((m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg*)pValue)->origin));
    init_M_VERSION(&(((m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg*)pValue)->m_version));
    return 1;
}

int release_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg((m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg*)pToValue, (m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils = {
    m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_to_string,
    check_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_string,
    string_to_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,
    is_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_double_conversion_allowed,
    m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_to_double,
    is_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_long_conversion_allowed,
    m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_to_long,
    compare_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,
    get_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_signature,
    init_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,
    release_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,
    copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg,
    sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg)
};

/****************************************************************
 ** m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable;
#endif

static SimFieldUtils m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields[] = {
    {"valid", offsetof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"msgSrc", offsetof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"origin", offsetof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
};

int m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int check_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_string(const char *str, char **endptr)
{
    static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg rTemp;
    return string_to_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_double_conversion_allowed()
{
    if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_long_conversion_allowed()
{
    if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_version >= Scv612
        && pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimm38_initiationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int init_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pValue)->valid));
    init_MsgSource_T_Common_Types_Pkg(&(((m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pValue)->msgSrc));
    init_RBC_Id_T_Common_Types_Pkg(&(((m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pValue)->origin));
    return 1;
}

int release_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg((m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pToValue, (m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils = {
    m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_string,
    check_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_string,
    string_to_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    is_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_double_conversion_allowed,
    m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_double,
    is_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_long_conversion_allowed,
    m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_long,
    compare_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    get_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_signature,
    init_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    release_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg)
};

/****************************************************************
 ** m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable;
#endif

static SimFieldUtils m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields[] = {
    {"valid", offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"msgSrc", offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"origin", offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
    {"lrbg", offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,lrbg), &_Type_NID_LRBG_Utils},
};

int m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int check_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_string(const char *str, char **endptr)
{
    static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg rTemp;
    return string_to_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_double_conversion_allowed()
{
    if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_long_conversion_allowed()
{
    if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_version >= Scv612
        && pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimm39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int init_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pValue)->valid));
    init_MsgSource_T_Common_Types_Pkg(&(((m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pValue)->msgSrc));
    init_RBC_Id_T_Common_Types_Pkg(&(((m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pValue)->origin));
    init_NID_LRBG(&(((m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pValue)->lrbg));
    return 1;
}

int release_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg((m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pToValue, (m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils = {
    m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_string,
    check_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_string,
    string_to_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    is_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_double_conversion_allowed,
    m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_double,
    is_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_long_conversion_allowed,
    m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_to_long,
    compare_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    get_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_signature,
    init_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    release_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg,
    sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg)
};

/****************************************************************
 ** M_ACK 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_ACKVTable_defined
    extern struct SimTypeVTable *pSimM_ACKVTable;
  #else 
    struct SimTypeVTable *pSimM_ACKVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_ACKVTable;
#endif

static SimEnumValUtils M_ACK_values[] = {
    { "M_ACK_No_acknowledgement_required", M_ACK_No_acknowledgement_required},
    { "M_ACK_No_acknowledgement_required", M_ACK_No_acknowledgement_required},
    { "M_ACK_Acknowledgement_required", M_ACK_Acknowledgement_required},
    { "M_ACK_Acknowledgement_required", M_ACK_Acknowledgement_required},
};
const int M_ACK_nb_values = 4;

int M_ACK_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_ACKVTable != NULL
        && pSimM_ACKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_ACKVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_ACK*)pValue, M_ACK_values, M_ACK_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_ACK_string(const char *str, char **endptr)
{
    static M_ACK rTemp;
    return string_to_M_ACK(str, (void*)&rTemp, endptr);
}

int string_to_M_ACK(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_ACKVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_ACKVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_ACK_values, M_ACK_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_ACK*)pValue = (M_ACK)nTemp;
    }
    return nRet;
}

int is_M_ACK_double_conversion_allowed()
{
    if (pSimM_ACKVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_ACKVTable);
    }
    return 1;
}

int M_ACK_to_double(const void *pValue, double *nValue)
{
    if (pSimM_ACKVTable != NULL) {
        return VTable_to_double(pValue, pSimM_ACKVTable, nValue);
    }
    *nValue = (double)*((M_ACK*)pValue);
    return 1;
}

int is_M_ACK_long_conversion_allowed()
{
    if (pSimM_ACKVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_ACKVTable);
    }
    return 1;
}

int M_ACK_to_long(const void *pValue, long *nValue)
{
    if (pSimM_ACKVTable != NULL) {
        return VTable_to_long(pValue, pSimM_ACKVTable, nValue);
    }
    *nValue = (long)*((M_ACK*)pValue);
    return 1;
}

void compare_M_ACK(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_ACKVTable != NULL
        && pSimM_ACKVTable->m_version >= Scv612
        && pSimM_ACKVTable->m_pfnCompare != NULL) {
        if (pSimM_ACKVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_ACKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_ACKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_ACK*)pValue1), (int)(*(M_ACK*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_ACK_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_ACK_values, M_ACK_nb_values, pfnStrAppend, pStrObj);
}

int init_M_ACK(void *pValue)
{
    *(M_ACK*)pValue = M_ACK_No_acknowledgement_required;
    return 1;
}

int release_M_ACK(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_ACK(void *pToValue, const void *pFromValue)
{
    *((M_ACK*)pToValue) = *((M_ACK*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_ACK_Utils = {
    M_ACK_to_string,
    check_M_ACK_string,
    string_to_M_ACK,
    is_M_ACK_double_conversion_allowed,
    M_ACK_to_double,
    is_M_ACK_long_conversion_allowed,
    M_ACK_to_long,
    compare_M_ACK,
    get_M_ACK_signature,
    init_M_ACK,
    release_M_ACK,
    copy_M_ACK,
    sizeof(M_ACK)
};

/****************************************************************
 ** M_AIRTIGHT 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_AIRTIGHTVTable_defined
    extern struct SimTypeVTable *pSimM_AIRTIGHTVTable;
  #else 
    struct SimTypeVTable *pSimM_AIRTIGHTVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_AIRTIGHTVTable;
#endif

static SimEnumValUtils M_AIRTIGHT_values[] = {
    { "M_AIRTIGHT_Not_fitted", M_AIRTIGHT_Not_fitted},
    { "M_AIRTIGHT_Not_fitted", M_AIRTIGHT_Not_fitted},
    { "M_AIRTIGHT_Fitted", M_AIRTIGHT_Fitted},
    { "M_AIRTIGHT_Fitted", M_AIRTIGHT_Fitted},
};
const int M_AIRTIGHT_nb_values = 4;

int M_AIRTIGHT_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_AIRTIGHTVTable != NULL
        && pSimM_AIRTIGHTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_AIRTIGHTVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_AIRTIGHT*)pValue, M_AIRTIGHT_values, M_AIRTIGHT_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_AIRTIGHT_string(const char *str, char **endptr)
{
    static M_AIRTIGHT rTemp;
    return string_to_M_AIRTIGHT(str, (void*)&rTemp, endptr);
}

int string_to_M_AIRTIGHT(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_AIRTIGHTVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_AIRTIGHTVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_AIRTIGHT_values, M_AIRTIGHT_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_AIRTIGHT*)pValue = (M_AIRTIGHT)nTemp;
    }
    return nRet;
}

int is_M_AIRTIGHT_double_conversion_allowed()
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_AIRTIGHTVTable);
    }
    return 1;
}

int M_AIRTIGHT_to_double(const void *pValue, double *nValue)
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return VTable_to_double(pValue, pSimM_AIRTIGHTVTable, nValue);
    }
    *nValue = (double)*((M_AIRTIGHT*)pValue);
    return 1;
}

int is_M_AIRTIGHT_long_conversion_allowed()
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_AIRTIGHTVTable);
    }
    return 1;
}

int M_AIRTIGHT_to_long(const void *pValue, long *nValue)
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return VTable_to_long(pValue, pSimM_AIRTIGHTVTable, nValue);
    }
    *nValue = (long)*((M_AIRTIGHT*)pValue);
    return 1;
}

void compare_M_AIRTIGHT(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_AIRTIGHTVTable != NULL
        && pSimM_AIRTIGHTVTable->m_version >= Scv612
        && pSimM_AIRTIGHTVTable->m_pfnCompare != NULL) {
        if (pSimM_AIRTIGHTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_AIRTIGHTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_AIRTIGHTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_AIRTIGHT*)pValue1), (int)(*(M_AIRTIGHT*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_AIRTIGHT_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_AIRTIGHT_values, M_AIRTIGHT_nb_values, pfnStrAppend, pStrObj);
}

int init_M_AIRTIGHT(void *pValue)
{
    *(M_AIRTIGHT*)pValue = M_AIRTIGHT_Not_fitted;
    return 1;
}

int release_M_AIRTIGHT(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_AIRTIGHT(void *pToValue, const void *pFromValue)
{
    *((M_AIRTIGHT*)pToValue) = *((M_AIRTIGHT*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_AIRTIGHT_Utils = {
    M_AIRTIGHT_to_string,
    check_M_AIRTIGHT_string,
    string_to_M_AIRTIGHT,
    is_M_AIRTIGHT_double_conversion_allowed,
    M_AIRTIGHT_to_double,
    is_M_AIRTIGHT_long_conversion_allowed,
    M_AIRTIGHT_to_long,
    compare_M_AIRTIGHT,
    get_M_AIRTIGHT_signature,
    init_M_AIRTIGHT,
    release_M_AIRTIGHT,
    copy_M_AIRTIGHT,
    sizeof(M_AIRTIGHT)
};

/****************************************************************
 ** M_AXLELOADCAT 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_AXLELOADCATVTable_defined
    extern struct SimTypeVTable *pSimM_AXLELOADCATVTable;
  #else 
    struct SimTypeVTable *pSimM_AXLELOADCATVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_AXLELOADCATVTable;
#endif

static SimEnumValUtils M_AXLELOADCAT_values[] = {
    { "M_AXLELOADCAT_A", M_AXLELOADCAT_A},
    { "M_AXLELOADCAT_A", M_AXLELOADCAT_A},
    { "M_AXLELOADCAT_HS17", M_AXLELOADCAT_HS17},
    { "M_AXLELOADCAT_HS17", M_AXLELOADCAT_HS17},
    { "M_AXLELOADCAT_B1", M_AXLELOADCAT_B1},
    { "M_AXLELOADCAT_B1", M_AXLELOADCAT_B1},
    { "M_AXLELOADCAT_B2", M_AXLELOADCAT_B2},
    { "M_AXLELOADCAT_B2", M_AXLELOADCAT_B2},
    { "M_AXLELOADCAT_C2", M_AXLELOADCAT_C2},
    { "M_AXLELOADCAT_C2", M_AXLELOADCAT_C2},
    { "M_AXLELOADCAT_C3", M_AXLELOADCAT_C3},
    { "M_AXLELOADCAT_C3", M_AXLELOADCAT_C3},
    { "M_AXLELOADCAT_C4", M_AXLELOADCAT_C4},
    { "M_AXLELOADCAT_C4", M_AXLELOADCAT_C4},
    { "M_AXLELOADCAT_D2", M_AXLELOADCAT_D2},
    { "M_AXLELOADCAT_D2", M_AXLELOADCAT_D2},
    { "M_AXLELOADCAT_D3", M_AXLELOADCAT_D3},
    { "M_AXLELOADCAT_D3", M_AXLELOADCAT_D3},
    { "M_AXLELOADCAT_D4", M_AXLELOADCAT_D4},
    { "M_AXLELOADCAT_D4", M_AXLELOADCAT_D4},
    { "M_AXLELOADCAT_D4XL", M_AXLELOADCAT_D4XL},
    { "M_AXLELOADCAT_D4XL", M_AXLELOADCAT_D4XL},
    { "M_AXLELOADCAT_E4", M_AXLELOADCAT_E4},
    { "M_AXLELOADCAT_E4", M_AXLELOADCAT_E4},
    { "M_AXLELOADCAT_E5", M_AXLELOADCAT_E5},
    { "M_AXLELOADCAT_E5", M_AXLELOADCAT_E5},
};
const int M_AXLELOADCAT_nb_values = 26;

int M_AXLELOADCAT_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_AXLELOADCATVTable != NULL
        && pSimM_AXLELOADCATVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_AXLELOADCATVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_AXLELOADCAT*)pValue, M_AXLELOADCAT_values, M_AXLELOADCAT_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_AXLELOADCAT_string(const char *str, char **endptr)
{
    static M_AXLELOADCAT rTemp;
    return string_to_M_AXLELOADCAT(str, (void*)&rTemp, endptr);
}

int string_to_M_AXLELOADCAT(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_AXLELOADCATVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_AXLELOADCATVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_AXLELOADCAT_values, M_AXLELOADCAT_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_AXLELOADCAT*)pValue = (M_AXLELOADCAT)nTemp;
    }
    return nRet;
}

int is_M_AXLELOADCAT_double_conversion_allowed()
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_AXLELOADCATVTable);
    }
    return 1;
}

int M_AXLELOADCAT_to_double(const void *pValue, double *nValue)
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return VTable_to_double(pValue, pSimM_AXLELOADCATVTable, nValue);
    }
    *nValue = (double)*((M_AXLELOADCAT*)pValue);
    return 1;
}

int is_M_AXLELOADCAT_long_conversion_allowed()
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_AXLELOADCATVTable);
    }
    return 1;
}

int M_AXLELOADCAT_to_long(const void *pValue, long *nValue)
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return VTable_to_long(pValue, pSimM_AXLELOADCATVTable, nValue);
    }
    *nValue = (long)*((M_AXLELOADCAT*)pValue);
    return 1;
}

void compare_M_AXLELOADCAT(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_AXLELOADCATVTable != NULL
        && pSimM_AXLELOADCATVTable->m_version >= Scv612
        && pSimM_AXLELOADCATVTable->m_pfnCompare != NULL) {
        if (pSimM_AXLELOADCATVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_AXLELOADCATVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_AXLELOADCATVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_AXLELOADCAT*)pValue1), (int)(*(M_AXLELOADCAT*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_AXLELOADCAT_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_AXLELOADCAT_values, M_AXLELOADCAT_nb_values, pfnStrAppend, pStrObj);
}

int init_M_AXLELOADCAT(void *pValue)
{
    *(M_AXLELOADCAT*)pValue = M_AXLELOADCAT_A;
    return 1;
}

int release_M_AXLELOADCAT(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_AXLELOADCAT(void *pToValue, const void *pFromValue)
{
    *((M_AXLELOADCAT*)pToValue) = *((M_AXLELOADCAT*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_AXLELOADCAT_Utils = {
    M_AXLELOADCAT_to_string,
    check_M_AXLELOADCAT_string,
    string_to_M_AXLELOADCAT,
    is_M_AXLELOADCAT_double_conversion_allowed,
    M_AXLELOADCAT_to_double,
    is_M_AXLELOADCAT_long_conversion_allowed,
    M_AXLELOADCAT_to_long,
    compare_M_AXLELOADCAT,
    get_M_AXLELOADCAT_signature,
    init_M_AXLELOADCAT,
    release_M_AXLELOADCAT,
    copy_M_AXLELOADCAT,
    sizeof(M_AXLELOADCAT)
};

/****************************************************************
 ** M_ERROR 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_ERRORVTable_defined
    extern struct SimTypeVTable *pSimM_ERRORVTable;
  #else 
    struct SimTypeVTable *pSimM_ERRORVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_ERRORVTable;
#endif

static SimEnumValUtils M_ERROR_values[] = {
    { "M_ERROR_Balise_group_linking_consistency_error", M_ERROR_Balise_group_linking_consistency_error},
    { "M_ERROR_Balise_group_linking_consistency_error", M_ERROR_Balise_group_linking_consistency_error},
    { "M_ERROR_Linked_balise_group_message_consistency_erro", M_ERROR_Linked_balise_group_message_consistency_erro},
    { "M_ERROR_Linked_balise_group_message_consistency_erro", M_ERROR_Linked_balise_group_message_consistency_erro},
    { "M_ERROR_Unlinked_balise_group_message_consistency_error", M_ERROR_Unlinked_balise_group_message_consistency_error},
    { "M_ERROR_Unlinked_balise_group_message_consistency_error", M_ERROR_Unlinked_balise_group_message_consistency_error},
    { "M_ERROR_Radio_message_consistency_error", M_ERROR_Radio_message_consistency_error},
    { "M_ERROR_Radio_message_consistency_error", M_ERROR_Radio_message_consistency_error},
    { "M_ERROR_Radio_sequence_error", M_ERROR_Radio_sequence_error},
    { "M_ERROR_Radio_sequence_error", M_ERROR_Radio_sequence_error},
    { "M_ERROR_Radio_safe_radio_connection_error", M_ERROR_Radio_safe_radio_connection_error},
    { "M_ERROR_Radio_safe_radio_connection_error", M_ERROR_Radio_safe_radio_connection_error},
    { "M_ERROR_Safety_critical_failure", M_ERROR_Safety_critical_failure},
    { "M_ERROR_Safety_critical_failure", M_ERROR_Safety_critical_failure},
    { "M_ERROR_Double_linking_error", M_ERROR_Double_linking_error},
    { "M_ERROR_Double_linking_error", M_ERROR_Double_linking_error},
    { "M_ERROR_Double_repositioning_error", M_ERROR_Double_repositioning_error},
    { "M_ERROR_Double_repositioning_error", M_ERROR_Double_repositioning_error},
};
const int M_ERROR_nb_values = 18;

int M_ERROR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_ERRORVTable != NULL
        && pSimM_ERRORVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_ERRORVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_ERROR*)pValue, M_ERROR_values, M_ERROR_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_ERROR_string(const char *str, char **endptr)
{
    static M_ERROR rTemp;
    return string_to_M_ERROR(str, (void*)&rTemp, endptr);
}

int string_to_M_ERROR(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_ERRORVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_ERRORVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_ERROR_values, M_ERROR_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_ERROR*)pValue = (M_ERROR)nTemp;
    }
    return nRet;
}

int is_M_ERROR_double_conversion_allowed()
{
    if (pSimM_ERRORVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_ERRORVTable);
    }
    return 1;
}

int M_ERROR_to_double(const void *pValue, double *nValue)
{
    if (pSimM_ERRORVTable != NULL) {
        return VTable_to_double(pValue, pSimM_ERRORVTable, nValue);
    }
    *nValue = (double)*((M_ERROR*)pValue);
    return 1;
}

int is_M_ERROR_long_conversion_allowed()
{
    if (pSimM_ERRORVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_ERRORVTable);
    }
    return 1;
}

int M_ERROR_to_long(const void *pValue, long *nValue)
{
    if (pSimM_ERRORVTable != NULL) {
        return VTable_to_long(pValue, pSimM_ERRORVTable, nValue);
    }
    *nValue = (long)*((M_ERROR*)pValue);
    return 1;
}

void compare_M_ERROR(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_ERRORVTable != NULL
        && pSimM_ERRORVTable->m_version >= Scv612
        && pSimM_ERRORVTable->m_pfnCompare != NULL) {
        if (pSimM_ERRORVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_ERRORVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_ERRORVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_ERROR*)pValue1), (int)(*(M_ERROR*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_ERROR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_ERROR_values, M_ERROR_nb_values, pfnStrAppend, pStrObj);
}

int init_M_ERROR(void *pValue)
{
    *(M_ERROR*)pValue = M_ERROR_Balise_group_linking_consistency_error;
    return 1;
}

int release_M_ERROR(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_ERROR(void *pToValue, const void *pFromValue)
{
    *((M_ERROR*)pToValue) = *((M_ERROR*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_ERROR_Utils = {
    M_ERROR_to_string,
    check_M_ERROR_string,
    string_to_M_ERROR,
    is_M_ERROR_double_conversion_allowed,
    M_ERROR_to_double,
    is_M_ERROR_long_conversion_allowed,
    M_ERROR_to_long,
    compare_M_ERROR,
    get_M_ERROR_signature,
    init_M_ERROR,
    release_M_ERROR,
    copy_M_ERROR,
    sizeof(M_ERROR)
};

/****************************************************************
 ** M_LEVEL 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_LEVELVTable_defined
    extern struct SimTypeVTable *pSimM_LEVELVTable;
  #else 
    struct SimTypeVTable *pSimM_LEVELVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_LEVELVTable;
#endif

static SimEnumValUtils M_LEVEL_values[] = {
    { "M_LEVEL_Level_0", M_LEVEL_Level_0},
    { "M_LEVEL_Level_0", M_LEVEL_Level_0},
    { "M_LEVEL_Level_NTC_specified_by_NID_NTC", M_LEVEL_Level_NTC_specified_by_NID_NTC},
    { "M_LEVEL_Level_NTC_specified_by_NID_NTC", M_LEVEL_Level_NTC_specified_by_NID_NTC},
    { "M_LEVEL_Level_1", M_LEVEL_Level_1},
    { "M_LEVEL_Level_1", M_LEVEL_Level_1},
    { "M_LEVEL_Level_2", M_LEVEL_Level_2},
    { "M_LEVEL_Level_2", M_LEVEL_Level_2},
    { "M_LEVEL_Level_3", M_LEVEL_Level_3},
    { "M_LEVEL_Level_3", M_LEVEL_Level_3},
};
const int M_LEVEL_nb_values = 10;

int M_LEVEL_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_LEVELVTable != NULL
        && pSimM_LEVELVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LEVELVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_LEVEL*)pValue, M_LEVEL_values, M_LEVEL_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_LEVEL_string(const char *str, char **endptr)
{
    static M_LEVEL rTemp;
    return string_to_M_LEVEL(str, (void*)&rTemp, endptr);
}

int string_to_M_LEVEL(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_LEVELVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_LEVELVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LEVEL_values, M_LEVEL_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LEVEL*)pValue = (M_LEVEL)nTemp;
    }
    return nRet;
}

int is_M_LEVEL_double_conversion_allowed()
{
    if (pSimM_LEVELVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_LEVELVTable);
    }
    return 1;
}

int M_LEVEL_to_double(const void *pValue, double *nValue)
{
    if (pSimM_LEVELVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LEVELVTable, nValue);
    }
    *nValue = (double)*((M_LEVEL*)pValue);
    return 1;
}

int is_M_LEVEL_long_conversion_allowed()
{
    if (pSimM_LEVELVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_LEVELVTable);
    }
    return 1;
}

int M_LEVEL_to_long(const void *pValue, long *nValue)
{
    if (pSimM_LEVELVTable != NULL) {
        return VTable_to_long(pValue, pSimM_LEVELVTable, nValue);
    }
    *nValue = (long)*((M_LEVEL*)pValue);
    return 1;
}

void compare_M_LEVEL(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_LEVELVTable != NULL
        && pSimM_LEVELVTable->m_version >= Scv612
        && pSimM_LEVELVTable->m_pfnCompare != NULL) {
        if (pSimM_LEVELVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_LEVELVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_LEVELVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LEVEL*)pValue1), (int)(*(M_LEVEL*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_LEVEL_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_LEVEL_values, M_LEVEL_nb_values, pfnStrAppend, pStrObj);
}

int init_M_LEVEL(void *pValue)
{
    *(M_LEVEL*)pValue = M_LEVEL_Level_0;
    return 1;
}

int release_M_LEVEL(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_LEVEL(void *pToValue, const void *pFromValue)
{
    *((M_LEVEL*)pToValue) = *((M_LEVEL*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_LEVEL_Utils = {
    M_LEVEL_to_string,
    check_M_LEVEL_string,
    string_to_M_LEVEL,
    is_M_LEVEL_double_conversion_allowed,
    M_LEVEL_to_double,
    is_M_LEVEL_long_conversion_allowed,
    M_LEVEL_to_long,
    compare_M_LEVEL,
    get_M_LEVEL_signature,
    init_M_LEVEL,
    release_M_LEVEL,
    copy_M_LEVEL,
    sizeof(M_LEVEL)
};

/****************************************************************
 ** M_LOADINGGAUGE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_LOADINGGAUGEVTable_defined
    extern struct SimTypeVTable *pSimM_LOADINGGAUGEVTable;
  #else 
    struct SimTypeVTable *pSimM_LOADINGGAUGEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_LOADINGGAUGEVTable;
#endif

static SimEnumValUtils M_LOADINGGAUGE_values[] = {
    { "M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles", M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles},
    { "M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles", M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles},
    { "M_LOADINGGAUGE_G1", M_LOADINGGAUGE_G1},
    { "M_LOADINGGAUGE_G1", M_LOADINGGAUGE_G1},
    { "M_LOADINGGAUGE_GA", M_LOADINGGAUGE_GA},
    { "M_LOADINGGAUGE_GA", M_LOADINGGAUGE_GA},
    { "M_LOADINGGAUGE_GB", M_LOADINGGAUGE_GB},
    { "M_LOADINGGAUGE_GB", M_LOADINGGAUGE_GB},
    { "M_LOADINGGAUGE_GC", M_LOADINGGAUGE_GC},
    { "M_LOADINGGAUGE_GC", M_LOADINGGAUGE_GC},
};
const int M_LOADINGGAUGE_nb_values = 10;

int M_LOADINGGAUGE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_LOADINGGAUGEVTable != NULL
        && pSimM_LOADINGGAUGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LOADINGGAUGEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_LOADINGGAUGE*)pValue, M_LOADINGGAUGE_values, M_LOADINGGAUGE_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_LOADINGGAUGE_string(const char *str, char **endptr)
{
    static M_LOADINGGAUGE rTemp;
    return string_to_M_LOADINGGAUGE(str, (void*)&rTemp, endptr);
}

int string_to_M_LOADINGGAUGE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_LOADINGGAUGEVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LOADINGGAUGE_values, M_LOADINGGAUGE_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LOADINGGAUGE*)pValue = (M_LOADINGGAUGE)nTemp;
    }
    return nRet;
}

int is_M_LOADINGGAUGE_double_conversion_allowed()
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_LOADINGGAUGEVTable);
    }
    return 1;
}

int M_LOADINGGAUGE_to_double(const void *pValue, double *nValue)
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LOADINGGAUGEVTable, nValue);
    }
    *nValue = (double)*((M_LOADINGGAUGE*)pValue);
    return 1;
}

int is_M_LOADINGGAUGE_long_conversion_allowed()
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_LOADINGGAUGEVTable);
    }
    return 1;
}

int M_LOADINGGAUGE_to_long(const void *pValue, long *nValue)
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return VTable_to_long(pValue, pSimM_LOADINGGAUGEVTable, nValue);
    }
    *nValue = (long)*((M_LOADINGGAUGE*)pValue);
    return 1;
}

void compare_M_LOADINGGAUGE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_LOADINGGAUGEVTable != NULL
        && pSimM_LOADINGGAUGEVTable->m_version >= Scv612
        && pSimM_LOADINGGAUGEVTable->m_pfnCompare != NULL) {
        if (pSimM_LOADINGGAUGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_LOADINGGAUGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_LOADINGGAUGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LOADINGGAUGE*)pValue1), (int)(*(M_LOADINGGAUGE*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_LOADINGGAUGE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_LOADINGGAUGE_values, M_LOADINGGAUGE_nb_values, pfnStrAppend, pStrObj);
}

int init_M_LOADINGGAUGE(void *pValue)
{
    *(M_LOADINGGAUGE*)pValue = M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
    return 1;
}

int release_M_LOADINGGAUGE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_LOADINGGAUGE(void *pToValue, const void *pFromValue)
{
    *((M_LOADINGGAUGE*)pToValue) = *((M_LOADINGGAUGE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_LOADINGGAUGE_Utils = {
    M_LOADINGGAUGE_to_string,
    check_M_LOADINGGAUGE_string,
    string_to_M_LOADINGGAUGE,
    is_M_LOADINGGAUGE_double_conversion_allowed,
    M_LOADINGGAUGE_to_double,
    is_M_LOADINGGAUGE_long_conversion_allowed,
    M_LOADINGGAUGE_to_long,
    compare_M_LOADINGGAUGE,
    get_M_LOADINGGAUGE_signature,
    init_M_LOADINGGAUGE,
    release_M_LOADINGGAUGE,
    copy_M_LOADINGGAUGE,
    sizeof(M_LOADINGGAUGE)
};

/****************************************************************
 ** M_MCOUNT 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_MCOUNTVTable_defined
    extern struct SimTypeVTable *pSimM_MCOUNTVTable;
  #else 
    struct SimTypeVTable *pSimM_MCOUNTVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_MCOUNTVTable;
#endif

int M_MCOUNT_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_MCOUNTVTable != NULL
        && pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MCOUNTVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_M_MCOUNT_string(const char *str, char **endptr)
{
    static M_MCOUNT rTemp;
    return string_to_M_MCOUNT(str, (void*)&rTemp, endptr);
}

int string_to_M_MCOUNT(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_MCOUNTVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_MCOUNTVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_M_MCOUNT_double_conversion_allowed()
{
    if (pSimM_MCOUNTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_MCOUNTVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int M_MCOUNT_to_double(const void *pValue, double *nValue)
{
    if (pSimM_MCOUNTVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MCOUNTVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_M_MCOUNT_long_conversion_allowed()
{
    if (pSimM_MCOUNTVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_MCOUNTVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int M_MCOUNT_to_long(const void *pValue, long *nValue)
{
    if (pSimM_MCOUNTVTable != NULL) {
        return VTable_to_long(pValue, pSimM_MCOUNTVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_M_MCOUNT(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimM_MCOUNTVTable != NULL
        && pSimM_MCOUNTVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimM_MCOUNTVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimM_MCOUNTVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimM_MCOUNTVTable->m_version >= Scv612
               && pSimM_MCOUNTVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimM_MCOUNTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_MCOUNTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_MCOUNTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_MCOUNT_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_M_MCOUNT(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_M_MCOUNT(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_MCOUNT(void *pToValue, const void *pFromValue)
{
    *((M_MCOUNT*)pToValue) = *((M_MCOUNT*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_MCOUNT_Utils = {
    M_MCOUNT_to_string,
    check_M_MCOUNT_string,
    string_to_M_MCOUNT,
    is_M_MCOUNT_double_conversion_allowed,
    M_MCOUNT_to_double,
    is_M_MCOUNT_long_conversion_allowed,
    M_MCOUNT_to_long,
    compare_M_MCOUNT,
    get_M_MCOUNT_signature,
    init_M_MCOUNT,
    release_M_MCOUNT,
    copy_M_MCOUNT,
    sizeof(M_MCOUNT)
};

/****************************************************************
 ** M_MODE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_MODEVTable_defined
    extern struct SimTypeVTable *pSimM_MODEVTable;
  #else 
    struct SimTypeVTable *pSimM_MODEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_MODEVTable;
#endif

static SimEnumValUtils M_MODE_values[] = {
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
    { "M_MODE_No_Power", M_MODE_No_Power},
    { "M_MODE_No_Power", M_MODE_No_Power},
};
const int M_MODE_nb_values = 34;

int M_MODE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MODEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_MODE*)pValue, M_MODE_values, M_MODE_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_MODE_string(const char *str, char **endptr)
{
    static M_MODE rTemp;
    return string_to_M_MODE(str, (void*)&rTemp, endptr);
}

int string_to_M_MODE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_MODEVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_MODEVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_MODE_values, M_MODE_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_MODE*)pValue = (M_MODE)nTemp;
    }
    return nRet;
}

int is_M_MODE_double_conversion_allowed()
{
    if (pSimM_MODEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_MODEVTable);
    }
    return 1;
}

int M_MODE_to_double(const void *pValue, double *nValue)
{
    if (pSimM_MODEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MODEVTable, nValue);
    }
    *nValue = (double)*((M_MODE*)pValue);
    return 1;
}

int is_M_MODE_long_conversion_allowed()
{
    if (pSimM_MODEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_MODEVTable);
    }
    return 1;
}

int M_MODE_to_long(const void *pValue, long *nValue)
{
    if (pSimM_MODEVTable != NULL) {
        return VTable_to_long(pValue, pSimM_MODEVTable, nValue);
    }
    *nValue = (long)*((M_MODE*)pValue);
    return 1;
}

void compare_M_MODE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_version >= Scv612
        && pSimM_MODEVTable->m_pfnCompare != NULL) {
        if (pSimM_MODEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_MODEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_MODEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_MODE*)pValue1), (int)(*(M_MODE*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_MODE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_MODE_values, M_MODE_nb_values, pfnStrAppend, pStrObj);
}

int init_M_MODE(void *pValue)
{
    *(M_MODE*)pValue = M_MODE_Full_Supervision;
    return 1;
}

int release_M_MODE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_MODE(void *pToValue, const void *pFromValue)
{
    *((M_MODE*)pToValue) = *((M_MODE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_MODE_Utils = {
    M_MODE_to_string,
    check_M_MODE_string,
    string_to_M_MODE,
    is_M_MODE_double_conversion_allowed,
    M_MODE_to_double,
    is_M_MODE_long_conversion_allowed,
    M_MODE_to_long,
    compare_M_MODE,
    get_M_MODE_signature,
    init_M_MODE,
    release_M_MODE,
    copy_M_MODE,
    sizeof(M_MODE)
};

/****************************************************************
 ** M_VERSION 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_VERSIONVTable_defined
    extern struct SimTypeVTable *pSimM_VERSIONVTable;
  #else 
    struct SimTypeVTable *pSimM_VERSIONVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_VERSIONVTable;
#endif

static SimEnumValUtils M_VERSION_values[] = {
    { "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS", M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS},
    { "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS", M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS},
    { "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0", M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0},
    { "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0", M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0},
    { "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0", M_VERSION_Version_1_1_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0", M_VERSION_Version_1_1_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0", M_VERSION_Version_2_0_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0", M_VERSION_Version_2_0_introduced_in_SRS_3_3_0},
};
const int M_VERSION_nb_values = 8;

int M_VERSION_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_VERSIONVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_VERSION*)pValue, M_VERSION_values, M_VERSION_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_VERSION_string(const char *str, char **endptr)
{
    static M_VERSION rTemp;
    return string_to_M_VERSION(str, (void*)&rTemp, endptr);
}

int string_to_M_VERSION(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_VERSIONVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_VERSIONVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_VERSION_values, M_VERSION_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_VERSION*)pValue = (M_VERSION)nTemp;
    }
    return nRet;
}

int is_M_VERSION_double_conversion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_VERSIONVTable);
    }
    return 1;
}

int M_VERSION_to_double(const void *pValue, double *nValue)
{
    if (pSimM_VERSIONVTable != NULL) {
        return VTable_to_double(pValue, pSimM_VERSIONVTable, nValue);
    }
    *nValue = (double)*((M_VERSION*)pValue);
    return 1;
}

int is_M_VERSION_long_conversion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_VERSIONVTable);
    }
    return 1;
}

int M_VERSION_to_long(const void *pValue, long *nValue)
{
    if (pSimM_VERSIONVTable != NULL) {
        return VTable_to_long(pValue, pSimM_VERSIONVTable, nValue);
    }
    *nValue = (long)*((M_VERSION*)pValue);
    return 1;
}

void compare_M_VERSION(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_version >= Scv612
        && pSimM_VERSIONVTable->m_pfnCompare != NULL) {
        if (pSimM_VERSIONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_VERSIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_VERSIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_VERSION*)pValue1), (int)(*(M_VERSION*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_VERSION_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_VERSION_values, M_VERSION_nb_values, pfnStrAppend, pStrObj);
}

int init_M_VERSION(void *pValue)
{
    *(M_VERSION*)pValue = M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    return 1;
}

int release_M_VERSION(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_VERSION(void *pToValue, const void *pFromValue)
{
    *((M_VERSION*)pToValue) = *((M_VERSION*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_VERSION_Utils = {
    M_VERSION_to_string,
    check_M_VERSION_string,
    string_to_M_VERSION,
    is_M_VERSION_double_conversion_allowed,
    M_VERSION_to_double,
    is_M_VERSION_long_conversion_allowed,
    M_VERSION_to_long,
    compare_M_VERSION,
    get_M_VERSION_signature,
    init_M_VERSION,
    release_M_VERSION,
    copy_M_VERSION,
    sizeof(M_VERSION)
};

/****************************************************************
 ** M_VOLTAGE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimM_VOLTAGEVTable_defined
    extern struct SimTypeVTable *pSimM_VOLTAGEVTable;
  #else 
    struct SimTypeVTable *pSimM_VOLTAGEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimM_VOLTAGEVTable;
#endif

static SimEnumValUtils M_VOLTAGE_values[] = {
    { "M_VOLTAGE_Line_not_fitted_with_any_traction_system", M_VOLTAGE_Line_not_fitted_with_any_traction_system},
    { "M_VOLTAGE_Line_not_fitted_with_any_traction_system", M_VOLTAGE_Line_not_fitted_with_any_traction_system},
    { "M_VOLTAGE_AC_25_kV_50_Hz", M_VOLTAGE_AC_25_kV_50_Hz},
    { "M_VOLTAGE_AC_25_kV_50_Hz", M_VOLTAGE_AC_25_kV_50_Hz},
    { "M_VOLTAGE_AC_15_kV_16_7_Hz", M_VOLTAGE_AC_15_kV_16_7_Hz},
    { "M_VOLTAGE_AC_15_kV_16_7_Hz", M_VOLTAGE_AC_15_kV_16_7_Hz},
    { "M_VOLTAGE_DC_3_kV", M_VOLTAGE_DC_3_kV},
    { "M_VOLTAGE_DC_3_kV", M_VOLTAGE_DC_3_kV},
    { "M_VOLTAGE_DC_1_5_kV", M_VOLTAGE_DC_1_5_kV},
    { "M_VOLTAGE_DC_1_5_kV", M_VOLTAGE_DC_1_5_kV},
    { "M_VOLTAGE_DC_600_or_750_V", M_VOLTAGE_DC_600_or_750_V},
    { "M_VOLTAGE_DC_600_or_750_V", M_VOLTAGE_DC_600_or_750_V},
};
const int M_VOLTAGE_nb_values = 12;

int M_VOLTAGE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimM_VOLTAGEVTable != NULL
        && pSimM_VOLTAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_VOLTAGEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(M_VOLTAGE*)pValue, M_VOLTAGE_values, M_VOLTAGE_nb_values, pfnStrAppend, pStrObj); 
}

int check_M_VOLTAGE_string(const char *str, char **endptr)
{
    static M_VOLTAGE rTemp;
    return string_to_M_VOLTAGE(str, (void*)&rTemp, endptr);
}

int string_to_M_VOLTAGE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimM_VOLTAGEVTable != NULL) {
        nRet = string_to_VTable(str, pSimM_VOLTAGEVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_VOLTAGE_values, M_VOLTAGE_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_VOLTAGE*)pValue = (M_VOLTAGE)nTemp;
    }
    return nRet;
}

int is_M_VOLTAGE_double_conversion_allowed()
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_VOLTAGEVTable);
    }
    return 1;
}

int M_VOLTAGE_to_double(const void *pValue, double *nValue)
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_VOLTAGEVTable, nValue);
    }
    *nValue = (double)*((M_VOLTAGE*)pValue);
    return 1;
}

int is_M_VOLTAGE_long_conversion_allowed()
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimM_VOLTAGEVTable);
    }
    return 1;
}

int M_VOLTAGE_to_long(const void *pValue, long *nValue)
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimM_VOLTAGEVTable, nValue);
    }
    *nValue = (long)*((M_VOLTAGE*)pValue);
    return 1;
}

void compare_M_VOLTAGE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimM_VOLTAGEVTable != NULL
        && pSimM_VOLTAGEVTable->m_version >= Scv612
        && pSimM_VOLTAGEVTable->m_pfnCompare != NULL) {
        if (pSimM_VOLTAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimM_VOLTAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimM_VOLTAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_VOLTAGE*)pValue1), (int)(*(M_VOLTAGE*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_M_VOLTAGE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(M_VOLTAGE_values, M_VOLTAGE_nb_values, pfnStrAppend, pStrObj);
}

int init_M_VOLTAGE(void *pValue)
{
    *(M_VOLTAGE*)pValue = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    return 1;
}

int release_M_VOLTAGE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_M_VOLTAGE(void *pToValue, const void *pFromValue)
{
    *((M_VOLTAGE*)pToValue) = *((M_VOLTAGE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_M_VOLTAGE_Utils = {
    M_VOLTAGE_to_string,
    check_M_VOLTAGE_string,
    string_to_M_VOLTAGE,
    is_M_VOLTAGE_double_conversion_allowed,
    M_VOLTAGE_to_double,
    is_M_VOLTAGE_long_conversion_allowed,
    M_VOLTAGE_to_long,
    compare_M_VOLTAGE,
    get_M_VOLTAGE_signature,
    init_M_VOLTAGE,
    release_M_VOLTAGE,
    copy_M_VOLTAGE,
    sizeof(M_VOLTAGE)
};

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimMetadata_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimMetadata_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimMetadata_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimMetadata_T_Common_Types_PkgVTable;
#endif

int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, MetadataElement_T_Common_Types_Pkg_to_string, 30, sizeof(MetadataElement_T_Common_Types_Pkg), pfnStrAppend, pStrObj);
}

int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static Metadata_T_Common_Types_Pkg rTemp;
    return string_to_Metadata_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, 30, sizeof(MetadataElement_T_Common_Types_Pkg), endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_Metadata_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_Metadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_MetadataElement_T_Common_Types_Pkg, 30, sizeof(MetadataElement_T_Common_Types_Pkg), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Metadata_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_MetadataElement_T_Common_Types_Pkg_signature, 30, pfnStrAppend, pStrObj); 
}

int init_Metadata_T_Common_Types_Pkg(void *pValue)
{
    size_t i;
    for (i = 0; i < 30; i++)
        init_MetadataElement_T_Common_Types_Pkg(&((MetadataElement_T_Common_Types_Pkg*)pValue)[i]);
    return 1;
}

int release_Metadata_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Metadata_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_Metadata_T_Common_Types_Pkg((Metadata_T_Common_Types_Pkg*)pToValue, (Metadata_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils = {
    Metadata_T_Common_Types_Pkg_to_string,
    check_Metadata_T_Common_Types_Pkg_string,
    string_to_Metadata_T_Common_Types_Pkg,
    is_Metadata_T_Common_Types_Pkg_double_conversion_allowed,
    Metadata_T_Common_Types_Pkg_to_double,
    is_Metadata_T_Common_Types_Pkg_long_conversion_allowed,
    Metadata_T_Common_Types_Pkg_to_long,
    compare_Metadata_T_Common_Types_Pkg,
    get_Metadata_T_Common_Types_Pkg_signature,
    init_Metadata_T_Common_Types_Pkg,
    release_Metadata_T_Common_Types_Pkg,
    copy_Metadata_T_Common_Types_Pkg,
    sizeof(Metadata_T_Common_Types_Pkg)
};

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimMetadataElement_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable;
#endif

static SimConstValUtils const MetadataElement_T_Common_Types_Pkg_constants[] = {
    { "TM::DEFAULT_PHeader", &TU_DEFAULT_PHeader_TM },
    { "DEFAULT_PHeader", &TU_DEFAULT_PHeader_TM },
};

static SimFieldUtils MetadataElement_T_Common_Types_Pkg_fields[] = {
    {"nid_packet", offsetof(MetadataElement_T_Common_Types_Pkg,nid_packet), &_Type_NID_PACKET_Utils},
    {"q_dir", offsetof(MetadataElement_T_Common_Types_Pkg,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(MetadataElement_T_Common_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(MetadataElement_T_Common_Types_Pkg,startAddress), &_Type_kcg_int32_Utils},
    {"endAddress", offsetof(MetadataElement_T_Common_Types_Pkg,endAddress), &_Type_kcg_int32_Utils},
};

int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, MetadataElement_T_Common_Types_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static MetadataElement_T_Common_Types_Pkg rTemp;
    return string_to_MetadataElement_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, MetadataElement_T_Common_Types_Pkg_constants, sizeof(MetadataElement_T_Common_Types_Pkg_constants) / sizeof(MetadataElement_T_Common_Types_Pkg_constants[0]), sizeof(MetadataElement_T_Common_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, MetadataElement_T_Common_Types_Pkg_fields, 5, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return 0;
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_MetadataElement_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return 0;
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_MetadataElement_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, MetadataElement_T_Common_Types_Pkg_fields, 5, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(MetadataElement_T_Common_Types_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int init_MetadataElement_T_Common_Types_Pkg(void *pValue)
{
    init_NID_PACKET(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->nid_packet));
    init_Q_DIR(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->q_dir));
    init_kcg_bool(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->valid));
    init_kcg_int32(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->startAddress));
    init_kcg_int32(&(((MetadataElement_T_Common_Types_Pkg*)pValue)->endAddress));
    return 1;
}

int release_MetadataElement_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_MetadataElement_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_MetadataElement_T_Common_Types_Pkg((MetadataElement_T_Common_Types_Pkg*)pToValue, (MetadataElement_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils = {
    MetadataElement_T_Common_Types_Pkg_to_string,
    check_MetadataElement_T_Common_Types_Pkg_string,
    string_to_MetadataElement_T_Common_Types_Pkg,
    is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_double,
    is_MetadataElement_T_Common_Types_Pkg_long_conversion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_long,
    compare_MetadataElement_T_Common_Types_Pkg,
    get_MetadataElement_T_Common_Types_Pkg_signature,
    init_MetadataElement_T_Common_Types_Pkg,
    release_MetadataElement_T_Common_Types_Pkg,
    copy_MetadataElement_T_Common_Types_Pkg,
    sizeof(MetadataElement_T_Common_Types_Pkg)
};

/****************************************************************
 ** mobileConnectionCmd_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileConnectionCmd_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileConnectionCmd_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileConnectionCmd_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileConnectionCmd_T_RCM_Types_PkgVTable;
#endif

static SimFieldUtils mobileConnectionCmd_T_RCM_Types_Pkg_fields[] = {
    {"valid", offsetof(mobileConnectionCmd_T_RCM_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"mobileDeviceNo", offsetof(mobileConnectionCmd_T_RCM_Types_Pkg,mobileDeviceNo), &_Type_kcg_int32_Utils},
    {"action", offsetof(mobileConnectionCmd_T_RCM_Types_Pkg,action), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils},
    {"nid_radio", offsetof(mobileConnectionCmd_T_RCM_Types_Pkg,nid_radio), &_Type_NID_RADIO_Utils},
};

int mobileConnectionCmd_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnectionCmd_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileConnectionCmd_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, mobileConnectionCmd_T_RCM_Types_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int check_mobileConnectionCmd_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileConnectionCmd_T_RCM_Types_Pkg rTemp;
    return string_to_mobileConnectionCmd_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileConnectionCmd_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileConnectionCmd_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, mobileConnectionCmd_T_RCM_Types_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_mobileConnectionCmd_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileConnectionCmd_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileConnectionCmd_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileConnectionCmd_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_mobileConnectionCmd_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileConnectionCmd_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileConnectionCmd_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileConnectionCmd_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_mobileConnectionCmd_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnectionCmd_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileConnectionCmd_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileConnectionCmd_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileConnectionCmd_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileConnectionCmd_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, mobileConnectionCmd_T_RCM_Types_Pkg_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileConnectionCmd_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(mobileConnectionCmd_T_RCM_Types_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int init_mobileConnectionCmd_T_RCM_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((mobileConnectionCmd_T_RCM_Types_Pkg*)pValue)->valid));
    init_kcg_int32(&(((mobileConnectionCmd_T_RCM_Types_Pkg*)pValue)->mobileDeviceNo));
    init_mobileConnetionAction_T_RCM_Types_Pkg(&(((mobileConnectionCmd_T_RCM_Types_Pkg*)pValue)->action));
    init_NID_RADIO(&(((mobileConnectionCmd_T_RCM_Types_Pkg*)pValue)->nid_radio));
    return 1;
}

int release_mobileConnectionCmd_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileConnectionCmd_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg((mobileConnectionCmd_T_RCM_Types_Pkg*)pToValue, (mobileConnectionCmd_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils = {
    mobileConnectionCmd_T_RCM_Types_Pkg_to_string,
    check_mobileConnectionCmd_T_RCM_Types_Pkg_string,
    string_to_mobileConnectionCmd_T_RCM_Types_Pkg,
    is_mobileConnectionCmd_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileConnectionCmd_T_RCM_Types_Pkg_to_double,
    is_mobileConnectionCmd_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileConnectionCmd_T_RCM_Types_Pkg_to_long,
    compare_mobileConnectionCmd_T_RCM_Types_Pkg,
    get_mobileConnectionCmd_T_RCM_Types_Pkg_signature,
    init_mobileConnectionCmd_T_RCM_Types_Pkg,
    release_mobileConnectionCmd_T_RCM_Types_Pkg,
    copy_mobileConnectionCmd_T_RCM_Types_Pkg,
    sizeof(mobileConnectionCmd_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileConnectionContext_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileConnectionContext_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileConnectionContext_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileConnectionContext_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileConnectionContext_T_RCM_Types_PkgVTable;
#endif

static SimConstValUtils const mobileConnectionContext_T_RCM_Types_Pkg_constants[] = {
    { "RCM_Types_Pkg::cNoConnectionContext", &TU_cNoConnectionContext_RCM_Types_Pkg },
    { "cNoConnectionContext", &TU_cNoConnectionContext_RCM_Types_Pkg },
};

static SimFieldUtils mobileConnectionContext_T_RCM_Types_Pkg_fields[] = {
    {"valid", offsetof(mobileConnectionContext_T_RCM_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"mobileDeviceNo", offsetof(mobileConnectionContext_T_RCM_Types_Pkg,mobileDeviceNo), &_Type_kcg_int32_Utils},
    {"status", offsetof(mobileConnectionContext_T_RCM_Types_Pkg,status), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils},
    {"nid_radio", offsetof(mobileConnectionContext_T_RCM_Types_Pkg,nid_radio), &_Type_NID_RADIO_Utils},
    {"settingUpConnectionHasFailed", offsetof(mobileConnectionContext_T_RCM_Types_Pkg,settingUpConnectionHasFailed), &_Type_kcg_bool_Utils},
    {"connectionLost", offsetof(mobileConnectionContext_T_RCM_Types_Pkg,connectionLost), &_Type_kcg_bool_Utils},
    {"isInRadioHole", offsetof(mobileConnectionContext_T_RCM_Types_Pkg,isInRadioHole), &_Type_kcg_bool_Utils},
};

int mobileConnectionContext_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnectionContext_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileConnectionContext_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, mobileConnectionContext_T_RCM_Types_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int check_mobileConnectionContext_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileConnectionContext_T_RCM_Types_Pkg rTemp;
    return string_to_mobileConnectionContext_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileConnectionContext_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileConnectionContext_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, mobileConnectionContext_T_RCM_Types_Pkg_constants, sizeof(mobileConnectionContext_T_RCM_Types_Pkg_constants) / sizeof(mobileConnectionContext_T_RCM_Types_Pkg_constants[0]), sizeof(mobileConnectionContext_T_RCM_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, mobileConnectionContext_T_RCM_Types_Pkg_fields, 7, endptr);
    }
    return nRet;
}

int is_mobileConnectionContext_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileConnectionContext_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileConnectionContext_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileConnectionContext_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_mobileConnectionContext_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileConnectionContext_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileConnectionContext_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileConnectionContext_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_mobileConnectionContext_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnectionContext_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileConnectionContext_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileConnectionContext_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileConnectionContext_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileConnectionContext_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, mobileConnectionContext_T_RCM_Types_Pkg_fields, 7, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileConnectionContext_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(mobileConnectionContext_T_RCM_Types_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int init_mobileConnectionContext_T_RCM_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((mobileConnectionContext_T_RCM_Types_Pkg*)pValue)->valid));
    init_kcg_int32(&(((mobileConnectionContext_T_RCM_Types_Pkg*)pValue)->mobileDeviceNo));
    init_mobileConnectionStatus_T_RCM_Types_Pkg(&(((mobileConnectionContext_T_RCM_Types_Pkg*)pValue)->status));
    init_NID_RADIO(&(((mobileConnectionContext_T_RCM_Types_Pkg*)pValue)->nid_radio));
    init_kcg_bool(&(((mobileConnectionContext_T_RCM_Types_Pkg*)pValue)->settingUpConnectionHasFailed));
    init_kcg_bool(&(((mobileConnectionContext_T_RCM_Types_Pkg*)pValue)->connectionLost));
    init_kcg_bool(&(((mobileConnectionContext_T_RCM_Types_Pkg*)pValue)->isInRadioHole));
    return 1;
}

int release_mobileConnectionContext_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileConnectionContext_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg((mobileConnectionContext_T_RCM_Types_Pkg*)pToValue, (mobileConnectionContext_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils = {
    mobileConnectionContext_T_RCM_Types_Pkg_to_string,
    check_mobileConnectionContext_T_RCM_Types_Pkg_string,
    string_to_mobileConnectionContext_T_RCM_Types_Pkg,
    is_mobileConnectionContext_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileConnectionContext_T_RCM_Types_Pkg_to_double,
    is_mobileConnectionContext_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileConnectionContext_T_RCM_Types_Pkg_to_long,
    compare_mobileConnectionContext_T_RCM_Types_Pkg,
    get_mobileConnectionContext_T_RCM_Types_Pkg_signature,
    init_mobileConnectionContext_T_RCM_Types_Pkg,
    release_mobileConnectionContext_T_RCM_Types_Pkg,
    copy_mobileConnectionContext_T_RCM_Types_Pkg,
    sizeof(mobileConnectionContext_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileConnectionStatus_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileConnectionStatus_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileConnectionStatus_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileConnectionStatus_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileConnectionStatus_T_RCM_Types_PkgVTable;
#endif

static SimEnumValUtils mobileConnectionStatus_T_RCM_Types_Pkg_values[] = {
    { "RCM_Types_Pkg::mcs_disconnected", mcs_disconnected_RCM_Types_Pkg},
    { "mcs_disconnected", mcs_disconnected_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mcs_connecting", mcs_connecting_RCM_Types_Pkg},
    { "mcs_connecting", mcs_connecting_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mcs_connected", mcs_connected_RCM_Types_Pkg},
    { "mcs_connected", mcs_connected_RCM_Types_Pkg},
};
const int mobileConnectionStatus_T_RCM_Types_Pkg_nb_values = 6;

int mobileConnectionStatus_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnectionStatus_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileConnectionStatus_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(mobileConnectionStatus_T_RCM_Types_Pkg*)pValue, mobileConnectionStatus_T_RCM_Types_Pkg_values, mobileConnectionStatus_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_mobileConnectionStatus_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileConnectionStatus_T_RCM_Types_Pkg rTemp;
    return string_to_mobileConnectionStatus_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileConnectionStatus_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileConnectionStatus_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, mobileConnectionStatus_T_RCM_Types_Pkg_values, mobileConnectionStatus_T_RCM_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(mobileConnectionStatus_T_RCM_Types_Pkg*)pValue = (mobileConnectionStatus_T_RCM_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_mobileConnectionStatus_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileConnectionStatus_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileConnectionStatus_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileConnectionStatus_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((mobileConnectionStatus_T_RCM_Types_Pkg*)pValue);
    return 1;
}

int is_mobileConnectionStatus_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileConnectionStatus_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileConnectionStatus_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileConnectionStatus_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((mobileConnectionStatus_T_RCM_Types_Pkg*)pValue);
    return 1;
}

void compare_mobileConnectionStatus_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnectionStatus_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileConnectionStatus_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileConnectionStatus_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileConnectionStatus_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileConnectionStatus_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(mobileConnectionStatus_T_RCM_Types_Pkg*)pValue1), (int)(*(mobileConnectionStatus_T_RCM_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileConnectionStatus_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(mobileConnectionStatus_T_RCM_Types_Pkg_values, mobileConnectionStatus_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_mobileConnectionStatus_T_RCM_Types_Pkg(void *pValue)
{
    *(mobileConnectionStatus_T_RCM_Types_Pkg*)pValue = mcs_disconnected_RCM_Types_Pkg;
    return 1;
}

int release_mobileConnectionStatus_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileConnectionStatus_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((mobileConnectionStatus_T_RCM_Types_Pkg*)pToValue) = *((mobileConnectionStatus_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils = {
    mobileConnectionStatus_T_RCM_Types_Pkg_to_string,
    check_mobileConnectionStatus_T_RCM_Types_Pkg_string,
    string_to_mobileConnectionStatus_T_RCM_Types_Pkg,
    is_mobileConnectionStatus_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileConnectionStatus_T_RCM_Types_Pkg_to_double,
    is_mobileConnectionStatus_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileConnectionStatus_T_RCM_Types_Pkg_to_long,
    compare_mobileConnectionStatus_T_RCM_Types_Pkg,
    get_mobileConnectionStatus_T_RCM_Types_Pkg_signature,
    init_mobileConnectionStatus_T_RCM_Types_Pkg,
    release_mobileConnectionStatus_T_RCM_Types_Pkg,
    copy_mobileConnectionStatus_T_RCM_Types_Pkg,
    sizeof(mobileConnectionStatus_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileConnetionAction_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileConnetionAction_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileConnetionAction_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileConnetionAction_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileConnetionAction_T_RCM_Types_PkgVTable;
#endif

static SimEnumValUtils mobileConnetionAction_T_RCM_Types_Pkg_values[] = {
    { "RCM_Types_Pkg::mca_nop", mca_nop_RCM_Types_Pkg},
    { "mca_nop", mca_nop_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mca_connect", mca_connect_RCM_Types_Pkg},
    { "mca_connect", mca_connect_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mca_disconnect", mca_disconnect_RCM_Types_Pkg},
    { "mca_disconnect", mca_disconnect_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mca_expectRadioHole", mca_expectRadioHole_RCM_Types_Pkg},
    { "mca_expectRadioHole", mca_expectRadioHole_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mca_unexpectRadioHole", mca_unexpectRadioHole_RCM_Types_Pkg},
    { "mca_unexpectRadioHole", mca_unexpectRadioHole_RCM_Types_Pkg},
};
const int mobileConnetionAction_T_RCM_Types_Pkg_nb_values = 10;

int mobileConnetionAction_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnetionAction_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileConnetionAction_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(mobileConnetionAction_T_RCM_Types_Pkg*)pValue, mobileConnetionAction_T_RCM_Types_Pkg_values, mobileConnetionAction_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_mobileConnetionAction_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileConnetionAction_T_RCM_Types_Pkg rTemp;
    return string_to_mobileConnetionAction_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileConnetionAction_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileConnetionAction_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, mobileConnetionAction_T_RCM_Types_Pkg_values, mobileConnetionAction_T_RCM_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(mobileConnetionAction_T_RCM_Types_Pkg*)pValue = (mobileConnetionAction_T_RCM_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_mobileConnetionAction_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileConnetionAction_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileConnetionAction_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileConnetionAction_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((mobileConnetionAction_T_RCM_Types_Pkg*)pValue);
    return 1;
}

int is_mobileConnetionAction_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileConnetionAction_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileConnetionAction_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileConnetionAction_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((mobileConnetionAction_T_RCM_Types_Pkg*)pValue);
    return 1;
}

void compare_mobileConnetionAction_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable != NULL
        && pSimmobileConnetionAction_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileConnetionAction_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileConnetionAction_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileConnetionAction_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileConnetionAction_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(mobileConnetionAction_T_RCM_Types_Pkg*)pValue1), (int)(*(mobileConnetionAction_T_RCM_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileConnetionAction_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(mobileConnetionAction_T_RCM_Types_Pkg_values, mobileConnetionAction_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_mobileConnetionAction_T_RCM_Types_Pkg(void *pValue)
{
    *(mobileConnetionAction_T_RCM_Types_Pkg*)pValue = mca_nop_RCM_Types_Pkg;
    return 1;
}

int release_mobileConnetionAction_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileConnetionAction_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((mobileConnetionAction_T_RCM_Types_Pkg*)pToValue) = *((mobileConnetionAction_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils = {
    mobileConnetionAction_T_RCM_Types_Pkg_to_string,
    check_mobileConnetionAction_T_RCM_Types_Pkg_string,
    string_to_mobileConnetionAction_T_RCM_Types_Pkg,
    is_mobileConnetionAction_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileConnetionAction_T_RCM_Types_Pkg_to_double,
    is_mobileConnetionAction_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileConnetionAction_T_RCM_Types_Pkg_to_long,
    compare_mobileConnetionAction_T_RCM_Types_Pkg,
    get_mobileConnetionAction_T_RCM_Types_Pkg_signature,
    init_mobileConnetionAction_T_RCM_Types_Pkg,
    release_mobileConnetionAction_T_RCM_Types_Pkg,
    copy_mobileConnetionAction_T_RCM_Types_Pkg,
    sizeof(mobileConnetionAction_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileHealthStatus_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileHealthStatus_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileHealthStatus_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileHealthStatus_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileHealthStatus_T_RCM_Types_PkgVTable;
#endif

static SimEnumValUtils mobileHealthStatus_T_RCM_Types_Pkg_values[] = {
    { "RCM_Types_Pkg::mhs_nok", mhs_nok_RCM_Types_Pkg},
    { "mhs_nok", mhs_nok_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mhs_ok", mhs_ok_RCM_Types_Pkg},
    { "mhs_ok", mhs_ok_RCM_Types_Pkg},
};
const int mobileHealthStatus_T_RCM_Types_Pkg_nb_values = 4;

int mobileHealthStatus_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable != NULL
        && pSimmobileHealthStatus_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileHealthStatus_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(mobileHealthStatus_T_RCM_Types_Pkg*)pValue, mobileHealthStatus_T_RCM_Types_Pkg_values, mobileHealthStatus_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_mobileHealthStatus_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileHealthStatus_T_RCM_Types_Pkg rTemp;
    return string_to_mobileHealthStatus_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileHealthStatus_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileHealthStatus_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, mobileHealthStatus_T_RCM_Types_Pkg_values, mobileHealthStatus_T_RCM_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(mobileHealthStatus_T_RCM_Types_Pkg*)pValue = (mobileHealthStatus_T_RCM_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_mobileHealthStatus_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileHealthStatus_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileHealthStatus_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileHealthStatus_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((mobileHealthStatus_T_RCM_Types_Pkg*)pValue);
    return 1;
}

int is_mobileHealthStatus_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileHealthStatus_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileHealthStatus_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileHealthStatus_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((mobileHealthStatus_T_RCM_Types_Pkg*)pValue);
    return 1;
}

void compare_mobileHealthStatus_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable != NULL
        && pSimmobileHealthStatus_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileHealthStatus_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileHealthStatus_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileHealthStatus_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileHealthStatus_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(mobileHealthStatus_T_RCM_Types_Pkg*)pValue1), (int)(*(mobileHealthStatus_T_RCM_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileHealthStatus_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(mobileHealthStatus_T_RCM_Types_Pkg_values, mobileHealthStatus_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_mobileHealthStatus_T_RCM_Types_Pkg(void *pValue)
{
    *(mobileHealthStatus_T_RCM_Types_Pkg*)pValue = mhs_nok_RCM_Types_Pkg;
    return 1;
}

int release_mobileHealthStatus_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileHealthStatus_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((mobileHealthStatus_T_RCM_Types_Pkg*)pToValue) = *((mobileHealthStatus_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileHealthStatus_T_RCM_Types_Pkg_Utils = {
    mobileHealthStatus_T_RCM_Types_Pkg_to_string,
    check_mobileHealthStatus_T_RCM_Types_Pkg_string,
    string_to_mobileHealthStatus_T_RCM_Types_Pkg,
    is_mobileHealthStatus_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileHealthStatus_T_RCM_Types_Pkg_to_double,
    is_mobileHealthStatus_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileHealthStatus_T_RCM_Types_Pkg_to_long,
    compare_mobileHealthStatus_T_RCM_Types_Pkg,
    get_mobileHealthStatus_T_RCM_Types_Pkg_signature,
    init_mobileHealthStatus_T_RCM_Types_Pkg,
    release_mobileHealthStatus_T_RCM_Types_Pkg,
    copy_mobileHealthStatus_T_RCM_Types_Pkg,
    sizeof(mobileHealthStatus_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileRegistrationAction_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileRegistrationAction_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileRegistrationAction_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileRegistrationAction_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileRegistrationAction_T_RCM_Types_PkgVTable;
#endif

static SimEnumValUtils mobileRegistrationAction_T_RCM_Types_Pkg_values[] = {
    { "RCM_Types_Pkg::mra_nop", mra_nop_RCM_Types_Pkg},
    { "mra_nop", mra_nop_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mra_register", mra_register_RCM_Types_Pkg},
    { "mra_register", mra_register_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mra_unregister", mra_unregister_RCM_Types_Pkg},
    { "mra_unregister", mra_unregister_RCM_Types_Pkg},
};
const int mobileRegistrationAction_T_RCM_Types_Pkg_nb_values = 6;

int mobileRegistrationAction_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationAction_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileRegistrationAction_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(mobileRegistrationAction_T_RCM_Types_Pkg*)pValue, mobileRegistrationAction_T_RCM_Types_Pkg_values, mobileRegistrationAction_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_mobileRegistrationAction_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileRegistrationAction_T_RCM_Types_Pkg rTemp;
    return string_to_mobileRegistrationAction_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileRegistrationAction_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileRegistrationAction_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, mobileRegistrationAction_T_RCM_Types_Pkg_values, mobileRegistrationAction_T_RCM_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(mobileRegistrationAction_T_RCM_Types_Pkg*)pValue = (mobileRegistrationAction_T_RCM_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_mobileRegistrationAction_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileRegistrationAction_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileRegistrationAction_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileRegistrationAction_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((mobileRegistrationAction_T_RCM_Types_Pkg*)pValue);
    return 1;
}

int is_mobileRegistrationAction_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileRegistrationAction_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileRegistrationAction_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileRegistrationAction_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((mobileRegistrationAction_T_RCM_Types_Pkg*)pValue);
    return 1;
}

void compare_mobileRegistrationAction_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationAction_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileRegistrationAction_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileRegistrationAction_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileRegistrationAction_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileRegistrationAction_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(mobileRegistrationAction_T_RCM_Types_Pkg*)pValue1), (int)(*(mobileRegistrationAction_T_RCM_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileRegistrationAction_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(mobileRegistrationAction_T_RCM_Types_Pkg_values, mobileRegistrationAction_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_mobileRegistrationAction_T_RCM_Types_Pkg(void *pValue)
{
    *(mobileRegistrationAction_T_RCM_Types_Pkg*)pValue = mra_nop_RCM_Types_Pkg;
    return 1;
}

int release_mobileRegistrationAction_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileRegistrationAction_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((mobileRegistrationAction_T_RCM_Types_Pkg*)pToValue) = *((mobileRegistrationAction_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileRegistrationAction_T_RCM_Types_Pkg_Utils = {
    mobileRegistrationAction_T_RCM_Types_Pkg_to_string,
    check_mobileRegistrationAction_T_RCM_Types_Pkg_string,
    string_to_mobileRegistrationAction_T_RCM_Types_Pkg,
    is_mobileRegistrationAction_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileRegistrationAction_T_RCM_Types_Pkg_to_double,
    is_mobileRegistrationAction_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileRegistrationAction_T_RCM_Types_Pkg_to_long,
    compare_mobileRegistrationAction_T_RCM_Types_Pkg,
    get_mobileRegistrationAction_T_RCM_Types_Pkg_signature,
    init_mobileRegistrationAction_T_RCM_Types_Pkg,
    release_mobileRegistrationAction_T_RCM_Types_Pkg,
    copy_mobileRegistrationAction_T_RCM_Types_Pkg,
    sizeof(mobileRegistrationAction_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileRegistrationCmd_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable;
#endif

static SimFieldUtils mobileRegistrationCmd_T_RCM_Types_Pkg_fields[] = {
    {"valid", offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"mobileDeviceNo", offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg,mobileDeviceNo), &_Type_kcg_int32_Utils},
    {"action", offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg,action), &_Type_mobileRegistrationAction_T_RCM_Types_Pkg_Utils},
    {"network_id", offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg,network_id), &_Type_NID_MN_Utils},
};

int mobileRegistrationCmd_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, mobileRegistrationCmd_T_RCM_Types_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int check_mobileRegistrationCmd_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileRegistrationCmd_T_RCM_Types_Pkg rTemp;
    return string_to_mobileRegistrationCmd_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileRegistrationCmd_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, mobileRegistrationCmd_T_RCM_Types_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_mobileRegistrationCmd_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileRegistrationCmd_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_mobileRegistrationCmd_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileRegistrationCmd_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_mobileRegistrationCmd_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileRegistrationCmd_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, mobileRegistrationCmd_T_RCM_Types_Pkg_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileRegistrationCmd_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(mobileRegistrationCmd_T_RCM_Types_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int init_mobileRegistrationCmd_T_RCM_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((mobileRegistrationCmd_T_RCM_Types_Pkg*)pValue)->valid));
    init_kcg_int32(&(((mobileRegistrationCmd_T_RCM_Types_Pkg*)pValue)->mobileDeviceNo));
    init_mobileRegistrationAction_T_RCM_Types_Pkg(&(((mobileRegistrationCmd_T_RCM_Types_Pkg*)pValue)->action));
    init_NID_MN(&(((mobileRegistrationCmd_T_RCM_Types_Pkg*)pValue)->network_id));
    return 1;
}

int release_mobileRegistrationCmd_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileRegistrationCmd_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg((mobileRegistrationCmd_T_RCM_Types_Pkg*)pToValue, (mobileRegistrationCmd_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileRegistrationCmd_T_RCM_Types_Pkg_Utils = {
    mobileRegistrationCmd_T_RCM_Types_Pkg_to_string,
    check_mobileRegistrationCmd_T_RCM_Types_Pkg_string,
    string_to_mobileRegistrationCmd_T_RCM_Types_Pkg,
    is_mobileRegistrationCmd_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileRegistrationCmd_T_RCM_Types_Pkg_to_double,
    is_mobileRegistrationCmd_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileRegistrationCmd_T_RCM_Types_Pkg_to_long,
    compare_mobileRegistrationCmd_T_RCM_Types_Pkg,
    get_mobileRegistrationCmd_T_RCM_Types_Pkg_signature,
    init_mobileRegistrationCmd_T_RCM_Types_Pkg,
    release_mobileRegistrationCmd_T_RCM_Types_Pkg,
    copy_mobileRegistrationCmd_T_RCM_Types_Pkg,
    sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileRegistrationContext_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileRegistrationContext_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileRegistrationContext_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileRegistrationContext_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileRegistrationContext_T_RCM_Types_PkgVTable;
#endif

static SimConstValUtils const mobileRegistrationContext_T_RCM_Types_Pkg_constants[] = {
    { "RCM_Types_Pkg::cNoMobileRegistrationContext", &TU_cNoMobileRegistrationContext_RCM_Types_Pkg },
    { "cNoMobileRegistrationContext", &TU_cNoMobileRegistrationContext_RCM_Types_Pkg },
};

static SimFieldUtils mobileRegistrationContext_T_RCM_Types_Pkg_fields[] = {
    {"valid", offsetof(mobileRegistrationContext_T_RCM_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"mobileDeviceNo", offsetof(mobileRegistrationContext_T_RCM_Types_Pkg,mobileDeviceNo), &_Type_kcg_int32_Utils},
    {"healthStatus", offsetof(mobileRegistrationContext_T_RCM_Types_Pkg,healthStatus), &_Type_mobileHealthStatus_T_RCM_Types_Pkg_Utils},
    {"status", offsetof(mobileRegistrationContext_T_RCM_Types_Pkg,status), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils},
    {"nid_mn", offsetof(mobileRegistrationContext_T_RCM_Types_Pkg,nid_mn), &_Type_NID_MN_Utils},
};

int mobileRegistrationContext_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationContext_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileRegistrationContext_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, mobileRegistrationContext_T_RCM_Types_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int check_mobileRegistrationContext_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileRegistrationContext_T_RCM_Types_Pkg rTemp;
    return string_to_mobileRegistrationContext_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileRegistrationContext_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileRegistrationContext_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, mobileRegistrationContext_T_RCM_Types_Pkg_constants, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg_constants) / sizeof(mobileRegistrationContext_T_RCM_Types_Pkg_constants[0]), sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, mobileRegistrationContext_T_RCM_Types_Pkg_fields, 5, endptr);
    }
    return nRet;
}

int is_mobileRegistrationContext_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileRegistrationContext_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileRegistrationContext_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileRegistrationContext_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_mobileRegistrationContext_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileRegistrationContext_T_RCM_Types_PkgVTable);
    }
    return 0;
}

int mobileRegistrationContext_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileRegistrationContext_T_RCM_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_mobileRegistrationContext_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationContext_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileRegistrationContext_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileRegistrationContext_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileRegistrationContext_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileRegistrationContext_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, mobileRegistrationContext_T_RCM_Types_Pkg_fields, 5, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileRegistrationContext_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(mobileRegistrationContext_T_RCM_Types_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int init_mobileRegistrationContext_T_RCM_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((mobileRegistrationContext_T_RCM_Types_Pkg*)pValue)->valid));
    init_kcg_int32(&(((mobileRegistrationContext_T_RCM_Types_Pkg*)pValue)->mobileDeviceNo));
    init_mobileHealthStatus_T_RCM_Types_Pkg(&(((mobileRegistrationContext_T_RCM_Types_Pkg*)pValue)->healthStatus));
    init_mobileRegistrationStatus_T_RCM_Types_Pkg(&(((mobileRegistrationContext_T_RCM_Types_Pkg*)pValue)->status));
    init_NID_MN(&(((mobileRegistrationContext_T_RCM_Types_Pkg*)pValue)->nid_mn));
    return 1;
}

int release_mobileRegistrationContext_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileRegistrationContext_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg((mobileRegistrationContext_T_RCM_Types_Pkg*)pToValue, (mobileRegistrationContext_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils = {
    mobileRegistrationContext_T_RCM_Types_Pkg_to_string,
    check_mobileRegistrationContext_T_RCM_Types_Pkg_string,
    string_to_mobileRegistrationContext_T_RCM_Types_Pkg,
    is_mobileRegistrationContext_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileRegistrationContext_T_RCM_Types_Pkg_to_double,
    is_mobileRegistrationContext_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileRegistrationContext_T_RCM_Types_Pkg_to_long,
    compare_mobileRegistrationContext_T_RCM_Types_Pkg,
    get_mobileRegistrationContext_T_RCM_Types_Pkg_signature,
    init_mobileRegistrationContext_T_RCM_Types_Pkg,
    release_mobileRegistrationContext_T_RCM_Types_Pkg,
    copy_mobileRegistrationContext_T_RCM_Types_Pkg,
    sizeof(mobileRegistrationContext_T_RCM_Types_Pkg)
};

/****************************************************************
 ** mobileRegistrationStatus_T_RCM_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable;
#endif

static SimEnumValUtils mobileRegistrationStatus_T_RCM_Types_Pkg_values[] = {
    { "RCM_Types_Pkg::mrs_unregistered", mrs_unregistered_RCM_Types_Pkg},
    { "mrs_unregistered", mrs_unregistered_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mrs_registering", mrs_registering_RCM_Types_Pkg},
    { "mrs_registering", mrs_registering_RCM_Types_Pkg},
    { "RCM_Types_Pkg::mrs_registered", mrs_registered_RCM_Types_Pkg},
    { "mrs_registered", mrs_registered_RCM_Types_Pkg},
};
const int mobileRegistrationStatus_T_RCM_Types_Pkg_nb_values = 6;

int mobileRegistrationStatus_T_RCM_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(mobileRegistrationStatus_T_RCM_Types_Pkg*)pValue, mobileRegistrationStatus_T_RCM_Types_Pkg_values, mobileRegistrationStatus_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_mobileRegistrationStatus_T_RCM_Types_Pkg_string(const char *str, char **endptr)
{
    static mobileRegistrationStatus_T_RCM_Types_Pkg rTemp;
    return string_to_mobileRegistrationStatus_T_RCM_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_mobileRegistrationStatus_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, mobileRegistrationStatus_T_RCM_Types_Pkg_values, mobileRegistrationStatus_T_RCM_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(mobileRegistrationStatus_T_RCM_Types_Pkg*)pValue = (mobileRegistrationStatus_T_RCM_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_mobileRegistrationStatus_T_RCM_Types_Pkg_double_conversion_allowed()
{
    if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileRegistrationStatus_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((mobileRegistrationStatus_T_RCM_Types_Pkg*)pValue);
    return 1;
}

int is_mobileRegistrationStatus_T_RCM_Types_Pkg_long_conversion_allowed()
{
    if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable);
    }
    return 1;
}

int mobileRegistrationStatus_T_RCM_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((mobileRegistrationStatus_T_RCM_Types_Pkg*)pValue);
    return 1;
}

void compare_mobileRegistrationStatus_T_RCM_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable != NULL
        && pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable->m_version >= Scv612
        && pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmobileRegistrationStatus_T_RCM_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(mobileRegistrationStatus_T_RCM_Types_Pkg*)pValue1), (int)(*(mobileRegistrationStatus_T_RCM_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mobileRegistrationStatus_T_RCM_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(mobileRegistrationStatus_T_RCM_Types_Pkg_values, mobileRegistrationStatus_T_RCM_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_mobileRegistrationStatus_T_RCM_Types_Pkg(void *pValue)
{
    *(mobileRegistrationStatus_T_RCM_Types_Pkg*)pValue = mrs_unregistered_RCM_Types_Pkg;
    return 1;
}

int release_mobileRegistrationStatus_T_RCM_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_mobileRegistrationStatus_T_RCM_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((mobileRegistrationStatus_T_RCM_Types_Pkg*)pToValue) = *((mobileRegistrationStatus_T_RCM_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils = {
    mobileRegistrationStatus_T_RCM_Types_Pkg_to_string,
    check_mobileRegistrationStatus_T_RCM_Types_Pkg_string,
    string_to_mobileRegistrationStatus_T_RCM_Types_Pkg,
    is_mobileRegistrationStatus_T_RCM_Types_Pkg_double_conversion_allowed,
    mobileRegistrationStatus_T_RCM_Types_Pkg_to_double,
    is_mobileRegistrationStatus_T_RCM_Types_Pkg_long_conversion_allowed,
    mobileRegistrationStatus_T_RCM_Types_Pkg_to_long,
    compare_mobileRegistrationStatus_T_RCM_Types_Pkg,
    get_mobileRegistrationStatus_T_RCM_Types_Pkg_signature,
    init_mobileRegistrationStatus_T_RCM_Types_Pkg,
    release_mobileRegistrationStatus_T_RCM_Types_Pkg,
    copy_mobileRegistrationStatus_T_RCM_Types_Pkg,
    sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg)
};

/****************************************************************
 ** morc_configData_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmorc_configData_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmorc_configData_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmorc_configData_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmorc_configData_T_RCM_Session_Types_PkgVTable;
#endif

static SimFieldUtils morc_configData_T_RCM_Session_Types_Pkg_fields[] = {
    {"radioNetworkID_Default", offsetof(morc_configData_T_RCM_Session_Types_Pkg,radioNetworkID_Default), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils},
    {"nid_radio_shortNumberStoredOnboard", offsetof(morc_configData_T_RCM_Session_Types_Pkg,nid_radio_shortNumberStoredOnboard), &_Type_NID_RADIO_Utils},
    {"noOfRetriesOfSendingTerminationMessage", offsetof(morc_configData_T_RCM_Session_Types_Pkg,noOfRetriesOfSendingTerminationMessage), &_Type_kcg_int32_Utils},
    {"maxWaitingTimeForAckMessageReceived", offsetof(morc_configData_T_RCM_Session_Types_Pkg,maxWaitingTimeForAckMessageReceived), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"maxWaitingTimeUntilTerminationOrderReceived", offsetof(morc_configData_T_RCM_Session_Types_Pkg,maxWaitingTimeUntilTerminationOrderReceived), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"noOfRetriesUntilTerminationOrderIsReceived", offsetof(morc_configData_T_RCM_Session_Types_Pkg,noOfRetriesUntilTerminationOrderIsReceived), &_Type_kcg_int32_Utils},
    {"connectionStatusTimerInterval", offsetof(morc_configData_T_RCM_Session_Types_Pkg,connectionStatusTimerInterval), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"onboardPhoneNumbers", offsetof(morc_configData_T_RCM_Session_Types_Pkg,onboardPhoneNumbers), &_Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils},
    {"nid_engine", offsetof(morc_configData_T_RCM_Session_Types_Pkg,nid_engine), &_Type_NID_ENGINE_Utils},
    {"maxTimeToMaintainCommSession", offsetof(morc_configData_T_RCM_Session_Types_Pkg,maxTimeToMaintainCommSession), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"noOfTriesToEstablishASafeRadioConnection", offsetof(morc_configData_T_RCM_Session_Types_Pkg,noOfTriesToEstablishASafeRadioConnection), &_Type_kcg_int32_Utils},
};

int morc_configData_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable != NULL
        && pSimmorc_configData_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmorc_configData_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, morc_configData_T_RCM_Session_Types_Pkg_fields, 11, pfnStrAppend, pStrObj);
}

int check_morc_configData_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static morc_configData_T_RCM_Session_Types_Pkg rTemp;
    return string_to_morc_configData_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_morc_configData_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmorc_configData_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, morc_configData_T_RCM_Session_Types_Pkg_fields, 11, endptr);
    }
    return nRet;
}

int is_morc_configData_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmorc_configData_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int morc_configData_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmorc_configData_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_morc_configData_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmorc_configData_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int morc_configData_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmorc_configData_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_morc_configData_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable != NULL
        && pSimmorc_configData_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimmorc_configData_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmorc_configData_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmorc_configData_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmorc_configData_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, morc_configData_T_RCM_Session_Types_Pkg_fields, 11, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_morc_configData_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(morc_configData_T_RCM_Session_Types_Pkg_fields, 11, pfnStrAppend, pStrObj);
}

int init_morc_configData_T_RCM_Session_Types_Pkg(void *pValue)
{
    init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->radioNetworkID_Default));
    init_NID_RADIO(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->nid_radio_shortNumberStoredOnboard));
    init_kcg_int32(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->noOfRetriesOfSendingTerminationMessage));
    init_T_internal_Type_Obu_BasicTypes_Pkg(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->maxWaitingTimeForAckMessageReceived));
    init_T_internal_Type_Obu_BasicTypes_Pkg(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->maxWaitingTimeUntilTerminationOrderReceived));
    init_kcg_int32(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->noOfRetriesUntilTerminationOrderIsReceived));
    init_T_internal_Type_Obu_BasicTypes_Pkg(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->connectionStatusTimerInterval));
    init_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->onboardPhoneNumbers));
    init_NID_ENGINE(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->nid_engine));
    init_T_internal_Type_Obu_BasicTypes_Pkg(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->maxTimeToMaintainCommSession));
    init_kcg_int32(&(((morc_configData_T_RCM_Session_Types_Pkg*)pValue)->noOfTriesToEstablishASafeRadioConnection));
    return 1;
}

int release_morc_configData_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_morc_configData_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_morc_configData_T_RCM_Session_Types_Pkg((morc_configData_T_RCM_Session_Types_Pkg*)pToValue, (morc_configData_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_morc_configData_T_RCM_Session_Types_Pkg_Utils = {
    morc_configData_T_RCM_Session_Types_Pkg_to_string,
    check_morc_configData_T_RCM_Session_Types_Pkg_string,
    string_to_morc_configData_T_RCM_Session_Types_Pkg,
    is_morc_configData_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    morc_configData_T_RCM_Session_Types_Pkg_to_double,
    is_morc_configData_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    morc_configData_T_RCM_Session_Types_Pkg_to_long,
    compare_morc_configData_T_RCM_Session_Types_Pkg,
    get_morc_configData_T_RCM_Session_Types_Pkg_signature,
    init_morc_configData_T_RCM_Session_Types_Pkg,
    release_morc_configData_T_RCM_Session_Types_Pkg,
    copy_morc_configData_T_RCM_Session_Types_Pkg,
    sizeof(morc_configData_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** morcStatus_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmorcStatus_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimmorcStatus_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmorcStatus_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmorcStatus_T_RCM_Session_Types_PkgVTable;
#endif

static SimFieldUtils morcStatus_T_RCM_Session_Types_Pkg_fields[] = {
    {"registration", offsetof(morcStatus_T_RCM_Session_Types_Pkg,registration), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils},
    {"connection", offsetof(morcStatus_T_RCM_Session_Types_Pkg,connection), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils},
    {"session", offsetof(morcStatus_T_RCM_Session_Types_Pkg,session), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils},
};

int morcStatus_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable != NULL
        && pSimmorcStatus_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmorcStatus_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, morcStatus_T_RCM_Session_Types_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int check_morcStatus_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static morcStatus_T_RCM_Session_Types_Pkg rTemp;
    return string_to_morcStatus_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_morcStatus_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmorcStatus_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, morcStatus_T_RCM_Session_Types_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_morcStatus_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmorcStatus_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int morcStatus_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmorcStatus_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_morcStatus_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmorcStatus_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int morcStatus_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmorcStatus_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_morcStatus_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable != NULL
        && pSimmorcStatus_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimmorcStatus_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmorcStatus_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmorcStatus_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmorcStatus_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, morcStatus_T_RCM_Session_Types_Pkg_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_morcStatus_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(morcStatus_T_RCM_Session_Types_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int init_morcStatus_T_RCM_Session_Types_Pkg(void *pValue)
{
    init_mobileRegistrationContext_T_RCM_Types_Pkg(&(((morcStatus_T_RCM_Session_Types_Pkg*)pValue)->registration));
    init_mobileConnectionContext_T_RCM_Types_Pkg(&(((morcStatus_T_RCM_Session_Types_Pkg*)pValue)->connection));
    init_sessionStatus_T_RCM_Session_Types_Pkg(&(((morcStatus_T_RCM_Session_Types_Pkg*)pValue)->session));
    return 1;
}

int release_morcStatus_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_morcStatus_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg((morcStatus_T_RCM_Session_Types_Pkg*)pToValue, (morcStatus_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_morcStatus_T_RCM_Session_Types_Pkg_Utils = {
    morcStatus_T_RCM_Session_Types_Pkg_to_string,
    check_morcStatus_T_RCM_Session_Types_Pkg_string,
    string_to_morcStatus_T_RCM_Session_Types_Pkg,
    is_morcStatus_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    morcStatus_T_RCM_Session_Types_Pkg_to_double,
    is_morcStatus_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    morcStatus_T_RCM_Session_Types_Pkg_to_long,
    compare_morcStatus_T_RCM_Session_Types_Pkg,
    get_morcStatus_T_RCM_Session_Types_Pkg_signature,
    init_morcStatus_T_RCM_Session_Types_Pkg,
    release_morcStatus_T_RCM_Session_Types_Pkg,
    copy_morcStatus_T_RCM_Session_Types_Pkg,
    sizeof(morcStatus_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** msgFromTrack_T_RCM_MsgTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable;
#endif

int msgFromTrack_T_RCM_MsgTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return struct_19159_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_msgFromTrack_T_RCM_MsgTypes_Pkg_string(const char *str, char **endptr)
{
    static msgFromTrack_T_RCM_MsgTypes_Pkg rTemp;
    return string_to_msgFromTrack_T_RCM_MsgTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_msgFromTrack_T_RCM_MsgTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_struct_19159(str, pValue, endptr);
    }
    return nRet;
}

int is_msgFromTrack_T_RCM_MsgTypes_Pkg_double_conversion_allowed()
{
    if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable);
    }
    return is_struct_19159_double_conversion_allowed();
}

int msgFromTrack_T_RCM_MsgTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return struct_19159_to_double(pValue, nValue);
}

int is_msgFromTrack_T_RCM_MsgTypes_Pkg_long_conversion_allowed()
{
    if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable);
    }
    return is_struct_19159_long_conversion_allowed();
}

int msgFromTrack_T_RCM_MsgTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return struct_19159_to_long(pValue, nValue);
}

void compare_msgFromTrack_T_RCM_MsgTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_version >= Scv612
               && pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmsgFromTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_struct_19159(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_msgFromTrack_T_RCM_MsgTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_struct_19159_signature(pfnStrAppend, pStrObj);
}

int init_msgFromTrack_T_RCM_MsgTypes_Pkg(void *pValue)
{
    init_struct_19159(pValue);
    return 1;
}

int release_msgFromTrack_T_RCM_MsgTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_msgFromTrack_T_RCM_MsgTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg((msgFromTrack_T_RCM_MsgTypes_Pkg*)pToValue, (msgFromTrack_T_RCM_MsgTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils = {
    msgFromTrack_T_RCM_MsgTypes_Pkg_to_string,
    check_msgFromTrack_T_RCM_MsgTypes_Pkg_string,
    string_to_msgFromTrack_T_RCM_MsgTypes_Pkg,
    is_msgFromTrack_T_RCM_MsgTypes_Pkg_double_conversion_allowed,
    msgFromTrack_T_RCM_MsgTypes_Pkg_to_double,
    is_msgFromTrack_T_RCM_MsgTypes_Pkg_long_conversion_allowed,
    msgFromTrack_T_RCM_MsgTypes_Pkg_to_long,
    compare_msgFromTrack_T_RCM_MsgTypes_Pkg,
    get_msgFromTrack_T_RCM_MsgTypes_Pkg_signature,
    init_msgFromTrack_T_RCM_MsgTypes_Pkg,
    release_msgFromTrack_T_RCM_MsgTypes_Pkg,
    copy_msgFromTrack_T_RCM_MsgTypes_Pkg,
    sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg)
};

/****************************************************************
 ** MsgSource_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimMsgSource_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimMsgSource_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimMsgSource_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimMsgSource_T_Common_Types_PkgVTable;
#endif

static SimEnumValUtils MsgSource_T_Common_Types_Pkg_values[] = {
    { "Common_Types_Pkg::msrc_undefined", msrc_undefined_Common_Types_Pkg},
    { "msrc_undefined", msrc_undefined_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_Euroradio", msrc_Euroradio_Common_Types_Pkg},
    { "msrc_Euroradio", msrc_Euroradio_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_Eurobalise", msrc_Eurobalise_Common_Types_Pkg},
    { "msrc_Eurobalise", msrc_Eurobalise_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_RadioInfillUnit", msrc_RadioInfillUnit_Common_Types_Pkg},
    { "msrc_RadioInfillUnit", msrc_RadioInfillUnit_Common_Types_Pkg},
    { "Common_Types_Pkg::msrc_OBU", msrc_OBU_Common_Types_Pkg},
    { "msrc_OBU", msrc_OBU_Common_Types_Pkg},
};
const int MsgSource_T_Common_Types_Pkg_nb_values = 10;

int MsgSource_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL
        && pSimMsgSource_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMsgSource_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(MsgSource_T_Common_Types_Pkg*)pValue, MsgSource_T_Common_Types_Pkg_values, MsgSource_T_Common_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_MsgSource_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static MsgSource_T_Common_Types_Pkg rTemp;
    return string_to_MsgSource_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_MsgSource_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimMsgSource_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, MsgSource_T_Common_Types_Pkg_values, MsgSource_T_Common_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(MsgSource_T_Common_Types_Pkg*)pValue = (MsgSource_T_Common_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_MsgSource_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMsgSource_T_Common_Types_PkgVTable);
    }
    return 1;
}

int MsgSource_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMsgSource_T_Common_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((MsgSource_T_Common_Types_Pkg*)pValue);
    return 1;
}

int is_MsgSource_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimMsgSource_T_Common_Types_PkgVTable);
    }
    return 1;
}

int MsgSource_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMsgSource_T_Common_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((MsgSource_T_Common_Types_Pkg*)pValue);
    return 1;
}

void compare_MsgSource_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimMsgSource_T_Common_Types_PkgVTable != NULL
        && pSimMsgSource_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMsgSource_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMsgSource_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimMsgSource_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimMsgSource_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(MsgSource_T_Common_Types_Pkg*)pValue1), (int)(*(MsgSource_T_Common_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_MsgSource_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(MsgSource_T_Common_Types_Pkg_values, MsgSource_T_Common_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_MsgSource_T_Common_Types_Pkg(void *pValue)
{
    *(MsgSource_T_Common_Types_Pkg*)pValue = msrc_undefined_Common_Types_Pkg;
    return 1;
}

int release_MsgSource_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_MsgSource_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((MsgSource_T_Common_Types_Pkg*)pToValue) = *((MsgSource_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_MsgSource_T_Common_Types_Pkg_Utils = {
    MsgSource_T_Common_Types_Pkg_to_string,
    check_MsgSource_T_Common_Types_Pkg_string,
    string_to_MsgSource_T_Common_Types_Pkg,
    is_MsgSource_T_Common_Types_Pkg_double_conversion_allowed,
    MsgSource_T_Common_Types_Pkg_to_double,
    is_MsgSource_T_Common_Types_Pkg_long_conversion_allowed,
    MsgSource_T_Common_Types_Pkg_to_long,
    compare_MsgSource_T_Common_Types_Pkg,
    get_MsgSource_T_Common_Types_Pkg_signature,
    init_MsgSource_T_Common_Types_Pkg,
    release_MsgSource_T_Common_Types_Pkg,
    copy_MsgSource_T_Common_Types_Pkg,
    sizeof(MsgSource_T_Common_Types_Pkg)
};

/****************************************************************
 ** msgToTrack_T_RCM_MsgTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable;
#endif

int msgToTrack_T_RCM_MsgTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return struct_18831_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_msgToTrack_T_RCM_MsgTypes_Pkg_string(const char *str, char **endptr)
{
    static msgToTrack_T_RCM_MsgTypes_Pkg rTemp;
    return string_to_msgToTrack_T_RCM_MsgTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_msgToTrack_T_RCM_MsgTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_struct_18831(str, pValue, endptr);
    }
    return nRet;
}

int is_msgToTrack_T_RCM_MsgTypes_Pkg_double_conversion_allowed()
{
    if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable);
    }
    return is_struct_18831_double_conversion_allowed();
}

int msgToTrack_T_RCM_MsgTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return struct_18831_to_double(pValue, nValue);
}

int is_msgToTrack_T_RCM_MsgTypes_Pkg_long_conversion_allowed()
{
    if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable);
    }
    return is_struct_18831_long_conversion_allowed();
}

int msgToTrack_T_RCM_MsgTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return struct_18831_to_long(pValue, nValue);
}

void compare_msgToTrack_T_RCM_MsgTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_version >= Scv612
               && pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmsgToTrack_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_struct_18831(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_msgToTrack_T_RCM_MsgTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_struct_18831_signature(pfnStrAppend, pStrObj);
}

int init_msgToTrack_T_RCM_MsgTypes_Pkg(void *pValue)
{
    init_struct_18831(pValue);
    return 1;
}

int release_msgToTrack_T_RCM_MsgTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_msgToTrack_T_RCM_MsgTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg((msgToTrack_T_RCM_MsgTypes_Pkg*)pToValue, (msgToTrack_T_RCM_MsgTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_msgToTrack_T_RCM_MsgTypes_Pkg_Utils = {
    msgToTrack_T_RCM_MsgTypes_Pkg_to_string,
    check_msgToTrack_T_RCM_MsgTypes_Pkg_string,
    string_to_msgToTrack_T_RCM_MsgTypes_Pkg,
    is_msgToTrack_T_RCM_MsgTypes_Pkg_double_conversion_allowed,
    msgToTrack_T_RCM_MsgTypes_Pkg_to_double,
    is_msgToTrack_T_RCM_MsgTypes_Pkg_long_conversion_allowed,
    msgToTrack_T_RCM_MsgTypes_Pkg_to_long,
    compare_msgToTrack_T_RCM_MsgTypes_Pkg,
    get_msgToTrack_T_RCM_MsgTypes_Pkg_signature,
    init_msgToTrack_T_RCM_MsgTypes_Pkg,
    release_msgToTrack_T_RCM_MsgTypes_Pkg,
    copy_msgToTrack_T_RCM_MsgTypes_Pkg,
    sizeof(msgToTrack_T_RCM_MsgTypes_Pkg)
};

/****************************************************************
 ** msgToTrackTriggers_T_RCM_MsgTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable;
#endif

static SimFieldUtils msgToTrackTriggers_T_RCM_MsgTypes_Pkg_fields[] = {
    {"m155_initiationOfACommunicationSession", offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg,m155_initiationOfACommunicationSession), &_Type_kcg_bool_Utils},
    {"m156_terminationOfACommunicationSession", offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg,m156_terminationOfACommunicationSession), &_Type_kcg_bool_Utils},
    {"m159_sessionEstablished", offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg,m159_sessionEstablished), &_Type_kcg_bool_Utils},
    {"m154_noCompatibleVersionSupported", offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg,m154_noCompatibleVersionSupported), &_Type_kcg_bool_Utils},
};

int msgToTrackTriggers_T_RCM_MsgTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, msgToTrackTriggers_T_RCM_MsgTypes_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int check_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_string(const char *str, char **endptr)
{
    static msgToTrackTriggers_T_RCM_MsgTypes_Pkg rTemp;
    return string_to_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, msgToTrackTriggers_T_RCM_MsgTypes_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_double_conversion_allowed()
{
    if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int msgToTrackTriggers_T_RCM_MsgTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_long_conversion_allowed()
{
    if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int msgToTrackTriggers_T_RCM_MsgTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable->m_version >= Scv612
        && pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmsgToTrackTriggers_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, msgToTrackTriggers_T_RCM_MsgTypes_Pkg_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(msgToTrackTriggers_T_RCM_MsgTypes_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int init_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((msgToTrackTriggers_T_RCM_MsgTypes_Pkg*)pValue)->m155_initiationOfACommunicationSession));
    init_kcg_bool(&(((msgToTrackTriggers_T_RCM_MsgTypes_Pkg*)pValue)->m156_terminationOfACommunicationSession));
    init_kcg_bool(&(((msgToTrackTriggers_T_RCM_MsgTypes_Pkg*)pValue)->m159_sessionEstablished));
    init_kcg_bool(&(((msgToTrackTriggers_T_RCM_MsgTypes_Pkg*)pValue)->m154_noCompatibleVersionSupported));
    return 1;
}

int release_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg((msgToTrackTriggers_T_RCM_MsgTypes_Pkg*)pToValue, (msgToTrackTriggers_T_RCM_MsgTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_Utils = {
    msgToTrackTriggers_T_RCM_MsgTypes_Pkg_to_string,
    check_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_string,
    string_to_msgToTrackTriggers_T_RCM_MsgTypes_Pkg,
    is_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_double_conversion_allowed,
    msgToTrackTriggers_T_RCM_MsgTypes_Pkg_to_double,
    is_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_long_conversion_allowed,
    msgToTrackTriggers_T_RCM_MsgTypes_Pkg_to_long,
    compare_msgToTrackTriggers_T_RCM_MsgTypes_Pkg,
    get_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_signature,
    init_msgToTrackTriggers_T_RCM_MsgTypes_Pkg,
    release_msgToTrackTriggers_T_RCM_MsgTypes_Pkg,
    copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg,
    sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg)
};

/****************************************************************
 ** N_AXLE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimN_AXLEVTable_defined
    extern struct SimTypeVTable *pSimN_AXLEVTable;
  #else 
    struct SimTypeVTable *pSimN_AXLEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimN_AXLEVTable;
#endif

int N_AXLE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimN_AXLEVTable != NULL
        && pSimN_AXLEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_AXLEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_N_AXLE_string(const char *str, char **endptr)
{
    static N_AXLE rTemp;
    return string_to_N_AXLE(str, (void*)&rTemp, endptr);
}

int string_to_N_AXLE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimN_AXLEVTable != NULL) {
        nRet = string_to_VTable(str, pSimN_AXLEVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_N_AXLE_double_conversion_allowed()
{
    if (pSimN_AXLEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimN_AXLEVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int N_AXLE_to_double(const void *pValue, double *nValue)
{
    if (pSimN_AXLEVTable != NULL) {
        return VTable_to_double(pValue, pSimN_AXLEVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_N_AXLE_long_conversion_allowed()
{
    if (pSimN_AXLEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimN_AXLEVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int N_AXLE_to_long(const void *pValue, long *nValue)
{
    if (pSimN_AXLEVTable != NULL) {
        return VTable_to_long(pValue, pSimN_AXLEVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_N_AXLE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimN_AXLEVTable != NULL
        && pSimN_AXLEVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimN_AXLEVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimN_AXLEVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimN_AXLEVTable->m_version >= Scv612
               && pSimN_AXLEVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimN_AXLEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimN_AXLEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimN_AXLEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_N_AXLE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_N_AXLE(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_N_AXLE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_N_AXLE(void *pToValue, const void *pFromValue)
{
    *((N_AXLE*)pToValue) = *((N_AXLE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_N_AXLE_Utils = {
    N_AXLE_to_string,
    check_N_AXLE_string,
    string_to_N_AXLE,
    is_N_AXLE_double_conversion_allowed,
    N_AXLE_to_double,
    is_N_AXLE_long_conversion_allowed,
    N_AXLE_to_long,
    compare_N_AXLE,
    get_N_AXLE_signature,
    init_N_AXLE,
    release_N_AXLE,
    copy_N_AXLE,
    sizeof(N_AXLE)
};

/****************************************************************
 ** N_TOTAL 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimN_TOTALVTable_defined
    extern struct SimTypeVTable *pSimN_TOTALVTable;
  #else 
    struct SimTypeVTable *pSimN_TOTALVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimN_TOTALVTable;
#endif

static SimEnumValUtils N_TOTAL_values[] = {
    { "N_TOTAL_1_balise_in_the_group", N_TOTAL_1_balise_in_the_group},
    { "N_TOTAL_1_balise_in_the_group", N_TOTAL_1_balise_in_the_group},
    { "N_TOTAL_2_balises_in_the_group", N_TOTAL_2_balises_in_the_group},
    { "N_TOTAL_2_balises_in_the_group", N_TOTAL_2_balises_in_the_group},
    { "N_TOTAL_3_balises_in_the_group", N_TOTAL_3_balises_in_the_group},
    { "N_TOTAL_3_balises_in_the_group", N_TOTAL_3_balises_in_the_group},
    { "N_TOTAL_4_balises_in_the_group", N_TOTAL_4_balises_in_the_group},
    { "N_TOTAL_4_balises_in_the_group", N_TOTAL_4_balises_in_the_group},
    { "N_TOTAL_5_balises_in_the_group", N_TOTAL_5_balises_in_the_group},
    { "N_TOTAL_5_balises_in_the_group", N_TOTAL_5_balises_in_the_group},
    { "N_TOTAL_6_balises_in_the_group", N_TOTAL_6_balises_in_the_group},
    { "N_TOTAL_6_balises_in_the_group", N_TOTAL_6_balises_in_the_group},
    { "N_TOTAL_7_balises_in_the_group", N_TOTAL_7_balises_in_the_group},
    { "N_TOTAL_7_balises_in_the_group", N_TOTAL_7_balises_in_the_group},
    { "N_TOTAL_8_balises_in_the_group", N_TOTAL_8_balises_in_the_group},
    { "N_TOTAL_8_balises_in_the_group", N_TOTAL_8_balises_in_the_group},
};
const int N_TOTAL_nb_values = 16;

int N_TOTAL_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimN_TOTALVTable != NULL
        && pSimN_TOTALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_TOTALVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(N_TOTAL*)pValue, N_TOTAL_values, N_TOTAL_nb_values, pfnStrAppend, pStrObj); 
}

int check_N_TOTAL_string(const char *str, char **endptr)
{
    static N_TOTAL rTemp;
    return string_to_N_TOTAL(str, (void*)&rTemp, endptr);
}

int string_to_N_TOTAL(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimN_TOTALVTable != NULL) {
        nRet = string_to_VTable(str, pSimN_TOTALVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_TOTAL_values, N_TOTAL_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_TOTAL*)pValue = (N_TOTAL)nTemp;
    }
    return nRet;
}

int is_N_TOTAL_double_conversion_allowed()
{
    if (pSimN_TOTALVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimN_TOTALVTable);
    }
    return 1;
}

int N_TOTAL_to_double(const void *pValue, double *nValue)
{
    if (pSimN_TOTALVTable != NULL) {
        return VTable_to_double(pValue, pSimN_TOTALVTable, nValue);
    }
    *nValue = (double)*((N_TOTAL*)pValue);
    return 1;
}

int is_N_TOTAL_long_conversion_allowed()
{
    if (pSimN_TOTALVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimN_TOTALVTable);
    }
    return 1;
}

int N_TOTAL_to_long(const void *pValue, long *nValue)
{
    if (pSimN_TOTALVTable != NULL) {
        return VTable_to_long(pValue, pSimN_TOTALVTable, nValue);
    }
    *nValue = (long)*((N_TOTAL*)pValue);
    return 1;
}

void compare_N_TOTAL(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimN_TOTALVTable != NULL
        && pSimN_TOTALVTable->m_version >= Scv612
        && pSimN_TOTALVTable->m_pfnCompare != NULL) {
        if (pSimN_TOTALVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimN_TOTALVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimN_TOTALVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(N_TOTAL*)pValue1), (int)(*(N_TOTAL*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_N_TOTAL_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(N_TOTAL_values, N_TOTAL_nb_values, pfnStrAppend, pStrObj);
}

int init_N_TOTAL(void *pValue)
{
    *(N_TOTAL*)pValue = N_TOTAL_1_balise_in_the_group;
    return 1;
}

int release_N_TOTAL(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_N_TOTAL(void *pToValue, const void *pFromValue)
{
    *((N_TOTAL*)pToValue) = *((N_TOTAL*)pFromValue);
    return 1;
}

SimTypeUtils _Type_N_TOTAL_Utils = {
    N_TOTAL_to_string,
    check_N_TOTAL_string,
    string_to_N_TOTAL,
    is_N_TOTAL_double_conversion_allowed,
    N_TOTAL_to_double,
    is_N_TOTAL_long_conversion_allowed,
    N_TOTAL_to_long,
    compare_N_TOTAL,
    get_N_TOTAL_signature,
    init_N_TOTAL,
    release_N_TOTAL,
    copy_N_TOTAL,
    sizeof(N_TOTAL)
};

/****************************************************************
 ** NC_CDTRAIN 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNC_CDTRAINVTable_defined
    extern struct SimTypeVTable *pSimNC_CDTRAINVTable;
  #else 
    struct SimTypeVTable *pSimNC_CDTRAINVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNC_CDTRAINVTable;
#endif

static SimEnumValUtils NC_CDTRAIN_values[] = {
    { "NC_CDTRAIN_Cant_Deficiency_80_mm", NC_CDTRAIN_Cant_Deficiency_80_mm},
    { "NC_CDTRAIN_Cant_Deficiency_80_mm", NC_CDTRAIN_Cant_Deficiency_80_mm},
    { "NC_CDTRAIN_Cant_Deficiency_100_mm", NC_CDTRAIN_Cant_Deficiency_100_mm},
    { "NC_CDTRAIN_Cant_Deficiency_100_mm", NC_CDTRAIN_Cant_Deficiency_100_mm},
    { "NC_CDTRAIN_Cant_Deficiency_130_mm", NC_CDTRAIN_Cant_Deficiency_130_mm},
    { "NC_CDTRAIN_Cant_Deficiency_130_mm", NC_CDTRAIN_Cant_Deficiency_130_mm},
    { "NC_CDTRAIN_Cant_Deficiency_150_mm", NC_CDTRAIN_Cant_Deficiency_150_mm},
    { "NC_CDTRAIN_Cant_Deficiency_150_mm", NC_CDTRAIN_Cant_Deficiency_150_mm},
    { "NC_CDTRAIN_Cant_Deficiency_165_mm", NC_CDTRAIN_Cant_Deficiency_165_mm},
    { "NC_CDTRAIN_Cant_Deficiency_165_mm", NC_CDTRAIN_Cant_Deficiency_165_mm},
    { "NC_CDTRAIN_Cant_Deficiency_180_mm", NC_CDTRAIN_Cant_Deficiency_180_mm},
    { "NC_CDTRAIN_Cant_Deficiency_180_mm", NC_CDTRAIN_Cant_Deficiency_180_mm},
    { "NC_CDTRAIN_Cant_Deficiency_210_mm", NC_CDTRAIN_Cant_Deficiency_210_mm},
    { "NC_CDTRAIN_Cant_Deficiency_210_mm", NC_CDTRAIN_Cant_Deficiency_210_mm},
    { "NC_CDTRAIN_Cant_Deficiency_225_mm", NC_CDTRAIN_Cant_Deficiency_225_mm},
    { "NC_CDTRAIN_Cant_Deficiency_225_mm", NC_CDTRAIN_Cant_Deficiency_225_mm},
    { "NC_CDTRAIN_Cant_Deficiency_245_mm", NC_CDTRAIN_Cant_Deficiency_245_mm},
    { "NC_CDTRAIN_Cant_Deficiency_245_mm", NC_CDTRAIN_Cant_Deficiency_245_mm},
    { "NC_CDTRAIN_Cant_Deficiency_275_mm", NC_CDTRAIN_Cant_Deficiency_275_mm},
    { "NC_CDTRAIN_Cant_Deficiency_275_mm", NC_CDTRAIN_Cant_Deficiency_275_mm},
    { "NC_CDTRAIN_Cant_Deficiency_300_mm", NC_CDTRAIN_Cant_Deficiency_300_mm},
    { "NC_CDTRAIN_Cant_Deficiency_300_mm", NC_CDTRAIN_Cant_Deficiency_300_mm},
};
const int NC_CDTRAIN_nb_values = 22;

int NC_CDTRAIN_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNC_CDTRAINVTable != NULL
        && pSimNC_CDTRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNC_CDTRAINVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(NC_CDTRAIN*)pValue, NC_CDTRAIN_values, NC_CDTRAIN_nb_values, pfnStrAppend, pStrObj); 
}

int check_NC_CDTRAIN_string(const char *str, char **endptr)
{
    static NC_CDTRAIN rTemp;
    return string_to_NC_CDTRAIN(str, (void*)&rTemp, endptr);
}

int string_to_NC_CDTRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNC_CDTRAINVTable != NULL) {
        nRet = string_to_VTable(str, pSimNC_CDTRAINVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, NC_CDTRAIN_values, NC_CDTRAIN_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(NC_CDTRAIN*)pValue = (NC_CDTRAIN)nTemp;
    }
    return nRet;
}

int is_NC_CDTRAIN_double_conversion_allowed()
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNC_CDTRAINVTable);
    }
    return 1;
}

int NC_CDTRAIN_to_double(const void *pValue, double *nValue)
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimNC_CDTRAINVTable, nValue);
    }
    *nValue = (double)*((NC_CDTRAIN*)pValue);
    return 1;
}

int is_NC_CDTRAIN_long_conversion_allowed()
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNC_CDTRAINVTable);
    }
    return 1;
}

int NC_CDTRAIN_to_long(const void *pValue, long *nValue)
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimNC_CDTRAINVTable, nValue);
    }
    *nValue = (long)*((NC_CDTRAIN*)pValue);
    return 1;
}

void compare_NC_CDTRAIN(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimNC_CDTRAINVTable != NULL
        && pSimNC_CDTRAINVTable->m_version >= Scv612
        && pSimNC_CDTRAINVTable->m_pfnCompare != NULL) {
        if (pSimNC_CDTRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNC_CDTRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNC_CDTRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(NC_CDTRAIN*)pValue1), (int)(*(NC_CDTRAIN*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NC_CDTRAIN_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(NC_CDTRAIN_values, NC_CDTRAIN_nb_values, pfnStrAppend, pStrObj);
}

int init_NC_CDTRAIN(void *pValue)
{
    *(NC_CDTRAIN*)pValue = NC_CDTRAIN_Cant_Deficiency_80_mm;
    return 1;
}

int release_NC_CDTRAIN(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NC_CDTRAIN(void *pToValue, const void *pFromValue)
{
    *((NC_CDTRAIN*)pToValue) = *((NC_CDTRAIN*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NC_CDTRAIN_Utils = {
    NC_CDTRAIN_to_string,
    check_NC_CDTRAIN_string,
    string_to_NC_CDTRAIN,
    is_NC_CDTRAIN_double_conversion_allowed,
    NC_CDTRAIN_to_double,
    is_NC_CDTRAIN_long_conversion_allowed,
    NC_CDTRAIN_to_long,
    compare_NC_CDTRAIN,
    get_NC_CDTRAIN_signature,
    init_NC_CDTRAIN,
    release_NC_CDTRAIN,
    copy_NC_CDTRAIN,
    sizeof(NC_CDTRAIN)
};

/****************************************************************
 ** NC_TRAIN 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNC_TRAINVTable_defined
    extern struct SimTypeVTable *pSimNC_TRAINVTable;
  #else 
    struct SimTypeVTable *pSimNC_TRAINVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNC_TRAINVTable;
#endif

static SimEnumValUtils NC_TRAIN_values[] = {
    { "NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category", NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category},
    { "NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category", NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category},
    { "NC_TRAIN_Freight_train_braked_in_P_position", NC_TRAIN_Freight_train_braked_in_P_position},
    { "NC_TRAIN_Freight_train_braked_in_P_position", NC_TRAIN_Freight_train_braked_in_P_position},
    { "NC_TRAIN_Freight_train_braked_in_G_position", NC_TRAIN_Freight_train_braked_in_G_position},
    { "NC_TRAIN_Freight_train_braked_in_G_position", NC_TRAIN_Freight_train_braked_in_G_position},
    { "NC_TRAIN_Passenger_train", NC_TRAIN_Passenger_train},
    { "NC_TRAIN_Passenger_train", NC_TRAIN_Passenger_train},
};
const int NC_TRAIN_nb_values = 8;

int NC_TRAIN_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNC_TRAINVTable != NULL
        && pSimNC_TRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNC_TRAINVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(NC_TRAIN*)pValue, NC_TRAIN_values, NC_TRAIN_nb_values, pfnStrAppend, pStrObj); 
}

int check_NC_TRAIN_string(const char *str, char **endptr)
{
    static NC_TRAIN rTemp;
    return string_to_NC_TRAIN(str, (void*)&rTemp, endptr);
}

int string_to_NC_TRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNC_TRAINVTable != NULL) {
        nRet = string_to_VTable(str, pSimNC_TRAINVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, NC_TRAIN_values, NC_TRAIN_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(NC_TRAIN*)pValue = (NC_TRAIN)nTemp;
    }
    return nRet;
}

int is_NC_TRAIN_double_conversion_allowed()
{
    if (pSimNC_TRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNC_TRAINVTable);
    }
    return 1;
}

int NC_TRAIN_to_double(const void *pValue, double *nValue)
{
    if (pSimNC_TRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimNC_TRAINVTable, nValue);
    }
    *nValue = (double)*((NC_TRAIN*)pValue);
    return 1;
}

int is_NC_TRAIN_long_conversion_allowed()
{
    if (pSimNC_TRAINVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNC_TRAINVTable);
    }
    return 1;
}

int NC_TRAIN_to_long(const void *pValue, long *nValue)
{
    if (pSimNC_TRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimNC_TRAINVTable, nValue);
    }
    *nValue = (long)*((NC_TRAIN*)pValue);
    return 1;
}

void compare_NC_TRAIN(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimNC_TRAINVTable != NULL
        && pSimNC_TRAINVTable->m_version >= Scv612
        && pSimNC_TRAINVTable->m_pfnCompare != NULL) {
        if (pSimNC_TRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNC_TRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNC_TRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(NC_TRAIN*)pValue1), (int)(*(NC_TRAIN*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NC_TRAIN_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(NC_TRAIN_values, NC_TRAIN_nb_values, pfnStrAppend, pStrObj);
}

int init_NC_TRAIN(void *pValue)
{
    *(NC_TRAIN*)pValue = NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
    return 1;
}

int release_NC_TRAIN(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NC_TRAIN(void *pToValue, const void *pFromValue)
{
    *((NC_TRAIN*)pToValue) = *((NC_TRAIN*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NC_TRAIN_Utils = {
    NC_TRAIN_to_string,
    check_NC_TRAIN_string,
    string_to_NC_TRAIN,
    is_NC_TRAIN_double_conversion_allowed,
    NC_TRAIN_to_double,
    is_NC_TRAIN_long_conversion_allowed,
    NC_TRAIN_to_long,
    compare_NC_TRAIN,
    get_NC_TRAIN_signature,
    init_NC_TRAIN,
    release_NC_TRAIN,
    copy_NC_TRAIN,
    sizeof(NC_TRAIN)
};

/****************************************************************
 ** NID_BG 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_BGVTable_defined
    extern struct SimTypeVTable *pSimNID_BGVTable;
  #else 
    struct SimTypeVTable *pSimNID_BGVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_BGVTable;
#endif

int NID_BG_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_BGVTable != NULL
        && pSimNID_BGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_BGVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_BG_string(const char *str, char **endptr)
{
    static NID_BG rTemp;
    return string_to_NID_BG(str, (void*)&rTemp, endptr);
}

int string_to_NID_BG(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_BGVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_BGVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_BG_double_conversion_allowed()
{
    if (pSimNID_BGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_BGVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_BG_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_BGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_BGVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_BG_long_conversion_allowed()
{
    if (pSimNID_BGVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_BGVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_BG_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_BGVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_BGVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_BG(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_BGVTable != NULL
        && pSimNID_BGVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_BGVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_BGVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_BGVTable->m_version >= Scv612
               && pSimNID_BGVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_BGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_BGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_BGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_BG_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_BG(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_BG(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_BG(void *pToValue, const void *pFromValue)
{
    *((NID_BG*)pToValue) = *((NID_BG*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_BG_Utils = {
    NID_BG_to_string,
    check_NID_BG_string,
    string_to_NID_BG,
    is_NID_BG_double_conversion_allowed,
    NID_BG_to_double,
    is_NID_BG_long_conversion_allowed,
    NID_BG_to_long,
    compare_NID_BG,
    get_NID_BG_signature,
    init_NID_BG,
    release_NID_BG,
    copy_NID_BG,
    sizeof(NID_BG)
};

/****************************************************************
 ** NID_C 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_CVTable_defined
    extern struct SimTypeVTable *pSimNID_CVTable;
  #else 
    struct SimTypeVTable *pSimNID_CVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_CVTable;
#endif

int NID_C_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_CVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_C_string(const char *str, char **endptr)
{
    static NID_C rTemp;
    return string_to_NID_C(str, (void*)&rTemp, endptr);
}

int string_to_NID_C(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_CVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_CVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_C_double_conversion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_C_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_CVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_CVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_C_long_conversion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_C_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_CVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_CVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_C(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_CVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_CVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_CVTable->m_version >= Scv612
               && pSimNID_CVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_CVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_CVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_CVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_C_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_C(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_C(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_C(void *pToValue, const void *pFromValue)
{
    *((NID_C*)pToValue) = *((NID_C*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_C_Utils = {
    NID_C_to_string,
    check_NID_C_string,
    string_to_NID_C,
    is_NID_C_double_conversion_allowed,
    NID_C_to_double,
    is_NID_C_long_conversion_allowed,
    NID_C_to_long,
    compare_NID_C,
    get_NID_C_signature,
    init_NID_C,
    release_NID_C,
    copy_NID_C,
    sizeof(NID_C)
};

/****************************************************************
 ** NID_CTRACTION 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_CTRACTIONVTable_defined
    extern struct SimTypeVTable *pSimNID_CTRACTIONVTable;
  #else 
    struct SimTypeVTable *pSimNID_CTRACTIONVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_CTRACTIONVTable;
#endif

int NID_CTRACTION_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_CTRACTIONVTable != NULL
        && pSimNID_CTRACTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_CTRACTIONVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_CTRACTION_string(const char *str, char **endptr)
{
    static NID_CTRACTION rTemp;
    return string_to_NID_CTRACTION(str, (void*)&rTemp, endptr);
}

int string_to_NID_CTRACTION(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_CTRACTIONVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_CTRACTIONVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_CTRACTION_double_conversion_allowed()
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_CTRACTIONVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_CTRACTION_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_CTRACTIONVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_CTRACTION_long_conversion_allowed()
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_CTRACTIONVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_CTRACTION_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_CTRACTIONVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_CTRACTION(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_CTRACTIONVTable != NULL
        && pSimNID_CTRACTIONVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_CTRACTIONVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_CTRACTIONVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_CTRACTIONVTable->m_version >= Scv612
               && pSimNID_CTRACTIONVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_CTRACTIONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_CTRACTIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_CTRACTIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_CTRACTION_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_CTRACTION(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_CTRACTION(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_CTRACTION(void *pToValue, const void *pFromValue)
{
    *((NID_CTRACTION*)pToValue) = *((NID_CTRACTION*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_CTRACTION_Utils = {
    NID_CTRACTION_to_string,
    check_NID_CTRACTION_string,
    string_to_NID_CTRACTION,
    is_NID_CTRACTION_double_conversion_allowed,
    NID_CTRACTION_to_double,
    is_NID_CTRACTION_long_conversion_allowed,
    NID_CTRACTION_to_long,
    compare_NID_CTRACTION,
    get_NID_CTRACTION_signature,
    init_NID_CTRACTION,
    release_NID_CTRACTION,
    copy_NID_CTRACTION,
    sizeof(NID_CTRACTION)
};

/****************************************************************
 ** NID_EM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_EMVTable_defined
    extern struct SimTypeVTable *pSimNID_EMVTable;
  #else 
    struct SimTypeVTable *pSimNID_EMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_EMVTable;
#endif

int NID_EM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_EMVTable != NULL
        && pSimNID_EMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_EMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_EM_string(const char *str, char **endptr)
{
    static NID_EM rTemp;
    return string_to_NID_EM(str, (void*)&rTemp, endptr);
}

int string_to_NID_EM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_EMVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_EMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_EM_double_conversion_allowed()
{
    if (pSimNID_EMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_EMVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_EM_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_EMVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_EMVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_EM_long_conversion_allowed()
{
    if (pSimNID_EMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_EMVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_EM_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_EMVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_EMVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_EM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_EMVTable != NULL
        && pSimNID_EMVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_EMVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_EMVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_EMVTable->m_version >= Scv612
               && pSimNID_EMVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_EMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_EMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_EMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_EM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_EM(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_EM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_EM(void *pToValue, const void *pFromValue)
{
    *((NID_EM*)pToValue) = *((NID_EM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_EM_Utils = {
    NID_EM_to_string,
    check_NID_EM_string,
    string_to_NID_EM,
    is_NID_EM_double_conversion_allowed,
    NID_EM_to_double,
    is_NID_EM_long_conversion_allowed,
    NID_EM_to_long,
    compare_NID_EM,
    get_NID_EM_signature,
    init_NID_EM,
    release_NID_EM,
    copy_NID_EM,
    sizeof(NID_EM)
};

/****************************************************************
 ** NID_ENGINE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_ENGINEVTable_defined
    extern struct SimTypeVTable *pSimNID_ENGINEVTable;
  #else 
    struct SimTypeVTable *pSimNID_ENGINEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_ENGINEVTable;
#endif

int NID_ENGINE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_ENGINEVTable != NULL
        && pSimNID_ENGINEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_ENGINEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_ENGINE_string(const char *str, char **endptr)
{
    static NID_ENGINE rTemp;
    return string_to_NID_ENGINE(str, (void*)&rTemp, endptr);
}

int string_to_NID_ENGINE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_ENGINEVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_ENGINEVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_ENGINE_double_conversion_allowed()
{
    if (pSimNID_ENGINEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_ENGINEVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_ENGINE_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_ENGINEVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_ENGINEVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_ENGINE_long_conversion_allowed()
{
    if (pSimNID_ENGINEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_ENGINEVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_ENGINE_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_ENGINEVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_ENGINEVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_ENGINE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_ENGINEVTable != NULL
        && pSimNID_ENGINEVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_ENGINEVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_ENGINEVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_ENGINEVTable->m_version >= Scv612
               && pSimNID_ENGINEVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_ENGINEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_ENGINEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_ENGINEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_ENGINE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_ENGINE(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_ENGINE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_ENGINE(void *pToValue, const void *pFromValue)
{
    *((NID_ENGINE*)pToValue) = *((NID_ENGINE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_ENGINE_Utils = {
    NID_ENGINE_to_string,
    check_NID_ENGINE_string,
    string_to_NID_ENGINE,
    is_NID_ENGINE_double_conversion_allowed,
    NID_ENGINE_to_double,
    is_NID_ENGINE_long_conversion_allowed,
    NID_ENGINE_to_long,
    compare_NID_ENGINE,
    get_NID_ENGINE_signature,
    init_NID_ENGINE,
    release_NID_ENGINE,
    copy_NID_ENGINE,
    sizeof(NID_ENGINE)
};

/****************************************************************
 ** NID_LRBG 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_LRBGVTable_defined
    extern struct SimTypeVTable *pSimNID_LRBGVTable;
  #else 
    struct SimTypeVTable *pSimNID_LRBGVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_LRBGVTable;
#endif

int NID_LRBG_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_LRBGVTable != NULL
        && pSimNID_LRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_LRBGVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_LRBG_string(const char *str, char **endptr)
{
    static NID_LRBG rTemp;
    return string_to_NID_LRBG(str, (void*)&rTemp, endptr);
}

int string_to_NID_LRBG(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_LRBGVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_LRBGVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_LRBG_double_conversion_allowed()
{
    if (pSimNID_LRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_LRBGVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_LRBG_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_LRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_LRBGVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_LRBG_long_conversion_allowed()
{
    if (pSimNID_LRBGVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_LRBGVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_LRBG_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_LRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_LRBGVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_LRBG(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_LRBGVTable != NULL
        && pSimNID_LRBGVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_LRBGVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_LRBGVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_LRBGVTable->m_version >= Scv612
               && pSimNID_LRBGVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_LRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_LRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_LRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_LRBG_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_LRBG(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_LRBG(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_LRBG(void *pToValue, const void *pFromValue)
{
    *((NID_LRBG*)pToValue) = *((NID_LRBG*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_LRBG_Utils = {
    NID_LRBG_to_string,
    check_NID_LRBG_string,
    string_to_NID_LRBG,
    is_NID_LRBG_double_conversion_allowed,
    NID_LRBG_to_double,
    is_NID_LRBG_long_conversion_allowed,
    NID_LRBG_to_long,
    compare_NID_LRBG,
    get_NID_LRBG_signature,
    init_NID_LRBG,
    release_NID_LRBG,
    copy_NID_LRBG,
    sizeof(NID_LRBG)
};

/****************************************************************
 ** NID_LTRBG 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_LTRBGVTable_defined
    extern struct SimTypeVTable *pSimNID_LTRBGVTable;
  #else 
    struct SimTypeVTable *pSimNID_LTRBGVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_LTRBGVTable;
#endif

int NID_LTRBG_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_LTRBGVTable != NULL
        && pSimNID_LTRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_LTRBGVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_LTRBG_string(const char *str, char **endptr)
{
    static NID_LTRBG rTemp;
    return string_to_NID_LTRBG(str, (void*)&rTemp, endptr);
}

int string_to_NID_LTRBG(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_LTRBGVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_LTRBGVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_LTRBG_double_conversion_allowed()
{
    if (pSimNID_LTRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_LTRBGVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_LTRBG_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_LTRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_LTRBGVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_LTRBG_long_conversion_allowed()
{
    if (pSimNID_LTRBGVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_LTRBGVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_LTRBG_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_LTRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_LTRBGVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_LTRBG(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_LTRBGVTable != NULL
        && pSimNID_LTRBGVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_LTRBGVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_LTRBGVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_LTRBGVTable->m_version >= Scv612
               && pSimNID_LTRBGVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_LTRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_LTRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_LTRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_LTRBG_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_LTRBG(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_LTRBG(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_LTRBG(void *pToValue, const void *pFromValue)
{
    *((NID_LTRBG*)pToValue) = *((NID_LTRBG*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_LTRBG_Utils = {
    NID_LTRBG_to_string,
    check_NID_LTRBG_string,
    string_to_NID_LTRBG,
    is_NID_LTRBG_double_conversion_allowed,
    NID_LTRBG_to_double,
    is_NID_LTRBG_long_conversion_allowed,
    NID_LTRBG_to_long,
    compare_NID_LTRBG,
    get_NID_LTRBG_signature,
    init_NID_LTRBG,
    release_NID_LTRBG,
    copy_NID_LTRBG,
    sizeof(NID_LTRBG)
};

/****************************************************************
 ** NID_MESSAGE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_MESSAGEVTable_defined
    extern struct SimTypeVTable *pSimNID_MESSAGEVTable;
  #else 
    struct SimTypeVTable *pSimNID_MESSAGEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_MESSAGEVTable;
#endif

static SimConstValUtils const NID_MESSAGE_constants[] = {
    { "Id_Pkg::cm32_RBC_RIU_System_Version", &TU_cm32_RBC_RIU_System_Version_Id_Pkg },
    { "cm32_RBC_RIU_System_Version", &TU_cm32_RBC_RIU_System_Version_Id_Pkg },
    { "Id_Pkg::cm38_Initiation_of_a_Communication_Session", &TU_cm38_Initiation_of_a_Communication_Session_Id_Pkg },
    { "cm38_Initiation_of_a_Communication_Session", &TU_cm38_Initiation_of_a_Communication_Session_Id_Pkg },
    { "Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session", &TU_cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg },
    { "cm39_Acknowledgement_of_termination_of_a_communication_session", &TU_cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg },
    { "Id_Pkg::co154_No_Compatible_Version_Support", &TU_co154_No_Compatible_Version_Support_Id_Pkg },
    { "co154_No_Compatible_Version_Support", &TU_co154_No_Compatible_Version_Support_Id_Pkg },
    { "Id_Pkg::co159_Session_established", &TU_co159_Session_established_Id_Pkg },
    { "co159_Session_established", &TU_co159_Session_established_Id_Pkg },
    { "Id_Pkg::co156_Termination_of_a_communication_session", &TU_co156_Termination_of_a_communication_session_Id_Pkg },
    { "co156_Termination_of_a_communication_session", &TU_co156_Termination_of_a_communication_session_Id_Pkg },
    { "Id_Pkg::co155_Initiation_of_a_communication_session", &TU_co155_Initiation_of_a_communication_session_Id_Pkg },
    { "co155_Initiation_of_a_communication_session", &TU_co155_Initiation_of_a_communication_session_Id_Pkg },
};

int NID_MESSAGE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_MESSAGEVTable != NULL
        && pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_MESSAGEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_MESSAGE_string(const char *str, char **endptr)
{
    static NID_MESSAGE rTemp;
    return string_to_NID_MESSAGE(str, (void*)&rTemp, endptr);
}

int string_to_NID_MESSAGE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_MESSAGEVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_MESSAGEVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, NID_MESSAGE_constants, sizeof(NID_MESSAGE_constants) / sizeof(NID_MESSAGE_constants[0]), sizeof(NID_MESSAGE), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_MESSAGE_double_conversion_allowed()
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_MESSAGEVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_MESSAGE_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_MESSAGEVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_MESSAGE_long_conversion_allowed()
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_MESSAGEVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_MESSAGE_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_MESSAGEVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_MESSAGE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_MESSAGEVTable != NULL
        && pSimNID_MESSAGEVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_MESSAGEVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_MESSAGEVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_MESSAGEVTable->m_version >= Scv612
               && pSimNID_MESSAGEVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_MESSAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_MESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_MESSAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_MESSAGE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_MESSAGE(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_MESSAGE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_MESSAGE(void *pToValue, const void *pFromValue)
{
    *((NID_MESSAGE*)pToValue) = *((NID_MESSAGE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_MESSAGE_Utils = {
    NID_MESSAGE_to_string,
    check_NID_MESSAGE_string,
    string_to_NID_MESSAGE,
    is_NID_MESSAGE_double_conversion_allowed,
    NID_MESSAGE_to_double,
    is_NID_MESSAGE_long_conversion_allowed,
    NID_MESSAGE_to_long,
    compare_NID_MESSAGE,
    get_NID_MESSAGE_signature,
    init_NID_MESSAGE,
    release_NID_MESSAGE,
    copy_NID_MESSAGE,
    sizeof(NID_MESSAGE)
};

/****************************************************************
 ** NID_MN 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_MNVTable_defined
    extern struct SimTypeVTable *pSimNID_MNVTable;
  #else 
    struct SimTypeVTable *pSimNID_MNVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_MNVTable;
#endif

int NID_MN_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_MNVTable != NULL
        && pSimNID_MNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_MNVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_MN_string(const char *str, char **endptr)
{
    static NID_MN rTemp;
    return string_to_NID_MN(str, (void*)&rTemp, endptr);
}

int string_to_NID_MN(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_MNVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_MNVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_MN_double_conversion_allowed()
{
    if (pSimNID_MNVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_MNVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_MN_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_MNVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_MNVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_MN_long_conversion_allowed()
{
    if (pSimNID_MNVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_MNVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_MN_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_MNVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_MNVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_MN(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_MNVTable != NULL
        && pSimNID_MNVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_MNVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_MNVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_MNVTable->m_version >= Scv612
               && pSimNID_MNVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_MNVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_MNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_MNVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_MN_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_MN(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_MN(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_MN(void *pToValue, const void *pFromValue)
{
    *((NID_MN*)pToValue) = *((NID_MN*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_MN_Utils = {
    NID_MN_to_string,
    check_NID_MN_string,
    string_to_NID_MN,
    is_NID_MN_double_conversion_allowed,
    NID_MN_to_double,
    is_NID_MN_long_conversion_allowed,
    NID_MN_to_long,
    compare_NID_MN,
    get_NID_MN_signature,
    init_NID_MN,
    release_NID_MN,
    copy_NID_MN,
    sizeof(NID_MN)
};

/****************************************************************
 ** NID_NTC 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_NTCVTable_defined
    extern struct SimTypeVTable *pSimNID_NTCVTable;
  #else 
    struct SimTypeVTable *pSimNID_NTCVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_NTCVTable;
#endif

int NID_NTC_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_NTCVTable != NULL
        && pSimNID_NTCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_NTCVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_NTC_string(const char *str, char **endptr)
{
    static NID_NTC rTemp;
    return string_to_NID_NTC(str, (void*)&rTemp, endptr);
}

int string_to_NID_NTC(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_NTCVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_NTCVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_NTC_double_conversion_allowed()
{
    if (pSimNID_NTCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_NTCVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_NTC_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_NTCVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_NTCVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_NTC_long_conversion_allowed()
{
    if (pSimNID_NTCVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_NTCVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_NTC_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_NTCVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_NTCVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_NTC(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_NTCVTable != NULL
        && pSimNID_NTCVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_NTCVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_NTCVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_NTCVTable->m_version >= Scv612
               && pSimNID_NTCVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_NTCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_NTCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_NTCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_NTC_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_NTC(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_NTC(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_NTC(void *pToValue, const void *pFromValue)
{
    *((NID_NTC*)pToValue) = *((NID_NTC*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_NTC_Utils = {
    NID_NTC_to_string,
    check_NID_NTC_string,
    string_to_NID_NTC,
    is_NID_NTC_double_conversion_allowed,
    NID_NTC_to_double,
    is_NID_NTC_long_conversion_allowed,
    NID_NTC_to_long,
    compare_NID_NTC,
    get_NID_NTC_signature,
    init_NID_NTC,
    release_NID_NTC,
    copy_NID_NTC,
    sizeof(NID_NTC)
};

/****************************************************************
 ** NID_OPERATIONAL 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_OPERATIONALVTable_defined
    extern struct SimTypeVTable *pSimNID_OPERATIONALVTable;
  #else 
    struct SimTypeVTable *pSimNID_OPERATIONALVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_OPERATIONALVTable;
#endif

int NID_OPERATIONAL_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_OPERATIONALVTable != NULL
        && pSimNID_OPERATIONALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_OPERATIONALVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_OPERATIONAL_string(const char *str, char **endptr)
{
    static NID_OPERATIONAL rTemp;
    return string_to_NID_OPERATIONAL(str, (void*)&rTemp, endptr);
}

int string_to_NID_OPERATIONAL(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_OPERATIONALVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_OPERATIONALVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_OPERATIONAL_double_conversion_allowed()
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_OPERATIONALVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_OPERATIONAL_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_OPERATIONALVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_OPERATIONAL_long_conversion_allowed()
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_OPERATIONALVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_OPERATIONAL_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_OPERATIONALVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_OPERATIONAL(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_OPERATIONALVTable != NULL
        && pSimNID_OPERATIONALVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_OPERATIONALVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_OPERATIONALVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_OPERATIONALVTable->m_version >= Scv612
               && pSimNID_OPERATIONALVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_OPERATIONALVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_OPERATIONALVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_OPERATIONALVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_OPERATIONAL_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_OPERATIONAL(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_OPERATIONAL(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_OPERATIONAL(void *pToValue, const void *pFromValue)
{
    *((NID_OPERATIONAL*)pToValue) = *((NID_OPERATIONAL*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_OPERATIONAL_Utils = {
    NID_OPERATIONAL_to_string,
    check_NID_OPERATIONAL_string,
    string_to_NID_OPERATIONAL,
    is_NID_OPERATIONAL_double_conversion_allowed,
    NID_OPERATIONAL_to_double,
    is_NID_OPERATIONAL_long_conversion_allowed,
    NID_OPERATIONAL_to_long,
    compare_NID_OPERATIONAL,
    get_NID_OPERATIONAL_signature,
    init_NID_OPERATIONAL,
    release_NID_OPERATIONAL,
    copy_NID_OPERATIONAL,
    sizeof(NID_OPERATIONAL)
};

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_PACKETVTable_defined
    extern struct SimTypeVTable *pSimNID_PACKETVTable;
  #else 
    struct SimTypeVTable *pSimNID_PACKETVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_PACKETVTable;
#endif

int NID_PACKET_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_PACKETVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_PACKET_string(const char *str, char **endptr)
{
    static NID_PACKET rTemp;
    return string_to_NID_PACKET(str, (void*)&rTemp, endptr);
}

int string_to_NID_PACKET(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_PACKETVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_PACKETVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_PACKET_double_conversion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_PACKET_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_PACKETVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_PACKETVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_PACKET_long_conversion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_PACKET_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_PACKETVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_PACKETVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_PACKET(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_PACKETVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_PACKETVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_PACKETVTable->m_version >= Scv612
               && pSimNID_PACKETVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_PACKETVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_PACKETVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_PACKETVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_PACKET_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_PACKET(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_PACKET(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_PACKET(void *pToValue, const void *pFromValue)
{
    *((NID_PACKET*)pToValue) = *((NID_PACKET*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_PACKET_Utils = {
    NID_PACKET_to_string,
    check_NID_PACKET_string,
    string_to_NID_PACKET,
    is_NID_PACKET_double_conversion_allowed,
    NID_PACKET_to_double,
    is_NID_PACKET_long_conversion_allowed,
    NID_PACKET_to_long,
    compare_NID_PACKET,
    get_NID_PACKET_signature,
    init_NID_PACKET,
    release_NID_PACKET,
    copy_NID_PACKET,
    sizeof(NID_PACKET)
};

/****************************************************************
 ** NID_RADIO 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_RADIOVTable_defined
    extern struct SimTypeVTable *pSimNID_RADIOVTable;
  #else 
    struct SimTypeVTable *pSimNID_RADIOVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_RADIOVTable;
#endif

static SimConstValUtils const NID_RADIO_constants[] = {
    { "RCM_MsgTypes_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard", &TU_cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg },
    { "cNID_RADIO_useTheShortNumberStoredOnboard", &TU_cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg },
};

int NID_RADIO_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_RADIOVTable != NULL
        && pSimNID_RADIOVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_RADIOVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_RADIO_string(const char *str, char **endptr)
{
    static NID_RADIO rTemp;
    return string_to_NID_RADIO(str, (void*)&rTemp, endptr);
}

int string_to_NID_RADIO(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_RADIOVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_RADIOVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, NID_RADIO_constants, sizeof(NID_RADIO_constants) / sizeof(NID_RADIO_constants[0]), sizeof(NID_RADIO), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int64(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_RADIO_double_conversion_allowed()
{
    if (pSimNID_RADIOVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_RADIOVTable);
    }
    return is_kcg_int64_double_conversion_allowed();
}

int NID_RADIO_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_RADIOVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_RADIOVTable, nValue);
    }
    return kcg_int64_to_double(pValue, nValue);
}

int is_NID_RADIO_long_conversion_allowed()
{
    if (pSimNID_RADIOVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_RADIOVTable);
    }
    return is_kcg_int64_long_conversion_allowed();
}

int NID_RADIO_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_RADIOVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_RADIOVTable, nValue);
    }
    return kcg_int64_to_long(pValue, nValue);
}

void compare_NID_RADIO(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_RADIOVTable != NULL
        && pSimNID_RADIOVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_RADIOVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_RADIOVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_RADIOVTable->m_version >= Scv612
               && pSimNID_RADIOVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_RADIOVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_RADIOVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_RADIOVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_RADIO_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int64_signature(pfnStrAppend, pStrObj);
}

int init_NID_RADIO(void *pValue)
{
    init_kcg_int64(pValue);
    return 1;
}

int release_NID_RADIO(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_RADIO(void *pToValue, const void *pFromValue)
{
    *((NID_RADIO*)pToValue) = *((NID_RADIO*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_RADIO_Utils = {
    NID_RADIO_to_string,
    check_NID_RADIO_string,
    string_to_NID_RADIO,
    is_NID_RADIO_double_conversion_allowed,
    NID_RADIO_to_double,
    is_NID_RADIO_long_conversion_allowed,
    NID_RADIO_to_long,
    compare_NID_RADIO,
    get_NID_RADIO_signature,
    init_NID_RADIO,
    release_NID_RADIO,
    copy_NID_RADIO,
    sizeof(NID_RADIO)
};

/****************************************************************
 ** NID_RBC 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_RBCVTable_defined
    extern struct SimTypeVTable *pSimNID_RBCVTable;
  #else 
    struct SimTypeVTable *pSimNID_RBCVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_RBCVTable;
#endif

static SimConstValUtils const NID_RBC_constants[] = {
    { "RCM_MsgTypes_Pkg::c_nid_RBC_contactLastKnownRBC_", &TU_c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg },
    { "c_nid_RBC_contactLastKnownRBC_", &TU_c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg },
};

int NID_RBC_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_RBCVTable != NULL
        && pSimNID_RBCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_RBCVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_RBC_string(const char *str, char **endptr)
{
    static NID_RBC rTemp;
    return string_to_NID_RBC(str, (void*)&rTemp, endptr);
}

int string_to_NID_RBC(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_RBCVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_RBCVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, NID_RBC_constants, sizeof(NID_RBC_constants) / sizeof(NID_RBC_constants[0]), sizeof(NID_RBC), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_RBC_double_conversion_allowed()
{
    if (pSimNID_RBCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_RBCVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_RBC_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_RBCVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_RBCVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_RBC_long_conversion_allowed()
{
    if (pSimNID_RBCVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_RBCVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_RBC_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_RBCVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_RBCVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_RBC(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_RBCVTable != NULL
        && pSimNID_RBCVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_RBCVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_RBCVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_RBCVTable->m_version >= Scv612
               && pSimNID_RBCVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_RBCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_RBCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_RBCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_RBC_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_RBC(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_RBC(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_RBC(void *pToValue, const void *pFromValue)
{
    *((NID_RBC*)pToValue) = *((NID_RBC*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_RBC_Utils = {
    NID_RBC_to_string,
    check_NID_RBC_string,
    string_to_NID_RBC,
    is_NID_RBC_double_conversion_allowed,
    NID_RBC_to_double,
    is_NID_RBC_long_conversion_allowed,
    NID_RBC_to_long,
    compare_NID_RBC,
    get_NID_RBC_signature,
    init_NID_RBC,
    release_NID_RBC,
    copy_NID_RBC,
    sizeof(NID_RBC)
};

/****************************************************************
 ** NID_TEXTMESSAGE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimNID_TEXTMESSAGEVTable_defined
    extern struct SimTypeVTable *pSimNID_TEXTMESSAGEVTable;
  #else 
    struct SimTypeVTable *pSimNID_TEXTMESSAGEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimNID_TEXTMESSAGEVTable;
#endif

int NID_TEXTMESSAGE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimNID_TEXTMESSAGEVTable != NULL
        && pSimNID_TEXTMESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_TEXTMESSAGEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_NID_TEXTMESSAGE_string(const char *str, char **endptr)
{
    static NID_TEXTMESSAGE rTemp;
    return string_to_NID_TEXTMESSAGE(str, (void*)&rTemp, endptr);
}

int string_to_NID_TEXTMESSAGE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        nRet = string_to_VTable(str, pSimNID_TEXTMESSAGEVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_TEXTMESSAGE_double_conversion_allowed()
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_TEXTMESSAGEVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int NID_TEXTMESSAGE_to_double(const void *pValue, double *nValue)
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_TEXTMESSAGEVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_NID_TEXTMESSAGE_long_conversion_allowed()
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimNID_TEXTMESSAGEVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int NID_TEXTMESSAGE_to_long(const void *pValue, long *nValue)
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_TEXTMESSAGEVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_NID_TEXTMESSAGE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimNID_TEXTMESSAGEVTable != NULL
        && pSimNID_TEXTMESSAGEVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimNID_TEXTMESSAGEVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimNID_TEXTMESSAGEVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimNID_TEXTMESSAGEVTable->m_version >= Scv612
               && pSimNID_TEXTMESSAGEVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimNID_TEXTMESSAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimNID_TEXTMESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimNID_TEXTMESSAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_NID_TEXTMESSAGE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_NID_TEXTMESSAGE(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_NID_TEXTMESSAGE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_NID_TEXTMESSAGE(void *pToValue, const void *pFromValue)
{
    *((NID_TEXTMESSAGE*)pToValue) = *((NID_TEXTMESSAGE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_NID_TEXTMESSAGE_Utils = {
    NID_TEXTMESSAGE_to_string,
    check_NID_TEXTMESSAGE_string,
    string_to_NID_TEXTMESSAGE,
    is_NID_TEXTMESSAGE_double_conversion_allowed,
    NID_TEXTMESSAGE_to_double,
    is_NID_TEXTMESSAGE_long_conversion_allowed,
    NID_TEXTMESSAGE_to_long,
    compare_NID_TEXTMESSAGE,
    get_NID_TEXTMESSAGE_signature,
    init_NID_TEXTMESSAGE,
    release_NID_TEXTMESSAGE,
    copy_NID_TEXTMESSAGE,
    sizeof(NID_TEXTMESSAGE)
};

/****************************************************************
 ** obuEventsAndPhases_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable;
#endif

static SimFieldUtils obuEventsAndPhases_T_RCM_Session_Types_Pkg_fields[] = {
    {"atPowerUp", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,atPowerUp), &_Type_kcg_bool_Utils},
    {"atPowerDown", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,atPowerDown), &_Type_kcg_bool_Utils},
    {"atStartOfMission", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,atStartOfMission), &_Type_kcg_bool_Utils},
    {"modeChangeHasToBeReportedToRBC", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,modeChangeHasToBeReportedToRBC), &_Type_kcg_bool_Utils},
    {"driverHasManuallyChangedLevel_to_2_or_3", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,driverHasManuallyChangedLevel_to_2_or_3), &_Type_kcg_bool_Utils},
    {"trainFrontPassesStartOfAnnouncedRadioHole", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,trainFrontPassesStartOfAnnouncedRadioHole), &_Type_kcg_bool_Utils},
    {"trainFrontReachesEndOfAnnouncedRadioHole", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,trainFrontReachesEndOfAnnouncedRadioHole), &_Type_kcg_bool_Utils},
    {"trainFrontInsideInAnAnnouncedRadioHole", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,trainFrontInsideInAnAnnouncedRadioHole), &_Type_kcg_bool_Utils},
    {"trainFrontPassesALevelTransitionBorder", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,trainFrontPassesALevelTransitionBorder), &_Type_kcg_bool_Utils},
    {"trainFrontPassesA_RBC_RBC_border", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,trainFrontPassesA_RBC_RBC_border), &_Type_kcg_bool_Utils},
    {"startOfMissionProcedureCompleted_in_level_2_or_3", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,startOfMissionProcedureCompleted_in_level_2_or_3), &_Type_kcg_bool_Utils},
    {"isPartOfAnOngoingStartOfMissionProcedure", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,isPartOfAnOngoingStartOfMissionProcedure), &_Type_kcg_bool_Utils},
    {"startOfMissionProcedureIsGoingOn", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,startOfMissionProcedureIsGoingOn), &_Type_kcg_bool_Utils},
    {"endOfMissionIsExecuted", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,endOfMissionIsExecuted), &_Type_kcg_bool_Utils},
    {"triggerDecisionThatNoRadioNetworkIDAvailable", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,triggerDecisionThatNoRadioNetworkIDAvailable), &_Type_kcg_bool_Utils},
    {"errorConditionRequiringTerminationDetected", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,errorConditionRequiringTerminationDetected), &_Type_kcg_bool_Utils},
    {"trainIsRejectedByRBC_duringStartOfMission", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,trainIsRejectedByRBC_duringStartOfMission), &_Type_kcg_bool_Utils},
    {"driverClosesTheDeskduringStartOfMission", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,driverClosesTheDeskduringStartOfMission), &_Type_kcg_bool_Utils},
    {"trainExitedFromAnRBCArea", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,trainExitedFromAnRBCArea), &_Type_kcg_bool_Utils},
    {"isInCommunicationSessionWithAnRIU", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,isInCommunicationSessionWithAnRIU), &_Type_kcg_bool_Utils},
    {"level_1_isLeft", offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg,level_1_isLeft), &_Type_kcg_bool_Utils},
};

int obuEventsAndPhases_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable != NULL
        && pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, obuEventsAndPhases_T_RCM_Session_Types_Pkg_fields, 21, pfnStrAppend, pStrObj);
}

int check_obuEventsAndPhases_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static obuEventsAndPhases_T_RCM_Session_Types_Pkg rTemp;
    return string_to_obuEventsAndPhases_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_obuEventsAndPhases_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, obuEventsAndPhases_T_RCM_Session_Types_Pkg_fields, 21, endptr);
    }
    return nRet;
}

int is_obuEventsAndPhases_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int obuEventsAndPhases_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_obuEventsAndPhases_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int obuEventsAndPhases_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_obuEventsAndPhases_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable != NULL
        && pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimobuEventsAndPhases_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, obuEventsAndPhases_T_RCM_Session_Types_Pkg_fields, 21, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_obuEventsAndPhases_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(obuEventsAndPhases_T_RCM_Session_Types_Pkg_fields, 21, pfnStrAppend, pStrObj);
}

int init_obuEventsAndPhases_T_RCM_Session_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->atPowerUp));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->atPowerDown));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->atStartOfMission));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->modeChangeHasToBeReportedToRBC));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->driverHasManuallyChangedLevel_to_2_or_3));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->trainFrontPassesStartOfAnnouncedRadioHole));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->trainFrontReachesEndOfAnnouncedRadioHole));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->trainFrontInsideInAnAnnouncedRadioHole));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->trainFrontPassesALevelTransitionBorder));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->trainFrontPassesA_RBC_RBC_border));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->startOfMissionProcedureCompleted_in_level_2_or_3));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->isPartOfAnOngoingStartOfMissionProcedure));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->startOfMissionProcedureIsGoingOn));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->endOfMissionIsExecuted));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->triggerDecisionThatNoRadioNetworkIDAvailable));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->errorConditionRequiringTerminationDetected));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->trainIsRejectedByRBC_duringStartOfMission));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->driverClosesTheDeskduringStartOfMission));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->trainExitedFromAnRBCArea));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->isInCommunicationSessionWithAnRIU));
    init_kcg_bool(&(((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pValue)->level_1_isLeft));
    return 1;
}

int release_obuEventsAndPhases_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg((obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pToValue, (obuEventsAndPhases_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils = {
    obuEventsAndPhases_T_RCM_Session_Types_Pkg_to_string,
    check_obuEventsAndPhases_T_RCM_Session_Types_Pkg_string,
    string_to_obuEventsAndPhases_T_RCM_Session_Types_Pkg,
    is_obuEventsAndPhases_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    obuEventsAndPhases_T_RCM_Session_Types_Pkg_to_double,
    is_obuEventsAndPhases_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    obuEventsAndPhases_T_RCM_Session_Types_Pkg_to_long,
    compare_obuEventsAndPhases_T_RCM_Session_Types_Pkg,
    get_obuEventsAndPhases_T_RCM_Session_Types_Pkg_signature,
    init_obuEventsAndPhases_T_RCM_Session_Types_Pkg,
    release_obuEventsAndPhases_T_RCM_Session_Types_Pkg,
    copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg,
    sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** odometry_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimodometry_T_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimodometry_T_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimodometry_T_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimodometry_T_Obu_BasicTypes_PkgVTable;
#endif

static SimFieldUtils odometry_T_Obu_BasicTypes_Pkg_fields[] = {
    {"valid", offsetof(odometry_T_Obu_BasicTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"timestamp", offsetof(odometry_T_Obu_BasicTypes_Pkg,timestamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"odo", offsetof(odometry_T_Obu_BasicTypes_Pkg,odo), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils},
    {"speed", offsetof(odometry_T_Obu_BasicTypes_Pkg,speed), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils},
    {"acceleration", offsetof(odometry_T_Obu_BasicTypes_Pkg,acceleration), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"motionState", offsetof(odometry_T_Obu_BasicTypes_Pkg,motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils},
    {"motionDirection", offsetof(odometry_T_Obu_BasicTypes_Pkg,motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils},
};

int odometry_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, odometry_T_Obu_BasicTypes_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int check_odometry_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static odometry_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_odometry_T_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_odometry_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimodometry_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, odometry_T_Obu_BasicTypes_Pkg_fields, 7, endptr);
    }
    return nRet;
}

int is_odometry_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimodometry_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int odometry_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodometry_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_odometry_T_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimodometry_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int odometry_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimodometry_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_odometry_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimodometry_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimodometry_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, odometry_T_Obu_BasicTypes_Pkg_fields, 7, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_odometry_T_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(odometry_T_Obu_BasicTypes_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int init_odometry_T_Obu_BasicTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->valid));
    init_T_internal_Type_Obu_BasicTypes_Pkg(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->timestamp));
    init_OdometryLocations_T_Obu_BasicTypes_Pkg(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->odo));
    init_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->speed));
    init_A_internal_Type_Obu_BasicTypes_Pkg(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->acceleration));
    init_odoMotionState_T_Obu_BasicTypes_Pkg(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->motionState));
    init_odoMotionDirection_T_Obu_BasicTypes_Pkg(&(((odometry_T_Obu_BasicTypes_Pkg*)pValue)->motionDirection));
    return 1;
}

int release_odometry_T_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_odometry_T_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg((odometry_T_Obu_BasicTypes_Pkg*)pToValue, (odometry_T_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_odometry_T_Obu_BasicTypes_Pkg_Utils = {
    odometry_T_Obu_BasicTypes_Pkg_to_string,
    check_odometry_T_Obu_BasicTypes_Pkg_string,
    string_to_odometry_T_Obu_BasicTypes_Pkg,
    is_odometry_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    odometry_T_Obu_BasicTypes_Pkg_to_double,
    is_odometry_T_Obu_BasicTypes_Pkg_long_conversion_allowed,
    odometry_T_Obu_BasicTypes_Pkg_to_long,
    compare_odometry_T_Obu_BasicTypes_Pkg,
    get_odometry_T_Obu_BasicTypes_Pkg_signature,
    init_odometry_T_Obu_BasicTypes_Pkg,
    release_odometry_T_Obu_BasicTypes_Pkg,
    copy_odometry_T_Obu_BasicTypes_Pkg,
    sizeof(odometry_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable;
#endif

static SimFieldUtils OdometryLocations_T_Obu_BasicTypes_Pkg_fields[] = {
    {"o_nominal", offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg,o_nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"o_min", offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg,o_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"o_max", offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg,o_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
};

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int check_OdometryLocations_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static OdometryLocations_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_OdometryLocations_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_OdometryLocations_T_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_OdometryLocations_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(OdometryLocations_T_Obu_BasicTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int init_OdometryLocations_T_Obu_BasicTypes_Pkg(void *pValue)
{
    init_L_internal_Type_Obu_BasicTypes_Pkg(&(((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)->o_nominal));
    init_L_internal_Type_Obu_BasicTypes_Pkg(&(((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)->o_min));
    init_L_internal_Type_Obu_BasicTypes_Pkg(&(((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)->o_max));
    return 1;
}

int release_OdometryLocations_T_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_OdometryLocations_T_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg((OdometryLocations_T_Obu_BasicTypes_Pkg*)pToValue, (OdometryLocations_T_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils = {
    OdometryLocations_T_Obu_BasicTypes_Pkg_to_string,
    check_OdometryLocations_T_Obu_BasicTypes_Pkg_string,
    string_to_OdometryLocations_T_Obu_BasicTypes_Pkg,
    is_OdometryLocations_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    OdometryLocations_T_Obu_BasicTypes_Pkg_to_double,
    is_OdometryLocations_T_Obu_BasicTypes_Pkg_long_conversion_allowed,
    OdometryLocations_T_Obu_BasicTypes_Pkg_to_long,
    compare_OdometryLocations_T_Obu_BasicTypes_Pkg,
    get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature,
    init_OdometryLocations_T_Obu_BasicTypes_Pkg,
    release_OdometryLocations_T_Obu_BasicTypes_Pkg,
    copy_OdometryLocations_T_Obu_BasicTypes_Pkg,
    sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable;
#endif

static SimFieldUtils OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields[] = {
    {"v_safeNominal", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_safeNominal), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils},
    {"v_rawNominal", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_rawNominal), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils},
    {"v_lower", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_lower), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils},
    {"v_upper", offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg,v_upper), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils},
};

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static OdometrySpeeds_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable);
    }
    return 0;
}

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(OdometrySpeeds_T_Obu_BasicTypes_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int init_OdometrySpeeds_T_Obu_BasicTypes_Pkg(void *pValue)
{
    init_V_odometry_Type_Obu_BasicTypes_Pkg(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_safeNominal));
    init_V_odometry_Type_Obu_BasicTypes_Pkg(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_rawNominal));
    init_V_odometry_Type_Obu_BasicTypes_Pkg(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_lower));
    init_V_odometry_Type_Obu_BasicTypes_Pkg(&(((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)->v_upper));
    return 1;
}

int release_OdometrySpeeds_T_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pToValue, (OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils = {
    OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string,
    check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string,
    string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double,
    is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_long_conversion_allowed,
    OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_long,
    compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature,
    init_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    release_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
    sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** odoMotionDirection_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable;
#endif

static SimEnumValUtils odoMotionDirection_T_Obu_BasicTypes_Pkg_values[] = {
    { "Obu_BasicTypes_Pkg::unknownDirection", unknownDirection_Obu_BasicTypes_Pkg},
    { "unknownDirection", unknownDirection_Obu_BasicTypes_Pkg},
    { "Obu_BasicTypes_Pkg::cabAFirst", cabAFirst_Obu_BasicTypes_Pkg},
    { "cabAFirst", cabAFirst_Obu_BasicTypes_Pkg},
    { "Obu_BasicTypes_Pkg::cabBFirst", cabBFirst_Obu_BasicTypes_Pkg},
    { "cabBFirst", cabBFirst_Obu_BasicTypes_Pkg},
};
const int odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values = 6;

int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue, odoMotionDirection_T_Obu_BasicTypes_Pkg_values, odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static odoMotionDirection_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, odoMotionDirection_T_Obu_BasicTypes_Pkg_values, odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue = (odoMotionDirection_T_Obu_BasicTypes_Pkg)nTemp;
    }
    return nRet;
}

int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    *nValue = (double)*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    *nValue = (long)*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

void compare_odoMotionDirection_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue1), (int)(*(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(odoMotionDirection_T_Obu_BasicTypes_Pkg_values, odoMotionDirection_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_odoMotionDirection_T_Obu_BasicTypes_Pkg(void *pValue)
{
    *(odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue = unknownDirection_Obu_BasicTypes_Pkg;
    return 1;
}

int release_odoMotionDirection_T_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_odoMotionDirection_T_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pToValue) = *((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils = {
    odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string,
    check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string,
    string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    is_odoMotionDirection_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double,
    is_odoMotionDirection_T_Obu_BasicTypes_Pkg_long_conversion_allowed,
    odoMotionDirection_T_Obu_BasicTypes_Pkg_to_long,
    compare_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature,
    init_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    release_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    copy_odoMotionDirection_T_Obu_BasicTypes_Pkg,
    sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** odoMotionState_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimodoMotionState_T_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimodoMotionState_T_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimodoMotionState_T_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimodoMotionState_T_Obu_BasicTypes_PkgVTable;
#endif

static SimEnumValUtils odoMotionState_T_Obu_BasicTypes_Pkg_values[] = {
    { "Obu_BasicTypes_Pkg::noMotion", noMotion_Obu_BasicTypes_Pkg},
    { "noMotion", noMotion_Obu_BasicTypes_Pkg},
    { "Obu_BasicTypes_Pkg::Motion", Motion_Obu_BasicTypes_Pkg},
    { "Motion", Motion_Obu_BasicTypes_Pkg},
};
const int odoMotionState_T_Obu_BasicTypes_Pkg_nb_values = 4;

int odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue, odoMotionState_T_Obu_BasicTypes_Pkg_values, odoMotionState_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_odoMotionState_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static odoMotionState_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_odoMotionState_T_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_odoMotionState_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimodoMotionState_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, odoMotionState_T_Obu_BasicTypes_Pkg_values, odoMotionState_T_Obu_BasicTypes_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue = (odoMotionState_T_Obu_BasicTypes_Pkg)nTemp;
    }
    return nRet;
}

int is_odoMotionState_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimodoMotionState_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

int odoMotionState_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimodoMotionState_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    *nValue = (double)*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

int is_odoMotionState_T_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimodoMotionState_T_Obu_BasicTypes_PkgVTable);
    }
    return 1;
}

int odoMotionState_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimodoMotionState_T_Obu_BasicTypes_PkgVTable, nValue);
    }
    *nValue = (long)*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue);
    return 1;
}

void compare_odoMotionState_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue1), (int)(*(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_odoMotionState_T_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(odoMotionState_T_Obu_BasicTypes_Pkg_values, odoMotionState_T_Obu_BasicTypes_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_odoMotionState_T_Obu_BasicTypes_Pkg(void *pValue)
{
    *(odoMotionState_T_Obu_BasicTypes_Pkg*)pValue = noMotion_Obu_BasicTypes_Pkg;
    return 1;
}

int release_odoMotionState_T_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_odoMotionState_T_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((odoMotionState_T_Obu_BasicTypes_Pkg*)pToValue) = *((odoMotionState_T_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils = {
    odoMotionState_T_Obu_BasicTypes_Pkg_to_string,
    check_odoMotionState_T_Obu_BasicTypes_Pkg_string,
    string_to_odoMotionState_T_Obu_BasicTypes_Pkg,
    is_odoMotionState_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    odoMotionState_T_Obu_BasicTypes_Pkg_to_double,
    is_odoMotionState_T_Obu_BasicTypes_Pkg_long_conversion_allowed,
    odoMotionState_T_Obu_BasicTypes_Pkg_to_long,
    compare_odoMotionState_T_Obu_BasicTypes_Pkg,
    get_odoMotionState_T_Obu_BasicTypes_Pkg_signature,
    init_odoMotionState_T_Obu_BasicTypes_Pkg,
    release_odoMotionState_T_Obu_BasicTypes_Pkg,
    copy_odoMotionState_T_Obu_BasicTypes_Pkg,
    sizeof(odoMotionState_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** outPackets_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimoutPackets_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimoutPackets_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimoutPackets_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimoutPackets_T_Common_Types_PkgVTable;
#endif

static SimConstValUtils const outPackets_T_Common_Types_Pkg_constants[] = {
    { "MoRC_Pck::Coder_Pkg::cEmptyOutPackets", &TU_cEmptyOutPackets_MoRC_Pck_Coder_Pkg },
    { "cEmptyOutPackets", &TU_cEmptyOutPackets_MoRC_Pck_Coder_Pkg },
};

static SimFieldUtils outPackets_T_Common_Types_Pkg_fields[] = {
    {"p0", offsetof(outPackets_T_Common_Types_Pkg,p0), &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils},
    {"p1", offsetof(outPackets_T_Common_Types_Pkg,p1), &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils},
    {"p3", offsetof(outPackets_T_Common_Types_Pkg,p3), &_Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils},
    {"p4", offsetof(outPackets_T_Common_Types_Pkg,p4), &_Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils},
    {"p5", offsetof(outPackets_T_Common_Types_Pkg,p5), &_Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils},
    {"p9", offsetof(outPackets_T_Common_Types_Pkg,p9), &_Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils},
    {"p11", offsetof(outPackets_T_Common_Types_Pkg,p11), &_Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils},
};

int outPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL
        && pSimoutPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimoutPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, outPackets_T_Common_Types_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int check_outPackets_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static outPackets_T_Common_Types_Pkg rTemp;
    return string_to_outPackets_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_outPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimoutPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, outPackets_T_Common_Types_Pkg_constants, sizeof(outPackets_T_Common_Types_Pkg_constants) / sizeof(outPackets_T_Common_Types_Pkg_constants[0]), sizeof(outPackets_T_Common_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, outPackets_T_Common_Types_Pkg_fields, 7, endptr);
    }
    return nRet;
}

int is_outPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimoutPackets_T_Common_Types_PkgVTable);
    }
    return 0;
}

int outPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimoutPackets_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_outPackets_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimoutPackets_T_Common_Types_PkgVTable);
    }
    return 0;
}

int outPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimoutPackets_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_outPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL
        && pSimoutPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimoutPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimoutPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimoutPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimoutPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, outPackets_T_Common_Types_Pkg_fields, 7, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_outPackets_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(outPackets_T_Common_Types_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int init_outPackets_T_Common_Types_Pkg(void *pValue)
{
    init_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&(((outPackets_T_Common_Types_Pkg*)pValue)->p0));
    init_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&(((outPackets_T_Common_Types_Pkg*)pValue)->p1));
    init_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(&(((outPackets_T_Common_Types_Pkg*)pValue)->p3));
    init_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&(((outPackets_T_Common_Types_Pkg*)pValue)->p4));
    init_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&(((outPackets_T_Common_Types_Pkg*)pValue)->p5));
    init_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(&(((outPackets_T_Common_Types_Pkg*)pValue)->p9));
    init_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(&(((outPackets_T_Common_Types_Pkg*)pValue)->p11));
    return 1;
}

int release_outPackets_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_outPackets_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_outPackets_T_Common_Types_Pkg((outPackets_T_Common_Types_Pkg*)pToValue, (outPackets_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_outPackets_T_Common_Types_Pkg_Utils = {
    outPackets_T_Common_Types_Pkg_to_string,
    check_outPackets_T_Common_Types_Pkg_string,
    string_to_outPackets_T_Common_Types_Pkg,
    is_outPackets_T_Common_Types_Pkg_double_conversion_allowed,
    outPackets_T_Common_Types_Pkg_to_double,
    is_outPackets_T_Common_Types_Pkg_long_conversion_allowed,
    outPackets_T_Common_Types_Pkg_to_long,
    compare_outPackets_T_Common_Types_Pkg,
    get_outPackets_T_Common_Types_Pkg_signature,
    init_outPackets_T_Common_Types_Pkg,
    release_outPackets_T_Common_Types_Pkg,
    copy_outPackets_T_Common_Types_Pkg,
    sizeof(outPackets_T_Common_Types_Pkg)
};

/****************************************************************
 ** P42_SessionManagement_T_Packet_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimP42_SessionManagement_T_Packet_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimP42_SessionManagement_T_Packet_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimP42_SessionManagement_T_Packet_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimP42_SessionManagement_T_Packet_Types_PkgVTable;
#endif

static SimFieldUtils P42_SessionManagement_T_Packet_Types_Pkg_fields[] = {
    {"valid", offsetof(P42_SessionManagement_T_Packet_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(P42_SessionManagement_T_Packet_Types_Pkg,q_dir), &_Type_Q_DIR_Utils},
    {"q_rbc", offsetof(P42_SessionManagement_T_Packet_Types_Pkg,q_rbc), &_Type_Q_RBC_Utils},
    {"nid_c", offsetof(P42_SessionManagement_T_Packet_Types_Pkg,nid_c), &_Type_NID_C_Utils},
    {"nid_rbc", offsetof(P42_SessionManagement_T_Packet_Types_Pkg,nid_rbc), &_Type_NID_RBC_Utils},
    {"nid_radio", offsetof(P42_SessionManagement_T_Packet_Types_Pkg,nid_radio), &_Type_NID_RADIO_Utils},
    {"q_sleepsession", offsetof(P42_SessionManagement_T_Packet_Types_Pkg,q_sleepsession), &_Type_Q_SLEEPSESSION_Utils},
};

int P42_SessionManagement_T_Packet_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL
        && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, P42_SessionManagement_T_Packet_Types_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int check_P42_SessionManagement_T_Packet_Types_Pkg_string(const char *str, char **endptr)
{
    static P42_SessionManagement_T_Packet_Types_Pkg rTemp;
    return string_to_P42_SessionManagement_T_Packet_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_P42_SessionManagement_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimP42_SessionManagement_T_Packet_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, P42_SessionManagement_T_Packet_Types_Pkg_fields, 7, endptr);
    }
    return nRet;
}

int is_P42_SessionManagement_T_Packet_Types_Pkg_double_conversion_allowed()
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP42_SessionManagement_T_Packet_Types_PkgVTable);
    }
    return 0;
}

int P42_SessionManagement_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimP42_SessionManagement_T_Packet_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_P42_SessionManagement_T_Packet_Types_Pkg_long_conversion_allowed()
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimP42_SessionManagement_T_Packet_Types_PkgVTable);
    }
    return 0;
}

int P42_SessionManagement_T_Packet_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimP42_SessionManagement_T_Packet_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_P42_SessionManagement_T_Packet_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != NULL
        && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_version >= Scv612
        && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P42_SessionManagement_T_Packet_Types_Pkg_fields, 7, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_P42_SessionManagement_T_Packet_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(P42_SessionManagement_T_Packet_Types_Pkg_fields, 7, pfnStrAppend, pStrObj);
}

int init_P42_SessionManagement_T_Packet_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)->valid));
    init_Q_DIR(&(((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)->q_dir));
    init_Q_RBC(&(((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)->q_rbc));
    init_NID_C(&(((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)->nid_c));
    init_NID_RBC(&(((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)->nid_rbc));
    init_NID_RADIO(&(((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)->nid_radio));
    init_Q_SLEEPSESSION(&(((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)->q_sleepsession));
    return 1;
}

int release_P42_SessionManagement_T_Packet_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_P42_SessionManagement_T_Packet_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg((P42_SessionManagement_T_Packet_Types_Pkg*)pToValue, (P42_SessionManagement_T_Packet_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils = {
    P42_SessionManagement_T_Packet_Types_Pkg_to_string,
    check_P42_SessionManagement_T_Packet_Types_Pkg_string,
    string_to_P42_SessionManagement_T_Packet_Types_Pkg,
    is_P42_SessionManagement_T_Packet_Types_Pkg_double_conversion_allowed,
    P42_SessionManagement_T_Packet_Types_Pkg_to_double,
    is_P42_SessionManagement_T_Packet_Types_Pkg_long_conversion_allowed,
    P42_SessionManagement_T_Packet_Types_Pkg_to_long,
    compare_P42_SessionManagement_T_Packet_Types_Pkg,
    get_P42_SessionManagement_T_Packet_Types_Pkg_signature,
    init_P42_SessionManagement_T_Packet_Types_Pkg,
    release_P42_SessionManagement_T_Packet_Types_Pkg,
    copy_P42_SessionManagement_T_Packet_Types_Pkg,
    sizeof(P42_SessionManagement_T_Packet_Types_Pkg)
};

/****************************************************************
 ** p42_sessionManagement_T_RCM_MsgTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable;
#endif

static SimConstValUtils const p42_sessionManagement_T_RCM_MsgTypes_Pkg_constants[] = {
    { "RCM_MsgTypes_Pkg::cNo_p42_SessionManagement", &TU_cNo_p42_SessionManagement_RCM_MsgTypes_Pkg },
    { "cNo_p42_SessionManagement", &TU_cNo_p42_SessionManagement_RCM_MsgTypes_Pkg },
};

static SimFieldUtils p42_sessionManagement_T_RCM_MsgTypes_Pkg_fields[] = {
    {"valid", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"msgSrc", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"q_dir", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,q_dir), &_Type_Q_DIR_Utils},
    {"q_rbc", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,q_rbc), &_Type_Q_RBC_Utils},
    {"nid_c", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,nid_c), &_Type_NID_C_Utils},
    {"nid_RBC", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,nid_RBC), &_Type_NID_RBC_Utils},
    {"nid_radio", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,nid_radio), &_Type_NID_RADIO_Utils},
    {"q_sleepsession", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,q_sleepsession), &_Type_Q_SLEEPSESSION_Utils},
    {"origin", offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg,origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
};

int p42_sessionManagement_T_RCM_MsgTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, p42_sessionManagement_T_RCM_MsgTypes_Pkg_fields, 9, pfnStrAppend, pStrObj);
}

int check_p42_sessionManagement_T_RCM_MsgTypes_Pkg_string(const char *str, char **endptr)
{
    static p42_sessionManagement_T_RCM_MsgTypes_Pkg rTemp;
    return string_to_p42_sessionManagement_T_RCM_MsgTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_p42_sessionManagement_T_RCM_MsgTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, p42_sessionManagement_T_RCM_MsgTypes_Pkg_constants, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg_constants) / sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg_constants[0]), sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, p42_sessionManagement_T_RCM_MsgTypes_Pkg_fields, 9, endptr);
    }
    return nRet;
}

int is_p42_sessionManagement_T_RCM_MsgTypes_Pkg_double_conversion_allowed()
{
    if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int p42_sessionManagement_T_RCM_MsgTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_p42_sessionManagement_T_RCM_MsgTypes_Pkg_long_conversion_allowed()
{
    if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable);
    }
    return 0;
}

int p42_sessionManagement_T_RCM_MsgTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_p42_sessionManagement_T_RCM_MsgTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable != NULL
        && pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable->m_version >= Scv612
        && pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimp42_sessionManagement_T_RCM_MsgTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, p42_sessionManagement_T_RCM_MsgTypes_Pkg_fields, 9, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_p42_sessionManagement_T_RCM_MsgTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(p42_sessionManagement_T_RCM_MsgTypes_Pkg_fields, 9, pfnStrAppend, pStrObj);
}

int init_p42_sessionManagement_T_RCM_MsgTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->valid));
    init_MsgSource_T_Common_Types_Pkg(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->msgSrc));
    init_Q_DIR(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->q_dir));
    init_Q_RBC(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->q_rbc));
    init_NID_C(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->nid_c));
    init_NID_RBC(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->nid_RBC));
    init_NID_RADIO(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->nid_radio));
    init_Q_SLEEPSESSION(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->q_sleepsession));
    init_RBC_Id_T_Common_Types_Pkg(&(((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pValue)->origin));
    return 1;
}

int release_p42_sessionManagement_T_RCM_MsgTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg((p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pToValue, (p42_sessionManagement_T_RCM_MsgTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils = {
    p42_sessionManagement_T_RCM_MsgTypes_Pkg_to_string,
    check_p42_sessionManagement_T_RCM_MsgTypes_Pkg_string,
    string_to_p42_sessionManagement_T_RCM_MsgTypes_Pkg,
    is_p42_sessionManagement_T_RCM_MsgTypes_Pkg_double_conversion_allowed,
    p42_sessionManagement_T_RCM_MsgTypes_Pkg_to_double,
    is_p42_sessionManagement_T_RCM_MsgTypes_Pkg_long_conversion_allowed,
    p42_sessionManagement_T_RCM_MsgTypes_Pkg_to_long,
    compare_p42_sessionManagement_T_RCM_MsgTypes_Pkg,
    get_p42_sessionManagement_T_RCM_MsgTypes_Pkg_signature,
    init_p42_sessionManagement_T_RCM_MsgTypes_Pkg,
    release_p42_sessionManagement_T_RCM_MsgTypes_Pkg,
    copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg,
    sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg)
};

/****************************************************************
 ** P45_RadioNetworkRegistration_T_Packet_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable;
#endif

static SimConstValUtils const P45_RadioNetworkRegistration_T_Packet_Types_Pkg_constants[] = {
    { "RCM_Types_Pkg::cNoP45_RadioNetworkRegistration", &TU_cNoP45_RadioNetworkRegistration_RCM_Types_Pkg },
    { "cNoP45_RadioNetworkRegistration", &TU_cNoP45_RadioNetworkRegistration_RCM_Types_Pkg },
};

static SimFieldUtils P45_RadioNetworkRegistration_T_Packet_Types_Pkg_fields[] = {
    {"valid", offsetof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg,q_dir), &_Type_Q_DIR_Utils},
    {"nid_mn", offsetof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg,nid_mn), &_Type_NID_MN_Utils},
};

int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL
        && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, P45_RadioNetworkRegistration_T_Packet_Types_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int check_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_string(const char *str, char **endptr)
{
    static P45_RadioNetworkRegistration_T_Packet_Types_Pkg rTemp;
    return string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, P45_RadioNetworkRegistration_T_Packet_Types_Pkg_constants, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg_constants) / sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg_constants[0]), sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, P45_RadioNetworkRegistration_T_Packet_Types_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_double_conversion_allowed()
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable);
    }
    return 0;
}

int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_long_conversion_allowed()
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable);
    }
    return 0;
}

int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != NULL
        && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_version >= Scv612
        && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, P45_RadioNetworkRegistration_T_Packet_Types_Pkg_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(P45_RadioNetworkRegistration_T_Packet_Types_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((P45_RadioNetworkRegistration_T_Packet_Types_Pkg*)pValue)->valid));
    init_Q_DIR(&(((P45_RadioNetworkRegistration_T_Packet_Types_Pkg*)pValue)->q_dir));
    init_NID_MN(&(((P45_RadioNetworkRegistration_T_Packet_Types_Pkg*)pValue)->nid_mn));
    return 1;
}

int release_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg((P45_RadioNetworkRegistration_T_Packet_Types_Pkg*)pToValue, (P45_RadioNetworkRegistration_T_Packet_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils = {
    P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_string,
    check_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_string,
    string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
    is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_double_conversion_allowed,
    P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_double,
    is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_long_conversion_allowed,
    P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_long,
    compare_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
    get_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_signature,
    init_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
    release_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
    copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
    sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg)
};

/****************************************************************
 ** Position_Report_based_on_two_balise_groups_TrainToTrack 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable_defined
    extern struct SimTypeVTable *pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable;
  #else 
    struct SimTypeVTable *pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable;
#endif

static SimFieldUtils Position_Report_based_on_two_balise_groups_TrainToTrack_fields[] = {
    {"NID_PACKET", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,NID_PACKET), &_Type_kcg_int32_Utils},
    {"L_PACKET", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,L_PACKET), &_Type_kcg_int32_Utils},
    {"qscale", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,qscale), &_Type_Q_SCALE_Utils},
    {"NID_LRBG", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,NID_LRBG), &_Type_kcg_int32_Utils},
    {"NID_PRVLRBG", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,NID_PRVLRBG), &_Type_kcg_int32_Utils},
    {"D_LRBG", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,D_LRBG), &_Type_kcg_int32_Utils},
    {"dirlrbg", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,dirlrbg), &_Type_Q_DIRLRBG_Utils},
    {"dlrbg", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,dlrbg), &_Type_Q_DLRBG_Utils},
    {"L_DOUBTOVER", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,L_DOUBTOVER), &_Type_kcg_int32_Utils},
    {"L_DOUBTUNDER", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,L_DOUBTUNDER), &_Type_kcg_int32_Utils},
    {"length", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,length), &_Type_Q_LENGTH_Utils},
    {"L_TRAININT", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,L_TRAININT), &_Type_kcg_int32_Utils},
    {"V_TRAIN", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,V_TRAIN), &_Type_kcg_int32_Utils},
    {"dirtrain", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,dirtrain), &_Type_Q_DIRTRAIN_Utils},
    {"mode", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,mode), &_Type_M_MODE_Utils},
    {"level", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,level), &_Type_M_LEVEL_Utils},
    {"NID_NTC", offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack,NID_NTC), &_Type_kcg_int32_Utils},
};

int Position_Report_based_on_two_balise_groups_TrainToTrack_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL
        && pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, Position_Report_based_on_two_balise_groups_TrainToTrack_fields, 17, pfnStrAppend, pStrObj);
}

int check_Position_Report_based_on_two_balise_groups_TrainToTrack_string(const char *str, char **endptr)
{
    static Position_Report_based_on_two_balise_groups_TrainToTrack rTemp;
    return string_to_Position_Report_based_on_two_balise_groups_TrainToTrack(str, (void*)&rTemp, endptr);
}

int string_to_Position_Report_based_on_two_balise_groups_TrainToTrack(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        nRet = string_to_VTable(str, pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, Position_Report_based_on_two_balise_groups_TrainToTrack_fields, 17, endptr);
    }
    return nRet;
}

int is_Position_Report_based_on_two_balise_groups_TrainToTrack_double_conversion_allowed()
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable);
    }
    return 0;
}

int Position_Report_based_on_two_balise_groups_TrainToTrack_to_double(const void *pValue, double *nValue)
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return VTable_to_double(pValue, pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable, nValue);
    }
    return 0;
}

int is_Position_Report_based_on_two_balise_groups_TrainToTrack_long_conversion_allowed()
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable);
    }
    return 0;
}

int Position_Report_based_on_two_balise_groups_TrainToTrack_to_long(const void *pValue, long *nValue)
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return VTable_to_long(pValue, pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable, nValue);
    }
    return 0;
}

void compare_Position_Report_based_on_two_balise_groups_TrainToTrack(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL
        && pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_version >= Scv612
        && pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnCompare != NULL) {
        if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Position_Report_based_on_two_balise_groups_TrainToTrack_fields, 17, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Position_Report_based_on_two_balise_groups_TrainToTrack_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(Position_Report_based_on_two_balise_groups_TrainToTrack_fields, 17, pfnStrAppend, pStrObj);
}

int init_Position_Report_based_on_two_balise_groups_TrainToTrack(void *pValue)
{
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->NID_PACKET));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->L_PACKET));
    init_Q_SCALE(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->qscale));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->NID_LRBG));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->NID_PRVLRBG));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->D_LRBG));
    init_Q_DIRLRBG(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->dirlrbg));
    init_Q_DLRBG(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->dlrbg));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->L_DOUBTOVER));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->L_DOUBTUNDER));
    init_Q_LENGTH(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->length));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->L_TRAININT));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->V_TRAIN));
    init_Q_DIRTRAIN(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->dirtrain));
    init_M_MODE(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->mode));
    init_M_LEVEL(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->level));
    init_kcg_int32(&(((Position_Report_based_on_two_balise_groups_TrainToTrack*)pValue)->NID_NTC));
    return 1;
}

int release_Position_Report_based_on_two_balise_groups_TrainToTrack(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Position_Report_based_on_two_balise_groups_TrainToTrack(void *pToValue, const void *pFromValue)
{
    kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack((Position_Report_based_on_two_balise_groups_TrainToTrack*)pToValue, (Position_Report_based_on_two_balise_groups_TrainToTrack*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Position_Report_based_on_two_balise_groups_TrainToTrack_Utils = {
    Position_Report_based_on_two_balise_groups_TrainToTrack_to_string,
    check_Position_Report_based_on_two_balise_groups_TrainToTrack_string,
    string_to_Position_Report_based_on_two_balise_groups_TrainToTrack,
    is_Position_Report_based_on_two_balise_groups_TrainToTrack_double_conversion_allowed,
    Position_Report_based_on_two_balise_groups_TrainToTrack_to_double,
    is_Position_Report_based_on_two_balise_groups_TrainToTrack_long_conversion_allowed,
    Position_Report_based_on_two_balise_groups_TrainToTrack_to_long,
    compare_Position_Report_based_on_two_balise_groups_TrainToTrack,
    get_Position_Report_based_on_two_balise_groups_TrainToTrack_signature,
    init_Position_Report_based_on_two_balise_groups_TrainToTrack,
    release_Position_Report_based_on_two_balise_groups_TrainToTrack,
    copy_Position_Report_based_on_two_balise_groups_TrainToTrack,
    sizeof(Position_Report_based_on_two_balise_groups_TrainToTrack)
};

/****************************************************************
 ** Position_Report_TrainToTrack 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPosition_Report_TrainToTrackVTable_defined
    extern struct SimTypeVTable *pSimPosition_Report_TrainToTrackVTable;
  #else 
    struct SimTypeVTable *pSimPosition_Report_TrainToTrackVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPosition_Report_TrainToTrackVTable;
#endif

static SimFieldUtils Position_Report_TrainToTrack_fields[] = {
    {"NID_PACKET", offsetof(Position_Report_TrainToTrack,NID_PACKET), &_Type_kcg_int32_Utils},
    {"L_PACKET", offsetof(Position_Report_TrainToTrack,L_PACKET), &_Type_kcg_int32_Utils},
    {"qscale", offsetof(Position_Report_TrainToTrack,qscale), &_Type_Q_SCALE_Utils},
    {"NID_LRBG", offsetof(Position_Report_TrainToTrack,NID_LRBG), &_Type_kcg_int32_Utils},
    {"D_LRBG", offsetof(Position_Report_TrainToTrack,D_LRBG), &_Type_kcg_int32_Utils},
    {"dirlrbg", offsetof(Position_Report_TrainToTrack,dirlrbg), &_Type_Q_DIRLRBG_Utils},
    {"dlrbg", offsetof(Position_Report_TrainToTrack,dlrbg), &_Type_Q_DLRBG_Utils},
    {"L_DOUBTOVER", offsetof(Position_Report_TrainToTrack,L_DOUBTOVER), &_Type_kcg_int32_Utils},
    {"L_DOUBTUNDER", offsetof(Position_Report_TrainToTrack,L_DOUBTUNDER), &_Type_kcg_int32_Utils},
    {"length", offsetof(Position_Report_TrainToTrack,length), &_Type_Q_LENGTH_Utils},
    {"L_TRAININT", offsetof(Position_Report_TrainToTrack,L_TRAININT), &_Type_kcg_int32_Utils},
    {"V_TRAIN", offsetof(Position_Report_TrainToTrack,V_TRAIN), &_Type_kcg_int32_Utils},
    {"dirtrain", offsetof(Position_Report_TrainToTrack,dirtrain), &_Type_Q_DIRTRAIN_Utils},
    {"mode", offsetof(Position_Report_TrainToTrack,mode), &_Type_M_MODE_Utils},
    {"level", offsetof(Position_Report_TrainToTrack,level), &_Type_M_LEVEL_Utils},
    {"NID_NTC", offsetof(Position_Report_TrainToTrack,NID_NTC), &_Type_kcg_int32_Utils},
};

int Position_Report_TrainToTrack_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL
        && pSimPosition_Report_TrainToTrackVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPosition_Report_TrainToTrackVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, Position_Report_TrainToTrack_fields, 16, pfnStrAppend, pStrObj);
}

int check_Position_Report_TrainToTrack_string(const char *str, char **endptr)
{
    static Position_Report_TrainToTrack rTemp;
    return string_to_Position_Report_TrainToTrack(str, (void*)&rTemp, endptr);
}

int string_to_Position_Report_TrainToTrack(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        nRet = string_to_VTable(str, pSimPosition_Report_TrainToTrackVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, Position_Report_TrainToTrack_fields, 16, endptr);
    }
    return nRet;
}

int is_Position_Report_TrainToTrack_double_conversion_allowed()
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPosition_Report_TrainToTrackVTable);
    }
    return 0;
}

int Position_Report_TrainToTrack_to_double(const void *pValue, double *nValue)
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return VTable_to_double(pValue, pSimPosition_Report_TrainToTrackVTable, nValue);
    }
    return 0;
}

int is_Position_Report_TrainToTrack_long_conversion_allowed()
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPosition_Report_TrainToTrackVTable);
    }
    return 0;
}

int Position_Report_TrainToTrack_to_long(const void *pValue, long *nValue)
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return VTable_to_long(pValue, pSimPosition_Report_TrainToTrackVTable, nValue);
    }
    return 0;
}

void compare_Position_Report_TrainToTrack(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPosition_Report_TrainToTrackVTable != NULL
        && pSimPosition_Report_TrainToTrackVTable->m_version >= Scv612
        && pSimPosition_Report_TrainToTrackVTable->m_pfnCompare != NULL) {
        if (pSimPosition_Report_TrainToTrackVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPosition_Report_TrainToTrackVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPosition_Report_TrainToTrackVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Position_Report_TrainToTrack_fields, 16, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Position_Report_TrainToTrack_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(Position_Report_TrainToTrack_fields, 16, pfnStrAppend, pStrObj);
}

int init_Position_Report_TrainToTrack(void *pValue)
{
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->NID_PACKET));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->L_PACKET));
    init_Q_SCALE(&(((Position_Report_TrainToTrack*)pValue)->qscale));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->NID_LRBG));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->D_LRBG));
    init_Q_DIRLRBG(&(((Position_Report_TrainToTrack*)pValue)->dirlrbg));
    init_Q_DLRBG(&(((Position_Report_TrainToTrack*)pValue)->dlrbg));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->L_DOUBTOVER));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->L_DOUBTUNDER));
    init_Q_LENGTH(&(((Position_Report_TrainToTrack*)pValue)->length));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->L_TRAININT));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->V_TRAIN));
    init_Q_DIRTRAIN(&(((Position_Report_TrainToTrack*)pValue)->dirtrain));
    init_M_MODE(&(((Position_Report_TrainToTrack*)pValue)->mode));
    init_M_LEVEL(&(((Position_Report_TrainToTrack*)pValue)->level));
    init_kcg_int32(&(((Position_Report_TrainToTrack*)pValue)->NID_NTC));
    return 1;
}

int release_Position_Report_TrainToTrack(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Position_Report_TrainToTrack(void *pToValue, const void *pFromValue)
{
    kcg_copy_Position_Report_TrainToTrack((Position_Report_TrainToTrack*)pToValue, (Position_Report_TrainToTrack*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Position_Report_TrainToTrack_Utils = {
    Position_Report_TrainToTrack_to_string,
    check_Position_Report_TrainToTrack_string,
    string_to_Position_Report_TrainToTrack,
    is_Position_Report_TrainToTrack_double_conversion_allowed,
    Position_Report_TrainToTrack_to_double,
    is_Position_Report_TrainToTrack_long_conversion_allowed,
    Position_Report_TrainToTrack_to_long,
    compare_Position_Report_TrainToTrack,
    get_Position_Report_TrainToTrack_signature,
    init_Position_Report_TrainToTrack,
    release_Position_Report_TrainToTrack,
    copy_Position_Report_TrainToTrack,
    sizeof(Position_Report_TrainToTrack)
};

/****************************************************************
 ** PT0_PositionReport_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils PT0_PositionReport_T_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(PT0_PositionReport_T_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"packet0", offsetof(PT0_PositionReport_T_Packet_TrainTypes_Pkg,packet0), &_Type_Position_Report_TrainToTrack_Utils},
};

int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, PT0_PositionReport_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_PT0_PositionReport_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT0_PositionReport_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, PT0_PositionReport_T_Packet_TrainTypes_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_PT0_PositionReport_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, PT0_PositionReport_T_Packet_TrainTypes_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PT0_PositionReport_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(PT0_PositionReport_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_PT0_PositionReport_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((PT0_PositionReport_T_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_Position_Report_TrainToTrack(&(((PT0_PositionReport_T_Packet_TrainTypes_Pkg*)pValue)->packet0));
    return 1;
}

int release_PT0_PositionReport_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg((PT0_PositionReport_T_Packet_TrainTypes_Pkg*)pToValue, (PT0_PositionReport_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils = {
    PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_string,
    check_PT0_PositionReport_T_Packet_TrainTypes_Pkg_string,
    string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg,
    is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_double,
    is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT0_PositionReport_T_Packet_TrainTypes_Pkg,
    get_PT0_PositionReport_T_Packet_TrainTypes_Pkg_signature,
    init_PT0_PositionReport_T_Packet_TrainTypes_Pkg,
    release_PT0_PositionReport_T_Packet_TrainTypes_Pkg,
    copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg,
    sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"nc_cdtrain", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,nc_cdtrain), &_Type_NC_CDTRAIN_Utils},
    {"nc_train", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,nc_train), &_Type_NC_TRAIN_Utils},
    {"l_train", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,l_train), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"v_maxtrain", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,v_maxtrain), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"m_loadinggoage", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,m_loadinggoage), &_Type_M_LOADINGGAUGE_Utils},
    {"m_axleloadcat", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,m_axleloadcat), &_Type_M_AXLELOADCAT_Utils},
    {"m_airtight", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,m_airtight), &_Type_M_AIRTIGHT_Utils},
    {"n_axle", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,n_axle), &_Type_N_AXLE_Utils},
    {"nIter_tractionIdentity", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,nIter_tractionIdentity), &_Type_kcg_int32_Utils},
    {"tractionIdentity", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,tractionIdentity), &_Type_aTractionIdentity_T_Packet_TrainTypes_Pkg_Utils},
    {"nIter_ntc", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,nIter_ntc), &_Type_kcg_int32_Utils},
    {"nid_ntc", offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,nid_ntc), &_Type_aNID_NTC_T_Packet_TrainTypes_Pkg_Utils},
};

int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_fields, 13, pfnStrAppend, pStrObj);
}

int check_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_fields, 13, endptr);
    }
    return nRet;
}

int is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_fields, 13, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_fields, 13, pfnStrAppend, pStrObj);
}

int init_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_NC_CDTRAIN(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->nc_cdtrain));
    init_NC_TRAIN(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->nc_train));
    init_L_internal_Type_Obu_BasicTypes_Pkg(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->l_train));
    init_V_internal_Type_Obu_BasicTypes_Pkg(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->v_maxtrain));
    init_M_LOADINGGAUGE(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->m_loadinggoage));
    init_M_AXLELOADCAT(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->m_axleloadcat));
    init_M_AIRTIGHT(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->m_airtight));
    init_N_AXLE(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->n_axle));
    init_kcg_int32(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->nIter_tractionIdentity));
    init_aTractionIdentity_T_Packet_TrainTypes_Pkg(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->tractionIdentity));
    init_kcg_int32(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->nIter_ntc));
    init_aNID_NTC_T_Packet_TrainTypes_Pkg(&(((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pValue)->nid_ntc));
    return 1;
}

int release_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg((PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pToValue, (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils = {
    PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_string,
    check_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_string,
    string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,
    is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_double,
    is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,
    get_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_signature,
    init_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,
    release_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,
    copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,
    sizeof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"packet1", offsetof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,packet1), &_Type_Position_Report_based_on_two_balise_groups_TrainToTrack_Utils},
};

int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_Position_Report_based_on_two_balise_groups_TrainToTrack(&(((PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg*)pValue)->packet1));
    return 1;
}

int release_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg((PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg*)pToValue, (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils = {
    PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_string,
    check_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_string,
    string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,
    is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_double,
    is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,
    get_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_signature,
    init_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,
    release_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,
    copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,
    sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"number", offsetof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,number), &_Type_kcg_int32_Utils},
    {"aNID_RADIO", offsetof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,aNID_RADIO), &_Type_aNID_RADIO_T_Packet_TrainTypes_Pkg_Utils},
};

int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int check_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_fields, 3, endptr);
    }
    return nRet;
}

int is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_fields, 3, pfnStrAppend, pStrObj);
}

int init_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_kcg_int32(&(((PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg*)pValue)->number));
    init_aNID_RADIO_T_Packet_TrainTypes_Pkg(&(((PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg*)pValue)->aNID_RADIO));
    return 1;
}

int release_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg((PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg*)pToValue, (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils = {
    PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_string,
    check_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_string,
    string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,
    is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_double,
    is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,
    get_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_signature,
    init_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,
    release_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,
    copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,
    sizeof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT4_ErrorReporting_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"m_error", offsetof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,m_error), &_Type_M_ERROR_Utils},
};

int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((PT4_ErrorReporting_T_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_M_ERROR(&(((PT4_ErrorReporting_T_Packet_TrainTypes_Pkg*)pValue)->m_error));
    return 1;
}

int release_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg((PT4_ErrorReporting_T_Packet_TrainTypes_Pkg*)pToValue, (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils = {
    PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_string,
    check_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_string,
    string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,
    is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_double,
    is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,
    get_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_signature,
    init_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,
    release_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,
    copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,
    sizeof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT5_TrainRunningNumber_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"TrainRunningNumber", offsetof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,TrainRunningNumber), &_Type_NID_OPERATIONAL_Utils},
};

int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((PT5_TrainRunningNumber_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_NID_OPERATIONAL(&(((PT5_TrainRunningNumber_Packet_TrainTypes_Pkg*)pValue)->TrainRunningNumber));
    return 1;
}

int release_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg((PT5_TrainRunningNumber_Packet_TrainTypes_Pkg*)pToValue, (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils = {
    PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_string,
    check_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_string,
    string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,
    is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_double,
    is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_long_conversion_allowed,
    PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_long,
    compare_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,
    get_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_signature,
    init_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,
    release_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,
    copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,
    sizeof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"transitionInformation", offsetof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,transitionInformation), &_Type_NID_LTRBG_Utils},
};

int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_NID_LTRBG(&(((PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg*)pValue)->transitionInformation));
    return 1;
}

int release_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg((PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg*)pToValue, (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils = {
    PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_string,
    check_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_string,
    string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,
    is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_double,
    is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,
    get_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_signature,
    init_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,
    release_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,
    copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,
    sizeof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** Q_DIR 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_DIRVTable_defined
    extern struct SimTypeVTable *pSimQ_DIRVTable;
  #else 
    struct SimTypeVTable *pSimQ_DIRVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_DIRVTable;
#endif

static SimConstValUtils const Q_DIR_constants[] = {
    { "TM_conversions::ENUM_Q_DIR_both", &TU_ENUM_Q_DIR_both_TM_conversions },
    { "ENUM_Q_DIR_both", &TU_ENUM_Q_DIR_both_TM_conversions },
    { "TM_conversions::ENUM_Q_DIR_reverse", &TU_ENUM_Q_DIR_reverse_TM_conversions },
    { "ENUM_Q_DIR_reverse", &TU_ENUM_Q_DIR_reverse_TM_conversions },
    { "TM_conversions::ENUM_Q_DIR_nominal", &TU_ENUM_Q_DIR_nominal_TM_conversions },
    { "ENUM_Q_DIR_nominal", &TU_ENUM_Q_DIR_nominal_TM_conversions },
};

static SimEnumValUtils Q_DIR_values[] = {
    { "Q_DIR_Reverse", Q_DIR_Reverse},
    { "Q_DIR_Reverse", Q_DIR_Reverse},
    { "Q_DIR_Nominal", Q_DIR_Nominal},
    { "Q_DIR_Nominal", Q_DIR_Nominal},
    { "Q_DIR_Both_directions", Q_DIR_Both_directions},
    { "Q_DIR_Both_directions", Q_DIR_Both_directions},
};
const int Q_DIR_nb_values = 6;

int Q_DIR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIR*)pValue, Q_DIR_values, Q_DIR_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_DIR_string(const char *str, char **endptr)
{
    static Q_DIR rTemp;
    return string_to_Q_DIR(str, (void*)&rTemp, endptr);
}

int string_to_Q_DIR(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_DIRVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_DIRVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, Q_DIR_constants, sizeof(Q_DIR_constants) / sizeof(Q_DIR_constants[0]), sizeof(Q_DIR), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIR_values, Q_DIR_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIR*)pValue = (Q_DIR)nTemp;
    }
    return nRet;
}

int is_Q_DIR_double_conversion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DIRVTable);
    }
    return 1;
}

int Q_DIR_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_DIRVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRVTable, nValue);
    }
    *nValue = (double)*((Q_DIR*)pValue);
    return 1;
}

int is_Q_DIR_long_conversion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_DIRVTable);
    }
    return 1;
}

int Q_DIR_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_DIRVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DIRVTable, nValue);
    }
    *nValue = (long)*((Q_DIR*)pValue);
    return 1;
}

void compare_Q_DIR(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_version >= Scv612
        && pSimQ_DIRVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_DIRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_DIRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIR*)pValue1), (int)(*(Q_DIR*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_DIR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_DIR_values, Q_DIR_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_DIR(void *pValue)
{
    *(Q_DIR*)pValue = Q_DIR_Reverse;
    return 1;
}

int release_Q_DIR(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_DIR(void *pToValue, const void *pFromValue)
{
    *((Q_DIR*)pToValue) = *((Q_DIR*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_DIR_Utils = {
    Q_DIR_to_string,
    check_Q_DIR_string,
    string_to_Q_DIR,
    is_Q_DIR_double_conversion_allowed,
    Q_DIR_to_double,
    is_Q_DIR_long_conversion_allowed,
    Q_DIR_to_long,
    compare_Q_DIR,
    get_Q_DIR_signature,
    init_Q_DIR,
    release_Q_DIR,
    copy_Q_DIR,
    sizeof(Q_DIR)
};

/****************************************************************
 ** Q_DIRLRBG 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_DIRLRBGVTable_defined
    extern struct SimTypeVTable *pSimQ_DIRLRBGVTable;
  #else 
    struct SimTypeVTable *pSimQ_DIRLRBGVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_DIRLRBGVTable;
#endif

static SimEnumValUtils Q_DIRLRBG_values[] = {
    { "Q_DIRLRBG_Reverse", Q_DIRLRBG_Reverse},
    { "Q_DIRLRBG_Reverse", Q_DIRLRBG_Reverse},
    { "Q_DIRLRBG_Nominal", Q_DIRLRBG_Nominal},
    { "Q_DIRLRBG_Nominal", Q_DIRLRBG_Nominal},
    { "Q_DIRLRBG_Unknown", Q_DIRLRBG_Unknown},
    { "Q_DIRLRBG_Unknown", Q_DIRLRBG_Unknown},
};
const int Q_DIRLRBG_nb_values = 6;

int Q_DIRLRBG_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_DIRLRBGVTable != NULL
        && pSimQ_DIRLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRLRBGVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRLRBG*)pValue, Q_DIRLRBG_values, Q_DIRLRBG_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_DIRLRBG_string(const char *str, char **endptr)
{
    static Q_DIRLRBG rTemp;
    return string_to_Q_DIRLRBG(str, (void*)&rTemp, endptr);
}

int string_to_Q_DIRLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_DIRLRBGVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_DIRLRBGVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRLRBG_values, Q_DIRLRBG_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRLRBG*)pValue = (Q_DIRLRBG)nTemp;
    }
    return nRet;
}

int is_Q_DIRLRBG_double_conversion_allowed()
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DIRLRBGVTable);
    }
    return 1;
}

int Q_DIRLRBG_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRLRBGVTable, nValue);
    }
    *nValue = (double)*((Q_DIRLRBG*)pValue);
    return 1;
}

int is_Q_DIRLRBG_long_conversion_allowed()
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_DIRLRBGVTable);
    }
    return 1;
}

int Q_DIRLRBG_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DIRLRBGVTable, nValue);
    }
    *nValue = (long)*((Q_DIRLRBG*)pValue);
    return 1;
}

void compare_Q_DIRLRBG(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_DIRLRBGVTable != NULL
        && pSimQ_DIRLRBGVTable->m_version >= Scv612
        && pSimQ_DIRLRBGVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRLRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_DIRLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_DIRLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRLRBG*)pValue1), (int)(*(Q_DIRLRBG*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_DIRLRBG_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_DIRLRBG_values, Q_DIRLRBG_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_DIRLRBG(void *pValue)
{
    *(Q_DIRLRBG*)pValue = Q_DIRLRBG_Reverse;
    return 1;
}

int release_Q_DIRLRBG(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_DIRLRBG(void *pToValue, const void *pFromValue)
{
    *((Q_DIRLRBG*)pToValue) = *((Q_DIRLRBG*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_DIRLRBG_Utils = {
    Q_DIRLRBG_to_string,
    check_Q_DIRLRBG_string,
    string_to_Q_DIRLRBG,
    is_Q_DIRLRBG_double_conversion_allowed,
    Q_DIRLRBG_to_double,
    is_Q_DIRLRBG_long_conversion_allowed,
    Q_DIRLRBG_to_long,
    compare_Q_DIRLRBG,
    get_Q_DIRLRBG_signature,
    init_Q_DIRLRBG,
    release_Q_DIRLRBG,
    copy_Q_DIRLRBG,
    sizeof(Q_DIRLRBG)
};

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_DIRTRAINVTable_defined
    extern struct SimTypeVTable *pSimQ_DIRTRAINVTable;
  #else 
    struct SimTypeVTable *pSimQ_DIRTRAINVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_DIRTRAINVTable;
#endif

static SimEnumValUtils Q_DIRTRAIN_values[] = {
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
};
const int Q_DIRTRAIN_nb_values = 6;

int Q_DIRTRAIN_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRTRAINVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRTRAIN*)pValue, Q_DIRTRAIN_values, Q_DIRTRAIN_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_DIRTRAIN_string(const char *str, char **endptr)
{
    static Q_DIRTRAIN rTemp;
    return string_to_Q_DIRTRAIN(str, (void*)&rTemp, endptr);
}

int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_DIRTRAINVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_DIRTRAINVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRTRAIN_values, Q_DIRTRAIN_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRTRAIN*)pValue = (Q_DIRTRAIN)nTemp;
    }
    return nRet;
}

int is_Q_DIRTRAIN_double_conversion_allowed()
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DIRTRAINVTable);
    }
    return 1;
}

int Q_DIRTRAIN_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRTRAINVTable, nValue);
    }
    *nValue = (double)*((Q_DIRTRAIN*)pValue);
    return 1;
}

int is_Q_DIRTRAIN_long_conversion_allowed()
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_DIRTRAINVTable);
    }
    return 1;
}

int Q_DIRTRAIN_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DIRTRAINVTable, nValue);
    }
    *nValue = (long)*((Q_DIRTRAIN*)pValue);
    return 1;
}

void compare_Q_DIRTRAIN(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_version >= Scv612
        && pSimQ_DIRTRAINVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRTRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_DIRTRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_DIRTRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRTRAIN*)pValue1), (int)(*(Q_DIRTRAIN*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_DIRTRAIN_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_DIRTRAIN_values, Q_DIRTRAIN_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_DIRTRAIN(void *pValue)
{
    *(Q_DIRTRAIN*)pValue = Q_DIRTRAIN_Reverse;
    return 1;
}

int release_Q_DIRTRAIN(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_DIRTRAIN(void *pToValue, const void *pFromValue)
{
    *((Q_DIRTRAIN*)pToValue) = *((Q_DIRTRAIN*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_DIRTRAIN_Utils = {
    Q_DIRTRAIN_to_string,
    check_Q_DIRTRAIN_string,
    string_to_Q_DIRTRAIN,
    is_Q_DIRTRAIN_double_conversion_allowed,
    Q_DIRTRAIN_to_double,
    is_Q_DIRTRAIN_long_conversion_allowed,
    Q_DIRTRAIN_to_long,
    compare_Q_DIRTRAIN,
    get_Q_DIRTRAIN_signature,
    init_Q_DIRTRAIN,
    release_Q_DIRTRAIN,
    copy_Q_DIRTRAIN,
    sizeof(Q_DIRTRAIN)
};

/****************************************************************
 ** Q_DLRBG 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_DLRBGVTable_defined
    extern struct SimTypeVTable *pSimQ_DLRBGVTable;
  #else 
    struct SimTypeVTable *pSimQ_DLRBGVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_DLRBGVTable;
#endif

static SimEnumValUtils Q_DLRBG_values[] = {
    { "Q_DLRBG_Reverse", Q_DLRBG_Reverse},
    { "Q_DLRBG_Reverse", Q_DLRBG_Reverse},
    { "Q_DLRBG_Nominal", Q_DLRBG_Nominal},
    { "Q_DLRBG_Nominal", Q_DLRBG_Nominal},
    { "Q_DLRBG_Unknown", Q_DLRBG_Unknown},
    { "Q_DLRBG_Unknown", Q_DLRBG_Unknown},
};
const int Q_DLRBG_nb_values = 6;

int Q_DLRBG_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_DLRBGVTable != NULL
        && pSimQ_DLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DLRBGVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_DLRBG*)pValue, Q_DLRBG_values, Q_DLRBG_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_DLRBG_string(const char *str, char **endptr)
{
    static Q_DLRBG rTemp;
    return string_to_Q_DLRBG(str, (void*)&rTemp, endptr);
}

int string_to_Q_DLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_DLRBGVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_DLRBGVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DLRBG_values, Q_DLRBG_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DLRBG*)pValue = (Q_DLRBG)nTemp;
    }
    return nRet;
}

int is_Q_DLRBG_double_conversion_allowed()
{
    if (pSimQ_DLRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DLRBGVTable);
    }
    return 1;
}

int Q_DLRBG_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_DLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DLRBGVTable, nValue);
    }
    *nValue = (double)*((Q_DLRBG*)pValue);
    return 1;
}

int is_Q_DLRBG_long_conversion_allowed()
{
    if (pSimQ_DLRBGVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_DLRBGVTable);
    }
    return 1;
}

int Q_DLRBG_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_DLRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DLRBGVTable, nValue);
    }
    *nValue = (long)*((Q_DLRBG*)pValue);
    return 1;
}

void compare_Q_DLRBG(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_DLRBGVTable != NULL
        && pSimQ_DLRBGVTable->m_version >= Scv612
        && pSimQ_DLRBGVTable->m_pfnCompare != NULL) {
        if (pSimQ_DLRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_DLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_DLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DLRBG*)pValue1), (int)(*(Q_DLRBG*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_DLRBG_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_DLRBG_values, Q_DLRBG_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_DLRBG(void *pValue)
{
    *(Q_DLRBG*)pValue = Q_DLRBG_Reverse;
    return 1;
}

int release_Q_DLRBG(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_DLRBG(void *pToValue, const void *pFromValue)
{
    *((Q_DLRBG*)pToValue) = *((Q_DLRBG*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_DLRBG_Utils = {
    Q_DLRBG_to_string,
    check_Q_DLRBG_string,
    string_to_Q_DLRBG,
    is_Q_DLRBG_double_conversion_allowed,
    Q_DLRBG_to_double,
    is_Q_DLRBG_long_conversion_allowed,
    Q_DLRBG_to_long,
    compare_Q_DLRBG,
    get_Q_DLRBG_signature,
    init_Q_DLRBG,
    release_Q_DLRBG,
    copy_Q_DLRBG,
    sizeof(Q_DLRBG)
};

/****************************************************************
 ** Q_EMERGENCYSTOP 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_EMERGENCYSTOPVTable_defined
    extern struct SimTypeVTable *pSimQ_EMERGENCYSTOPVTable;
  #else 
    struct SimTypeVTable *pSimQ_EMERGENCYSTOPVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_EMERGENCYSTOPVTable;
#endif

static SimEnumValUtils Q_EMERGENCYSTOP_values[] = {
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA", Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA},
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA", Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA},
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA", Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA},
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA", Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA},
    { "Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted", Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted},
    { "Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted", Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted},
    { "Q_EMERGENCYSTOP_Emergency_stop", Q_EMERGENCYSTOP_Emergency_stop},
    { "Q_EMERGENCYSTOP_Emergency_stop", Q_EMERGENCYSTOP_Emergency_stop},
};
const int Q_EMERGENCYSTOP_nb_values = 8;

int Q_EMERGENCYSTOP_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL
        && pSimQ_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_EMERGENCYSTOPVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_EMERGENCYSTOP*)pValue, Q_EMERGENCYSTOP_values, Q_EMERGENCYSTOP_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_EMERGENCYSTOP_string(const char *str, char **endptr)
{
    static Q_EMERGENCYSTOP rTemp;
    return string_to_Q_EMERGENCYSTOP(str, (void*)&rTemp, endptr);
}

int string_to_Q_EMERGENCYSTOP(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_EMERGENCYSTOPVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_EMERGENCYSTOP_values, Q_EMERGENCYSTOP_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_EMERGENCYSTOP*)pValue = (Q_EMERGENCYSTOP)nTemp;
    }
    return nRet;
}

int is_Q_EMERGENCYSTOP_double_conversion_allowed()
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_EMERGENCYSTOPVTable);
    }
    return 1;
}

int Q_EMERGENCYSTOP_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_EMERGENCYSTOPVTable, nValue);
    }
    *nValue = (double)*((Q_EMERGENCYSTOP*)pValue);
    return 1;
}

int is_Q_EMERGENCYSTOP_long_conversion_allowed()
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_EMERGENCYSTOPVTable);
    }
    return 1;
}

int Q_EMERGENCYSTOP_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_EMERGENCYSTOPVTable, nValue);
    }
    *nValue = (long)*((Q_EMERGENCYSTOP*)pValue);
    return 1;
}

void compare_Q_EMERGENCYSTOP(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_EMERGENCYSTOPVTable != NULL
        && pSimQ_EMERGENCYSTOPVTable->m_version >= Scv612
        && pSimQ_EMERGENCYSTOPVTable->m_pfnCompare != NULL) {
        if (pSimQ_EMERGENCYSTOPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_EMERGENCYSTOPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_EMERGENCYSTOPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_EMERGENCYSTOP*)pValue1), (int)(*(Q_EMERGENCYSTOP*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_EMERGENCYSTOP_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_EMERGENCYSTOP_values, Q_EMERGENCYSTOP_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_EMERGENCYSTOP(void *pValue)
{
    *(Q_EMERGENCYSTOP*)pValue = Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
    return 1;
}

int release_Q_EMERGENCYSTOP(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_EMERGENCYSTOP(void *pToValue, const void *pFromValue)
{
    *((Q_EMERGENCYSTOP*)pToValue) = *((Q_EMERGENCYSTOP*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_EMERGENCYSTOP_Utils = {
    Q_EMERGENCYSTOP_to_string,
    check_Q_EMERGENCYSTOP_string,
    string_to_Q_EMERGENCYSTOP,
    is_Q_EMERGENCYSTOP_double_conversion_allowed,
    Q_EMERGENCYSTOP_to_double,
    is_Q_EMERGENCYSTOP_long_conversion_allowed,
    Q_EMERGENCYSTOP_to_long,
    compare_Q_EMERGENCYSTOP,
    get_Q_EMERGENCYSTOP_signature,
    init_Q_EMERGENCYSTOP,
    release_Q_EMERGENCYSTOP,
    copy_Q_EMERGENCYSTOP,
    sizeof(Q_EMERGENCYSTOP)
};

/****************************************************************
 ** Q_LENGTH 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_LENGTHVTable_defined
    extern struct SimTypeVTable *pSimQ_LENGTHVTable;
  #else 
    struct SimTypeVTable *pSimQ_LENGTHVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_LENGTHVTable;
#endif

static SimEnumValUtils Q_LENGTH_values[] = {
    { "Q_LENGTH_No_train_integrity_information_available", Q_LENGTH_No_train_integrity_information_available},
    { "Q_LENGTH_No_train_integrity_information_available", Q_LENGTH_No_train_integrity_information_available},
    { "Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device", Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device},
    { "Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device", Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device},
    { "Q_LENGTH_Train_integrity_confirmed_by_driver", Q_LENGTH_Train_integrity_confirmed_by_driver},
    { "Q_LENGTH_Train_integrity_confirmed_by_driver", Q_LENGTH_Train_integrity_confirmed_by_driver},
    { "Q_LENGTH_Train_integrity_lost", Q_LENGTH_Train_integrity_lost},
    { "Q_LENGTH_Train_integrity_lost", Q_LENGTH_Train_integrity_lost},
};
const int Q_LENGTH_nb_values = 8;

int Q_LENGTH_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_LENGTHVTable != NULL
        && pSimQ_LENGTHVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LENGTHVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_LENGTH*)pValue, Q_LENGTH_values, Q_LENGTH_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_LENGTH_string(const char *str, char **endptr)
{
    static Q_LENGTH rTemp;
    return string_to_Q_LENGTH(str, (void*)&rTemp, endptr);
}

int string_to_Q_LENGTH(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_LENGTHVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_LENGTHVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LENGTH_values, Q_LENGTH_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LENGTH*)pValue = (Q_LENGTH)nTemp;
    }
    return nRet;
}

int is_Q_LENGTH_double_conversion_allowed()
{
    if (pSimQ_LENGTHVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_LENGTHVTable);
    }
    return 1;
}

int Q_LENGTH_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_LENGTHVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LENGTHVTable, nValue);
    }
    *nValue = (double)*((Q_LENGTH*)pValue);
    return 1;
}

int is_Q_LENGTH_long_conversion_allowed()
{
    if (pSimQ_LENGTHVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_LENGTHVTable);
    }
    return 1;
}

int Q_LENGTH_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_LENGTHVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_LENGTHVTable, nValue);
    }
    *nValue = (long)*((Q_LENGTH*)pValue);
    return 1;
}

void compare_Q_LENGTH(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_LENGTHVTable != NULL
        && pSimQ_LENGTHVTable->m_version >= Scv612
        && pSimQ_LENGTHVTable->m_pfnCompare != NULL) {
        if (pSimQ_LENGTHVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_LENGTHVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_LENGTHVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LENGTH*)pValue1), (int)(*(Q_LENGTH*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_LENGTH_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_LENGTH_values, Q_LENGTH_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_LENGTH(void *pValue)
{
    *(Q_LENGTH*)pValue = Q_LENGTH_No_train_integrity_information_available;
    return 1;
}

int release_Q_LENGTH(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_LENGTH(void *pToValue, const void *pFromValue)
{
    *((Q_LENGTH*)pToValue) = *((Q_LENGTH*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_LENGTH_Utils = {
    Q_LENGTH_to_string,
    check_Q_LENGTH_string,
    string_to_Q_LENGTH,
    is_Q_LENGTH_double_conversion_allowed,
    Q_LENGTH_to_double,
    is_Q_LENGTH_long_conversion_allowed,
    Q_LENGTH_to_long,
    compare_Q_LENGTH,
    get_Q_LENGTH_signature,
    init_Q_LENGTH,
    release_Q_LENGTH,
    copy_Q_LENGTH,
    sizeof(Q_LENGTH)
};

/****************************************************************
 ** Q_LINK 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_LINKVTable_defined
    extern struct SimTypeVTable *pSimQ_LINKVTable;
  #else 
    struct SimTypeVTable *pSimQ_LINKVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_LINKVTable;
#endif

static SimEnumValUtils Q_LINK_values[] = {
    { "Q_LINK_Unlinked", Q_LINK_Unlinked},
    { "Q_LINK_Unlinked", Q_LINK_Unlinked},
    { "Q_LINK_Linked", Q_LINK_Linked},
    { "Q_LINK_Linked", Q_LINK_Linked},
};
const int Q_LINK_nb_values = 4;

int Q_LINK_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_LINKVTable != NULL
        && pSimQ_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINK*)pValue, Q_LINK_values, Q_LINK_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_LINK_string(const char *str, char **endptr)
{
    static Q_LINK rTemp;
    return string_to_Q_LINK(str, (void*)&rTemp, endptr);
}

int string_to_Q_LINK(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_LINKVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_LINKVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINK_values, Q_LINK_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINK*)pValue = (Q_LINK)nTemp;
    }
    return nRet;
}

int is_Q_LINK_double_conversion_allowed()
{
    if (pSimQ_LINKVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_LINKVTable);
    }
    return 1;
}

int Q_LINK_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_LINKVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINKVTable, nValue);
    }
    *nValue = (double)*((Q_LINK*)pValue);
    return 1;
}

int is_Q_LINK_long_conversion_allowed()
{
    if (pSimQ_LINKVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_LINKVTable);
    }
    return 1;
}

int Q_LINK_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_LINKVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_LINKVTable, nValue);
    }
    *nValue = (long)*((Q_LINK*)pValue);
    return 1;
}

void compare_Q_LINK(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_LINKVTable != NULL
        && pSimQ_LINKVTable->m_version >= Scv612
        && pSimQ_LINKVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINKVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_LINKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_LINKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINK*)pValue1), (int)(*(Q_LINK*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_LINK_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_LINK_values, Q_LINK_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_LINK(void *pValue)
{
    *(Q_LINK*)pValue = Q_LINK_Unlinked;
    return 1;
}

int release_Q_LINK(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_LINK(void *pToValue, const void *pFromValue)
{
    *((Q_LINK*)pToValue) = *((Q_LINK*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_LINK_Utils = {
    Q_LINK_to_string,
    check_Q_LINK_string,
    string_to_Q_LINK,
    is_Q_LINK_double_conversion_allowed,
    Q_LINK_to_double,
    is_Q_LINK_long_conversion_allowed,
    Q_LINK_to_long,
    compare_Q_LINK,
    get_Q_LINK_signature,
    init_Q_LINK,
    release_Q_LINK,
    copy_Q_LINK,
    sizeof(Q_LINK)
};

/****************************************************************
 ** Q_MARQSTREASON 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_MARQSTREASONVTable_defined
    extern struct SimTypeVTable *pSimQ_MARQSTREASONVTable;
  #else 
    struct SimTypeVTable *pSimQ_MARQSTREASONVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_MARQSTREASONVTable;
#endif

static SimEnumValUtils Q_MARQSTREASON_values[] = {
    { "Q_MARQSTREASON_Start_selected_by_driver", Q_MARQSTREASON_Start_selected_by_driver},
    { "Q_MARQSTREASON_Start_selected_by_driver", Q_MARQSTREASON_Start_selected_by_driver},
    { "Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached", Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached},
    { "Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached", Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached},
    { "Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached", Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached},
    { "Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached", Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached},
    { "Q_MARQSTREASON_Track_description_deleted", Q_MARQSTREASON_Track_description_deleted},
    { "Q_MARQSTREASON_Track_description_deleted", Q_MARQSTREASON_Track_description_deleted},
    { "Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location", Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location},
    { "Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location", Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location},
};
const int Q_MARQSTREASON_nb_values = 10;

int Q_MARQSTREASON_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_MARQSTREASONVTable != NULL
        && pSimQ_MARQSTREASONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_MARQSTREASONVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_MARQSTREASON*)pValue, Q_MARQSTREASON_values, Q_MARQSTREASON_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_MARQSTREASON_string(const char *str, char **endptr)
{
    static Q_MARQSTREASON rTemp;
    return string_to_Q_MARQSTREASON(str, (void*)&rTemp, endptr);
}

int string_to_Q_MARQSTREASON(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_MARQSTREASONVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_MARQSTREASONVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_MARQSTREASON_values, Q_MARQSTREASON_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_MARQSTREASON*)pValue = (Q_MARQSTREASON)nTemp;
    }
    return nRet;
}

int is_Q_MARQSTREASON_double_conversion_allowed()
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_MARQSTREASONVTable);
    }
    return 1;
}

int Q_MARQSTREASON_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_MARQSTREASONVTable, nValue);
    }
    *nValue = (double)*((Q_MARQSTREASON*)pValue);
    return 1;
}

int is_Q_MARQSTREASON_long_conversion_allowed()
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_MARQSTREASONVTable);
    }
    return 1;
}

int Q_MARQSTREASON_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_MARQSTREASONVTable, nValue);
    }
    *nValue = (long)*((Q_MARQSTREASON*)pValue);
    return 1;
}

void compare_Q_MARQSTREASON(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_MARQSTREASONVTable != NULL
        && pSimQ_MARQSTREASONVTable->m_version >= Scv612
        && pSimQ_MARQSTREASONVTable->m_pfnCompare != NULL) {
        if (pSimQ_MARQSTREASONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_MARQSTREASONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_MARQSTREASONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_MARQSTREASON*)pValue1), (int)(*(Q_MARQSTREASON*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_MARQSTREASON_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_MARQSTREASON_values, Q_MARQSTREASON_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_MARQSTREASON(void *pValue)
{
    *(Q_MARQSTREASON*)pValue = Q_MARQSTREASON_Start_selected_by_driver;
    return 1;
}

int release_Q_MARQSTREASON(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_MARQSTREASON(void *pToValue, const void *pFromValue)
{
    *((Q_MARQSTREASON*)pToValue) = *((Q_MARQSTREASON*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_MARQSTREASON_Utils = {
    Q_MARQSTREASON_to_string,
    check_Q_MARQSTREASON_string,
    string_to_Q_MARQSTREASON,
    is_Q_MARQSTREASON_double_conversion_allowed,
    Q_MARQSTREASON_to_double,
    is_Q_MARQSTREASON_long_conversion_allowed,
    Q_MARQSTREASON_to_long,
    compare_Q_MARQSTREASON,
    get_Q_MARQSTREASON_signature,
    init_Q_MARQSTREASON,
    release_Q_MARQSTREASON,
    copy_Q_MARQSTREASON,
    sizeof(Q_MARQSTREASON)
};

/****************************************************************
 ** Q_MEDIA 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_MEDIAVTable_defined
    extern struct SimTypeVTable *pSimQ_MEDIAVTable;
  #else 
    struct SimTypeVTable *pSimQ_MEDIAVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_MEDIAVTable;
#endif

static SimEnumValUtils Q_MEDIA_values[] = {
    { "Q_MEDIA_Balise", Q_MEDIA_Balise},
    { "Q_MEDIA_Balise", Q_MEDIA_Balise},
    { "Q_MEDIA_Loop", Q_MEDIA_Loop},
    { "Q_MEDIA_Loop", Q_MEDIA_Loop},
};
const int Q_MEDIA_nb_values = 4;

int Q_MEDIA_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_MEDIAVTable != NULL
        && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_MEDIAVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_MEDIA*)pValue, Q_MEDIA_values, Q_MEDIA_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_MEDIA_string(const char *str, char **endptr)
{
    static Q_MEDIA rTemp;
    return string_to_Q_MEDIA(str, (void*)&rTemp, endptr);
}

int string_to_Q_MEDIA(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_MEDIAVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_MEDIAVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_MEDIA_values, Q_MEDIA_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_MEDIA*)pValue = (Q_MEDIA)nTemp;
    }
    return nRet;
}

int is_Q_MEDIA_double_conversion_allowed()
{
    if (pSimQ_MEDIAVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_MEDIAVTable);
    }
    return 1;
}

int Q_MEDIA_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_MEDIAVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_MEDIAVTable, nValue);
    }
    *nValue = (double)*((Q_MEDIA*)pValue);
    return 1;
}

int is_Q_MEDIA_long_conversion_allowed()
{
    if (pSimQ_MEDIAVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_MEDIAVTable);
    }
    return 1;
}

int Q_MEDIA_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_MEDIAVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_MEDIAVTable, nValue);
    }
    *nValue = (long)*((Q_MEDIA*)pValue);
    return 1;
}

void compare_Q_MEDIA(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_MEDIAVTable != NULL
        && pSimQ_MEDIAVTable->m_version >= Scv612
        && pSimQ_MEDIAVTable->m_pfnCompare != NULL) {
        if (pSimQ_MEDIAVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_MEDIAVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_MEDIAVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_MEDIA*)pValue1), (int)(*(Q_MEDIA*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_MEDIA_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_MEDIA_values, Q_MEDIA_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_MEDIA(void *pValue)
{
    *(Q_MEDIA*)pValue = Q_MEDIA_Balise;
    return 1;
}

int release_Q_MEDIA(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_MEDIA(void *pToValue, const void *pFromValue)
{
    *((Q_MEDIA*)pToValue) = *((Q_MEDIA*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_MEDIA_Utils = {
    Q_MEDIA_to_string,
    check_Q_MEDIA_string,
    string_to_Q_MEDIA,
    is_Q_MEDIA_double_conversion_allowed,
    Q_MEDIA_to_double,
    is_Q_MEDIA_long_conversion_allowed,
    Q_MEDIA_to_long,
    compare_Q_MEDIA,
    get_Q_MEDIA_signature,
    init_Q_MEDIA,
    release_Q_MEDIA,
    copy_Q_MEDIA,
    sizeof(Q_MEDIA)
};

/****************************************************************
 ** Q_NVLOCACC 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_NVLOCACCVTable_defined
    extern struct SimTypeVTable *pSimQ_NVLOCACCVTable;
  #else 
    struct SimTypeVTable *pSimQ_NVLOCACCVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_NVLOCACCVTable;
#endif

int Q_NVLOCACC_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_NVLOCACCVTable != NULL
        && pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_NVLOCACCVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_Q_NVLOCACC_string(const char *str, char **endptr)
{
    static Q_NVLOCACC rTemp;
    return string_to_Q_NVLOCACC(str, (void*)&rTemp, endptr);
}

int string_to_Q_NVLOCACC(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_NVLOCACCVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_NVLOCACCVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_Q_NVLOCACC_double_conversion_allowed()
{
    if (pSimQ_NVLOCACCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_NVLOCACCVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int Q_NVLOCACC_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_NVLOCACCVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_NVLOCACCVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_Q_NVLOCACC_long_conversion_allowed()
{
    if (pSimQ_NVLOCACCVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_NVLOCACCVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int Q_NVLOCACC_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_NVLOCACCVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_NVLOCACCVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_Q_NVLOCACC(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimQ_NVLOCACCVTable != NULL
        && pSimQ_NVLOCACCVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimQ_NVLOCACCVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimQ_NVLOCACCVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimQ_NVLOCACCVTable->m_version >= Scv612
               && pSimQ_NVLOCACCVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimQ_NVLOCACCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_NVLOCACCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_NVLOCACCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_NVLOCACC_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_Q_NVLOCACC(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_Q_NVLOCACC(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_NVLOCACC(void *pToValue, const void *pFromValue)
{
    *((Q_NVLOCACC*)pToValue) = *((Q_NVLOCACC*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_NVLOCACC_Utils = {
    Q_NVLOCACC_to_string,
    check_Q_NVLOCACC_string,
    string_to_Q_NVLOCACC,
    is_Q_NVLOCACC_double_conversion_allowed,
    Q_NVLOCACC_to_double,
    is_Q_NVLOCACC_long_conversion_allowed,
    Q_NVLOCACC_to_long,
    compare_Q_NVLOCACC,
    get_Q_NVLOCACC_signature,
    init_Q_NVLOCACC,
    release_Q_NVLOCACC,
    copy_Q_NVLOCACC,
    sizeof(Q_NVLOCACC)
};

/****************************************************************
 ** Q_RBC 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_RBCVTable_defined
    extern struct SimTypeVTable *pSimQ_RBCVTable;
  #else 
    struct SimTypeVTable *pSimQ_RBCVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_RBCVTable;
#endif

static SimConstValUtils const Q_RBC_constants[] = {
    { "TM_conversions::ENUM_Q_RBC_terminate", &TU_ENUM_Q_RBC_terminate_TM_conversions },
    { "ENUM_Q_RBC_terminate", &TU_ENUM_Q_RBC_terminate_TM_conversions },
    { "TM_conversions::ENUM_Q_RBC_establish", &TU_ENUM_Q_RBC_establish_TM_conversions },
    { "ENUM_Q_RBC_establish", &TU_ENUM_Q_RBC_establish_TM_conversions },
};

static SimEnumValUtils Q_RBC_values[] = {
    { "Q_RBC_Terminate_communication_session", Q_RBC_Terminate_communication_session},
    { "Q_RBC_Terminate_communication_session", Q_RBC_Terminate_communication_session},
    { "Q_RBC_Establish_communication_session", Q_RBC_Establish_communication_session},
    { "Q_RBC_Establish_communication_session", Q_RBC_Establish_communication_session},
};
const int Q_RBC_nb_values = 4;

int Q_RBC_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_RBCVTable != NULL
        && pSimQ_RBCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_RBCVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_RBC*)pValue, Q_RBC_values, Q_RBC_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_RBC_string(const char *str, char **endptr)
{
    static Q_RBC rTemp;
    return string_to_Q_RBC(str, (void*)&rTemp, endptr);
}

int string_to_Q_RBC(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_RBCVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_RBCVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, Q_RBC_constants, sizeof(Q_RBC_constants) / sizeof(Q_RBC_constants[0]), sizeof(Q_RBC), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_RBC_values, Q_RBC_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_RBC*)pValue = (Q_RBC)nTemp;
    }
    return nRet;
}

int is_Q_RBC_double_conversion_allowed()
{
    if (pSimQ_RBCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_RBCVTable);
    }
    return 1;
}

int Q_RBC_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_RBCVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_RBCVTable, nValue);
    }
    *nValue = (double)*((Q_RBC*)pValue);
    return 1;
}

int is_Q_RBC_long_conversion_allowed()
{
    if (pSimQ_RBCVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_RBCVTable);
    }
    return 1;
}

int Q_RBC_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_RBCVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_RBCVTable, nValue);
    }
    *nValue = (long)*((Q_RBC*)pValue);
    return 1;
}

void compare_Q_RBC(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_RBCVTable != NULL
        && pSimQ_RBCVTable->m_version >= Scv612
        && pSimQ_RBCVTable->m_pfnCompare != NULL) {
        if (pSimQ_RBCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_RBCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_RBCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_RBC*)pValue1), (int)(*(Q_RBC*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_RBC_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_RBC_values, Q_RBC_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_RBC(void *pValue)
{
    *(Q_RBC*)pValue = Q_RBC_Terminate_communication_session;
    return 1;
}

int release_Q_RBC(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_RBC(void *pToValue, const void *pFromValue)
{
    *((Q_RBC*)pToValue) = *((Q_RBC*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_RBC_Utils = {
    Q_RBC_to_string,
    check_Q_RBC_string,
    string_to_Q_RBC,
    is_Q_RBC_double_conversion_allowed,
    Q_RBC_to_double,
    is_Q_RBC_long_conversion_allowed,
    Q_RBC_to_long,
    compare_Q_RBC,
    get_Q_RBC_signature,
    init_Q_RBC,
    release_Q_RBC,
    copy_Q_RBC,
    sizeof(Q_RBC)
};

/****************************************************************
 ** Q_SCALE 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_SCALEVTable_defined
    extern struct SimTypeVTable *pSimQ_SCALEVTable;
  #else 
    struct SimTypeVTable *pSimQ_SCALEVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_SCALEVTable;
#endif

static SimEnumValUtils Q_SCALE_values[] = {
    { "Q_SCALE_10_cm_scale", Q_SCALE_10_cm_scale},
    { "Q_SCALE_10_cm_scale", Q_SCALE_10_cm_scale},
    { "Q_SCALE_1_m_scale", Q_SCALE_1_m_scale},
    { "Q_SCALE_1_m_scale", Q_SCALE_1_m_scale},
    { "Q_SCALE_10_m_scale", Q_SCALE_10_m_scale},
    { "Q_SCALE_10_m_scale", Q_SCALE_10_m_scale},
};
const int Q_SCALE_nb_values = 6;

int Q_SCALE_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_SCALEVTable != NULL
        && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_SCALEVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_SCALE*)pValue, Q_SCALE_values, Q_SCALE_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_SCALE_string(const char *str, char **endptr)
{
    static Q_SCALE rTemp;
    return string_to_Q_SCALE(str, (void*)&rTemp, endptr);
}

int string_to_Q_SCALE(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_SCALEVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_SCALEVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_SCALE_values, Q_SCALE_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_SCALE*)pValue = (Q_SCALE)nTemp;
    }
    return nRet;
}

int is_Q_SCALE_double_conversion_allowed()
{
    if (pSimQ_SCALEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_SCALEVTable);
    }
    return 1;
}

int Q_SCALE_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_SCALEVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_SCALEVTable, nValue);
    }
    *nValue = (double)*((Q_SCALE*)pValue);
    return 1;
}

int is_Q_SCALE_long_conversion_allowed()
{
    if (pSimQ_SCALEVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_SCALEVTable);
    }
    return 1;
}

int Q_SCALE_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_SCALEVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_SCALEVTable, nValue);
    }
    *nValue = (long)*((Q_SCALE*)pValue);
    return 1;
}

void compare_Q_SCALE(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_SCALEVTable != NULL
        && pSimQ_SCALEVTable->m_version >= Scv612
        && pSimQ_SCALEVTable->m_pfnCompare != NULL) {
        if (pSimQ_SCALEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_SCALEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_SCALEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_SCALE*)pValue1), (int)(*(Q_SCALE*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_SCALE_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_SCALE_values, Q_SCALE_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_SCALE(void *pValue)
{
    *(Q_SCALE*)pValue = Q_SCALE_10_cm_scale;
    return 1;
}

int release_Q_SCALE(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_SCALE(void *pToValue, const void *pFromValue)
{
    *((Q_SCALE*)pToValue) = *((Q_SCALE*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_SCALE_Utils = {
    Q_SCALE_to_string,
    check_Q_SCALE_string,
    string_to_Q_SCALE,
    is_Q_SCALE_double_conversion_allowed,
    Q_SCALE_to_double,
    is_Q_SCALE_long_conversion_allowed,
    Q_SCALE_to_long,
    compare_Q_SCALE,
    get_Q_SCALE_signature,
    init_Q_SCALE,
    release_Q_SCALE,
    copy_Q_SCALE,
    sizeof(Q_SCALE)
};

/****************************************************************
 ** Q_SLEEPSESSION 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_SLEEPSESSIONVTable_defined
    extern struct SimTypeVTable *pSimQ_SLEEPSESSIONVTable;
  #else 
    struct SimTypeVTable *pSimQ_SLEEPSESSIONVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_SLEEPSESSIONVTable;
#endif

static SimConstValUtils const Q_SLEEPSESSION_constants[] = {
    { "TM_conversions::ENUM_Q_SLEEPSESSION_execute", &TU_ENUM_Q_SLEEPSESSION_execute_TM_conversions },
    { "ENUM_Q_SLEEPSESSION_execute", &TU_ENUM_Q_SLEEPSESSION_execute_TM_conversions },
    { "TM_conversions::ENUM_Q_SLEEPSESSION_ignore", &TU_ENUM_Q_SLEEPSESSION_ignore_TM_conversions },
    { "ENUM_Q_SLEEPSESSION_ignore", &TU_ENUM_Q_SLEEPSESSION_ignore_TM_conversions },
};

static SimEnumValUtils Q_SLEEPSESSION_values[] = {
    { "Q_SLEEPSESSION_Ignore_session_establishment_order", Q_SLEEPSESSION_Ignore_session_establishment_order},
    { "Q_SLEEPSESSION_Ignore_session_establishment_order", Q_SLEEPSESSION_Ignore_session_establishment_order},
    { "Q_SLEEPSESSION_Execute_session_establishment_order", Q_SLEEPSESSION_Execute_session_establishment_order},
    { "Q_SLEEPSESSION_Execute_session_establishment_order", Q_SLEEPSESSION_Execute_session_establishment_order},
};
const int Q_SLEEPSESSION_nb_values = 4;

int Q_SLEEPSESSION_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_SLEEPSESSIONVTable != NULL
        && pSimQ_SLEEPSESSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_SLEEPSESSIONVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_SLEEPSESSION*)pValue, Q_SLEEPSESSION_values, Q_SLEEPSESSION_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_SLEEPSESSION_string(const char *str, char **endptr)
{
    static Q_SLEEPSESSION rTemp;
    return string_to_Q_SLEEPSESSION(str, (void*)&rTemp, endptr);
}

int string_to_Q_SLEEPSESSION(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_SLEEPSESSIONVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, Q_SLEEPSESSION_constants, sizeof(Q_SLEEPSESSION_constants) / sizeof(Q_SLEEPSESSION_constants[0]), sizeof(Q_SLEEPSESSION), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_SLEEPSESSION_values, Q_SLEEPSESSION_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_SLEEPSESSION*)pValue = (Q_SLEEPSESSION)nTemp;
    }
    return nRet;
}

int is_Q_SLEEPSESSION_double_conversion_allowed()
{
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_SLEEPSESSIONVTable);
    }
    return 1;
}

int Q_SLEEPSESSION_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_SLEEPSESSIONVTable, nValue);
    }
    *nValue = (double)*((Q_SLEEPSESSION*)pValue);
    return 1;
}

int is_Q_SLEEPSESSION_long_conversion_allowed()
{
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_SLEEPSESSIONVTable);
    }
    return 1;
}

int Q_SLEEPSESSION_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_SLEEPSESSIONVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_SLEEPSESSIONVTable, nValue);
    }
    *nValue = (long)*((Q_SLEEPSESSION*)pValue);
    return 1;
}

void compare_Q_SLEEPSESSION(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_SLEEPSESSIONVTable != NULL
        && pSimQ_SLEEPSESSIONVTable->m_version >= Scv612
        && pSimQ_SLEEPSESSIONVTable->m_pfnCompare != NULL) {
        if (pSimQ_SLEEPSESSIONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_SLEEPSESSIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_SLEEPSESSIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_SLEEPSESSION*)pValue1), (int)(*(Q_SLEEPSESSION*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_SLEEPSESSION_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_SLEEPSESSION_values, Q_SLEEPSESSION_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_SLEEPSESSION(void *pValue)
{
    *(Q_SLEEPSESSION*)pValue = Q_SLEEPSESSION_Ignore_session_establishment_order;
    return 1;
}

int release_Q_SLEEPSESSION(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_SLEEPSESSION(void *pToValue, const void *pFromValue)
{
    *((Q_SLEEPSESSION*)pToValue) = *((Q_SLEEPSESSION*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_SLEEPSESSION_Utils = {
    Q_SLEEPSESSION_to_string,
    check_Q_SLEEPSESSION_string,
    string_to_Q_SLEEPSESSION,
    is_Q_SLEEPSESSION_double_conversion_allowed,
    Q_SLEEPSESSION_to_double,
    is_Q_SLEEPSESSION_long_conversion_allowed,
    Q_SLEEPSESSION_to_long,
    compare_Q_SLEEPSESSION,
    get_Q_SLEEPSESSION_signature,
    init_Q_SLEEPSESSION,
    release_Q_SLEEPSESSION,
    copy_Q_SLEEPSESSION,
    sizeof(Q_SLEEPSESSION)
};

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimQ_UPDOWNVTable_defined
    extern struct SimTypeVTable *pSimQ_UPDOWNVTable;
  #else 
    struct SimTypeVTable *pSimQ_UPDOWNVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimQ_UPDOWNVTable;
#endif

static SimEnumValUtils Q_UPDOWN_values[] = {
    { "Q_UPDOWN_Down_link_telegram", Q_UPDOWN_Down_link_telegram},
    { "Q_UPDOWN_Down_link_telegram", Q_UPDOWN_Down_link_telegram},
    { "Q_UPDOWN_Up_link_telegram", Q_UPDOWN_Up_link_telegram},
    { "Q_UPDOWN_Up_link_telegram", Q_UPDOWN_Up_link_telegram},
};
const int Q_UPDOWN_nb_values = 4;

int Q_UPDOWN_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimQ_UPDOWNVTable != NULL
        && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_UPDOWNVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Q_UPDOWN*)pValue, Q_UPDOWN_values, Q_UPDOWN_nb_values, pfnStrAppend, pStrObj); 
}

int check_Q_UPDOWN_string(const char *str, char **endptr)
{
    static Q_UPDOWN rTemp;
    return string_to_Q_UPDOWN(str, (void*)&rTemp, endptr);
}

int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimQ_UPDOWNVTable != NULL) {
        nRet = string_to_VTable(str, pSimQ_UPDOWNVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_UPDOWN_values, Q_UPDOWN_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_UPDOWN*)pValue = (Q_UPDOWN)nTemp;
    }
    return nRet;
}

int is_Q_UPDOWN_double_conversion_allowed()
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_UPDOWNVTable);
    }
    return 1;
}

int Q_UPDOWN_to_double(const void *pValue, double *nValue)
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_UPDOWNVTable, nValue);
    }
    *nValue = (double)*((Q_UPDOWN*)pValue);
    return 1;
}

int is_Q_UPDOWN_long_conversion_allowed()
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimQ_UPDOWNVTable);
    }
    return 1;
}

int Q_UPDOWN_to_long(const void *pValue, long *nValue)
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_UPDOWNVTable, nValue);
    }
    *nValue = (long)*((Q_UPDOWN*)pValue);
    return 1;
}

void compare_Q_UPDOWN(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimQ_UPDOWNVTable != NULL
        && pSimQ_UPDOWNVTable->m_version >= Scv612
        && pSimQ_UPDOWNVTable->m_pfnCompare != NULL) {
        if (pSimQ_UPDOWNVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimQ_UPDOWNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimQ_UPDOWNVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_UPDOWN*)pValue1), (int)(*(Q_UPDOWN*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Q_UPDOWN_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Q_UPDOWN_values, Q_UPDOWN_nb_values, pfnStrAppend, pStrObj);
}

int init_Q_UPDOWN(void *pValue)
{
    *(Q_UPDOWN*)pValue = Q_UPDOWN_Down_link_telegram;
    return 1;
}

int release_Q_UPDOWN(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Q_UPDOWN(void *pToValue, const void *pFromValue)
{
    *((Q_UPDOWN*)pToValue) = *((Q_UPDOWN*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Q_UPDOWN_Utils = {
    Q_UPDOWN_to_string,
    check_Q_UPDOWN_string,
    string_to_Q_UPDOWN,
    is_Q_UPDOWN_double_conversion_allowed,
    Q_UPDOWN_to_double,
    is_Q_UPDOWN_long_conversion_allowed,
    Q_UPDOWN_to_long,
    compare_Q_UPDOWN,
    get_Q_UPDOWN_signature,
    init_Q_UPDOWN,
    release_Q_UPDOWN,
    copy_Q_UPDOWN,
    sizeof(Q_UPDOWN)
};

/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;
#endif

static SimFieldUtils Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields[] = {
    {"radioDevice", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,radioDevice), &_Type_kcg_int32_Utils},
    {"receivedSystemTime", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,receivedSystemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils},
    {"nid_message", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,nid_message), &_Type_NID_MESSAGE_Utils},
    {"t_train", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,t_train), &_Type_T_TRAIN_Utils},
    {"m_ack", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,nid_lrbg), &_Type_NID_LRBG_Utils},
    {"t_train_reference", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,t_train_reference), &_Type_T_TRAIN_Utils},
    {"nid_em", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,nid_em), &_Type_NID_EM_Utils},
    {"q_scale", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,q_scale), &_Type_Q_SCALE_Utils},
    {"d_sr", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,d_sr), &_Type_D_SR_Utils},
    {"t_sh_rqst", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,t_sh_rqst), &_Type_T_TRAIN_Utils},
    {"d_ref", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,d_ref), &_Type_D_REF_Utils},
    {"q_dir", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,q_dir), &_Type_Q_DIR_Utils},
    {"d_emergencystop", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,d_emergencystop), &_Type_D_EMERGENCYSTOP_Utils},
    {"m_version", offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg,m_version), &_Type_M_VERSION_Utils},
};

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, pfnStrAppend, pStrObj);
}

int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static Radio_TrackTrain_Header_T_Radio_Types_Pkg rTemp;
    return string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, endptr);
    }
    return nRet;
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return 0;
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_long_conversion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return 0;
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(Radio_TrackTrain_Header_T_Radio_Types_Pkg_fields, 15, pfnStrAppend, pStrObj);
}

int init_Radio_TrackTrain_Header_T_Radio_Types_Pkg(void *pValue)
{
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->radioDevice));
    init_T_internal_Type_Obu_BasicTypes_Pkg(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->receivedSystemTime));
    init_NID_MESSAGE(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->nid_message));
    init_T_TRAIN(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->t_train));
    init_M_ACK(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->m_ack));
    init_NID_LRBG(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->nid_lrbg));
    init_T_TRAIN(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->t_train_reference));
    init_NID_EM(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->nid_em));
    init_Q_SCALE(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->q_scale));
    init_D_SR(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->d_sr));
    init_T_TRAIN(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->t_sh_rqst));
    init_D_REF(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->d_ref));
    init_Q_DIR(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->q_dir));
    init_D_EMERGENCYSTOP(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->d_emergencystop));
    init_M_VERSION(&(((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)->m_version));
    return 1;
}

int release_Radio_TrackTrain_Header_T_Radio_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pToValue, (Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils = {
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string,
    check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string,
    string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_conversion_allowed,
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double,
    is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_long_conversion_allowed,
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_long,
    compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature,
    init_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    release_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg)
};

/****************************************************************
 ** Radio_TrainTrack_Header_T_Radio_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable;
#endif

static SimFieldUtils Radio_TrainTrack_Header_T_Radio_Types_Pkg_fields[] = {
    {"present", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,present), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,nid_message), &_Type_NID_MESSAGE_Utils},
    {"t_train", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,t_train), &_Type_T_TRAIN_Utils},
    {"nid_engine", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,nid_engine), &_Type_NID_ENGINE_Utils},
    {"xQ_MARQSTREASON", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,xQ_MARQSTREASON), &_Type_Q_MARQSTREASON_Utils},
    {"xT_TRAIN", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,xT_TRAIN), &_Type_T_TRAIN_Utils},
    {"xNID_EM", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,xNID_EM), &_Type_NID_EM_Utils},
    {"xQ_EMERGENCYSTOP", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,xQ_EMERGENCYSTOP), &_Type_Q_EMERGENCYSTOP_Utils},
    {"xNID_TEXTMESSAGE", offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg,xNID_TEXTMESSAGE), &_Type_NID_TEXTMESSAGE_Utils},
};

int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, Radio_TrainTrack_Header_T_Radio_Types_Pkg_fields, 9, pfnStrAppend, pStrObj);
}

int check_Radio_TrainTrack_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static Radio_TrainTrack_Header_T_Radio_Types_Pkg rTemp;
    return string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, Radio_TrainTrack_Header_T_Radio_Types_Pkg_fields, 9, endptr);
    }
    return nRet;
}

int is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable);
    }
    return 0;
}

int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_long_conversion_allowed()
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable);
    }
    return 0;
}

int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_Radio_TrainTrack_Header_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Radio_TrainTrack_Header_T_Radio_Types_Pkg_fields, 9, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Radio_TrainTrack_Header_T_Radio_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(Radio_TrainTrack_Header_T_Radio_Types_Pkg_fields, 9, pfnStrAppend, pStrObj);
}

int init_Radio_TrainTrack_Header_T_Radio_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->present));
    init_NID_MESSAGE(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->nid_message));
    init_T_TRAIN(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->t_train));
    init_NID_ENGINE(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->nid_engine));
    init_Q_MARQSTREASON(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->xQ_MARQSTREASON));
    init_T_TRAIN(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->xT_TRAIN));
    init_NID_EM(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->xNID_EM));
    init_Q_EMERGENCYSTOP(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->xQ_EMERGENCYSTOP));
    init_NID_TEXTMESSAGE(&(((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pValue)->xNID_TEXTMESSAGE));
    return 1;
}

int release_Radio_TrainTrack_Header_T_Radio_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg((Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pToValue, (Radio_TrainTrack_Header_T_Radio_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils = {
    Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_string,
    check_Radio_TrainTrack_Header_T_Radio_Types_Pkg_string,
    string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg,
    is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_double_conversion_allowed,
    Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_double,
    is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_long_conversion_allowed,
    Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_long,
    compare_Radio_TrainTrack_Header_T_Radio_Types_Pkg,
    get_Radio_TrainTrack_Header_T_Radio_Types_Pkg_signature,
    init_Radio_TrainTrack_Header_T_Radio_Types_Pkg,
    release_Radio_TrainTrack_Header_T_Radio_Types_Pkg,
    copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg,
    sizeof(Radio_TrainTrack_Header_T_Radio_Types_Pkg)
};

/****************************************************************
 ** Radio_TrainTrack_Message_T_Radio_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable;
#endif

static SimConstValUtils const Radio_TrainTrack_Message_T_Radio_Types_Pkg_constants[] = {
    { "MoRC_Pck::cNoMessageToRBC", &TU_cNoMessageToRBC_MoRC_Pck },
    { "cNoMessageToRBC", &TU_cNoMessageToRBC_MoRC_Pck },
};

int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return struct_18831_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_Radio_TrainTrack_Message_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static Radio_TrainTrack_Message_T_Radio_Types_Pkg rTemp;
    return string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, Radio_TrainTrack_Message_T_Radio_Types_Pkg_constants, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg_constants) / sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg_constants[0]), sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_struct_18831(str, pValue, endptr);
    }
    return nRet;
}

int is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable);
    }
    return is_struct_18831_double_conversion_allowed();
}

int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable, nValue);
    }
    return struct_18831_to_double(pValue, nValue);
}

int is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_long_conversion_allowed()
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable);
    }
    return is_struct_18831_long_conversion_allowed();
}

int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable, nValue);
    }
    return struct_18831_to_long(pValue, nValue);
}

void compare_Radio_TrainTrack_Message_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_version >= Scv612
               && pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_struct_18831(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Radio_TrainTrack_Message_T_Radio_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_struct_18831_signature(pfnStrAppend, pStrObj);
}

int init_Radio_TrainTrack_Message_T_Radio_Types_Pkg(void *pValue)
{
    init_struct_18831(pValue);
    return 1;
}

int release_Radio_TrainTrack_Message_T_Radio_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg((Radio_TrainTrack_Message_T_Radio_Types_Pkg*)pToValue, (Radio_TrainTrack_Message_T_Radio_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils = {
    Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_string,
    check_Radio_TrainTrack_Message_T_Radio_Types_Pkg_string,
    string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg,
    is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_double_conversion_allowed,
    Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_double,
    is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_long_conversion_allowed,
    Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_long,
    compare_Radio_TrainTrack_Message_T_Radio_Types_Pkg,
    get_Radio_TrainTrack_Message_T_Radio_Types_Pkg_signature,
    init_Radio_TrainTrack_Message_T_Radio_Types_Pkg,
    release_Radio_TrainTrack_Message_T_Radio_Types_Pkg,
    copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg,
    sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg)
};

/****************************************************************
 ** RadioMetadata_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimRadioMetadata_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimRadioMetadata_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimRadioMetadata_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimRadioMetadata_T_Common_Types_PkgVTable;
#endif

static SimFieldUtils RadioMetadata_T_Common_Types_Pkg_fields[] = {
    {"t_train_reference", offsetof(RadioMetadata_T_Common_Types_Pkg,t_train_reference), &_Type_kcg_bool_Utils},
    {"nid_em", offsetof(RadioMetadata_T_Common_Types_Pkg,nid_em), &_Type_kcg_bool_Utils},
    {"q_scale", offsetof(RadioMetadata_T_Common_Types_Pkg,q_scale), &_Type_kcg_bool_Utils},
    {"d_sr", offsetof(RadioMetadata_T_Common_Types_Pkg,d_sr), &_Type_kcg_bool_Utils},
    {"t_sh_rqst", offsetof(RadioMetadata_T_Common_Types_Pkg,t_sh_rqst), &_Type_kcg_bool_Utils},
    {"d_ref", offsetof(RadioMetadata_T_Common_Types_Pkg,d_ref), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(RadioMetadata_T_Common_Types_Pkg,q_dir), &_Type_kcg_bool_Utils},
    {"d_emergencystop", offsetof(RadioMetadata_T_Common_Types_Pkg,d_emergencystop), &_Type_kcg_bool_Utils},
    {"m_version", offsetof(RadioMetadata_T_Common_Types_Pkg,m_version), &_Type_kcg_bool_Utils},
};

int RadioMetadata_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, RadioMetadata_T_Common_Types_Pkg_fields, 9, pfnStrAppend, pStrObj);
}

int check_RadioMetadata_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static RadioMetadata_T_Common_Types_Pkg rTemp;
    return string_to_RadioMetadata_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_RadioMetadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimRadioMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, RadioMetadata_T_Common_Types_Pkg_fields, 9, endptr);
    }
    return nRet;
}

int is_RadioMetadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadioMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

int RadioMetadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadioMetadata_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_RadioMetadata_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimRadioMetadata_T_Common_Types_PkgVTable);
    }
    return 0;
}

int RadioMetadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadioMetadata_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_RadioMetadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimRadioMetadata_T_Common_Types_PkgVTable != NULL
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadioMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, RadioMetadata_T_Common_Types_Pkg_fields, 9, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_RadioMetadata_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(RadioMetadata_T_Common_Types_Pkg_fields, 9, pfnStrAppend, pStrObj);
}

int init_RadioMetadata_T_Common_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->t_train_reference));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->nid_em));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->q_scale));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->d_sr));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->t_sh_rqst));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->d_ref));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->q_dir));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->d_emergencystop));
    init_kcg_bool(&(((RadioMetadata_T_Common_Types_Pkg*)pValue)->m_version));
    return 1;
}

int release_RadioMetadata_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_RadioMetadata_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_RadioMetadata_T_Common_Types_Pkg((RadioMetadata_T_Common_Types_Pkg*)pToValue, (RadioMetadata_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_RadioMetadata_T_Common_Types_Pkg_Utils = {
    RadioMetadata_T_Common_Types_Pkg_to_string,
    check_RadioMetadata_T_Common_Types_Pkg_string,
    string_to_RadioMetadata_T_Common_Types_Pkg,
    is_RadioMetadata_T_Common_Types_Pkg_double_conversion_allowed,
    RadioMetadata_T_Common_Types_Pkg_to_double,
    is_RadioMetadata_T_Common_Types_Pkg_long_conversion_allowed,
    RadioMetadata_T_Common_Types_Pkg_to_long,
    compare_RadioMetadata_T_Common_Types_Pkg,
    get_RadioMetadata_T_Common_Types_Pkg_signature,
    init_RadioMetadata_T_Common_Types_Pkg,
    release_RadioMetadata_T_Common_Types_Pkg,
    copy_RadioMetadata_T_Common_Types_Pkg,
    sizeof(RadioMetadata_T_Common_Types_Pkg)
};

/****************************************************************
 ** RBC_Id_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimRBC_Id_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimRBC_Id_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimRBC_Id_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimRBC_Id_T_Common_Types_PkgVTable;
#endif

static SimConstValUtils const RBC_Id_T_Common_Types_Pkg_constants[] = {
    { "MoRC_Pck::Subfunc_Pkg::cNoOrigin", &TU_cNoOrigin_MoRC_Pck_Subfunc_Pkg },
    { "cNoOrigin", &TU_cNoOrigin_MoRC_Pck_Subfunc_Pkg },
};

static SimFieldUtils RBC_Id_T_Common_Types_Pkg_fields[] = {
    {"valid", offsetof(RBC_Id_T_Common_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"nid_c", offsetof(RBC_Id_T_Common_Types_Pkg,nid_c), &_Type_NID_C_Utils},
    {"rbc_id", offsetof(RBC_Id_T_Common_Types_Pkg,rbc_id), &_Type_NID_RBC_Utils},
    {"device_id", offsetof(RBC_Id_T_Common_Types_Pkg,device_id), &_Type_kcg_int32_Utils},
};

int RBC_Id_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL
        && pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, RBC_Id_T_Common_Types_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int check_RBC_Id_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static RBC_Id_T_Common_Types_Pkg rTemp;
    return string_to_RBC_Id_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_RBC_Id_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimRBC_Id_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, RBC_Id_T_Common_Types_Pkg_constants, sizeof(RBC_Id_T_Common_Types_Pkg_constants) / sizeof(RBC_Id_T_Common_Types_Pkg_constants[0]), sizeof(RBC_Id_T_Common_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, RBC_Id_T_Common_Types_Pkg_fields, 4, endptr);
    }
    return nRet;
}

int is_RBC_Id_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRBC_Id_T_Common_Types_PkgVTable);
    }
    return 0;
}

int RBC_Id_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRBC_Id_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_RBC_Id_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimRBC_Id_T_Common_Types_PkgVTable);
    }
    return 0;
}

int RBC_Id_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRBC_Id_T_Common_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_RBC_Id_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimRBC_Id_T_Common_Types_PkgVTable != NULL
        && pSimRBC_Id_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRBC_Id_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimRBC_Id_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, RBC_Id_T_Common_Types_Pkg_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_RBC_Id_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(RBC_Id_T_Common_Types_Pkg_fields, 4, pfnStrAppend, pStrObj);
}

int init_RBC_Id_T_Common_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->valid));
    init_NID_C(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->nid_c));
    init_NID_RBC(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->rbc_id));
    init_kcg_int32(&(((RBC_Id_T_Common_Types_Pkg*)pValue)->device_id));
    return 1;
}

int release_RBC_Id_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_RBC_Id_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_RBC_Id_T_Common_Types_Pkg((RBC_Id_T_Common_Types_Pkg*)pToValue, (RBC_Id_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_RBC_Id_T_Common_Types_Pkg_Utils = {
    RBC_Id_T_Common_Types_Pkg_to_string,
    check_RBC_Id_T_Common_Types_Pkg_string,
    string_to_RBC_Id_T_Common_Types_Pkg,
    is_RBC_Id_T_Common_Types_Pkg_double_conversion_allowed,
    RBC_Id_T_Common_Types_Pkg_to_double,
    is_RBC_Id_T_Common_Types_Pkg_long_conversion_allowed,
    RBC_Id_T_Common_Types_Pkg_to_long,
    compare_RBC_Id_T_Common_Types_Pkg,
    get_RBC_Id_T_Common_Types_Pkg_signature,
    init_RBC_Id_T_Common_Types_Pkg,
    release_RBC_Id_T_Common_Types_Pkg,
    copy_RBC_Id_T_Common_Types_Pkg,
    sizeof(RBC_Id_T_Common_Types_Pkg)
};

/****************************************************************
 ** ReceivedMessage_T_Common_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimReceivedMessage_T_Common_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimReceivedMessage_T_Common_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimReceivedMessage_T_Common_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimReceivedMessage_T_Common_Types_PkgVTable;
#endif

int ReceivedMessage_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL
        && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return struct_19159_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_ReceivedMessage_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static ReceivedMessage_T_Common_Types_Pkg rTemp;
    return string_to_ReceivedMessage_T_Common_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_ReceivedMessage_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimReceivedMessage_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_struct_19159(str, pValue, endptr);
    }
    return nRet;
}

int is_ReceivedMessage_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimReceivedMessage_T_Common_Types_PkgVTable);
    }
    return is_struct_19159_double_conversion_allowed();
}

int ReceivedMessage_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimReceivedMessage_T_Common_Types_PkgVTable, nValue);
    }
    return struct_19159_to_double(pValue, nValue);
}

int is_ReceivedMessage_T_Common_Types_Pkg_long_conversion_allowed()
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimReceivedMessage_T_Common_Types_PkgVTable);
    }
    return is_struct_19159_long_conversion_allowed();
}

int ReceivedMessage_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimReceivedMessage_T_Common_Types_PkgVTable, nValue);
    }
    return struct_19159_to_long(pValue, nValue);
}

void compare_ReceivedMessage_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL
        && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimReceivedMessage_T_Common_Types_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimReceivedMessage_T_Common_Types_PkgVTable->m_version >= Scv612
               && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimReceivedMessage_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_struct_19159(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_ReceivedMessage_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_struct_19159_signature(pfnStrAppend, pStrObj);
}

int init_ReceivedMessage_T_Common_Types_Pkg(void *pValue)
{
    init_struct_19159(pValue);
    return 1;
}

int release_ReceivedMessage_T_Common_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_ReceivedMessage_T_Common_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg((ReceivedMessage_T_Common_Types_Pkg*)pToValue, (ReceivedMessage_T_Common_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_ReceivedMessage_T_Common_Types_Pkg_Utils = {
    ReceivedMessage_T_Common_Types_Pkg_to_string,
    check_ReceivedMessage_T_Common_Types_Pkg_string,
    string_to_ReceivedMessage_T_Common_Types_Pkg,
    is_ReceivedMessage_T_Common_Types_Pkg_double_conversion_allowed,
    ReceivedMessage_T_Common_Types_Pkg_to_double,
    is_ReceivedMessage_T_Common_Types_Pkg_long_conversion_allowed,
    ReceivedMessage_T_Common_Types_Pkg_to_long,
    compare_ReceivedMessage_T_Common_Types_Pkg,
    get_ReceivedMessage_T_Common_Types_Pkg_signature,
    init_ReceivedMessage_T_Common_Types_Pkg,
    release_ReceivedMessage_T_Common_Types_Pkg,
    copy_ReceivedMessage_T_Common_Types_Pkg,
    sizeof(ReceivedMessage_T_Common_Types_Pkg)
};

/****************************************************************
 ** safeRadioConnectionIndication_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable;
#endif

static SimFieldUtils safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_fields[] = {
    {"valid", offsetof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"indicator", offsetof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg,indicator), &_Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils},
};

int safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg rTemp;
    return string_to_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsafeRadioConnectionIndication_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((safeRadioConnectionIndication_T_RCM_Session_Types_Pkg*)pValue)->valid));
    init_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg(&(((safeRadioConnectionIndication_T_RCM_Session_Types_Pkg*)pValue)->indicator));
    return 1;
}

int release_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg((safeRadioConnectionIndication_T_RCM_Session_Types_Pkg*)pToValue, (safeRadioConnectionIndication_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_Utils = {
    safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_to_string,
    check_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_string,
    string_to_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg,
    is_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_to_double,
    is_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_to_long,
    compare_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg,
    get_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_signature,
    init_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg,
    release_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg,
    copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg,
    sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable;
#endif

static SimEnumValUtils safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_values[] = {
    { "RCM_Session_Types_Pkg::srci_noConnection", srci_noConnection_RCM_Session_Types_Pkg},
    { "srci_noConnection", srci_noConnection_RCM_Session_Types_Pkg},
    { "RCM_Session_Types_Pkg::srci_connectionLost_setupFailed", srci_connectionLost_setupFailed_RCM_Session_Types_Pkg},
    { "srci_connectionLost_setupFailed", srci_connectionLost_setupFailed_RCM_Session_Types_Pkg},
    { "RCM_Session_Types_Pkg::srci_connectionUp", srci_connectionUp_RCM_Session_Types_Pkg},
    { "srci_connectionUp", srci_connectionUp_RCM_Session_Types_Pkg},
};
const int safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_nb_values = 6;

int safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pValue, safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_values, safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg rTemp;
    return string_to_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_values, safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pValue = (safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable);
    }
    return 1;
}

int safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pValue);
    return 1;
}

int is_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable);
    }
    return 1;
}

int safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pValue);
    return 1;
}

void compare_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsafeRadioConnnectionIndicator_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pValue1), (int)(*(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_values, safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg(void *pValue)
{
    *(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pValue = srci_noConnection_RCM_Session_Types_Pkg;
    return 1;
}

int release_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pToValue) = *((safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils = {
    safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_to_string,
    check_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_string,
    string_to_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg,
    is_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_to_double,
    is_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_to_long,
    compare_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg,
    get_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_signature,
    init_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg,
    release_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg,
    copy_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg,
    sizeof(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** sessionCmd_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsessionCmd_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimsessionCmd_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsessionCmd_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsessionCmd_T_RCM_Session_Types_PkgVTable;
#endif

static SimConstValUtils const sessionCmd_T_RCM_Session_Types_Pkg_constants[] = {
    { "RCM_Session_Types_Pkg::cNoSessionCmd", &TU_cNoSessionCmd_RCM_Session_Types_Pkg },
    { "cNoSessionCmd", &TU_cNoSessionCmd_RCM_Session_Types_Pkg },
};

static SimFieldUtils sessionCmd_T_RCM_Session_Types_Pkg_fields[] = {
    {"valid", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"initiatedByOBU", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,initiatedByOBU), &_Type_kcg_bool_Utils},
    {"initiatedByRBC", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,initiatedByRBC), &_Type_kcg_bool_Utils},
    {"q_rbc", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,q_rbc), &_Type_Q_RBC_Utils},
    {"nid_c", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,nid_c), &_Type_NID_C_Utils},
    {"nid_rbc", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,nid_rbc), &_Type_NID_RBC_Utils},
    {"nid_radio", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,nid_radio), &_Type_NID_RADIO_Utils},
    {"origin", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
    {"m38", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,m38), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils},
    {"p42", offsetof(sessionCmd_T_RCM_Session_Types_Pkg,p42), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils},
};

int sessionCmd_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsessionCmd_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsessionCmd_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, sessionCmd_T_RCM_Session_Types_Pkg_fields, 10, pfnStrAppend, pStrObj);
}

int check_sessionCmd_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static sessionCmd_T_RCM_Session_Types_Pkg rTemp;
    return string_to_sessionCmd_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_sessionCmd_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsessionCmd_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, sessionCmd_T_RCM_Session_Types_Pkg_constants, sizeof(sessionCmd_T_RCM_Session_Types_Pkg_constants) / sizeof(sessionCmd_T_RCM_Session_Types_Pkg_constants[0]), sizeof(sessionCmd_T_RCM_Session_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, sessionCmd_T_RCM_Session_Types_Pkg_fields, 10, endptr);
    }
    return nRet;
}

int is_sessionCmd_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsessionCmd_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int sessionCmd_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsessionCmd_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_sessionCmd_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsessionCmd_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int sessionCmd_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsessionCmd_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_sessionCmd_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsessionCmd_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimsessionCmd_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsessionCmd_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsessionCmd_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsessionCmd_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, sessionCmd_T_RCM_Session_Types_Pkg_fields, 10, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sessionCmd_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(sessionCmd_T_RCM_Session_Types_Pkg_fields, 10, pfnStrAppend, pStrObj);
}

int init_sessionCmd_T_RCM_Session_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->valid));
    init_kcg_bool(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->initiatedByOBU));
    init_kcg_bool(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->initiatedByRBC));
    init_Q_RBC(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->q_rbc));
    init_NID_C(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->nid_c));
    init_NID_RBC(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->nid_rbc));
    init_NID_RADIO(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->nid_radio));
    init_RBC_Id_T_Common_Types_Pkg(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->origin));
    init_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->m38));
    init_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&(((sessionCmd_T_RCM_Session_Types_Pkg*)pValue)->p42));
    return 1;
}

int release_sessionCmd_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_sessionCmd_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg((sessionCmd_T_RCM_Session_Types_Pkg*)pToValue, (sessionCmd_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils = {
    sessionCmd_T_RCM_Session_Types_Pkg_to_string,
    check_sessionCmd_T_RCM_Session_Types_Pkg_string,
    string_to_sessionCmd_T_RCM_Session_Types_Pkg,
    is_sessionCmd_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    sessionCmd_T_RCM_Session_Types_Pkg_to_double,
    is_sessionCmd_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    sessionCmd_T_RCM_Session_Types_Pkg_to_long,
    compare_sessionCmd_T_RCM_Session_Types_Pkg,
    get_sessionCmd_T_RCM_Session_Types_Pkg_signature,
    init_sessionCmd_T_RCM_Session_Types_Pkg,
    release_sessionCmd_T_RCM_Session_Types_Pkg,
    copy_sessionCmd_T_RCM_Session_Types_Pkg,
    sizeof(sessionCmd_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** sessionPhase_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsessionPhase_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimsessionPhase_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsessionPhase_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsessionPhase_T_RCM_Session_Types_PkgVTable;
#endif

static SimEnumValUtils sessionPhase_T_RCM_Session_Types_Pkg_values[] = {
    { "RCM_Session_Types_Pkg::sp_terminated", sp_terminated_RCM_Session_Types_Pkg},
    { "sp_terminated", sp_terminated_RCM_Session_Types_Pkg},
    { "RCM_Session_Types_Pkg::sp_establishing", sp_establishing_RCM_Session_Types_Pkg},
    { "sp_establishing", sp_establishing_RCM_Session_Types_Pkg},
    { "RCM_Session_Types_Pkg::sp_maintaining", sp_maintaining_RCM_Session_Types_Pkg},
    { "sp_maintaining", sp_maintaining_RCM_Session_Types_Pkg},
    { "RCM_Session_Types_Pkg::sp_terminating", sp_terminating_RCM_Session_Types_Pkg},
    { "sp_terminating", sp_terminating_RCM_Session_Types_Pkg},
};
const int sessionPhase_T_RCM_Session_Types_Pkg_nb_values = 8;

int sessionPhase_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsessionPhase_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsessionPhase_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(sessionPhase_T_RCM_Session_Types_Pkg*)pValue, sessionPhase_T_RCM_Session_Types_Pkg_values, sessionPhase_T_RCM_Session_Types_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_sessionPhase_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static sessionPhase_T_RCM_Session_Types_Pkg rTemp;
    return string_to_sessionPhase_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_sessionPhase_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsessionPhase_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, sessionPhase_T_RCM_Session_Types_Pkg_values, sessionPhase_T_RCM_Session_Types_Pkg_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(sessionPhase_T_RCM_Session_Types_Pkg*)pValue = (sessionPhase_T_RCM_Session_Types_Pkg)nTemp;
    }
    return nRet;
}

int is_sessionPhase_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsessionPhase_T_RCM_Session_Types_PkgVTable);
    }
    return 1;
}

int sessionPhase_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsessionPhase_T_RCM_Session_Types_PkgVTable, nValue);
    }
    *nValue = (double)*((sessionPhase_T_RCM_Session_Types_Pkg*)pValue);
    return 1;
}

int is_sessionPhase_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsessionPhase_T_RCM_Session_Types_PkgVTable);
    }
    return 1;
}

int sessionPhase_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsessionPhase_T_RCM_Session_Types_PkgVTable, nValue);
    }
    *nValue = (long)*((sessionPhase_T_RCM_Session_Types_Pkg*)pValue);
    return 1;
}

void compare_sessionPhase_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsessionPhase_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimsessionPhase_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsessionPhase_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsessionPhase_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsessionPhase_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(sessionPhase_T_RCM_Session_Types_Pkg*)pValue1), (int)(*(sessionPhase_T_RCM_Session_Types_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sessionPhase_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(sessionPhase_T_RCM_Session_Types_Pkg_values, sessionPhase_T_RCM_Session_Types_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_sessionPhase_T_RCM_Session_Types_Pkg(void *pValue)
{
    *(sessionPhase_T_RCM_Session_Types_Pkg*)pValue = sp_terminated_RCM_Session_Types_Pkg;
    return 1;
}

int release_sessionPhase_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_sessionPhase_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    *((sessionPhase_T_RCM_Session_Types_Pkg*)pToValue) = *((sessionPhase_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils = {
    sessionPhase_T_RCM_Session_Types_Pkg_to_string,
    check_sessionPhase_T_RCM_Session_Types_Pkg_string,
    string_to_sessionPhase_T_RCM_Session_Types_Pkg,
    is_sessionPhase_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    sessionPhase_T_RCM_Session_Types_Pkg_to_double,
    is_sessionPhase_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    sessionPhase_T_RCM_Session_Types_Pkg_to_long,
    compare_sessionPhase_T_RCM_Session_Types_Pkg,
    get_sessionPhase_T_RCM_Session_Types_Pkg_signature,
    init_sessionPhase_T_RCM_Session_Types_Pkg,
    release_sessionPhase_T_RCM_Session_Types_Pkg,
    copy_sessionPhase_T_RCM_Session_Types_Pkg,
    sizeof(sessionPhase_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** sessionStatus_T_RCM_Session_Types_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsessionStatus_T_RCM_Session_Types_PkgVTable_defined
    extern struct SimTypeVTable *pSimsessionStatus_T_RCM_Session_Types_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsessionStatus_T_RCM_Session_Types_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsessionStatus_T_RCM_Session_Types_PkgVTable;
#endif

static SimConstValUtils const sessionStatus_T_RCM_Session_Types_Pkg_constants[] = {
    { "RCM_Session_Types_Pkg::cNoSessionStatus", &TU_cNoSessionStatus_RCM_Session_Types_Pkg },
    { "cNoSessionStatus", &TU_cNoSessionStatus_RCM_Session_Types_Pkg },
    { "RCM_Session_Types_Pkg::cInitialSessionStatus", &TU_cInitialSessionStatus_RCM_Session_Types_Pkg },
    { "cInitialSessionStatus", &TU_cInitialSessionStatus_RCM_Session_Types_Pkg },
};

static SimFieldUtils sessionStatus_T_RCM_Session_Types_Pkg_fields[] = {
    {"valid", offsetof(sessionStatus_T_RCM_Session_Types_Pkg,valid), &_Type_kcg_bool_Utils},
    {"phase", offsetof(sessionStatus_T_RCM_Session_Types_Pkg,phase), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils},
    {"nid_c", offsetof(sessionStatus_T_RCM_Session_Types_Pkg,nid_c), &_Type_NID_C_Utils},
    {"nid_rbc", offsetof(sessionStatus_T_RCM_Session_Types_Pkg,nid_rbc), &_Type_NID_RBC_Utils},
    {"nid_radio", offsetof(sessionStatus_T_RCM_Session_Types_Pkg,nid_radio), &_Type_NID_RADIO_Utils},
};

int sessionStatus_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsessionStatus_T_RCM_Session_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsessionStatus_T_RCM_Session_Types_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, sessionStatus_T_RCM_Session_Types_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int check_sessionStatus_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr)
{
    static sessionStatus_T_RCM_Session_Types_Pkg rTemp;
    return string_to_sessionStatus_T_RCM_Session_Types_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_sessionStatus_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsessionStatus_T_RCM_Session_Types_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, sessionStatus_T_RCM_Session_Types_Pkg_constants, sizeof(sessionStatus_T_RCM_Session_Types_Pkg_constants) / sizeof(sessionStatus_T_RCM_Session_Types_Pkg_constants[0]), sizeof(sessionStatus_T_RCM_Session_Types_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, sessionStatus_T_RCM_Session_Types_Pkg_fields, 5, endptr);
    }
    return nRet;
}

int is_sessionStatus_T_RCM_Session_Types_Pkg_double_conversion_allowed()
{
    if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsessionStatus_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int sessionStatus_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsessionStatus_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

int is_sessionStatus_T_RCM_Session_Types_Pkg_long_conversion_allowed()
{
    if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsessionStatus_T_RCM_Session_Types_PkgVTable);
    }
    return 0;
}

int sessionStatus_T_RCM_Session_Types_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsessionStatus_T_RCM_Session_Types_PkgVTable, nValue);
    }
    return 0;
}

void compare_sessionStatus_T_RCM_Session_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable != NULL
        && pSimsessionStatus_T_RCM_Session_Types_PkgVTable->m_version >= Scv612
        && pSimsessionStatus_T_RCM_Session_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsessionStatus_T_RCM_Session_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsessionStatus_T_RCM_Session_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsessionStatus_T_RCM_Session_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, sessionStatus_T_RCM_Session_Types_Pkg_fields, 5, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sessionStatus_T_RCM_Session_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(sessionStatus_T_RCM_Session_Types_Pkg_fields, 5, pfnStrAppend, pStrObj);
}

int init_sessionStatus_T_RCM_Session_Types_Pkg(void *pValue)
{
    init_kcg_bool(&(((sessionStatus_T_RCM_Session_Types_Pkg*)pValue)->valid));
    init_sessionPhase_T_RCM_Session_Types_Pkg(&(((sessionStatus_T_RCM_Session_Types_Pkg*)pValue)->phase));
    init_NID_C(&(((sessionStatus_T_RCM_Session_Types_Pkg*)pValue)->nid_c));
    init_NID_RBC(&(((sessionStatus_T_RCM_Session_Types_Pkg*)pValue)->nid_rbc));
    init_NID_RADIO(&(((sessionStatus_T_RCM_Session_Types_Pkg*)pValue)->nid_radio));
    return 1;
}

int release_sessionStatus_T_RCM_Session_Types_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_sessionStatus_T_RCM_Session_Types_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg((sessionStatus_T_RCM_Session_Types_Pkg*)pToValue, (sessionStatus_T_RCM_Session_Types_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils = {
    sessionStatus_T_RCM_Session_Types_Pkg_to_string,
    check_sessionStatus_T_RCM_Session_Types_Pkg_string,
    string_to_sessionStatus_T_RCM_Session_Types_Pkg,
    is_sessionStatus_T_RCM_Session_Types_Pkg_double_conversion_allowed,
    sessionStatus_T_RCM_Session_Types_Pkg_to_double,
    is_sessionStatus_T_RCM_Session_Types_Pkg_long_conversion_allowed,
    sessionStatus_T_RCM_Session_Types_Pkg_to_long,
    compare_sessionStatus_T_RCM_Session_Types_Pkg,
    get_sessionStatus_T_RCM_Session_Types_Pkg_signature,
    init_sessionStatus_T_RCM_Session_Types_Pkg,
    release_sessionStatus_T_RCM_Session_Types_Pkg,
    copy_sessionStatus_T_RCM_Session_Types_Pkg,
    sizeof(sessionStatus_T_RCM_Session_Types_Pkg)
};

/****************************************************************
 ** sNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils sNID_RADIO_T_Packet_TrainTypes_Pkg_fields[] = {
    {"valid", offsetof(sNID_RADIO_T_Packet_TrainTypes_Pkg,valid), &_Type_kcg_bool_Utils},
    {"telephoneNumber", offsetof(sNID_RADIO_T_Packet_TrainTypes_Pkg,telephoneNumber), &_Type_telephoneNumber_T_Packet_TrainTypes_Pkg_Utils},
};

int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, sNID_RADIO_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_sNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static sNID_RADIO_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, sNID_RADIO_T_Packet_TrainTypes_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_sNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_sNID_RADIO_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_sNID_RADIO_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, sNID_RADIO_T_Packet_TrainTypes_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sNID_RADIO_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(sNID_RADIO_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_sNID_RADIO_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_kcg_bool(&(((sNID_RADIO_T_Packet_TrainTypes_Pkg*)pValue)->valid));
    init_telephoneNumber_T_Packet_TrainTypes_Pkg(&(((sNID_RADIO_T_Packet_TrainTypes_Pkg*)pValue)->telephoneNumber));
    return 1;
}

int release_sNID_RADIO_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_sNID_RADIO_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg((sNID_RADIO_T_Packet_TrainTypes_Pkg*)pToValue, (sNID_RADIO_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_sNID_RADIO_T_Packet_TrainTypes_Pkg_Utils = {
    sNID_RADIO_T_Packet_TrainTypes_Pkg_to_string,
    check_sNID_RADIO_T_Packet_TrainTypes_Pkg_string,
    string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg,
    is_sNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    sNID_RADIO_T_Packet_TrainTypes_Pkg_to_double,
    is_sNID_RADIO_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    sNID_RADIO_T_Packet_TrainTypes_Pkg_to_long,
    compare_sNID_RADIO_T_Packet_TrainTypes_Pkg,
    get_sNID_RADIO_T_Packet_TrainTypes_Pkg_signature,
    init_sNID_RADIO_T_Packet_TrainTypes_Pkg,
    release_sNID_RADIO_T_Packet_TrainTypes_Pkg,
    copy_sNID_RADIO_T_Packet_TrainTypes_Pkg,
    sizeof(sNID_RADIO_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** SSM_ST_connectionStatus_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_connectionStatus_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_connectionStatus_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_connectionStatus_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_connectionStatus_SMVTable;
#endif

static SimEnumValUtils SSM_ST_connectionStatus_SM_values[] = {
    { "NoConnection", SSM_st_NoConnection_connectionStatus_SM},
    { "NoConnection", SSM_st_NoConnection_connectionStatus_SM},
    { "ConnectionLost_SetupFailed", SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM},
    { "ConnectionLost_SetupFailed", SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM},
    { "ConnectionUp", SSM_st_ConnectionUp_connectionStatus_SM},
    { "ConnectionUp", SSM_st_ConnectionUp_connectionStatus_SM},
};
const int SSM_ST_connectionStatus_SM_nb_values = 6;

int SSM_ST_connectionStatus_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_connectionStatus_SMVTable != NULL
        && pSimSSM_ST_connectionStatus_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_connectionStatus_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_connectionStatus_SM*)pValue, SSM_ST_connectionStatus_SM_values, SSM_ST_connectionStatus_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_connectionStatus_SM_string(const char *str, char **endptr)
{
    static SSM_ST_connectionStatus_SM rTemp;
    return string_to_SSM_ST_connectionStatus_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_connectionStatus_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_connectionStatus_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_connectionStatus_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_connectionStatus_SM_values, SSM_ST_connectionStatus_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_connectionStatus_SM*)pValue = (SSM_ST_connectionStatus_SM)nTemp;
    }
    return nRet;
}

int is_SSM_ST_connectionStatus_SM_double_conversion_allowed()
{
    if (pSimSSM_ST_connectionStatus_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_connectionStatus_SMVTable);
    }
    return 1;
}

int SSM_ST_connectionStatus_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_connectionStatus_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_connectionStatus_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_connectionStatus_SM*)pValue);
    return 1;
}

int is_SSM_ST_connectionStatus_SM_long_conversion_allowed()
{
    if (pSimSSM_ST_connectionStatus_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_connectionStatus_SMVTable);
    }
    return 1;
}

int SSM_ST_connectionStatus_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_connectionStatus_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_connectionStatus_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_connectionStatus_SM*)pValue);
    return 1;
}

void compare_SSM_ST_connectionStatus_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_connectionStatus_SMVTable != NULL
        && pSimSSM_ST_connectionStatus_SMVTable->m_version >= Scv612
        && pSimSSM_ST_connectionStatus_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_connectionStatus_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_connectionStatus_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_connectionStatus_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_connectionStatus_SM*)pValue1), (int)(*(SSM_ST_connectionStatus_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_connectionStatus_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_connectionStatus_SM_values, SSM_ST_connectionStatus_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_connectionStatus_SM(void *pValue)
{
    *(SSM_ST_connectionStatus_SM*)pValue = SSM_st_NoConnection_connectionStatus_SM;
    return 1;
}

int release_SSM_ST_connectionStatus_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_connectionStatus_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_connectionStatus_SM*)pToValue) = *((SSM_ST_connectionStatus_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_connectionStatus_SM_Utils = {
    SSM_ST_connectionStatus_SM_to_string,
    check_SSM_ST_connectionStatus_SM_string,
    string_to_SSM_ST_connectionStatus_SM,
    is_SSM_ST_connectionStatus_SM_double_conversion_allowed,
    SSM_ST_connectionStatus_SM_to_double,
    is_SSM_ST_connectionStatus_SM_long_conversion_allowed,
    SSM_ST_connectionStatus_SM_to_long,
    compare_SSM_ST_connectionStatus_SM,
    get_SSM_ST_connectionStatus_SM_signature,
    init_SSM_ST_connectionStatus_SM,
    release_SSM_ST_connectionStatus_SM,
    copy_SSM_ST_connectionStatus_SM,
    sizeof(SSM_ST_connectionStatus_SM)
};

/****************************************************************
 ** SSM_ST_Register_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_Register_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_Register_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_Register_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_Register_SMVTable;
#endif

static SimEnumValUtils SSM_ST_Register_SM_values[] = {
    { "Unregistered", SSM_st_Unregistered_Register_SM},
    { "Unregistered", SSM_st_Unregistered_Register_SM},
    { "Registering", SSM_st_Registering_Register_SM},
    { "Registering", SSM_st_Registering_Register_SM},
    { "Registered", SSM_st_Registered_Register_SM},
    { "Registered", SSM_st_Registered_Register_SM},
    { "Reregistering", SSM_st_Reregistering_Register_SM},
    { "Reregistering", SSM_st_Reregistering_Register_SM},
};
const int SSM_ST_Register_SM_nb_values = 8;

int SSM_ST_Register_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_Register_SMVTable != NULL
        && pSimSSM_ST_Register_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_Register_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_Register_SM*)pValue, SSM_ST_Register_SM_values, SSM_ST_Register_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_Register_SM_string(const char *str, char **endptr)
{
    static SSM_ST_Register_SM rTemp;
    return string_to_SSM_ST_Register_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_Register_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_Register_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_Register_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_Register_SM_values, SSM_ST_Register_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_Register_SM*)pValue = (SSM_ST_Register_SM)nTemp;
    }
    return nRet;
}

int is_SSM_ST_Register_SM_double_conversion_allowed()
{
    if (pSimSSM_ST_Register_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_Register_SMVTable);
    }
    return 1;
}

int SSM_ST_Register_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_Register_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_Register_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_Register_SM*)pValue);
    return 1;
}

int is_SSM_ST_Register_SM_long_conversion_allowed()
{
    if (pSimSSM_ST_Register_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_Register_SMVTable);
    }
    return 1;
}

int SSM_ST_Register_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_Register_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_Register_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_Register_SM*)pValue);
    return 1;
}

void compare_SSM_ST_Register_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_Register_SMVTable != NULL
        && pSimSSM_ST_Register_SMVTable->m_version >= Scv612
        && pSimSSM_ST_Register_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_Register_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_Register_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_Register_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_Register_SM*)pValue1), (int)(*(SSM_ST_Register_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_Register_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_Register_SM_values, SSM_ST_Register_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_Register_SM(void *pValue)
{
    *(SSM_ST_Register_SM*)pValue = SSM_st_Unregistered_Register_SM;
    return 1;
}

int release_SSM_ST_Register_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_Register_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_Register_SM*)pToValue) = *((SSM_ST_Register_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_Register_SM_Utils = {
    SSM_ST_Register_SM_to_string,
    check_SSM_ST_Register_SM_string,
    string_to_SSM_ST_Register_SM,
    is_SSM_ST_Register_SM_double_conversion_allowed,
    SSM_ST_Register_SM_to_double,
    is_SSM_ST_Register_SM_long_conversion_allowed,
    SSM_ST_Register_SM_to_long,
    compare_SSM_ST_Register_SM,
    get_SSM_ST_Register_SM_signature,
    init_SSM_ST_Register_SM,
    release_SSM_ST_Register_SM,
    copy_SSM_ST_Register_SM,
    sizeof(SSM_ST_Register_SM)
};

/****************************************************************
 ** SSM_ST_repeat_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_repeat_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_repeat_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_repeat_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_repeat_SMVTable;
#endif

static SimEnumValUtils SSM_ST_repeat_SM_values[] = {
    { "rep_inactive", SSM_st_rep_inactive_repeat_SM},
    { "rep_inactive", SSM_st_rep_inactive_repeat_SM},
    { "rep_repeatUntilSuccessfulOrADefinedNumberOfTimes", SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM},
    { "rep_repeatUntilSuccessfulOrADefinedNumberOfTimes", SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM},
    { "rep_repeatUntilStopConditionMet", SSM_st_rep_repeatUntilStopConditionMet_repeat_SM},
    { "rep_repeatUntilStopConditionMet", SSM_st_rep_repeatUntilStopConditionMet_repeat_SM},
};
const int SSM_ST_repeat_SM_nb_values = 6;

int SSM_ST_repeat_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_repeat_SMVTable != NULL
        && pSimSSM_ST_repeat_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_repeat_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_repeat_SM*)pValue, SSM_ST_repeat_SM_values, SSM_ST_repeat_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_repeat_SM_string(const char *str, char **endptr)
{
    static SSM_ST_repeat_SM rTemp;
    return string_to_SSM_ST_repeat_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_repeat_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_repeat_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_repeat_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_repeat_SM_values, SSM_ST_repeat_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_repeat_SM*)pValue = (SSM_ST_repeat_SM)nTemp;
    }
    return nRet;
}

int is_SSM_ST_repeat_SM_double_conversion_allowed()
{
    if (pSimSSM_ST_repeat_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_repeat_SMVTable);
    }
    return 1;
}

int SSM_ST_repeat_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_repeat_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_repeat_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_repeat_SM*)pValue);
    return 1;
}

int is_SSM_ST_repeat_SM_long_conversion_allowed()
{
    if (pSimSSM_ST_repeat_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_repeat_SMVTable);
    }
    return 1;
}

int SSM_ST_repeat_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_repeat_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_repeat_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_repeat_SM*)pValue);
    return 1;
}

void compare_SSM_ST_repeat_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_repeat_SMVTable != NULL
        && pSimSSM_ST_repeat_SMVTable->m_version >= Scv612
        && pSimSSM_ST_repeat_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_repeat_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_repeat_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_repeat_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_repeat_SM*)pValue1), (int)(*(SSM_ST_repeat_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_repeat_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_repeat_SM_values, SSM_ST_repeat_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_repeat_SM(void *pValue)
{
    *(SSM_ST_repeat_SM*)pValue = SSM_st_rep_inactive_repeat_SM;
    return 1;
}

int release_SSM_ST_repeat_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_repeat_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_repeat_SM*)pToValue) = *((SSM_ST_repeat_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_repeat_SM_Utils = {
    SSM_ST_repeat_SM_to_string,
    check_SSM_ST_repeat_SM_string,
    string_to_SSM_ST_repeat_SM,
    is_SSM_ST_repeat_SM_double_conversion_allowed,
    SSM_ST_repeat_SM_to_double,
    is_SSM_ST_repeat_SM_long_conversion_allowed,
    SSM_ST_repeat_SM_to_long,
    compare_SSM_ST_repeat_SM,
    get_SSM_ST_repeat_SM_signature,
    init_SSM_ST_repeat_SM,
    release_SSM_ST_repeat_SM,
    copy_SSM_ST_repeat_SM,
    sizeof(SSM_ST_repeat_SM)
};

/****************************************************************
 ** SSM_ST_Session_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_Session_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_Session_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_Session_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_Session_SMVTable;
#endif

static SimEnumValUtils SSM_ST_Session_SM_values[] = {
    { "sessionTerminated", SSM_st_sessionTerminated_Session_SM},
    { "sessionTerminated", SSM_st_sessionTerminated_Session_SM},
    { "establishingSession", SSM_st_establishingSession_Session_SM},
    { "establishingSession", SSM_st_establishingSession_Session_SM},
    { "maintainingSession", SSM_st_maintainingSession_Session_SM},
    { "maintainingSession", SSM_st_maintainingSession_Session_SM},
    { "terminatingSession", SSM_st_terminatingSession_Session_SM},
    { "terminatingSession", SSM_st_terminatingSession_Session_SM},
};
const int SSM_ST_Session_SM_nb_values = 8;

int SSM_ST_Session_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_Session_SMVTable != NULL
        && pSimSSM_ST_Session_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_Session_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_Session_SM*)pValue, SSM_ST_Session_SM_values, SSM_ST_Session_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_Session_SM_string(const char *str, char **endptr)
{
    static SSM_ST_Session_SM rTemp;
    return string_to_SSM_ST_Session_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_Session_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_Session_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_Session_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_Session_SM_values, SSM_ST_Session_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_Session_SM*)pValue = (SSM_ST_Session_SM)nTemp;
    }
    return nRet;
}

int is_SSM_ST_Session_SM_double_conversion_allowed()
{
    if (pSimSSM_ST_Session_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_Session_SMVTable);
    }
    return 1;
}

int SSM_ST_Session_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_Session_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_Session_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_Session_SM*)pValue);
    return 1;
}

int is_SSM_ST_Session_SM_long_conversion_allowed()
{
    if (pSimSSM_ST_Session_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_Session_SMVTable);
    }
    return 1;
}

int SSM_ST_Session_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_Session_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_Session_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_Session_SM*)pValue);
    return 1;
}

void compare_SSM_ST_Session_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_Session_SMVTable != NULL
        && pSimSSM_ST_Session_SMVTable->m_version >= Scv612
        && pSimSSM_ST_Session_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_Session_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_Session_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_Session_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_Session_SM*)pValue1), (int)(*(SSM_ST_Session_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_Session_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_Session_SM_values, SSM_ST_Session_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_Session_SM(void *pValue)
{
    *(SSM_ST_Session_SM*)pValue = SSM_st_sessionTerminated_Session_SM;
    return 1;
}

int release_SSM_ST_Session_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_Session_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_Session_SM*)pToValue) = *((SSM_ST_Session_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_Session_SM_Utils = {
    SSM_ST_Session_SM_to_string,
    check_SSM_ST_Session_SM_string,
    string_to_SSM_ST_Session_SM,
    is_SSM_ST_Session_SM_double_conversion_allowed,
    SSM_ST_Session_SM_to_double,
    is_SSM_ST_Session_SM_long_conversion_allowed,
    SSM_ST_Session_SM_to_long,
    compare_SSM_ST_Session_SM,
    get_SSM_ST_Session_SM_signature,
    init_SSM_ST_Session_SM,
    release_SSM_ST_Session_SM,
    copy_SSM_ST_Session_SM,
    sizeof(SSM_ST_Session_SM)
};

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "idle", _14_SSM_st_idle_SM1},
    { "idle", _14_SSM_st_idle_SM1},
    { "waitForAckTerminationOfCommunicationSessionReceived", SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1},
    { "waitForAckTerminationOfCommunicationSessionReceived", SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1},
    { "terminated", SSM_st_terminated_SM1},
    { "terminated", SSM_st_terminated_SM1},
};
const int SSM_ST_SM1_nb_values = 6;

int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = (SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM1(void *pValue)
{
    *(SSM_ST_SM1*)pValue = _14_SSM_st_idle_SM1;
    return 1;
}

int release_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM1*)pToValue) = *((SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_conversion_allowed,
    SSM_ST_SM1_to_double,
    is_SSM_ST_SM1_long_conversion_allowed,
    SSM_ST_SM1_to_long,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    init_SSM_ST_SM1,
    release_SSM_ST_SM1,
    copy_SSM_ST_SM1,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_ST_TimerStatus_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_TimerStatus_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_TimerStatus_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_TimerStatus_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_TimerStatus_SMVTable;
#endif

static SimEnumValUtils SSM_ST_TimerStatus_SM_values[] = {
    { "Stopped", SSM_st_Stopped_TimerStatus_SM},
    { "Stopped", SSM_st_Stopped_TimerStatus_SM},
    { "Counting", SSM_st_Counting_TimerStatus_SM},
    { "Counting", SSM_st_Counting_TimerStatus_SM},
    { "Expired", SSM_st_Expired_TimerStatus_SM},
    { "Expired", SSM_st_Expired_TimerStatus_SM},
};
const int SSM_ST_TimerStatus_SM_nb_values = 6;

int SSM_ST_TimerStatus_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_TimerStatus_SMVTable != NULL
        && pSimSSM_ST_TimerStatus_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_TimerStatus_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_TimerStatus_SM*)pValue, SSM_ST_TimerStatus_SM_values, SSM_ST_TimerStatus_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_TimerStatus_SM_string(const char *str, char **endptr)
{
    static SSM_ST_TimerStatus_SM rTemp;
    return string_to_SSM_ST_TimerStatus_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_TimerStatus_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_TimerStatus_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_TimerStatus_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_TimerStatus_SM_values, SSM_ST_TimerStatus_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_TimerStatus_SM*)pValue = (SSM_ST_TimerStatus_SM)nTemp;
    }
    return nRet;
}

int is_SSM_ST_TimerStatus_SM_double_conversion_allowed()
{
    if (pSimSSM_ST_TimerStatus_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_TimerStatus_SMVTable);
    }
    return 1;
}

int SSM_ST_TimerStatus_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_TimerStatus_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_TimerStatus_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_TimerStatus_SM*)pValue);
    return 1;
}

int is_SSM_ST_TimerStatus_SM_long_conversion_allowed()
{
    if (pSimSSM_ST_TimerStatus_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_TimerStatus_SMVTable);
    }
    return 1;
}

int SSM_ST_TimerStatus_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_TimerStatus_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_TimerStatus_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_TimerStatus_SM*)pValue);
    return 1;
}

void compare_SSM_ST_TimerStatus_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_TimerStatus_SMVTable != NULL
        && pSimSSM_ST_TimerStatus_SMVTable->m_version >= Scv612
        && pSimSSM_ST_TimerStatus_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_TimerStatus_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_TimerStatus_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_TimerStatus_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_TimerStatus_SM*)pValue1), (int)(*(SSM_ST_TimerStatus_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_TimerStatus_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_TimerStatus_SM_values, SSM_ST_TimerStatus_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_TimerStatus_SM(void *pValue)
{
    *(SSM_ST_TimerStatus_SM*)pValue = SSM_st_Stopped_TimerStatus_SM;
    return 1;
}

int release_SSM_ST_TimerStatus_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_TimerStatus_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_TimerStatus_SM*)pToValue) = *((SSM_ST_TimerStatus_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_TimerStatus_SM_Utils = {
    SSM_ST_TimerStatus_SM_to_string,
    check_SSM_ST_TimerStatus_SM_string,
    string_to_SSM_ST_TimerStatus_SM,
    is_SSM_ST_TimerStatus_SM_double_conversion_allowed,
    SSM_ST_TimerStatus_SM_to_double,
    is_SSM_ST_TimerStatus_SM_long_conversion_allowed,
    SSM_ST_TimerStatus_SM_to_long,
    compare_SSM_ST_TimerStatus_SM,
    get_SSM_ST_TimerStatus_SM_signature,
    init_SSM_ST_TimerStatus_SM,
    release_SSM_ST_TimerStatus_SM,
    copy_SSM_ST_TimerStatus_SM,
    sizeof(SSM_ST_TimerStatus_SM)
};

/****************************************************************
 ** SSM_ST_TrainExitedFromRBCArea_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_TrainExitedFromRBCArea_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_TrainExitedFromRBCArea_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_TrainExitedFromRBCArea_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_TrainExitedFromRBCArea_SMVTable;
#endif

static SimEnumValUtils SSM_ST_TrainExitedFromRBCArea_SM_values[] = {
    { "Idle", SSM_st_Idle_TrainExitedFromRBCArea_SM},
    { "Idle", SSM_st_Idle_TrainExitedFromRBCArea_SM},
    { "WaitForOrderToTerminateTheSession", SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM},
    { "WaitForOrderToTerminateTheSession", SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM},
};
const int SSM_ST_TrainExitedFromRBCArea_SM_nb_values = 4;

int SSM_ST_TrainExitedFromRBCArea_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable != NULL
        && pSimSSM_ST_TrainExitedFromRBCArea_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_TrainExitedFromRBCArea_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_TrainExitedFromRBCArea_SM*)pValue, SSM_ST_TrainExitedFromRBCArea_SM_values, SSM_ST_TrainExitedFromRBCArea_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_TrainExitedFromRBCArea_SM_string(const char *str, char **endptr)
{
    static SSM_ST_TrainExitedFromRBCArea_SM rTemp;
    return string_to_SSM_ST_TrainExitedFromRBCArea_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_TrainExitedFromRBCArea_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_TrainExitedFromRBCArea_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_TrainExitedFromRBCArea_SM_values, SSM_ST_TrainExitedFromRBCArea_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_TrainExitedFromRBCArea_SM*)pValue = (SSM_ST_TrainExitedFromRBCArea_SM)nTemp;
    }
    return nRet;
}

int is_SSM_ST_TrainExitedFromRBCArea_SM_double_conversion_allowed()
{
    if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_TrainExitedFromRBCArea_SMVTable);
    }
    return 1;
}

int SSM_ST_TrainExitedFromRBCArea_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_TrainExitedFromRBCArea_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_TrainExitedFromRBCArea_SM*)pValue);
    return 1;
}

int is_SSM_ST_TrainExitedFromRBCArea_SM_long_conversion_allowed()
{
    if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_TrainExitedFromRBCArea_SMVTable);
    }
    return 1;
}

int SSM_ST_TrainExitedFromRBCArea_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_TrainExitedFromRBCArea_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_TrainExitedFromRBCArea_SM*)pValue);
    return 1;
}

void compare_SSM_ST_TrainExitedFromRBCArea_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable != NULL
        && pSimSSM_ST_TrainExitedFromRBCArea_SMVTable->m_version >= Scv612
        && pSimSSM_ST_TrainExitedFromRBCArea_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_TrainExitedFromRBCArea_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_TrainExitedFromRBCArea_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_TrainExitedFromRBCArea_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_TrainExitedFromRBCArea_SM*)pValue1), (int)(*(SSM_ST_TrainExitedFromRBCArea_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_TrainExitedFromRBCArea_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_TrainExitedFromRBCArea_SM_values, SSM_ST_TrainExitedFromRBCArea_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_TrainExitedFromRBCArea_SM(void *pValue)
{
    *(SSM_ST_TrainExitedFromRBCArea_SM*)pValue = SSM_st_Idle_TrainExitedFromRBCArea_SM;
    return 1;
}

int release_SSM_ST_TrainExitedFromRBCArea_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_TrainExitedFromRBCArea_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_TrainExitedFromRBCArea_SM*)pToValue) = *((SSM_ST_TrainExitedFromRBCArea_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_TrainExitedFromRBCArea_SM_Utils = {
    SSM_ST_TrainExitedFromRBCArea_SM_to_string,
    check_SSM_ST_TrainExitedFromRBCArea_SM_string,
    string_to_SSM_ST_TrainExitedFromRBCArea_SM,
    is_SSM_ST_TrainExitedFromRBCArea_SM_double_conversion_allowed,
    SSM_ST_TrainExitedFromRBCArea_SM_to_double,
    is_SSM_ST_TrainExitedFromRBCArea_SM_long_conversion_allowed,
    SSM_ST_TrainExitedFromRBCArea_SM_to_long,
    compare_SSM_ST_TrainExitedFromRBCArea_SM,
    get_SSM_ST_TrainExitedFromRBCArea_SM_signature,
    init_SSM_ST_TrainExitedFromRBCArea_SM,
    release_SSM_ST_TrainExitedFromRBCArea_SM,
    copy_SSM_ST_TrainExitedFromRBCArea_SM,
    sizeof(SSM_ST_TrainExitedFromRBCArea_SM)
};

/****************************************************************
 ** SSM_TR_connectionStatus_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_connectionStatus_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_connectionStatus_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_connectionStatus_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_connectionStatus_SMVTable;
#endif

static SimEnumValUtils SSM_TR_connectionStatus_SM_values[] = {
    { "SSM_TR_no_trans_connectionStatus_SM", SSM_TR_no_trans_connectionStatus_SM},
    { "SSM_TR_no_trans_connectionStatus_SM", SSM_TR_no_trans_connectionStatus_SM},
    { "SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM", SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM},
    { "SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM", SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM},
    { "SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM", SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM},
    { "SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM", SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM},
    { "SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM", SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM},
    { "SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM", SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM},
    { "SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM", SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM},
    { "SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM", SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM},
    { "SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM", SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM},
    { "SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM", SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM},
    { "SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM", SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM},
    { "SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM", SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM},
};
const int SSM_TR_connectionStatus_SM_nb_values = 14;

int SSM_TR_connectionStatus_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_connectionStatus_SMVTable != NULL
        && pSimSSM_TR_connectionStatus_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_connectionStatus_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_connectionStatus_SM*)pValue, SSM_TR_connectionStatus_SM_values, SSM_TR_connectionStatus_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_connectionStatus_SM_string(const char *str, char **endptr)
{
    static SSM_TR_connectionStatus_SM rTemp;
    return string_to_SSM_TR_connectionStatus_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_connectionStatus_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_connectionStatus_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_connectionStatus_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_connectionStatus_SM_values, SSM_TR_connectionStatus_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_connectionStatus_SM*)pValue = (SSM_TR_connectionStatus_SM)nTemp;
    }
    return nRet;
}

int is_SSM_TR_connectionStatus_SM_double_conversion_allowed()
{
    if (pSimSSM_TR_connectionStatus_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_connectionStatus_SMVTable);
    }
    return 1;
}

int SSM_TR_connectionStatus_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_connectionStatus_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_connectionStatus_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_connectionStatus_SM*)pValue);
    return 1;
}

int is_SSM_TR_connectionStatus_SM_long_conversion_allowed()
{
    if (pSimSSM_TR_connectionStatus_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_connectionStatus_SMVTable);
    }
    return 1;
}

int SSM_TR_connectionStatus_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_connectionStatus_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_connectionStatus_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_connectionStatus_SM*)pValue);
    return 1;
}

void compare_SSM_TR_connectionStatus_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_connectionStatus_SMVTable != NULL
        && pSimSSM_TR_connectionStatus_SMVTable->m_version >= Scv612
        && pSimSSM_TR_connectionStatus_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_connectionStatus_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_connectionStatus_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_connectionStatus_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_connectionStatus_SM*)pValue1), (int)(*(SSM_TR_connectionStatus_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_connectionStatus_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_connectionStatus_SM_values, SSM_TR_connectionStatus_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_connectionStatus_SM(void *pValue)
{
    *(SSM_TR_connectionStatus_SM*)pValue = SSM_TR_no_trans_connectionStatus_SM;
    return 1;
}

int release_SSM_TR_connectionStatus_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_connectionStatus_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_connectionStatus_SM*)pToValue) = *((SSM_TR_connectionStatus_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_connectionStatus_SM_Utils = {
    SSM_TR_connectionStatus_SM_to_string,
    check_SSM_TR_connectionStatus_SM_string,
    string_to_SSM_TR_connectionStatus_SM,
    is_SSM_TR_connectionStatus_SM_double_conversion_allowed,
    SSM_TR_connectionStatus_SM_to_double,
    is_SSM_TR_connectionStatus_SM_long_conversion_allowed,
    SSM_TR_connectionStatus_SM_to_long,
    compare_SSM_TR_connectionStatus_SM,
    get_SSM_TR_connectionStatus_SM_signature,
    init_SSM_TR_connectionStatus_SM,
    release_SSM_TR_connectionStatus_SM,
    copy_SSM_TR_connectionStatus_SM,
    sizeof(SSM_TR_connectionStatus_SM)
};

/****************************************************************
 ** SSM_TR_Register_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_Register_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_Register_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_Register_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_Register_SMVTable;
#endif

static SimEnumValUtils SSM_TR_Register_SM_values[] = {
    { "SSM_TR_no_trans_Register_SM", SSM_TR_no_trans_Register_SM},
    { "SSM_TR_no_trans_Register_SM", SSM_TR_no_trans_Register_SM},
    { "SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM", SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM},
    { "SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM", SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM},
    { "SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM", SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM},
    { "SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM", SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM},
    { "SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM", SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM},
    { "SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM", SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM},
    { "SSM_TR_Registering_Reregistering_1_Registering_Register_SM", SSM_TR_Registering_Reregistering_1_Registering_Register_SM},
    { "SSM_TR_Registering_Reregistering_1_Registering_Register_SM", SSM_TR_Registering_Reregistering_1_Registering_Register_SM},
    { "SSM_TR_Registering_Registered_2_Registering_Register_SM", SSM_TR_Registering_Registered_2_Registering_Register_SM},
    { "SSM_TR_Registering_Registered_2_Registering_Register_SM", SSM_TR_Registering_Registered_2_Registering_Register_SM},
    { "SSM_TR_Registered_Reregistering_1_Registered_Register_SM", SSM_TR_Registered_Reregistering_1_Registered_Register_SM},
    { "SSM_TR_Registered_Reregistering_1_Registered_Register_SM", SSM_TR_Registered_Reregistering_1_Registered_Register_SM},
    { "SSM_TR_Registered_Registering_2_Registered_Register_SM", SSM_TR_Registered_Registering_2_Registered_Register_SM},
    { "SSM_TR_Registered_Registering_2_Registered_Register_SM", SSM_TR_Registered_Registering_2_Registered_Register_SM},
    { "SSM_TR_Registered_Unregistered_3_Registered_Register_SM", SSM_TR_Registered_Unregistered_3_Registered_Register_SM},
    { "SSM_TR_Registered_Unregistered_3_Registered_Register_SM", SSM_TR_Registered_Unregistered_3_Registered_Register_SM},
    { "SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM", SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM},
    { "SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM", SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM},
};
const int SSM_TR_Register_SM_nb_values = 20;

int SSM_TR_Register_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_Register_SMVTable != NULL
        && pSimSSM_TR_Register_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_Register_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_Register_SM*)pValue, SSM_TR_Register_SM_values, SSM_TR_Register_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_Register_SM_string(const char *str, char **endptr)
{
    static SSM_TR_Register_SM rTemp;
    return string_to_SSM_TR_Register_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_Register_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_Register_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_Register_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_Register_SM_values, SSM_TR_Register_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_Register_SM*)pValue = (SSM_TR_Register_SM)nTemp;
    }
    return nRet;
}

int is_SSM_TR_Register_SM_double_conversion_allowed()
{
    if (pSimSSM_TR_Register_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_Register_SMVTable);
    }
    return 1;
}

int SSM_TR_Register_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_Register_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_Register_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_Register_SM*)pValue);
    return 1;
}

int is_SSM_TR_Register_SM_long_conversion_allowed()
{
    if (pSimSSM_TR_Register_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_Register_SMVTable);
    }
    return 1;
}

int SSM_TR_Register_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_Register_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_Register_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_Register_SM*)pValue);
    return 1;
}

void compare_SSM_TR_Register_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_Register_SMVTable != NULL
        && pSimSSM_TR_Register_SMVTable->m_version >= Scv612
        && pSimSSM_TR_Register_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_Register_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_Register_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_Register_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_Register_SM*)pValue1), (int)(*(SSM_TR_Register_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_Register_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_Register_SM_values, SSM_TR_Register_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_Register_SM(void *pValue)
{
    *(SSM_TR_Register_SM*)pValue = SSM_TR_no_trans_Register_SM;
    return 1;
}

int release_SSM_TR_Register_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_Register_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_Register_SM*)pToValue) = *((SSM_TR_Register_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_Register_SM_Utils = {
    SSM_TR_Register_SM_to_string,
    check_SSM_TR_Register_SM_string,
    string_to_SSM_TR_Register_SM,
    is_SSM_TR_Register_SM_double_conversion_allowed,
    SSM_TR_Register_SM_to_double,
    is_SSM_TR_Register_SM_long_conversion_allowed,
    SSM_TR_Register_SM_to_long,
    compare_SSM_TR_Register_SM,
    get_SSM_TR_Register_SM_signature,
    init_SSM_TR_Register_SM,
    release_SSM_TR_Register_SM,
    copy_SSM_TR_Register_SM,
    sizeof(SSM_TR_Register_SM)
};

/****************************************************************
 ** SSM_TR_repeat_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_repeat_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_repeat_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_repeat_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_repeat_SMVTable;
#endif

static SimEnumValUtils SSM_TR_repeat_SM_values[] = {
    { "SSM_TR_no_trans_repeat_SM", SSM_TR_no_trans_repeat_SM},
    { "SSM_TR_no_trans_repeat_SM", SSM_TR_no_trans_repeat_SM},
    { "SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM", SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM},
    { "SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM", SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM},
    { "SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM", SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM},
    { "SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM", SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM},
    { "SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM", SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM},
    { "SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM", SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM},
    { "SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM", SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM},
    { "SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM", SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM},
    { "SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM", SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM},
    { "SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM", SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM},
    { "SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM", SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM},
    { "SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM", SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM},
};
const int SSM_TR_repeat_SM_nb_values = 14;

int SSM_TR_repeat_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_repeat_SMVTable != NULL
        && pSimSSM_TR_repeat_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_repeat_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_repeat_SM*)pValue, SSM_TR_repeat_SM_values, SSM_TR_repeat_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_repeat_SM_string(const char *str, char **endptr)
{
    static SSM_TR_repeat_SM rTemp;
    return string_to_SSM_TR_repeat_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_repeat_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_repeat_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_repeat_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_repeat_SM_values, SSM_TR_repeat_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_repeat_SM*)pValue = (SSM_TR_repeat_SM)nTemp;
    }
    return nRet;
}

int is_SSM_TR_repeat_SM_double_conversion_allowed()
{
    if (pSimSSM_TR_repeat_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_repeat_SMVTable);
    }
    return 1;
}

int SSM_TR_repeat_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_repeat_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_repeat_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_repeat_SM*)pValue);
    return 1;
}

int is_SSM_TR_repeat_SM_long_conversion_allowed()
{
    if (pSimSSM_TR_repeat_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_repeat_SMVTable);
    }
    return 1;
}

int SSM_TR_repeat_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_repeat_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_repeat_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_repeat_SM*)pValue);
    return 1;
}

void compare_SSM_TR_repeat_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_repeat_SMVTable != NULL
        && pSimSSM_TR_repeat_SMVTable->m_version >= Scv612
        && pSimSSM_TR_repeat_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_repeat_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_repeat_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_repeat_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_repeat_SM*)pValue1), (int)(*(SSM_TR_repeat_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_repeat_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_repeat_SM_values, SSM_TR_repeat_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_repeat_SM(void *pValue)
{
    *(SSM_TR_repeat_SM*)pValue = SSM_TR_no_trans_repeat_SM;
    return 1;
}

int release_SSM_TR_repeat_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_repeat_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_repeat_SM*)pToValue) = *((SSM_TR_repeat_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_repeat_SM_Utils = {
    SSM_TR_repeat_SM_to_string,
    check_SSM_TR_repeat_SM_string,
    string_to_SSM_TR_repeat_SM,
    is_SSM_TR_repeat_SM_double_conversion_allowed,
    SSM_TR_repeat_SM_to_double,
    is_SSM_TR_repeat_SM_long_conversion_allowed,
    SSM_TR_repeat_SM_to_long,
    compare_SSM_TR_repeat_SM,
    get_SSM_TR_repeat_SM_signature,
    init_SSM_TR_repeat_SM,
    release_SSM_TR_repeat_SM,
    copy_SSM_TR_repeat_SM,
    sizeof(SSM_TR_repeat_SM)
};

/****************************************************************
 ** SSM_TR_Session_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_Session_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_Session_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_Session_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_Session_SMVTable;
#endif

static SimEnumValUtils SSM_TR_Session_SM_values[] = {
    { "SSM_TR_no_trans_Session_SM", SSM_TR_no_trans_Session_SM},
    { "SSM_TR_no_trans_Session_SM", SSM_TR_no_trans_Session_SM},
    { "SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM", SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM},
    { "SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM", SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM},
    { "SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM", SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM},
    { "SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM", SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM},
    { "SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM", SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM},
    { "SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM", SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM},
    { "SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM", SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM},
    { "SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM", SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM},
    { "SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM", SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM},
    { "SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM", SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM},
};
const int SSM_TR_Session_SM_nb_values = 12;

int SSM_TR_Session_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_Session_SMVTable != NULL
        && pSimSSM_TR_Session_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_Session_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_Session_SM*)pValue, SSM_TR_Session_SM_values, SSM_TR_Session_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_Session_SM_string(const char *str, char **endptr)
{
    static SSM_TR_Session_SM rTemp;
    return string_to_SSM_TR_Session_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_Session_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_Session_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_Session_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_Session_SM_values, SSM_TR_Session_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_Session_SM*)pValue = (SSM_TR_Session_SM)nTemp;
    }
    return nRet;
}

int is_SSM_TR_Session_SM_double_conversion_allowed()
{
    if (pSimSSM_TR_Session_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_Session_SMVTable);
    }
    return 1;
}

int SSM_TR_Session_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_Session_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_Session_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_Session_SM*)pValue);
    return 1;
}

int is_SSM_TR_Session_SM_long_conversion_allowed()
{
    if (pSimSSM_TR_Session_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_Session_SMVTable);
    }
    return 1;
}

int SSM_TR_Session_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_Session_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_Session_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_Session_SM*)pValue);
    return 1;
}

void compare_SSM_TR_Session_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_Session_SMVTable != NULL
        && pSimSSM_TR_Session_SMVTable->m_version >= Scv612
        && pSimSSM_TR_Session_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_Session_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_Session_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_Session_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_Session_SM*)pValue1), (int)(*(SSM_TR_Session_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_Session_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_Session_SM_values, SSM_TR_Session_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_Session_SM(void *pValue)
{
    *(SSM_TR_Session_SM*)pValue = SSM_TR_no_trans_Session_SM;
    return 1;
}

int release_SSM_TR_Session_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_Session_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_Session_SM*)pToValue) = *((SSM_TR_Session_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_Session_SM_Utils = {
    SSM_TR_Session_SM_to_string,
    check_SSM_TR_Session_SM_string,
    string_to_SSM_TR_Session_SM,
    is_SSM_TR_Session_SM_double_conversion_allowed,
    SSM_TR_Session_SM_to_double,
    is_SSM_TR_Session_SM_long_conversion_allowed,
    SSM_TR_Session_SM_to_long,
    compare_SSM_TR_Session_SM,
    get_SSM_TR_Session_SM_signature,
    init_SSM_TR_Session_SM,
    release_SSM_TR_Session_SM,
    copy_SSM_TR_Session_SM,
    sizeof(SSM_TR_Session_SM)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "_15_SSM_TR_no_trans_SM1", _15_SSM_TR_no_trans_SM1},
    { "_15_SSM_TR_no_trans_SM1", _15_SSM_TR_no_trans_SM1},
    { "SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1", SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1},
    { "SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1", SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1},
    { "SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1", SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1},
    { "SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1", SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1},
    { "SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1", SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1},
    { "SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1", SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1},
    { "SSM_TR_terminated_idle_1_terminated_SM1", SSM_TR_terminated_idle_1_terminated_SM1},
    { "SSM_TR_terminated_idle_1_terminated_SM1", SSM_TR_terminated_idle_1_terminated_SM1},
};
const int SSM_TR_SM1_nb_values = 10;

int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = (SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM1(void *pValue)
{
    *(SSM_TR_SM1*)pValue = _15_SSM_TR_no_trans_SM1;
    return 1;
}

int release_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM1*)pToValue) = *((SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_conversion_allowed,
    SSM_TR_SM1_to_double,
    is_SSM_TR_SM1_long_conversion_allowed,
    SSM_TR_SM1_to_long,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    init_SSM_TR_SM1,
    release_SSM_TR_SM1,
    copy_SSM_TR_SM1,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** SSM_TR_TimerStatus_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_TimerStatus_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_TimerStatus_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_TimerStatus_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_TimerStatus_SMVTable;
#endif

static SimEnumValUtils SSM_TR_TimerStatus_SM_values[] = {
    { "SSM_TR_no_trans_TimerStatus_SM", SSM_TR_no_trans_TimerStatus_SM},
    { "SSM_TR_no_trans_TimerStatus_SM", SSM_TR_no_trans_TimerStatus_SM},
    { "SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM", SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM},
    { "SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM", SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM},
    { "SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM", SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM},
    { "SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM", SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM},
    { "SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM", SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM},
    { "SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM", SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM},
    { "SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM", SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM},
    { "SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM", SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM},
    { "SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM", SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM},
    { "SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM", SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM},
    { "SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM", SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM},
    { "SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM", SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM},
    { "SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM", SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM},
    { "SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM", SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM},
    { "SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM", SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM},
    { "SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM", SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM},
};
const int SSM_TR_TimerStatus_SM_nb_values = 18;

int SSM_TR_TimerStatus_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_TimerStatus_SMVTable != NULL
        && pSimSSM_TR_TimerStatus_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_TimerStatus_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_TimerStatus_SM*)pValue, SSM_TR_TimerStatus_SM_values, SSM_TR_TimerStatus_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_TimerStatus_SM_string(const char *str, char **endptr)
{
    static SSM_TR_TimerStatus_SM rTemp;
    return string_to_SSM_TR_TimerStatus_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_TimerStatus_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_TimerStatus_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_TimerStatus_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_TimerStatus_SM_values, SSM_TR_TimerStatus_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_TimerStatus_SM*)pValue = (SSM_TR_TimerStatus_SM)nTemp;
    }
    return nRet;
}

int is_SSM_TR_TimerStatus_SM_double_conversion_allowed()
{
    if (pSimSSM_TR_TimerStatus_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_TimerStatus_SMVTable);
    }
    return 1;
}

int SSM_TR_TimerStatus_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_TimerStatus_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_TimerStatus_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_TimerStatus_SM*)pValue);
    return 1;
}

int is_SSM_TR_TimerStatus_SM_long_conversion_allowed()
{
    if (pSimSSM_TR_TimerStatus_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_TimerStatus_SMVTable);
    }
    return 1;
}

int SSM_TR_TimerStatus_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_TimerStatus_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_TimerStatus_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_TimerStatus_SM*)pValue);
    return 1;
}

void compare_SSM_TR_TimerStatus_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_TimerStatus_SMVTable != NULL
        && pSimSSM_TR_TimerStatus_SMVTable->m_version >= Scv612
        && pSimSSM_TR_TimerStatus_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_TimerStatus_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_TimerStatus_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_TimerStatus_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_TimerStatus_SM*)pValue1), (int)(*(SSM_TR_TimerStatus_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_TimerStatus_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_TimerStatus_SM_values, SSM_TR_TimerStatus_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_TimerStatus_SM(void *pValue)
{
    *(SSM_TR_TimerStatus_SM*)pValue = SSM_TR_no_trans_TimerStatus_SM;
    return 1;
}

int release_SSM_TR_TimerStatus_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_TimerStatus_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_TimerStatus_SM*)pToValue) = *((SSM_TR_TimerStatus_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_TimerStatus_SM_Utils = {
    SSM_TR_TimerStatus_SM_to_string,
    check_SSM_TR_TimerStatus_SM_string,
    string_to_SSM_TR_TimerStatus_SM,
    is_SSM_TR_TimerStatus_SM_double_conversion_allowed,
    SSM_TR_TimerStatus_SM_to_double,
    is_SSM_TR_TimerStatus_SM_long_conversion_allowed,
    SSM_TR_TimerStatus_SM_to_long,
    compare_SSM_TR_TimerStatus_SM,
    get_SSM_TR_TimerStatus_SM_signature,
    init_SSM_TR_TimerStatus_SM,
    release_SSM_TR_TimerStatus_SM,
    copy_SSM_TR_TimerStatus_SM,
    sizeof(SSM_TR_TimerStatus_SM)
};

/****************************************************************
 ** SSM_TR_TrainExitedFromRBCArea_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_TrainExitedFromRBCArea_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_TrainExitedFromRBCArea_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_TrainExitedFromRBCArea_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_TrainExitedFromRBCArea_SMVTable;
#endif

static SimEnumValUtils SSM_TR_TrainExitedFromRBCArea_SM_values[] = {
    { "SSM_TR_no_trans_TrainExitedFromRBCArea_SM", SSM_TR_no_trans_TrainExitedFromRBCArea_SM},
    { "SSM_TR_no_trans_TrainExitedFromRBCArea_SM", SSM_TR_no_trans_TrainExitedFromRBCArea_SM},
    { "SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM", SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM},
    { "SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM", SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM},
    { "SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM", SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM},
    { "SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM", SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM},
    { "SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM", SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM},
    { "SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM", SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM},
    { "SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM", SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM},
    { "SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM", SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM},
};
const int SSM_TR_TrainExitedFromRBCArea_SM_nb_values = 10;

int SSM_TR_TrainExitedFromRBCArea_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable != NULL
        && pSimSSM_TR_TrainExitedFromRBCArea_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_TrainExitedFromRBCArea_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_TrainExitedFromRBCArea_SM*)pValue, SSM_TR_TrainExitedFromRBCArea_SM_values, SSM_TR_TrainExitedFromRBCArea_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_TrainExitedFromRBCArea_SM_string(const char *str, char **endptr)
{
    static SSM_TR_TrainExitedFromRBCArea_SM rTemp;
    return string_to_SSM_TR_TrainExitedFromRBCArea_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_TrainExitedFromRBCArea_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_TrainExitedFromRBCArea_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_TrainExitedFromRBCArea_SM_values, SSM_TR_TrainExitedFromRBCArea_SM_nb_values, 1, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_TrainExitedFromRBCArea_SM*)pValue = (SSM_TR_TrainExitedFromRBCArea_SM)nTemp;
    }
    return nRet;
}

int is_SSM_TR_TrainExitedFromRBCArea_SM_double_conversion_allowed()
{
    if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_TrainExitedFromRBCArea_SMVTable);
    }
    return 1;
}

int SSM_TR_TrainExitedFromRBCArea_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_TrainExitedFromRBCArea_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_TrainExitedFromRBCArea_SM*)pValue);
    return 1;
}

int is_SSM_TR_TrainExitedFromRBCArea_SM_long_conversion_allowed()
{
    if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_TrainExitedFromRBCArea_SMVTable);
    }
    return 1;
}

int SSM_TR_TrainExitedFromRBCArea_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_TrainExitedFromRBCArea_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_TrainExitedFromRBCArea_SM*)pValue);
    return 1;
}

void compare_SSM_TR_TrainExitedFromRBCArea_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable != NULL
        && pSimSSM_TR_TrainExitedFromRBCArea_SMVTable->m_version >= Scv612
        && pSimSSM_TR_TrainExitedFromRBCArea_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_TrainExitedFromRBCArea_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_TrainExitedFromRBCArea_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_TrainExitedFromRBCArea_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_TrainExitedFromRBCArea_SM*)pValue1), (int)(*(SSM_TR_TrainExitedFromRBCArea_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_TrainExitedFromRBCArea_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_TrainExitedFromRBCArea_SM_values, SSM_TR_TrainExitedFromRBCArea_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_TrainExitedFromRBCArea_SM(void *pValue)
{
    *(SSM_TR_TrainExitedFromRBCArea_SM*)pValue = SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
    return 1;
}

int release_SSM_TR_TrainExitedFromRBCArea_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_TrainExitedFromRBCArea_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_TrainExitedFromRBCArea_SM*)pToValue) = *((SSM_TR_TrainExitedFromRBCArea_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_TrainExitedFromRBCArea_SM_Utils = {
    SSM_TR_TrainExitedFromRBCArea_SM_to_string,
    check_SSM_TR_TrainExitedFromRBCArea_SM_string,
    string_to_SSM_TR_TrainExitedFromRBCArea_SM,
    is_SSM_TR_TrainExitedFromRBCArea_SM_double_conversion_allowed,
    SSM_TR_TrainExitedFromRBCArea_SM_to_double,
    is_SSM_TR_TrainExitedFromRBCArea_SM_long_conversion_allowed,
    SSM_TR_TrainExitedFromRBCArea_SM_to_long,
    compare_SSM_TR_TrainExitedFromRBCArea_SM,
    get_SSM_TR_TrainExitedFromRBCArea_SM_signature,
    init_SSM_TR_TrainExitedFromRBCArea_SM,
    release_SSM_TR_TrainExitedFromRBCArea_SM,
    copy_SSM_TR_TrainExitedFromRBCArea_SM,
    sizeof(SSM_TR_TrainExitedFromRBCArea_SM)
};

/****************************************************************
 ** sTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable;
#endif

static SimFieldUtils sTractionIdentity_T_Packet_TrainTypes_Pkg_fields[] = {
    {"m_voltage", offsetof(sTractionIdentity_T_Packet_TrainTypes_Pkg,m_voltage), &_Type_M_VOLTAGE_Utils},
    {"nid_ctraction", offsetof(sTractionIdentity_T_Packet_TrainTypes_Pkg,nid_ctraction), &_Type_NID_CTRACTION_Utils},
};

int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, sTractionIdentity_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int check_sTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static sTractionIdentity_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, sTractionIdentity_T_Packet_TrainTypes_Pkg_fields, 2, endptr);
    }
    return nRet;
}

int is_sTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_sTractionIdentity_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_sTractionIdentity_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, sTractionIdentity_T_Packet_TrainTypes_Pkg_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sTractionIdentity_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(sTractionIdentity_T_Packet_TrainTypes_Pkg_fields, 2, pfnStrAppend, pStrObj);
}

int init_sTractionIdentity_T_Packet_TrainTypes_Pkg(void *pValue)
{
    init_M_VOLTAGE(&(((sTractionIdentity_T_Packet_TrainTypes_Pkg*)pValue)->m_voltage));
    init_NID_CTRACTION(&(((sTractionIdentity_T_Packet_TrainTypes_Pkg*)pValue)->nid_ctraction));
    return 1;
}

int release_sTractionIdentity_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_sTractionIdentity_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg((sTractionIdentity_T_Packet_TrainTypes_Pkg*)pToValue, (sTractionIdentity_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_sTractionIdentity_T_Packet_TrainTypes_Pkg_Utils = {
    sTractionIdentity_T_Packet_TrainTypes_Pkg_to_string,
    check_sTractionIdentity_T_Packet_TrainTypes_Pkg_string,
    string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg,
    is_sTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    sTractionIdentity_T_Packet_TrainTypes_Pkg_to_double,
    is_sTractionIdentity_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    sTractionIdentity_T_Packet_TrainTypes_Pkg_to_long,
    compare_sTractionIdentity_T_Packet_TrainTypes_Pkg,
    get_sTractionIdentity_T_Packet_TrainTypes_Pkg_signature,
    init_sTractionIdentity_T_Packet_TrainTypes_Pkg,
    release_sTractionIdentity_T_Packet_TrainTypes_Pkg,
    copy_sTractionIdentity_T_Packet_TrainTypes_Pkg,
    sizeof(sTractionIdentity_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** struct_18831 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimstruct_18831VTable_defined
    extern struct SimTypeVTable *pSimstruct_18831VTable;
  #else 
    struct SimTypeVTable *pSimstruct_18831VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimstruct_18831VTable;
#endif

static SimConstValUtils const struct_18831_constants[] = {
    { "MoRC_Pck::cNoMessageToRBC", &TU_cNoMessageToRBC_MoRC_Pck },
    { "cNoMessageToRBC", &TU_cNoMessageToRBC_MoRC_Pck },
};

static SimFieldUtils struct_18831_fields[] = {
    {"present", offsetof(struct_18831,present), &_Type_kcg_bool_Utils},
    {"header", offsetof(struct_18831,header), &_Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils},
    {"packets", offsetof(struct_18831,packets), &_Type_outPackets_T_Common_Types_Pkg_Utils},
};

int struct_18831_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimstruct_18831VTable != NULL
        && pSimstruct_18831VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct_18831VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, struct_18831_fields, 3, pfnStrAppend, pStrObj);
}

int check_struct_18831_string(const char *str, char **endptr)
{
    static struct_18831 rTemp;
    return string_to_struct_18831(str, (void*)&rTemp, endptr);
}

int string_to_struct_18831(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimstruct_18831VTable != NULL) {
        nRet = string_to_VTable(str, pSimstruct_18831VTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, struct_18831_constants, sizeof(struct_18831_constants) / sizeof(struct_18831_constants[0]), sizeof(struct_18831), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, struct_18831_fields, 3, endptr);
    }
    return nRet;
}

int is_struct_18831_double_conversion_allowed()
{
    if (pSimstruct_18831VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct_18831VTable);
    }
    return 0;
}

int struct_18831_to_double(const void *pValue, double *nValue)
{
    if (pSimstruct_18831VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct_18831VTable, nValue);
    }
    return 0;
}

int is_struct_18831_long_conversion_allowed()
{
    if (pSimstruct_18831VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimstruct_18831VTable);
    }
    return 0;
}

int struct_18831_to_long(const void *pValue, long *nValue)
{
    if (pSimstruct_18831VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct_18831VTable, nValue);
    }
    return 0;
}

void compare_struct_18831(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimstruct_18831VTable != NULL
        && pSimstruct_18831VTable->m_version >= Scv612
        && pSimstruct_18831VTable->m_pfnCompare != NULL) {
        if (pSimstruct_18831VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimstruct_18831VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimstruct_18831VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct_18831_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_struct_18831_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(struct_18831_fields, 3, pfnStrAppend, pStrObj);
}

int init_struct_18831(void *pValue)
{
    init_kcg_bool(&(((struct_18831*)pValue)->present));
    init_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&(((struct_18831*)pValue)->header));
    init_outPackets_T_Common_Types_Pkg(&(((struct_18831*)pValue)->packets));
    return 1;
}

int release_struct_18831(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_struct_18831(void *pToValue, const void *pFromValue)
{
    kcg_copy_struct_18831((struct_18831*)pToValue, (struct_18831*)pFromValue);
    return 1;
}

SimTypeUtils _Type_struct_18831_Utils = {
    struct_18831_to_string,
    check_struct_18831_string,
    string_to_struct_18831,
    is_struct_18831_double_conversion_allowed,
    struct_18831_to_double,
    is_struct_18831_long_conversion_allowed,
    struct_18831_to_long,
    compare_struct_18831,
    get_struct_18831_signature,
    init_struct_18831,
    release_struct_18831,
    copy_struct_18831,
    sizeof(struct_18831)
};

/****************************************************************
 ** struct_19159 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimstruct_19159VTable_defined
    extern struct SimTypeVTable *pSimstruct_19159VTable;
  #else 
    struct SimTypeVTable *pSimstruct_19159VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimstruct_19159VTable;
#endif

static SimFieldUtils struct_19159_fields[] = {
    {"valid", offsetof(struct_19159,valid), &_Type_kcg_bool_Utils},
    {"source", offsetof(struct_19159,source), &_Type_MsgSource_T_Common_Types_Pkg_Utils},
    {"radioMetadata", offsetof(struct_19159,radioMetadata), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils},
    {"BG_Common_Header", offsetof(struct_19159,BG_Common_Header), &_Type_BG_Header_T_BG_Types_Pkg_Utils},
    {"Radio_Common_Header", offsetof(struct_19159,Radio_Common_Header), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils},
    {"packets", offsetof(struct_19159,packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
    {"sendingRBC", offsetof(struct_19159,sendingRBC), &_Type_RBC_Id_T_Common_Types_Pkg_Utils},
};

int struct_19159_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimstruct_19159VTable != NULL
        && pSimstruct_19159VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct_19159VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, struct_19159_fields, 7, pfnStrAppend, pStrObj);
}

int check_struct_19159_string(const char *str, char **endptr)
{
    static struct_19159 rTemp;
    return string_to_struct_19159(str, (void*)&rTemp, endptr);
}

int string_to_struct_19159(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimstruct_19159VTable != NULL) {
        nRet = string_to_VTable(str, pSimstruct_19159VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, struct_19159_fields, 7, endptr);
    }
    return nRet;
}

int is_struct_19159_double_conversion_allowed()
{
    if (pSimstruct_19159VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct_19159VTable);
    }
    return 0;
}

int struct_19159_to_double(const void *pValue, double *nValue)
{
    if (pSimstruct_19159VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct_19159VTable, nValue);
    }
    return 0;
}

int is_struct_19159_long_conversion_allowed()
{
    if (pSimstruct_19159VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimstruct_19159VTable);
    }
    return 0;
}

int struct_19159_to_long(const void *pValue, long *nValue)
{
    if (pSimstruct_19159VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct_19159VTable, nValue);
    }
    return 0;
}

void compare_struct_19159(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimstruct_19159VTable != NULL
        && pSimstruct_19159VTable->m_version >= Scv612
        && pSimstruct_19159VTable->m_pfnCompare != NULL) {
        if (pSimstruct_19159VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimstruct_19159VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimstruct_19159VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct_19159_fields, 7, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_struct_19159_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(struct_19159_fields, 7, pfnStrAppend, pStrObj);
}

int init_struct_19159(void *pValue)
{
    init_kcg_bool(&(((struct_19159*)pValue)->valid));
    init_MsgSource_T_Common_Types_Pkg(&(((struct_19159*)pValue)->source));
    init_RadioMetadata_T_Common_Types_Pkg(&(((struct_19159*)pValue)->radioMetadata));
    init_BG_Header_T_BG_Types_Pkg(&(((struct_19159*)pValue)->BG_Common_Header));
    init_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&(((struct_19159*)pValue)->Radio_Common_Header));
    init_CompressedPackets_T_Common_Types_Pkg(&(((struct_19159*)pValue)->packets));
    init_RBC_Id_T_Common_Types_Pkg(&(((struct_19159*)pValue)->sendingRBC));
    return 1;
}

int release_struct_19159(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_struct_19159(void *pToValue, const void *pFromValue)
{
    kcg_copy_struct_19159((struct_19159*)pToValue, (struct_19159*)pFromValue);
    return 1;
}

SimTypeUtils _Type_struct_19159_Utils = {
    struct_19159_to_string,
    check_struct_19159_string,
    string_to_struct_19159,
    is_struct_19159_double_conversion_allowed,
    struct_19159_to_double,
    is_struct_19159_long_conversion_allowed,
    struct_19159_to_long,
    compare_struct_19159,
    get_struct_19159_signature,
    init_struct_19159,
    release_struct_19159,
    copy_struct_19159,
    sizeof(struct_19159)
};

/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_internal_Type_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimT_internal_Type_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimT_internal_Type_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_internal_Type_Obu_BasicTypes_PkgVTable;
#endif

int T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static T_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_T_internal_Type_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_T_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int T_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_T_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int T_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
               && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_internal_Type_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_T_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_T_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_internal_Type_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((T_internal_Type_Obu_BasicTypes_Pkg*)pToValue) = *((T_internal_Type_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    T_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_T_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_T_internal_Type_Obu_BasicTypes_Pkg,
    is_T_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    T_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_T_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed,
    T_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_T_internal_Type_Obu_BasicTypes_Pkg,
    get_T_internal_Type_Obu_BasicTypes_Pkg_signature,
    init_T_internal_Type_Obu_BasicTypes_Pkg,
    release_T_internal_Type_Obu_BasicTypes_Pkg,
    copy_T_internal_Type_Obu_BasicTypes_Pkg,
    sizeof(T_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** T_TRAIN 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_TRAINVTable_defined
    extern struct SimTypeVTable *pSimT_TRAINVTable;
  #else 
    struct SimTypeVTable *pSimT_TRAINVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_TRAINVTable;
#endif

int T_TRAIN_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_TRAINVTable != NULL
        && pSimT_TRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_TRAINVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_T_TRAIN_string(const char *str, char **endptr)
{
    static T_TRAIN rTemp;
    return string_to_T_TRAIN(str, (void*)&rTemp, endptr);
}

int string_to_T_TRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_TRAINVTable != NULL) {
        nRet = string_to_VTable(str, pSimT_TRAINVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_T_TRAIN_double_conversion_allowed()
{
    if (pSimT_TRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_TRAINVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int T_TRAIN_to_double(const void *pValue, double *nValue)
{
    if (pSimT_TRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimT_TRAINVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_T_TRAIN_long_conversion_allowed()
{
    if (pSimT_TRAINVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_TRAINVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int T_TRAIN_to_long(const void *pValue, long *nValue)
{
    if (pSimT_TRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimT_TRAINVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_T_TRAIN(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimT_TRAINVTable != NULL
        && pSimT_TRAINVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimT_TRAINVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimT_TRAINVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimT_TRAINVTable->m_version >= Scv612
               && pSimT_TRAINVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimT_TRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_TRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_TRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_TRAIN_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_T_TRAIN(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_T_TRAIN(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_TRAIN(void *pToValue, const void *pFromValue)
{
    *((T_TRAIN*)pToValue) = *((T_TRAIN*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_TRAIN_Utils = {
    T_TRAIN_to_string,
    check_T_TRAIN_string,
    string_to_T_TRAIN,
    is_T_TRAIN_double_conversion_allowed,
    T_TRAIN_to_double,
    is_T_TRAIN_long_conversion_allowed,
    T_TRAIN_to_long,
    compare_T_TRAIN,
    get_T_TRAIN_signature,
    init_T_TRAIN,
    release_T_TRAIN,
    copy_T_TRAIN,
    sizeof(T_TRAIN)
};

/****************************************************************
 ** telephoneNumber_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable;
#endif

int telephoneNumber_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, BCD_T_Obu_BasicTypes_Pkg_to_string, 15, sizeof(BCD_T_Obu_BasicTypes_Pkg), pfnStrAppend, pStrObj);
}

int check_telephoneNumber_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static telephoneNumber_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_telephoneNumber_T_Packet_TrainTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_telephoneNumber_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_BCD_T_Obu_BasicTypes_Pkg_Utils, 15, sizeof(BCD_T_Obu_BasicTypes_Pkg), endptr);
    }
    return nRet;
}

int is_telephoneNumber_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int telephoneNumber_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

int is_telephoneNumber_T_Packet_TrainTypes_Pkg_long_conversion_allowed()
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable);
    }
    return 0;
}

int telephoneNumber_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable, nValue);
    }
    return 0;
}

void compare_telephoneNumber_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_BCD_T_Obu_BasicTypes_Pkg, 15, sizeof(BCD_T_Obu_BasicTypes_Pkg), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_telephoneNumber_T_Packet_TrainTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_BCD_T_Obu_BasicTypes_Pkg_signature, 15, pfnStrAppend, pStrObj); 
}

int init_telephoneNumber_T_Packet_TrainTypes_Pkg(void *pValue)
{
    size_t i;
    for (i = 0; i < 15; i++)
        init_BCD_T_Obu_BasicTypes_Pkg(&((BCD_T_Obu_BasicTypes_Pkg*)pValue)[i]);
    return 1;
}

int release_telephoneNumber_T_Packet_TrainTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_telephoneNumber_T_Packet_TrainTypes_Pkg(void *pToValue, const void *pFromValue)
{
    kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg((telephoneNumber_T_Packet_TrainTypes_Pkg*)pToValue, (telephoneNumber_T_Packet_TrainTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_telephoneNumber_T_Packet_TrainTypes_Pkg_Utils = {
    telephoneNumber_T_Packet_TrainTypes_Pkg_to_string,
    check_telephoneNumber_T_Packet_TrainTypes_Pkg_string,
    string_to_telephoneNumber_T_Packet_TrainTypes_Pkg,
    is_telephoneNumber_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    telephoneNumber_T_Packet_TrainTypes_Pkg_to_double,
    is_telephoneNumber_T_Packet_TrainTypes_Pkg_long_conversion_allowed,
    telephoneNumber_T_Packet_TrainTypes_Pkg_to_long,
    compare_telephoneNumber_T_Packet_TrainTypes_Pkg,
    get_telephoneNumber_T_Packet_TrainTypes_Pkg_signature,
    init_telephoneNumber_T_Packet_TrainTypes_Pkg,
    release_telephoneNumber_T_Packet_TrainTypes_Pkg,
    copy_telephoneNumber_T_Packet_TrainTypes_Pkg,
    sizeof(telephoneNumber_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** time_Type_MoRC_Pck 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimtime_Type_MoRC_PckVTable_defined
    extern struct SimTypeVTable *pSimtime_Type_MoRC_PckVTable;
  #else 
    struct SimTypeVTable *pSimtime_Type_MoRC_PckVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimtime_Type_MoRC_PckVTable;
#endif

int time_Type_MoRC_Pck_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimtime_Type_MoRC_PckVTable != NULL
        && pSimtime_Type_MoRC_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtime_Type_MoRC_PckVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_time_Type_MoRC_Pck_string(const char *str, char **endptr)
{
    static time_Type_MoRC_Pck rTemp;
    return string_to_time_Type_MoRC_Pck(str, (void*)&rTemp, endptr);
}

int string_to_time_Type_MoRC_Pck(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimtime_Type_MoRC_PckVTable != NULL) {
        nRet = string_to_VTable(str, pSimtime_Type_MoRC_PckVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_time_Type_MoRC_Pck_double_conversion_allowed()
{
    if (pSimtime_Type_MoRC_PckVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtime_Type_MoRC_PckVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int time_Type_MoRC_Pck_to_double(const void *pValue, double *nValue)
{
    if (pSimtime_Type_MoRC_PckVTable != NULL) {
        return VTable_to_double(pValue, pSimtime_Type_MoRC_PckVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_time_Type_MoRC_Pck_long_conversion_allowed()
{
    if (pSimtime_Type_MoRC_PckVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimtime_Type_MoRC_PckVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int time_Type_MoRC_Pck_to_long(const void *pValue, long *nValue)
{
    if (pSimtime_Type_MoRC_PckVTable != NULL) {
        return VTable_to_long(pValue, pSimtime_Type_MoRC_PckVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_time_Type_MoRC_Pck(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimtime_Type_MoRC_PckVTable != NULL
        && pSimtime_Type_MoRC_PckVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimtime_Type_MoRC_PckVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimtime_Type_MoRC_PckVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimtime_Type_MoRC_PckVTable->m_version >= Scv612
               && pSimtime_Type_MoRC_PckVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimtime_Type_MoRC_PckVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimtime_Type_MoRC_PckVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimtime_Type_MoRC_PckVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_time_Type_MoRC_Pck_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_time_Type_MoRC_Pck(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_time_Type_MoRC_Pck(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_time_Type_MoRC_Pck(void *pToValue, const void *pFromValue)
{
    *((time_Type_MoRC_Pck*)pToValue) = *((time_Type_MoRC_Pck*)pFromValue);
    return 1;
}

SimTypeUtils _Type_time_Type_MoRC_Pck_Utils = {
    time_Type_MoRC_Pck_to_string,
    check_time_Type_MoRC_Pck_string,
    string_to_time_Type_MoRC_Pck,
    is_time_Type_MoRC_Pck_double_conversion_allowed,
    time_Type_MoRC_Pck_to_double,
    is_time_Type_MoRC_Pck_long_conversion_allowed,
    time_Type_MoRC_Pck_to_long,
    compare_time_Type_MoRC_Pck,
    get_time_Type_MoRC_Pck_signature,
    init_time_Type_MoRC_Pck,
    release_time_Type_MoRC_Pck,
    copy_time_Type_MoRC_Pck,
    sizeof(time_Type_MoRC_Pck)
};

/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimV_internal_Type_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimV_internal_Type_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimV_internal_Type_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimV_internal_Type_Obu_BasicTypes_PkgVTable;
#endif

int V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static V_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_V_internal_Type_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_V_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int V_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_V_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimV_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int V_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_V_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
               && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_V_internal_Type_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_V_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_V_internal_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_V_internal_Type_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((V_internal_Type_Obu_BasicTypes_Pkg*)pToValue) = *((V_internal_Type_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    V_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_V_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_V_internal_Type_Obu_BasicTypes_Pkg,
    is_V_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    V_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_V_internal_Type_Obu_BasicTypes_Pkg_long_conversion_allowed,
    V_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_V_internal_Type_Obu_BasicTypes_Pkg,
    get_V_internal_Type_Obu_BasicTypes_Pkg_signature,
    init_V_internal_Type_Obu_BasicTypes_Pkg,
    release_V_internal_Type_Obu_BasicTypes_Pkg,
    copy_V_internal_Type_Obu_BasicTypes_Pkg,
    sizeof(V_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** V_odometry_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimV_odometry_Type_Obu_BasicTypes_PkgVTable_defined
    extern struct SimTypeVTable *pSimV_odometry_Type_Obu_BasicTypes_PkgVTable;
  #else 
    struct SimTypeVTable *pSimV_odometry_Type_Obu_BasicTypes_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimV_odometry_Type_Obu_BasicTypes_PkgVTable;
#endif

int V_odometry_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_int32_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_V_odometry_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static V_odometry_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_V_odometry_Type_Obu_BasicTypes_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_V_odometry_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimV_odometry_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_kcg_int32(str, pValue, endptr);
    }
    return nRet;
}

int is_V_odometry_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_odometry_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_double_conversion_allowed();
}

int V_odometry_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimV_odometry_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_double(pValue, nValue);
}

int is_V_odometry_Type_Obu_BasicTypes_Pkg_long_conversion_allowed()
{
    if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimV_odometry_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int32_long_conversion_allowed();
}

int V_odometry_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimV_odometry_Type_Obu_BasicTypes_PkgVTable, nValue);
    }
    return kcg_int32_to_long(pValue, nValue);
}

void compare_V_odometry_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
               && pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimV_odometry_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Aliased type comparison: */
        compare_kcg_int32(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_V_odometry_Type_Obu_BasicTypes_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_int32_signature(pfnStrAppend, pStrObj);
}

int init_V_odometry_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    init_kcg_int32(pValue);
    return 1;
}

int release_V_odometry_Type_Obu_BasicTypes_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_V_odometry_Type_Obu_BasicTypes_Pkg(void *pToValue, const void *pFromValue)
{
    *((V_odometry_Type_Obu_BasicTypes_Pkg*)pToValue) = *((V_odometry_Type_Obu_BasicTypes_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils = {
    V_odometry_Type_Obu_BasicTypes_Pkg_to_string,
    check_V_odometry_Type_Obu_BasicTypes_Pkg_string,
    string_to_V_odometry_Type_Obu_BasicTypes_Pkg,
    is_V_odometry_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    V_odometry_Type_Obu_BasicTypes_Pkg_to_double,
    is_V_odometry_Type_Obu_BasicTypes_Pkg_long_conversion_allowed,
    V_odometry_Type_Obu_BasicTypes_Pkg_to_long,
    compare_V_odometry_Type_Obu_BasicTypes_Pkg,
    get_V_odometry_Type_Obu_BasicTypes_Pkg_signature,
    init_V_odometry_Type_Obu_BasicTypes_Pkg,
    release_V_odometry_Type_Obu_BasicTypes_Pkg,
    copy_V_odometry_Type_Obu_BasicTypes_Pkg,
    sizeof(V_odometry_Type_Obu_BasicTypes_Pkg)
};

