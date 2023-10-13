#ifndef ENVSIM_TYPES_CONVERSION
#define ENVSIM_TYPES_CONVERSION

#include "SmuTypes.h"

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/
extern int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseTelegramHeader_int_T_TM_double_conversion_allowed();
extern int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nValue);
extern int is_BaliseTelegramHeader_int_T_TM_long_conversion_allowed();
extern int BaliseTelegramHeader_int_T_TM_to_long(const void *pValue, long *nValue);
extern void compare_BaliseTelegramHeader_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_BaliseTelegramHeader_int_T_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_BaliseTelegramHeader_int_T_TM(void *pValue);
extern int release_BaliseTelegramHeader_int_T_TM(void *pValue);
extern int copy_BaliseTelegramHeader_int_T_TM(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils;

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/
extern int CompressedBaliseMessage_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedBaliseMessage_TM_double_conversion_allowed();
extern int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nValue);
extern int is_CompressedBaliseMessage_TM_long_conversion_allowed();
extern int CompressedBaliseMessage_TM_to_long(const void *pValue, long *nValue);
extern void compare_CompressedBaliseMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_CompressedBaliseMessage_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_CompressedBaliseMessage_TM(void *pValue);
extern int release_CompressedBaliseMessage_TM(void *pValue);
extern int copy_CompressedBaliseMessage_TM(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils;

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int is_CompressedPacketData_T_Common_Types_Pkg_long_conversion_allowed();
extern int CompressedPacketData_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue);
extern void compare_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_CompressedPacketData_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_CompressedPacketData_T_Common_Types_Pkg(void *pValue);
extern int release_CompressedPacketData_T_Common_Types_Pkg(void *pValue);
extern int copy_CompressedPacketData_T_Common_Types_Pkg(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int is_CompressedPackets_T_Common_Types_Pkg_long_conversion_allowed();
extern int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue);
extern void compare_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_CompressedPackets_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_CompressedPackets_T_Common_Types_Pkg(void *pValue);
extern int release_CompressedPackets_T_Common_Types_Pkg(void *pValue);
extern int copy_CompressedPackets_T_Common_Types_Pkg(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedRadioMessage_TM 
 ****************************************************************/
extern int CompressedRadioMessage_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_CompressedRadioMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedRadioMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedRadioMessage_TM_double_conversion_allowed();
extern int CompressedRadioMessage_TM_to_double(const void *pValue, double *nValue);
extern int is_CompressedRadioMessage_TM_long_conversion_allowed();
extern int CompressedRadioMessage_TM_to_long(const void *pValue, long *nValue);
extern void compare_CompressedRadioMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_CompressedRadioMessage_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_CompressedRadioMessage_TM(void *pValue);
extern int release_CompressedRadioMessage_TM(void *pValue);
extern int copy_CompressedRadioMessage_TM(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_CompressedRadioMessage_TM_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_double_conversion_allowed();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int is_kcg_bool_long_conversion_allowed();
extern int kcg_bool_to_long(const void *pValue, long *nValue);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_bool(void *pValue);
extern int release_kcg_bool(void *pValue);
extern int copy_kcg_bool(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_double_conversion_allowed();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int is_kcg_char_long_conversion_allowed();
extern int kcg_char_to_long(const void *pValue, long *nValue);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_char(void *pValue);
extern int release_kcg_char(void *pValue);
extern int copy_kcg_char(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_float32 
 ****************************************************************/
extern int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float32_string(const char *str, char **endptr);
extern int string_to_kcg_float32(const char *str, void *pValue, char **endptr);
extern int is_kcg_float32_double_conversion_allowed();
extern int kcg_float32_to_double(const void *pValue, double *nValue);
extern int is_kcg_float32_long_conversion_allowed();
extern int kcg_float32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float32(void *pValue);
extern int release_kcg_float32(void *pValue);
extern int copy_kcg_float32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float32_Utils;

/****************************************************************
 ** kcg_float64 
 ****************************************************************/
extern int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float64_string(const char *str, char **endptr);
extern int string_to_kcg_float64(const char *str, void *pValue, char **endptr);
extern int is_kcg_float64_double_conversion_allowed();
extern int kcg_float64_to_double(const void *pValue, double *nValue);
extern int is_kcg_float64_long_conversion_allowed();
extern int kcg_float64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float64(void *pValue);
extern int release_kcg_float64(void *pValue);
extern int copy_kcg_float64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float64_Utils;

/****************************************************************
 ** kcg_int16 
 ****************************************************************/
extern int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int16_string(const char *str, char **endptr);
extern int string_to_kcg_int16(const char *str, void *pValue, char **endptr);
extern int is_kcg_int16_double_conversion_allowed();
extern int kcg_int16_to_double(const void *pValue, double *nValue);
extern int is_kcg_int16_long_conversion_allowed();
extern int kcg_int16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int16(void *pValue);
extern int release_kcg_int16(void *pValue);
extern int copy_kcg_int16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int16_Utils;

/****************************************************************
 ** kcg_int32 
 ****************************************************************/
extern int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int32_string(const char *str, char **endptr);
extern int string_to_kcg_int32(const char *str, void *pValue, char **endptr);
extern int is_kcg_int32_double_conversion_allowed();
extern int kcg_int32_to_double(const void *pValue, double *nValue);
extern int is_kcg_int32_long_conversion_allowed();
extern int kcg_int32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int32(void *pValue);
extern int release_kcg_int32(void *pValue);
extern int copy_kcg_int32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int32_Utils;

/****************************************************************
 ** kcg_int64 
 ****************************************************************/
extern int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int64_string(const char *str, char **endptr);
extern int string_to_kcg_int64(const char *str, void *pValue, char **endptr);
extern int is_kcg_int64_double_conversion_allowed();
extern int kcg_int64_to_double(const void *pValue, double *nValue);
extern int is_kcg_int64_long_conversion_allowed();
extern int kcg_int64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int64(void *pValue);
extern int release_kcg_int64(void *pValue);
extern int copy_kcg_int64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int64_Utils;

/****************************************************************
 ** kcg_int8 
 ****************************************************************/
extern int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int8_string(const char *str, char **endptr);
extern int string_to_kcg_int8(const char *str, void *pValue, char **endptr);
extern int is_kcg_int8_double_conversion_allowed();
extern int kcg_int8_to_double(const void *pValue, double *nValue);
extern int is_kcg_int8_long_conversion_allowed();
extern int kcg_int8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int8(void *pValue);
extern int release_kcg_int8(void *pValue);
extern int copy_kcg_int8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int8_Utils;

/****************************************************************
 ** kcg_size 
 ****************************************************************/
extern int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_size_string(const char *str, char **endptr);
extern int string_to_kcg_size(const char *str, void *pValue, char **endptr);
extern int is_kcg_size_double_conversion_allowed();
extern int kcg_size_to_double(const void *pValue, double *nValue);
extern int is_kcg_size_long_conversion_allowed();
extern int kcg_size_to_long(const void *pValue, long *nValue);
extern void compare_kcg_size(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_size(void *pValue);
extern int release_kcg_size(void *pValue);
extern int copy_kcg_size(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_size_Utils;

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/
extern int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint16_string(const char *str, char **endptr);
extern int string_to_kcg_uint16(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint16_double_conversion_allowed();
extern int kcg_uint16_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint16_long_conversion_allowed();
extern int kcg_uint16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint16(void *pValue);
extern int release_kcg_uint16(void *pValue);
extern int copy_kcg_uint16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint16_Utils;

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/
extern int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint32_string(const char *str, char **endptr);
extern int string_to_kcg_uint32(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint32_double_conversion_allowed();
extern int kcg_uint32_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint32_long_conversion_allowed();
extern int kcg_uint32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint32(void *pValue);
extern int release_kcg_uint32(void *pValue);
extern int copy_kcg_uint32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint32_Utils;

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/
extern int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint64_string(const char *str, char **endptr);
extern int string_to_kcg_uint64(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint64_double_conversion_allowed();
extern int kcg_uint64_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint64_long_conversion_allowed();
extern int kcg_uint64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint64(void *pValue);
extern int release_kcg_uint64(void *pValue);
extern int copy_kcg_uint64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint64_Utils;

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/
extern int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint8_string(const char *str, char **endptr);
extern int string_to_kcg_uint8(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint8_double_conversion_allowed();
extern int kcg_uint8_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint8_long_conversion_allowed();
extern int kcg_uint8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint8(void *pValue);
extern int release_kcg_uint8(void *pValue);
extern int copy_kcg_uint8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint8_Utils;

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed();
extern int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int is_Metadata_T_Common_Types_Pkg_long_conversion_allowed();
extern int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue);
extern void compare_Metadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_Metadata_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_Metadata_T_Common_Types_Pkg(void *pValue);
extern int release_Metadata_T_Common_Types_Pkg(void *pValue);
extern int copy_Metadata_T_Common_Types_Pkg(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed();
extern int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int is_MetadataElement_T_Common_Types_Pkg_long_conversion_allowed();
extern int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nValue);
extern void compare_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_MetadataElement_T_Common_Types_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_MetadataElement_T_Common_Types_Pkg(void *pValue);
extern int release_MetadataElement_T_Common_Types_Pkg(void *pValue);
extern int copy_MetadataElement_T_Common_Types_Pkg(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/
extern int NID_PACKET_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_NID_PACKET_double_conversion_allowed();
extern int NID_PACKET_to_double(const void *pValue, double *nValue);
extern int is_NID_PACKET_long_conversion_allowed();
extern int NID_PACKET_to_long(const void *pValue, long *nValue);
extern void compare_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_NID_PACKET_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_NID_PACKET(void *pValue);
extern int release_NID_PACKET(void *pValue);
extern int copy_NID_PACKET(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_NID_PACKET_Utils;

/****************************************************************
 ** Q_DIR 
 ****************************************************************/
extern int Q_DIR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_Q_DIR_string(const char *str, char **endptr);
extern int string_to_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_Q_DIR_double_conversion_allowed();
extern int Q_DIR_to_double(const void *pValue, double *nValue);
extern int is_Q_DIR_long_conversion_allowed();
extern int Q_DIR_to_long(const void *pValue, long *nValue);
extern void compare_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_Q_DIR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_Q_DIR(void *pValue);
extern int release_Q_DIR(void *pValue);
extern int copy_Q_DIR(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_Q_DIR_Utils;

/****************************************************************
 ** Radio_TrackTrain_Header_T_TM 
 ****************************************************************/
extern int Radio_TrackTrain_Header_T_TM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_Radio_TrackTrain_Header_T_TM_string(const char *str, char **endptr);
extern int string_to_Radio_TrackTrain_Header_T_TM(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrackTrain_Header_T_TM_double_conversion_allowed();
extern int Radio_TrackTrain_Header_T_TM_to_double(const void *pValue, double *nValue);
extern int is_Radio_TrackTrain_Header_T_TM_long_conversion_allowed();
extern int Radio_TrackTrain_Header_T_TM_to_long(const void *pValue, long *nValue);
extern void compare_Radio_TrackTrain_Header_T_TM(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_Radio_TrackTrain_Header_T_TM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_Radio_TrackTrain_Header_T_TM(void *pValue);
extern int release_Radio_TrackTrain_Header_T_TM(void *pValue);
extern int copy_Radio_TrackTrain_Header_T_TM(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_Radio_TrackTrain_Header_T_TM_Utils;


#endif /*ENVSIM_TYPES_CONVERSION */
