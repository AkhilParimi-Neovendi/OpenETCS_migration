/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_224_C_P011_fs_struct_to__TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc/ */
void _224_C_P011_fs_struct_to__TM_TrainToTrack_lib_internal(
  /* section/ */
  NID_NTC section,
  outC__224_C_P011_fs_struct_to__TM_TrainToTrack_lib_internal *outC)
{
  outC->_L1 = section;
  /* _L13=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_TM_conversions(
    outC->_L1,
    &outC->Context_CAST_NID_NTC_to_int_1);
  outC->_L13 = outC->Context_CAST_NID_NTC_to_int_1.nid_ntc_int;
  outC->section_arrays = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void _224_C_P011_fs_struct_to__init_TM_TrainToTrack_lib_internal(
  outC__224_C_P011_fs_struct_to__TM_TrainToTrack_lib_internal *outC)
{
  outC->_L13 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->section_arrays = kcg_lit_int32(0);
  /* _L13=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_init_TM_conversions(&outC->Context_CAST_NID_NTC_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _224_C_P011_fs_struct_to__reset_TM_TrainToTrack_lib_internal(
  outC__224_C_P011_fs_struct_to__TM_TrainToTrack_lib_internal *outC)
{
  /* _L13=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_NTC_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _224_C_P011_fs_struct_to__TM_TrainToTrack_lib_internal.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

