/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc/ */
void C_P011_us_array_ntc_TM_TrainToTrack_lib_internal(
  /* flat/ */
  kcg_int32 flat,
  outC_C_P011_us_array_ntc_TM_TrainToTrack_lib_internal *outC)
{
  outC->_L1 = flat;
  /* _L34=(TM_conversions::CAST_Int_to_NID_NTC#1)/ */
  CAST_Int_to_NID_NTC_TM_conversions(
    outC->_L1,
    &outC->Context_CAST_Int_to_NID_NTC_1);
  outC->_L34 = outC->Context_CAST_Int_to_NID_NTC_1.nid_ntc;
  outC->sections = outC->_L34;
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_us_array_ntc_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_us_array_ntc_TM_TrainToTrack_lib_internal *outC)
{
  outC->_L34 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->sections = kcg_lit_int32(0);
  /* _L34=(TM_conversions::CAST_Int_to_NID_NTC#1)/ */
  CAST_Int_to_NID_NTC_init_TM_conversions(&outC->Context_CAST_Int_to_NID_NTC_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_us_array_ntc_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_us_array_ntc_TM_TrainToTrack_lib_internal *outC)
{
  /* _L34=(TM_conversions::CAST_Int_to_NID_NTC#1)/ */
  CAST_Int_to_NID_NTC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_NTC_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_us_array_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

