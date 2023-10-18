/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__SetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__SetSeconds/ */
void Clock__SetSeconds_RBC_Time_Pkg(
  /* inClock/ */
  Clock_T *inClock,
  /* inValue/ */
  T_TRAIN inValue,
  outC_Clock__SetSeconds_RBC_Time_Pkg *outC)
{
  outC->_L3 = inValue;
  kcg_copy_Clock_T(&outC->_L1, inClock);
  kcg_copy_Clock_T(&outC->_L2, &outC->_L1);
  if (kcg_true) {
    outC->_L2.m_Value = outC->_L3;
  }
  kcg_copy_Clock_T(&outC->outClock, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Clock__SetSeconds_init_RBC_Time_Pkg(
  outC_Clock__SetSeconds_RBC_Time_Pkg *outC)
{
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2.m_Value = kcg_lit_int64(0);
  outC->_L1.m_Value = kcg_lit_int64(0);
  outC->outClock.m_Value = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Clock__SetSeconds_reset_RBC_Time_Pkg(
  outC_Clock__SetSeconds_RBC_Time_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Clock__SetSeconds_RBC_Time_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

