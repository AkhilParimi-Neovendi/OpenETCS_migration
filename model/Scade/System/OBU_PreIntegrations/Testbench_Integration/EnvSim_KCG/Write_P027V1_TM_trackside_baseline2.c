/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P027V1_TM_trackside_baseline2.h"

/* TM_trackside_baseline2::Write_P027V1/ */
void Write_P027V1_TM_trackside_baseline2(
  /* Packet27V1/ */
  P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static CompressedPackets_T_Common_Types_Pkg acc;
  static kcg_size idx3;
  static kcg_int64 noname;

  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&outC->_L1, Packet27V1);
  /* _L43=(TM_conversions_baseline2::C_P027V1_tracksim_compr_body#1)/ */
  C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
    &outC->_L1,
    &outC->Context_C_P027V1_tracksim_compr_body_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_C_P027V1_tracksim_compr_body_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_C_P027V1_tracksim_compr_body_1.P027V1_body_compressed);
  kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2(
    &outC->_L45,
    &outC->Context_C_P027V1_tracksim_compr_body_1.P027V1_sections);
  outC->_L46 = outC->Context_C_P027V1_tracksim_compr_body_1.n_iter_k_out;
  outC->_L56 = outC->Context_C_P027V1_tracksim_compr_body_1.meta_first_section;
  outC->_L59 = outC->Context_C_P027V1_tracksim_compr_body_1.q_dir;
  /* _L60/ */
  for (idx = 0; idx < 33; idx++) {
    outC->_L60[idx] = outC->_L59;
  }
  /* _L55/ */
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L55[idx1] = outC->_L56;
  }
  /* _L54/ */
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L54[idx2] = outC->_L46;
  }
  outC->_L52 = kcg_true;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  /* _L4=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */
  SEND_WriteMessageHeader_TM_lib_internal(
    &outC->_L41,
    &outC->_L43,
    &outC->Context_SEND_WriteMessageHeader_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->Context_SEND_WriteMessageHeader_1.HeadersOut);
  outC->_L21 = outC->Context_SEND_WriteMessageHeader_1.NewStartAddr;
  outC->_L22 = outC->Context_SEND_WriteMessageHeader_1.NewEndAddr;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  /* _L10=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_TM_lib_internal(
    outC->_L21,
    outC->_L22,
    &outC->_L42,
    &outC->_L44,
    &outC->Context_SEND_MessageData_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->Context_SEND_MessageData_1.DataOut);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L39.PacketHeaders, &outC->_L4);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L39.PacketData,
    &outC->_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L51, &outC->_L39);
  /* _L50= */
  if (outC->_L52) {
    /* _L50= */
    for (idx3 = 0; idx3 < 33; idx3++) {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&acc, &outC->_L51);
      /* _L50=(TM_conversions_baseline2::C_P027V1_tracksim_merge_sections#1)/ */
      C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
        /* _L50= */(kcg_int64) idx3,
        &acc,
        &outC->_L45[idx3],
        outC->_L54[idx3],
        outC->_L55[idx3],
        outC->_L60[idx3],
        &outC->Context_C_P027V1_tracksim_merge_sections_1[idx3]);
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &outC->_L51,
        &outC->Context_C_P027V1_tracksim_merge_sections_1[idx3].Packets_Out);
      outC->_L50 = /* _L50= */(kcg_int64) (idx3 + 1);
      /* _L50= */
      if (!outC->Context_C_P027V1_tracksim_merge_sections_1[idx3].cont) {
        break;
      }
    }
  }
  else {
    outC->_L50 = kcg_lit_int64(0);
  }
  noname = outC->_L50;
  outC->_L18 = kcg_false;
  outC->Error = outC->_L18;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->PacketsOut, &outC->_L51);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_P027V1_init_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;

  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L60[idx1] = Q_DIR_Reverse;
  }
  outC->_L59 = Q_DIR_Reverse;
  outC->_L56 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L55[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L54[idx3] = kcg_lit_int64(0);
  }
  outC->_L52 = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L51.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L51.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L51.PacketHeaders[idx4].valid = kcg_true;
    outC->_L51.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L51.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L51.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L50 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L45[idx7].D_STATIC = kcg_lit_int64(0);
    outC->_L45[idx7].V_STATIC = kcg_lit_int64(0);
    outC->_L45[idx7].Q_FRONT = kcg_lit_int64(0);
    outC->_L45[idx7].N_ITER = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 32; idx6++) {
      outC->_L45[idx7].SECTIONS_q_diff[idx6].NC_DIFF = kcg_lit_int64(0);
      outC->_L45[idx7].SECTIONS_q_diff[idx6].V_DIFF = kcg_lit_int64(0);
    }
  }
  outC->_L43.nid_packet = kcg_lit_int64(0);
  outC->_L43.q_dir = Q_DIR_Reverse;
  outC->_L43.valid = kcg_true;
  outC->_L43.startAddress = kcg_lit_int64(0);
  outC->_L43.endAddress = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L44[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L41[idx9].nid_packet = kcg_lit_int64(0);
    outC->_L41[idx9].q_dir = Q_DIR_Reverse;
    outC->_L41[idx9].valid = kcg_true;
    outC->_L41[idx9].startAddress = kcg_lit_int64(0);
    outC->_L41[idx9].endAddress = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L42[idx10] = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L40.PacketHeaders[idx11].nid_packet = kcg_lit_int64(0);
    outC->_L40.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->_L40.PacketHeaders[idx11].valid = kcg_true;
    outC->_L40.PacketHeaders[idx11].startAddress = kcg_lit_int64(0);
    outC->_L40.PacketHeaders[idx11].endAddress = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L40.PacketData[idx12] = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L39.PacketHeaders[idx13].nid_packet = kcg_lit_int64(0);
    outC->_L39.PacketHeaders[idx13].q_dir = Q_DIR_Reverse;
    outC->_L39.PacketHeaders[idx13].valid = kcg_true;
    outC->_L39.PacketHeaders[idx13].startAddress = kcg_lit_int64(0);
    outC->_L39.PacketHeaders[idx13].endAddress = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L39.PacketData[idx14] = kcg_lit_int64(0);
  }
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L10[idx15] = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L4[idx16].nid_packet = kcg_lit_int64(0);
    outC->_L4[idx16].q_dir = Q_DIR_Reverse;
    outC->_L4[idx16].valid = kcg_true;
    outC->_L4[idx16].startAddress = kcg_lit_int64(0);
    outC->_L4[idx16].endAddress = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.Q_DIR = kcg_lit_int64(0);
  outC->_L1.L_PACKET = kcg_lit_int64(0);
  outC->_L1.Q_SCALE = kcg_lit_int64(0);
  outC->_L1.D_STATIC = kcg_lit_int64(0);
  outC->_L1.V_STATIC = kcg_lit_int64(0);
  outC->_L1.Q_FRONT = kcg_lit_int64(0);
  outC->_L1.N_ITER_n = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 32; idx17++) {
    outC->_L1.SECTIONS_q_diff[idx17].NC_DIFF = kcg_lit_int64(0);
    outC->_L1.SECTIONS_q_diff[idx17].V_DIFF = kcg_lit_int64(0);
  }
  outC->_L1.N_ITER_k = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 32; idx19++) {
    outC->_L1.SECTIONS_SSP[idx19].D_STATIC = kcg_lit_int64(0);
    outC->_L1.SECTIONS_SSP[idx19].V_STATIC = kcg_lit_int64(0);
    outC->_L1.SECTIONS_SSP[idx19].Q_FRONT = kcg_lit_int64(0);
    outC->_L1.SECTIONS_SSP[idx19].N_ITER = kcg_lit_int64(0);
    for (idx18 = 0; idx18 < 32; idx18++) {
      outC->_L1.SECTIONS_SSP[idx19].SECTIONS_q_diff[idx18].NC_DIFF = kcg_lit_int64(0);
      outC->_L1.SECTIONS_SSP[idx19].SECTIONS_q_diff[idx18].V_DIFF = kcg_lit_int64(0);
    }
  }
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->PacketsOut.PacketHeaders[idx20].nid_packet = kcg_lit_int64(0);
    outC->PacketsOut.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->PacketsOut.PacketHeaders[idx20].valid = kcg_true;
    outC->PacketsOut.PacketHeaders[idx20].startAddress = kcg_lit_int64(0);
    outC->PacketsOut.PacketHeaders[idx20].endAddress = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->PacketsOut.PacketData[idx21] = kcg_lit_int64(0);
  }
  outC->Error = kcg_true;
  for (idx = 0; idx < 33; idx++) {
    /* _L50=(TM_conversions_baseline2::C_P027V1_tracksim_merge_sections#1)/ */
    C_P027V1_tracksim_merge_sections_init_TM_conversions_baseline2(
      &outC->Context_C_P027V1_tracksim_merge_sections_1[idx]);
  }
  /* _L10=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_init_TM_lib_internal(&outC->Context_SEND_MessageData_1);
  /* _L4=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */
  SEND_WriteMessageHeader_init_TM_lib_internal(
    &outC->Context_SEND_WriteMessageHeader_1);
  /* _L43=(TM_conversions_baseline2::C_P027V1_tracksim_compr_body#1)/ */
  C_P027V1_tracksim_compr_body_init_TM_conversions_baseline2(
    &outC->Context_C_P027V1_tracksim_compr_body_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void Write_P027V1_reset_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 33; idx++) {
    /* _L50=(TM_conversions_baseline2::C_P027V1_tracksim_merge_sections#1)/ */
    C_P027V1_tracksim_merge_sections_reset_TM_conversions_baseline2(
      &outC->Context_C_P027V1_tracksim_merge_sections_1[idx]);
  }
  /* _L10=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_reset_TM_lib_internal(&outC->Context_SEND_MessageData_1);
  /* _L4=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */
  SEND_WriteMessageHeader_reset_TM_lib_internal(
    &outC->Context_SEND_WriteMessageHeader_1);
  /* _L43=(TM_conversions_baseline2::C_P027V1_tracksim_compr_body#1)/ */
  C_P027V1_tracksim_compr_body_reset_TM_conversions_baseline2(
    &outC->Context_C_P027V1_tracksim_compr_body_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_P027V1_TM_trackside_baseline2.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

