/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Level_Data/ */
void Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_level_data_int/ */
  DMI_EVC_Level_Data_int_array_T_DATA *dmi_evc_level_data_int,
  outC_Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &outC->_L11,
    dmi_evc_level_data_int);
  outC->_L79 = outC->_L11[0];
  outC->_L81 = kcg_lit_int32(1);
  outC->_L80 = outC->_L81 == outC->_L79;
  outC->every = outC->_L80;
  if (outC->every) {
    /* _L78=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data1#1)/ */
    CAST_int_to_DMI_EVC_Level_Data1_DATA_Packets_EVC_to_DMI(
      &outC->_L11,
      &outC->Context_CAST_int_to_DMI_EVC_Level_Data1_1);
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_EVC_Level_Data1_1.dmi_evc_level_data_ct);
  }
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L82,
    (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L78,
      &op_call);
  }
  else {
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L78,
      &outC->_L82);
  }
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_evc_level_data_ct,
    &outC->_L78);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_EVC_Level_Data_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L82.valid = kcg_true;
  outC->_L82.system_clock = kcg_lit_int32(0);
  outC->_L82.levelList.number = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L82.levelList.levelList[idx].level = M_LEVEL_Level_0;
    outC->_L82.levelList.levelList[idx].nid_stm = kcg_lit_int32(0);
  }
  outC->_L79 = kcg_lit_int32(0);
  outC->_L80 = kcg_true;
  outC->_L81 = kcg_lit_int32(0);
  outC->_L78.valid = kcg_true;
  outC->_L78.system_clock = kcg_lit_int32(0);
  outC->_L78.levelList.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L78.levelList.levelList[idx1].level = M_LEVEL_Level_0;
    outC->_L78.levelList.levelList[idx1].nid_stm = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 67; idx2++) {
    outC->_L11[idx2] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_evc_level_data_ct.valid = kcg_true;
  outC->dmi_evc_level_data_ct.system_clock = kcg_lit_int32(0);
  outC->dmi_evc_level_data_ct.levelList.number = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->dmi_evc_level_data_ct.levelList.levelList[idx3].level = M_LEVEL_Level_0;
    outC->dmi_evc_level_data_ct.levelList.levelList[idx3].nid_stm =
      kcg_lit_int32(0);
  }
  /* _L78=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data1#1)/ */
  CAST_int_to_DMI_EVC_Level_Data1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_EVC_Level_Data1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_EVC_Level_Data_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L78=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data1#1)/ */
  CAST_int_to_DMI_EVC_Level_Data1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_EVC_Level_Data1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

