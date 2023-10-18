/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_V_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_V_TRAIN_to_int/ */
void CAST_V_TRAIN_to_int_TM_conversions(
  /* v_train/ */
  V_TRAIN v_train,
  outC_CAST_V_TRAIN_to_int_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L16 = kcg_lit_int64(120);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(5);
  outC->_L1 = v_train;
  outC->_L11 = outC->_L1 / outC->_L12;
  outC->_L15 = outC->_L11 < outC->_L13;
  outC->_L14 = outC->_L11 > outC->_L16;
  _1_noname = outC->_L14;
  noname = outC->_L15;
  outC->v_train_int = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_V_TRAIN_to_int_init_TM_conversions(
  outC_CAST_V_TRAIN_to_int_TM_conversions *outC)
{
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->v_train_int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_V_TRAIN_to_int_reset_TM_conversions(
  outC_CAST_V_TRAIN_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_V_TRAIN_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

