/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyTrackDescription_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copyTrackDescription/ */
void copyTrackDescription_manage_DMI_Output_Pkg(
  /* fromTrackAtlas/ */
  DataForDMI_t_TrackAtlasTypes *fromTrackAtlas,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_copyTrackDescription_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int64 noname;
  static kcg_int64 _2_noname;

  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    &outC->_L34,
    (DMI_gradientProfileElement_T_DMI_Types_Pkg *)
      &cEmptyGradientProfileElement_manage_DMI_Output_Pkg);
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
    &outC->_L33,
    (DMI_speedProfileElement_T_DMI_Types_Pkg *)
      &cEmptySpeedProfileElement_manage_DMI_Output_Pkg);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &outC->_L31,
    (DMI_trackCondition_T_DMI_Types_Pkg *)
      &cNoTrackCondition_manage_DMI_Output_Pkg);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L28 = inSystemTime;
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->_L1, fromTrackAtlas);
  outC->_L10 = outC->_L1.MRSP_updated;
  outC->_L25 = outC->_L1.Gradient_profile_updated;
  outC->_L26 = outC->_L25 | outC->_L10;
  /* _L29= */
  if (outC->_L26) {
    outC->_L29 = outC->_L28;
  }
  else {
    outC->_L29 = outC->_L30;
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L11, &outC->_L1.MRSP);
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &outC->_L13,
    (DMI_SpeedProfileArray_T_DMI_Types_Pkg *) &outC->_L11[0]);
  /* _L8= */
  if (outC->_L10) {
    /* _L8= */
    for (idx = 0; idx < 32; idx++) {
      /* _L8=(manage_DMI_Output_Pkg::copySpeedProfileElement#1)/ */
      copySpeedProfileElement_manage_DMI_Output_Pkg(
        /* _L8= */(kcg_int64) idx,
        &outC->_L13[idx],
        &outC->Context_copySpeedProfileElement_1[idx]);
      kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
        &outC->_L7[idx],
        &outC->Context_copySpeedProfileElement_1[idx].toDMI);
      outC->_L8 = /* _L8= */(kcg_int64) (idx + 1);
      /* _L8= */
      if (!outC->Context_copySpeedProfileElement_1[idx]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L8 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L8= */
  for (idx = /* _L8= */(kcg_size) outC->_L8; idx < 32; idx++) {
    kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(&outC->_L7[idx], &outC->_L33);
  }
#endif /* KCG_MAPW_CPY */

  outC->_L22.profileChanged = outC->_L10;
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &outC->_L22.speedProfiles,
    &outC->_L7);
  outC->_L17 = outC->_L1.Gradient_profile_updated;
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->_L15,
    &outC->_L1.GradientProfile);
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &outC->_L16,
    (DMI_gradientProfileArray_T_DMI_Types_Pkg *) &outC->_L15[0]);
  /* _L20= */
  if (outC->_L17) {
    /* _L20= */
    for (idx1 = 0; idx1 < 32; idx1++) {
      /* _L20=(manage_DMI_Output_Pkg::copyGradientElement#1)/ */
      copyGradientElement_manage_DMI_Output_Pkg(
        /* _L20= */(kcg_int64) idx1,
        &outC->_L16[idx1],
        &outC->Context_copyGradientElement_1[idx1]);
      kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
        &outC->_L19[idx1],
        &outC->Context_copyGradientElement_1[idx1].toDMI);
      outC->_L20 = /* _L20= */(kcg_int64) (idx1 + 1);
      /* _L20= */
      if (!outC->Context_copyGradientElement_1[idx1]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L20 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L20= */
  for (idx1 = /* _L20= */(kcg_size) outC->_L20; idx1 < 32; idx1++) {
    kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
      &outC->_L19[idx1],
      &outC->_L34);
  }
#endif /* KCG_MAPW_CPY */

  outC->_L23.profileChanged = outC->_L17;
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &outC->_L23.gradientProfiles,
    &outC->_L19);
  outC->_L27.valid = outC->_L26;
  outC->_L27.system_clock = outC->_L29;
  kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(
    &outC->_L27.speedProfiles,
    &outC->_L22);
  kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(
    &outC->_L27.gradientProfiles,
    &outC->_L23);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &outC->_L27.trackConditions,
    &outC->_L31);
  _2_noname = outC->_L20;
  noname = outC->_L8;
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->toDMI,
    &outC->_L27);
}

#ifndef KCG_USER_DEFINED_INIT
void copyTrackDescription_init_manage_DMI_Output_Pkg(
  outC_copyTrackDescription_manage_DMI_Output_Pkg *outC)
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
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;

  outC->_L34.valid = kcg_true;
  outC->_L34.begin_section = kcg_lit_int64(0);
  outC->_L34.end_section = kcg_lit_int64(0);
  outC->_L34.gradient = kcg_lit_int64(0);
  outC->_L33.valid = kcg_true;
  outC->_L33.Loc_Abs = kcg_lit_int64(0);
  outC->_L33.Loc_LRBG = kcg_lit_int64(0);
  outC->_L33.MRS = kcg_lit_int64(0);
  outC->_L31.nIter = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L31.trackCondition[idx2].d_trackcond = kcg_lit_int64(0);
    outC->_L31.trackCondition[idx2].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27.valid = kcg_true;
  outC->_L27.system_clock = kcg_lit_int64(0);
  outC->_L27.speedProfiles.profileChanged = kcg_true;
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L27.speedProfiles.speedProfiles[idx3].valid = kcg_true;
    outC->_L27.speedProfiles.speedProfiles[idx3].Loc_Abs = kcg_lit_int64(0);
    outC->_L27.speedProfiles.speedProfiles[idx3].Loc_LRBG = kcg_lit_int64(0);
    outC->_L27.speedProfiles.speedProfiles[idx3].MRS = kcg_lit_int64(0);
  }
  outC->_L27.gradientProfiles.profileChanged = kcg_true;
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L27.gradientProfiles.gradientProfiles[idx4].valid = kcg_true;
    outC->_L27.gradientProfiles.gradientProfiles[idx4].begin_section =
      kcg_lit_int64(0);
    outC->_L27.gradientProfiles.gradientProfiles[idx4].end_section =
      kcg_lit_int64(0);
    outC->_L27.gradientProfiles.gradientProfiles[idx4].gradient = kcg_lit_int64(0);
  }
  outC->_L27.trackConditions.nIter = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L27.trackConditions.trackCondition[idx5].d_trackcond = kcg_lit_int64(0);
    outC->_L27.trackConditions.trackCondition[idx5].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L23.profileChanged = kcg_true;
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L23.gradientProfiles[idx6].valid = kcg_true;
    outC->_L23.gradientProfiles[idx6].begin_section = kcg_lit_int64(0);
    outC->_L23.gradientProfiles[idx6].end_section = kcg_lit_int64(0);
    outC->_L23.gradientProfiles[idx6].gradient = kcg_lit_int64(0);
  }
  outC->_L22.profileChanged = kcg_true;
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L22.speedProfiles[idx7].valid = kcg_true;
    outC->_L22.speedProfiles[idx7].Loc_Abs = kcg_lit_int64(0);
    outC->_L22.speedProfiles[idx7].Loc_LRBG = kcg_lit_int64(0);
    outC->_L22.speedProfiles[idx7].MRS = kcg_lit_int64(0);
  }
  outC->_L20 = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L19[idx8].valid = kcg_true;
    outC->_L19[idx8].begin_section = kcg_lit_int64(0);
    outC->_L19[idx8].end_section = kcg_lit_int64(0);
    outC->_L19[idx8].gradient = kcg_lit_int64(0);
  }
  outC->_L17 = kcg_true;
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->_L15[idx9].valid = kcg_true;
    outC->_L15[idx9].begin_section = kcg_lit_int64(0);
    outC->_L15[idx9].end_section = kcg_lit_int64(0);
    outC->_L15[idx9].gradient = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L16[idx10].valid = kcg_true;
    outC->_L16[idx10].begin_section = kcg_lit_int64(0);
    outC->_L16[idx10].end_section = kcg_lit_int64(0);
    outC->_L16[idx10].gradient = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L13[idx11].valid = kcg_true;
    outC->_L13[idx11].Loc_Abs = kcg_lit_int64(0);
    outC->_L13[idx11].Loc_LRBG = kcg_lit_int64(0);
    outC->_L13[idx11].MRS = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 110; idx12++) {
    outC->_L11[idx12].valid = kcg_true;
    outC->_L11[idx12].Loc_Abs = kcg_lit_int64(0);
    outC->_L11[idx12].Loc_LRBG = kcg_lit_int64(0);
    outC->_L11[idx12].MRS = kcg_lit_int64(0);
  }
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L7[idx13].valid = kcg_true;
    outC->_L7[idx13].Loc_Abs = kcg_lit_int64(0);
    outC->_L7[idx13].Loc_LRBG = kcg_lit_int64(0);
    outC->_L7[idx13].MRS = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 50; idx14++) {
    outC->_L1.GradientProfile[idx14].valid = kcg_true;
    outC->_L1.GradientProfile[idx14].begin_section = kcg_lit_int64(0);
    outC->_L1.GradientProfile[idx14].end_section = kcg_lit_int64(0);
    outC->_L1.GradientProfile[idx14].gradient = kcg_lit_int64(0);
  }
  outC->_L1.Gradient_profile_updated = kcg_true;
  for (idx15 = 0; idx15 < 110; idx15++) {
    outC->_L1.MRSP[idx15].valid = kcg_true;
    outC->_L1.MRSP[idx15].Loc_Abs = kcg_lit_int64(0);
    outC->_L1.MRSP[idx15].Loc_LRBG = kcg_lit_int64(0);
    outC->_L1.MRSP[idx15].MRS = kcg_lit_int64(0);
  }
  outC->_L1.MRSP_updated = kcg_true;
  outC->toDMI.valid = kcg_true;
  outC->toDMI.system_clock = kcg_lit_int64(0);
  outC->toDMI.speedProfiles.profileChanged = kcg_true;
  for (idx16 = 0; idx16 < 32; idx16++) {
    outC->toDMI.speedProfiles.speedProfiles[idx16].valid = kcg_true;
    outC->toDMI.speedProfiles.speedProfiles[idx16].Loc_Abs = kcg_lit_int64(0);
    outC->toDMI.speedProfiles.speedProfiles[idx16].Loc_LRBG = kcg_lit_int64(0);
    outC->toDMI.speedProfiles.speedProfiles[idx16].MRS = kcg_lit_int64(0);
  }
  outC->toDMI.gradientProfiles.profileChanged = kcg_true;
  for (idx17 = 0; idx17 < 32; idx17++) {
    outC->toDMI.gradientProfiles.gradientProfiles[idx17].valid = kcg_true;
    outC->toDMI.gradientProfiles.gradientProfiles[idx17].begin_section =
      kcg_lit_int64(0);
    outC->toDMI.gradientProfiles.gradientProfiles[idx17].end_section =
      kcg_lit_int64(0);
    outC->toDMI.gradientProfiles.gradientProfiles[idx17].gradient =
      kcg_lit_int64(0);
  }
  outC->toDMI.trackConditions.nIter = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 32; idx18++) {
    outC->toDMI.trackConditions.trackCondition[idx18].d_trackcond =
      kcg_lit_int64(0);
    outC->toDMI.trackConditions.trackCondition[idx18].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  for (idx1 = 0; idx1 < 32; idx1++) {
    /* _L20=(manage_DMI_Output_Pkg::copyGradientElement#1)/ */
    copyGradientElement_init_manage_DMI_Output_Pkg(
      &outC->Context_copyGradientElement_1[idx1]);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L8=(manage_DMI_Output_Pkg::copySpeedProfileElement#1)/ */
    copySpeedProfileElement_init_manage_DMI_Output_Pkg(
      &outC->Context_copySpeedProfileElement_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void copyTrackDescription_reset_manage_DMI_Output_Pkg(
  outC_copyTrackDescription_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 32; idx1++) {
    /* _L20=(manage_DMI_Output_Pkg::copyGradientElement#1)/ */
    copyGradientElement_reset_manage_DMI_Output_Pkg(
      &outC->Context_copyGradientElement_1[idx1]);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L8=(manage_DMI_Output_Pkg::copySpeedProfileElement#1)/ */
    copySpeedProfileElement_reset_manage_DMI_Output_Pkg(
      &outC->Context_copySpeedProfileElement_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** copyTrackDescription_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

