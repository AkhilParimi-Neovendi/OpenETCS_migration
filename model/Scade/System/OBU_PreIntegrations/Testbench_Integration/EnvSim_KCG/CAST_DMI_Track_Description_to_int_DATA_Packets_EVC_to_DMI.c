/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int/ */
void CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
  /* Input1/ */
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *Input1,
  outC_CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static array_int32_260 tmp;
  static array_int32_131 tmp1;

  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    Input1);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &outC->_L2,
    &outC->_L1.trackConditions);
  /* _L8=(DATA::Variables::CAST_DMI_trackCondition_to_int#1)/ */
  CAST_DMI_trackCondition_to_int_DATA_Variables(
    &outC->_L2,
    &outC->Context_CAST_DMI_trackCondition_to_int_1);
  kcg_copy_DMI_trackCondition_int_array_T(
    &outC->_L8,
    &outC->Context_CAST_DMI_trackCondition_to_int_1.dmi_trackCondition_int);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(
    &outC->_L3,
    &outC->_L1.gradientProfiles);
  /* _L9=(DATA::Variables::CAST_DMI_gradientProfile_to_int#1)/ */
  CAST_DMI_gradientProfile_to_int_DATA_Variables(
    &outC->_L3,
    &outC->Context_CAST_DMI_gradientProfile_to_int_1);
  kcg_copy_DMI_gradientProfile_int_arrayT(
    &outC->_L9,
    &outC->Context_CAST_DMI_gradientProfile_to_int_1.DMI_gradientProfile_int);
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(&outC->_L4, &outC->_L1.speedProfiles);
  /* _L10=(DATA::Variables::CAST_DMI_speedProfile_to_int#1)/ */
  CAST_DMI_speedProfile_to_int_DATA_Variables(
    &outC->_L4,
    &outC->Context_CAST_DMI_speedProfile_to_int_1);
  kcg_copy_DMI_speedProfile_int_array_T_DATA(
    &outC->_L10,
    &outC->Context_CAST_DMI_speedProfile_to_int_1.dmi_speedProfile_int);
  outC->_L6 = outC->_L1.valid;
  /* _L11=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L6, &outC->Context_Bool_to_Int_1);
  outC->_L11 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L5 = outC->_L1.system_clock;
  outC->_L7[0] = outC->_L11;
  outC->_L7[1] = outC->_L5;
  kcg_copy_array_int32_2(&tmp1[0], &outC->_L7);
  kcg_copy_DMI_speedProfile_int_array_T_DATA(&tmp1[2], &outC->_L10);
  kcg_copy_array_int32_131(&tmp[0], &tmp1);
  kcg_copy_DMI_gradientProfile_int_arrayT(&tmp[131], &outC->_L9);
  kcg_copy_array_int32_260(&outC->_L12[0], &tmp);
  kcg_copy_DMI_trackCondition_int_array_T(&outC->_L12[260], &outC->_L8);
  kcg_copy_DMI_Track_Description_int_array_T(&outC->Output1, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Track_Description_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI *outC)
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
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;

  for (idx = 0; idx < 325; idx++) {
    outC->_L12[idx] = kcg_lit_int32(0);
  }
  outC->_L11 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 129; idx1++) {
    outC->_L10[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 129; idx2++) {
    outC->_L9[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 65; idx3++) {
    outC->_L8[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 2; idx4++) {
    outC->_L7[idx4] = kcg_lit_int32(0);
  }
  outC->_L2.nIter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L2.trackCondition[idx5].d_trackcond = kcg_lit_int32(0);
    outC->_L2.trackCondition[idx5].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L3.profileChanged = kcg_true;
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L3.gradientProfiles[idx6].valid = kcg_true;
    outC->_L3.gradientProfiles[idx6].begin_section = kcg_lit_int32(0);
    outC->_L3.gradientProfiles[idx6].end_section = kcg_lit_int32(0);
    outC->_L3.gradientProfiles[idx6].gradient = kcg_lit_int32(0);
  }
  outC->_L4.profileChanged = kcg_true;
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L4.speedProfiles[idx7].valid = kcg_true;
    outC->_L4.speedProfiles[idx7].Loc_Abs = kcg_lit_int32(0);
    outC->_L4.speedProfiles[idx7].Loc_LRBG = kcg_lit_int32(0);
    outC->_L4.speedProfiles[idx7].MRS = kcg_lit_int32(0);
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.speedProfiles.profileChanged = kcg_true;
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L1.speedProfiles.speedProfiles[idx8].valid = kcg_true;
    outC->_L1.speedProfiles.speedProfiles[idx8].Loc_Abs = kcg_lit_int32(0);
    outC->_L1.speedProfiles.speedProfiles[idx8].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1.speedProfiles.speedProfiles[idx8].MRS = kcg_lit_int32(0);
  }
  outC->_L1.gradientProfiles.profileChanged = kcg_true;
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L1.gradientProfiles.gradientProfiles[idx9].valid = kcg_true;
    outC->_L1.gradientProfiles.gradientProfiles[idx9].begin_section =
      kcg_lit_int32(0);
    outC->_L1.gradientProfiles.gradientProfiles[idx9].end_section =
      kcg_lit_int32(0);
    outC->_L1.gradientProfiles.gradientProfiles[idx9].gradient = kcg_lit_int32(0);
  }
  outC->_L1.trackConditions.nIter = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L1.trackConditions.trackCondition[idx10].d_trackcond = kcg_lit_int32(0);
    outC->_L1.trackConditions.trackCondition[idx10].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  for (idx11 = 0; idx11 < 325; idx11++) {
    outC->Output1[idx11] = kcg_lit_int32(0);
  }
  /* _L11=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L10=(DATA::Variables::CAST_DMI_speedProfile_to_int#1)/ */
  CAST_DMI_speedProfile_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_speedProfile_to_int_1);
  /* _L9=(DATA::Variables::CAST_DMI_gradientProfile_to_int#1)/ */
  CAST_DMI_gradientProfile_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_gradientProfile_to_int_1);
  /* _L8=(DATA::Variables::CAST_DMI_trackCondition_to_int#1)/ */
  CAST_DMI_trackCondition_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_trackCondition_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Track_Description_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L11=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L10=(DATA::Variables::CAST_DMI_speedProfile_to_int#1)/ */
  CAST_DMI_speedProfile_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_speedProfile_to_int_1);
  /* _L9=(DATA::Variables::CAST_DMI_gradientProfile_to_int#1)/ */
  CAST_DMI_gradientProfile_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_gradientProfile_to_int_1);
  /* _L8=(DATA::Variables::CAST_DMI_trackCondition_to_int#1)/ */
  CAST_DMI_trackCondition_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_trackCondition_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

