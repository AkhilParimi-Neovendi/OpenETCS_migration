/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter/ */
void TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
  /* TrainData/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *TrainData,
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  static T_internal_Type_Obu_BasicTypes_Pkg noname;
  static kcg_bool _1_noname;

  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L1, TrainData);
  outC->_L6 = outC->_L1.m_brakeperct;
  outC->_L17 = /* _L17= */(kcg_float32) outC->_L6;
  outC->_L9 = outC->_L1.m_airTight;
  /* _L16=(DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter#1)/ */
  AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L9,
    &outC->Context_AirtightManagerInfoConverter_1);
  outC->_L16 = outC->Context_AirtightManagerInfoConverter_1.airtightIndex;
  outC->_L2 = outC->_L1.valid;
  _1_noname = outC->_L2;
  outC->_L10 = outC->_L1.m_loadingGauge;
  /* _L15=(DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter#1)/ */
  LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L10,
    &outC->Context_LoadingGougeInfoConverter_1);
  outC->_L15 = outC->Context_LoadingGougeInfoConverter_1.loadingGougeIndex;
  outC->_L7 = outC->_L1.v_maxTrain;
  outC->_L14 = /* _L14= */(kcg_float32) outC->_L7;
  outC->_L5 = outC->_L1.l_train;
  outC->_L13 = /* _L13= */(kcg_float32) outC->_L5;
  outC->_L3 = outC->_L1.systemTime;
  noname = outC->_L3;
  outC->_L8 = outC->_L1.m_axleLoad;
  /* _L12=(DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter#1)/ */
  AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L8,
    &outC->Context_AxleLoadCategoryInfoConverter_1);
  outC->_L12 = outC->Context_AxleLoadCategoryInfoConverter_1.axelLoadIndex;
  outC->_L4 = outC->_L1.trainCategory;
  /* _L11=(DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter#1)/ */
  TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L4,
    &outC->Context_TrainCategoryInfoConverter_1);
  outC->_L11 = outC->Context_TrainCategoryInfoConverter_1.TrainCatIndex;
  outC->TrainCategoryIndex = outC->_L11;
  outC->AxleLoadIndex = outC->_L12;
  outC->TrainLenght = outC->_L13;
  outC->MaxSpeed = outC->_L14;
  outC->LoadingGougeIndex = outC->_L15;
  outC->AirtightIndex = outC->_L16;
  outC->BrakePerc = outC->_L17;
}

#ifndef KCG_USER_DEFINED_INIT
void TrainDataInfo_Adapter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L17 = kcg_lit_float32(0.0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9 = M_AIRTIGHT_Not_fitted;
  outC->_L8 = M_AXLELOADCAT_A;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = kcg_lit_int32(0);
  outC->_L1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.l_train = kcg_lit_int32(0);
  outC->_L1.m_brakeperct = kcg_lit_int32(0);
  outC->_L1.v_maxTrain = kcg_lit_int32(0);
  outC->_L1.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->BrakePerc = kcg_lit_float32(0.0);
  outC->AirtightIndex = kcg_lit_int32(0);
  outC->LoadingGougeIndex = kcg_lit_int32(0);
  outC->MaxSpeed = kcg_lit_float32(0.0);
  outC->TrainLenght = kcg_lit_float32(0.0);
  outC->AxleLoadIndex = kcg_lit_int32(0);
  outC->TrainCategoryIndex = kcg_lit_int32(0);
  /* _L11=(DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter#1)/ */
  TrainCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_TrainCategoryInfoConverter_1);
  /* _L12=(DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter#1)/ */
  AxleLoadCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_AxleLoadCategoryInfoConverter_1);
  /* _L15=(DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter#1)/ */
  LoadingGougeInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_LoadingGougeInfoConverter_1);
  /* _L16=(DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter#1)/ */
  AirtightManagerInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_AirtightManagerInfoConverter_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainDataInfo_Adapter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  /* _L11=(DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter#1)/ */
  TrainCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_TrainCategoryInfoConverter_1);
  /* _L12=(DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter#1)/ */
  AxleLoadCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_AxleLoadCategoryInfoConverter_1);
  /* _L15=(DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter#1)/ */
  LoadingGougeInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_LoadingGougeInfoConverter_1);
  /* _L16=(DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter#1)/ */
  AirtightManagerInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_AirtightManagerInfoConverter_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

