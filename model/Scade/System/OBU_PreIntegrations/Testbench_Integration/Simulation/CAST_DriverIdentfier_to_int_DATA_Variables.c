/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DriverIdentfier_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DriverIdentfier_to_int/ */
void CAST_DriverIdentfier_to_int_DATA_Variables(
  /* driverIdentfier_string/ */
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string,
  outC_CAST_DriverIdentfier_to_int_DATA_Variables *outC)
{
  static kcg_size idx;

  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L8,
    driverIdentfier_string);
  /* _L10= */
  for (idx = 0; idx < 9; idx++) {
    outC->_L10[idx] = /* _L10=(Utilities::Char_to_Int#1)/ */
      Char_to_Int_Utilities(outC->_L8[idx]);
  }
  kcg_copy_DriverIdentifier_INT_T_DATA(
    &outC->driverIdentfier_int_array,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DriverIdentfier_to_int_init_DATA_Variables(
  outC_CAST_DriverIdentfier_to_int_DATA_Variables *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 9; idx++) {
    outC->_L10[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L8[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->driverIdentfier_int_array[idx2] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DriverIdentfier_to_int_reset_DATA_Variables(
  outC_CAST_DriverIdentfier_to_int_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DriverIdentfier_to_int_DATA_Variables.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

