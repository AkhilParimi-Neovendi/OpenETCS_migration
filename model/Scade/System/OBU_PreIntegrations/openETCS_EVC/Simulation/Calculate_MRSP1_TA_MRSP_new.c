/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculate_MRSP1_TA_MRSP_new.h"

/* TA_MRSP_new::Calculate_MRSP1/ */
void Calculate_MRSP1_TA_MRSP_new(
  /* SSP_matrix_in/ */
  SSP_matrix_t_TA_MRSP_new *SSP_matrix_in,
  outC_Calculate_MRSP1_TA_MRSP_new *outC)
{
  SSP_matrix_t_TA_MRSP_new noname;

  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L18,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP_new);
  kcg_copy_SSP_matrix_t_TA_MRSP_new(&outC->_L15, SSP_matrix_in);
  kcg_copy_SSP_matrix_t_TA_MRSP_new(&noname, &outC->_L15);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L18);
}

#ifndef KCG_USER_DEFINED_INIT
void Calculate_MRSP1_init_TA_MRSP_new(outC_Calculate_MRSP1_TA_MRSP_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx = 0; idx < 110; idx++) {
    outC->_L18[idx].valid = kcg_true;
    outC->_L18[idx].Loc_Abs = kcg_lit_int32(0);
    outC->_L18[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L18[idx].MRS = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 11; idx2++) {
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L15[idx2][idx1].target = kcg_lit_int32(0);
      outC->_L15[idx2][idx1].speed = kcg_lit_int32(0);
    }
  }
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->MRSP[idx3].valid = kcg_true;
    outC->MRSP[idx3].Loc_Abs = kcg_lit_int32(0);
    outC->MRSP[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->MRSP[idx3].MRS = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Calculate_MRSP1_reset_TA_MRSP_new(outC_Calculate_MRSP1_TA_MRSP_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Calculate_MRSP1_TA_MRSP_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

