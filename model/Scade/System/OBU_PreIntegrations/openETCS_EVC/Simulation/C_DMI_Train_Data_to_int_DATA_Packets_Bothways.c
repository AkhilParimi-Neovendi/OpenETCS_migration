/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Train_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Train_Data_to_int/ */
void C_DMI_Train_Data_to_int_DATA_Packets_Bothways(
  /* dmi_train_data_ct/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_train_data_ct,
  outC_C_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L22,
    dmi_train_data_ct);
  outC->_L32 = outC->_L22.valid;
  /* _L36=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L32, &outC->Context_Bool_to_Int_1);
  outC->_L36 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L31 = outC->_L22.systemTime;
  outC->_L30 = outC->_L22.trainCategory;
  outC->_L29 = outC->_L22.l_train;
  outC->_L28 = outC->_L22.m_brakeperct;
  outC->_L27 = outC->_L22.v_maxTrain;
  outC->_L26 = outC->_L22.m_axleLoad;
  outC->_L25 = outC->_L22.m_airTight;
  outC->_L24 = outC->_L22.m_loadingGauge;
  /* _L13=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */
  CAST_NC_TRAIN_to_int_TM_conversions(
    outC->_L30,
    &outC->Context_CAST_NC_TRAIN_to_int_1);
  outC->_L13 = outC->Context_CAST_NC_TRAIN_to_int_1.nc_train_int;
  /* _L14=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_TM_conversions(
    outC->_L26,
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  outC->_L14 = outC->Context_CAST_M_AXLELOADCAT_to_int_1.m_axleloadcat_int;
  /* _L15=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */
  CAST_M_AIRTIGHT_to_int_TM_conversions(
    outC->_L25,
    &outC->Context_CAST_M_AIRTIGHT_to_int_1);
  outC->_L15 = outC->Context_CAST_M_AIRTIGHT_to_int_1.m_airtight_int;
  /* _L16=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */
  CAST_M_LOADINGGAUGE_to_int_TM_conversions(
    outC->_L24,
    &outC->Context_CAST_M_LOADINGGAUGE_to_int_1);
  outC->_L16 = outC->Context_CAST_M_LOADINGGAUGE_to_int_1.m_loadinggauge_int;
  outC->_L2[0] = outC->_L36;
  outC->_L2[1] = outC->_L31;
  outC->_L2[2] = outC->_L13;
  outC->_L2[3] = outC->_L29;
  outC->_L2[4] = outC->_L28;
  outC->_L2[5] = outC->_L27;
  outC->_L2[6] = outC->_L14;
  outC->_L2[7] = outC->_L15;
  outC->_L2[8] = outC->_L16;
  kcg_copy_DMI_Train_Data_int_array_T_DATA(&outC->dmi_train_data_int, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Train_Data_to_int_init_DATA_Packets_Bothways(
  outC_C_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L36 = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = M_AXLELOADCAT_A;
  outC->_L25 = M_AIRTIGHT_Not_fitted;
  outC->_L24 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L22.valid = kcg_true;
  outC->_L22.systemTime = kcg_lit_int32(0);
  outC->_L22.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L22.l_train = kcg_lit_int32(0);
  outC->_L22.m_brakeperct = kcg_lit_int32(0);
  outC->_L22.v_maxTrain = kcg_lit_int32(0);
  outC->_L22.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L22.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L22.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->dmi_train_data_int[idx1] = kcg_lit_int32(0);
  }
  /* _L16=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */
  CAST_M_LOADINGGAUGE_to_int_init_TM_conversions(
    &outC->Context_CAST_M_LOADINGGAUGE_to_int_1);
  /* _L15=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */
  CAST_M_AIRTIGHT_to_int_init_TM_conversions(
    &outC->Context_CAST_M_AIRTIGHT_to_int_1);
  /* _L14=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_init_TM_conversions(
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  /* _L13=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */
  CAST_NC_TRAIN_to_int_init_TM_conversions(
    &outC->Context_CAST_NC_TRAIN_to_int_1);
  /* _L36=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Train_Data_to_int_reset_DATA_Packets_Bothways(
  outC_C_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC)
{
  /* _L16=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */
  CAST_M_LOADINGGAUGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_LOADINGGAUGE_to_int_1);
  /* _L15=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */
  CAST_M_AIRTIGHT_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_AIRTIGHT_to_int_1);
  /* _L14=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  /* _L13=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */
  CAST_NC_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_NC_TRAIN_to_int_1);
  /* _L36=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Train_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

