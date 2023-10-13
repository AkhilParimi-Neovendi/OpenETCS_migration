/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Train_Data/ */
void C_int_to_DMI_Train_Data_DATA_Packets_Bothways(
  /* dmi_train_data_int/ */
  DMI_Train_Data_int_array_T_DATA *dmi_train_data_int,
  outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Train_Data_int_array_T_DATA(&outC->_L18, dmi_train_data_int);
  outC->_L5 = outC->_L18[0];
  /* _L19=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L5, &outC->Context_Int_to_Bool_1);
  outC->_L19 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L7 = outC->_L18[8];
  /* _L16=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */
  CAST_Int_to_M_LOADINGGAUGE_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_Int_to_M_LOADINGGAUGE_1);
  outC->_L16 = outC->Context_CAST_Int_to_M_LOADINGGAUGE_1.m_loadinggauge;
  outC->_L8 = outC->_L18[7];
  /* _L15=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */
  CAST_Int_to_M_AIRTIGHT_TM_conversions(
    outC->_L8,
    &outC->Context_CAST_Int_to_M_AIRTIGHT_1);
  outC->_L15 = outC->Context_CAST_Int_to_M_AIRTIGHT_1.m_airtight;
  outC->_L9 = outC->_L18[6];
  /* _L14=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_TM_conversions(
    outC->_L9,
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  outC->_L14 = outC->Context_CAST_Int_to_M_AXLELOADCAT_1.m_axleloadcat;
  outC->_L3 = outC->_L18[2];
  /* _L13=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */
  CAST_Int_to_NC_TRAIN_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_NC_TRAIN_1);
  outC->_L13 = outC->Context_CAST_Int_to_NC_TRAIN_1.nc_train;
  outC->_L4 = outC->_L18[1];
  outC->_L12 = outC->_L18[3];
  outC->_L11 = outC->_L18[4];
  outC->_L10 = outC->_L18[5];
  outC->_L2.valid = outC->_L19;
  outC->_L2.systemTime = outC->_L4;
  outC->_L2.trainCategory = outC->_L13;
  outC->_L2.l_train = outC->_L12;
  outC->_L2.m_brakeperct = outC->_L11;
  outC->_L2.v_maxTrain = outC->_L10;
  outC->_L2.m_axleLoad = outC->_L14;
  outC->_L2.m_airTight = outC->_L15;
  outC->_L2.m_loadingGauge = outC->_L16;
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_train_data_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Train_Data_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L19 = kcg_true;
  for (idx = 0; idx < 9; idx++) {
    outC->_L18[idx] = kcg_lit_int64(0);
  }
  outC->_L16 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15 = M_AIRTIGHT_Not_fitted;
  outC->_L14 = M_AXLELOADCAT_A;
  outC->_L13 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int64(0);
  outC->_L2.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.l_train = kcg_lit_int64(0);
  outC->_L2.m_brakeperct = kcg_lit_int64(0);
  outC->_L2.v_maxTrain = kcg_lit_int64(0);
  outC->_L2.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L2.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L2.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->dmi_train_data_ct.valid = kcg_true;
  outC->dmi_train_data_ct.systemTime = kcg_lit_int64(0);
  outC->dmi_train_data_ct.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->dmi_train_data_ct.l_train = kcg_lit_int64(0);
  outC->dmi_train_data_ct.m_brakeperct = kcg_lit_int64(0);
  outC->dmi_train_data_ct.v_maxTrain = kcg_lit_int64(0);
  outC->dmi_train_data_ct.m_axleLoad = M_AXLELOADCAT_A;
  outC->dmi_train_data_ct.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->dmi_train_data_ct.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  /* _L13=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */
  CAST_Int_to_NC_TRAIN_init_TM_conversions(
    &outC->Context_CAST_Int_to_NC_TRAIN_1);
  /* _L14=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  /* _L15=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */
  CAST_Int_to_M_AIRTIGHT_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_AIRTIGHT_1);
  /* _L16=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */
  CAST_Int_to_M_LOADINGGAUGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_LOADINGGAUGE_1);
  /* _L19=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Train_Data_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC)
{
  /* _L13=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */
  CAST_Int_to_NC_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NC_TRAIN_1);
  /* _L14=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  /* _L15=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */
  CAST_Int_to_M_AIRTIGHT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_AIRTIGHT_1);
  /* _L16=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */
  CAST_Int_to_M_LOADINGGAUGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_LOADINGGAUGE_1);
  /* _L19=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Train_Data_DATA_Packets_Bothways.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

