/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata/ */
void T_Filter_Metadata_TM_lib_internal(
  /* Metadata_from_track/ */
  kcg_int64 Metadata_from_track,
  /* Metadata_looked_for/ */
  kcg_int64 Metadata_looked_for,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_T_Filter_Metadata_TM_lib_internal *outC)
{
  outC->_L1 = Metadata_from_track;
  /* _L3=(TM_lib_internal::T_Decode_metadata_new#1)/ */
  T_Decode_metadata_new_TM_lib_internal(
    outC->_L1,
    &outC->Context_T_Decode_metadata_new_1);
  outC->_L3 = outC->Context_T_Decode_metadata_new_1.nid_packet;
  outC->_L4 = outC->Context_T_Decode_metadata_new_1.id;
  outC->_L6 = outC->Context_T_Decode_metadata_new_1.m_version;
  outC->_L2 = Metadata_looked_for;
  /* _L7=(TM_lib_internal::T_Decode_metadata_new#2)/ */
  T_Decode_metadata_new_TM_lib_internal(
    outC->_L2,
    &outC->Context_T_Decode_metadata_new_2);
  outC->_L7 = outC->Context_T_Decode_metadata_new_2.nid_packet;
  outC->_L8 = outC->Context_T_Decode_metadata_new_2.id;
  outC->_L10 = outC->Context_T_Decode_metadata_new_2.m_version;
  outC->_L18 = F_version;
  /* _L22=(TM_lib_internal::T_Filter_Metadata_Element#3)/ */
  T_Filter_Metadata_Element_TM_lib_internal(
    outC->_L6,
    outC->_L10,
    outC->_L18,
    &outC->Context_T_Filter_Metadata_Element_3);
  outC->_L22 = outC->Context_T_Filter_Metadata_Element_3.data_match;
  outC->_L17 = F_id;
  /* _L20=(TM_lib_internal::T_Filter_Metadata_Element#1)/ */
  T_Filter_Metadata_Element_TM_lib_internal(
    outC->_L4,
    outC->_L8,
    outC->_L17,
    &outC->Context_T_Filter_Metadata_Element_1);
  outC->_L20 = outC->Context_T_Filter_Metadata_Element_1.data_match;
  outC->_L11 = outC->_L3 == outC->_L7;
  outC->_L19 = outC->_L11 & outC->_L20 & outC->_L22;
  outC->data_match = outC->_L19;
}

#ifndef KCG_USER_DEFINED_INIT
void T_Filter_Metadata_init_TM_lib_internal(
  outC_T_Filter_Metadata_TM_lib_internal *outC)
{
  outC->_L22 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->data_match = kcg_true;
  /* _L20=(TM_lib_internal::T_Filter_Metadata_Element#1)/ */
  T_Filter_Metadata_Element_init_TM_lib_internal(
    &outC->Context_T_Filter_Metadata_Element_1);
  /* _L22=(TM_lib_internal::T_Filter_Metadata_Element#3)/ */
  T_Filter_Metadata_Element_init_TM_lib_internal(
    &outC->Context_T_Filter_Metadata_Element_3);
  /* _L7=(TM_lib_internal::T_Decode_metadata_new#2)/ */
  T_Decode_metadata_new_init_TM_lib_internal(
    &outC->Context_T_Decode_metadata_new_2);
  /* _L3=(TM_lib_internal::T_Decode_metadata_new#1)/ */
  T_Decode_metadata_new_init_TM_lib_internal(
    &outC->Context_T_Decode_metadata_new_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_Filter_Metadata_reset_TM_lib_internal(
  outC_T_Filter_Metadata_TM_lib_internal *outC)
{
  /* _L20=(TM_lib_internal::T_Filter_Metadata_Element#1)/ */
  T_Filter_Metadata_Element_reset_TM_lib_internal(
    &outC->Context_T_Filter_Metadata_Element_1);
  /* _L22=(TM_lib_internal::T_Filter_Metadata_Element#3)/ */
  T_Filter_Metadata_Element_reset_TM_lib_internal(
    &outC->Context_T_Filter_Metadata_Element_3);
  /* _L7=(TM_lib_internal::T_Decode_metadata_new#2)/ */
  T_Decode_metadata_new_reset_TM_lib_internal(
    &outC->Context_T_Decode_metadata_new_2);
  /* _L3=(TM_lib_internal::T_Decode_metadata_new#1)/ */
  T_Decode_metadata_new_reset_TM_lib_internal(
    &outC->Context_T_Decode_metadata_new_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Filter_Metadata_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

