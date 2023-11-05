/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Level_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Level_Data/ */
void C_int_to_DMI_Level_Data_DATA_Packets_Bothways(
  /* dmi_level_data_int/ */
  DMI_Level_Data_int_array_T_DATA *dmi_level_data_int,
  outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Level_Data_int_array_T_DATA(&outC->_L8, dmi_level_data_int);
  outC->_L2 = outC->_L8[2];
  outC->_L10 = outC->_L8[3];
  /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
  CAST_int_to_DMI_level_DATA_Variables(
    outC->_L2,
    outC->_L10,
    &outC->Context_CAST_int_to_DMI_level_1);
  kcg_copy_DMI_level_T_DMI_Types_Pkg(
    &outC->_L12,
    &outC->Context_CAST_int_to_DMI_level_1.dmi_level_ct);
  outC->_L4 = outC->_L8[0];
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L4, &outC->Context_Int_to_Bool_1);
  outC->_L9 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L3 = outC->_L8[1];
  outC->_L5.valid = outC->_L9;
  outC->_L5.systemTime = outC->_L3;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L5.level, &outC->_L12);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_level_data_ct,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Level_Data_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L12.level = M_LEVEL_Level_0;
  outC->_L12.nid_stm = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    outC->_L8[idx] = kcg_lit_int32(0);
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.systemTime = kcg_lit_int32(0);
  outC->_L5.level.level = M_LEVEL_Level_0;
  outC->_L5.level.nid_stm = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->dmi_level_data_ct.valid = kcg_true;
  outC->dmi_level_data_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_level_data_ct.level.level = M_LEVEL_Level_0;
  outC->dmi_level_data_ct.level.nid_stm = kcg_lit_int32(0);
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
  CAST_int_to_DMI_level_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_level_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Level_Data_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC)
{
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
  CAST_int_to_DMI_level_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_level_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Level_Data_DATA_Packets_Bothways.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

