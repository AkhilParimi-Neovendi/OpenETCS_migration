/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_T_TRAIN_to_int/ */
void CAST_T_TRAIN_to_int_TM_conversions(
  /* t_train/ */
  T_TRAIN t_train,
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L13 = kcg_lit_int64(5000000);
  outC->_L1 = t_train;
  outC->_L16 = outC->_L1 > outC->_L13;
  _1_noname = outC->_L16;
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = outC->_L1 < outC->_L15;
  noname = outC->_L14;
  outC->t_train_int = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_T_TRAIN_to_int_init_TM_conversions(
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC)
{
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->t_train_int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void CAST_T_TRAIN_to_int_reset_TM_conversions(
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_T_TRAIN_to_int_TM_conversions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

