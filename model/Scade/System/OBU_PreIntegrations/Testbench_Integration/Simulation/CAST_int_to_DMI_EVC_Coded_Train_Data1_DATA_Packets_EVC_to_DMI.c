/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data1/ */
void CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_coded_train_data_int/ */
  DMI_EVC_Coded_Train_Data_int_array_T_DATA *dmi_evc_coded_train_data_int,
  outC_CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    &outC->_L22,
    dmi_evc_coded_train_data_int);
  outC->_L2 = outC->_L22[8];
  /* _L19=(DATA::Variables::CAST_int_to_DMI_loadingGauge#1)/ */
  CAST_int_to_DMI_loadingGauge_DATA_Variables(
    outC->_L2,
    &outC->Context_CAST_int_to_DMI_loadingGauge_1);
  kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg(
    &outC->_L19,
    &outC->Context_CAST_int_to_DMI_loadingGauge_1.dmi_loadingGauge_ct);
  outC->_L3 = outC->_L22[7];
  /* _L18=(DATA::Variables::CAST_int_to_DMI_airtightSystem#1)/ */
  CAST_int_to_DMI_airtightSystem_DATA_Variables(
    outC->_L3,
    &outC->Context_CAST_int_to_DMI_airtightSystem_1);
  kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg(
    &outC->_L18,
    &outC->Context_CAST_int_to_DMI_airtightSystem_1.dmi_airtightSystem_ct);
  outC->_L4 = outC->_L22[6];
  /* _L17=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  outC->_L17 = outC->Context_CAST_Int_to_M_AXLELOADCAT_1.m_axleloadcat;
  outC->_L5 = outC->_L22[5];
  /* _L16=(DATA::Variables::CAST_int_to_DMI_vMax_id#1)/ */
  CAST_int_to_DMI_vMax_id_DATA_Variables(
    outC->_L5,
    &outC->Context_CAST_int_to_DMI_vMax_id_1);
  kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg(
    &outC->_L16,
    &outC->Context_CAST_int_to_DMI_vMax_id_1.dmi_vmax_id_ct);
  outC->_L6 = outC->_L22[4];
  /* _L15=(DATA::Variables::CAST_int_to_DMI_brakeModel_id#1)/ */
  CAST_int_to_DMI_brakeModel_id_DATA_Variables(
    outC->_L6,
    &outC->Context_CAST_int_to_DMI_brakeModel_id_1);
  kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg(
    &outC->_L15,
    &outC->Context_CAST_int_to_DMI_brakeModel_id_1.dmi_brakeModel_id_ct);
  outC->_L7 = outC->_L22[3];
  /* _L14=(DATA::Variables::CAST_int_to_DMI_train_length#1)/ */
  CAST_int_to_DMI_train_length_DATA_Variables(
    outC->_L7,
    &outC->Context_CAST_int_to_DMI_train_length_1);
  kcg_copy_DMI_train_length_T_DMI_Types_Pkg(
    &outC->_L14,
    &outC->Context_CAST_int_to_DMI_train_length_1.dmi_train_length_ct);
  outC->_L8 = outC->_L22[2];
  /* _L13=(DATA::Variables::CAST_int_to_DMI_train_id#1)/ */
  CAST_int_to_DMI_train_id_DATA_Variables(
    outC->_L8,
    &outC->Context_CAST_int_to_DMI_train_id_1);
  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(
    &outC->_L13,
    &outC->Context_CAST_int_to_DMI_train_id_1.dmi_train_id_ct);
  outC->_L10 = outC->_L22[0];
  /* _L12=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L10, &outC->Context_Int_to_Bool_1);
  outC->_L12 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L9 = outC->_L22[1];
  outC->_L11.valid = outC->_L12;
  outC->_L11.system_clock = outC->_L9;
  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(&outC->_L11.trainID, &outC->_L13);
  kcg_copy_DMI_train_length_T_DMI_Types_Pkg(&outC->_L11.trainLength, &outC->_L14);
  kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg(&outC->_L11.brakeModel, &outC->_L15);
  kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg(&outC->_L11.vmax, &outC->_L16);
  outC->_L11.mAxleLoad = outC->_L17;
  kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg(
    &outC->_L11.airTightSystem,
    &outC->_L18);
  kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg(
    &outC->_L11.mLoadingGauge,
    &outC->_L19);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_evc_coded_train_data_ct,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_EVC_Coded_Train_Data1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 9; idx++) {
    outC->_L22[idx] = kcg_lit_int64(0);
  }
  outC->_L19.number = kcg_lit_int64(0);
  outC->_L19.dig1 = kcg_lit_int64(0);
  outC->_L19.dig2 = kcg_lit_int64(0);
  outC->_L19.dig3 = kcg_lit_int64(0);
  outC->_L18.number = kcg_lit_int64(0);
  outC->_L18.dig1 = kcg_lit_int64(0);
  outC->_L18.dig2 = kcg_lit_int64(0);
  outC->_L18.dig3 = kcg_lit_int64(0);
  outC->_L17 = M_AXLELOADCAT_A;
  outC->_L16.number = kcg_lit_int64(0);
  outC->_L16.dig1 = kcg_lit_int64(0);
  outC->_L16.dig2 = kcg_lit_int64(0);
  outC->_L16.dig3 = kcg_lit_int64(0);
  outC->_L15.number = kcg_lit_int64(0);
  outC->_L15.dig1 = kcg_lit_int64(0);
  outC->_L15.dig2 = kcg_lit_int64(0);
  outC->_L15.dig3 = kcg_lit_int64(0);
  outC->_L14.number = kcg_lit_int64(0);
  outC->_L14.dig1 = kcg_lit_int64(0);
  outC->_L14.dig2 = kcg_lit_int64(0);
  outC->_L14.dig3 = kcg_lit_int64(0);
  outC->_L14.dig4 = kcg_lit_int64(0);
  outC->_L13.number = kcg_lit_int64(0);
  outC->_L13.dig1 = kcg_lit_int64(0);
  outC->_L13.dig2 = kcg_lit_int64(0);
  outC->_L13.dig3 = kcg_lit_int64(0);
  outC->_L13.dig4 = kcg_lit_int64(0);
  outC->_L13.dig5 = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int64(0);
  outC->_L11.trainID.number = kcg_lit_int64(0);
  outC->_L11.trainID.dig1 = kcg_lit_int64(0);
  outC->_L11.trainID.dig2 = kcg_lit_int64(0);
  outC->_L11.trainID.dig3 = kcg_lit_int64(0);
  outC->_L11.trainID.dig4 = kcg_lit_int64(0);
  outC->_L11.trainID.dig5 = kcg_lit_int64(0);
  outC->_L11.trainLength.number = kcg_lit_int64(0);
  outC->_L11.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L11.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L11.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L11.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L11.brakeModel.number = kcg_lit_int64(0);
  outC->_L11.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L11.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L11.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L11.vmax.number = kcg_lit_int64(0);
  outC->_L11.vmax.dig1 = kcg_lit_int64(0);
  outC->_L11.vmax.dig2 = kcg_lit_int64(0);
  outC->_L11.vmax.dig3 = kcg_lit_int64(0);
  outC->_L11.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L11.airTightSystem.number = kcg_lit_int64(0);
  outC->_L11.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L11.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L11.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L11.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L11.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L11.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L11.mLoadingGauge.dig3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.valid = kcg_true;
  outC->dmi_evc_coded_train_data_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainID.number = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainID.dig1 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainID.dig2 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainID.dig3 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainID.dig4 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainID.dig5 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainLength.number = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainLength.dig1 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainLength.dig2 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainLength.dig3 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.trainLength.dig4 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.brakeModel.number = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.brakeModel.dig1 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.brakeModel.dig2 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.brakeModel.dig3 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.vmax.number = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.vmax.dig1 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.vmax.dig2 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.vmax.dig3 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.mAxleLoad = M_AXLELOADCAT_A;
  outC->dmi_evc_coded_train_data_ct.airTightSystem.number = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.mLoadingGauge.number = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->dmi_evc_coded_train_data_ct.mLoadingGauge.dig3 = kcg_lit_int64(0);
  /* _L12=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L13=(DATA::Variables::CAST_int_to_DMI_train_id#1)/ */
  CAST_int_to_DMI_train_id_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_train_id_1);
  /* _L14=(DATA::Variables::CAST_int_to_DMI_train_length#1)/ */
  CAST_int_to_DMI_train_length_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_train_length_1);
  /* _L15=(DATA::Variables::CAST_int_to_DMI_brakeModel_id#1)/ */
  CAST_int_to_DMI_brakeModel_id_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_brakeModel_id_1);
  /* _L16=(DATA::Variables::CAST_int_to_DMI_vMax_id#1)/ */
  CAST_int_to_DMI_vMax_id_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_vMax_id_1);
  /* _L17=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  /* _L18=(DATA::Variables::CAST_int_to_DMI_airtightSystem#1)/ */
  CAST_int_to_DMI_airtightSystem_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_airtightSystem_1);
  /* _L19=(DATA::Variables::CAST_int_to_DMI_loadingGauge#1)/ */
  CAST_int_to_DMI_loadingGauge_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_loadingGauge_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_EVC_Coded_Train_Data1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L12=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L13=(DATA::Variables::CAST_int_to_DMI_train_id#1)/ */
  CAST_int_to_DMI_train_id_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_train_id_1);
  /* _L14=(DATA::Variables::CAST_int_to_DMI_train_length#1)/ */
  CAST_int_to_DMI_train_length_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_train_length_1);
  /* _L15=(DATA::Variables::CAST_int_to_DMI_brakeModel_id#1)/ */
  CAST_int_to_DMI_brakeModel_id_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_brakeModel_id_1);
  /* _L16=(DATA::Variables::CAST_int_to_DMI_vMax_id#1)/ */
  CAST_int_to_DMI_vMax_id_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_vMax_id_1);
  /* _L17=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  /* _L18=(DATA::Variables::CAST_int_to_DMI_airtightSystem#1)/ */
  CAST_int_to_DMI_airtightSystem_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_airtightSystem_1);
  /* _L19=(DATA::Variables::CAST_int_to_DMI_loadingGauge#1)/ */
  CAST_int_to_DMI_loadingGauge_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_loadingGauge_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

