/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export/ */
void C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
  /* P027_in/ */
  P027V1_OBU_T_TM_baseline2 *P027_in,
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC)
{
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L1, P027_in);
  outC->_L4 = outC->_L1.valid;
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L2,
    (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
      &DEFAULT_P027V1_legacy_TM_baseline2);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L3,
    &outC->_L2);
  if (kcg_true) {
    outC->_L3.valid = outC->_L4;
  }
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->P027_legacy_out,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_legacy_for_ML_export_init_TM_conversions_baseline2(
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC)
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

  outC->_L4 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.d_static = kcg_lit_int32(0);
  outC->_L3.v_static = kcg_lit_int32(0);
  outC->_L3.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx = 0; idx < 7; idx++) {
    outC->_L3.diffArray[idx].valid = kcg_true;
    outC->_L3.diffArray[idx].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L3.diffArray[idx].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L3.diffArray[idx].nc_diff = kcg_lit_int32(0);
    outC->_L3.diffArray[idx].v_diff = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L3.SSPArray[idx2].valid = kcg_true;
    outC->_L3.SSPArray[idx2].d_static = kcg_lit_int32(0);
    outC->_L3.SSPArray[idx2].v_static = kcg_lit_int32(0);
    outC->_L3.SSPArray[idx2].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx1 = 0; idx1 < 7; idx1++) {
      outC->_L3.SSPArray[idx2].diffArray[idx1].valid = kcg_true;
      outC->_L3.SSPArray[idx2].diffArray[idx1].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L3.SSPArray[idx2].diffArray[idx1].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L3.SSPArray[idx2].diffArray[idx1].nc_diff = kcg_lit_int32(0);
      outC->_L3.SSPArray[idx2].diffArray[idx1].v_diff = kcg_lit_int32(0);
    }
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_static = kcg_lit_int32(0);
  outC->_L2.v_static = kcg_lit_int32(0);
  outC->_L2.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L2.diffArray[idx3].valid = kcg_true;
    outC->_L2.diffArray[idx3].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L2.diffArray[idx3].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L2.diffArray[idx3].nc_diff = kcg_lit_int32(0);
    outC->_L2.diffArray[idx3].v_diff = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L2.SSPArray[idx5].valid = kcg_true;
    outC->_L2.SSPArray[idx5].d_static = kcg_lit_int32(0);
    outC->_L2.SSPArray[idx5].v_static = kcg_lit_int32(0);
    outC->_L2.SSPArray[idx5].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx4 = 0; idx4 < 7; idx4++) {
      outC->_L2.SSPArray[idx5].diffArray[idx4].valid = kcg_true;
      outC->_L2.SSPArray[idx5].diffArray[idx4].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L2.SSPArray[idx5].diffArray[idx4].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L2.SSPArray[idx5].diffArray[idx4].nc_diff = kcg_lit_int32(0);
      outC->_L2.SSPArray[idx5].diffArray[idx4].v_diff = kcg_lit_int32(0);
    }
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L1.sections[idx7].valid = kcg_true;
    outC->_L1.sections[idx7].d_static = kcg_lit_int32(0);
    outC->_L1.sections[idx7].v_static = kcg_lit_int32(0);
    outC->_L1.sections[idx7].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L1.sections[idx7].n_iter = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 32; idx6++) {
      outC->_L1.sections[idx7].SECTIONS_q_diff[idx6].valid = kcg_true;
      outC->_L1.sections[idx7].SECTIONS_q_diff[idx6].nc_diff = kcg_lit_int32(0);
      outC->_L1.sections[idx7].SECTIONS_q_diff[idx6].v_diff = kcg_lit_int32(0);
    }
  }
  outC->P027_legacy_out.valid = kcg_true;
  outC->P027_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P027_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P027_legacy_out.d_static = kcg_lit_int32(0);
  outC->P027_legacy_out.v_static = kcg_lit_int32(0);
  outC->P027_legacy_out.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->P027_legacy_out.diffArray[idx8].valid = kcg_true;
    outC->P027_legacy_out.diffArray[idx8].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->P027_legacy_out.diffArray[idx8].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->P027_legacy_out.diffArray[idx8].nc_diff = kcg_lit_int32(0);
    outC->P027_legacy_out.diffArray[idx8].v_diff = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->P027_legacy_out.SSPArray[idx10].valid = kcg_true;
    outC->P027_legacy_out.SSPArray[idx10].d_static = kcg_lit_int32(0);
    outC->P027_legacy_out.SSPArray[idx10].v_static = kcg_lit_int32(0);
    outC->P027_legacy_out.SSPArray[idx10].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx9 = 0; idx9 < 7; idx9++) {
      outC->P027_legacy_out.SSPArray[idx10].diffArray[idx9].valid = kcg_true;
      outC->P027_legacy_out.SSPArray[idx10].diffArray[idx9].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->P027_legacy_out.SSPArray[idx10].diffArray[idx9].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->P027_legacy_out.SSPArray[idx10].diffArray[idx9].nc_diff =
        kcg_lit_int32(0);
      outC->P027_legacy_out.SSPArray[idx10].diffArray[idx9].v_diff = kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_legacy_for_ML_export_reset_TM_conversions_baseline2(
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

