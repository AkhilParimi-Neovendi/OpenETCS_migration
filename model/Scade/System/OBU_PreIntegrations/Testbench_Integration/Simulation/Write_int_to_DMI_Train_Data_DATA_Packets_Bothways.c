/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Train_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Train_Data/ */
void Write_int_to_DMI_Train_Data_DATA_Packets_Bothways(
  /* dmi_train_data_int/ */
  DMI_Train_Data_int_array_T_DATA *dmi_train_data_int,
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC)
{
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg op_call;

  kcg_copy_DMI_Train_Data_int_array_T_DATA(&outC->_L18, dmi_train_data_int);
  outC->_L24 = outC->_L18[0];
  outC->_L23 = kcg_lit_int32(1);
  outC->_L22 = outC->_L23 == outC->_L24;
  outC->every = outC->_L22;
  if (outC->every) {
    /* _L20=(DATA::Packets::Bothways::C_int_to_DMI_Train_Data#1)/ */
    C_int_to_DMI_Train_Data_DATA_Packets_Bothways(
      &outC->_L18,
      &outC->Context_C_int_to_DMI_Train_Data_1);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Train_Data_1.dmi_train_data_ct);
  }
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L21,
    (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
      &cDMI_Train_Data_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L20, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L20, &outC->_L21);
  }
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_train_data_ct,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Train_Data_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L22 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.systemTime = kcg_lit_int32(0);
  outC->_L21.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L21.l_train = kcg_lit_int32(0);
  outC->_L21.m_brakeperct = kcg_lit_int32(0);
  outC->_L21.v_maxTrain = kcg_lit_int32(0);
  outC->_L21.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L21.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L21.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L20.valid = kcg_true;
  outC->_L20.systemTime = kcg_lit_int32(0);
  outC->_L20.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L20.l_train = kcg_lit_int32(0);
  outC->_L20.m_brakeperct = kcg_lit_int32(0);
  outC->_L20.v_maxTrain = kcg_lit_int32(0);
  outC->_L20.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L20.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L20.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  for (idx = 0; idx < 9; idx++) {
    outC->_L18[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_train_data_ct.valid = kcg_true;
  outC->dmi_train_data_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_train_data_ct.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->dmi_train_data_ct.l_train = kcg_lit_int32(0);
  outC->dmi_train_data_ct.m_brakeperct = kcg_lit_int32(0);
  outC->dmi_train_data_ct.v_maxTrain = kcg_lit_int32(0);
  outC->dmi_train_data_ct.m_axleLoad = M_AXLELOADCAT_A;
  outC->dmi_train_data_ct.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->dmi_train_data_ct.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  /* _L20=(DATA::Packets::Bothways::C_int_to_DMI_Train_Data#1)/ */
  C_int_to_DMI_Train_Data_init_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Train_Data_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Train_Data_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC)
{
  /* _L20=(DATA::Packets::Bothways::C_int_to_DMI_Train_Data#1)/ */
  C_int_to_DMI_Train_Data_reset_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Train_Data_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Train_Data_DATA_Packets_Bothways.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

