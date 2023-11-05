/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"

/* TM_specific::Read_P027V1_Legacy_for_ML/ */
void Read_P027V1_Legacy_for_ML_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC)
{
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg op_call;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* _L1=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_TM_baseline2(&outC->_L3, &outC->Context_Read_P027V1_1);
  outC->_L1 = outC->Context_Read_P027V1_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &outC->_L2,
    &outC->Context_Read_P027V1_1.P027V1_out);
  outC->every = outC->_L1;
  if (outC->every) {
    /* _L4=(TM_conversions_baseline2::C_P027V1_legacy_for_ML_export#1)/ */
    C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
      &outC->_L2,
      &outC->Context_C_P027V1_legacy_for_ML_export_1);
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &op_call,
      &outC->Context_C_P027V1_legacy_for_ML_export_1.P027_legacy_out);
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &outC->_L4,
      &op_call);
  }
  else {
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &outC->_L4,
      (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
        &DEFAULT_P027V1_legacy_TM_baseline2);
  }
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->P027_legacy_out,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P027V1_Legacy_for_ML_init_TM_specific(
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC)
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

  outC->_L4.valid = kcg_true;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.d_static = kcg_lit_int32(0);
  outC->_L4.v_static = kcg_lit_int32(0);
  outC->_L4.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx = 0; idx < 7; idx++) {
    outC->_L4.diffArray[idx].valid = kcg_true;
    outC->_L4.diffArray[idx].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L4.diffArray[idx].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L4.diffArray[idx].nc_diff = kcg_lit_int32(0);
    outC->_L4.diffArray[idx].v_diff = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L4.SSPArray[idx2].valid = kcg_true;
    outC->_L4.SSPArray[idx2].d_static = kcg_lit_int32(0);
    outC->_L4.SSPArray[idx2].v_static = kcg_lit_int32(0);
    outC->_L4.SSPArray[idx2].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx1 = 0; idx1 < 7; idx1++) {
      outC->_L4.SSPArray[idx2].diffArray[idx1].valid = kcg_true;
      outC->_L4.SSPArray[idx2].diffArray[idx1].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L4.SSPArray[idx2].diffArray[idx1].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L4.SSPArray[idx2].diffArray[idx1].nc_diff = kcg_lit_int32(0);
      outC->_L4.SSPArray[idx2].diffArray[idx1].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L3.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx3].valid = kcg_true;
    outC->_L3.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L3.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L2.sections[idx6].valid = kcg_true;
    outC->_L2.sections[idx6].d_static = kcg_lit_int32(0);
    outC->_L2.sections[idx6].v_static = kcg_lit_int32(0);
    outC->_L2.sections[idx6].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L2.sections[idx6].n_iter = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 32; idx5++) {
      outC->_L2.sections[idx6].SECTIONS_q_diff[idx5].valid = kcg_true;
      outC->_L2.sections[idx6].SECTIONS_q_diff[idx5].nc_diff = kcg_lit_int32(0);
      outC->_L2.sections[idx6].SECTIONS_q_diff[idx5].v_diff = kcg_lit_int32(0);
    }
  }
  outC->every = kcg_true;
  outC->P027_legacy_out.valid = kcg_true;
  outC->P027_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P027_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P027_legacy_out.d_static = kcg_lit_int32(0);
  outC->P027_legacy_out.v_static = kcg_lit_int32(0);
  outC->P027_legacy_out.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->P027_legacy_out.diffArray[idx7].valid = kcg_true;
    outC->P027_legacy_out.diffArray[idx7].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->P027_legacy_out.diffArray[idx7].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->P027_legacy_out.diffArray[idx7].nc_diff = kcg_lit_int32(0);
    outC->P027_legacy_out.diffArray[idx7].v_diff = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->P027_legacy_out.SSPArray[idx9].valid = kcg_true;
    outC->P027_legacy_out.SSPArray[idx9].d_static = kcg_lit_int32(0);
    outC->P027_legacy_out.SSPArray[idx9].v_static = kcg_lit_int32(0);
    outC->P027_legacy_out.SSPArray[idx9].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx8 = 0; idx8 < 7; idx8++) {
      outC->P027_legacy_out.SSPArray[idx9].diffArray[idx8].valid = kcg_true;
      outC->P027_legacy_out.SSPArray[idx9].diffArray[idx8].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->P027_legacy_out.SSPArray[idx9].diffArray[idx8].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->P027_legacy_out.SSPArray[idx9].diffArray[idx8].nc_diff = kcg_lit_int32(0);
      outC->P027_legacy_out.SSPArray[idx9].diffArray[idx8].v_diff = kcg_lit_int32(0);
    }
  }
  /* _L4=(TM_conversions_baseline2::C_P027V1_legacy_for_ML_export#1)/ */
  C_P027V1_legacy_for_ML_export_init_TM_conversions_baseline2(
    &outC->Context_C_P027V1_legacy_for_ML_export_1);
  /* _L1=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_init_TM_baseline2(&outC->Context_Read_P027V1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P027V1_Legacy_for_ML_reset_TM_specific(
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC)
{
  /* _L4=(TM_conversions_baseline2::C_P027V1_legacy_for_ML_export#1)/ */
  C_P027V1_legacy_for_ML_export_reset_TM_conversions_baseline2(
    &outC->Context_C_P027V1_legacy_for_ML_export_1);
  /* _L1=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_reset_TM_baseline2(&outC->Context_Read_P027V1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P027V1_Legacy_for_ML_TM_specific.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

