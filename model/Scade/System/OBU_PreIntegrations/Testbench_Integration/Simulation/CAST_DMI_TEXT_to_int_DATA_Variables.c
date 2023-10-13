/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_TEXT_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_TEXT_to_int/ */
void CAST_DMI_TEXT_to_int_DATA_Variables(
  /* dmi_text_string_in/ */
  DMI_TEXT_DMI_Types_Pkg *dmi_text_string_in,
  outC_CAST_DMI_TEXT_to_int_DATA_Variables *outC)
{
  static kcg_size idx;

  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L4, dmi_text_string_in);
  /* _L6= */
  for (idx = 0; idx < 255; idx++) {
    outC->_L6[idx] = /* _L6=(Utilities::Char_to_Int#1)/ */
      Char_to_Int_Utilities(outC->_L4[idx]);
  }
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&outC->dmi_text_int_array_out, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_TEXT_to_int_init_DATA_Variables(
  outC_CAST_DMI_TEXT_to_int_DATA_Variables *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 255; idx++) {
    outC->_L6[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L4[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->dmi_text_int_array_out[idx2] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_TEXT_to_int_reset_DATA_Variables(
  outC_CAST_DMI_TEXT_to_int_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_TEXT_to_int_DATA_Variables.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

