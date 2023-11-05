/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__GetSeconds/ */
void Clock__GetSeconds_RBC_Time_Pkg(
  /* inClock/ */
  Clock_T *inClock,
  outC_Clock__GetSeconds_RBC_Time_Pkg *outC)
{
  kcg_copy_Clock_T(&outC->_L1, inClock);
  outC->_L2 = outC->_L1.m_Value;
  outC->outValue = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void Clock__GetSeconds_init_RBC_Time_Pkg(
  outC_Clock__GetSeconds_RBC_Time_Pkg *outC)
{
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1.m_Value = kcg_lit_int32(0);
  outC->outValue = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void Clock__GetSeconds_reset_RBC_Time_Pkg(
  outC_Clock__GetSeconds_RBC_Time_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Clock__GetSeconds_RBC_Time_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

