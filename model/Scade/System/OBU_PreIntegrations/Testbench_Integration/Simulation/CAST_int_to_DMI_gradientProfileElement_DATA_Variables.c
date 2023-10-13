/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfileElement/ */
void CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
  /* valid/ */
  kcg_int64 valid,
  /* begin_section/ */
  kcg_int64 begin_section,
  /* end_section/ */
  kcg_int64 end_section,
  /* gradiant/ */
  kcg_int64 gradiant,
  outC_CAST_int_to_DMI_gradientProfileElement_DATA_Variables *outC)
{
  outC->_L16 = gradiant;
  outC->_L15 = end_section;
  outC->_L14 = begin_section;
  outC->_L13 = valid;
  /* _L12=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L13, &outC->Context_Int_to_Bool_1);
  outC->_L12 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L11.valid = outC->_L12;
  outC->_L11.begin_section = outC->_L14;
  outC->_L11.end_section = outC->_L15;
  outC->_L11.gradient = outC->_L16;
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    &outC->dmi_gradientProfileElemen,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_gradientProfileElement_init_DATA_Variables(
  outC_CAST_int_to_DMI_gradientProfileElement_DATA_Variables *outC)
{
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.begin_section = kcg_lit_int64(0);
  outC->_L11.end_section = kcg_lit_int64(0);
  outC->_L11.gradient = kcg_lit_int64(0);
  outC->dmi_gradientProfileElemen.valid = kcg_true;
  outC->dmi_gradientProfileElemen.begin_section = kcg_lit_int64(0);
  outC->dmi_gradientProfileElemen.end_section = kcg_lit_int64(0);
  outC->dmi_gradientProfileElemen.gradient = kcg_lit_int64(0);
  /* _L12=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_gradientProfileElement_reset_DATA_Variables(
  outC_CAST_int_to_DMI_gradientProfileElement_DATA_Variables *outC)
{
  /* _L12=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_gradientProfileElement_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

