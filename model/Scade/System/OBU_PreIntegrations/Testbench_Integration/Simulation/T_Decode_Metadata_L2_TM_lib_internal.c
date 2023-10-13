/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"

/* TM_lib_internal::T_Decode_Metadata_L2/ */
void T_Decode_Metadata_L2_TM_lib_internal(
  /* Metadata/ */
  kcg_int64 Metadata,
  /* i/ */
  kcg_int64 i,
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC)
{
  outC->_L2 = Metadata;
  outC->_L1 = i;
  outC->_L3 = outC->_L1 + outC->_L2;
  outC->nid_packet = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void T_Decode_Metadata_L2_init_TM_lib_internal(
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC)
{
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->nid_packet = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_Decode_Metadata_L2_reset_TM_lib_internal(
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Decode_Metadata_L2_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

