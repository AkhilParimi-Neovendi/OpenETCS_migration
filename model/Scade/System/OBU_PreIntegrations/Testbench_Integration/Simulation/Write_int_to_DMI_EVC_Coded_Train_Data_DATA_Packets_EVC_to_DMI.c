/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Coded_Train_Data/ */
void Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_coded_train_data_int/ */
  DMI_EVC_Coded_Train_Data_int_array_T_DATA *dmi_evc_coded_train_data_int,
  outC_Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    &outC->_L22,
    dmi_evc_coded_train_data_int);
  outC->_L25 = outC->_L22[0];
  outC->_L27 = kcg_lit_int64(1);
  outC->_L26 = outC->_L27 == outC->_L25;
  outC->every = outC->_L26;
  if (outC->every) {
    /* _L23=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data1#1)/ */
    CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI(
      &outC->_L22,
      &outC->Context_CAST_int_to_DMI_EVC_Coded_Train_Data1_1);
    kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_EVC_Coded_Train_Data1_1.dmi_evc_coded_train_data_ct);
  }
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L24,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L23,
      &op_call);
  }
  else {
    kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L23,
      &outC->_L24);
  }
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_evc_coded_train_data_ct,
    &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_EVC_Coded_Train_Data_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L25 = kcg_lit_int64(0);
  outC->_L26 = kcg_true;
  outC->_L27 = kcg_lit_int64(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.system_clock = kcg_lit_int64(0);
  outC->_L24.trainID.number = kcg_lit_int64(0);
  outC->_L24.trainID.dig1 = kcg_lit_int64(0);
  outC->_L24.trainID.dig2 = kcg_lit_int64(0);
  outC->_L24.trainID.dig3 = kcg_lit_int64(0);
  outC->_L24.trainID.dig4 = kcg_lit_int64(0);
  outC->_L24.trainID.dig5 = kcg_lit_int64(0);
  outC->_L24.trainLength.number = kcg_lit_int64(0);
  outC->_L24.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L24.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L24.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L24.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L24.brakeModel.number = kcg_lit_int64(0);
  outC->_L24.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L24.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L24.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L24.vmax.number = kcg_lit_int64(0);
  outC->_L24.vmax.dig1 = kcg_lit_int64(0);
  outC->_L24.vmax.dig2 = kcg_lit_int64(0);
  outC->_L24.vmax.dig3 = kcg_lit_int64(0);
  outC->_L24.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L24.airTightSystem.number = kcg_lit_int64(0);
  outC->_L24.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L24.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L24.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L24.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L24.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L24.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L24.mLoadingGauge.dig3 = kcg_lit_int64(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.system_clock = kcg_lit_int64(0);
  outC->_L23.trainID.number = kcg_lit_int64(0);
  outC->_L23.trainID.dig1 = kcg_lit_int64(0);
  outC->_L23.trainID.dig2 = kcg_lit_int64(0);
  outC->_L23.trainID.dig3 = kcg_lit_int64(0);
  outC->_L23.trainID.dig4 = kcg_lit_int64(0);
  outC->_L23.trainID.dig5 = kcg_lit_int64(0);
  outC->_L23.trainLength.number = kcg_lit_int64(0);
  outC->_L23.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L23.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L23.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L23.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L23.brakeModel.number = kcg_lit_int64(0);
  outC->_L23.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L23.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L23.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L23.vmax.number = kcg_lit_int64(0);
  outC->_L23.vmax.dig1 = kcg_lit_int64(0);
  outC->_L23.vmax.dig2 = kcg_lit_int64(0);
  outC->_L23.vmax.dig3 = kcg_lit_int64(0);
  outC->_L23.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L23.airTightSystem.number = kcg_lit_int64(0);
  outC->_L23.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L23.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L23.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L23.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L23.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L23.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L23.mLoadingGauge.dig3 = kcg_lit_int64(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L22[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
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
  /* _L23=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data1#1)/ */
  CAST_int_to_DMI_EVC_Coded_Train_Data1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_EVC_Coded_Train_Data1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_EVC_Coded_Train_Data_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L23=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data1#1)/ */
  CAST_int_to_DMI_EVC_Coded_Train_Data1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_EVC_Coded_Train_Data1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

