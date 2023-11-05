/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Level_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Level_Data_to_int/ */
void C_DMI_Level_Data_to_int_DATA_Packets_Bothways(
  /* dmi_level_data_ct/ */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct,
  outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L14,
    dmi_level_data_ct);
  outC->_L4 = outC->_L14.valid;
  /* _L19=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L4, &outC->Context_Bool_to_Int_1);
  outC->_L19 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L3 = outC->_L14.systemTime;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L2, &outC->_L14.level);
  /* _L11=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
  CAST_DMI_level_to_int_DATA_Variables(
    &outC->_L2,
    &outC->Context_CAST_DMI_level_to_int_1);
  outC->_L11 = outC->Context_CAST_DMI_level_to_int_1.level_int;
  outC->_L20 = outC->Context_CAST_DMI_level_to_int_1.nid_stm_int;
  outC->_L15[0] = outC->_L19;
  outC->_L15[1] = outC->_L3;
  outC->_L15[2] = outC->_L11;
  outC->_L15[3] = outC->_L20;
  kcg_copy_DMI_Level_Data_int_array_T_DATA(
    &outC->dmi_level_data_int,
    &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Level_Data_to_int_init_DATA_Packets_Bothways(
  outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L15[idx] = kcg_lit_int32(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.level.level = M_LEVEL_Level_0;
  outC->_L14.level.nid_stm = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L2.level = M_LEVEL_Level_0;
  outC->_L2.nid_stm = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->dmi_level_data_int[idx1] = kcg_lit_int32(0);
  }
  /* _L11=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
  CAST_DMI_level_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_level_to_int_1);
  /* _L19=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Level_Data_to_int_reset_DATA_Packets_Bothways(
  outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC)
{
  /* _L11=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
  CAST_DMI_level_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_level_to_int_1);
  /* _L19=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Level_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

