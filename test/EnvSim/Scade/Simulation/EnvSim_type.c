#include "EnvSim_type.h"

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

static kcg_int32 const TU_cMetadataArraySize_Common_Types_Pkg = cMetadataArraySize_Common_Types_Pkg;
static kcg_int32 const TU_cDIM_MaxRMessages_Common_Types_Pkg = cDIM_MaxRMessages_Common_Types_Pkg;
static kcg_int32 const TU_cDIM_MaxDataElementsInRMessage_Common_Types_Pkg = cDIM_MaxDataElementsInRMessage_Common_Types_Pkg;

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBaliseTelegramHeader_int_T_TMVTable_defined
    extern struct SimTypeVTable *pSimBaliseTelegramHeader_int_T_TMVTable;
  #else 
    struct SimTypeVTable *pSimBaliseTelegramHeader_int_T_TMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBaliseTelegramHeader_int_T_TMVTable;
#endif

static SimFieldUtils BaliseTelegramHeader_int_T_TM_fields[] = {
    {"q_updown", offsetof(BaliseTelegramHeader_int_T_TM,q_updown), &_Type_kcg_int32_Utils},
    {"m_version", offsetof(BaliseTelegramHeader_int_T_TM,m_version), &_Type_kcg_int32_Utils},
    {"q_media", offsetof(BaliseTelegramHeader_int_T_TM,q_media), &_Type_kcg_int32_Utils},
    {"n_pig", offsetof(BaliseTelegramHeader_int_T_TM,n_pig), &_Type_kcg_int32_Utils},
    {"n_total", offsetof(BaliseTelegramHeader_int_T_TM,n_total), &_Type_kcg_int32_Utils},
    {"m_dup", offsetof(BaliseTelegramHeader_int_T_TM,m_dup), &_Type_kcg_int32_Utils},
    {"m_mcount", offsetof(BaliseTelegramHeader_int_T_TM,m_mcount), &_Type_kcg_int32_Utils},
    {"nid_c", offsetof(BaliseTelegramHeader_int_T_TM,nid_c), &_Type_kcg_int32_Utils},
    {"nid_bg", offsetof(BaliseTelegramHeader_int_T_TM,nid_bg), &_Type_kcg_int32_Utils},
    {"q_link", offsetof(BaliseTelegramHeader_int_T_TM,q_link), &_Type_kcg_int32_Utils},
};

int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, BaliseTelegramHeader_int_T_TM_fields, 10, pfnStrAppend, pStrObj);
}

int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr)
{
    static BaliseTelegramHeader_int_T_TM rTemp;
    return string_to_BaliseTelegramHeader_int_T_TM(str, (void*)&rTemp, endptr);
}

int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        nRet = string_to_VTable(str, pSimBaliseTelegramHeader_int_T_TMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, BaliseTelegramHeader_int_T_TM_fields, 10, endptr);
    }
    return nRet;
}

int is_BaliseTelegramHeader_int_T_TM_double_conversion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return 0;
}

int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nValue);
    }
    return 0;
}

int is_BaliseTelegramHeader_int_T_TM_long_conversion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return 0;
}

int BaliseTelegramHeader_int_T_TM_to_long(const void *pValue, long *nValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nValue);
    }
    return 0;
}

void compare_BaliseTelegramHeader_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv612
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, BaliseTelegramHeader_int_T_TM_fields, 10, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_BaliseTelegramHeader_int_T_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(BaliseTelegramHeader_int_T_TM_fields, 10, pfnStrAppend, pStrObj);
}

int init_BaliseTelegramHeader_int_T_TM(void *pValue)
{
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->q_updown));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->m_version));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->q_media));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->n_pig));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->n_total));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->m_dup));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->m_mcount));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->nid_c));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->nid_bg));
    init_kcg_int32(&(((BaliseTelegramHeader_int_T_TM*)pValue)->q_link));
    return 1;
}

int release_BaliseTelegramHeader_int_T_TM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_BaliseTelegramHeader_int_T_TM(void *pToValue, const void *pFromValue)
{
    kcg_copy_BaliseTelegramHeader_int_T_TM((BaliseTelegramHeader_int_T_TM*)pToValue, (BaliseTelegramHeader_int_T_TM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils = {
    BaliseTelegramHeader_int_T_TM_to_string,
    check_BaliseTelegramHeader_int_T_TM_string,
    string_to_BaliseTelegramHeader_int_T_TM,
    is_BaliseTelegramHeader_int_T_TM_double_conversion_allowed,
    BaliseTelegramHeader_int_T_TM_to_double,
    is_BaliseTelegramHeader_int_T_TM_long_conversion_allowed,
    BaliseTelegramHeader_int_T_TM_to_long,
    compare_BaliseTelegramHeader_int_T_TM,
    get_BaliseTelegramHeader_int_T_TM_signature,
    init_BaliseTelegramHeader_int_T_TM,
    release_BaliseTelegramHeader_int_T_TM,
    copy_BaliseTelegramHeader_int_T_TM,
    sizeof(BaliseTelegramHeader_int_T_TM)
};

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCompressedBaliseMessage_TMVTable_defined
    extern struct SimTypeVTable *pSimCompressedBaliseMessage_TMVTable;
  #else 
    struct SimTypeVTable *pSimCompressedBaliseMessage_TMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCompressedBaliseMessage_TMVTable;
#endif

static SimFieldUtils CompressedBaliseMessage_TM_fields[] = {
    {"Header", offsetof(CompressedBaliseMessage_TM,Header), &_Type_BaliseTelegramHeader_int_T_TM_Utils},
    {"Messages", offsetof(CompressedBaliseMessage_TM,Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
};

int CompressedBaliseMessage_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, CompressedBaliseMessage_TM_fields, 2, pfnStrAppend, pStrObj);
}

int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr)
{
    static CompressedBaliseMessage_TM rTemp;
    return string_to_CompressedBaliseMessage_TM(str, (void*)&rTemp, endptr);
}

int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        nRet = string_to_VTable(str, pSimCompressedBaliseMessage_TMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, CompressedBaliseMessage_TM_fields, 2, endptr);
    }
    return nRet;
}

int is_CompressedBaliseMessage_TM_double_conversion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return 0;
}

int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedBaliseMessage_TMVTable, nValue);
    }
    return 0;
}

int is_CompressedBaliseMessage_TM_long_conversion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return 0;
}

int CompressedBaliseMessage_TM_to_long(const void *pValue, long *nValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedBaliseMessage_TMVTable, nValue);
    }
    return 0;
}

void compare_CompressedBaliseMessage_TM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_version >= Scv612
        && pSimCompressedBaliseMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimCompressedBaliseMessage_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, CompressedBaliseMessage_TM_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_CompressedBaliseMessage_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(CompressedBaliseMessage_TM_fields, 2, pfnStrAppend, pStrObj);
}

int init_CompressedBaliseMessage_TM(void *pValue)
{
    init_BaliseTelegramHeader_int_T_TM(&(((CompressedBaliseMessage_TM*)pValue)->Header));
    init_CompressedPackets_T_Common_Types_Pkg(&(((CompressedBaliseMessage_TM*)pValue)->Messages));
    return 1;
}

int release_CompressedBaliseMessage_TM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_CompressedBaliseMessage_TM(void *pToValue, const void *pFromValue)
{
    kcg_copy_CompressedBaliseMessage_TM((CompressedBaliseMessage_TM*)pToValue, (CompressedBaliseMessage_TM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils = {
    CompressedBaliseMessage_TM_to_string,
    check_CompressedBaliseMessage_TM_string,
    string_to_CompressedBaliseMessage_TM,
    is_CompressedBaliseMessage_TM_double_conversion_allowed,
    CompressedBaliseMessage_TM_to_double,
    is_CompressedBaliseMessage_TM_long_conversion_allowed,
    CompressedBaliseMessage_TM_to_long,
    compare_CompressedBaliseMessage_TM,
    get_CompressedBaliseMessage_TM_signature,
    init_CompressedBaliseMessage_TM,
    release_CompressedBaliseMessage_TM,
    copy_CompressedBaliseMessage_TM,
    sizeof(CompressedBaliseMessage_TM)
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
 ** CompressedRadioMessage_TM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCompressedRadioMessage_TMVTable_defined
    extern struct SimTypeVTable *pSimCompressedRadioMessage_TMVTable;
  #else 
    struct SimTypeVTable *pSimCompressedRadioMessage_TMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCompressedRadioMessage_TMVTable;
#endif

static SimFieldUtils CompressedRadioMessage_TM_fields[] = {
    {"Header", offsetof(CompressedRadioMessage_TM,Header), &_Type_Radio_TrackTrain_Header_T_TM_Utils},
    {"Messages", offsetof(CompressedRadioMessage_TM,Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils},
};

int CompressedRadioMessage_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCompressedRadioMessage_TMVTable != NULL
        && pSimCompressedRadioMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedRadioMessage_TMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, CompressedRadioMessage_TM_fields, 2, pfnStrAppend, pStrObj);
}

int check_CompressedRadioMessage_TM_string(const char *str, char **endptr)
{
    static CompressedRadioMessage_TM rTemp;
    return string_to_CompressedRadioMessage_TM(str, (void*)&rTemp, endptr);
}

int string_to_CompressedRadioMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        nRet = string_to_VTable(str, pSimCompressedRadioMessage_TMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, CompressedRadioMessage_TM_fields, 2, endptr);
    }
    return nRet;
}

int is_CompressedRadioMessage_TM_double_conversion_allowed()
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedRadioMessage_TMVTable);
    }
    return 0;
}

int CompressedRadioMessage_TM_to_double(const void *pValue, double *nValue)
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedRadioMessage_TMVTable, nValue);
    }
    return 0;
}

int is_CompressedRadioMessage_TM_long_conversion_allowed()
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCompressedRadioMessage_TMVTable);
    }
    return 0;
}

int CompressedRadioMessage_TM_to_long(const void *pValue, long *nValue)
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedRadioMessage_TMVTable, nValue);
    }
    return 0;
}

void compare_CompressedRadioMessage_TM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCompressedRadioMessage_TMVTable != NULL
        && pSimCompressedRadioMessage_TMVTable->m_version >= Scv612
        && pSimCompressedRadioMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimCompressedRadioMessage_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimCompressedRadioMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimCompressedRadioMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, CompressedRadioMessage_TM_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_CompressedRadioMessage_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(CompressedRadioMessage_TM_fields, 2, pfnStrAppend, pStrObj);
}

int init_CompressedRadioMessage_TM(void *pValue)
{
    init_Radio_TrackTrain_Header_T_TM(&(((CompressedRadioMessage_TM*)pValue)->Header));
    init_CompressedPackets_T_Common_Types_Pkg(&(((CompressedRadioMessage_TM*)pValue)->Messages));
    return 1;
}

int release_CompressedRadioMessage_TM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_CompressedRadioMessage_TM(void *pToValue, const void *pFromValue)
{
    kcg_copy_CompressedRadioMessage_TM((CompressedRadioMessage_TM*)pToValue, (CompressedRadioMessage_TM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_CompressedRadioMessage_TM_Utils = {
    CompressedRadioMessage_TM_to_string,
    check_CompressedRadioMessage_TM_string,
    string_to_CompressedRadioMessage_TM,
    is_CompressedRadioMessage_TM_double_conversion_allowed,
    CompressedRadioMessage_TM_to_double,
    is_CompressedRadioMessage_TM_long_conversion_allowed,
    CompressedRadioMessage_TM_to_long,
    compare_CompressedRadioMessage_TM,
    get_CompressedRadioMessage_TM_signature,
    init_CompressedRadioMessage_TM,
    release_CompressedRadioMessage_TM,
    copy_CompressedRadioMessage_TM,
    sizeof(CompressedRadioMessage_TM)
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
 ** kcg_float32 
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

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
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
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
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
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
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
 ** kcg_int32 
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

static SimConstValUtils const kcg_int32_constants[] = {
    { "Common_Types_Pkg::cMetadataArraySize", &TU_cMetadataArraySize_Common_Types_Pkg },
    { "cMetadataArraySize", &TU_cMetadataArraySize_Common_Types_Pkg },
    { "Common_Types_Pkg::cDIM_MaxRMessages", &TU_cDIM_MaxRMessages_Common_Types_Pkg },
    { "cDIM_MaxRMessages", &TU_cDIM_MaxRMessages_Common_Types_Pkg },
    { "Common_Types_Pkg::cDIM_MaxDataElementsInRMessage", &TU_cDIM_MaxDataElementsInRMessage_Common_Types_Pkg },
    { "cDIM_MaxDataElementsInRMessage", &TU_cDIM_MaxDataElementsInRMessage_Common_Types_Pkg },
};

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
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
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
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
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
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
    return pfnStrAppend("I64", pStrObj);
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
    return pfnStrAppend("UI64", pStrObj);
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
 ** Radio_TrackTrain_Header_T_TM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimRadio_TrackTrain_Header_T_TMVTable_defined
    extern struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_TMVTable;
  #else 
    struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_TMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_TMVTable;
#endif

static SimFieldUtils Radio_TrackTrain_Header_T_TM_fields[] = {
    {"radioDevice", offsetof(Radio_TrackTrain_Header_T_TM,radioDevice), &_Type_kcg_int32_Utils},
    {"receivedSystemTime", offsetof(Radio_TrackTrain_Header_T_TM,receivedSystemTime), &_Type_kcg_int32_Utils},
    {"nid_message", offsetof(Radio_TrackTrain_Header_T_TM,nid_message), &_Type_kcg_int32_Utils},
    {"t_train", offsetof(Radio_TrackTrain_Header_T_TM,t_train), &_Type_kcg_int32_Utils},
    {"m_ack", offsetof(Radio_TrackTrain_Header_T_TM,m_ack), &_Type_kcg_int32_Utils},
    {"nid_lrbg", offsetof(Radio_TrackTrain_Header_T_TM,nid_lrbg), &_Type_kcg_int32_Utils},
    {"t_train_reference", offsetof(Radio_TrackTrain_Header_T_TM,t_train_reference), &_Type_kcg_int32_Utils},
    {"nid_em", offsetof(Radio_TrackTrain_Header_T_TM,nid_em), &_Type_kcg_int32_Utils},
    {"q_scale", offsetof(Radio_TrackTrain_Header_T_TM,q_scale), &_Type_kcg_int32_Utils},
    {"d_sr", offsetof(Radio_TrackTrain_Header_T_TM,d_sr), &_Type_kcg_int32_Utils},
    {"t_sh_rqst", offsetof(Radio_TrackTrain_Header_T_TM,t_sh_rqst), &_Type_kcg_int32_Utils},
    {"d_ref", offsetof(Radio_TrackTrain_Header_T_TM,d_ref), &_Type_kcg_int32_Utils},
    {"q_dir", offsetof(Radio_TrackTrain_Header_T_TM,q_dir), &_Type_kcg_int32_Utils},
    {"d_emergencystop", offsetof(Radio_TrackTrain_Header_T_TM,d_emergencystop), &_Type_kcg_int32_Utils},
    {"m_version", offsetof(Radio_TrackTrain_Header_T_TM,m_version), &_Type_kcg_int32_Utils},
};

int Radio_TrackTrain_Header_T_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimRadio_TrackTrain_Header_T_TMVTable != NULL
        && pSimRadio_TrackTrain_Header_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrackTrain_Header_T_TMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, Radio_TrackTrain_Header_T_TM_fields, 15, pfnStrAppend, pStrObj);
}

int check_Radio_TrackTrain_Header_T_TM_string(const char *str, char **endptr)
{
    static Radio_TrackTrain_Header_T_TM rTemp;
    return string_to_Radio_TrackTrain_Header_T_TM(str, (void*)&rTemp, endptr);
}

int string_to_Radio_TrackTrain_Header_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimRadio_TrackTrain_Header_T_TMVTable != NULL) {
        nRet = string_to_VTable(str, pSimRadio_TrackTrain_Header_T_TMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, Radio_TrackTrain_Header_T_TM_fields, 15, endptr);
    }
    return nRet;
}

int is_Radio_TrackTrain_Header_T_TM_double_conversion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrackTrain_Header_T_TMVTable);
    }
    return 0;
}

int Radio_TrackTrain_Header_T_TM_to_double(const void *pValue, double *nValue)
{
    if (pSimRadio_TrackTrain_Header_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrackTrain_Header_T_TMVTable, nValue);
    }
    return 0;
}

int is_Radio_TrackTrain_Header_T_TM_long_conversion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_TMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimRadio_TrackTrain_Header_T_TMVTable);
    }
    return 0;
}

int Radio_TrackTrain_Header_T_TM_to_long(const void *pValue, long *nValue)
{
    if (pSimRadio_TrackTrain_Header_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrackTrain_Header_T_TMVTable, nValue);
    }
    return 0;
}

void compare_Radio_TrackTrain_Header_T_TM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimRadio_TrackTrain_Header_T_TMVTable != NULL
        && pSimRadio_TrackTrain_Header_T_TMVTable->m_version >= Scv612
        && pSimRadio_TrackTrain_Header_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrackTrain_Header_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimRadio_TrackTrain_Header_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimRadio_TrackTrain_Header_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Radio_TrackTrain_Header_T_TM_fields, 15, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Radio_TrackTrain_Header_T_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(Radio_TrackTrain_Header_T_TM_fields, 15, pfnStrAppend, pStrObj);
}

int init_Radio_TrackTrain_Header_T_TM(void *pValue)
{
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->radioDevice));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->receivedSystemTime));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->nid_message));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->t_train));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->m_ack));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->nid_lrbg));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->t_train_reference));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->nid_em));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->q_scale));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->d_sr));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->t_sh_rqst));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->d_ref));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->q_dir));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->d_emergencystop));
    init_kcg_int32(&(((Radio_TrackTrain_Header_T_TM*)pValue)->m_version));
    return 1;
}

int release_Radio_TrackTrain_Header_T_TM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Radio_TrackTrain_Header_T_TM(void *pToValue, const void *pFromValue)
{
    kcg_copy_Radio_TrackTrain_Header_T_TM((Radio_TrackTrain_Header_T_TM*)pToValue, (Radio_TrackTrain_Header_T_TM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Radio_TrackTrain_Header_T_TM_Utils = {
    Radio_TrackTrain_Header_T_TM_to_string,
    check_Radio_TrackTrain_Header_T_TM_string,
    string_to_Radio_TrackTrain_Header_T_TM,
    is_Radio_TrackTrain_Header_T_TM_double_conversion_allowed,
    Radio_TrackTrain_Header_T_TM_to_double,
    is_Radio_TrackTrain_Header_T_TM_long_conversion_allowed,
    Radio_TrackTrain_Header_T_TM_to_long,
    compare_Radio_TrackTrain_Header_T_TM,
    get_Radio_TrackTrain_Header_T_TM_signature,
    init_Radio_TrackTrain_Header_T_TM,
    release_Radio_TrackTrain_Header_T_TM,
    copy_Radio_TrackTrain_Header_T_TM,
    sizeof(Radio_TrackTrain_Header_T_TM)
};

