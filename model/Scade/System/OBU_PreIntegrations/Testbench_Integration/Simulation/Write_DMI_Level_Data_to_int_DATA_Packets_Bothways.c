/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Level_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Level_Data_to_int/ */
void Write_DMI_Level_Data_to_int_DATA_Packets_Bothways(
  /* dmi_level_data_ct/ */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct,
  outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC)
{
  static DMI_Level_Data_int_array_T_DATA op_call;

  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L14,
    dmi_level_data_ct);
  outC->_L23 = outC->_L14.valid;
  outC->every = outC->_L23;
  if (outC->every) {
    /* _L21=(DATA::Packets::Bothways::C_DMI_Level_Data_to_int#1)/ */
    C_DMI_Level_Data_to_int_DATA_Packets_Bothways(
      &outC->_L14,
      &outC->Context_C_DMI_Level_Data_to_int_1);
    kcg_copy_DMI_Level_Data_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Level_Data_to_int_1.dmi_level_data_int);
  }
  kcg_copy_DMI_Level_Data_int_array_T_DATA(
    &outC->_L22,
    (DMI_Level_Data_int_array_T_DATA *) &cDMI_Level_Data_int_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Level_Data_int_array_T_DATA(&outC->_L21, &op_call);
  }
  else {
    kcg_copy_DMI_Level_Data_int_array_T_DATA(&outC->_L21, &outC->_L22);
  }
  kcg_copy_DMI_Level_Data_int_array_T_DATA(
    &outC->dmi_level_data_int,
    &outC->_L21);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Level_Data_to_int_init_DATA_Packets_Bothways(
  outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L23 = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    outC->_L22[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L21[idx1] = kcg_lit_int32(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.level.level = M_LEVEL_Level_0;
  outC->_L14.level.nid_stm = kcg_lit_int32(0);
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->dmi_level_data_int[idx2] = kcg_lit_int32(0);
  }
  /* _L21=(DATA::Packets::Bothways::C_DMI_Level_Data_to_int#1)/ */
  C_DMI_Level_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Level_Data_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Level_Data_to_int_reset_DATA_Packets_Bothways(
  outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC)
{
  /* _L21=(DATA::Packets::Bothways::C_DMI_Level_Data_to_int#1)/ */
  C_DMI_Level_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Level_Data_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Level_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

