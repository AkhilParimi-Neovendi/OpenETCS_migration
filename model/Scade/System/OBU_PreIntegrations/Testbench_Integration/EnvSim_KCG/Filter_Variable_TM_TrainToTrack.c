/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Filter_Variable_TM_TrainToTrack.h"

/* TM_TrainToTrack::Filter_Variable/ */
void Filter_Variable_TM_TrainToTrack(
  /* valid/ */
  kcg_bool valid,
  /* int_in/ */
  kcg_int32 int_in,
  outC_Filter_Variable_TM_TrainToTrack *outC)
{
  outC->_L3 = INVALID_VARIABLE_TM_TrainToTrack;
  outC->_L2 = int_in;
  outC->_L1 = valid;
  /* _L4= */
  if (outC->_L1) {
    outC->_L4 = outC->_L2;
  }
  else {
    outC->_L4 = outC->_L3;
  }
  outC->int_out = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Filter_Variable_init_TM_TrainToTrack(
  outC_Filter_Variable_TM_TrainToTrack *outC)
{
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->int_out = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Filter_Variable_reset_TM_TrainToTrack(
  outC_Filter_Variable_TM_TrainToTrack *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Filter_Variable_TM_TrainToTrack.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

