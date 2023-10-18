/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Coded_Train_Data_to_int/ */
void Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_coded_train_data_ct/ */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data_ct,
  outC_Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_EVC_Coded_Train_Data_int_array_T_DATA op_call;

  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_evc_coded_train_data_ct);
  outC->_L21 = outC->_L1.valid;
  outC->every = outC->_L21;
  if (outC->every) {
    /* _L20=(DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int1#1)/ */
    CAST_DMI_EVC_Coded_Train_Data_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_EVC_Coded_Train_Data_to_int1_1);
    kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_EVC_Coded_Train_Data_to_int1_1.dmi_evc_coded_train_data_int);
  }
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    &outC->_L22,
    (DMI_EVC_Coded_Train_Data_int_array_T_DATA *)
      &cDMI_EVC_Coded_Train_Data_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(&outC->_L20, &op_call);
  }
  else {
    kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(&outC->_L20, &outC->_L22);
  }
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    &outC->dmi_evc_coded_train_data_int,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_EVC_Coded_Train_Data_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 9; idx++) {
    outC->_L22[idx] = kcg_lit_int64(0);
  }
  outC->_L21 = kcg_true;
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L20[idx1] = kcg_lit_int64(0);
  }
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
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->dmi_evc_coded_train_data_int[idx2] = kcg_lit_int64(0);
  }
  /* _L20=(DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int1#1)/ */
  CAST_DMI_EVC_Coded_Train_Data_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_EVC_Coded_Train_Data_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_EVC_Coded_Train_Data_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L20=(DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int1#1)/ */
  CAST_DMI_EVC_Coded_Train_Data_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_EVC_Coded_Train_Data_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

