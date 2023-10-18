/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Convert_P21_to_DistanceProfile/ */
void GP_Convert_P21_to_DistanceProfile_TA_Gradient_new(
  /* Packet21_in/ */
  P021_OBU_T_TM *Packet21_in,
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_size idx2;

  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L83,
    (GradientProfile_t_TrackAtlasTypes *) &DEFAULT_GradientProfile_TrackAtlasTypes);
  kcg_copy_P021_OBU_T_TM(&outC->_L73, Packet21_in);
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L71, &outC->_L73.sections);
  /* _L74/ */
  for (idx = 0; idx < 50; idx++) {
    kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L74[idx], &outC->_L71);
  }
  kcg_copy_P021_OBU_T_TM(&outC->_L63, Packet21_in);
  outC->_L65 = outC->_L63.q_scale;
  /* _L76/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L76[idx1] = outC->_L65;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L77, &outC->_L83);
  /* _L77= */
  for (idx2 = 0; idx2 < 50; idx2++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &outC->_L77);
    /* _L77=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile_loop#1)/ */
    GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new(
      /* _L77= */(kcg_int64) idx2,
      &acc,
      &outC->_L74[idx2],
      outC->_L76[idx2],
      &outC->Context_GP_Convert_P21_to_DistanceProfile_loop_1[idx2]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L77,
      &outC->Context_GP_Convert_P21_to_DistanceProfile_loop_1[idx2].GradientProfile);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GradientProfile, &outC->_L77);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Convert_P21_to_DistanceProfile_init_TA_Gradient_new(
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient_new *outC)
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

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L83[idx1].valid = kcg_true;
    outC->_L83[idx1].Loc_Absolute = kcg_lit_int64(0);
    outC->_L83[idx1].Loc_LRBG = kcg_lit_int64(0);
    outC->_L83[idx1].Gradient = kcg_lit_int64(0);
    outC->_L83[idx1].L_Gradient = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L77[idx2].valid = kcg_true;
    outC->_L77[idx2].Loc_Absolute = kcg_lit_int64(0);
    outC->_L77[idx2].Loc_LRBG = kcg_lit_int64(0);
    outC->_L77[idx2].Gradient = kcg_lit_int64(0);
    outC->_L77[idx2].L_Gradient = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L76[idx3] = Q_SCALE_10_cm_scale;
  }
  for (idx5 = 0; idx5 < 50; idx5++) {
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L74[idx5][idx4].valid = kcg_true;
      outC->_L74[idx5][idx4].d_gradient = kcg_lit_int64(0);
      outC->_L74[idx5][idx4].q_gdir = Q_GDIR_downhill;
      outC->_L74[idx5][idx4].g_a = kcg_lit_int64(0);
    }
  }
  outC->_L63.valid = kcg_true;
  outC->_L63.q_dir = Q_DIR_Reverse;
  outC->_L63.q_scale = Q_SCALE_10_cm_scale;
  outC->_L63.n_iter = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L63.sections[idx6].valid = kcg_true;
    outC->_L63.sections[idx6].d_gradient = kcg_lit_int64(0);
    outC->_L63.sections[idx6].q_gdir = Q_GDIR_downhill;
    outC->_L63.sections[idx6].g_a = kcg_lit_int64(0);
  }
  outC->_L65 = Q_SCALE_10_cm_scale;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L71[idx7].valid = kcg_true;
    outC->_L71[idx7].d_gradient = kcg_lit_int64(0);
    outC->_L71[idx7].q_gdir = Q_GDIR_downhill;
    outC->_L71[idx7].g_a = kcg_lit_int64(0);
  }
  outC->_L73.valid = kcg_true;
  outC->_L73.q_dir = Q_DIR_Reverse;
  outC->_L73.q_scale = Q_SCALE_10_cm_scale;
  outC->_L73.n_iter = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L73.sections[idx8].valid = kcg_true;
    outC->_L73.sections[idx8].d_gradient = kcg_lit_int64(0);
    outC->_L73.sections[idx8].q_gdir = Q_GDIR_downhill;
    outC->_L73.sections[idx8].g_a = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->GradientProfile[idx9].valid = kcg_true;
    outC->GradientProfile[idx9].Loc_Absolute = kcg_lit_int64(0);
    outC->GradientProfile[idx9].Loc_LRBG = kcg_lit_int64(0);
    outC->GradientProfile[idx9].Gradient = kcg_lit_int64(0);
    outC->GradientProfile[idx9].L_Gradient = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L77=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile_loop#1)/ */
    GP_Convert_P21_to_DistanceProfile_loop_init_TA_Gradient_new(
      &outC->Context_GP_Convert_P21_to_DistanceProfile_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Convert_P21_to_DistanceProfile_reset_TA_Gradient_new(
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient_new *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L77=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile_loop#1)/ */
    GP_Convert_P21_to_DistanceProfile_loop_reset_TA_Gradient_new(
      &outC->Context_GP_Convert_P21_to_DistanceProfile_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Convert_P21_to_DistanceProfile_TA_Gradient_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

