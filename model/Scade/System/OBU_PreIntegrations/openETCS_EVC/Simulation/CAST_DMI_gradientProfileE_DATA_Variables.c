/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_gradientProfileE_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_gradientProfileElement_to_int/ */
void CAST_DMI_gradientProfileE_DATA_Variables(
  /* dmi_gradientProfileElement/ */
  DMI_gradientProfileElement_T_DMI_Types_Pkg *dmi_gradientProfileElement,
  outC_CAST_DMI_gradientProfileE_DATA_Variables *outC)
{
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    &outC->_L1,
    dmi_gradientProfileElement);
  outC->_L2 = outC->_L1.gradient;
  outC->gradiant = outC->_L2;
  outC->_L3 = outC->_L1.end_section;
  outC->end_section = outC->_L3;
  outC->_L4 = outC->_L1.begin_section;
  outC->start_section = outC->_L4;
  outC->_L5 = outC->_L1.valid;
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L5, &outC->Context_Bool_to_Int_1);
  outC->_L6 = outC->Context_Bool_to_Int_1.int_out;
  outC->valid = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_gradientProfileE_init_DATA_Variables(
  outC_CAST_DMI_gradientProfileE_DATA_Variables *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.begin_section = kcg_lit_int32(0);
  outC->_L1.end_section = kcg_lit_int32(0);
  outC->_L1.gradient = kcg_lit_int32(0);
  outC->gradiant = kcg_lit_int32(0);
  outC->end_section = kcg_lit_int32(0);
  outC->start_section = kcg_lit_int32(0);
  outC->valid = kcg_lit_int32(0);
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_gradientProfileE_reset_DATA_Variables(
  outC_CAST_DMI_gradientProfileE_DATA_Variables *outC)
{
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_gradientProfileE_DATA_Variables.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

