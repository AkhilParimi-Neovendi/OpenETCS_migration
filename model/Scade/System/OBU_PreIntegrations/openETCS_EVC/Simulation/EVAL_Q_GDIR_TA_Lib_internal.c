/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_GDIR_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_GDIR/ */
void EVAL_Q_GDIR_TA_Lib_internal(
  /* q_gdir/ */
  Q_GDIR q_gdir,
  /* g_a/ */
  G_A g_a,
  outC_EVAL_Q_GDIR_TA_Lib_internal *outC)
{
  outC->_L2 = g_a;
  outC->_L6 = kcg_lit_int32(-1);
  outC->_L5 = kcg_lit_int32(1);
  outC->_L1 = q_gdir;
  outC->_L3 = ENUM_Q_GDIR_uphill_TM_conversions;
  outC->_L4 = outC->_L3 == outC->_L1;
  /* _L7= */
  if (outC->_L4) {
    outC->_L7 = outC->_L5;
  }
  else {
    outC->_L7 = outC->_L6;
  }
  outC->_L8 = outC->_L7 * outC->_L2;
  outC->_L11 = kcg_lit_int32(255);
  outC->_L10 = outC->_L2 == outC->_L11;
  /* _L13= */
  if (outC->_L10) {
    outC->_L13 = outC->_L11;
  }
  else {
    outC->_L13 = outC->_L8;
  }
  outC->gradient = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void EVAL_Q_GDIR_init_TA_Lib_internal(outC_EVAL_Q_GDIR_TA_Lib_internal *outC)
{
  outC->_L13 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = Q_GDIR_downhill;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = Q_GDIR_downhill;
  outC->gradient = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVAL_Q_GDIR_reset_TA_Lib_internal(outC_EVAL_Q_GDIR_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_Q_GDIR_TA_Lib_internal.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

