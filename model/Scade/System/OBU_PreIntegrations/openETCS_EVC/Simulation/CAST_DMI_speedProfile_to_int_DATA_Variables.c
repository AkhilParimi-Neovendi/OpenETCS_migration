/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_speedProfile_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_speedProfile_to_int/ */
void CAST_DMI_speedProfile_to_int_DATA_Variables(
  /* dmi_speedProfile/ */
  DMI_speedProfile_T_DMI_Types_Pkg *dmi_speedProfile,
  outC_CAST_DMI_speedProfile_to_int_DATA_Variables *outC)
{
  kcg_size idx;
  array_int32_97 tmp;
  array_int32_65 tmp1;
  array_int32_33 tmp2;

  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(&outC->_L1, dmi_speedProfile);
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &outC->_L2,
    &outC->_L1.speedProfiles);
  /* _L5= */
  for (idx = 0; idx < 32; idx++) {
    /* _L5=(DATA::Variables::CAST_DMI_speedProfileElement_to_int#1)/ */
    CAST_DMI_speedProfileElem_DATA_Variables(
      &outC->_L2[idx],
      &outC->Context_CAST_DMI_speedProfileElement_to_int_1[idx]);
    outC->_L5[idx] = outC->Context_CAST_DMI_speedProfileElement_to_int_1[idx].valid;
    outC->_L6[idx] =
      outC->Context_CAST_DMI_speedProfileElement_to_int_1[idx].loc_abs;
    outC->_L7[idx] =
      outC->Context_CAST_DMI_speedProfileElement_to_int_1[idx].loc_lrbg;
    outC->_L8[idx] = outC->Context_CAST_DMI_speedProfileElement_to_int_1[idx].mrs;
  }
  outC->_L3 = outC->_L1.profileChanged;
  /* _L4=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L3, &outC->Context_Bool_to_Int_1);
  outC->_L4 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L9[0] = outC->_L4;
  tmp2[0] = outC->_L9[0];
  kcg_copy_array_int32_32(&tmp2[1], &outC->_L5);
  kcg_copy_array_int32_33(&tmp1[0], &tmp2);
  kcg_copy_array_int32_32(&tmp1[33], &outC->_L6);
  kcg_copy_array_int32_65(&tmp[0], &tmp1);
  kcg_copy_array_int32_32(&tmp[65], &outC->_L7);
  kcg_copy_array_int32_97(&outC->_L10[0], &tmp);
  kcg_copy_array_int32_32(&outC->_L10[97], &outC->_L8);
  kcg_copy_DMI_speedProfile_int_array_T_DATA(
    &outC->dmi_speedProfile_int,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_speedProfile_to_int_init_DATA_Variables(
  outC_CAST_DMI_speedProfile_to_int_DATA_Variables *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;

  for (idx1 = 0; idx1 < 129; idx1++) {
    outC->_L10[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L9[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L5[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L6[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L7[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L8[idx6] = kcg_lit_int32(0);
  }
  outC->_L4 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L2[idx7].valid = kcg_true;
    outC->_L2[idx7].Loc_Abs = kcg_lit_int32(0);
    outC->_L2[idx7].Loc_LRBG = kcg_lit_int32(0);
    outC->_L2[idx7].MRS = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_true;
  outC->_L1.profileChanged = kcg_true;
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L1.speedProfiles[idx8].valid = kcg_true;
    outC->_L1.speedProfiles[idx8].Loc_Abs = kcg_lit_int32(0);
    outC->_L1.speedProfiles[idx8].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1.speedProfiles[idx8].MRS = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 129; idx9++) {
    outC->dmi_speedProfile_int[idx9] = kcg_lit_int32(0);
  }
  /* _L4=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  for (idx = 0; idx < 32; idx++) {
    /* _L5=(DATA::Variables::CAST_DMI_speedProfileElement_to_int#1)/ */
    CAST_DMI_speedProfileElem_init_DATA_Variables(
      &outC->Context_CAST_DMI_speedProfileElement_to_int_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_speedProfile_to_int_reset_DATA_Variables(
  outC_CAST_DMI_speedProfile_to_int_DATA_Variables *outC)
{
  kcg_size idx;

  /* _L4=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  for (idx = 0; idx < 32; idx++) {
    /* _L5=(DATA::Variables::CAST_DMI_speedProfileElement_to_int#1)/ */
    CAST_DMI_speedProfileElem_reset_DATA_Variables(
      &outC->Context_CAST_DMI_speedProfileElement_to_int_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_speedProfile_to_int_DATA_Variables.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

