/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator/ */
void NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float64 inTrainPosition,
  /* inGradientsStart/ */
  kcg_float64 inGradientsStart,
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L1 = inTrainPosition;
  outC->AccOut = outC->_L1;
  outC->_L2 = inGradientsStart;
  outC->_L3 = outC->_L1 >= outC->_L2;
  outC->outFirstIndexOfNextGradients = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void NextGradients_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->AccOut = kcg_lit_float64(0.0);
  outC->outFirstIndexOfNextGradients = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextGradients_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

