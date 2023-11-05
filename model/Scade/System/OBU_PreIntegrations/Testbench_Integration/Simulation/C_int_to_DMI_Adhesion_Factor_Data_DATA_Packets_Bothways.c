/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data/ */
void C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
  /* dmi_adhesion_factor_data_int/ */
  DMI_Adhesion_Factor_Data_int_array_T_DATA *dmi_adhesion_factor_data_int,
  outC_C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &outC->_L8,
    dmi_adhesion_factor_data_int);
  outC->_L5 = outC->_L8[0];
  /* _L10=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L5, &outC->Context_Int_to_Bool_1);
  outC->_L10 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L4 = outC->_L8[1];
  outC->_L3 = outC->_L8[2];
  /* _L6=(TM_conversions::CAST_Int_to_M_ADHESION#1)/ */
  CAST_Int_to_M_ADHESION_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_M_ADHESION_1);
  outC->_L6 = outC->Context_CAST_Int_to_M_ADHESION_1.m_adhesion;
  outC->_L2.valid = outC->_L10;
  outC->_L2.systemTime = outC->_L4;
  outC->_L2.adhesionFactor = outC->_L6;
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_adhesion_factor_data_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Adhesion_Factor_Data_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L10 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L8[idx] = kcg_lit_int32(0);
  }
  outC->_L6 = M_ADHESION_Slippery_rail;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  outC->_L2.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->dmi_adhesion_factor_data_ct.valid = kcg_true;
  outC->dmi_adhesion_factor_data_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_adhesion_factor_data_ct.adhesionFactor = M_ADHESION_Slippery_rail;
  /* _L6=(TM_conversions::CAST_Int_to_M_ADHESION#1)/ */
  CAST_Int_to_M_ADHESION_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_ADHESION_1);
  /* _L10=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Adhesion_Factor_Data_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways *outC)
{
  /* _L6=(TM_conversions::CAST_Int_to_M_ADHESION#1)/ */
  CAST_Int_to_M_ADHESION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_ADHESION_1);
  /* _L10=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

