/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Track_Descripti_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int/ */
void Write_DMI_Track_Descripti_DATA_Packets_EVC_to_DMI(
  /* dmi_track_description_ct/ */
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct,
  outC_Write_DMI_Track_Descripti_DATA_Packets_EVC_to_DMI *outC)
{
  DMI_Track_Description_int_array_T op_call;

  kcg_copy__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_track_description_ct);
  outC->_L14 = outC->_L1.valid;
  outC->every = outC->_L14;
  if (outC->every) {
    /* _L13=(DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int#1)/ */
    CAST_DMI_Track_Descriptio_DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_Track_Description_to_int_1);
    kcg_copy_DMI_Track_Description_int_array_T(
      &op_call,
      &outC->Context_CAST_DMI_Track_Description_to_int_1.Output1);
  }
  kcg_copy_DMI_Track_Description_int_array_T(
    &outC->_L15,
    (DMI_Track_Description_int_array_T *)
      &cDMI_Track_Description_in_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Track_Description_int_array_T(&outC->_L13, &op_call);
  }
  else {
    kcg_copy_DMI_Track_Description_int_array_T(&outC->_L13, &outC->_L15);
  }
  kcg_copy_DMI_Track_Description_int_array_T(
    &outC->dmi_track_description_int,
    &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Track_Descripti_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Track_Descripti_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  for (idx = 0; idx < 325; idx++) {
    outC->_L13[idx] = kcg_lit_int32(0);
  }
  outC->_L14 = kcg_true;
  for (idx1 = 0; idx1 < 325; idx1++) {
    outC->_L15[idx1] = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.speedProfiles.profileChanged = kcg_true;
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L1.speedProfiles.speedProfiles[idx2].valid = kcg_true;
    outC->_L1.speedProfiles.speedProfiles[idx2].Loc_Abs = kcg_lit_int32(0);
    outC->_L1.speedProfiles.speedProfiles[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1.speedProfiles.speedProfiles[idx2].MRS = kcg_lit_int32(0);
  }
  outC->_L1.gradientProfiles.profileChanged = kcg_true;
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L1.gradientProfiles.gradientProfiles[idx3].valid = kcg_true;
    outC->_L1.gradientProfiles.gradientProfiles[idx3].begin_section =
      kcg_lit_int32(0);
    outC->_L1.gradientProfiles.gradientProfiles[idx3].end_section =
      kcg_lit_int32(0);
    outC->_L1.gradientProfiles.gradientProfiles[idx3].gradient = kcg_lit_int32(0);
  }
  outC->_L1.trackConditions.nIter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L1.trackConditions.trackCondition[idx4].d_trackcond = kcg_lit_int32(0);
    outC->_L1.trackConditions.trackCondition[idx4].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->every = kcg_true;
  for (idx5 = 0; idx5 < 325; idx5++) {
    outC->dmi_track_description_int[idx5] = kcg_lit_int32(0);
  }
  /* _L13=(DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int#1)/ */
  CAST_DMI_Track_Descriptio_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Track_Description_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Track_Descripti_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Track_Descripti_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L13=(DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int#1)/ */
  CAST_DMI_Track_Descriptio_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Track_Description_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Track_Descripti_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

