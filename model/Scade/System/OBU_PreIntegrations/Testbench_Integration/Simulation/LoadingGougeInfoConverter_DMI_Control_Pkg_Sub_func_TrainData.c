/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter/ */
void LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* loadingGougeEnum/ */
  M_LOADINGGAUGE loadingGougeEnum,
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L7 = kcg_lit_int32(5);
  outC->_L6 = kcg_lit_int32(4);
  outC->_L5 = kcg_lit_int32(3);
  outC->_L4 = kcg_lit_int32(2);
  outC->_L3 = kcg_lit_int32(1);
  outC->_L1 = loadingGougeEnum;
  /* _L2= */
  switch (outC->_L1) {
    case M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles :
      outC->_L2 = outC->_L3;
      break;
    case M_LOADINGGAUGE_G1 :
      outC->_L2 = outC->_L4;
      break;
    case M_LOADINGGAUGE_GA :
      outC->_L2 = outC->_L5;
      break;
    case M_LOADINGGAUGE_GB :
      outC->_L2 = outC->_L6;
      break;
    default :
      outC->_L2 = outC->_L7;
      break;
  }
  outC->loadingGougeIndex = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void LoadingGougeInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->loadingGougeIndex = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LoadingGougeInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

