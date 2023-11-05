/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data/ */
void Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
  /* dmi_adhesion_factor_data_int/ */
  DMI_Adhesion_Factor_Data_int_array_T_DATA *dmi_adhesion_factor_data_int,
  outC_Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways *outC)
{
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg op_call;

  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &outC->_L8,
    dmi_adhesion_factor_data_int);
  outC->_L12 = outC->_L8[0];
  outC->_L13 = kcg_lit_int32(1);
  outC->_L14 = outC->_L13 == outC->_L12;
  outC->every = outC->_L14;
  if (outC->every) {
    /* _L11=(DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data#1)/ */
    C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
      &outC->_L8,
      &outC->Context_C_int_to_DMI_Adhesion_Factor_Data_1);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Adhesion_Factor_Data_1.dmi_adhesion_factor_data_ct);
  }
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L15,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cDMI_Adhesion_Factor_Data_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->_L11,
      &op_call);
  }
  else {
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->_L11,
      &outC->_L15);
  }
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_adhesion_factor_data_ct,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Adhesion_Factor_Data_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L15.valid = kcg_true;
  outC->_L15.systemTime = kcg_lit_int32(0);
  outC->_L15.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.systemTime = kcg_lit_int32(0);
  outC->_L11.adhesionFactor = M_ADHESION_Slippery_rail;
  for (idx = 0; idx < 3; idx++) {
    outC->_L8[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_adhesion_factor_data_ct.valid = kcg_true;
  outC->dmi_adhesion_factor_data_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_adhesion_factor_data_ct.adhesionFactor = M_ADHESION_Slippery_rail;
  /* _L11=(DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data#1)/ */
  C_int_to_DMI_Adhesion_Factor_Data_init_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Adhesion_Factor_Data_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Adhesion_Factor_Data_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways *outC)
{
  /* _L11=(DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data#1)/ */
  C_int_to_DMI_Adhesion_Factor_Data_reset_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Adhesion_Factor_Data_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

