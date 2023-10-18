/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Coded_Train_Data_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int1/ */
void CAST_DMI_EVC_Coded_Train_Data_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_coded_train_data_ct/ */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data_ct,
  outC_CAST_DMI_EVC_Coded_Train_Data_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_evc_coded_train_data_ct);
  outC->_L10 = outC->_L1.valid;
  /* _L12=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L10, &outC->Context_Bool_to_Int_1);
  outC->_L12 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L9 = outC->_L1.system_clock;
  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(&outC->_L8, &outC->_L1.trainID);
  /* _L13=(DATA::Variables::CAST_DMI_train_id_to_int#1)/ */
  CAST_DMI_train_id_to_int_DATA_Variables(
    &outC->_L8,
    &outC->Context_CAST_DMI_train_id_to_int_1);
  outC->_L13 = outC->Context_CAST_DMI_train_id_to_int_1.dmi_train_id_int;
  kcg_copy_DMI_train_length_T_DMI_Types_Pkg(&outC->_L7, &outC->_L1.trainLength);
  /* _L14=(DATA::Variables::CAST_DMI_train_length_to_int#1)/ */
  CAST_DMI_train_length_to_int_DATA_Variables(
    &outC->_L7,
    &outC->Context_CAST_DMI_train_length_to_int_1);
  outC->_L14 = outC->Context_CAST_DMI_train_length_to_int_1.dmi_train_length_int;
  kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg(&outC->_L6, &outC->_L1.brakeModel);
  /* _L15=(DATA::Variables::CAST_DMI_brakeModel_id_to_int#1)/ */
  CAST_DMI_brakeModel_id_to_int_DATA_Variables(
    &outC->_L6,
    &outC->Context_CAST_DMI_brakeModel_id_to_int_1);
  outC->_L15 =
    outC->Context_CAST_DMI_brakeModel_id_to_int_1.dmi_brakeModel_id_int;
  kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg(&outC->_L5, &outC->_L1.vmax);
  /* _L16=(DATA::Variables::CAST_DMI_vMax_id_to_int#1)/ */
  CAST_DMI_vMax_id_to_int_DATA_Variables(
    &outC->_L5,
    &outC->Context_CAST_DMI_vMax_id_to_int_1);
  outC->_L16 = outC->Context_CAST_DMI_vMax_id_to_int_1.dmi_vmax_id_int;
  outC->_L4 = outC->_L1.mAxleLoad;
  /* _L17=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  outC->_L17 = outC->Context_CAST_M_AXLELOADCAT_to_int_1.m_axleloadcat_int;
  kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg(
    &outC->_L3,
    &outC->_L1.airTightSystem);
  /* _L18=(DATA::Variables::CAST_DMI_airtightSystem_to_int#1)/ */
  CAST_DMI_airtightSystem_to_int_DATA_Variables(
    &outC->_L3,
    &outC->Context_CAST_DMI_airtightSystem_to_int_1);
  outC->_L18 =
    outC->Context_CAST_DMI_airtightSystem_to_int_1.dmi_airtightSystem_int;
  kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg(&outC->_L2, &outC->_L1.mLoadingGauge);
  /* _L19=(DATA::Variables::CAST_DMI_loadingGauge_to_int#1)/ */
  CAST_DMI_loadingGauge_to_int_DATA_Variables(
    &outC->_L2,
    &outC->Context_CAST_DMI_loadingGauge_to_int_1);
  outC->_L19 = outC->Context_CAST_DMI_loadingGauge_to_int_1.dmi_loadingGauge_int;
  outC->_L11[0] = outC->_L12;
  outC->_L11[1] = outC->_L9;
  outC->_L11[2] = outC->_L13;
  outC->_L11[3] = outC->_L14;
  outC->_L11[4] = outC->_L15;
  outC->_L11[5] = outC->_L16;
  outC->_L11[6] = outC->_L17;
  outC->_L11[7] = outC->_L18;
  outC->_L11[8] = outC->_L19;
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    &outC->dmi_evc_coded_train_data_int,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_EVC_Coded_Train_Data_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Coded_Train_Data_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L11[idx] = kcg_lit_int64(0);
  }
  outC->_L2.number = kcg_lit_int64(0);
  outC->_L2.dig1 = kcg_lit_int64(0);
  outC->_L2.dig2 = kcg_lit_int64(0);
  outC->_L2.dig3 = kcg_lit_int64(0);
  outC->_L3.number = kcg_lit_int64(0);
  outC->_L3.dig1 = kcg_lit_int64(0);
  outC->_L3.dig2 = kcg_lit_int64(0);
  outC->_L3.dig3 = kcg_lit_int64(0);
  outC->_L4 = M_AXLELOADCAT_A;
  outC->_L5.number = kcg_lit_int64(0);
  outC->_L5.dig1 = kcg_lit_int64(0);
  outC->_L5.dig2 = kcg_lit_int64(0);
  outC->_L5.dig3 = kcg_lit_int64(0);
  outC->_L6.number = kcg_lit_int64(0);
  outC->_L6.dig1 = kcg_lit_int64(0);
  outC->_L6.dig2 = kcg_lit_int64(0);
  outC->_L6.dig3 = kcg_lit_int64(0);
  outC->_L7.number = kcg_lit_int64(0);
  outC->_L7.dig1 = kcg_lit_int64(0);
  outC->_L7.dig2 = kcg_lit_int64(0);
  outC->_L7.dig3 = kcg_lit_int64(0);
  outC->_L7.dig4 = kcg_lit_int64(0);
  outC->_L8.number = kcg_lit_int64(0);
  outC->_L8.dig1 = kcg_lit_int64(0);
  outC->_L8.dig2 = kcg_lit_int64(0);
  outC->_L8.dig3 = kcg_lit_int64(0);
  outC->_L8.dig4 = kcg_lit_int64(0);
  outC->_L8.dig5 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.trainID.number = kcg_lit_int64(0);
  outC->_L1.trainID.dig1 = kcg_lit_int64(0);
  outC->_L1.trainID.dig2 = kcg_lit_int64(0);
  outC->_L1.trainID.dig3 = kcg_lit_int64(0);
  outC->_L1.trainID.dig4 = kcg_lit_int64(0);
  outC->_L1.trainID.dig5 = kcg_lit_int64(0);
  outC->_L1.trainLength.number = kcg_lit_int64(0);
  outC->_L1.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L1.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L1.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L1.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L1.brakeModel.number = kcg_lit_int64(0);
  outC->_L1.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L1.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L1.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L1.vmax.number = kcg_lit_int64(0);
  outC->_L1.vmax.dig1 = kcg_lit_int64(0);
  outC->_L1.vmax.dig2 = kcg_lit_int64(0);
  outC->_L1.vmax.dig3 = kcg_lit_int64(0);
  outC->_L1.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L1.airTightSystem.number = kcg_lit_int64(0);
  outC->_L1.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L1.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L1.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L1.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L1.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L1.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L1.mLoadingGauge.dig3 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->dmi_evc_coded_train_data_int[idx1] = kcg_lit_int64(0);
  }
  /* _L19=(DATA::Variables::CAST_DMI_loadingGauge_to_int#1)/ */
  CAST_DMI_loadingGauge_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_loadingGauge_to_int_1);
  /* _L18=(DATA::Variables::CAST_DMI_airtightSystem_to_int#1)/ */
  CAST_DMI_airtightSystem_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_airtightSystem_to_int_1);
  /* _L17=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_init_TM_conversions(
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  /* _L16=(DATA::Variables::CAST_DMI_vMax_id_to_int#1)/ */
  CAST_DMI_vMax_id_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_vMax_id_to_int_1);
  /* _L15=(DATA::Variables::CAST_DMI_brakeModel_id_to_int#1)/ */
  CAST_DMI_brakeModel_id_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_brakeModel_id_to_int_1);
  /* _L14=(DATA::Variables::CAST_DMI_train_length_to_int#1)/ */
  CAST_DMI_train_length_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_train_length_to_int_1);
  /* _L13=(DATA::Variables::CAST_DMI_train_id_to_int#1)/ */
  CAST_DMI_train_id_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_train_id_to_int_1);
  /* _L12=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_EVC_Coded_Train_Data_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Coded_Train_Data_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L19=(DATA::Variables::CAST_DMI_loadingGauge_to_int#1)/ */
  CAST_DMI_loadingGauge_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_loadingGauge_to_int_1);
  /* _L18=(DATA::Variables::CAST_DMI_airtightSystem_to_int#1)/ */
  CAST_DMI_airtightSystem_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_airtightSystem_to_int_1);
  /* _L17=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  /* _L16=(DATA::Variables::CAST_DMI_vMax_id_to_int#1)/ */
  CAST_DMI_vMax_id_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_vMax_id_to_int_1);
  /* _L15=(DATA::Variables::CAST_DMI_brakeModel_id_to_int#1)/ */
  CAST_DMI_brakeModel_id_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_brakeModel_id_to_int_1);
  /* _L14=(DATA::Variables::CAST_DMI_train_length_to_int#1)/ */
  CAST_DMI_train_length_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_train_length_to_int_1);
  /* _L13=(DATA::Variables::CAST_DMI_train_id_to_int#1)/ */
  CAST_DMI_train_id_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_train_id_to_int_1);
  /* _L12=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_EVC_Coded_Train_Data_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

