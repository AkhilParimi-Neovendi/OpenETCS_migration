/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_DIFF_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NC_DIFF/ */
void CAST_Int_to_NC_DIFF_TM_conversions(
  /* nc_diff_int/ */
  kcg_int64 nc_diff_int,
  outC_CAST_Int_to_NC_DIFF_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L16 = kcg_lit_int64(2);
  outC->_L13 = nc_diff_int;
  outC->nc_diff = outC->_L13;
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = outC->_L13 < outC->_L14;
  _1_noname = outC->_L15;
  outC->_L12 = outC->_L13 > outC->_L16;
  noname = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_NC_DIFF_init_TM_conversions(
  outC_CAST_Int_to_NC_DIFF_TM_conversions *outC)
{
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_lit_int64(0);
  outC->nc_diff = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_NC_DIFF_reset_TM_conversions(
  outC_CAST_Int_to_NC_DIFF_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_NC_DIFF_TM_conversions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

