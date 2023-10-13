/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description/ */
void CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* dmi_track_description_int/ */
  DMI_Track_Description_int_array_T *dmi_track_description_int,
  outC_CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Track_Description_int_array_T(
    &outC->_L14,
    dmi_track_description_int);
  kcg_copy_array_int64_129(&outC->_L17, (array_int64_129 *) &outC->_L14[2]);
  /* _L23=(DATA::Variables::CAST_int_t_DMI_speedProfile#1)/ */
  CAST_int_t_DMI_speedProfile_DATA_Variables(
    &outC->_L17,
    &outC->Context_CAST_int_t_DMI_speedProfile_1);
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(
    &outC->_L23,
    &outC->Context_CAST_int_t_DMI_speedProfile_1.dmi_speedProfile);
  outC->_L15 = outC->_L14[0];
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L15, &outC->Context_Int_to_Bool_1);
  outC->_L22 = outC->Context_Int_to_Bool_1.bool_out;
  kcg_copy_array_int64_65(&outC->_L19, (array_int64_65 *) &outC->_L14[260]);
  /* _L21=(DATA::Variables::CAST_int_to_DMI_trackCondition#1)/ */
  CAST_int_to_DMI_trackCondition_DATA_Variables(
    &outC->_L19,
    &outC->Context_CAST_int_to_DMI_trackCondition_1);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &outC->_L21,
    &outC->Context_CAST_int_to_DMI_trackCondition_1.dmi_trackCondition_ct);
  kcg_copy_array_int64_129(&outC->_L18, (array_int64_129 *) &outC->_L14[131]);
  /* _L20=(DATA::Variables::CAST_int_to_DMI_gradientProfile#1)/ */
  CAST_int_to_DMI_gradientProfile_DATA_Variables(
    &outC->_L18,
    &outC->Context_CAST_int_to_DMI_gradientProfile_1);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(
    &outC->_L20,
    &outC->Context_CAST_int_to_DMI_gradientProfile_1.dmi_gradientProfile);
  outC->_L16 = outC->_L14[1];
  outC->_L12.valid = outC->_L22;
  outC->_L12.system_clock = outC->_L16;
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(
    &outC->_L12.speedProfiles,
    &outC->_L23);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(
    &outC->_L12.gradientProfiles,
    &outC->_L20);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &outC->_L12.trackConditions,
    &outC->_L21);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_track_description_ct,
    &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Track_Description_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC)
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
  static kcg_size idx12;

  outC->_L23.profileChanged = kcg_true;
  for (idx = 0; idx < 32; idx++) {
    outC->_L23.speedProfiles[idx].valid = kcg_true;
    outC->_L23.speedProfiles[idx].Loc_Abs = kcg_lit_int64(0);
    outC->_L23.speedProfiles[idx].Loc_LRBG = kcg_lit_int64(0);
    outC->_L23.speedProfiles[idx].MRS = kcg_lit_int64(0);
  }
  outC->_L22 = kcg_true;
  outC->_L21.nIter = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L21.trackCondition[idx1].d_trackcond = kcg_lit_int64(0);
    outC->_L21.trackCondition[idx1].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L20.profileChanged = kcg_true;
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L20.gradientProfiles[idx2].valid = kcg_true;
    outC->_L20.gradientProfiles[idx2].begin_section = kcg_lit_int64(0);
    outC->_L20.gradientProfiles[idx2].end_section = kcg_lit_int64(0);
    outC->_L20.gradientProfiles[idx2].gradient = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 65; idx3++) {
    outC->_L19[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 129; idx4++) {
    outC->_L18[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 129; idx5++) {
    outC->_L17[idx5] = kcg_lit_int64(0);
  }
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 325; idx6++) {
    outC->_L14[idx6] = kcg_lit_int64(0);
  }
  outC->_L12.valid = kcg_true;
  outC->_L12.system_clock = kcg_lit_int64(0);
  outC->_L12.speedProfiles.profileChanged = kcg_true;
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L12.speedProfiles.speedProfiles[idx7].valid = kcg_true;
    outC->_L12.speedProfiles.speedProfiles[idx7].Loc_Abs = kcg_lit_int64(0);
    outC->_L12.speedProfiles.speedProfiles[idx7].Loc_LRBG = kcg_lit_int64(0);
    outC->_L12.speedProfiles.speedProfiles[idx7].MRS = kcg_lit_int64(0);
  }
  outC->_L12.gradientProfiles.profileChanged = kcg_true;
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L12.gradientProfiles.gradientProfiles[idx8].valid = kcg_true;
    outC->_L12.gradientProfiles.gradientProfiles[idx8].begin_section =
      kcg_lit_int64(0);
    outC->_L12.gradientProfiles.gradientProfiles[idx8].end_section =
      kcg_lit_int64(0);
    outC->_L12.gradientProfiles.gradientProfiles[idx8].gradient = kcg_lit_int64(0);
  }
  outC->_L12.trackConditions.nIter = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L12.trackConditions.trackCondition[idx9].d_trackcond = kcg_lit_int64(0);
    outC->_L12.trackConditions.trackCondition[idx9].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->dmi_track_description_ct.valid = kcg_true;
  outC->dmi_track_description_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_track_description_ct.speedProfiles.profileChanged = kcg_true;
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx10].valid =
      kcg_true;
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx10].Loc_Abs =
      kcg_lit_int64(0);
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx10].Loc_LRBG =
      kcg_lit_int64(0);
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx10].MRS =
      kcg_lit_int64(0);
  }
  outC->dmi_track_description_ct.gradientProfiles.profileChanged = kcg_true;
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx11].valid =
      kcg_true;
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx11].begin_section =
      kcg_lit_int64(0);
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx11].end_section =
      kcg_lit_int64(0);
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx11].gradient =
      kcg_lit_int64(0);
  }
  outC->dmi_track_description_ct.trackConditions.nIter = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 32; idx12++) {
    outC->dmi_track_description_ct.trackConditions.trackCondition[idx12].d_trackcond =
      kcg_lit_int64(0);
    outC->dmi_track_description_ct.trackConditions.trackCondition[idx12].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  /* _L20=(DATA::Variables::CAST_int_to_DMI_gradientProfile#1)/ */
  CAST_int_to_DMI_gradientProfile_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_gradientProfile_1);
  /* _L21=(DATA::Variables::CAST_int_to_DMI_trackCondition#1)/ */
  CAST_int_to_DMI_trackCondition_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_trackCondition_1);
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L23=(DATA::Variables::CAST_int_t_DMI_speedProfile#1)/ */
  CAST_int_t_DMI_speedProfile_init_DATA_Variables(
    &outC->Context_CAST_int_t_DMI_speedProfile_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Track_Description_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L20=(DATA::Variables::CAST_int_to_DMI_gradientProfile#1)/ */
  CAST_int_to_DMI_gradientProfile_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_gradientProfile_1);
  /* _L21=(DATA::Variables::CAST_int_to_DMI_trackCondition#1)/ */
  CAST_int_to_DMI_trackCondition_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_trackCondition_1);
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L23=(DATA::Variables::CAST_int_t_DMI_speedProfile#1)/ */
  CAST_int_t_DMI_speedProfile_reset_DATA_Variables(
    &outC->Context_CAST_int_t_DMI_speedProfile_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

