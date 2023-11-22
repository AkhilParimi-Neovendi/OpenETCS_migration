/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfSinglePacketIsAllo_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage/ */
void CheckIfSinglePacketIsAllo_CheckEuroradioMessage_SubFunctions(
  /* accumulator/ */
  kcg_bool accumulator,
  /* currentPacket/ */
  MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* nid_message/ */
  NID_MESSAGE nid_message,
  /* permittedPackets/ */
  MetadataTruthtable_T1_CheckEuroradioMessage *permittedPackets,
  outC_CheckIfSinglePacketIsAllo_CheckEuroradioMessage_SubFunctions *outC)
{
  /* validTmp/ */
  kcg_bool validTmp_partial;
  /* validTmp/ */
  kcg_bool _1_validTmp_partial;
  /* validTmp/ */
  kcg_bool _2_validTmp_partial;
  /* validTmp/ */
  kcg_bool _3_validTmp_partial;

  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L3, currentPacket);
  outC->_L12 = outC->_L3.nid_packet;
  /* _L20=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_TM(
    outC->_L12,
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
  outC->_L20 =
    outC->Context_T_extract_nid_packet_from_metadata_selector_1.nid_packet;
  outC->nid_packet = outC->_L20;
  outC->IfBlock2_clock = outC->nid_packet != kcg_lit_int32(0);
  if (outC->IfBlock2_clock) {
  }
  else {
    outC->_L1_else_IfBlock2 = kcg_true;
    _3_validTmp_partial = outC->_L1_else_IfBlock2;
  }
  outC->_L19 = outC->_L3.valid;
  outC->present = outC->_L19;
  /* IfBlock2: */
  if (outC->IfBlock2_clock) {
    outC->IfBlock1_clock_then_IfBlock2 = outC->present == kcg_true;
    /* IfBlock2:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_IfBlock2) {
      outC->_L4_then_IfBlock1_then_IfBlock2 = kcg_false;
      outC->_L3_then_IfBlock1_then_IfBlock2 = nid_message;
      outC->_L5_then_IfBlock1_then_IfBlock2 = outC->_L3_then_IfBlock1_then_IfBlock2;
      outC->_L7_then_IfBlock1_then_IfBlock2 = outC->nid_packet;
      kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(
        &outC->_L2_then_IfBlock1_then_IfBlock2,
        permittedPackets);
      if ((kcg_lit_int32(0) <= outC->_L5_then_IfBlock1_then_IfBlock2) &
        (outC->_L5_then_IfBlock1_then_IfBlock2 < kcg_lit_int32(46)) &
        ((kcg_lit_int32(0) <= outC->_L7_then_IfBlock1_then_IfBlock2) &
          (outC->_L7_then_IfBlock1_then_IfBlock2 < kcg_lit_int32(256)))) {
        outC->_L1_then_IfBlock1_then_IfBlock2 =
          outC->_L2_then_IfBlock1_then_IfBlock2[outC->_L5_then_IfBlock1_then_IfBlock2][outC->_L7_then_IfBlock1_then_IfBlock2];
      }
      else {
        outC->_L1_then_IfBlock1_then_IfBlock2 = outC->_L4_then_IfBlock1_then_IfBlock2;
      }
      _2_validTmp_partial = outC->_L1_then_IfBlock1_then_IfBlock2;
      validTmp_partial = _2_validTmp_partial;
    }
    else {
      outC->_L1_else_IfBlock1_then_IfBlock2 = kcg_true;
      _1_validTmp_partial = outC->_L1_else_IfBlock1_then_IfBlock2;
      validTmp_partial = _1_validTmp_partial;
    }
    outC->validTmp = validTmp_partial;
  }
  else {
    outC->validTmp = _3_validTmp_partial;
  }
  outC->_L16 = outC->validTmp;
  outC->_L14 = accumulator;
  outC->_L15 = outC->_L14 & outC->_L16;
  outC->valid = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckIfSinglePacketIsAllo_init_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfSinglePacketIsAllo_CheckEuroradioMessage_SubFunctions *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L3.nid_packet = kcg_lit_int32(0);
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.valid = kcg_true;
  outC->_L3.startAddress = kcg_lit_int32(0);
  outC->_L3.endAddress = kcg_lit_int32(0);
  outC->validTmp = kcg_true;
  outC->nid_packet = kcg_lit_int32(0);
  outC->present = kcg_true;
  outC->IfBlock2_clock = kcg_true;
  outC->_L1_else_IfBlock2 = kcg_true;
  outC->_L7_then_IfBlock1_then_IfBlock2 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1_then_IfBlock2 = kcg_true;
  for (idx1 = 0; idx1 < 46; idx1++) {
    for (idx = 0; idx < 256; idx++) {
      outC->_L2_then_IfBlock1_then_IfBlock2[idx1][idx] = kcg_true;
    }
  }
  outC->_L3_then_IfBlock1_then_IfBlock2 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1_then_IfBlock2 = kcg_true;
  outC->_L5_then_IfBlock1_then_IfBlock2 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1_then_IfBlock2 = kcg_true;
  outC->IfBlock1_clock_then_IfBlock2 = kcg_true;
  outC->valid = kcg_true;
  /* _L20=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_init_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckIfSinglePacketIsAllo_reset_CheckEuroradioMessage_SubFunctions(
  outC_CheckIfSinglePacketIsAllo_CheckEuroradioMessage_SubFunctions *outC)
{
  /* _L20=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_reset_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckIfSinglePacketIsAllo_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

