/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int/ */
void Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
  /* dmi_adhesion_factor_data_ct/ */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesion_factor_data_ct,
  outC_Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways *outC)
{
  static DMI_Adhesion_Factor_Data_int_array_T_DATA op_call;

  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L14,
    dmi_adhesion_factor_data_ct);
  outC->_L21 = outC->_L14.valid;
  outC->every = outC->_L21;
  if (outC->every) {
    /* _L20=(DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int#1)/ */
    C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
      &outC->_L14,
      &outC->Context_C_DMI_Adhesion_Factor_Data_to_int_1);
    kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Adhesion_Factor_Data_to_int_1.dmi_adhesion_factor_data_int);
  }
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &outC->_L22,
    (DMI_Adhesion_Factor_Data_int_array_T_DATA *)
      &cDMI_Adhesion_Factor_Data_int_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(&outC->_L20, &op_call);
  }
  else {
    kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(&outC->_L20, &outC->_L22);
  }
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &outC->dmi_adhesion_factor_data_int,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Adhesion_Factor_Data_to_int_init_DATA_Packets_Bothways(
  outC_Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 3; idx++) {
    outC->_L22[idx] = kcg_lit_int32(0);
  }
  outC->_L21 = kcg_true;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L20[idx1] = kcg_lit_int32(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->dmi_adhesion_factor_data_int[idx2] = kcg_lit_int32(0);
  }
  /* _L20=(DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int#1)/ */
  C_DMI_Adhesion_Factor_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Adhesion_Factor_Data_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Adhesion_Factor_Data_to_int_reset_DATA_Packets_Bothways(
  outC_Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways *outC)
{
  /* _L20=(DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int#1)/ */
  C_DMI_Adhesion_Factor_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Adhesion_Factor_Data_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

