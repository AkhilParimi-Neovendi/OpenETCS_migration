/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description/ */
void Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* dmi_track_description_int/ */
  DMI_Track_Description_int_array_T *dmi_track_description_int,
  outC_Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Track_Description_int_array_T(
    &outC->_L14,
    dmi_track_description_int);
  outC->_L24 = outC->_L14[0];
  outC->_L25 = kcg_lit_int32(1);
  outC->_L26 = outC->_L25 == outC->_L24;
  outC->every = outC->_L26;
  if (outC->every) {
    /* _L28=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description#1)/ */
    CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
      &outC->_L14,
      &outC->Context_CAST_int_to_DMI_Track_Description_1);
    kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_Track_Description_1.dmi_track_description_ct);
  }
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29,
    (DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Track_Description_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L28,
      &op_call);
  }
  else {
    kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L28,
      &outC->_L29);
  }
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_track_description_ct,
    &outC->_L28);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Track_Description_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC)
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

  outC->_L29.valid = kcg_true;
  outC->_L29.system_clock = kcg_lit_int32(0);
  outC->_L29.speedProfiles.profileChanged = kcg_true;
  for (idx = 0; idx < 32; idx++) {
    outC->_L29.speedProfiles.speedProfiles[idx].valid = kcg_true;
    outC->_L29.speedProfiles.speedProfiles[idx].Loc_Abs = kcg_lit_int32(0);
    outC->_L29.speedProfiles.speedProfiles[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L29.speedProfiles.speedProfiles[idx].MRS = kcg_lit_int32(0);
  }
  outC->_L29.gradientProfiles.profileChanged = kcg_true;
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L29.gradientProfiles.gradientProfiles[idx1].valid = kcg_true;
    outC->_L29.gradientProfiles.gradientProfiles[idx1].begin_section =
      kcg_lit_int32(0);
    outC->_L29.gradientProfiles.gradientProfiles[idx1].end_section =
      kcg_lit_int32(0);
    outC->_L29.gradientProfiles.gradientProfiles[idx1].gradient = kcg_lit_int32(0);
  }
  outC->_L29.trackConditions.nIter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L29.trackConditions.trackCondition[idx2].d_trackcond = kcg_lit_int32(0);
    outC->_L29.trackConditions.trackCondition[idx2].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L24 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L26 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.system_clock = kcg_lit_int32(0);
  outC->_L28.speedProfiles.profileChanged = kcg_true;
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L28.speedProfiles.speedProfiles[idx3].valid = kcg_true;
    outC->_L28.speedProfiles.speedProfiles[idx3].Loc_Abs = kcg_lit_int32(0);
    outC->_L28.speedProfiles.speedProfiles[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L28.speedProfiles.speedProfiles[idx3].MRS = kcg_lit_int32(0);
  }
  outC->_L28.gradientProfiles.profileChanged = kcg_true;
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L28.gradientProfiles.gradientProfiles[idx4].valid = kcg_true;
    outC->_L28.gradientProfiles.gradientProfiles[idx4].begin_section =
      kcg_lit_int32(0);
    outC->_L28.gradientProfiles.gradientProfiles[idx4].end_section =
      kcg_lit_int32(0);
    outC->_L28.gradientProfiles.gradientProfiles[idx4].gradient = kcg_lit_int32(0);
  }
  outC->_L28.trackConditions.nIter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L28.trackConditions.trackCondition[idx5].d_trackcond = kcg_lit_int32(0);
    outC->_L28.trackConditions.trackCondition[idx5].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  for (idx6 = 0; idx6 < 325; idx6++) {
    outC->_L14[idx6] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_track_description_ct.valid = kcg_true;
  outC->dmi_track_description_ct.system_clock = kcg_lit_int32(0);
  outC->dmi_track_description_ct.speedProfiles.profileChanged = kcg_true;
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx7].valid =
      kcg_true;
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx7].Loc_Abs =
      kcg_lit_int32(0);
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx7].Loc_LRBG =
      kcg_lit_int32(0);
    outC->dmi_track_description_ct.speedProfiles.speedProfiles[idx7].MRS =
      kcg_lit_int32(0);
  }
  outC->dmi_track_description_ct.gradientProfiles.profileChanged = kcg_true;
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx8].valid =
      kcg_true;
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx8].begin_section =
      kcg_lit_int32(0);
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx8].end_section =
      kcg_lit_int32(0);
    outC->dmi_track_description_ct.gradientProfiles.gradientProfiles[idx8].gradient =
      kcg_lit_int32(0);
  }
  outC->dmi_track_description_ct.trackConditions.nIter = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->dmi_track_description_ct.trackConditions.trackCondition[idx9].d_trackcond =
      kcg_lit_int32(0);
    outC->dmi_track_description_ct.trackConditions.trackCondition[idx9].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  /* _L28=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description#1)/ */
  CAST_int_to_DMI_Track_Description_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Track_Description_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Track_Description_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L28=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description#1)/ */
  CAST_int_to_DMI_Track_Description_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Track_Description_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

