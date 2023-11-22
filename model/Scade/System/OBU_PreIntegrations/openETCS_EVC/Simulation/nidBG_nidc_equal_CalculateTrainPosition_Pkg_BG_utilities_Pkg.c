/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal/ */
void nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* nid_c_2/ */
  NID_C nid_c_2,
  /* nid_bg_2/ */
  NID_BG nid_bg_2,
  /* nid_c_1/ */
  NID_C nid_c_1,
  /* nid_bg_1/ */
  NID_BG nid_bg_1,
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L4 = nid_bg_1;
  outC->_L3 = nid_bg_2;
  outC->_L6 = outC->_L3 == outC->_L4;
  outC->_L2 = nid_c_1;
  outC->_L1 = nid_c_2;
  outC->_L5 = outC->_L1 == outC->_L2;
  outC->_L7 = outC->_L5 & outC->_L6;
  outC->isEqual = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void nidBG_nidc_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->isEqual = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nidBG_nidc_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

