/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Tick_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Tick/ */
void Clock__Tick_RBC_Time_Pkg(
  /* inClock/ */
  Clock_T *inClock,
  outC_Clock__Tick_RBC_Time_Pkg *outC)
{
  outC->_L4 = CYCLE_TIME;
  kcg_copy_Clock_T(&outC->_L1, inClock);
  /* _L2=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_RBC_Time_Pkg(
    &outC->_L1,
    &outC->Context_Clock__GetSeconds_1);
  outC->_L2 = outC->Context_Clock__GetSeconds_1.outValue;
  outC->_L5 = outC->_L2 + outC->_L4;
  /* _L3=(RBC_Time_Pkg::Clock__SetSeconds#1)/ */
  Clock__SetSeconds_RBC_Time_Pkg(
    &outC->_L1,
    outC->_L5,
    &outC->Context_Clock__SetSeconds_1);
  kcg_copy_Clock_T(&outC->_L3, &outC->Context_Clock__SetSeconds_1.outClock);
  kcg_copy_Clock_T(&outC->outClock, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void Clock__Tick_init_RBC_Time_Pkg(outC_Clock__Tick_RBC_Time_Pkg *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3.m_Value = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1.m_Value = kcg_lit_int32(0);
  outC->outClock.m_Value = kcg_lit_int32(0);
  /* _L3=(RBC_Time_Pkg::Clock__SetSeconds#1)/ */
  Clock__SetSeconds_init_RBC_Time_Pkg(&outC->Context_Clock__SetSeconds_1);
  /* _L2=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_init_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Clock__Tick_reset_RBC_Time_Pkg(outC_Clock__Tick_RBC_Time_Pkg *outC)
{
  /* _L3=(RBC_Time_Pkg::Clock__SetSeconds#1)/ */
  Clock__SetSeconds_reset_RBC_Time_Pkg(&outC->Context_Clock__SetSeconds_1);
  /* _L2=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_reset_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Clock__Tick_RBC_Time_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

