/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array/ */
void C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(
  /* section/ */
  kcg_int32 section,
  outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC)
{
  outC->_L1 = section;
  outC->_L15 = /* _L15= */(kcg_int64) outC->_L1;
  /* _L13=(TM_conversions::CAST_Int_to_NID_RADIO#1)/ */
  CAST_Int_to_NID_RADIO_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_NID_RADIO_1);
  outC->_L13 = outC->Context_CAST_Int_to_NID_RADIO_1.nid_radio;
  outC->section_arrays = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003_fs_struct_to_array_init_TM_TrainToTrack_lib_internal(
  outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC)
{
  outC->_L15 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->section_arrays = kcg_lit_int32(0);
  /* _L13=(TM_conversions::CAST_Int_to_NID_RADIO#1)/ */
  CAST_Int_to_NID_RADIO_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_RADIO_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P003_fs_struct_to_array_reset_TM_TrainToTrack_lib_internal(
  outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC)
{
  /* _L13=(TM_conversions::CAST_Int_to_NID_RADIO#1)/ */
  CAST_Int_to_NID_RADIO_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_RADIO_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

