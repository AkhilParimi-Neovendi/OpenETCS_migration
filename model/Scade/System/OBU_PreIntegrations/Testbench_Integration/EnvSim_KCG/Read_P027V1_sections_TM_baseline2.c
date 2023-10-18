/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_sections_TM_baseline2.h"

/* TM_baseline2::Read_P027V1_sections/ */
void Read_P027V1_sections_TM_baseline2(
  /* i/ */
  kcg_int64 i,
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* n_iter_outer/ */
  kcg_int64 n_iter_outer,
  /* meta_sections/ */
  kcg_int64 meta_sections,
  outC_Read_P027V1_sections_TM_baseline2 *outC)
{
  static kcg_bool noname;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L175, Message_IN);
  outC->_L171 = meta_sections;
  outC->_L179 = i;
  /* _L176=(TM_lib_internal::T_Decode_Metadata_L2#1)/ */
  T_Decode_Metadata_L2_TM_lib_internal(
    outC->_L171,
    outC->_L179,
    &outC->Context_T_Decode_Metadata_L2_1);
  outC->_L176 = outC->Context_T_Decode_Metadata_L2_1.nid_packet;
  /* _L172=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L175,
    outC->_L176,
    kcg_true,
    kcg_true,
    &outC->Context_RECV_ReadPackets_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L172,
    &outC->Context_RECV_ReadPackets_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L173,
    &outC->Context_RECV_ReadPackets_1.Metadata);
  outC->_L181 = outC->Context_RECV_ReadPackets_1.received;
  noname = outC->_L181;
  outC->_L174 = n_iter_outer;
  outC->_L180 = outC->_L179 < outC->_L174;
  outC->cont = outC->_L180;
  /* _L177=(TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2#1)/ */
  C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
    &outC->_L172,
    &outC->_L173,
    &outC->Context_C_P027V1_compr_onboard_sections_level2_1);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->_L177,
    &outC->Context_C_P027V1_compr_onboard_sections_level2_1.P027V1_section_onbard);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->P027V1_OBU_section_out,
    &outC->_L177);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P027V1_sections_init_TM_baseline2(
  outC_Read_P027V1_sections_TM_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L181 = kcg_true;
  outC->_L180 = kcg_true;
  outC->_L179 = kcg_lit_int64(0);
  outC->_L171 = kcg_lit_int64(0);
  outC->_L173.nid_packet = kcg_lit_int64(0);
  outC->_L173.q_dir = Q_DIR_Reverse;
  outC->_L173.valid = kcg_true;
  outC->_L173.startAddress = kcg_lit_int64(0);
  outC->_L173.endAddress = kcg_lit_int64(0);
  for (idx = 0; idx < 500; idx++) {
    outC->_L172[idx] = kcg_lit_int64(0);
  }
  outC->_L174 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L175.PacketHeaders[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L175.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L175.PacketHeaders[idx1].valid = kcg_true;
    outC->_L175.PacketHeaders[idx1].startAddress = kcg_lit_int64(0);
    outC->_L175.PacketHeaders[idx1].endAddress = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L175.PacketData[idx2] = kcg_lit_int64(0);
  }
  outC->_L176 = kcg_lit_int64(0);
  outC->_L177.valid = kcg_true;
  outC->_L177.d_static = kcg_lit_int64(0);
  outC->_L177.v_static = kcg_lit_int64(0);
  outC->_L177.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L177.n_iter = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L177.SECTIONS_q_diff[idx3].valid = kcg_true;
    outC->_L177.SECTIONS_q_diff[idx3].nc_diff = kcg_lit_int64(0);
    outC->_L177.SECTIONS_q_diff[idx3].v_diff = kcg_lit_int64(0);
  }
  outC->P027V1_OBU_section_out.valid = kcg_true;
  outC->P027V1_OBU_section_out.d_static = kcg_lit_int64(0);
  outC->P027V1_OBU_section_out.v_static = kcg_lit_int64(0);
  outC->P027V1_OBU_section_out.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->P027V1_OBU_section_out.n_iter = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->P027V1_OBU_section_out.SECTIONS_q_diff[idx4].valid = kcg_true;
    outC->P027V1_OBU_section_out.SECTIONS_q_diff[idx4].nc_diff = kcg_lit_int64(0);
    outC->P027V1_OBU_section_out.SECTIONS_q_diff[idx4].v_diff = kcg_lit_int64(0);
  }
  outC->cont = kcg_true;
  /* _L177=(TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2#1)/ */
  C_P027V1_compr_onboard_sections_level2_init_TM_conversions_baseline2(
    &outC->Context_C_P027V1_compr_onboard_sections_level2_1);
  /* _L172=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_init_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
  /* _L176=(TM_lib_internal::T_Decode_Metadata_L2#1)/ */
  T_Decode_Metadata_L2_init_TM_lib_internal(
    &outC->Context_T_Decode_Metadata_L2_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P027V1_sections_reset_TM_baseline2(
  outC_Read_P027V1_sections_TM_baseline2 *outC)
{
  /* _L177=(TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2#1)/ */
  C_P027V1_compr_onboard_sections_level2_reset_TM_conversions_baseline2(
    &outC->Context_C_P027V1_compr_onboard_sections_level2_1);
  /* _L172=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
  /* _L176=(TM_lib_internal::T_Decode_Metadata_L2#1)/ */
  T_Decode_Metadata_L2_reset_TM_lib_internal(
    &outC->Context_T_Decode_Metadata_L2_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P027V1_sections_TM_baseline2.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

