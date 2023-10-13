/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_SSP_Matrix_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::Build_SSP_Matrix/ */
void Build_SSP_Matrix_TA_SpeedProfiles(
  /* ASP/ */
  SSP_cat_t_TA_MRSP *ASP,
  /* LX_SR/ */
  SSP_cat_t_TA_MRSP *LX_SR,
  /* MaxTrainSpeed/ */
  SSP_cat_t_TA_MRSP *MaxTrainSpeed,
  /* ModeRelated/ */
  SSP_cat_t_TA_MRSP *ModeRelated,
  /* OverrideRelated/ */
  SSP_cat_t_TA_MRSP *OverrideRelated,
  /* PBD_SR/ */
  SSP_cat_t_TA_MRSP *PBD_SR,
  /* SignalingRelated/ */
  SSP_cat_t_TA_MRSP *SignalingRelated,
  /* SSP/ */
  SSP_cat_t_TA_MRSP *SSP,
  /* SSP_updated/ */
  kcg_bool SSP_updated,
  /* STM_MaxSpeed/ */
  SSP_cat_t_TA_MRSP *STM_MaxSpeed,
  /* STM_SystemSpeed/ */
  SSP_cat_t_TA_MRSP *STM_SystemSpeed,
  /* TSR/ */
  SSP_cat_t_TA_MRSP *TSR,
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC)
{
  outC->_L13 = SSP_updated;
  outC->SSP_matrix_updated = outC->_L13;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L1, ASP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L2, LX_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L3, MaxTrainSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L4, ModeRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L5, OverrideRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L6, PBD_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L7, SignalingRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L8, SSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L9, STM_MaxSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L10, STM_SystemSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L11, TSR);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[0], &outC->_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[1], &outC->_L2);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[2], &outC->_L3);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[3], &outC->_L4);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[4], &outC->_L5);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[5], &outC->_L6);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[6], &outC->_L7);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[7], &outC->_L8);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[8], &outC->_L9);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[9], &outC->_L10);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[10], &outC->_L11);
  kcg_copy_SSP_matrix_t_TA_MRSP(&outC->SSP_matrix_out, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_SSP_Matrix_init_TA_SpeedProfiles(
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC)
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

  outC->_L13 = kcg_true;
  for (idx1 = 0; idx1 < 11; idx1++) {
    for (idx = 0; idx < 50; idx++) {
      outC->_L12[idx1][idx].target = kcg_lit_int64(0);
      outC->_L12[idx1][idx].speed = kcg_lit_int64(0);
    }
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L11[idx2].target = kcg_lit_int64(0);
    outC->_L11[idx2].speed = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L10[idx3].target = kcg_lit_int64(0);
    outC->_L10[idx3].speed = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L9[idx4].target = kcg_lit_int64(0);
    outC->_L9[idx4].speed = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L8[idx5].target = kcg_lit_int64(0);
    outC->_L8[idx5].speed = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L7[idx6].target = kcg_lit_int64(0);
    outC->_L7[idx6].speed = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L6[idx7].target = kcg_lit_int64(0);
    outC->_L6[idx7].speed = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L5[idx8].target = kcg_lit_int64(0);
    outC->_L5[idx8].speed = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->_L4[idx9].target = kcg_lit_int64(0);
    outC->_L4[idx9].speed = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 50; idx10++) {
    outC->_L3[idx10].target = kcg_lit_int64(0);
    outC->_L3[idx10].speed = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 50; idx11++) {
    outC->_L2[idx11].target = kcg_lit_int64(0);
    outC->_L2[idx11].speed = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 50; idx12++) {
    outC->_L1[idx12].target = kcg_lit_int64(0);
    outC->_L1[idx12].speed = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 11; idx14++) {
    for (idx13 = 0; idx13 < 50; idx13++) {
      outC->SSP_matrix_out[idx14][idx13].target = kcg_lit_int64(0);
      outC->SSP_matrix_out[idx14][idx13].speed = kcg_lit_int64(0);
    }
  }
  outC->SSP_matrix_updated = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_SSP_Matrix_reset_TA_SpeedProfiles(
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_SSP_Matrix_TA_SpeedProfiles.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

