/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Limit_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Limit/ */
void Clock__Limit_RBC_Time_Pkg(
  /* inClock/ */
  Clock_T *inClock,
  outC_Clock__Limit_RBC_Time_Pkg *outC)
{
  kcg_copy_Clock_T(&outC->_L1, inClock);
  /* _L11=(RBC_Time_Pkg::Clock__Reset#1)/ */
  Clock__Reset_RBC_Time_Pkg(&outC->_L1, &outC->Context_Clock__Reset_1);
  kcg_copy_Clock_T(&outC->_L11, &outC->Context_Clock__Reset_1.outClock);
  /* _L10=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_RBC_Time_Pkg(
    &outC->_L1,
    &outC->Context_Clock__GetSeconds_1);
  outC->_L10 = outC->Context_Clock__GetSeconds_1.outValue;
  outC->_L2 = CYCLE_TIME;
  outC->_L3 = T_TRAIN_MAX;
  outC->_L8 = outC->_L3 - outC->_L2;
  outC->_L5 = outC->_L10 <= outC->_L8;
  outC->_L4 = T_TRAIN_MIN;
  outC->_L6 = outC->_L10 >= outC->_L4;
  outC->_L9 = outC->_L6 & outC->_L5;
  /* _L7= */
  if (outC->_L9) {
    kcg_copy_Clock_T(&outC->_L7, &outC->_L1);
  }
  else {
    kcg_copy_Clock_T(&outC->_L7, &outC->_L11);
  }
  kcg_copy_Clock_T(&outC->outClock, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void Clock__Limit_init_RBC_Time_Pkg(outC_Clock__Limit_RBC_Time_Pkg *outC)
{
  outC->_L11.m_Value = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7.m_Value = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L1.m_Value = kcg_lit_int32(0);
  outC->outClock.m_Value = kcg_lit_int32(0);
  /* _L10=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_init_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
  /* _L11=(RBC_Time_Pkg::Clock__Reset#1)/ */
  Clock__Reset_init_RBC_Time_Pkg(&outC->Context_Clock__Reset_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Clock__Limit_reset_RBC_Time_Pkg(outC_Clock__Limit_RBC_Time_Pkg *outC)
{
  /* _L10=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_reset_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
  /* _L11=(RBC_Time_Pkg::Clock__Reset#1)/ */
  Clock__Reset_reset_RBC_Time_Pkg(&outC->Context_Clock__Reset_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Clock__Limit_RBC_Time_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

