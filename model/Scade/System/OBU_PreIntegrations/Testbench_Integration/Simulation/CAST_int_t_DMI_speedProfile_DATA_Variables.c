/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_t_DMI_speedProfile_DATA_Variables.h"

/* DATA::Variables::CAST_int_t_DMI_speedProfile/ */
void CAST_int_t_DMI_speedProfile_DATA_Variables(
  /* dmi_speedProfile_int/ */
  DMI_speedProfile_int_array_T_DATA *dmi_speedProfile_int,
  outC_CAST_int_t_DMI_speedProfile_DATA_Variables *outC)
{
  static kcg_size idx;

  kcg_copy_DMI_speedProfile_int_array_T_DATA(&outC->_L13, dmi_speedProfile_int);
  outC->_L22 = outC->_L13[0];
  /* _L27=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_Utilities(outC->_L22, &outC->Context_Int_to_Bool_2);
  outC->_L27 = outC->Context_Int_to_Bool_2.bool_out;
  kcg_copy_array_int64_32(&outC->_L20, (array_int64_32 *) &outC->_L13[1]);
  kcg_copy_array_int64_32(&outC->_L21, (array_int64_32 *) &outC->_L13[33]);
  kcg_copy_array_int64_32(&outC->_L24, (array_int64_32 *) &outC->_L13[65]);
  kcg_copy_array_int64_32(&outC->_L25, (array_int64_32 *) &outC->_L13[97]);
  /* _L23= */
  for (idx = 0; idx < 32; idx++) {
    /* _L23=(DATA::Variables::CAST_int_to_DMI_speedProfileElement#2)/ */
    CAST_int_to_DMI_speedProfileElement_DATA_Variables(
      outC->_L20[idx],
      outC->_L21[idx],
      outC->_L24[idx],
      outC->_L25[idx],
      &outC->Context_CAST_int_to_DMI_speedProfileElement_2[idx]);
    kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
      &outC->_L23[idx],
      &outC->Context_CAST_int_to_DMI_speedProfileElement_2[idx].dmi_speedProfileElemen);
  }
  outC->_L26.profileChanged = outC->_L27;
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &outC->_L26.speedProfiles,
    &outC->_L23);
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(&outC->dmi_speedProfile, &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_t_DMI_speedProfile_init_DATA_Variables(
  outC_CAST_int_t_DMI_speedProfile_DATA_Variables *outC)
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
    outC->_L20[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L21[idx2] = kcg_lit_int64(0);
  }
  outC->_L22 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L23[idx3].valid = kcg_true;
    outC->_L23[idx3].Loc_Abs = kcg_lit_int64(0);
    outC->_L23[idx3].Loc_LRBG = kcg_lit_int64(0);
    outC->_L23[idx3].MRS = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L24[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L25[idx5] = kcg_lit_int64(0);
  }
  outC->_L26.profileChanged = kcg_true;
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L26.speedProfiles[idx6].valid = kcg_true;
    outC->_L26.speedProfiles[idx6].Loc_Abs = kcg_lit_int64(0);
    outC->_L26.speedProfiles[idx6].Loc_LRBG = kcg_lit_int64(0);
    outC->_L26.speedProfiles[idx6].MRS = kcg_lit_int64(0);
  }
  outC->_L27 = kcg_true;
  for (idx7 = 0; idx7 < 129; idx7++) {
    outC->_L13[idx7] = kcg_lit_int64(0);
  }
  outC->dmi_speedProfile.profileChanged = kcg_true;
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->dmi_speedProfile.speedProfiles[idx8].valid = kcg_true;
    outC->dmi_speedProfile.speedProfiles[idx8].Loc_Abs = kcg_lit_int64(0);
    outC->dmi_speedProfile.speedProfiles[idx8].Loc_LRBG = kcg_lit_int64(0);
    outC->dmi_speedProfile.speedProfiles[idx8].MRS = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L23=(DATA::Variables::CAST_int_to_DMI_speedProfileElement#2)/ */
    CAST_int_to_DMI_speedProfileElement_init_DATA_Variables(
      &outC->Context_CAST_int_to_DMI_speedProfileElement_2[idx]);
  }
  /* _L27=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_t_DMI_speedProfile_reset_DATA_Variables(
  outC_CAST_int_t_DMI_speedProfile_DATA_Variables *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L23=(DATA::Variables::CAST_int_to_DMI_speedProfileElement#2)/ */
    CAST_int_to_DMI_speedProfileElement_reset_DATA_Variables(
      &outC->Context_CAST_int_to_DMI_speedProfileElement_2[idx]);
  }
  /* _L27=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_t_DMI_speedProfile_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

