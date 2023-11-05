/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG/ */
void nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* valid/ */
  kcg_bool valid,
  /* nidC/ */
  NID_C nidC,
  /* nidBG/ */
  NID_BG nidBG,
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L6 = cNID_LRBG_unknown_BG_Types_Pkg;
  outC->_L9 = cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  outC->_L15 = nidC;
  outC->_L7 = outC->_L15 * outC->_L9;
  outC->_L16 = nidBG;
  outC->_L8 = outC->_L16 + outC->_L7;
  outC->_L10 = cNID_BG_unknown_BG_Types_Pkg;
  outC->_L11 = outC->_L10 != outC->_L16;
  outC->_L13 = valid;
  outC->_L12 = outC->_L13 & outC->_L11;
  /* _L5= */
  if (outC->_L12) {
    outC->_L5 = outC->_L8;
  }
  else {
    outC->_L5 = outC->_L6;
  }
  outC->nidLRBG = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void nidC_nidBG_2_NIDLRBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->nidLRBG = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

