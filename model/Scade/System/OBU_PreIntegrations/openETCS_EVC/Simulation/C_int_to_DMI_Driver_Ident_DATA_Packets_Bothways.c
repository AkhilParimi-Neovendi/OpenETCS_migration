/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Ident_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier/ */
void C_int_to_DMI_Driver_Ident_DATA_Packets_Bothways(
  /* dmi_driver_identifier_int/ */
  DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  outC_C_int_to_DMI_Driver_Ident_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &outC->_L9,
    dmi_driver_identifier_int);
  kcg_copy_array_int32_9(&outC->_L21, (array_int32_9 *) &outC->_L9[2]);
  outC->_L20 = outC->_L9[1];
  outC->_L19 = outC->_L9[0];
  /* _L10=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L19, &outC->Context_Int_to_Bool_1);
  outC->_L10 = outC->Context_Int_to_Bool_1.bool_out;
  /* _L6=(DATA::Variables::CAST_int_to_DriverIdentfier#1)/ */
  CAST_int_to_DriverIdentfier_DATA_Variables(
    &outC->_L21,
    &outC->Context_CAST_int_to_DriverIdentfier_1);
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L6,
    &outC->Context_CAST_int_to_DriverIdentfier_1.driverIdentfier_string);
  outC->_L2.valid = outC->_L10;
  outC->_L2.systemTime = outC->_L20;
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L2.driverIdentifier,
    &outC->_L6);
  kcg_copy__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_driver_identifier_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Driver_Ident_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Driver_Ident_DATA_Packets_Bothways *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  for (idx = 0; idx < 9; idx++) {
    outC->_L21[idx] = kcg_lit_int32(0);
  }
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L6[idx1] = ' ';
  }
  outC->_L10 = kcg_true;
  for (idx2 = 0; idx2 < 11; idx2++) {
    outC->_L9[idx2] = kcg_lit_int32(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L2.driverIdentifier[idx3] = ' ';
  }
  outC->dmi_driver_identifier_ct.valid = kcg_true;
  outC->dmi_driver_identifier_ct.systemTime = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 9; idx4++) {
    outC->dmi_driver_identifier_ct.driverIdentifier[idx4] = ' ';
  }
  /* _L6=(DATA::Variables::CAST_int_to_DriverIdentfier#1)/ */
  CAST_int_to_DriverIdentfier_init_DATA_Variables(
    &outC->Context_CAST_int_to_DriverIdentfier_1);
  /* _L10=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Driver_Ident_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Driver_Ident_DATA_Packets_Bothways *outC)
{
  /* _L6=(DATA::Variables::CAST_int_to_DriverIdentfier#1)/ */
  CAST_int_to_DriverIdentfier_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DriverIdentfier_1);
  /* _L10=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Driver_Ident_DATA_Packets_Bothways.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

