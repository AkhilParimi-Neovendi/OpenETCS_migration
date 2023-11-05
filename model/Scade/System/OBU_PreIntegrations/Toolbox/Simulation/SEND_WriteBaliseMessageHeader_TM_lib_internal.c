/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ */
void SEND_WriteBaliseMessageHeader_TM_lib_internal(
  /* HeadersIn/ */
  Metadata_T_Common_Types_Pkg *HeadersIn,
  /* NewHeader/ */
  MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC)
{
  kcg_int32 acc;
  kcg_size idx;

  outC->_L5 = kcg_lit_int32(0);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, HeadersIn);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L8,
    (Metadata_T_Common_Types_Pkg *) &DEFAULT_Headers_TM);
  outC->_L4 = kcg_true;
  outC->_L7 = outC->_L5;
  /* _L3= */
  if (outC->_L4) {
    /* _L3= */
    for (idx = 0; idx < 30; idx++) {
      acc = outC->_L7;
      /* _L3=(TM_lib_internal::SEND_FindSlot#1)/ */
      SEND_FindSlot_TM_lib_internal(
        acc,
        &outC->_L1[idx],
        &outC->_L8[idx],
        &outC->Context_SEND_FindSlot_1[idx]);
      outC->_L7 = outC->Context_SEND_FindSlot_1[idx].Acc;
      outC->_L3 = /* _L3= */(kcg_int32) (idx + 1);
      /* _L3= */
      if (!outC->Context_SEND_FindSlot_1[idx].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int32(0);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L9, NewHeader);
  outC->_L36 = outC->_L9.startAddress;
  outC->_L37 = outC->_L9.endAddress;
  outC->_L18 = outC->_L37 - outC->_L36;
  outC->_L34 = kcg_lit_int32(1);
  outC->_L35 = outC->_L7 + outC->_L34;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = outC->_L7 == outC->_L33;
  /* _L31= */
  if (outC->_L32) {
    outC->_L31 = outC->_L33;
  }
  else {
    outC->_L31 = outC->_L35;
  }
  outC->_L22 = outC->_L31 + outC->_L18;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L43, &outC->_L9);
  if (kcg_true) {
    outC->_L43.startAddress = outC->_L31;
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L44, &outC->_L43);
  if (kcg_true) {
    outC->_L44.endAddress = outC->_L22;
  }
  outC->NewEndAddr = outC->_L22;
  outC->NewStartAddr = outC->_L31;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L24, HeadersIn);
  outC->_L16 = kcg_lit_int32(1);
  outC->_L17 = outC->_L3 - outC->_L16;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L23, &outC->_L24);
  if ((kcg_lit_int32(0) <= outC->_L17) & (outC->_L17 < kcg_lit_int32(30))) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L23[outC->_L17],
      &outC->_L44);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->HeadersOut, &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void SEND_WriteBaliseMessageHeader_init_TM_lib_internal(
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L3 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L44.nid_packet = kcg_lit_int32(0);
  outC->_L44.q_dir = Q_DIR_Reverse;
  outC->_L44.valid = kcg_true;
  outC->_L44.startAddress = kcg_lit_int32(0);
  outC->_L44.endAddress = kcg_lit_int32(0);
  outC->_L43.nid_packet = kcg_lit_int32(0);
  outC->_L43.q_dir = Q_DIR_Reverse;
  outC->_L43.valid = kcg_true;
  outC->_L43.startAddress = kcg_lit_int32(0);
  outC->_L43.endAddress = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L36 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L24[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L24[idx1].q_dir = Q_DIR_Reverse;
    outC->_L24[idx1].valid = kcg_true;
    outC->_L24[idx1].startAddress = kcg_lit_int32(0);
    outC->_L24[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L23[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L23[idx2].q_dir = Q_DIR_Reverse;
    outC->_L23[idx2].valid = kcg_true;
    outC->_L23[idx2].startAddress = kcg_lit_int32(0);
    outC->_L23[idx2].endAddress = kcg_lit_int32(0);
  }
  outC->_L22 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L9.nid_packet = kcg_lit_int32(0);
  outC->_L9.q_dir = Q_DIR_Reverse;
  outC->_L9.valid = kcg_true;
  outC->_L9.startAddress = kcg_lit_int32(0);
  outC->_L9.endAddress = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L8[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L8[idx3].q_dir = Q_DIR_Reverse;
    outC->_L8[idx3].valid = kcg_true;
    outC->_L8[idx3].startAddress = kcg_lit_int32(0);
    outC->_L8[idx3].endAddress = kcg_lit_int32(0);
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L1[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1[idx4].valid = kcg_true;
    outC->_L1[idx4].startAddress = kcg_lit_int32(0);
    outC->_L1[idx4].endAddress = kcg_lit_int32(0);
  }
  outC->NewEndAddr = kcg_lit_int32(0);
  outC->NewStartAddr = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->HeadersOut[idx5].nid_packet = kcg_lit_int32(0);
    outC->HeadersOut[idx5].q_dir = Q_DIR_Reverse;
    outC->HeadersOut[idx5].valid = kcg_true;
    outC->HeadersOut[idx5].startAddress = kcg_lit_int32(0);
    outC->HeadersOut[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 30; idx++) {
    /* _L3=(TM_lib_internal::SEND_FindSlot#1)/ */
    SEND_FindSlot_init_TM_lib_internal(&outC->Context_SEND_FindSlot_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SEND_WriteBaliseMessageHeader_reset_TM_lib_internal(
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L3=(TM_lib_internal::SEND_FindSlot#1)/ */
    SEND_FindSlot_reset_TM_lib_internal(&outC->Context_SEND_FindSlot_1[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_WriteBaliseMessageHeader_TM_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

