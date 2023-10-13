/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Level_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Level_Data/ */
void Write_int_to_DMI_Level_Data_DATA_Packets_Bothways(
  /* dmi_level_data_int/ */
  DMI_Level_Data_int_array_T_DATA *dmi_level_data_int,
  outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC)
{
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg op_call;

  kcg_copy_DMI_Level_Data_int_array_T_DATA(&outC->_L8, dmi_level_data_int);
  outC->_L15 = outC->_L8[0];
  outC->_L16 = kcg_lit_int64(1);
  outC->_L17 = outC->_L16 == outC->_L15;
  outC->every = outC->_L17;
  if (outC->every) {
    /* _L13=(DATA::Packets::Bothways::C_int_to_DMI_Level_Data#1)/ */
    C_int_to_DMI_Level_Data_DATA_Packets_Bothways(
      &outC->_L8,
      &outC->Context_C_int_to_DMI_Level_Data_1);
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Level_Data_1.dmi_level_data_ct);
  }
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L14,
    (DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *)
      &cDMI_Level_Data_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L13, &op_call);
  }
  else {
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L13, &outC->_L14);
  }
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_level_data_ct,
    &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Level_Data_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L17 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int64(0);
  outC->_L14.level.level = M_LEVEL_Level_0;
  outC->_L14.level.nid_stm = kcg_lit_int64(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTime = kcg_lit_int64(0);
  outC->_L13.level.level = M_LEVEL_Level_0;
  outC->_L13.level.nid_stm = kcg_lit_int64(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L8[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_level_data_ct.valid = kcg_true;
  outC->dmi_level_data_ct.systemTime = kcg_lit_int64(0);
  outC->dmi_level_data_ct.level.level = M_LEVEL_Level_0;
  outC->dmi_level_data_ct.level.nid_stm = kcg_lit_int64(0);
  /* _L13=(DATA::Packets::Bothways::C_int_to_DMI_Level_Data#1)/ */
  C_int_to_DMI_Level_Data_init_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Level_Data_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Level_Data_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC)
{
  /* _L13=(DATA::Packets::Bothways::C_int_to_DMI_Level_Data#1)/ */
  C_int_to_DMI_Level_Data_reset_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Level_Data_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Level_Data_DATA_Packets_Bothways.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

