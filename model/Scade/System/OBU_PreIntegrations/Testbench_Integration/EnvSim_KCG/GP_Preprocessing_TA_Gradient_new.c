/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Preprocessing_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Preprocessing/ */
void GP_Preprocessing_TA_Gradient_new(
  /* p21/ */
  P021_OBU_T_TM *p21,
  /* reset/ */
  kcg_bool reset,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_GP_Preprocessing_TA_Gradient_new *outC)
{
  static kcg_bool noname;

  outC->_L21 = reset;
  noname = outC->_L21;
  kcg_copy_P021_OBU_T_TM(&outC->_L1, p21);
  /* _L14=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile#1)/ */
  GP_Convert_P21_to_DistanceProfile_TA_Gradient_new(
    &outC->_L1,
    &outC->Context_GP_Convert_P21_to_DistanceProfile_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L14,
    &outC->Context_GP_Convert_P21_to_DistanceProfile_1.GradientProfile);
  outC->_L11 = pos_LRBG;
  /* _L13=(TA_Lib_internal::MoveGPSectionsAbsolute_new#1)/ */
  MoveGPSectionsAbsolute_new_TA_Lib_internal(
    &outC->_L14,
    outC->_L11,
    &outC->Context_MoveGPSectionsAbsolute_new_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L13,
    &outC->Context_MoveGPSectionsAbsolute_new_1.ProfileOut);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Preprocessing_init_TA_Gradient_new(
  outC_GP_Preprocessing_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L21 = kcg_true;
  outC->_L11 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L13[idx].valid = kcg_true;
    outC->_L13[idx].Loc_Absolute = kcg_lit_int64(0);
    outC->_L13[idx].Loc_LRBG = kcg_lit_int64(0);
    outC->_L13[idx].Gradient = kcg_lit_int64(0);
    outC->_L13[idx].L_Gradient = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L14[idx1].valid = kcg_true;
    outC->_L14[idx1].Loc_Absolute = kcg_lit_int64(0);
    outC->_L14[idx1].Loc_LRBG = kcg_lit_int64(0);
    outC->_L14[idx1].Gradient = kcg_lit_int64(0);
    outC->_L14[idx1].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.n_iter = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L1.sections[idx2].valid = kcg_true;
    outC->_L1.sections[idx2].d_gradient = kcg_lit_int64(0);
    outC->_L1.sections[idx2].q_gdir = Q_GDIR_downhill;
    outC->_L1.sections[idx2].g_a = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->GP[idx3].valid = kcg_true;
    outC->GP[idx3].Loc_Absolute = kcg_lit_int64(0);
    outC->GP[idx3].Loc_LRBG = kcg_lit_int64(0);
    outC->GP[idx3].Gradient = kcg_lit_int64(0);
    outC->GP[idx3].L_Gradient = kcg_lit_int64(0);
  }
  /* _L13=(TA_Lib_internal::MoveGPSectionsAbsolute_new#1)/ */
  MoveGPSectionsAbsolute_new_init_TA_Lib_internal(
    &outC->Context_MoveGPSectionsAbsolute_new_1);
  /* _L14=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile#1)/ */
  GP_Convert_P21_to_DistanceProfile_init_TA_Gradient_new(
    &outC->Context_GP_Convert_P21_to_DistanceProfile_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Preprocessing_reset_TA_Gradient_new(
  outC_GP_Preprocessing_TA_Gradient_new *outC)
{
  /* _L13=(TA_Lib_internal::MoveGPSectionsAbsolute_new#1)/ */
  MoveGPSectionsAbsolute_new_reset_TA_Lib_internal(
    &outC->Context_MoveGPSectionsAbsolute_new_1);
  /* _L14=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile#1)/ */
  GP_Convert_P21_to_DistanceProfile_reset_TA_Gradient_new(
    &outC->Context_GP_Convert_P21_to_DistanceProfile_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Preprocessing_TA_Gradient_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

