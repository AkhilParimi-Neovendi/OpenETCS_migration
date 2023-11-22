/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_CYCLOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_CYCLOC/ */
void CAST_Int_to_D_CYCLOC_TM_conversions(
  /* d_cycloc_int/ */
  kcg_int32 d_cycloc_int,
  outC_CAST_Int_to_D_CYCLOC_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L8 = DIM_D_min_TM_conversions;
  outC->_L1 = d_cycloc_int;
  outC->_L9 = outC->_L1 < outC->_L8;
  outC->_L7 = DIM_D_max_TM_conversions;
  outC->_L6 = outC->_L1 > outC->_L7;
  _1_noname = outC->_L6;
  noname = outC->_L9;
  outC->d_cycloc = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_D_CYCLOC_init_TM_conversions(
  outC_CAST_Int_to_D_CYCLOC_TM_conversions *outC)
{
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->d_cycloc = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_D_CYCLOC_reset_TM_conversions(
  outC_CAST_Int_to_D_CYCLOC_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_D_CYCLOC_TM_conversions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

