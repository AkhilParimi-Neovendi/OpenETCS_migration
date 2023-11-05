/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Level_Data1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data1/ */
void CAST_int_to_DMI_EVC_Level_Data1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_level_data_int/ */
  DMI_EVC_Level_Data_int_array_T_DATA *dmi_evc_level_data_int,
  outC_CAST_int_to_DMI_EVC_Level_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &outC->_L11,
    dmi_evc_level_data_int);
  outC->_L77 = outC->_L11[0];
  outC->_L76 = outC->_L11[1];
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L77, &outC->Context_Int_to_Bool_1);
  outC->_L6 = outC->Context_Int_to_Bool_1.bool_out;
  kcg_copy_array_int32_65(&outC->_L5, (array_int32_65 *) &outC->_L11[2]);
  /* _L7=(DATA::Variables::CAST_int_to_DMI_LevelList#1)/ */
  CAST_int_to_DMI_LevelList_DATA_Variables(
    &outC->_L5,
    &outC->Context_CAST_int_to_DMI_LevelList_1);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
    &outC->_L7,
    &outC->Context_CAST_int_to_DMI_LevelList_1.dmi_LevelList_ct);
  outC->_L2.valid = outC->_L6;
  outC->_L2.system_clock = outC->_L76;
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L2.levelList, &outC->_L7);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_evc_level_data_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_EVC_Level_Data1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Level_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L77 = kcg_lit_int32(0);
  outC->_L76 = kcg_lit_int32(0);
  for (idx = 0; idx < 67; idx++) {
    outC->_L11[idx] = kcg_lit_int32(0);
  }
  outC->_L7.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L7.levelList[idx1].level = M_LEVEL_Level_0;
    outC->_L7.levelList[idx1].nid_stm = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_true;
  for (idx2 = 0; idx2 < 65; idx2++) {
    outC->_L5[idx2] = kcg_lit_int32(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.system_clock = kcg_lit_int32(0);
  outC->_L2.levelList.number = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L2.levelList.levelList[idx3].level = M_LEVEL_Level_0;
    outC->_L2.levelList.levelList[idx3].nid_stm = kcg_lit_int32(0);
  }
  outC->dmi_evc_level_data_ct.valid = kcg_true;
  outC->dmi_evc_level_data_ct.system_clock = kcg_lit_int32(0);
  outC->dmi_evc_level_data_ct.levelList.number = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->dmi_evc_level_data_ct.levelList.levelList[idx4].level = M_LEVEL_Level_0;
    outC->dmi_evc_level_data_ct.levelList.levelList[idx4].nid_stm =
      kcg_lit_int32(0);
  }
  /* _L7=(DATA::Variables::CAST_int_to_DMI_LevelList#1)/ */
  CAST_int_to_DMI_LevelList_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_LevelList_1);
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_EVC_Level_Data1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Level_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L7=(DATA::Variables::CAST_int_to_DMI_LevelList#1)/ */
  CAST_int_to_DMI_LevelList_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_LevelList_1);
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_EVC_Level_Data1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

