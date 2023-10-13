/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int1/ */
void CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_level_data_ct/ */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct,
  outC_CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L8,
    dmi_evc_level_data_ct);
  outC->_L5 = outC->_L8.valid;
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L5, &outC->Context_Bool_to_Int_1);
  outC->_L6 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L4 = outC->_L8.system_clock;
  outC->_L9[0] = outC->_L6;
  outC->_L9[1] = outC->_L4;
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L3, &outC->_L8.levelList);
  /* _L7=(DATA::Variables::CAST_DMI_LevelList_to_int#1)/ */
  CAST_DMI_LevelList_to_int_DATA_Variables(
    &outC->_L3,
    &outC->Context_CAST_DMI_LevelList_to_int_1);
  kcg_copy_DMI_LevelList_int_array_T_DATA(
    &outC->_L7,
    &outC->Context_CAST_DMI_LevelList_to_int_1.dmi_LevelList_int);
  kcg_copy_array_int64_2(&outC->_L2[0], &outC->_L9);
  kcg_copy_DMI_LevelList_int_array_T_DATA(&outC->_L2[2], &outC->_L7);
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &outC->dmi_evc_level_data_int,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_EVC_Level_Data_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  for (idx = 0; idx < 2; idx++) {
    outC->_L9[idx] = kcg_lit_int64(0);
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.system_clock = kcg_lit_int64(0);
  outC->_L8.levelList.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L8.levelList.levelList[idx1].level = M_LEVEL_Level_0;
    outC->_L8.levelList.levelList[idx1].nid_stm = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 65; idx2++) {
    outC->_L7[idx2] = kcg_lit_int64(0);
  }
  outC->_L6 = kcg_lit_int64(0);
  outC->_L3.number = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L3.levelList[idx3].level = M_LEVEL_Level_0;
    outC->_L3.levelList[idx3].nid_stm = kcg_lit_int64(0);
  }
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  for (idx4 = 0; idx4 < 67; idx4++) {
    outC->_L2[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 67; idx5++) {
    outC->dmi_evc_level_data_int[idx5] = kcg_lit_int64(0);
  }
  /* _L7=(DATA::Variables::CAST_DMI_LevelList_to_int#1)/ */
  CAST_DMI_LevelList_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_LevelList_to_int_1);
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_EVC_Level_Data_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L7=(DATA::Variables::CAST_DMI_LevelList_to_int#1)/ */
  CAST_DMI_LevelList_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_LevelList_to_int_1);
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

