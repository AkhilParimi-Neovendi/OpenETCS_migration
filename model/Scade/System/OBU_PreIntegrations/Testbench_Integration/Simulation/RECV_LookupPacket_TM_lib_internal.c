/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacket/ */
void RECV_LookupPacket_TM_lib_internal(
  /* Message_ID/ */
  kcg_int64 Message_ID,
  /* HeadersIN/ */
  Metadata_T_Common_Types_Pkg *HeadersIN,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_RECV_LookupPacket_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static MetadataElement_T_Common_Types_Pkg acc;
  static kcg_size idx3;

  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L22,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, HeadersIN);
  outC->_L34 = Message_ID;
  /* _L3/ */
  for (idx = 0; idx < 30; idx++) {
    outC->_L3[idx] = outC->_L34;
  }
  outC->_L35 = F_version;
  /* _L38/ */
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L38[idx1] = outC->_L35;
  }
  outC->_L36 = F_id;
  /* _L40/ */
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L40[idx2] = outC->_L36;
  }
  outC->_L5 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L23, &outC->_L22);
  /* _L4= */
  if (outC->_L5) {
    /* _L4= */
    for (idx3 = 0; idx3 < 30; idx3++) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&acc, &outC->_L23);
      /* _L4=(TM_lib_internal::RECV_LookupPacketLoop#1)/ */
      RECV_LookupPacketLoop_TM_lib_internal(
        /* _L4= */(kcg_int64) idx3,
        &acc,
        &outC->_L1[idx3],
        outC->_L3[idx3],
        outC->_L38[idx3],
        outC->_L40[idx3],
        &outC->Context_RECV_LookupPacketLoop_1[idx3]);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L23,
        &outC->Context_RECV_LookupPacketLoop_1[idx3].HeaderFound);
      outC->_L4 = /* _L4= */(kcg_int64) (idx3 + 1);
      /* _L4= */
      if (!outC->Context_RECV_LookupPacketLoop_1[idx3].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L4 = kcg_lit_int64(0);
  }
  outC->_L45 = outC->_L23.valid;
  outC->_L24 = outC->_L23.nid_packet;
  outC->_L2 = Message_ID;
  outC->_L31 = F_version;
  outC->_L32 = F_id;
  /* _L30=(TM_lib_internal::T_Filter_Metadata#1)/ */
  T_Filter_Metadata_TM_lib_internal(
    outC->_L24,
    outC->_L2,
    outC->_L31,
    outC->_L32,
    &outC->Context_T_Filter_Metadata_1);
  outC->_L30 = outC->Context_T_Filter_Metadata_1.data_match;
  outC->_L44 = outC->_L45 & outC->_L30;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L27,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  /* _L26= */
  if (outC->_L44) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L26, &outC->_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L26, &outC->_L27);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->HeaderFound, &outC->_L26);
  outC->_L29 = kcg_lit_int64(1);
  outC->_L28 = outC->_L4 - outC->_L29;
  outC->Index = outC->_L28;
  outC->Found = outC->_L44;
}

#ifndef KCG_USER_DEFINED_INIT
void RECV_LookupPacket_init_TM_lib_internal(
  outC_RECV_LookupPacket_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L5 = kcg_true;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L40[idx1] = kcg_true;
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L38[idx2] = kcg_true;
  }
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_lit_int64(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27.nid_packet = kcg_lit_int64(0);
  outC->_L27.q_dir = Q_DIR_Reverse;
  outC->_L27.valid = kcg_true;
  outC->_L27.startAddress = kcg_lit_int64(0);
  outC->_L27.endAddress = kcg_lit_int64(0);
  outC->_L22.nid_packet = kcg_lit_int64(0);
  outC->_L22.q_dir = Q_DIR_Reverse;
  outC->_L22.valid = kcg_true;
  outC->_L22.startAddress = kcg_lit_int64(0);
  outC->_L22.endAddress = kcg_lit_int64(0);
  outC->_L26.nid_packet = kcg_lit_int64(0);
  outC->_L26.q_dir = Q_DIR_Reverse;
  outC->_L26.valid = kcg_true;
  outC->_L26.startAddress = kcg_lit_int64(0);
  outC->_L26.endAddress = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23.nid_packet = kcg_lit_int64(0);
  outC->_L23.q_dir = Q_DIR_Reverse;
  outC->_L23.valid = kcg_true;
  outC->_L23.startAddress = kcg_lit_int64(0);
  outC->_L23.endAddress = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L3[idx3] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L1[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1[idx4].valid = kcg_true;
    outC->_L1[idx4].startAddress = kcg_lit_int64(0);
    outC->_L1[idx4].endAddress = kcg_lit_int64(0);
  }
  outC->HeaderFound.nid_packet = kcg_lit_int64(0);
  outC->HeaderFound.q_dir = Q_DIR_Reverse;
  outC->HeaderFound.valid = kcg_true;
  outC->HeaderFound.startAddress = kcg_lit_int64(0);
  outC->HeaderFound.endAddress = kcg_lit_int64(0);
  outC->Index = kcg_lit_int64(0);
  outC->Found = kcg_true;
  /* _L30=(TM_lib_internal::T_Filter_Metadata#1)/ */
  T_Filter_Metadata_init_TM_lib_internal(&outC->Context_T_Filter_Metadata_1);
  for (idx = 0; idx < 30; idx++) {
    /* _L4=(TM_lib_internal::RECV_LookupPacketLoop#1)/ */
    RECV_LookupPacketLoop_init_TM_lib_internal(
      &outC->Context_RECV_LookupPacketLoop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RECV_LookupPacket_reset_TM_lib_internal(
  outC_RECV_LookupPacket_TM_lib_internal *outC)
{
  static kcg_size idx;

  /* _L30=(TM_lib_internal::T_Filter_Metadata#1)/ */
  T_Filter_Metadata_reset_TM_lib_internal(&outC->Context_T_Filter_Metadata_1);
  for (idx = 0; idx < 30; idx++) {
    /* _L4=(TM_lib_internal::RECV_LookupPacketLoop#1)/ */
    RECV_LookupPacketLoop_reset_TM_lib_internal(
      &outC->Context_RECV_LookupPacketLoop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_LookupPacket_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

