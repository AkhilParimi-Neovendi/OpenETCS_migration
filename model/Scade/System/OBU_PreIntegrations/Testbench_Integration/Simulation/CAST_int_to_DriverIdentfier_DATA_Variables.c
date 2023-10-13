/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DriverIdentfier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DriverIdentfier/ */
void CAST_int_to_DriverIdentfier_DATA_Variables(
  /* driverIdentfier_int_array/ */
  DriverIdentifier_INT_T_DATA *driverIdentfier_int_array,
  outC_CAST_int_to_DriverIdentfier_DATA_Variables *outC)
{
  static kcg_size idx;

  kcg_copy_DriverIdentifier_INT_T_DATA(&outC->_L10, driverIdentfier_int_array);
  /* _L1= */
  for (idx = 0; idx < 9; idx++) {
    outC->_L1[idx] = /* _L1=(Utilities::Int_to_Char#1)/ */
      Int_to_Char_Utilities(outC->_L10[idx]);
  }
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &outC->driverIdentfier_string,
    &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DriverIdentfier_init_DATA_Variables(
  outC_CAST_int_to_DriverIdentfier_DATA_Variables *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 9; idx++) {
    outC->_L10[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L1[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->driverIdentfier_string[idx2] = ' ';
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DriverIdentfier_reset_DATA_Variables(
  outC_CAST_int_to_DriverIdentfier_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DriverIdentfier_DATA_Variables.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

