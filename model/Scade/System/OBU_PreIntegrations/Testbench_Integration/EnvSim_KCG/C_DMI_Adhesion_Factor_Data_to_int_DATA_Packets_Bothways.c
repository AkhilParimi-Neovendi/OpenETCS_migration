/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int/ */
void C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
  /* dmi_adhesion_factor_data_ct/ */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesion_factor_data_ct,
  outC_C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L14,
    dmi_adhesion_factor_data_ct);
  outC->_L5 = outC->_L14.valid;
  /* _L19=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L5, &outC->Context_Bool_to_Int_1);
  outC->_L19 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L4 = outC->_L14.systemTime;
  outC->_L3 = outC->_L14.adhesionFactor;
  /* _L6=(TM_conversions::CAST_M_ADHESION_to_int#1)/ */
  CAST_M_ADHESION_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_M_ADHESION_to_int_1);
  outC->_L6 = outC->Context_CAST_M_ADHESION_to_int_1.m_adhesion_int;
  outC->_L2[0] = outC->_L19;
  outC->_L2[1] = outC->_L4;
  outC->_L2[2] = outC->_L6;
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &outC->dmi_adhesion_factor_data_int,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Adhesion_Factor_Data_to_int_init_DATA_Packets_Bothways(
  outC_C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L19 = kcg_lit_int64(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int64(0);
  outC->_L14.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L3 = M_ADHESION_Slippery_rail;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->dmi_adhesion_factor_data_int[idx1] = kcg_lit_int64(0);
  }
  /* _L6=(TM_conversions::CAST_M_ADHESION_to_int#1)/ */
  CAST_M_ADHESION_to_int_init_TM_conversions(
    &outC->Context_CAST_M_ADHESION_to_int_1);
  /* _L19=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Adhesion_Factor_Data_to_int_reset_DATA_Packets_Bothways(
  outC_C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways *outC)
{
  /* _L6=(TM_conversions::CAST_M_ADHESION_to_int#1)/ */
  CAST_M_ADHESION_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_ADHESION_to_int_1);
  /* _L19=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

