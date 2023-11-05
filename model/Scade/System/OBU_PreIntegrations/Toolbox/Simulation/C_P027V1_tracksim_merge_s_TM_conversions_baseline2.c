/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_merge_s_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ */
void C_P027V1_tracksim_merge_s_TM_conversions_baseline2(
  /* i/ */
  kcg_int32 i,
  /* PacketStream_in/ */
  CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* P027V1_sections_from_track/ */
  P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* n_iter/ */
  kcg_int32 n_iter,
  /* meta_first_section_in/ */
  kcg_int32 meta_first_section_in,
  /* q_dir/ */
  Q_DIR q_dir,
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
{
  outC->_L449 = q_dir;
  outC->_L448 = meta_first_section_in;
  outC->_L438 = i;
  outC->_L441 = n_iter;
  outC->_L447 = outC->_L441 > outC->_L438;
  outC->_L446 = i;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L439, PacketStream_in);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L442, &outC->_L439.PacketHeaders);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L443,
    &outC->_L439.PacketData);
  kcg_copy_P027V1_section_int_T_TM_baseline2(
    &outC->_L440,
    P027V1_sections_from_track);
  /* _L431=(TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section#2)/ */
  C_P027V1_tracksim_compr_o_TM_conversions_baseline2(
    outC->_L446,
    &outC->_L440,
    outC->_L448,
    outC->_L449,
    &outC->Context_C_P027V1_tracksim_compr_one_section_2);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L431,
    &outC->Context_C_P027V1_tracksim_compr_one_section_2.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L432,
    &outC->Context_C_P027V1_tracksim_compr_one_section_2.P027V1_sections_compressed);
  /* _L435=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */
  SEND_WriteMessageHeader_TM_lib_internal(
    &outC->_L442,
    &outC->_L431,
    &outC->Context_SEND_WriteMessageHeader_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L435,
    &outC->Context_SEND_WriteMessageHeader_1.HeadersOut);
  outC->_L436 = outC->Context_SEND_WriteMessageHeader_1.NewStartAddr;
  outC->_L437 = outC->Context_SEND_WriteMessageHeader_1.NewEndAddr;
  /* _L433=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_TM_lib_internal(
    outC->_L436,
    outC->_L437,
    &outC->_L443,
    &outC->_L432,
    &outC->Context_SEND_MessageData_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L433,
    &outC->Context_SEND_MessageData_1.DataOut);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L434.PacketHeaders, &outC->_L435);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L434.PacketData,
    &outC->_L433);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_Out, &outC->_L434);
  outC->cont = outC->_L447;
}

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_tracksim_merge_s_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;

  outC->_L449 = Q_DIR_Reverse;
  outC->_L448 = kcg_lit_int32(0);
  outC->_L447 = kcg_true;
  outC->_L446 = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L442[idx].nid_packet = kcg_lit_int32(0);
    outC->_L442[idx].q_dir = Q_DIR_Reverse;
    outC->_L442[idx].valid = kcg_true;
    outC->_L442[idx].startAddress = kcg_lit_int32(0);
    outC->_L442[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L443[idx1] = kcg_lit_int32(0);
  }
  outC->_L441 = kcg_lit_int32(0);
  outC->_L440.D_STATIC = kcg_lit_int32(0);
  outC->_L440.V_STATIC = kcg_lit_int32(0);
  outC->_L440.Q_FRONT = kcg_lit_int32(0);
  outC->_L440.N_ITER = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L440.SECTIONS_q_diff[idx2].NC_DIFF = kcg_lit_int32(0);
    outC->_L440.SECTIONS_q_diff[idx2].V_DIFF = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L439.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L439.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L439.PacketHeaders[idx3].valid = kcg_true;
    outC->_L439.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L439.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L439.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L438 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L433[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L434.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L434.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L434.PacketHeaders[idx6].valid = kcg_true;
    outC->_L434.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L434.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L434.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L437 = kcg_lit_int32(0);
  outC->_L436 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L435[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L435[idx8].q_dir = Q_DIR_Reverse;
    outC->_L435[idx8].valid = kcg_true;
    outC->_L435[idx8].startAddress = kcg_lit_int32(0);
    outC->_L435[idx8].endAddress = kcg_lit_int32(0);
  }
  outC->_L431.nid_packet = kcg_lit_int32(0);
  outC->_L431.q_dir = Q_DIR_Reverse;
  outC->_L431.valid = kcg_true;
  outC->_L431.startAddress = kcg_lit_int32(0);
  outC->_L431.endAddress = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L432[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->Packets_Out.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->Packets_Out.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->Packets_Out.PacketHeaders[idx10].valid = kcg_true;
    outC->Packets_Out.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->Packets_Out.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->Packets_Out.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->cont = kcg_true;
  /* _L433=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_init_TM_lib_internal(&outC->Context_SEND_MessageData_1);
  /* _L435=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */
  SEND_WriteMessageHeader_init_TM_lib_internal(
    &outC->Context_SEND_WriteMessageHeader_1);
  /* _L431=(TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section#2)/ */
  C_P027V1_tracksim_compr_o_init_TM_conversions_baseline2(
    &outC->Context_C_P027V1_tracksim_compr_one_section_2);
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P027V1_tracksim_merge_s_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
{
  /* _L433=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_reset_TM_lib_internal(&outC->Context_SEND_MessageData_1);
  /* _L435=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */
  SEND_WriteMessageHeader_reset_TM_lib_internal(
    &outC->Context_SEND_WriteMessageHeader_1);
  /* _L431=(TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section#2)/ */
  C_P027V1_tracksim_compr_o_reset_TM_conversions_baseline2(
    &outC->Context_C_P027V1_tracksim_compr_one_section_2);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_tracksim_merge_s_TM_conversions_baseline2.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

