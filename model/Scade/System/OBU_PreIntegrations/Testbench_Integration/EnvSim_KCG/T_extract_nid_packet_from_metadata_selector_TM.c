/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* TM::T_extract_nid_packet_from_metadata_selector/ */
void T_extract_nid_packet_from_metadata_selector_TM(
  /* Metadata_in/ */
  kcg_int64 Metadata_in,
  outC_T_extract_nid_packet_from_metadata_selector_TM *outC)
{
  outC->_L3 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  outC->_L1 = Metadata_in;
  outC->_L4 = outC->_L1 / outC->_L3;
  outC->nid_packet = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void T_extract_nid_packet_from_metadata_selector_init_TM(
  outC_T_extract_nid_packet_from_metadata_selector_TM *outC)
{
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->nid_packet = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_extract_nid_packet_from_metadata_selector_reset_TM(
  outC_T_extract_nid_packet_from_metadata_selector_TM *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_extract_nid_packet_from_metadata_selector_TM.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

