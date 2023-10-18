/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ */
void T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* nid_packet_in/ */
  kcg_int64 nid_packet_in,
  /* q_dir/ */
  kcg_int64 q_dir,
  /* id/ */
  kcg_int64 id,
  /* nid_packet_defined/ */
  NID_PACKET nid_packet_defined,
  /* m_version/ */
  kcg_int64 m_version,
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
  static kcg_bool noname;

  outC->_L15 = q_dir;
  outC->_L16 = DIM_offset_metadata_q_dir_TM_lib_internal;
  outC->_L17 = outC->_L15 * outC->_L16;
  outC->_L20 = DIM_offset_metadata_id_TM_lib_internal;
  outC->_L18 = id;
  outC->_L22 = outC->_L18 * outC->_L20;
  outC->_L13 = DIM_offset_metadata_m_version_TM_lib_internal;
  outC->_L2 = m_version;
  outC->_L14 = outC->_L2 * outC->_L13;
  outC->_L8 = ERROR_nid_packet_TM;
  outC->_L10 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  outC->_L3 = nid_packet_defined;
  outC->_L9 = outC->_L3 * outC->_L10;
  outC->_L11 = outC->_L9 + outC->_L14 + outC->_L17 + outC->_L22;
  outC->_L1 = nid_packet_in;
  outC->_L4 = outC->_L1 == outC->_L3;
  /* _L12= */
  if (outC->_L4) {
    outC->_L12 = outC->_L11;
  }
  else {
    outC->_L12 = outC->_L8;
  }
  outC->_L6 = !outC->_L4;
  noname = outC->_L6;
  outC->nid_packet_meta = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void T_Build_Metadata_Packet_ID_init_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->nid_packet_meta = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Build_Metadata_Packet_ID_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

