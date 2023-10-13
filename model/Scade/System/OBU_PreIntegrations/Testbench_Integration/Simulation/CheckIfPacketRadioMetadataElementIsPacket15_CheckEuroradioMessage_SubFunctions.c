/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15/ */
void CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions(
  /* accumulatorInput/ */
  kcg_bool accumulatorInput,
  /* metadataElement/ */
  MetadataElement_T_Common_Types_Pkg *metadataElement,
  outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, metadataElement);
  outC->_L2 = outC->_L1.nid_packet;
  /* _L9=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_metadata_selector_TM(
    outC->_L2,
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
  outC->_L9 =
    outC->Context_T_extract_nid_packet_from_metadata_selector_1.nid_packet;
  outC->_L4 = kcg_lit_int64(15);
  outC->_L3 = outC->_L9 == outC->_L4;
  outC->_L6 = accumulatorInput;
  outC->_L8 = outC->_L6 | outC->_L3;
  outC->result = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckIfPacketRadioMetadataElementIsPacket15_init_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions *outC)
{
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1.nid_packet = kcg_lit_int64(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = kcg_lit_int64(0);
  outC->_L1.endAddress = kcg_lit_int64(0);
  outC->result = kcg_true;
  /* _L9=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_metadata_selector_init_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckIfPacketRadioMetadataElementIsPacket15_reset_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions *outC)
{
  /* _L9=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_metadata_selector_reset_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

