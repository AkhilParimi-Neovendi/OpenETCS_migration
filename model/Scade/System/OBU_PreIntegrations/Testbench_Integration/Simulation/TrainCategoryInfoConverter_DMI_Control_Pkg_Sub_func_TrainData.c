/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter/ */
void TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* TrainCatEnum/ */
  NC_TRAIN TrainCatEnum,
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L6 = kcg_lit_int32(1);
  outC->_L5 = kcg_lit_int32(4);
  outC->_L4 = kcg_lit_int32(3);
  outC->_L3 = kcg_lit_int32(2);
  outC->_L1 = TrainCatEnum;
  /* _L2= */
  switch (outC->_L1) {
    case NC_TRAIN_Passenger_train :
      outC->_L2 = outC->_L3;
      break;
    case NC_TRAIN_Freight_train_braked_in_P_position :
      outC->_L2 = outC->_L4;
      break;
    case NC_TRAIN_Freight_train_braked_in_G_position :
      outC->_L2 = outC->_L5;
      break;
    default :
      outC->_L2 = outC->_L6;
      break;
  }
  outC->TrainCatIndex = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void TrainCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->TrainCatIndex = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

