/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int/ */
void C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
  /* dmi_driver_identifier_ct/ */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  outC_C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L13,
    dmi_driver_identifier_ct);
  outC->_L5 = outC->_L13.valid;
  /* _L20=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L5, &outC->Context_Bool_to_Int_1);
  outC->_L20 = outC->Context_Bool_to_Int_1.int_out;
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L3,
    &outC->_L13.driverIdentifier);
  /* _L15=(DATA::Variables::CAST_DriverIdentfier_to_int#1)/ */
  CAST_DriverIdentfier_to_int_DATA_Variables(
    &outC->_L3,
    &outC->Context_CAST_DriverIdentfier_to_int_1);
  kcg_copy_DriverIdentifier_INT_T_DATA(
    &outC->_L15,
    &outC->Context_CAST_DriverIdentfier_to_int_1.driverIdentfier_int_array);
  outC->_L4 = outC->_L13.systemTime;
  outC->_L2[0] = outC->_L20;
  outC->_L2[1] = outC->_L4;
  kcg_copy_array_int64_2(&outC->_L16[0], &outC->_L2);
  kcg_copy_DriverIdentifier_INT_T_DATA(&outC->_L16[2], &outC->_L15);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &outC->dmi_driver_identifier_int,
    &outC->_L16);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Driver_Identifier_to_int_init_DATA_Packets_Bothways(
  outC_C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L20 = kcg_lit_int64(0);
  for (idx = 0; idx < 11; idx++) {
    outC->_L16[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L15[idx1] = kcg_lit_int64(0);
  }
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTime = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L13.driverIdentifier[idx2] = ' ';
  }
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L3[idx3] = ' ';
  }
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  for (idx4 = 0; idx4 < 2; idx4++) {
    outC->_L2[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 11; idx5++) {
    outC->dmi_driver_identifier_int[idx5] = kcg_lit_int64(0);
  }
  /* _L15=(DATA::Variables::CAST_DriverIdentfier_to_int#1)/ */
  CAST_DriverIdentfier_to_int_init_DATA_Variables(
    &outC->Context_CAST_DriverIdentfier_to_int_1);
  /* _L20=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Driver_Identifier_to_int_reset_DATA_Packets_Bothways(
  outC_C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC)
{
  /* _L15=(DATA::Variables::CAST_DriverIdentfier_to_int#1)/ */
  CAST_DriverIdentfier_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DriverIdentfier_to_int_1);
  /* _L20=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

