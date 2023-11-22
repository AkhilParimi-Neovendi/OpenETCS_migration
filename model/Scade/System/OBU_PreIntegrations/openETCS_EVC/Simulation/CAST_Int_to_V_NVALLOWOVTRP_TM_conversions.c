/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVALLOWOVTRP/ */
void CAST_Int_to_V_NVALLOWOVTRP_TM_conversions(
  /* v_nvallowovtrp_int/ */
  kcg_int32 v_nvallowovtrp_int,
  outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L12 = kcg_lit_int32(5);
  outC->_L1 = v_nvallowovtrp_int;
  outC->_L11 = outC->_L1 * outC->_L12;
  outC->_L7 = kcg_lit_int32(120);
  outC->_L9 = outC->_L1 > outC->_L7;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L8 = outC->_L1 < outC->_L6;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->v_nvallowovtrp = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_V_NVALLOWOVTRP_init_TM_conversions(
  outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->v_nvallowovtrp = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_V_NVALLOWOVTRP_reset_TM_conversions(
  outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

