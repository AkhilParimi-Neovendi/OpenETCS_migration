/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator/ */
void NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float32 inTrainPosition,
  /* inSpeedProfile_Distance/ */
  kcg_float32 inSpeedProfile_Distance,
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L1 = inTrainPosition;
  outC->AccOut = outC->_L1;
  outC->_L2 = inSpeedProfile_Distance;
  outC->_L3 = outC->_L1 >= outC->_L2;
  outC->outFirstIndexOfNextSpeedProfiles = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void NextSpeedProfiles_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->AccOut = kcg_lit_float32(0.0);
  outC->outFirstIndexOfNextSpeedProfiles = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NextSpeedProfiles_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

