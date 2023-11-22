/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_TEXT_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_TEXT/ */
void CAST_int_to_DMI_TEXT_DATA_Variables(
  /* dmi_text_int_array_in/ */
  DMI_TEXT_INT_Array_T_DATA *dmi_text_int_array_in,
  outC_CAST_int_to_DMI_TEXT_DATA_Variables *outC)
{
  kcg_size idx;

  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&outC->_L2, dmi_text_int_array_in);
  /* _L1= */
  for (idx = 0; idx < 255; idx++) {
    outC->_L1[idx] = /* _L1=(Utilities::Int_to_Char#1)/ */
      Int_to_Char_Utilities(outC->_L2[idx]);
  }
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->dmi_text_string_out, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_TEXT_init_DATA_Variables(
  outC_CAST_int_to_DMI_TEXT_DATA_Variables *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  for (idx = 0; idx < 255; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L1[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->dmi_text_string_out[idx2] = ' ';
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_TEXT_reset_DATA_Variables(
  outC_CAST_int_to_DMI_TEXT_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_TEXT_DATA_Variables.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

