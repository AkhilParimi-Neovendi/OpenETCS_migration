/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P015_TM_trackside.h"

/* TM_trackside::Write_P015/ */
void Write_P015_TM_trackside(
  /* Packet15/ */
  P015_trackside_int_T_TM *Packet15,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P015_TM_trackside *outC)
{
  kcg_copy_P015_trackside_int_T_TM(&outC->_L1, Packet15);
  /* _L43=(TM_conversions::C_P015_tracksim_compr#1)/ */
  C_P015_tracksim_compr_TM_conversions(
    &outC->_L1,
    &outC->Context_C_P015_tracksim_compr_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_C_P015_tracksim_compr_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_C_P015_tracksim_compr_1.P015_compressed);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  /* _L4=(TM_lib_internal::SEND_WriteBaliseMessageHeader#1)/ */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
    &outC->_L41,
    &outC->_L43,
    &outC->Context_SEND_WriteBaliseMessageHeader_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->Context_SEND_WriteBaliseMessageHeader_1.HeadersOut);
  outC->_L21 = outC->Context_SEND_WriteBaliseMessageHeader_1.NewStartAddr;
  outC->_L22 = outC->Context_SEND_WriteBaliseMessageHeader_1.NewEndAddr;
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
  outC->_L18 = kcg_false;
  outC->Error = outC->_L18;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioPacketsOut,
    &outC->_L39);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_P015_init_TM_trackside(outC_Write_P015_TM_trackside *outC)
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

  outC->_L43.nid_packet = kcg_lit_int32(0);
  outC->_L43.q_dir = Q_DIR_Reverse;
  outC->_L43.valid = kcg_true;
  outC->_L43.startAddress = kcg_lit_int32(0);
  outC->_L43.endAddress = kcg_lit_int32(0);
  for (idx = 0; idx < 500; idx++) {
    outC->_L44[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L41[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L41[idx1].q_dir = Q_DIR_Reverse;
    outC->_L41[idx1].valid = kcg_true;
    outC->_L41[idx1].startAddress = kcg_lit_int32(0);
    outC->_L41[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L42[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L40.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L40.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L40.PacketHeaders[idx3].valid = kcg_true;
    outC->_L40.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L40.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L40.PacketData[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L39.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L39.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L39.PacketHeaders[idx5].valid = kcg_true;
    outC->_L39.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L39.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L39.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L10[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L4[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L4[idx8].q_dir = Q_DIR_Reverse;
    outC->_L4[idx8].valid = kcg_true;
    outC->_L4[idx8].startAddress = kcg_lit_int32(0);
    outC->_L4[idx8].endAddress = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_DIR = kcg_lit_int32(0);
  outC->_L1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_SCALE = kcg_lit_int32(0);
  outC->_L1.V_LOA = kcg_lit_int32(0);
  outC->_L1.T_LOA = kcg_lit_int32(0);
  outC->_L1.N_ITER = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L1.SECTIONS[idx9].L_SECTION = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx9].Q_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx9].T_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx9].D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  }
  outC->_L1.L_ENDSECTION = kcg_lit_int32(0);
  outC->_L1.Q_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L1.T_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L1.D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  outC->_L1.Q_ENDTIMER = kcg_lit_int32(0);
  outC->_L1.T_ENDTIMER = kcg_lit_int32(0);
  outC->_L1.D_ENDTIMERSTARTLOC = kcg_lit_int32(0);
  outC->_L1.Q_DANGERPOINT = kcg_lit_int32(0);
  outC->_L1.D_DP = kcg_lit_int32(0);
  outC->_L1.V_RELEASEDP = kcg_lit_int32(0);
  outC->_L1.Q_OVERLAP = kcg_lit_int32(0);
  outC->_L1.D_STARTOL = kcg_lit_int32(0);
  outC->_L1.T_OL = kcg_lit_int32(0);
  outC->_L1.D_OL = kcg_lit_int32(0);
  outC->_L1.V_RELEASEOL = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->RadioPacketsOut.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->RadioPacketsOut.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->RadioPacketsOut.PacketHeaders[idx10].valid = kcg_true;
    outC->RadioPacketsOut.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->RadioPacketsOut.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->RadioPacketsOut.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->Error = kcg_true;
  /* _L10=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_init_TM_lib_internal(&outC->Context_SEND_MessageData_1);
  /* _L4=(TM_lib_internal::SEND_WriteBaliseMessageHeader#1)/ */
  SEND_WriteBaliseMessageHeader_init_TM_lib_internal(
    &outC->Context_SEND_WriteBaliseMessageHeader_1);
  /* _L43=(TM_conversions::C_P015_tracksim_compr#1)/ */
  C_P015_tracksim_compr_init_TM_conversions(
    &outC->Context_C_P015_tracksim_compr_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void Write_P015_reset_TM_trackside(outC_Write_P015_TM_trackside *outC)
{
  /* _L10=(TM_lib_internal::SEND_MessageData#1)/ */
  SEND_MessageData_reset_TM_lib_internal(&outC->Context_SEND_MessageData_1);
  /* _L4=(TM_lib_internal::SEND_WriteBaliseMessageHeader#1)/ */
  SEND_WriteBaliseMessageHeader_reset_TM_lib_internal(
    &outC->Context_SEND_WriteBaliseMessageHeader_1);
  /* _L43=(TM_conversions::C_P015_tracksim_compr#1)/ */
  C_P015_tracksim_compr_reset_TM_conversions(
    &outC->Context_C_P015_tracksim_compr_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_P015_TM_trackside.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

