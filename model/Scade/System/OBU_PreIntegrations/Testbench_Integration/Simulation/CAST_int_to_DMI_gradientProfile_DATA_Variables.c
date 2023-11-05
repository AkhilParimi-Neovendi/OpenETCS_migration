/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfile_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfile/ */
void CAST_int_to_DMI_gradientProfile_DATA_Variables(
  /* dmi_gradientProfile_int/ */
  DMI_gradientProfile_int_arrayT *dmi_gradientProfile_int,
  outC_CAST_int_to_DMI_gradientProfile_DATA_Variables *outC)
{
  static kcg_size idx;

  kcg_copy_DMI_gradientProfile_int_arrayT(&outC->_L15, dmi_gradientProfile_int);
  kcg_copy_array_int32_32(&outC->_L20, (array_int32_32 *) &outC->_L15[97]);
  outC->_L14 = outC->_L15[0];
  /* _L19=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L14, &outC->Context_Int_to_Bool_1);
  outC->_L19 = outC->Context_Int_to_Bool_1.bool_out;
  kcg_copy_array_int32_32(&outC->_L18, (array_int32_32 *) &outC->_L15[65]);
  kcg_copy_array_int32_32(&outC->_L17, (array_int32_32 *) &outC->_L15[33]);
  kcg_copy_array_int32_32(&outC->_L16, (array_int32_32 *) &outC->_L15[1]);
  /* _L13= */
  for (idx = 0; idx < 32; idx++) {
    /* _L13=(DATA::Variables::CAST_int_to_DMI_gradientProfileElement#1)/ */
    CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
      outC->_L16[idx],
      outC->_L17[idx],
      outC->_L18[idx],
      outC->_L20[idx],
      &outC->Context_CAST_int_to_DMI_gradientProfileElement_1[idx]);
    kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
      &outC->_L13[idx],
      &outC->Context_CAST_int_to_DMI_gradientProfileElement_1[idx].dmi_gradientProfileElemen);
  }
  outC->_L12.profileChanged = outC->_L19;
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &outC->_L12.gradientProfiles,
    &outC->_L13);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(
    &outC->dmi_gradientProfile,
    &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_gradientProfile_init_DATA_Variables(
  outC_CAST_int_to_DMI_gradientProfile_DATA_Variables *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L20[idx1] = kcg_lit_int32(0);
  }
  outC->_L19 = kcg_true;
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L18[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L17[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L16[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 129; idx5++) {
    outC->_L15[idx5] = kcg_lit_int32(0);
  }
  outC->_L14 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L13[idx6].valid = kcg_true;
    outC->_L13[idx6].begin_section = kcg_lit_int32(0);
    outC->_L13[idx6].end_section = kcg_lit_int32(0);
    outC->_L13[idx6].gradient = kcg_lit_int32(0);
  }
  outC->_L12.profileChanged = kcg_true;
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L12.gradientProfiles[idx7].valid = kcg_true;
    outC->_L12.gradientProfiles[idx7].begin_section = kcg_lit_int32(0);
    outC->_L12.gradientProfiles[idx7].end_section = kcg_lit_int32(0);
    outC->_L12.gradientProfiles[idx7].gradient = kcg_lit_int32(0);
  }
  outC->dmi_gradientProfile.profileChanged = kcg_true;
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->dmi_gradientProfile.gradientProfiles[idx8].valid = kcg_true;
    outC->dmi_gradientProfile.gradientProfiles[idx8].begin_section =
      kcg_lit_int32(0);
    outC->dmi_gradientProfile.gradientProfiles[idx8].end_section = kcg_lit_int32(0);
    outC->dmi_gradientProfile.gradientProfiles[idx8].gradient = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L13=(DATA::Variables::CAST_int_to_DMI_gradientProfileElement#1)/ */
    CAST_int_to_DMI_gradientProfileElement_init_DATA_Variables(
      &outC->Context_CAST_int_to_DMI_gradientProfileElement_1[idx]);
  }
  /* _L19=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_gradientProfile_reset_DATA_Variables(
  outC_CAST_int_to_DMI_gradientProfile_DATA_Variables *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L13=(DATA::Variables::CAST_int_to_DMI_gradientProfileElement#1)/ */
    CAST_int_to_DMI_gradientProfileElement_reset_DATA_Variables(
      &outC->Context_CAST_int_to_DMI_gradientProfileElement_1[idx]);
  }
  /* _L19=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_gradientProfile_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

