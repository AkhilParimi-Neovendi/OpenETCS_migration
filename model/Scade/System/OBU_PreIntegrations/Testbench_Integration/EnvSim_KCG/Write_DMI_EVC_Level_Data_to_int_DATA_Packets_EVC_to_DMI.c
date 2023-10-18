/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Level_Data_to_int/ */
void Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_level_data_ct/ */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct,
  outC_Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_EVC_Level_Data_int_array_T_DATA op_call;

  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L8,
    dmi_evc_level_data_ct);
  outC->_L12 = outC->_L8.valid;
  outC->every = outC->_L12;
  if (outC->every) {
    /* _L10=(DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int1#1)/ */
    CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L8,
      &outC->Context_CAST_DMI_EVC_Level_Data_to_int1_1);
    kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_EVC_Level_Data_to_int1_1.dmi_evc_level_data_int);
  }
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &outC->_L11,
    (DMI_EVC_Level_Data_int_array_T_DATA *)
      &cDMI_EVC_Level_Data_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(&outC->_L10, &op_call);
  }
  else {
    kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(&outC->_L10, &outC->_L11);
  }
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &outC->dmi_evc_level_data_int,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_EVC_Level_Data_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L12 = kcg_true;
  for (idx = 0; idx < 67; idx++) {
    outC->_L11[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 67; idx1++) {
    outC->_L10[idx1] = kcg_lit_int64(0);
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.system_clock = kcg_lit_int64(0);
  outC->_L8.levelList.number = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L8.levelList.levelList[idx2].level = M_LEVEL_Level_0;
    outC->_L8.levelList.levelList[idx2].nid_stm = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  for (idx3 = 0; idx3 < 67; idx3++) {
    outC->dmi_evc_level_data_int[idx3] = kcg_lit_int64(0);
  }
  /* _L10=(DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int1#1)/ */
  CAST_DMI_EVC_Level_Data_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_EVC_Level_Data_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_EVC_Level_Data_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L10=(DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int1#1)/ */
  CAST_DMI_EVC_Level_Data_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_EVC_Level_Data_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

