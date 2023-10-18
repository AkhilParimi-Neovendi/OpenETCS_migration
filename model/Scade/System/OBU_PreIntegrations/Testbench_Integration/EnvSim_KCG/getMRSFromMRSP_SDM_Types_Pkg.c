/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::getMRSFromMRSP/ */
void getMRSFromMRSP_SDM_Types_Pkg(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  /* d_max_safe_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  outC_getMRSFromMRSP_SDM_Types_Pkg *outC)
{
  static kcg_size idx;
  static MRSP_internal_section_T_TargetManagement_types acc;
  static kcg_size idx1;

  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L1, MRSP);
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &outC->_L5,
    &outC->_L1[0]);
  outC->_L4 = d_max_safe_front;
  /* _L6/ */
  for (idx = 0; idx < 110; idx++) {
    outC->_L6[idx] = outC->_L4;
  }
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&outC->_L8, &outC->_L5);
  /* _L8= */
  for (idx1 = 0; idx1 < 110; idx1++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&acc, &outC->_L8);
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L91_searchMRSP_2[idx1],
      &outC->_L1[idx1]);
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L40_searchMRSP_2[idx1],
      &outC->_L1[idx1]);
    outC->_L90_searchMRSP_2[idx1] = outC->_L40_searchMRSP_2[idx1].Loc_Abs;
    outC->_L74_searchMRSP_2[idx1] = outC->_L6[idx1];
    outC->_L77_searchMRSP_2[idx1] = outC->_L90_searchMRSP_2[idx1] <=
      outC->_L74_searchMRSP_2[idx1];
    outC->_L88_searchMRSP_2[idx1] = outC->_L40_searchMRSP_2[idx1].valid;
    outC->_L89_searchMRSP_2[idx1] = outC->_L88_searchMRSP_2[idx1] &
      outC->_L77_searchMRSP_2[idx1];
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L8_searchMRSP_2[idx1],
      &acc);
    /* @1/_L84= */
    if (outC->_L89_searchMRSP_2[idx1]) {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(
        &outC->_L84_searchMRSP_2[idx1],
        &outC->_L91_searchMRSP_2[idx1]);
    }
    else {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(
        &outC->_L84_searchMRSP_2[idx1],
        &outC->_L8_searchMRSP_2[idx1]);
    }
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L8,
      &outC->_L84_searchMRSP_2[idx1]);
  }
  outC->_L9 = outC->_L8.MRS;
  outC->V_MRSP = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void getMRSFromMRSP_init_SDM_Types_Pkg(outC_getMRSFromMRSP_SDM_Types_Pkg *outC)
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

  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8.Loc_Abs = kcg_lit_float64(0.0);
  outC->_L8.MRS = kcg_lit_float64(0.0);
  outC->_L8.valid = kcg_true;
  for (idx = 0; idx < 110; idx++) {
    outC->_L6[idx] = kcg_lit_float64(0.0);
  }
  outC->_L5.Loc_Abs = kcg_lit_float64(0.0);
  outC->_L5.MRS = kcg_lit_float64(0.0);
  outC->_L5.valid = kcg_true;
  outC->_L4 = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L1[idx1].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L1[idx1].MRS = kcg_lit_float64(0.0);
    outC->_L1[idx1].valid = kcg_true;
  }
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L8_searchMRSP_2[idx2].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L8_searchMRSP_2[idx2].MRS = kcg_lit_float64(0.0);
    outC->_L8_searchMRSP_2[idx2].valid = kcg_true;
  }
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L40_searchMRSP_2[idx3].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L40_searchMRSP_2[idx3].MRS = kcg_lit_float64(0.0);
    outC->_L40_searchMRSP_2[idx3].valid = kcg_true;
  }
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->_L77_searchMRSP_2[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L84_searchMRSP_2[idx5].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L84_searchMRSP_2[idx5].MRS = kcg_lit_float64(0.0);
    outC->_L84_searchMRSP_2[idx5].valid = kcg_true;
  }
  for (idx6 = 0; idx6 < 110; idx6++) {
    outC->_L74_searchMRSP_2[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 110; idx7++) {
    outC->_L88_searchMRSP_2[idx7] = kcg_true;
  }
  for (idx8 = 0; idx8 < 110; idx8++) {
    outC->_L89_searchMRSP_2[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 110; idx9++) {
    outC->_L90_searchMRSP_2[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 110; idx10++) {
    outC->_L91_searchMRSP_2[idx10].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L91_searchMRSP_2[idx10].MRS = kcg_lit_float64(0.0);
    outC->_L91_searchMRSP_2[idx10].valid = kcg_true;
  }
  outC->V_MRSP = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getMRSFromMRSP_reset_SDM_Types_Pkg(outC_getMRSFromMRSP_SDM_Types_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: SDM_Types_Pkg::getMRSFromMRSP/
  @1: (SDM_Types_Pkg::searchMRSP#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getMRSFromMRSP_SDM_Types_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

