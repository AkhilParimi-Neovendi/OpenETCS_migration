/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Preprocessing_TA_SSP_new.h"

/* TA_SSP_new::SSP_Preprocessing/ */
void SSP_Preprocessing_TA_SSP_new(
  /* p27v1/ */
  P027V1_OBU_T_TM_baseline2 *p27v1,
  /* reset/ */
  kcg_bool reset,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_SSP_Preprocessing_TA_SSP_new *outC)
{
  static kcg_bool noname;

  outC->_L21 = reset;
  noname = outC->_L21;
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L1, p27v1);
  /* _L14=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile#1)/ */
  SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new(
    &outC->_L1,
    &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L14,
    &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_1.SpeedProfile);
  outC->_L11 = pos_LRBG;
  /* _L13=(TA_Lib_internal::MoveSSPSectionsAbsolute_new#1)/ */
  MoveSSPSectionsAbsolute_new_TA_Lib_internal(
    &outC->_L14,
    outC->_L11,
    &outC->Context_MoveSSPSectionsAbsolute_new_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L13,
    &outC->Context_MoveSSPSectionsAbsolute_new_1.ProfileOut);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Preprocessing_init_TA_SSP_new(outC_SSP_Preprocessing_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L21 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L13[idx].valid = kcg_true;
    outC->_L13[idx].d_static_abs = kcg_lit_int32(0);
    outC->_L13[idx].d_static_LRBG = kcg_lit_int32(0);
    outC->_L13[idx].q_train_length_corr = kcg_true;
    outC->_L13[idx].v_static = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L14[idx1].valid = kcg_true;
    outC->_L14[idx1].d_static_abs = kcg_lit_int32(0);
    outC->_L14[idx1].d_static_LRBG = kcg_lit_int32(0);
    outC->_L14[idx1].q_train_length_corr = kcg_true;
    outC->_L14[idx1].v_static = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L1.sections[idx3].valid = kcg_true;
    outC->_L1.sections[idx3].d_static = kcg_lit_int32(0);
    outC->_L1.sections[idx3].v_static = kcg_lit_int32(0);
    outC->_L1.sections[idx3].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L1.sections[idx3].n_iter = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 32; idx2++) {
      outC->_L1.sections[idx3].SECTIONS_q_diff[idx2].valid = kcg_true;
      outC->_L1.sections[idx3].SECTIONS_q_diff[idx2].nc_diff = kcg_lit_int32(0);
      outC->_L1.sections[idx3].SECTIONS_q_diff[idx2].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->SSP[idx4].valid = kcg_true;
    outC->SSP[idx4].d_static_abs = kcg_lit_int32(0);
    outC->SSP[idx4].d_static_LRBG = kcg_lit_int32(0);
    outC->SSP[idx4].q_train_length_corr = kcg_true;
    outC->SSP[idx4].v_static = kcg_lit_int32(0);
  }
  /* _L13=(TA_Lib_internal::MoveSSPSectionsAbsolute_new#1)/ */
  MoveSSPSectionsAbsolute_new_init_TA_Lib_internal(
    &outC->Context_MoveSSPSectionsAbsolute_new_1);
  /* _L14=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile#1)/ */
  SSP_Convert_P27V1_to_DistanceProfile_init_TA_SSP_new(
    &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Preprocessing_reset_TA_SSP_new(outC_SSP_Preprocessing_TA_SSP_new *outC)
{
  /* _L13=(TA_Lib_internal::MoveSSPSectionsAbsolute_new#1)/ */
  MoveSSPSectionsAbsolute_new_reset_TA_Lib_internal(
    &outC->Context_MoveSSPSectionsAbsolute_new_1);
  /* _L14=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile#1)/ */
  SSP_Convert_P27V1_to_DistanceProfile_reset_TA_SSP_new(
    &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Preprocessing_TA_SSP_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

