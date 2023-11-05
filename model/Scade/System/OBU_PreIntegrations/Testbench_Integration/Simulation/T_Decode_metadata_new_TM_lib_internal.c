/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_metadata_new_TM_lib_internal.h"

/* TM_lib_internal::T_Decode_metadata_new/ */
void T_Decode_metadata_new_TM_lib_internal(
  /* Metadata_in/ */
  kcg_int32 Metadata_in,
  outC_T_Decode_metadata_new_TM_lib_internal *outC)
{
  outC->_L11 = DIM_offset_metadata_id_TM_lib_internal;
  outC->_L7 = DIM_offset_metadata_m_version_TM_lib_internal;
  outC->_L6 = DIM_offset_metadata_q_dir_TM_lib_internal;
  outC->_L1 = Metadata_in;
  outC->_L5 = outC->_L1 % outC->_L6;
  outC->_L9 = outC->_L5 % outC->_L7;
  outC->_L10 = outC->_L9 / outC->_L11;
  outC->_L8 = outC->_L5 / outC->_L7;
  outC->_L3 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  outC->_L4 = outC->_L1 / outC->_L3;
  outC->m_version = outC->_L8;
  outC->id = outC->_L10;
  outC->nid_packet = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void T_Decode_metadata_new_init_TM_lib_internal(
  outC_T_Decode_metadata_new_TM_lib_internal *outC)
{
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->m_version = kcg_lit_int32(0);
  outC->id = kcg_lit_int32(0);
  outC->nid_packet = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_Decode_metadata_new_reset_TM_lib_internal(
  outC_T_Decode_metadata_new_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Decode_metadata_new_TM_lib_internal.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

