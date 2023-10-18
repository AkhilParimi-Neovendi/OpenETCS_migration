/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG/ */
void NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* valid/ */
  kcg_bool valid,
  /* nidLRBG/ */
  NID_LRBG nidLRBG,
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L9 = cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  outC->_L17 = nidLRBG;
  outC->_L7 = outC->_L17 / outC->_L9;
  outC->_L21 = outC->_L7 * outC->_L9;
  outC->_L22 = outC->_L17 - outC->_L21;
  outC->_L10 = cNID_BG_unknown_BG_Types_Pkg;
  outC->_L6 = cNID_LRBG_unknown_BG_Types_Pkg;
  outC->_L11 = outC->_L6 != outC->_L17;
  outC->_L13 = valid;
  outC->_L12 = outC->_L13 & outC->_L11;
  /* _L5= */
  if (outC->_L12) {
    outC->_L5 = outC->_L22;
  }
  else {
    outC->_L5 = outC->_L10;
  }
  outC->nidBG = outC->_L5;
  outC->nidC = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void NIDLRBG_2_nidC_nidBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->nidBG = kcg_lit_int64(0);
  outC->nidC = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NIDLRBG_2_nidC_nidBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

