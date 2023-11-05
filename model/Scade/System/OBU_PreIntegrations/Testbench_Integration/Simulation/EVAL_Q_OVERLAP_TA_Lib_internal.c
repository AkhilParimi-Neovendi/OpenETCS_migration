/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_OVERLAP/ */
void EVAL_Q_OVERLAP_TA_Lib_internal(
  /* q_overlap/ */
  Q_OVERLAP q_overlap,
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC)
{
  outC->_L3 = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
  outC->_L1 = q_overlap;
  outC->_L2 = outC->_L3 == outC->_L1;
  outC->q_dp_bool = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void EVAL_Q_OVERLAP_init_TA_Lib_internal(
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC)
{
  outC->_L3 = Q_OVERLAP_No_overlap_information;
  outC->_L2 = kcg_true;
  outC->_L1 = Q_OVERLAP_No_overlap_information;
  outC->q_dp_bool = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVAL_Q_OVERLAP_reset_TA_Lib_internal(
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_Q_OVERLAP_TA_Lib_internal.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

