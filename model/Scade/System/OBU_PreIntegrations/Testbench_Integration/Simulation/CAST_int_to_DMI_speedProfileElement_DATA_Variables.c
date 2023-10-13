/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_speedProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_speedProfileElement/ */
void CAST_int_to_DMI_speedProfileElement_DATA_Variables(
  /* valid/ */
  kcg_int64 valid,
  /* loc_abs/ */
  kcg_int64 loc_abs,
  /* loc_lrbg/ */
  kcg_int64 loc_lrbg,
  /* mrs/ */
  kcg_int64 mrs,
  outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables *outC)
{
  outC->_L11 = valid;
  /* _L15=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L11, &outC->Context_Int_to_Bool_1);
  outC->_L15 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L14 = mrs;
  outC->_L13 = loc_lrbg;
  outC->_L12 = loc_abs;
  outC->_L5.valid = outC->_L15;
  outC->_L5.Loc_Abs = outC->_L12;
  outC->_L5.Loc_LRBG = outC->_L13;
  outC->_L5.MRS = outC->_L14;
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
    &outC->dmi_speedProfileElemen,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_speedProfileElement_init_DATA_Variables(
  outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables *outC)
{
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.Loc_Abs = kcg_lit_int64(0);
  outC->_L5.Loc_LRBG = kcg_lit_int64(0);
  outC->_L5.MRS = kcg_lit_int64(0);
  outC->dmi_speedProfileElemen.valid = kcg_true;
  outC->dmi_speedProfileElemen.Loc_Abs = kcg_lit_int64(0);
  outC->dmi_speedProfileElemen.Loc_LRBG = kcg_lit_int64(0);
  outC->dmi_speedProfileElemen.MRS = kcg_lit_int64(0);
  /* _L15=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_speedProfileElement_reset_DATA_Variables(
  outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables *outC)
{
  /* _L15=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_speedProfileElement_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

