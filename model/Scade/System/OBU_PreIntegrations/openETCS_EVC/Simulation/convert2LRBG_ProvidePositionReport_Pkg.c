/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convert2LRBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::convert2LRBG/ */
void convert2LRBG_ProvidePositionReport_Pkg(
  /* nid_c/ */
  NID_C nid_c,
  /* nid_bg/ */
  NID_BG nid_bg,
  outC_convert2LRBG_ProvidePositionReport_Pkg *outC)
{
  outC->_L2 = nid_bg;
  outC->_L1 = nid_c;
  outC->_L4 = kcg_lit_int32(100000);
  outC->_L3 = outC->_L4 * outC->_L1;
  outC->_L5 = outC->_L3 + outC->_L2;
  outC->nid_lrbg = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void convert2LRBG_init_ProvidePositionReport_Pkg(
  outC_convert2LRBG_ProvidePositionReport_Pkg *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->nid_lrbg = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void convert2LRBG_reset_ProvidePositionReport_Pkg(
  outC_convert2LRBG_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** convert2LRBG_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

