/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::GetPacketId/ */
void GetPacketId_InformationFilter_Pkg_Common(
  /* inPacket/ */
  MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_GetPacketId_InformationFilter_Pkg_Common *outC)
{
  outC->_L9 = kcg_lit_int32(255);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, inPacket);
  outC->_L6 = outC->_L1.nid_packet;
  /* _L5=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_TM(
    outC->_L6,
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
  outC->_L5 =
    outC->Context_T_extract_nid_packet_from_metadata_selector_1.nid_packet;
  outC->_L7 = outC->_L1.valid;
  /* _L8= */
  if (outC->_L7) {
    outC->_L8 = outC->_L5;
  }
  else {
    outC->_L8 = outC->_L9;
  }
  outC->outPacketId = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void GetPacketId_init_InformationFilter_Pkg_Common(
  outC_GetPacketId_InformationFilter_Pkg_Common *outC)
{
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = kcg_lit_int32(0);
  outC->_L1.endAddress = kcg_lit_int32(0);
  outC->outPacketId = kcg_lit_int32(0);
  /* _L5=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_init_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GetPacketId_reset_InformationFilter_Pkg_Common(
  outC_GetPacketId_InformationFilter_Pkg_Common *outC)
{
  /* _L5=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_reset_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GetPacketId_InformationFilter_Pkg_Common.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

