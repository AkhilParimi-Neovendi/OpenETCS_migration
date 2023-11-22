/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LOCACC/ */
void CAST_Int_to_Q_LOCACC_TM_conversions(
  /* q_locacc_int/ */
  kcg_int32 q_locacc_int,
  outC_CAST_Int_to_Q_LOCACC_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(63);
  outC->_L1 = q_locacc_int;
  outC->_L9 = outC->_L1 > outC->_L10;
  outC->_L8 = outC->_L1 < outC->_L11;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->q_locacc = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_LOCACC_init_TM_conversions(
  outC_CAST_Int_to_Q_LOCACC_TM_conversions *outC)
{
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->q_locacc = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_LOCACC_reset_TM_conversions(
  outC_CAST_Int_to_Q_LOCACC_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_LOCACC_TM_conversions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

