/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Train_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Train_Data_to_int/ */
void Write_DMI_Train_Data_to_int_DATA_Packets_Bothways(
  /* dmi_train_data_ct/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_train_data_ct,
  outC_Write_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC)
{
  static DMI_Train_Data_int_array_T_DATA op_call;

  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L22,
    dmi_train_data_ct);
  outC->_L38 = outC->_L22.valid;
  outC->every = outC->_L38;
  if (outC->every) {
    /* _L37=(DATA::Packets::Bothways::C_DMI_Train_Data_to_int#1)/ */
    C_DMI_Train_Data_to_int_DATA_Packets_Bothways(
      &outC->_L22,
      &outC->Context_C_DMI_Train_Data_to_int_1);
    kcg_copy_DMI_Train_Data_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Train_Data_to_int_1.dmi_train_data_int);
  }
  kcg_copy_DMI_Train_Data_int_array_T_DATA(
    &outC->_L39,
    (DMI_Train_Data_int_array_T_DATA *) &cDMI_Train_Data_int_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Train_Data_int_array_T_DATA(&outC->_L37, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_int_array_T_DATA(&outC->_L37, &outC->_L39);
  }
  kcg_copy_DMI_Train_Data_int_array_T_DATA(
    &outC->dmi_train_data_int,
    &outC->_L37);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Train_Data_to_int_init_DATA_Packets_Bothways(
  outC_Write_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 9; idx++) {
    outC->_L39[idx] = kcg_lit_int32(0);
  }
  outC->_L38 = kcg_true;
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L37[idx1] = kcg_lit_int32(0);
  }
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
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->dmi_train_data_int[idx2] = kcg_lit_int32(0);
  }
  /* _L37=(DATA::Packets::Bothways::C_DMI_Train_Data_to_int#1)/ */
  C_DMI_Train_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Train_Data_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Train_Data_to_int_reset_DATA_Packets_Bothways(
  outC_Write_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC)
{
  /* _L37=(DATA::Packets::Bothways::C_DMI_Train_Data_to_int#1)/ */
  C_DMI_Train_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Train_Data_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Train_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

